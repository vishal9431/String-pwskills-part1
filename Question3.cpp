// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    int j= s.length()-1;
    bool flag = true;
    while(j>i)
    {
        if(s[i]!=s[j])
        {
            flag = false;
        }
        i++;
        j--;

    }
    if(flag==false)
    {
        cout<<"Number is not pallindrome";
    }
    else
    {
        cout<<"Number is pallindrome ";
    }
}