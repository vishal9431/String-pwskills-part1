// Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244
// Input : "12"
// Output : 12
#include<iostream>
using namespace std;
int main()
{
    string  s ;
    cin>>s;
    int st=0;;
    for(int i=0;i<s.length();i++)
    {
        int t =s[i]-'0';
        st=st*10+t;
    }
    cout<<st<<endl;
}