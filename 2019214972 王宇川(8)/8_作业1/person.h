#include<string>
using namespace std;
class person
{
public:
	person();
	person(string n,string g,int a=0);
	void print_info();
protected:
	string gender;
	string name;
	int age;
};
class student :public person
{
public:
	student();
	student(string n, string g, int a ,string m,int g1);
	void print_info();
public:
	string major;
	int grade;

};