#include <QApplication>
#include <QMainWindow>
#include <QLabel>


#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{	
	QApplication app = QApplication(argc,argv);
	QMainWindow w = QMainWindow(NULL);
	QLabel *lb = new QLabel("Hello world",&w);
	lb->setAlignment(Qt::AlignCenter);
	w.setCentralWidget(lb);
	w.show();
	app.exec();
	return 0;
}
