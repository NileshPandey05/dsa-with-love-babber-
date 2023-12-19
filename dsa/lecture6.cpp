#include<iostream>
using namespace std;
// Function

// void sumOfTwoNumber(int a,int b){
//     int sum =a+b;
//     cout<<sum<<endl;
// }
// int main(){
//     int a,b;
//     cout<<"Enter Two Number:-"<<endl;
//     cin>>a>>b;
//     sumOfTwoNumber(a,b);
//     return 0;
// }
    // Function call stack

 // Q1. write a function to print sum of 3 number 
 void sumOfThreeNumber(int x,int y,int z){
    int sum=x+y+z;
    cout<<"Sum of Three Number is:-"<<sum<<endl;
    
 }
 int main(){
    sumOfThreeNumber(10,10,10);
 }