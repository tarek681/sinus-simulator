#include <QApplication>
#include <QTextEdit>
#include <QCheckBox>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QFormLayout>
int main(int argc, char *argv[])
{

 QApplication app(argc, argv);

 
 QPushButton *myButton1 = new QPushButton("Knopf 1");
 QPushButton *myButton2 = new QPushButton("Knopf 2");
 QPushButton *myButton3 = new QPushButton("Knopf 3");
 QPushButton *myButton4 = new QPushButton("Knopf 4");
 QPushButton *myButton5 = new QPushButton("Knopf 5");
 QPushButton *myButton6 = new QPushButton("Knopf 6");

QLabel *myLabel1=new QLabel("Click me now");
QLabel *myLabel2=new QLabel("No me");
QLabel *myLabel3=new QLabel("I am the best");
QLabel *myLabel4=new QLabel("Huhu");
QLabel *myLabel5=new QLabel("Mommy");
QLabel *myLabel6=new QLabel("Self destruct");


 /*
 QHBoxLayout *layout = new QHBoxLayout;
 
 layout->addWidget(myButton1);
 layout->addWidget(myButton2);
 layout->addWidget(myButton3);
 layout->addWidget(myButton4);
 layout->addWidget(myButton5);
 layout->addWidget(myButton6);
 
 */
 
 /*
 QVBoxLayout *layout = new QVBoxLayout;
  
 layout->addWidget(myButton1);
 layout->addWidget(myButton2);
 layout->addWidget(myButton3);
 layout->addWidget(myButton4);
 layout->addWidget(myButton5);
 layout->addWidget(myButton6);
 */
 
 
 /*
 QGridLayout *layout = new QGridLayout;
 
 layout->addWidget(myButton1, 0, 0);
 layout->addWidget(myButton2, 0, 1);
 layout->addWidget(myButton3, 1, 0, 1, 2);
 layout->addWidget(myButton4, 2, 0);
 layout->addWidget(myButton5, 2, 1);
 layout->addWidget(myButton6, 3, 1);
*/

/*
 QFormLayout *layout = new QFormLayout;
  
 layout->addRow(myLabel1, myButton1);
 layout->addRow(myLabel2, myButton2);
 layout->addRow(myLabel3, myButton3);
 layout->addRow(myLabel4, myButton4);
 layout->addRow(myLabel5, myButton5);
 layout->addRow(myLabel6, myButton6);
 */
 
QFormLayout *layout1 = new QFormLayout;
QFormLayout *layout2 = new QFormLayout;
 
 layout1->addRow(myLabel1, myButton1);
 layout1->addRow(myLabel2, myButton2);
 layout1->addRow(myLabel3, myButton3);

 layout2->addRow(myLabel4, myButton4);
 layout2->addRow(myLabel5, myButton5);
 layout2->addRow(myLabel6, myButton6);

QHBoxLayout *layout = new QHBoxLayout;
layout->addLayout(layout1);
layout->addLayout(layout2);



 QWidget window;
 window.setLayout(layout);

 window.show();

 return app.exec();
 }
