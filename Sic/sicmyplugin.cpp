#include "sicmy.h"
#include "sicmyplugin.h"

#include <QtPlugin>

SicmyPlugin::SicmyPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void SicmyPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool SicmyPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *SicmyPlugin::createWidget(QWidget *parent)
{
    return new Sicmy(parent);
}

QString SicmyPlugin::name() const
{
    return QLatin1String("Sicmy");
}

QString SicmyPlugin::group() const
{
    return QLatin1String("");
}

QIcon SicmyPlugin::icon() const
{
    return QIcon();
}

QString SicmyPlugin::toolTip() const
{
    return QLatin1String("");
}

QString SicmyPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool SicmyPlugin::isContainer() const
{
    return false;
}

QString SicmyPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Sicmy\" name=\"sicmy\">\n</widget>\n");
}

QString SicmyPlugin::includeFile() const
{
    return QLatin1String("sicmy.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(sicmyplugin, SicmyPlugin)
#endif // QT_VERSION < 0x050000
