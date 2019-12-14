class shape
{
public:
	void setdata(double x1,double y1);
	virtual double getarea()=0;
	virtual double getperim()=0;
protected:
	double x;
	double y;

};
class rectangle :public shape
{
public:
	double getarea();
	double getperim();
};
class circle :public shape
{
public:
	double getarea();
	double getperim();
};