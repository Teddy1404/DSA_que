// // reverse array
// #include<iostream>
// using namespace std;



// void alter(int arr[],int n){
//     for (int i = 0; i < n; i+=2)

//     {
//         if (i+1<n)
//         {
//             // swap(arr[i],arr[i+1]);
//             int temp = arr[i+1];
//             arr[i+1]= arr[i];
//             arr[i]= temp;
//         }
        
//     }
    
// }
// void reverse(int arr[],int n){
//     int start = 0;
//     int end = n-1;
//     for (int i = start; i <= end; i++)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
    
// }
// void display(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//      cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(int argc, char const *argv[])
// {
//     int arr[6]={1,2,3,4,5,6};
//     // reverse(arr,6);
//     alter(arr,6);

//     display(arr,6)
// ;    return 0;
// }
