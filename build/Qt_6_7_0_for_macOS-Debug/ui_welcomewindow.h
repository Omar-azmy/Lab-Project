/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *helloLabel;
    QLabel *imageLabel;
    QLabel *welcomeLabel;
    QPushButton *logoutButton;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(661, 536);
        helloLabel = new QLabel(WelcomeWindow);
        helloLabel->setObjectName("helloLabel");
        helloLabel->setGeometry(QRect(50, 60, 281, 16));
        imageLabel = new QLabel(WelcomeWindow);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(50, 100, 561, 381));
        welcomeLabel = new QLabel(WelcomeWindow);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(190, 140, 231, 41));
        logoutButton = new QPushButton(WelcomeWindow);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(30, 500, 100, 32));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        helloLabel->setText(QCoreApplication::translate("WelcomeWindow", "Hello", nullptr));
        imageLabel->setText(QCoreApplication::translate("WelcomeWindow", "TextLabel", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("WelcomeWindow", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Welcome</span></p></body></html>", nullptr));
        logoutButton->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
