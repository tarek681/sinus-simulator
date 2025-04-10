#include <QApplication>
#include <QTextEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>



int main(int argc, char *argv[])
{

 QApplication app(argc, argv);
 QTextEdit *textEdit=new QTextEdit();
 QCheckBox *checkBox=new QCheckBox();
 QPushButton *pushButton=new QPushButton();
 QLabel *label=new QLabel();
 
 
 
 checkBox->setText("Labor fertig!");
 pushButton->setText("Quit");
 label->setText("Hallo Welt");
 
 QObject::connect(pushButton,SIGNAL(clicked()),&app,SLOT(quit()));
 
 
 QVBoxLayout *layout=new QVBoxLayout();
 layout->addWidget(textEdit);
 layout->addWidget(checkBox);
  layout->addWidget(pushButton);
  layout->addWidget(label);
 
 
 QWidget *window=new QWidget();
 window->setLayout(layout);
 window->show();

 return app.exec();
 }
