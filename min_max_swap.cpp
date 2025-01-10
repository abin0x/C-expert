#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b,e,f;
    cin>>a>>b>>e>>f;
    cout<<"Before swapping: "<<a<<" "<<b<<" "<<e<<" "<<f<<endl;
    int mn=min({a,b,e,f});
    int mx=max({a,b,e,f});
    swap(mn,mx);
    cout<<"After swapping: "<<mn<<" "<<mx<<endl;
    
    return 0;
}
