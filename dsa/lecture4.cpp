#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=7;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    bool num=1;
    cout<<~num<<endl;
    cout<<~(num)<<endl;
    cout<<(a<<1)<<endl;
    // Pre/Post Increment and Decrement
    cout<<((++a)*(a++))<<endl;
    cout<<a<<endl;
    //Breake and Continue
    for(int i=0;i<5;i++){
        cout<<i<<endl;
        if(i==2){
            break;  // This will stop the loop when it reaches to value of '2'
        }
    }
    for(int i=0;i<5;i++){
        cout<<"Hello Jee"<<endl;
        continue;
        cout<<"Kaise ho saare"<<endl;
    }
    return 0;
}