#ifndef GLWIDGET_H
#define GLWIDGET_H
#include <QtOpenGL/QtOpenGL>
#include <QWidget>

namespace Ui {
class GLWidget;
}

class GLWidget : public QGLWidget
{
    Q_OBJECT
    
public:
    explicit GLWidget(QGLWidget *parent = 0);
    ~GLWidget();
    
private:
    Ui::GLWidget *ui;
};

#endif // GLWIDGET_H
