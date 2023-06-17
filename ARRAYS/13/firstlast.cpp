#include<iostream>
using namespace std;

int first(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
   int ans = -1;
    while ((s<=e))

    {
        if (arr[mid]==key){
            ans = mid ;
            e = mid -1;
        }
        if(key<arr[mid]){
            e = mid-1;
        }
        if(key>arr[mid]){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int last(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
   int ans;
    while ((s<=e))

    {
        if (arr[mid]==key){
            ans = mid ;
            s = mid +1;
        }
        if(key<arr[mid]){
            e = mid-1;
        }
        if(key>arr[mid]){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int even[5]={1,2,3,3,5};
    cout<<first(even,5,3);
    cout<<last(even,5,3);
        return 0;
        //for total occureence it will be (last index-first index)+1
}
