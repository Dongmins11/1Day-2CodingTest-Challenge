#include <iostream>

using namespace std;

int main(void)
{
	int Hour = 0;
	int Minute = 0;
	int Timer = 0;

	cin >> Hour >> Minute;
	cin >> Timer;

	Minute += Timer;

	if (Minute > 59)
	{
		Hour += (Minute / 60);
		Minute %= 60;
	}

	if (Hour > 23)
		Hour %= 24;


	printf("%d %d \n", Hour, Minute);

	return 0;
}
//6	2525	¿Àºì ½Ã°è