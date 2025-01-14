#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin>>s;
    int n=s.length();
    int flag=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not a Palindrome";
    }
    
    
    return 0;
}
