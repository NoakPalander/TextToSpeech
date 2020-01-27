#ifndef TTF_HPP
#define TTF_HPP


#include <QTextToSpeech>
#include <memory>
#include <QString>
#include <functional>
#include <QWidget>


class TTS {
    public:
        enum class Gender;

        TTS(QWidget* obj);
        ~TTS();

        void Speak(const QString& data);
        void Stop();

        void ChangeVolume(int volume, const std::function<void(int)>& callback = nullptr);
        void ChangeVoiceSpeed(int speed, const std::function<void(int)>& callback = nullptr);
        void ToggleMale(const std::function<void(void)>& callback = nullptr);
        void ToggleFemale(const std::function<void(void)>& callback = nullptr);
        void ChangeGender(const Gender& gender);

        enum class Gender {
            Male,
            Female
        };

    private:
        std::unique_ptr<QTextToSpeech> m_Speech;
};

#endif // TTF_HPP
