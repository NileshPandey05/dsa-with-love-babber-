#include<iostream>
using namespace std;
int main(){
    // Make a Rectangle Pattern
    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            cout<<"* " ;
        }
        cout<<endl;
    }
    //Hollow Rectangle 
    for(int row=0;row<5;row++){
        //inner loop
        for(int col=0;col<5;col++){
            if(row==0||row==4){
                cout<<"* ";
            }
            else{
                if(col==0||col==4){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    // Half Peramid Pattern
    int n;
    cin>>n;
    for(int ask=0;ask<n;ask++){
        for(int num=0;num<ask+1;num++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // Inverted Half Peramid Pattern
    int x;
    cin>>x;
    for(int ask=0;ask<x;ask++){
        for(int num=0;num<x-ask;num++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // Half Alphabet Numeric
    for(int row=0;row<5;row++){
        for(int col=0;col<row+1;col++){
            cout<<char(65+col);
        }
        cout<<endl;
    }
    // Inverted Half Alphabet Numeric
    for(int row=0;row<5;row++){
        for(int col=0;col<5-row;col++){
            cout<<char(65+col);
        }
        cout<<endl;
    }
    // Half Numeric Pyramid
    for(int row=0;row<5;row++){
        for(int col=0;col<row+1;col++){
            cout<<col+1;
        }
        cout<<endl;
    }
    // Inverted Half Numeric Pyramid
    for(int row=0;row<5;row++){
        for(int col=0;col<5-row;col++){
            cout<<col+1;
        }
        cout<<endl;
    }
    // binary pattern
    for(int a=0;a<6;a++){
        for(int b=0;b<a+1;b++){
            if(a%3==1){
                cout<<"1 ";
            }
            else{
                if(a%2==0){
                    cout<<"0 ";
                }
            }
        }
        cout<<endl;
    }
}