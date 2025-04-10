#include "ColorDisplay.h"


ColorDisplay::ColorDisplay()
{
	setMinimumHeight(400);
	setMinimumWidth(400);
	setAutoFillBackground(true);
}

void ColorDisplay::paintEvent(QPaintEvent *event)
{
	QPalette palette;
	palette.setColor(QPalette::Background,QColor::fromRgb(red,green,blue));
	this->setPalette(palette);
}
