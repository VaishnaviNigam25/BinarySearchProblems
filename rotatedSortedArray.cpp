#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    vector<int> arr = {5, 6, 1, 2, 3, 4};
    int low=0,high=arr.size()-1;
     while(low < high)
    {
        int mid = low + (high - low)/2;
        if (arr[mid] == arr[high])
            high--;
        else if(arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }
    cout<<arr[high];
    return 0;
}