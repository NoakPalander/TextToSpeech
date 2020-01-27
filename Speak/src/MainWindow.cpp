#include "MainWindow.hpp"
#include "ui_MainWindow.h"
#include <QMessageBox>
#include <QWidget>
#include <vector>
#include <QString>
#include <fstream>
#include <sstream>
#include "Utility.hpp"
#include <iostream>
#include <QLineEdit>
#include <stdexcept>


MainWindow::MainWindow(QWidget *parent)
    :   QMainWindow(parent),
        ui(std::make_unique<Ui::MainWindow>()),
        m_TTS(this) {

    this->ui->setupUi(this);

    // Loads style-sheet for all ui-widgets
    Utility::Load({ this, this->ui->container, this->ui->volumeLabel, this->ui->voiceSpeedLabel,
           this->ui->genderLabel, this->ui->volumeSlider, this->ui->voiceSpeedSlider }, "../../src/style.qss");


    // Sets up widget properties
    this->ui->maleBox->setChecked(true);
    this->ui->volumeLabel->setText(QString("Volume %1%").arg(this->ui->volumeSlider->sliderPosition()));
    this->ui->voiceSpeedLabel->setText(QString("Speed %1%").arg(this->ui->voiceSpeedSlider->sliderPosition()));

    // Sets up TTS properties
    m_TTS.ChangeVolume(30);
    m_TTS.ChangeVoiceSpeed(25);
    m_TTS.ChangeGender(TTS::Gender::Male);

    // Speak button pressed
    connect(this->ui->speakBtn, &QPushButton::clicked, this, [this]() {
        m_TTS.Speak(this->ui->textEdit->toPlainText());
    });

    // Stop button pressed
    connect(this->ui->stopBtn, &QPushButton::clicked, this, [this]() {
        m_TTS.Stop();
    });

    // Changed volume
    connect(this->ui->volumeSlider, &QSlider::sliderMoved, this, [this]() {
        m_TTS.ChangeVolume(this->ui->volumeSlider->value(), [this](int val) {
            this->ui->volumeLabel->setText(QString("Volume " + (val > 0 ? QString::number(val) + "%" : "Muted")));
        });
    });

    // Changed voice speed
    connect(this->ui->voiceSpeedSlider, &QSlider::sliderMoved, this, [this]() {
        m_TTS.ChangeVoiceSpeed(this->ui->voiceSpeedSlider->value(), [this](int val) {
            if (val > 1 && val < 99)
                this->ui->voiceSpeedLabel->setText(QString("Speed %1%").arg(val));
            else if (val == 1)
                this->ui->voiceSpeedLabel->setText("Speed Slowest");
            else
                this->ui->voiceSpeedLabel->setText("Speed Max");
        });
    });

    // Selected male voice
    connect(this->ui->maleBox, &QCheckBox::clicked, this, [this]() {
        m_TTS.ToggleMale([this]() {
            if (this->ui->femaleBox->isChecked())
                this->ui->femaleBox->setChecked(false);

            this->ui->maleBox->setChecked(true);
        });
    });

    // Selected female voice
    connect(this->ui->femaleBox, &QCheckBox::clicked, this, [this]() {
        m_TTS.ToggleFemale([this]() {
            if (this->ui->maleBox->isChecked())
                this->ui->maleBox->setChecked(false);

            this->ui->femaleBox->setChecked(true);
        });
    });

    connect(this->ui->reactBox, &QCheckBox::clicked, this, [this](){
        if (this->ui->reactBox->isChecked()) {
            // Disables the speak/stop buttons
            this->ui->speakBtn->setEnabled(false);
            this->ui->stopBtn->setEnabled(false);

            m_ListenThread = std::thread([this](){ Utility::Listen(this->ui->textEdit, this->ui->reactBox, '\n', m_TTS);});
            m_ListenThread.detach();
        }
        else {
            // Enables the speak/stop buttons
            this->ui->speakBtn->setEnabled(true);
            this->ui->stopBtn->setEnabled(true);
        }
    });
}


MainWindow::~MainWindow() = default;
