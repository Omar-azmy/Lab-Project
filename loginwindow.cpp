#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "welcomewindow.h"
#include "registerwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->errorLabel->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButtonLogin_clicked()
{
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();
    for(int i = 0 ; i < usersCount ; i++){
        if( (username == usernames[i]) && (password == passwords[i]) ) {
            hide();
            WelcomeWindow* welcomeWindow = new WelcomeWindow(usernames[i],ages[i],this);
            welcomeWindow-> show();
        } else {
            ui->errorLabel->setVisible(true);
        }

    }
}


void LoginWindow::on_pushButtonRegister_clicked()
{
    hide();
    RegisterWindow* registerWindow = new RegisterWindow(this);
    registerWindow-> show();
}
