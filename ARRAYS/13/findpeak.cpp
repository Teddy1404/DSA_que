#include<iostream>
using namespace std;

int peak(int arr[],int n){
    int s= 0;
    int e = n-1;
    int mid = s+(e-s)/2;
   
   while (s<e)
   {
    if(arr[mid]<arr[mid+1]){
        s = mid+1
;    }
else{
    e = mid;
  
   }
     mid = s+(e-s)/2;}
     return mid;
}
int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,2,1};
    cout<<peak(arr,5);

    return 0;
}
