#include "parameterhandler.h"

parameterHandler::parameterHandler(QObject *parent): QObject(parent)
{
    dh.writeDebugMessageWithLocation("parameterHandler Created");
    list = fh.readConfigFile(configFile);
    for(int i = 0; i <  list.length(); i++)
    {
        QStringList _split;
        QString temp = list.at(i);
        _split = temp.split(':');
        if(_split.at(0) ==  "Name")
        {
            this->setProgramName(_split.at(1));
        }
        else if(_split.at(0) ==  "Version")
        {
            this->setProgramVersion(_split.at(1));
        }
        else if(_split.at(0) ==  "Creator")
        {
            this->setProgramCreator(_split.at(1));
        }
        else if(_split.at(0) ==  "Owner")
        {
            this->setProgramOwner(_split.at(1));
        }
        else if(_split.at(0) ==  "License")
        {
            this->setProgramLicense(_split.at(1));
        }
    }
}
parameterHandler::~parameterHandler()
{
    dh.writeDebugMessageWithLocation("parameterHandler Destroyed");
}

QString parameterHandler::getProgramName() const
{
    return parameters.programName;
}

void parameterHandler::setProgramName(const QString &value)
{
    parameters.programName = value;
}

QString parameterHandler::getProgramVersion() const
{
    return parameters.programVersion;
}

void parameterHandler::setProgramVersion(const QString &value)
{
   parameters.programVersion = value;
}

QString parameterHandler::getProgramCreator() const
{
    return parameters.programCreator;
}

void parameterHandler::setProgramCreator(const QString &value)
{
    parameters.programCreator = value;
}

QString parameterHandler::getProgramOwner() const
{
    return parameters.programOwner;
}

void parameterHandler::setProgramOwner(const QString &value)
{
    parameters.programOwner = value;
}

QString parameterHandler::getProgramLicense() const
{
    return parameters.programLicense;
}

void parameterHandler::setProgramLicense(const QString &value)
{
    parameters.programLicense = value;
}
