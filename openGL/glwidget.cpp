#include "glwidget.h"
#include "ui_glwidget.h"

GLWidget::GLWidget(QGLWidget *parent) :
    QGLWidget(parent),
    ui(new Ui::GLWidget)
{
    ui->setupUi(this);
}

GLWidget::~GLWidget()
{
    delete ui;
}
