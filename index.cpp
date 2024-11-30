#include<iostream>
using namespace std;
int main(){
   int op;
   cout<<"Enter the fruit and vegetables:";
   cin>>op;
   switch(op)
   {
      case 1:cout<<"Enter the fruits name apple for 1 , orange for 2:";
      cin>>op;
      switch(op){
         case 1: cout<<"apple";
         break;
         case 2:cout<<"orange";
         break;
         default:cout<<"invalid";
      }
      break;
      
      case 2:cout<<"Enter the vegetables name allu for 1 , carrot for 2:";
      cin>>op;
      switch(op){
         case 1: cout<<"allu";
         break;
         case 2:cout<<"carrot";
         break;
         default:cout<<"invalid";
      }
      break;
       
   }
}