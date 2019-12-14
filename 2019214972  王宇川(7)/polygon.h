class Point {
private:
	int x, y;
public:
	Point(int x =0,int y=0);
	int getx();
	int gety();
	void show(); 
};
class Line {
private:
	Point p1, p2;
public:
	Line(int x1=0, int y1=0, int x2=0, int y2=0);
	Line(Point p1, Point p2);
	double length();
	Point getp1();
	Point getp2(); 
	void show(); 
};
class Polygon {
private:
	Line* p;
	int edges;
public:
	Polygon(Line*, int edge_num); 
	Polygon(Point*, int point_num);
	double area(); 
	double perimeter(); 
	void show(); 
};
