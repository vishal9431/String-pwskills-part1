// Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4
// Input : "abdc"
// Output : 3
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count =0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
            count++;
        }
    }
    cout<<" Number of Vowels in String is "<<count;
}