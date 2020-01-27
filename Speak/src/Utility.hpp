#ifndef UTILITY_HPP
#define UTILITY_HPP

#include "TTS.hpp"
#include <QMessageBox>
#include <QString>
#include <QTextEdit>
#include <QCheckBox>

namespace Utility {
    int VisualInfo(const QString& title, const QString& text, const QMessageBox::Button& buttons, const QMessageBox::Icon& icon);
    void Load(const QVector<QWidget*>& widgets, const QString& filename);
    void Listen(const QTextEdit* textEdit, const QCheckBox* const react, char delimiter, TTS& tts) noexcept;
}

#endif // UTILITY_HPP
