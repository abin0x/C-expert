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
    
    // Finding the median
    int n = v.size();
    if (n % 2 == 0) // If the size is even
    {
        cout<<"Median: "<<(v[n/2 - 1] + v[n/2]) / 2.0<<endl;
    }
    else // If the size is odd
    {
        cout<<"Median: "<<v[n/2]<<endl;
    }
    
    // Finding the mode
    map<int, int> freq;
    for (int i : v)
    {
        freq[i]++;
    }
    int max_freq = 0;
    int mode = -1;
    for (auto it : freq)
    {
        if (it.second > max_freq)
        {
            max_freq = it.second;
            mode = it.first;
        }
    }
    cout<<"Mode: "<<mode<<endl;
    
    
    return 0;
}
