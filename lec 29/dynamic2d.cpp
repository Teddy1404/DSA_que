#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int row ;
    cin>>row;
    int col;
    cin>>col;

    //creating 2d array

    int** arr = new int*[row];
    for (int i = 0; i < row; i++)
    {
        /* code */
        arr[i] = new int[col];
    }
    //taking input
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            /* code */
            cin>>arr[i][j];
        }
        
    }
    //output 
    cout<<endl;
    for (int i = 0; i < row; i++)

    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            cout<<arr[i][j];
        }cout<<endl;
        
    }
    //release memory
    
    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }
    delete []arr;
    
    return 0;
}
