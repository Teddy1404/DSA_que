#include<iostream>
using namespace std;
void sortedArray (int *arr,int n)
{
    if(n==0|| n==1)
    {
        return ;
    }

    //1 case solve krlo baaki recusrsion kr lega 
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursion
    sortedArray(arr,n-1);
}
int main(int argc, char const *argv[])
{
    int arr[5]={2,5,1,6,9};
    sortedArray(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
