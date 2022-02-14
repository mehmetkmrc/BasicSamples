//MEHMET KÖMÜRCÜ 23.11.2021

#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int num1, num2, x, choice;

void printMessageFirst(){
    string myMenu[7]={"  **** MY MENU ****", "1. Addition",
    "2. Subtraction", "3. Division","4. Multiplication", 
    "5. Modulo", "6. Exit"};
    for(int i=0; i<7; i++){
        cout<<myMenu[i]<<"\n";
    }
}
    int main(){
        printMessageFirst();
        cout<<"Please choose a choice: \n";
        cin>>choice;
  switch (choice) {

  //Addition
      case 1:
         cout << "Enter two numbers: \n";
         cin >> num1 >> num2;
         x = num1 + num2;
         cout << "Sum = " << x;
         break;

      //Subtraction
      case 2:
         cout << "Enter two numbers: \n";
         cin >> num1 >> num2;
         x = num1 - num2;
         cout << "Subtraction = " << x;
         break;

      //Division
      case 3:
         cout << "Enter Dividend: \n";
         cin >> num1 >> num2;
         x = num1 / num2;
         cout << "Enter Divisor = " << x;
         break;

      //Mutiplication
      case 4:
         cout << "Enter two integers: \n ";
         cin >> num1 >> num2;
         x = num1 * num2;
         cout << "Product: "<<x;
         break;
      //Modulo
      case 5:
         cout <<"Enter 2 integers: \n ";
         cin >> num1>>num2;
         x = num1 % num2;
         cout << "Modul: "<<x;
         break;
  }
    
    return 0;
}