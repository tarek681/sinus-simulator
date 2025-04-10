#include "theWindow.h"

theWindow::theWindow()
{
	wdg=new QWidget(this);
	
	sld1=new QSlider(Qt::Horizontal);
	sld2=new QSlider(Qt::Horizontal);
	sld3=new QSlider(Qt::Horizontal);
	screen=new ColorDisplay();
	
	sld1->setMaximum(255);
	sld2->setMaximum(255);
	sld3->setMaximum(255);
	
	vlay=new QVBoxLayout;
	
	vlay->addWidget(sld1);
	vlay->addWidget(sld2);
	vlay->addWidget(sld3);
	vlay->addWidget(screen);
	
	wdg->setLayout(vlay);
	this->setCentralWidget(wdg);
	
	
	QObject::connect(sld1,SIGNAL(valueChanged(int)),this,SLOT(OnRedChanged(int)));
	QObject::connect(sld2,SIGNAL(valueChanged(int)),this,SLOT(OnGreenChanged(int)));
	QObject::connect(sld3,SIGNAL(valueChanged(int)),this,SLOT(OnBlueChanged(int)));
	
}
 
void theWindow::OnRedChanged(int i)
{
	//printf("SliderRot Wert %d\n",i);
	screen->red=i;
	screen->repaint();
	
}


 
void theWindow::OnGreenChanged(int i)
{
	//printf("SliderGruen Wert %d\n",i);
	screen->green=i;
	screen->repaint();
}

 
void theWindow::OnBlueChanged(int i)
{
	//printf("SliderBlau Wert %d\n",i);
	screen->blue=i;
	screen->repaint();
}
