#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    sort(arr.begin(), arr.end());
    
    int target;
    cin>>target;
    
    int left = 0, right = n - 1;
    
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == target)
        {
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    if(left > right)
        cout<<"Element not found"<<endl;
    
        
    return 0;
}
