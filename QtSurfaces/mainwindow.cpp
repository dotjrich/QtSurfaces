//
// QtSurfaces - Playing with parametric surfaces.
//

//
// Main window.
//

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(const std::map<QString, Surface*>& surfaces, QWidget *parent):
    m_surfaces(surfaces),
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_cmbSurfaceType = ui->cmbSurfaceType;
    m_glWidget = ui->glWidget;

    for (auto i = m_surfaces.begin(); i != m_surfaces.end(); ++i) {
        m_cmbSurfaceType->addItem(i->first);
    }
}

// -----------------------------------------------------------------------

MainWindow::~MainWindow()
{
    delete ui;

    for (auto i = m_surfaces.begin(); i != m_surfaces.end(); ++i) {
        delete i->second;
    }
}
