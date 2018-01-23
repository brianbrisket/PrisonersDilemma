#include <iostream>

using namespace std;

enum Outcome
{
	worst,
	third,
	second,
	best
};

int main()
{
	cout << "best: " << best << endl;
	cout << "second: " << second << endl;
	cout << "third: " << third << endl;
	cout << "worst: " << worst << endl;

	cin.ignore();
	cin.get();
}