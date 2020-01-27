#include "TTS.hpp"
#include "utility.hpp"


TTS::TTS(QWidget* obj) {
    m_Speech = std::make_unique<QTextToSpeech>(obj);
}

TTS::~TTS() = default;


void TTS::Speak(const QString& data) {
    m_Speech->say(data);
}

void TTS::Stop() {
    m_Speech->stop();
}

void TTS::ChangeVolume(int position, const std::function<void(int)>& callback /*=nullptr*/) {
    m_Speech->pause();
    m_Speech->setVolume(position / 100.0);

    if (callback != nullptr)
        callback(position);

    m_Speech->resume();
}

void TTS::ChangeVoiceSpeed(int speed, const std::function<void(int)>& callback /*=nullptr*/) {
    m_Speech->pause();
    m_Speech->setRate(speed / 100.0);

    if (callback != nullptr)
        callback(speed);

    m_Speech->resume();
}

void TTS::ToggleMale(const std::function<void(void)>& callback /*=nullptr*/) {
    if (callback != nullptr)
        callback();

    ChangeGender(Gender::Male);
}

void TTS::ToggleFemale(const std::function<void(void)>& callback /*=nullptr*/) {
    if (callback != nullptr)
        callback();

    /*if (this->ui->maleBox->isChecked())
        this->ui->maleBox->setChecked(false);

    this->ui->femaleBox->setChecked(true);*/
    ChangeGender(Gender::Female);
}

void TTS::ChangeGender(const Gender& gender) {
    switch(gender) {
        case Gender::Male:
            if (m_Speech->voice().gender() != QVoice::Gender::Male) {
                for (auto& i : m_Speech->availableVoices()) {
                    if (i.gender() == QVoice::Gender::Male) {
                        m_Speech->setVoice(i);
                        return;
                    }
                }
            }
            break;

        case Gender::Female:
            if (m_Speech->voice().gender() != QVoice::Gender::Female) {
                for (auto& i : m_Speech->availableVoices()) {
                    if (i.gender() == QVoice::Gender::Female) {
                        m_Speech->setVoice(i);
                        return;
                    }
                }
            }

            break;

        default:
            Utility::VisualInfo("Invalid Gender", "You passed an invalid gender, please select either Male or Female!",
                                QMessageBox::Button::Ok, QMessageBox::Icon::Warning);
            break;
    }
}
