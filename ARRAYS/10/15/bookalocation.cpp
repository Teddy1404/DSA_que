#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
bool isPossible(vector<int> arr,int n, int m, int mid){
int studentCount = 1;
int pageSum =0;
for (int i = 0; i < n; i++)
{
    if(pageSum + arr[i]<= mid){
        pageSum+= arr[i];
    }
    else
    {
        studentCount++;
        if(studentCount>m || arr[i]>mid){
            return false;
        }
        
        pageSum = arr[i];
    }
}
return true;
}
 
int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int s = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

    }
    int e = sum;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(isPossible(arr,n,m,mid)){
 ans = mid;
 e = mid -1;
        }
        else{
            mid = s+(e-s)/2;
        }
    }
    
    return ans;
}


int main(int argc, char const *argv[])
{
    vector<int> arr;
    int n,m,mid;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }
    cout<<allocateBooks(arr,n,m)<<endl;
    
    
    return 0;
}
