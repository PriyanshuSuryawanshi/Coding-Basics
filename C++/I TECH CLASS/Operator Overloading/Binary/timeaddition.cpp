#include <iostream>
using namespace std;

class Time 
{
    private:
	int hour, minutes, seconds;

    public:
	void setTime(int x, int y, int z)
	{
		hour = x;
		minutes = y;
		seconds = z;
	}

	void display()
	{
		cout <<"Hour = " << hour << " Minutes = " << minutes << " Seconds = " << seconds << "\n";
	}

	void formattime()
	{
		minutes = minutes + seconds / 60;
		seconds = seconds % 60;
		hour = hour + minutes / 60;
		minutes = minutes % 60;
	}

	Time operator+(Time t)
	{
		Time temp;
		temp.seconds = seconds + t.seconds;
		temp.minutes = minutes + t.minutes;
		temp.hour = hour + t.hour;
		temp.formattime();
		return (temp);
	}
};

int main()
{
	Time t1, t2, t3;
    int a1,b1,c1,a2,b2,c2;

    cout << "Enter Hours for Time 1 ";
    cin >> a1;
    cout << "Enter Minutes for Time 1 ";
    cin >> b1;
    cout << "Enter Seconds for Time 1 ";
    cin >> c1;
    t1.setTime(a1,b1,c1);

    cout << "Enter Hours for Time 2 ";
    cin >> a2;
    cout << "Enter Minutes for Time 2 ";
    cin >> b2;
    cout << "Enter Seconds for Time 2 ";
    cin >> c2;
	t2.setTime(a2,b2,c2);

	t3 = t1 + t2;

	t3.display();

	return 0;
}