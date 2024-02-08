#include "hello.h"
#include <qdebug.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << "Hello-Word project";
    hello w;
    w.show();
    return a.exec();
}
