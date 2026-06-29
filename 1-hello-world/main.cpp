#include <QApplication>
#include <QLabel>

int main(int argc, char* argv[]){
    QApplication app = QApplication(argc,argv);
    QLabel *lb = new QLabel("Hello world");
    lb->show();

    app.exec();
    return 0;
}

