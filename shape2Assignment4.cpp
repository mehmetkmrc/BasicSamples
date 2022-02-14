//Mehmet kömürcü shape 2 assignment4
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int i,j,k,num;
   cout <<"Enter number of the lines: ";
   cin>> num;
   for(i=-num;i<=num;i++)
   {
      k=i;
      if(k<0)
      {
         k = k *-1;
      }
      for (j = 0; j <= num; ++j)
      {
         if (j<k)
         {
            cout<< "  "; 
         }
         else
         {
            cout<<"*";
         }
      }
      cout<<"\n";
   }
   return 0;
}