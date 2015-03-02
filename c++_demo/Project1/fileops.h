#ifndef FILEOPS_H
#define FILEOPS_H

#include <QTextStream>


class FileOps
{
public:
    FileOps();

    enum FileOperations{ReadAFile, WriteAFile};

    void writeFile(QString filename);

    void readFile(QString filename);

    void operation(QString filename, FileOperations type);
};

#endif // FILEOPS_H
