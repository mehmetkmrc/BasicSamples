#include <iostream>
#include <cmath>
using namespace std;


void ageFinder(int current_date, int current_month,
			int current_year, int birth_date,
			int birth_month, int birth_year)
{
	
	int month[] = { 31, 28, 31, 30, 31, 30, 31,
						31, 30, 31, 30, 31 };	
	if (birth_date > current_date) {
		current_date = current_date + month[birth_month - 1];
		current_month = current_month - 1;
	}	
	if (birth_month > current_month) {
		current_year = current_year - 1;
		current_month = current_month + 12;
	}
	
	int calculated_date = current_date - birth_date;
	int calculated_month = current_month - birth_month;
	int calculated_year = current_year - birth_year;

	cout<<"Your age is: "<<calculated_year<< " years "<<calculated_month<< " months "<<calculated_date<< " days."; 

}
int main()
{	
	int current_date;
	int current_month;
	int current_year;
    cout<<"Please enter today's date: ";
    cin>>current_date>>current_month>>current_year;
	
	int birth_date;
	int birth_month;
	int birth_year;
    cout<<"Please enter your birthday: ";
    cin>>birth_date>>birth_month>>birth_year;

	ageFinder(current_date, current_month, current_year,
			birth_date, birth_month, birth_year);
	return 0;
}
