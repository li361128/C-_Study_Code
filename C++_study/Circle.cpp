//#define _CRT_SECURE_NO_WARNINGS 1
//#include"FunctionDeclaration.h"
//#include"Point.h" 
//
//
//
//class Circle {
//public:
//	void setR(int r) {
//		m_R = r;
//	}
//	int getR() {
//		return m_R;
//	}
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//	Point getCenter() {
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;
//};
//
//void isCircle(Circle& c, Point& p) {
//	int distance =
//		(c.getCenter().getX() - p.getX() )* (c.getCenter().getX() - p.getX()) +
//			(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int rDistance = c.getR() * c.getR();
//	if (distance == rDistance) {
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rDistance) {
//		cout << "点在圆外" << endl;
//	}
//	else {
//		cout << "点在圆内" << endl;
//	}
//}
//
//int main() {
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//	Point p;
//	p.setX(10); 
//	p.setY(10);
//	isCircle(c, p);
//	system("pause");
//	return 0;
//}
