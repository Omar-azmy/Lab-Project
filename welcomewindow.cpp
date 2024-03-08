#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "loginwindow.h"
#include "Users.h"

#include <QPixmap>
#include <QWidget>
WelcomeWindow::WelcomeWindow(QString username, int age, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    ui->helloLabel->setText("hello " + username + " " + QString::number(age) );

    QPixmap pic(":/img/sowar/images.jpeg");
    int w= ui->imageLabel->width();
    int h= ui->imageLabel-> height();
    ui->imageLabel->setPixmap(pic.scaled(w, h));

}
WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_logoutButton_clicked()
{
    hide();
    LoginWindow* loginWindow = new LoginWindow(this);
    loginWindow->show();
}
