#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int>& arr){
    int n = arr.size();
for (int i = 0; i < n-1; i++)
{
    int minIndex = i;
    for (int j=i+1; j<n; j++)
    {
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
    }
   if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
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
