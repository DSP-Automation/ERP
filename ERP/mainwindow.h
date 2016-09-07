#ifndef _MAINWINDOW_H
#define _MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class _mainWindow;
}

class _mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit _mainWindow(QWidget *parent = 0);
    ~_mainWindow();

private:
    Ui::_mainWindow *ui;
};

#endif // _MAINWINDOW_H
