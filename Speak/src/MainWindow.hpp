#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "TTS.hpp"
#include <memory>
#include <thread>
#include <QTextEdit>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private:
        std::shared_ptr<Ui::MainWindow> ui;
        TTS m_TTS;
        std::thread m_ListenThread;
};

#endif // MAINWINDOW_H
