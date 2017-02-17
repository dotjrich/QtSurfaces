//
// QtSurfaces - Playing with parametric surfaces.
//

//
// Entry point.
//

#include <map>

#include <QApplication>
#include <QString>

#include "mainwindow.h"
#include "surface.h"
#include "torus.h"

int main(int argc, char *argv[])
{
    std::map<QString, Surface*> surfaces;
    surfaces[QString("Torus")] = new Torus();

    QApplication a(argc, argv);
    MainWindow w(surfaces);
    w.show();

    return a.exec();
}
