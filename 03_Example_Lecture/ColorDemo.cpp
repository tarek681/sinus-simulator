#include "theWindow.h"

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
   theWindow *wnd=new theWindow();
   wnd->show();
   return a.exec();
}
