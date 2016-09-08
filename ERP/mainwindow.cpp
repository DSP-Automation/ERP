#include "mainwindow.h"
#include "ui_mainwindow.h"

mainWindow::mainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainWindow)
{
    ui->setupUi(this);
    this->showMaximized();
    nm = new navigatorMenu(this);
    ui->mainWindowLayout->addWidget(nm);
    QSpacerItem *qs = new QSpacerItem(10,10,QSizePolicy::Minimum, QSizePolicy::Expanding);
    ui->mainWindowLayout->addSpacerItem(qs);
    ui->mainWindowLayout->addStretch();
}

mainWindow::~mainWindow()
{
    delete ui;
}

void mainWindow::setWindowName(QString name)
{
    this->setWindowTitle(name);
}
