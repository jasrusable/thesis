#include <QCoreApplication>

#include "classa.h"
#include "fileops.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    UCT1::ClassA A;
    A.print();

    ClassB B;
    B.setVal1(22);
    B.print();
    int d = B.val1();

    FileOps fo;
    fo.writeFile("output.csv");
    fo.readFile("output.csv");
    fo.operation("output.csv", FileOps::WriteAFile);

    return a.exec();
}
