//
// QtSurfaces - Playing with parametric surfaces.
//

//
// Widget to handle OpenGL rendering.
//

#ifndef SURFACEGLWIDGET_H
#define SURFACEGLWIDGET_H

#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QWidget>

class SurfaceGLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
public:
    SurfaceGLWidget(QWidget* parent);

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
};

#endif // SURFACEGLWIDGET_H
