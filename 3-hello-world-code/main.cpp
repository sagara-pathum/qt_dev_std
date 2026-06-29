#include <QApplication>
#include <QLabel>
#include "mainwindow.h"

#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{	
	QApplication app = QApplication(argc,argv);
	MainWindow w = MainWindow(nullptr);
	QLabel *lb =  new QLabel("Hello world",&w);
	lb->setAlignment(Qt::AlignCenter);
	w.setCentralWidget(lb);
	w.show();
	app.exec();
	return 0;
}
