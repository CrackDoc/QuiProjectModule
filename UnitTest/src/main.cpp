#include <QtWidgets/QApplication>
#include "QuiProjectModule.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GetOrCreateQuiProjectModule()->SetWorkSpaceDir("C:/Qt/Qt5.9.8");
    GetOrCreateQuiProjectModule()->FlushWorkSpaceDir();
    GetOrCreateQuiProjectModule()->show();

    return a.exec();
}
