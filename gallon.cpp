#include <iostream>

using namespace std;

int main()
{
	float gallons_in_cubic_foot = 7.748;
	float gallons, cubic_feet_result;
	while(1){
		cout << "Enter a number of gallons to be converted to cubic feet:" << endl;
		cin >> gallons;
		cubic_feet_result = gallons / gallons_in_cubic_foot;
		cout << "The number of cubic feet occupied by " << gallons << " gallons is: " << cubic_feet_result << endl;
	}
	return 0;
}
