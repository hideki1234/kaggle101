#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "digitdata.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    DigitData * m_data;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void onOpen();

public slots:
    void onOffsetEdited();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
