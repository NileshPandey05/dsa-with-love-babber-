#include<iostream>
#include<vector>

using namespace std;

// int findUnique(vector<int> arr){
//   int ans =0;
//   for(int i=0;i<arr.size();i++){
//     ans = ans^arr[i];
//   }
//   return ans;
// }

// int main(){

//   //q1 find unique element(every element occur once expect one)

//   int n;
//   cout<< "Enter the size of array" << endl;
//   cin >> n;
//   vector<int> arr(n);
//   cout << "Enter the elements" << endl;
//   // taking input
//   for(int i=0;i<arr.size();i++){
//     cin >> arr[i];
//   }

//   int uniqueElement = findUnique(arr);

//   cout << "Unique Element is " << uniqueElement << endl;
//   return 0;

//}
#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int> arr){
  int ans=0;
  for(int i=0;i<arr.size();i++){
    ans=ans^arr[i];
  }
  return ans;
}
int main(){

  //Unique Element
  // int n;
  // cout << "Enter the size of arrar:" << endl;
  // cin >> n;
  // vector<int> arr(n);
  // cout << "Eneter the elements of array:" << endl;
  // for(int i=0;i<arr.size();i++){
  //   cin >> arr[i];
  // }
  // int uniqueElement = findUnique(arr);
  // cout << "Unique Element is:" << uniqueElement << endl;

  //Union of 2 array
  int arr[]={1,3,5,7,9};
  int sizea=5;
  int brr[]={2,4,6,8};
  int sizeb=4;
  vector<int> ans;
  for(int i=0;i<sizea;i++){
    ans.push_back(arr[i]);
  }
  for(int i=0;i<sizeb;i++){
    ans.push_back(brr[i]);
  }
  cout << "Printing ans array:" << endl;
  for(int i=0;i<ans.size();i++){
    cout << ans[i] << " ";
  }
  
   return 0;
}