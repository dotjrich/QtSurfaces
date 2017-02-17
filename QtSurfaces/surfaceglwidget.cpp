//
// QtSurfaces - Playing with parametric surfaces.
//

//
// Widget to handle OpenGL rendering.
//

#include "surfaceglwidget.h"

SurfaceGLWidget::SurfaceGLWidget(QWidget* parent)
    : QOpenGLWidget(parent)
{
}

// -----------------------------------------------------------------------

void
SurfaceGLWidget::initializeGL()
{
    /*
     * We're inheriting from QOpenGLFunctions for cross-platform support / dynamic loading.
     * This will set up all the functions.
     */
    initializeOpenGLFunctions();

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

// -----------------------------------------------------------------------

void
SurfaceGLWidget::resizeGL(int w, int h)
{
}

// -----------------------------------------------------------------------

void
SurfaceGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}
