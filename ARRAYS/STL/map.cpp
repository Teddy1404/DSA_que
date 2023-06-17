#include<iostream>
#include<map>
using namespace std;
int main(int argc, char const *argv[])
{
    map<int,string>m;
    m[1]="Naruto";
    m[2]="Sasuke";
    m[3]="Itachi";

    m.insert({5,"Pain"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it= m.find(5);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}
