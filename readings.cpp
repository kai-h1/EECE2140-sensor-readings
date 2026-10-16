// readings.cpp: average of three temperature readings
#include <iostream>
using namespace std;

int main()
{
	double t1 = 0, t2 = 0, t3 = 0;
	cout << "Enter 3 temperature readings in C seperated by spaces: " << endl;
	cin >> t1 >> t2 >> t3;

	double average = (t1 + t2 + t3) / 3.0;

	cout << "Readings: " << t1 << " " << t2 << " " << t3 << endl;
	cout << "Average: " << average << " C" << endl;
	return 0;
}