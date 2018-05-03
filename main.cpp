#include<qwidget.h>
#include<qgridlayout.h>
#include <QApplication>
#include<windows.h>
#include"logindialog.h"
#include"switchbutton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;
    loginDialog dlg;
    if(dlg.exec()==QDialog::Accepted)
    {
		w.setMinimumSize(400, 225);
		QGridLayout layout;
		SwitchButton *button1 = new SwitchButton();
		SwitchButton *button2 = new SwitchButton();
		SwitchButton *button3 = new SwitchButton();
		SwitchButton *button4 = new SwitchButton();
		SwitchButton *button5 = new SwitchButton();
		SwitchButton *button6 = new SwitchButton();
		layout.addWidget(button1, 1, 1);
		layout.addWidget(button2, 1, 2);
		layout.addWidget(button3, 2, 1);
		layout.addWidget(button4, 2, 2);
		layout.addWidget(button5, 3, 1);
		layout.addWidget(button6, 3, 2);
		w.setLayout(&layout);
        w.show();
        return a.exec();
    }
    return 0;
}
