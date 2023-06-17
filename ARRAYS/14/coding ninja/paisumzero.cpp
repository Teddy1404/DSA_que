#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n){
    int t;
    cin>>t;
   while (t--)
   {
     vector<vector<int>> ans;
       for (int i = 0; i < arr.size(); i++)
    {
        for (int j= i+1; j <= arr.size(); j++)
        {
        for (int k = j+1; k<arr.size(); k++)
        {
            if(arr[i]+arr[j]+arr[k]== 0){
               vector<int> temp;
               temp.push_back(min(arr[i],arr[j],arr[k]));
               temp.push_back(max(arr[i],arr[j],arr[k])); 
               ans.push_back(temp);
            }
        }
        
        }
        
    }
    sort(ans.begin(),ans.end());
    return ans;
   }
   
}