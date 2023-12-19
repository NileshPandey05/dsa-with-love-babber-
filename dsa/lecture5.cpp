#include<iostream>
using namespace std;
int main(){
    // Switch Case
    // float a,b;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;
    // int op;
    // cout<<"Enter a Number for Operation\n0.Addition\n1.Subtration\n2.Multiplication\n3.Division"<<endl;
    // cin>>op;
    // float ans;
    //  if(op==0){
    //      ans=a+b;
    //  }else if(op==1){
    //      ans=a-b;
    //  }else if(op==2){
    //      ans=a*b;
    //  }else if(op==3){
    //      ans=a/b;
    //  }else{
    //      cout<<"Invalid Operation"<<endl;
    //      return 0;
    //  }
    // switch(op){
    //     case 0: ans=a+b;
    //         break;
    //     case 1: ans=a-b;
    //         break;
    //     case 2: ans=a*b;
    //         break;
    //     case 3: ans=a/b;
    //         break;
    //     default: cout<<"Invalid Operation"<<endl;
    //         return 0;
    // }
    // cout<<"You ans is:"<<ans<<endl;
    // return 0;
    // Typecasting
    //Implicit Casting
    //1. int to float
    // int num1=10;
    // float num2=5.5;
    // float result=num1+num2;
    // cout<<result<<endl;

    //2. char to int 
    // char ch='a';
    // int a=ch+1;
    // cout<<a<<endl;

    //3.int to char
    // int a=101;
    // char ch=a;
    // cout<<ch<<endl;

    //Explicit casting

    // int num1=10;
    // float num2=5.5;
    // float result = num1 + (int) num2;
    // cout<<result<<endl;

    //1/double to int 
    double pi=3.14159265;
    int intPi=(int)pi;
    cout<<intPi<<endl;

    //2. float to char
    float floatnum=65.5;
    char charvalue=char(floatnum);
    cout<<charvalue<<endl;
}