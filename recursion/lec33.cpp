// #include<iostream>
// using namespace std;
// int getSum(int arr[],int size){
//     if(size == 0)
//     {
//         return 0;
//     }
//     if(size == 1)
//     {
//         return arr[0];
//     }
//     int remaining = getSum(arr+1, size-1);
//     int sum = arr[0] + remaining;
//     return sum;
// }
// int main(int argc, char const *argv[])
// { int arr[5] = {2,4,9,9,9};
// int size = 5;
// int sum = getSum(arr,size);
// cout<<"sum is "<<sum<<endl;
    
//     return 0;
// }

//linear search using recursion

// #include<iostream>
// using namespace std;

// bool linearsearch(int arr[],int size, int key){
//   if(size == 0)
//   {return false;}
  
//   if(arr[0] == key)
//   {return true;}
//   else{
//     bool remaining  = linearsearch(arr+1,size-1,key);
//     return remaining;
//   }
// }
// int main(int argc, char const *argv[])
// {
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;
//     int key = 3;
//     int ans = linearsearch(arr,size,key);
//     if(ans){
//         cout<<"present"<<endl;

//     }
//     else{
//         cout<<"absent"<<endl;
//     }
//     return 0;
// }

//recursion binary search
#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e,int k){
    if(s>e)
    {
        return false;
    }
int mid = s + (e-s)/2;
if (arr[mid] == k)
{
    return true;
}
if(arr[mid] < k){
    return binarysearch(arr,mid+1,e,k);
}
if(arr[mid] < k)
{
    return binarysearch(arr,s,mid-1,k);

}

}
int main(int argc, char const *argv[])
{
    int arr[6] = {2,4,6,10,14};
    int size = 6;
    int k = 16;
    cout<<"Present or not  "<<binarysearch(arr,0,5,k)
    <<endl;
    return 0;
}
