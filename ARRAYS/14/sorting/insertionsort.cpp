#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int insertionSort(vector<int> &arr){
    int n = arr.size();
  
   
    for (int i = 1; i < n; i++)
    { int temp = arr[i];
    int j= i-1;
        for (; j>=0; j--)
        {
        if(arr[j]>temp){
            arr[j+1] = arr[j];

        }
        else{
            break;
        }
        }
        arr[j+1] = temp;
    }
    

}

int main(int argc, char const *argv[])
{int n;
    vector<int> arr={9,8,7,6,5,4,3};
    insertionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
    cout<<arr[i]<<" ";
    }
    
    return 0;
}
