#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include<QMessageBox>
#include <QtCore/QFile>
#include <QtCore/QTextStream>

namespace Ui {
class loginDialog;
}

class loginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit loginDialog(QWidget *parent = 0);
    ~loginDialog();

private slots:
    void on_login_clicked();

private:
    Ui::loginDialog *ui;
};

#endif // LOGINDIALOG_H
