//Mehmet Kömürcü-13/12/2021 Assignment 6
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
double a, b;

void calculatingFunction(){
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
 }
int main(){
    cout<<"Enter two integer: ";
    cin>>a>>b;
    calculatingFunction();

    return 0;
}