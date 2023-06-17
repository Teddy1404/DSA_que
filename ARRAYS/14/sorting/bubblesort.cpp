#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int>& arr){
    int n = arr.size();
for (int i = 1; i < n; i++)
{
   for (int j = 0; j < n-i; j++)
   {
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
   }
   
}


}



int main(int argc, char const *argv[])
{int n;
    vector<int> arr={9,8,7,6,5,4,3};
    selectionsort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
    cout<<arr[i]<<" ";
    }
    
    return 0;
}
