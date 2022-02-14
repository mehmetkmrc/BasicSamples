//Mehmet-Kömürcü-29.12.2021 time: 02.25AM Lab Assignment#8
#include <iostream>
using namespace std;

class Box{
   private:
       double length,width, height;
   public:
       Box(){ 
           cout << "Box is created by default constuctor!"<<endl;
       }
       Box(double a1,double b1, double c1){
           setWidth(a1);
           setHeight(b1);
           setLength(c1);
           
           cout << "Box is created by parameterized constructor!\nVolume of the box is : "<<a1*b1*c1<<endl;
       }
       ~Box(){  
           cout << "Box is destroyed by destructor"<<endl;
       }
       double getLength(){
           return length;
       }
       double getWidth(){
           return width;
       }
       double getHeight(){
           return height;
       }
       void setWidth(double a){
           width = a;
       }
       void setHeight(double b){
           height = b;
       }
       void setLength(double c){
           length = c;
       }
       double calculateVolume(){
           return length*width*height;
       }
};
int main(){
   double length, width, height;
   for(int counter = 0; counter<10;++counter){
       cout <<endl<< "Please enter dimensions(w l h) : ";
       cin >> length >> width >> height;
       cout <<endl<< "Box #"<<counter+1<<endl;
       if(counter%2==0){
           Box box(width, height, length);
       }else{
           Box box;
           box.setHeight(height);
           box.setLength(length);
           box.setWidth(width);
           cout << "Volume of the box is : "<<box.calculateVolume() << endl;
       }
       cout << "-----------------------------" << endl;
   }
}