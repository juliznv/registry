#include "logindialog.h"
#include "ui_logindialog.h"
#include<stdio.h>

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
}

loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::on_login_clicked()
{

    char user[16],passwd[16];
    FILE *fp=fopen("C:\\Users\\zhoun\\Documents\\Qt\\windows\\userlist.txt","r+");
    while (!feof(fp))
    {
        fscanf(fp,"%s",user);
        fscanf(fp,"%s",passwd);
        if(ui->userinput->text()==tr(user)&&ui->passwdinput->text()==tr(passwd))
        {
            accept();
            return;
        }
    }
    fclose(fp);
    QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误"),QMessageBox::Yes);
}
