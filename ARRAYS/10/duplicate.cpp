#include<iostream>
using namespace std;

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void duplicate(int arr [], int n){
   int i,j;
   for (int i = 0; i < n; i++)
   {
    for (int j = i+1; j < n; j++)
    {
      if (arr[i]==arr[j])
      {
        cout<<arr[i]<<" ";
        break;
      }
        
    }
    
   }
   
    
}
int main(int argc, char const *argv[])
{
    int n,arr[100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }
    
    duplicate(arr,n);
   
    return 0;
}
