#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int mark;
  cout<< "Enter your mark :";
  cin>>mark;
  if(mark>32)
  {
   if(mark>85){
    cout<< "Grade:A+"<<endl;
   }
   else  if(mark>80){
    cout<< "Grade:A"<<endl;
   }
   else if(mark>70){
    cout<< "Grade:A-"<<endl;
   }
   else if(mark>60){
    cout<< "Grade:B"<<endl;
   }
   else if(mark>50){
    cout<< "Grade:B-"<<endl;
   }
   else if(mark>45){
    cout<< "Grade:C"<<endl;
   }
   else if(mark>35){
    cout<< "Grade:D"<<endl;
   }
  }
  else
  {
   cout<< "Fail"<<endl;
  }

 getch() ;
}

