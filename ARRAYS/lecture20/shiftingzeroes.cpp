#include<iostream>
using namespace std;
void shiftZero(int arr[],int n){
   int nonZero=0;
   for (int j = 0; j < n; j++)
   {
    if (arr[j]!=0)
    {
        swap(arr[j],arr[nonZero]);
        nonZero++;
    }
   
    
   }
   

}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(int argc, char const *argv[])
{
    int arr[6] = {1,0,0,3,12,0};
    shiftZero(arr,6);
    print(arr,6);
    return 0;
}
