#include<iostream>
using namespace std;


int getSum(int *arr , int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum += arr[i];

    }
    return sum;
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
//arr[i] = *(arr+i)
    //variable size array 
    int* arr = new int[n];

    //take input array
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int ans = getSum(arr,n);
    cout<<ans;
    return 0;
}
