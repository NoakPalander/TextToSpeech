#include "utility.hpp"
#include <sstream>
#include <fstream>
#include <iostream>
#include <thread>

namespace Utility {
    int VisualInfo(const QString& title, const QString& text, const QMessageBox::Button& buttons, const QMessageBox::Icon& icon) {
        QMessageBox box;
        box.setWindowTitle(title);
        box.setText(text);
        box.setStandardButtons(buttons);
        box.setIcon(icon);
        return box.exec();
    }

    // Loads resource file (style.qss)
    void Load(const QVector<QWidget*>& widgets, const QString& filename) {
        std::ifstream reader(filename.toStdString().c_str());
        if (reader) {
            std::stringstream stream;
            stream << reader.rdbuf();

            for (auto& i : widgets)
                i->setStyleSheet(QString::fromStdString(stream.str()));
        }
        else {
            Utility::VisualInfo("Error!", "Failed to read style.qss file!", QMessageBox::Button::Ok, QMessageBox::Icon::Critical);
        }
    }

    void Listen(const QTextEdit* const textEdit, const QCheckBox* const reactBox, char delimiter, TTS& tts) noexcept {
        using namespace std::chrono_literals;
        QString buffer = "";

        while (reactBox->isChecked()) {
            try {
                if (textEdit != nullptr) {
                    const QString current = textEdit->toPlainText().mid(buffer.size(), textEdit->toPlainText().size());

                    // check if the new text contains the delimeter
                    if (current.contains(delimiter) && !buffer.contains(current)) {
                        // Says the words between latest and next-to-latest delimiter
                        tts.Speak(textEdit->toPlainText().mid(buffer.size(), textEdit->toPlainText().size()));

                        // Sets the buffer to the whole text-edit
                        buffer = textEdit->toPlainText();
                    }
                }
                else {
                    std::cerr << "An invalid text-edit was passed!\n";
                }
            }
            catch(std::exception& e) {
                std::cerr << "Something went wrong during the react...\n" << e.what() << "\n";
            }

            std::this_thread::sleep_for(100ms);
        }
    }
}
