#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QSpacerItem>
#include "navigatormenu.h"

namespace Ui {
class mainWindow;
}

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainWindow(QWidget *parent = 0);
    ~mainWindow();
    void setWindowName(QString name);

private:
    Ui::mainWindow *ui;
    navigatorMenu *nm;
};

#endif // MAINWINDOW_H
