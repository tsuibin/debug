/********************************************************************************
** Form generated from reading UI file 'glwidget.ui'
**
** Created: Wed Dec 5 18:20:23 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLWIDGET_H
#define UI_GLWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GLWidget
{
public:

    void setupUi(QWidget *GLWidget)
    {
        if (GLWidget->objectName().isEmpty())
            GLWidget->setObjectName(QString::fromUtf8("GLWidget"));
        GLWidget->resize(400, 300);

        retranslateUi(GLWidget);

        QMetaObject::connectSlotsByName(GLWidget);
    } // setupUi

    void retranslateUi(QWidget *GLWidget)
    {
        GLWidget->setWindowTitle(QApplication::translate("GLWidget", "GLWidget", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GLWidget: public Ui_GLWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLWIDGET_H
