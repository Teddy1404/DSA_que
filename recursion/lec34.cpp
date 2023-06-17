// #include<iostream>
// using namespace std;
// int power (int a,int b){
//     if(b == 0){
//         return 1;
//     }
//     if(b == 1){
//         return a;
//     }
//     int ans  = power(a,b/2);
//     if(b%2==0){
//         return ans*ans;
//     }
//     else{
//         return a*ans*ans;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<endl;
//     int ans = power(a,b);
//     cout<<"Answer  "<<ans<<endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;

// bool checkpalindrom(string& str,int i,int j){
//     if(i>j)
//     return false;
//     if(str[i] != str[j])
//     {
//         return false;
//     }
//     else{
//         return checkpalindrom(str,i+1,j-1);
//     }
// }

// int main(int argc, char const *argv[])
// {
//     string name = "abcde";
//     cout<<endl;
//     bool ispalindrome = checkpalindrom(name,0,name.length()-1);
//   if(ispalindrome){
//     cout<<"Its a palindrome "<<endl;

//   }
//   else{
//     cout<<"cout is not a palindrome "<<endl;
//   }
//     return 0;
// }
