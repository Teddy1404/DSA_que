#include<iostream>
#include<set>
using namespace std;
int main(int argc, char const *argv[])
{
    set <int> s;

    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(6);
    s.insert(8);
    s.insert(1);
 for(int i:s){
        cout<<i;
    }
    cout<<endl;

    
    s.erase(s.begin());
    for(int i:s){
        cout<<i;
    }
    cout<<endl;

    cout<<"-5 is present or not "<<s.count(-5)<<endl;
    set<int>::iterator itr = s.find(5);
    cout<<"value present "<<*itr<<endl;
    return 0;
}
