#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "welcomewindow.h"
#include "users.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->alreadyexistLabel->setVisible(false);
    ui->ageLabel->setVisible(false);
    ui->notmatchLabel->setVisible(false);
    ui->fieldsLabel->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_registerBu_clicked()
{
    ui->alreadyexistLabel->setVisible(false);
    ui->ageLabel->setVisible(false);
    ui->notmatchLabel->setVisible(false);
    ui->fieldsLabel->setVisible(false);

    QString name= ui->usernameLine2->text();
    QString password= ui->passwordLine2->text();
    QString repassword= ui->passwordcheckLine->text();
    QString month= ui->monthbox->currentText();
    QString day =ui->dayLine->text();
    QString year= ui->yearLine->text();

    bool male= ui->maleButton->isChecked();
    bool female =ui-> Female-> isChecked();
    bool admin= ui->adminButton->isChecked();
    bool user= ui-> userButton-> isChecked();
    bool comedy= ui->comedyBox->isChecked();
    bool action= ui-> actionBox-> isChecked();
    bool romance= ui-> romanceBox-> isChecked();
    bool other= ui-> otherBox-> isChecked();
    bool horror =ui-> horrorBox-> isChecked();
    bool drama =ui->dramaBox-> isChecked();
    int moNth= month.toInt();
    int dAy =day.toInt();
    int yeAr= year.toInt();
    int age = 2024 - yeAr ;

    if (password!=repassword){
        ui->notmatchLabel->setVisible(true);
    }

    for (int i=0; i<usersCount;i++){
        if (name==usernames[i])
            ui->alreadyexistLabel->setVisible(true);
    }

    if (password!=repassword){
    ui-> notmatchLabel->setVisible(true);
    }

    if (age<12){
        ui->ageLabel->setVisible(true);
    }

    if (name == "" || password == "" || repassword == "" || day == "" || year == "" || month == "") {
        ui-> fieldsLabel-> setVisible(true);
    }

    if(male == false && user == false){
        ui->fieldsLabel->setVisible(true);
    }

    if(admin == false && user == false) {
        ui->fieldsLabel->setVisible(true);
    }

    if(comedy == false && action == false && romance == false && horror == false && other == false) {
        ui->fieldsLabel-> setVisible(true);
    }

    bool error1 = ui->alreadyexistLabel-> isVisible();
    bool error2 = ui->ageLabel->isVisible();
    bool error3 = ui->notmatchLabel->isVisible();
    bool error4 = ui->fieldsLabel->isVisible();

    if ( (error1 == false) && (error2 == false) && (error3 == false) && (error4 == false) ){
        usersCount++;
        usernames[usersCount-1] = name ;
        passwords[usersCount-1] = password;
        ages[usersCount-1] = age;

        WelcomeWindow* welcome = new WelcomeWindow(name,age,this);
        hide();
        welcome-> show();

    }

}


