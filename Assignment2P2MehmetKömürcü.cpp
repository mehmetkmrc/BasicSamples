//Mehmet kömürcü 26.10.2021
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char x, c, chLower, chUpper;
    int ascii;
    string chUpper, chLower;
    chUpper = ascii;
    chUpper = ascii+32;
    chLower = ascii;
    chLower = ascii-32;    
    cout<<"Sir, enter the character: ";
    cin>>c;
    if(c<91&&c>65){
        chUpper=c+32;
        
        cout<<chUpper<<endl;
        
    }
    else if(c<123&&c>96){
        chLower=c-32;
        
        cout<<chLower<<endl;
        
    }
    else{
        cout<<"Error! There is no character!";
    }

    return 0;
    
}