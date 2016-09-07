#ifndef DEBUGHANDLER_H
#define DEBUGHANDLER_H

#include <QObject>
#include <QDebug>
#include <QString>

class debugHandler : public QObject
{
    Q_OBJECT
public:
    explicit debugHandler(QObject *parent = 0);
    ~debugHandler();
    void writeDebugMessage(QString message);
    void writeDebugMessageWithLocation(QString message);
    void writeToTerminal(QString message);
    void writeToTerminalWithLocation(QString message);
    void writeToLogFile(QString message);
    void writeToLogFileWithTimestamp(QString message);

signals:

public slots:
};

#endif // DEBUGHANDLER_H
