#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v;
    vector<int> a(5,1);
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<endl;
    }
    cout<<"capcity "<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<"before pop ";
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"after pop ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<v.size()<<endl;
    v.clear();
    cout<<v.size();
   
    return 0;
}
