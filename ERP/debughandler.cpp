#include "debughandler.h"
/* debugHandler Will keep debugging easy. Use these functions if you need something written
 * to the terminal for debugging purposes. Or when you need something written to a log file.
 * KEEP THIS ONE SIMPLE
*/
debugHandler::debugHandler(QObject *parent) : QObject(parent)
{
    this->writeDebugMessage("debugHandler Created");
}
debugHandler::~debugHandler()
{
    this->writeDebugMessage("debugHandler Destroyed");
}

void debugHandler::writeDebugMessage(QString message)
{
    qDebug()  << message;
}

void debugHandler::writeDebugMessageWithLocation(QString message)
{
    qDebug() << __FILE__ << __LINE__ << message;
}

void debugHandler::writeToTerminal(QString message)
{

}

void debugHandler::writeToTerminalWithLocation(QString message)
{

}

void debugHandler::writeToLogFile(QString message)
{

}

void debugHandler::writeToLogFileWithTimestamp(QString message)
{

}
