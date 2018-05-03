/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *userlabel;
    QLineEdit *userinput;
    QLabel *passwdlabel;
    QLineEdit *passwdinput;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *login;
    QPushButton *pushButton_2;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QStringLiteral("loginDialog"));
        loginDialog->resize(259, 141);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginDialog->sizePolicy().hasHeightForWidth());
        loginDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo_tree.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginDialog->setWindowIcon(icon);
        layoutWidget = new QWidget(loginDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 199, 48));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        userlabel = new QLabel(layoutWidget);
        userlabel->setObjectName(QStringLiteral("userlabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, userlabel);

        userinput = new QLineEdit(layoutWidget);
        userinput->setObjectName(QStringLiteral("userinput"));

        formLayout->setWidget(0, QFormLayout::FieldRole, userinput);

        passwdlabel = new QLabel(layoutWidget);
        passwdlabel->setObjectName(QStringLiteral("passwdlabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwdlabel);

        passwdinput = new QLineEdit(layoutWidget);
        passwdinput->setObjectName(QStringLiteral("passwdinput"));
        passwdinput->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwdinput);

        layoutWidget1 = new QWidget(loginDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 90, 201, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        login = new QPushButton(layoutWidget1);
        login->setObjectName(QStringLiteral("login"));

        horizontalLayout->addWidget(login);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(loginDialog);

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "\350\272\253\344\273\275\351\252\214\350\257\201", nullptr));
        userlabel->setText(QApplication::translate("loginDialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        userinput->setText(QString());
        userinput->setPlaceholderText(QApplication::translate("loginDialog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        passwdlabel->setText(QApplication::translate("loginDialog", "\345\257\206\347\240\201", nullptr));
        passwdinput->setPlaceholderText(QApplication::translate("loginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        login->setText(QApplication::translate("loginDialog", "\347\231\273\351\231\206", nullptr));
        pushButton_2->setText(QApplication::translate("loginDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
