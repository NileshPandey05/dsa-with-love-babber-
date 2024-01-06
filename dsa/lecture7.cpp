#include<iostream>
// #include<limit.h>
#include<vector>
using namespace std;
int main(){
    // We learn about Array
    // what is array
    // why we need array
    // int arr[10];
    // // address of array 
    // cout << arr <<endl;
    // cout<<sizeof(arr)<<endl;
    // int arra[5]={1,2,3,4,5};
    // int array[10]={1,2,3,4,5};
    // cout << array[2] <<endl;
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // for(int i=0;i<=10;i++){
    //     cout << arr[i] << endl;
    // }
    // int arr[100];
    // int n;
    // cout<<"How many number you want to add in array" << endl;
    // cin >> n;
    // cout<<"Enter the number "<<endl;
    
    // for(int i=0;i<10;i++){
    //     cin >> arr[i];
    // }

    // cout << "Double:" << endl;
    // for(int i=0;i<10;i++){
    //     cout << arr[i] << " ";
    // }

    // int arr[]={1,3,5,7,9};
    // for(int i=0;i<5;i++){
    //     arr[i]=1;
    // }
    // for(int i=0;i<5;i++){
    //     cout << arr[i] << " ";
    // }

    // int arr[5]={1,3,5,7,8};
    // int size = 5;
    // cout << "Enter the key to find" << endl;
    // int key;
    // cin >> key
    // if(find(arr,size,key)){
    //     cout<< "Found" << endl;
    // }else{
    //     cout << "Not Found" <<endl;
    // }


    // count 0's and 1's
    // int arr[]={0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
    // int size = 15;

    // int numZero=0;
    // int numOne=0;
    // for(int i=0;i<size;i++){
    //     // if zero found ,increment numZero
    //     if(arr[i]==0){
    //         numZero++;
    //     }
    //     // if One found ,increment numOne
    //     if(arr[i]==1){
    //         numOne++;
    //     }
    // }
    // cout << "Number of Zero" << numZero << endl;
    // cout << "Number of Ones" << numOne << endl;

    //Maximum Number in an array
    // int arr[]={2,4,6,1,3,7,9,12,56,43,21};
    // int size=11;
    // int max = INT_MIN;
    // for(int i=0;i<size;i++){
    //     if(arr[i]>max){
    //         //found a number greater then max ,update maxi
    //         max=arr[i];
    //     }
    // }
    // cout << "Maximum number is" << max << endl;

    //Find minimum number in an array
    // int arr[]={2,4,6,1,3,7,9,12,56,43,21};
    // int size=11;
    // int max = INT_MIN;
    // int min = INT_MAX;
    // for(int i=0;i<size;i++){
    //     if(arr[i]<min){
    //         //found a number greater then max ,update maxi
    //         min=arr[i];
    //     }
    // }
    // cout << "Maximum number is" << min << endl;

    // Extreme print in array
    // int arr[8]={10,20,30,40,50,60,70,80};
    // int size=8;
    // int start=0;
    // int end=size-1;

    // while(true){
    //     if(start>end)
    //         break;
    //     if(start==end)
    //         cout << arr[start] << " ";
    //     else{
    //         cout << arr[start] << " ";
    //         cout << arr[end] << " ";
    //     }
    //     start++;
    //     end--;
    // }
 
    
    // Reverse an array
    // int arr[8]={10,20,30,40,50,60,70,80};
    // int size=8;
    // int start=0;
    // int end=size-1; 
    // while(start<=end){
    //     //step 1
    //     swap(arr[start],arr[end]);
    //     // step 2
    //     start++;
    //     // step 3
    //     end--;
    // }
    // //Printing array
    // for(int i=0;i<size;i++){
    //     cout << arr[i] << " ";
    // }

    // // Reverse an array by using three variable
    //  int arr[8]={1,2,3,4,5,6,7,8};
    // int size =8;
    
    // int start=0;
    // int end = size-1;
    // while(start<end){
    //     int temp=arr[end];
    //     arr[end]=arr[start];
    //     arr[start]=temp;
    //     start++;
    //     end--;
    // }
    // for(int i=0;i<size;i++){
    //     cout << arr[i] <<endl;
    // }

    // Vector 
    //syntax vector<int> arr(10,20,30)
    // #include<vector>
    
    vector<int> arr;

    // int ans=(sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    //insert
    arr.push_back(5);
    arr.push_back(6);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    
    //delete
    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    vector<int> brr(n,90);
    cout << "Size of brr " << brr.size() <<endl;
    cout << "Capacity of brr " << brr.capacity() <<endl;
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout<<endl;

    vector<int> crr{40,50,46,70};
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout<<endl;

    cout << "Vector crr is empty or not " << crr.empty() <<endl;
    
    vector<int> drr;
    cout << "Vector drr is empty or not " << drr.empty() <<endl;

    return 0;
    //vector
}