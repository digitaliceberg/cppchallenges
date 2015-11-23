#include <iostream>

using namespace std;

int main()
{
	float celcius, fahrenheit;
	while(1)
	{
		cout << "Enter value in Celcius to be converted to Fahrenheit:" << endl;
		cin >> celcius;
		fahrenheit = (celcius * 9 / 5) + 32;
		cout << celcius << " Celcius in Fahrenheit is: " << fahrenheit << endl;
	}
	return 0;
}
