//
// QtSurfaces - Playing with parametric surfaces.
//

//
// Entry point.
//

#include <map>

#include <QApplication>
#include <QString>
#include <QSurfaceFormat>

#include "mainwindow.h"
#include "surface.h"
#include "torus.h"

int main(int argc, char *argv[])
{
    std::map<QString, Surface*> surfaces;
    surfaces[QString("Torus")] = new Torus();

    // Set global format for using OpenGL 4.0.
    QSurfaceFormat format;
    format.setVersion(4, 0);
    format.setProfile(QSurfaceFormat::CoreProfile);
    format.setDepthBufferSize(24);
    QSurfaceFormat::setDefaultFormat(format);

    QApplication a(argc, argv);

    MainWindow w(surfaces);
    w.show();

    return a.exec();
}
