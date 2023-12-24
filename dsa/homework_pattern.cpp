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
   // full pramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
   // numeric rectangle
//    int a=1;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n;col++){
//             cout<<a;
//             a=a+1;
//         }
//         cout<<endl;
//     }
//right angled triangle
// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
//}
//numeric pramids
// int count=1;
//  for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<count;
//         count=count+1;
//     }
//     cout<<endl;
//  }
//  for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<row;
//     }
//     cout<<endl;
//  }
 int row,col;
 // full  pyramid
//  for( row=0;row<n;row++){
//     int value=row;
//     for(col=0;col<(n-row-1);col++){
//         cout<<"  ";
//     }
//     for(int col=1;col<(2*(row+1));col++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }
 //full inverted pyramid
//  for( row=0;row<n;row++){
//     int value=row;
//     for(col=0;col<row;col++){
//         cout<<"  ";
//     }
//     for(int col=1;col<(2*(n-row));col++){
//          cout<<"* ";
//     }
//     cout<<endl;
//  }
    //Dimond pattern
//    int n=num/2;
//     for( row=0;row<n;row++){
//     int value=row;
//     for(col=0;col<(n-row-1);col++){
//         cout<<"  ";
//     }
//     for(int col=1;col<(2*(row+1));col++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }
//  for( row=0;row<n;row++){
//     int value=row;
//     for(col=0;col<row;col++){
//         cout<<"  ";
//     }
//     for(int col=1;col<(2*(n-row));col++){
//          cout<<"* ";
//     }
//     cout<<endl;
//  }
    //hollow full pyrami
}