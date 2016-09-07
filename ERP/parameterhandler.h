#ifndef PARAMETERHANDLER_H
#define PARAMETERHANDLER_H

#include <QObject>
#include <QString>

#include "debughandler.h"
#include "fileHandler.h"

#define configFile "settings.conf"

class parameterHandler: public QObject
{
    Q_OBJECT
public:
    explicit parameterHandler(QObject *parent = 0);
    ~parameterHandler();
private:
    debugHandler dh;
    fileHandler fh;
    QStringList list;
    struct parameters
    {
        QString programName = "tempName";
        QString programVersion = "0.0.0.0 ALPHA";
        QString programCreator = "Dries Peeters";
        QString programOwner = "DSP automation";
        QString programLicense = "Apache License";
    } parameters;
public:
    QString getProgramName() const;
    void setProgramName(const QString &value);
    QString getProgramVersion() const;
    void setProgramVersion(const QString &value);
    QString getProgramCreator() const;
    void setProgramCreator(const QString &value);
    QString getProgramOwner() const;
    void setProgramOwner(const QString &value);
    QString getProgramLicense() const;
    void setProgramLicense(const QString &value);

};

#endif // PARAMETERHANDLER_H
