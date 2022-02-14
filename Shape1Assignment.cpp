//Mehmet Kömürcü shape 1 assignment4
#include <iostream>
using namespace std;


int i, a, lines;

int main()
{
	cout << "Please enter number of lines:";
	cin >> lines;


	for (i = 0; i < lines; i++) {
		for (a = 0; a < lines; a++) {
			if (a > i - 2 && a < lines - i && i % 2 == (lines & 1))
				cout << "x";
			else if (a < i - 1 && a < lines - i && a % 2 == (lines & 1))
				cout << "x";
			else if (a > lines - i - 1 && a > i && a % 2 == ((lines + 1) & 1))
				cout << "x";
			else if (a < i + 1 && a > lines - i - 1 && i % 2 == ((lines + 1) & 1))
				cout << "x";
			else
				cout << " ";

		}
		cout << "\n";

   }

}