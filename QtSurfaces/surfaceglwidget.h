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
#include <QOpenGLShaderProgram>
#include <QWidget>

class SurfaceGLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    SurfaceGLWidget(QWidget* parent);

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

private:
    QOpenGLShaderProgram m_shader;
};

#endif // SURFACEGLWIDGET_H
