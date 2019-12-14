using namespace std;
class Clock
{
public:
	Clock(int hour = 0, int minute = 0, int second = 0);
	void setTime(int h, int m, int s);
	void showtime();
	int interval(int h, int m, int s);
private:
	int hour;
	int minute;
	int second;
};