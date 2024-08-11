// Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe
// Input :str = "pwians"
// Output : pwisna
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int mid = s.length()/2;
    int n= s.length();
    while(mid<n)
    {
        swap(s[mid],s[n-1]);
        n--;
        mid++;
    }
    cout<<s;
}