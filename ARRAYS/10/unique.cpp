// C++ program to find XOR of numbers
// from 1 to n.
#include <bits/stdc++.h>
using namespace std;
int computeXOR(int *arr ,int size)
{
	int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
    
}
int main()
{
	int arr[5]={2,4,7,2,7};
	int result = computeXOR(arr,5);
	cout << result << endl;
	return 0;
}
/* This code is contributed by Rishab Dugar */
