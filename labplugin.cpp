#include "lab.h"
#include "labplugin.h"

#include <QtPlugin>

LABPlugin::LABPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void LABPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool LABPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *LABPlugin::createWidget(QWidget *parent)
{
    return new LAB(parent);
}

QString LABPlugin::name() const
{
    return QLatin1String("LAB");
}

QString LABPlugin::group() const
{
    return QLatin1String("");
}

QIcon LABPlugin::icon() const
{
    return QIcon();
}

QString LABPlugin::toolTip() const
{
    return QLatin1String("");
}

QString LABPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool LABPlugin::isContainer() const
{
    return false;
}

QString LABPlugin::domXml() const
{
    return QLatin1String("<widget class=\"LAB\" name=\"lAB\">\n</widget>\n");
}

QString LABPlugin::includeFile() const
{
    return QLatin1String("lab.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(labplugin, LABPlugin)
#endif // QT_VERSION < 0x050000
