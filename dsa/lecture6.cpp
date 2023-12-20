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
//  int sumOfThreeNumber(int x,int y,int z){
//     int sum=x+y+z;
//     return sum;
    
//  }
//  int main(){
//    int sum = sumOfThreeNumber(10,10,10);
//    cout<<"Sum is:"<<sum<<endl;
//  }
 // Q2 Find max of 3 number 
//  void findMaxValue(int x,int y,int z){
//     if(x>y){
//         if(x>z){
//             cout<<x<<endl;
//         }
//         else{
//             cout<<z<<endl;
//         }
//     }else{
//         cout<<y<<endl;
//     }
//  }
//  int main(){
//     int x,y,z;
//     cout<<"Enter a three number:";
//     cin>>x>>y>>z;
//     findMaxValue(x,y,z);

//  }
 // Q3 Counting from 1 to n
//  void count(int x){
//     for(int i=1;i<=x;i++){
//         cout<<i<<endl;
//     }
//  }
//  int main(){
//     int x;
//     cout<<"Enter a Number:";
//     cin>>x;
//     count(x);
//  }
 // Q4 Check number is prime or not 
//  void numberPrime(int x){
//     if(x%2==1){
//         cout<<"Enter number is Prime"<<endl;
//     }
//     else{
//         cout<<"Enter Number is not Prime Number"<<endl;
//     }
//  }
//  int main(){
//     int x;
//     cout<<"Enter a Number:";
//     cin>>x;
//     numberPrime(x);
//  }

 // Q5 check number is even or old
//   void numberIsEvenOrOdd(int x){
//     if(x%2==0){
//         cout<<"Enter Number is Even"<<endl;
//     }
//     else{
//         cout<<"Enter Number is Odd"<<endl;
//     }
//   }
//   int main(){
//     int x;
//     cout<<"Enter a Number:";
//     cin>>x;
//     numberIsEvenOrOdd(x);
//   }
 // Q6 sum of all no upto 1-n
//   void sumOfAllNumber(int x){
//     int sum=0;
//     for(int i=1;i<=x;i++){
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
//   }
//   int main(){
//     int x;
//     cout<<"Enter a Number:";
//     cin>>x;
//     sumOfAllNumber(x);

//   }
 // Q7 sum of all even number upto 1-n
 void sumOfEvenNumber(int x){
    int sum=0;
    for(int i=1;i<=x;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
 }
 int main(){
    int x;
    cout<<"Enter a Number:";
    cin>>x;
    sumOfEvenNumber(x);
 }

