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
    cout<<(a<<-1)<<endl;
    return 0;
}