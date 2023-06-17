#include<iostream>
using namespace std;
char toLowercase(char ch){
    if(ch>='a' && ch<='z')
    return ch;
    else{
        
        return ch -'A'+'a';
    }
}
bool palindrome(char name[],int n){
    int s=0;
    int e = n-1;
    while(s<=e){
        if(toLowercase(name[s])!=toLowercase(name[e])){
            return 0;

        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverseString(char name[],int n){
int s = 0;
int e = n-1;
while(s<=e){
    swap(name[s++],name[e--]);
}
}
int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i]!=0; i++)
    {
        /* code */
        count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{ 
    char name [20];
    cout<<"enter your name"<<endl;
    cin>>name;
    int len = getLength(name);
    cout<<"your name is ";
    cout<<name<<endl;
 cout<<"length of string is "<< getLength(name)<<endl;
 reverseString(name,len);
 cout<<name<<endl;
 cout<<"palindrome "<<palindrome(name,len);
    return 0;
}
