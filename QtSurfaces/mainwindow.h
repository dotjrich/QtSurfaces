//
// QtSurfaces - Playing with parametric surfaces.
//

//
// Main window.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <map>

#include <QComboBox>
#include <QMainWindow>
#include <QOpenGLWidget>
#include <QString>

#include "surface.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(const std::map<QString, Surface*>& surfaces, QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow* ui;
    QComboBox* m_cmbSurfaceType;
    QOpenGLWidget* m_glWidget;
    std::map<QString, Surface*> m_surfaces;
};

#endif // MAINWINDOW_H
