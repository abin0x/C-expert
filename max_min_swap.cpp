#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b,c,d;
    cout<<"Enter the three four numbers : "<<endl;
    cin>>a>>b>>c>>d;

    int mn=min({a,b,c,d});
    int mx=max({a,b,c,d});
    cout<<mn<<" "<<mx<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    
    return 0;
}
