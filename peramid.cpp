#include <bits/stdc++.h>
using namespace std;
int main() 
{
    
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    
    
    return 0;
}
