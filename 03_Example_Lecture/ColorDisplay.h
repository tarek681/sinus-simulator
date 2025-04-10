#include <QWidget>


class ColorDisplay :public QWidget
{
	Q_OBJECT
	public:
	ColorDisplay();
	int red=0;
	int green=0;
	int blue=0;
	protected:
	void paintEvent(QPaintEvent *event);
		
	
	
};
