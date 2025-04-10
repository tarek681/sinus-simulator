#include <QApplication>
#include <QLabel>
#include <QPicture>
#include <QPainter>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMainWindow>
#include <QSlider>
#include <QTimer>
#include "ColorDisplay.h"


class theWindow : public QMainWindow{
    Q_OBJECT
public:
	theWindow();
	QSlider *sld1;
	QSlider *sld2;
	QSlider *sld3;
	QWidget *wdg;
	QVBoxLayout *vlay;
	ColorDisplay *screen;
	
	
	
public slots:
	void OnRedChanged(int i);
	void OnGreenChanged(int i);
	void OnBlueChanged(int i);
	
private:
    
};
