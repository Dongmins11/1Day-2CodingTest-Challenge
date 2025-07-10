#include<iostream>

using namespace std;

int main(void)
{
	int hour;
	int minute;

	int DefalutValue = 45;

	int ResultHour = 0;
	int ResultMinute = 0;

	cin >> hour >> minute;

	bool isPreMin = (minute - DefalutValue) < 0;

	if (isPreMin)
	{
		ResultMinute = 60 + minute - DefalutValue;
		--hour;
	}
	else
	{
		ResultMinute = minute - DefalutValue;
	}

	if (hour < 0)
		hour = 23;

	printf("%d %d \n", hour, ResultMinute);

	return 0;
}

//5	2884	알람 시계