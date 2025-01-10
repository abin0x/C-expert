#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping: "<<a<<" "<<b<<endl;
    int c=min(a,b);
    int d=max(a,b);
    // cout<<"After swapping: "<<d<<" "<<c<<endl;
    cout<<"After swapping: "<<max(a,b)<<" "<<min(a,b)<<endl;
    
    return 0;
}
