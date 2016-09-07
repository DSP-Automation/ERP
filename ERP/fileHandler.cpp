#include "fileHandler.h"

fileHandler::fileHandler(QObject *parent) : QObject(parent)
{
    dh.writeDebugMessageWithLocation("fileHandler Created");
}

fileHandler::~fileHandler()
{
    dh.writeDebugMessageWithLocation("fileHandler Destroyed");
}

/*
 * Write parameter and value to a specific line (Will Append)
 */

int fileHandler::writeConfigFile(QString filename,QString parameter, QString value)
{

}

/*
 * Read the file line by line and paste it into a QStringList
 */
QStringList fileHandler::readConfigFile(QString filename)
{
    QStringList tempList;
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return tempList;
    }

    while (!file.atEnd())
    {
        QByteArray line = file.readLine();
        tempList.append(QString(line));
    }
    return tempList;
}
