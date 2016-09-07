#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <QObject>
#include <QString>
#include <QFile>


//
#include "debughandler.h"

class fileHandler : public QObject
{
    Q_OBJECT
public:
    explicit fileHandler(QObject *parent = 0);
    ~fileHandler();
    int writeConfigFile(QString filename, QString parameter, QString value);
    QStringList readConfigFile(QString filename);

private:
    debugHandler dh;
signals:

public slots:
};

#endif // FILEHANDLER_H
