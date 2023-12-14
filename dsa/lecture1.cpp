#include<iostream>
using namespace std;
int main(){
    cout << "Hello World" << endl;

    //Datatype and Variable 
    int i = 5; // 4byte of storage 
    float f = 2.3; // 4byte of storage 
    long l = 2311200305; // 8byte of storage 
    long long ll = 23112003; // 8byte of storage 
    bool b = true; // 1 byte of storage 
    short s = 2311 ; // 2byte of storage 
    char c = 'A'; // 1 byte of storage
    cout<< i<< endl;
    cout<< f<< endl;
    cout<< l<< endl;
    cout<< ll<< endl;
    cout<< b<< endl;
    cout<< s<< endl;
    cout<< c<< endl;

    // Taking input from User
    int n ;
    cout << "Enter a number : ";
    cin >> n;
    cout << "You entered : " << n << endl;

    // Basic Arithmetic Operation
    cout << "Summation: " << i+f << endl;
    cout << "Subtration: " << i-f << endl;
    cout << "Multiplication: " << i*f << endl;
    cout << "Division: " << l/s << endl;
}