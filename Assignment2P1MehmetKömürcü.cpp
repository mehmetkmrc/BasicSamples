/*MEHMET KOMURCU ASSİGNMENT PART 1 22-10-2021*/
#include<iostream>
using namespace std;

int main() {
int num1, num2;
char op;



    cout<<"Enter first number for calculation:"<<endl;
    cin>>num1;
    cout<<"enter to operator:"<<endl;
    cin>>op;
    cout<<"Enter second number for calculation:"<<endl;
    cin>>num2;
        if(op == '+'){
            cout<<num1+num2;
        }
        else
            if(op == '-'){
                cout<<num1-num2;
        }
        else
            if(op == '*'){
                cout<<num1*num2;
        }
        else
            if(op == '/'){
                cout<<num1/num2;
        }
        else
            if(op== '%'){
                cout<<num1%num2;
            }

    
    return 0;
}

