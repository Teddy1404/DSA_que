#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> v = {0,1,2,2,1,0};
      for(int i:v){
        cout<<i<<" ";
        
    }
    cout<<endl;
    sort(v.begin(),v.end());

    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}
