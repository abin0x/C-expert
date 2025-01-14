#include <bits/stdc++.h>
using namespace std;
int binarry(vector<int> b)
{
    int target=2;
    int star=0,middle;
    int end=b.size()-1;
    int index=-1;
    while(start<=end)
    {
        middle=(start+end)/2;
        if(b[middle]==target)
        {
            return middle;
        }
        else if(b[middle]<target)
        {
            start=middle+1;
        }
        else
        {
            end=middle-1;
        }
    }
    return index;
}
int main() 
{
    vector<int> v={1,2,3,4,5};
    int result=binarry(v);
    if(v==-1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found at index "<<index<<endl;
    }


    
    return 0;
}
