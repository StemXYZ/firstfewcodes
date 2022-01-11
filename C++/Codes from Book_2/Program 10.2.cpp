#include <iostream>
using namespace std;

//declaration de la classa
class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date(int = 7, int = 4, int = 2012); //constructor
};

//class implementation section
Date::Date(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;
	cout << "Created a new date object with data values "
		<< month << ", " << day << ", " << year << endl;
}

int main()
{
	Date a;
	Date b;
	Date c(3,3,2033);

	return 0;
}