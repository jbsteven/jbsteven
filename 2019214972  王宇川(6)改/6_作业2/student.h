#define _CRT_SECURE_NO_WARNINGS
using namespace std;
class Student
{
public:
	Student();
	void setdata(float m, float p, float e, char n[], char identity[]);
	float sum();
	void showinfo();
	char* showid(char identity[]);
	~Student();
private:
	char id[11];
	char* name;
	float math;
	float physics;
	float english;
}; 
