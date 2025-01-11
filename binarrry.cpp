#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> v={1,2,3,4,5};
    int target=5;
    int start=0,middle;
    int end=v.size()-1;
    int index=-1;
    while(start<=end)
    {
        middle=(start+end)/2;
        if(v[middle]==target)
        {
            cout<<middle<<endl;
            break;
        }
        else if(v[middle]<target)
        {
            start=middle+1;
        }
        else
        {
            end=middle-1;
        }   

    }
    if(index==-1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found at index "<<index<<endl;
    }


    
    return 0;
}
