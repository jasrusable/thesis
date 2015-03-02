#include <iostream>

#include <QFile>

#include "fileops.h"


using namespace std;


FileOps::FileOps()
{
}

void FileOps::writeFile(QString filename)
{
    float x, y, z;
    int count = 100;

//    x = y = z = 0.0;

    QFile data(filename);
    if (data.open(QFile::WriteOnly | QFile::Truncate))
    {
        QTextStream out(&data);
        for(int i = 0; i < count; ++i)
        {
            x = rand() % 100;
            y = rand() % 100;
            z = rand() % 100;
            out << x << "," << y << "," << z << endl;
        }
    }

    cout << "Done writing file" << endl;
}

void FileOps::readFile(QString filename)
{
    QFile data(filename);
    if (data.open(QFile::ReadOnly))
    {
        QTextStream in(&data);
        QString line;
        do
        {
            line = in.readLine();

            if(!line.isNull())
            {
                cout << line.toStdString() << endl;
            }

        } while (!line.isNull());
    }

    cout << "Done reading file" << endl;
}

void FileOps::operation(QString filename, FileOperations type)
{
    if(type == WriteAFile)
    {
        writeFile(filename);
    }
    else
    {
        readFile(filename);
    }
}

