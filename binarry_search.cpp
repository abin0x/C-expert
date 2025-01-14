#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> v={1,2,3,4,5};
    sort(v.begin(), v.end(), greater<int>()); // Sorting in descending order
    for (int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int target=4;
    int start=0,middle;
    int end=v.size()-1;
    int index=-1;
    
    while(start<=end)
    {
        middle=(start+end)/2;
        if(v[middle]==target)
        {
            index=middle;
            break;
        }
        else if(v[middle]<target)
            start=middle+1;
        else
            end=middle-1;
    }
    
    if(index!=-1)
        cout<<"Element found at index "<<index<<endl;
    else
        cout<<"Element not found"<<endl;
    
    
    return 0;
}
