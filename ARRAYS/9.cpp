// #include<iostream>
// #include<climits>
// using namespace std;

// int getmax(int arr[],int n){
//     int max = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>max)
//         {
//             max = arr[i];
//         }
//         return max;
//     }
    
// }
// int main(int argc, char const *argv[])
// {
//     int i,n,arr[100];
//     cin>>n;
//    for (int i = 0; i < n; i++)
//    {
//     cin>>arr[i];
//    }
//  cout<<getmax(arr,n)<<endl;
//     return 0;
// }
#include <iostream>
#include <climits>
using namespace std;

int main() {
  
  int n, max = INT_MIN ,min = INT_MAX;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  
  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    max = std::max(max, arr[i]);
    min = std::min(min,arr[i]);

  }
  
  cout << "The largest number in the array is: " << max << endl;
  cout << "The smallest number in the array is: " << min << endl;
  
  return 0;
}
