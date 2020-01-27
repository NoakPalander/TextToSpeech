/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QLabel *infoLabel;
    QFrame *container;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *volumeLabel;
    QSlider *volumeSlider;
    QLabel *voiceSpeedLabel;
    QSlider *voiceSpeedSlider;
    QCheckBox *reactBox;
    QFrame *line;
    QLabel *genderLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *maleBox;
    QCheckBox *femaleBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *speakBtn;
    QPushButton *stopBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(401, 476);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Mono"));
        font.setPointSize(11);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 30, 381, 151));
        textEdit->setFont(font);
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QString::fromUtf8(""));
        infoLabel = new QLabel(centralWidget);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setGeometry(QRect(10, 10, 81, 16));
        infoLabel->setFont(font);
        infoLabel->setStyleSheet(QString::fromUtf8("color: #cdcdcd;"));
        container = new QFrame(centralWidget);
        container->setObjectName(QString::fromUtf8("container"));
        container->setGeometry(QRect(70, 190, 261, 271));
        container->setStyleSheet(QString::fromUtf8(""));
        container->setFrameShape(QFrame::StyledPanel);
        container->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(container);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 6, 241, 256));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        volumeLabel = new QLabel(layoutWidget_2);
        volumeLabel->setObjectName(QString::fromUtf8("volumeLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Liberation Mono"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        volumeLabel->setFont(font1);
        volumeLabel->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(volumeLabel);

        volumeSlider = new QSlider(layoutWidget_2);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setStyleSheet(QString::fromUtf8(""));
        volumeSlider->setMaximum(100);
        volumeSlider->setSliderPosition(50);
        volumeSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(volumeSlider);

        voiceSpeedLabel = new QLabel(layoutWidget_2);
        voiceSpeedLabel->setObjectName(QString::fromUtf8("voiceSpeedLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Liberation Mono"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        voiceSpeedLabel->setFont(font2);
        voiceSpeedLabel->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(voiceSpeedLabel);

        voiceSpeedSlider = new QSlider(layoutWidget_2);
        voiceSpeedSlider->setObjectName(QString::fromUtf8("voiceSpeedSlider"));
        voiceSpeedSlider->setStyleSheet(QString::fromUtf8("color: silver;\n"
""));
        voiceSpeedSlider->setMaximum(100);
        voiceSpeedSlider->setSliderPosition(25);
        voiceSpeedSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(voiceSpeedSlider);

        reactBox = new QCheckBox(layoutWidget_2);
        reactBox->setObjectName(QString::fromUtf8("reactBox"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        reactBox->setFont(font3);

        verticalLayout->addWidget(reactBox);

        line = new QFrame(layoutWidget_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        genderLabel = new QLabel(layoutWidget_2);
        genderLabel->setObjectName(QString::fromUtf8("genderLabel"));
        genderLabel->setFont(font1);
        genderLabel->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(genderLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        maleBox = new QCheckBox(layoutWidget_2);
        maleBox->setObjectName(QString::fromUtf8("maleBox"));
        maleBox->setFont(font1);
        maleBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(maleBox);

        femaleBox = new QCheckBox(layoutWidget_2);
        femaleBox->setObjectName(QString::fromUtf8("femaleBox"));
        femaleBox->setFont(font1);
        femaleBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(femaleBox);


        verticalLayout->addLayout(horizontalLayout);

        line_2 = new QFrame(layoutWidget_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setStyleSheet(QString::fromUtf8(""));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        speakBtn = new QPushButton(layoutWidget_2);
        speakBtn->setObjectName(QString::fromUtf8("speakBtn"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Liberation Mono"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        speakBtn->setFont(font4);
        speakBtn->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(speakBtn);

        stopBtn = new QPushButton(layoutWidget_2);
        stopBtn->setObjectName(QString::fromUtf8("stopBtn"));
        stopBtn->setFont(font4);
        stopBtn->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(stopBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Text To Speech", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Text to be spoken..", nullptr));
        infoLabel->setText(QCoreApplication::translate("MainWindow", "TTS-Text", nullptr));
#if QT_CONFIG(accessibility)
        container->setAccessibleName(QCoreApplication::translate("MainWindow", "container", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        volumeLabel->setAccessibleName(QCoreApplication::translate("MainWindow", "volumeLabel", nullptr));
#endif // QT_CONFIG(accessibility)
        volumeLabel->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
#if QT_CONFIG(accessibility)
        voiceSpeedLabel->setAccessibleName(QCoreApplication::translate("MainWindow", "voiceSpeedLabel", nullptr));
#endif // QT_CONFIG(accessibility)
        voiceSpeedLabel->setText(QCoreApplication::translate("MainWindow", "Voice-Speed", nullptr));
        reactBox->setText(QCoreApplication::translate("MainWindow", "React", nullptr));
#if QT_CONFIG(accessibility)
        genderLabel->setAccessibleName(QCoreApplication::translate("MainWindow", "genderLabel", nullptr));
#endif // QT_CONFIG(accessibility)
        genderLabel->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        maleBox->setText(QCoreApplication::translate("MainWindow", "Male", nullptr));
        femaleBox->setText(QCoreApplication::translate("MainWindow", "Female", nullptr));
#if QT_CONFIG(accessibility)
        speakBtn->setAccessibleName(QCoreApplication::translate("MainWindow", "speakButton", nullptr));
#endif // QT_CONFIG(accessibility)
        speakBtn->setText(QCoreApplication::translate("MainWindow", "Speak", nullptr));
#if QT_CONFIG(accessibility)
        stopBtn->setAccessibleName(QCoreApplication::translate("MainWindow", "stopButton", nullptr));
#endif // QT_CONFIG(accessibility)
        stopBtn->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
