#include<iostream>
using namespace std;
int main(){
    //solid square pattern
    int n;
    cin>>n;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    //hollow square pattern
    // for(int row=0;row<n;row++){
    //     //inner loop
    //     for(int col=0;col<n;col++){
    //         if(row==0||row==n-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             if(col==0||col==n-1){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }
    // full prramid
    for(int i=0;i<n;i++){
    int k=0;
    for(int j=0;j<((2*n)-1);j++){
        if(j<n-i-1){
            cout<<" ";
        }else if(k<2*i+1){
            cout<<("*");
            k++;
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}