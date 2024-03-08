/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *usernameLine2;
    QLineEdit *passwordLine2;
    QLineEdit *passwordcheckLine;
    QLabel *alreadyexistLabel;
    QLabel *notmatchLabel;
    QComboBox *monthbox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *dayLine;
    QLabel *label_7;
    QLineEdit *yearLine;
    QGroupBox *genderBox;
    QRadioButton *maleButton;
    QRadioButton *Female;
    QGroupBox *accountBox;
    QRadioButton *userButton;
    QRadioButton *adminButton;
    QLabel *ageLabel;
    QGroupBox *genreBox;
    QCheckBox *actionBox;
    QCheckBox *comedyBox;
    QCheckBox *romanceBox;
    QCheckBox *dramaBox;
    QCheckBox *horrorBox;
    QCheckBox *otherBox;
    QPushButton *registerBu;
    QLabel *fieldsLabel;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(688, 602);
        label = new QLabel(RegisterWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 50, 71, 16));
        label_2 = new QLabel(RegisterWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 90, 71, 16));
        label_3 = new QLabel(RegisterWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 130, 121, 16));
        usernameLine2 = new QLineEdit(RegisterWindow);
        usernameLine2->setObjectName("usernameLine2");
        usernameLine2->setGeometry(QRect(150, 50, 171, 21));
        passwordLine2 = new QLineEdit(RegisterWindow);
        passwordLine2->setObjectName("passwordLine2");
        passwordLine2->setGeometry(QRect(150, 90, 171, 21));
        passwordLine2->setEchoMode(QLineEdit::Password);
        passwordcheckLine = new QLineEdit(RegisterWindow);
        passwordcheckLine->setObjectName("passwordcheckLine");
        passwordcheckLine->setGeometry(QRect(150, 130, 171, 21));
        passwordcheckLine->setEchoMode(QLineEdit::Password);
        alreadyexistLabel = new QLabel(RegisterWindow);
        alreadyexistLabel->setObjectName("alreadyexistLabel");
        alreadyexistLabel->setGeometry(QRect(340, 50, 111, 16));
        notmatchLabel = new QLabel(RegisterWindow);
        notmatchLabel->setObjectName("notmatchLabel");
        notmatchLabel->setGeometry(QRect(340, 130, 101, 16));
        monthbox = new QComboBox(RegisterWindow);
        monthbox->addItem(QString());
        monthbox->addItem(QString());
        monthbox->addItem(QString());
        monthbox->addItem(QString());
        monthbox->addItem(QString());
        monthbox->addItem(QString());
        monthbox->addItem(QString());
        monthbox->addItem(QString());
        monthbox->addItem(QString());
        monthbox->addItem(QString());
        monthbox->addItem(QString());
        monthbox->addItem(QString());
        monthbox->setObjectName("monthbox");
        monthbox->setGeometry(QRect(20, 230, 103, 32));
        label_4 = new QLabel(RegisterWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 180, 81, 16));
        label_5 = new QLabel(RegisterWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 210, 58, 16));
        label_6 = new QLabel(RegisterWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 210, 58, 16));
        dayLine = new QLineEdit(RegisterWindow);
        dayLine->setObjectName("dayLine");
        dayLine->setGeometry(QRect(140, 230, 101, 31));
        label_7 = new QLabel(RegisterWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(260, 210, 58, 16));
        yearLine = new QLineEdit(RegisterWindow);
        yearLine->setObjectName("yearLine");
        yearLine->setGeometry(QRect(260, 230, 101, 31));
        genderBox = new QGroupBox(RegisterWindow);
        genderBox->setObjectName("genderBox");
        genderBox->setGeometry(QRect(20, 280, 181, 111));
        maleButton = new QRadioButton(genderBox);
        maleButton->setObjectName("maleButton");
        maleButton->setGeometry(QRect(10, 40, 91, 21));
        Female = new QRadioButton(genderBox);
        Female->setObjectName("Female");
        Female->setGeometry(QRect(10, 80, 99, 20));
        accountBox = new QGroupBox(RegisterWindow);
        accountBox->setObjectName("accountBox");
        accountBox->setGeometry(QRect(270, 280, 181, 111));
        userButton = new QRadioButton(accountBox);
        userButton->setObjectName("userButton");
        userButton->setGeometry(QRect(10, 40, 91, 21));
        adminButton = new QRadioButton(accountBox);
        adminButton->setObjectName("adminButton");
        adminButton->setGeometry(QRect(10, 80, 99, 20));
        ageLabel = new QLabel(RegisterWindow);
        ageLabel->setObjectName("ageLabel");
        ageLabel->setGeometry(QRect(380, 240, 131, 16));
        genreBox = new QGroupBox(RegisterWindow);
        genreBox->setObjectName("genreBox");
        genreBox->setGeometry(QRect(20, 410, 251, 131));
        actionBox = new QCheckBox(genreBox);
        actionBox->setObjectName("actionBox");
        actionBox->setGeometry(QRect(10, 30, 85, 20));
        comedyBox = new QCheckBox(genreBox);
        comedyBox->setObjectName("comedyBox");
        comedyBox->setGeometry(QRect(10, 60, 85, 20));
        romanceBox = new QCheckBox(genreBox);
        romanceBox->setObjectName("romanceBox");
        romanceBox->setGeometry(QRect(10, 90, 85, 20));
        dramaBox = new QCheckBox(genreBox);
        dramaBox->setObjectName("dramaBox");
        dramaBox->setGeometry(QRect(130, 30, 85, 20));
        horrorBox = new QCheckBox(genreBox);
        horrorBox->setObjectName("horrorBox");
        horrorBox->setGeometry(QRect(130, 60, 85, 20));
        otherBox = new QCheckBox(genreBox);
        otherBox->setObjectName("otherBox");
        otherBox->setGeometry(QRect(130, 90, 85, 20));
        registerBu = new QPushButton(RegisterWindow);
        registerBu->setObjectName("registerBu");
        registerBu->setGeometry(QRect(20, 550, 100, 32));
        fieldsLabel = new QLabel(RegisterWindow);
        fieldsLabel->setObjectName("fieldsLabel");
        fieldsLabel->setGeometry(QRect(140, 550, 161, 16));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password", nullptr));
        alreadyexistLabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">*Already Existing</span></p></body></html>", nullptr));
        notmatchLabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">*Not Matching</span></p></body></html>", nullptr));
        monthbox->setItemText(0, QCoreApplication::translate("RegisterWindow", "January", nullptr));
        monthbox->setItemText(1, QCoreApplication::translate("RegisterWindow", "February", nullptr));
        monthbox->setItemText(2, QCoreApplication::translate("RegisterWindow", "March", nullptr));
        monthbox->setItemText(3, QCoreApplication::translate("RegisterWindow", "April", nullptr));
        monthbox->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        monthbox->setItemText(5, QCoreApplication::translate("RegisterWindow", "June", nullptr));
        monthbox->setItemText(6, QCoreApplication::translate("RegisterWindow", "July", nullptr));
        monthbox->setItemText(7, QCoreApplication::translate("RegisterWindow", "August", nullptr));
        monthbox->setItemText(8, QCoreApplication::translate("RegisterWindow", "September", nullptr));
        monthbox->setItemText(9, QCoreApplication::translate("RegisterWindow", "October", nullptr));
        monthbox->setItemText(10, QCoreApplication::translate("RegisterWindow", "November", nullptr));
        monthbox->setItemText(11, QCoreApplication::translate("RegisterWindow", "December", nullptr));

        label_4->setText(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        genderBox->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        maleButton->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        Female->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        accountBox->setTitle(QCoreApplication::translate("RegisterWindow", "Account", nullptr));
        userButton->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        adminButton->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        ageLabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">*Age is less than 12</span></p></body></html>", nullptr));
        genreBox->setTitle(QCoreApplication::translate("RegisterWindow", "Favourite Genre(s)", nullptr));
        actionBox->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        comedyBox->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        romanceBox->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        dramaBox->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        horrorBox->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        otherBox->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        registerBu->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        fieldsLabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">*All fields must be filled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
