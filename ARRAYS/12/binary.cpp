#include<iostream>//complexity is BIG O(LOGN)
using namespace std;

int search_binary(int arr[],int n, int key){
    int start = 0;
    int end = n-1;

    // int mid = (start + end)/2;
    //to avoid a value of mid that is out range we write it like this.
   int  mid = start + (end - start)/2;

    while (start<=end)
    {
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
         start  = mid + 1;
        }
        else{
            end = mid - 1;
        }
       mid = start + (end - start)/2;
       //update in new form here also
    }
    return -1;
    
}


int main(int argc, char const *argv[])
{
    int even[6] = {2,4,6,8,10,12};
    int odd[5]= {3,8,11,14,16};
    int evenindex = search_binary(even,6,10);
    int oddindex = search_binary(odd,5,16);
    cout<<"index of 10 is "<<evenindex<<endl;
    cout<<"index of 16 is "<<oddindex<<endl;

    return 0;
}
