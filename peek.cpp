#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    vector<int> arr{1, 3, 20, 4, 1, 0};
    int n=arr.size();
   int low=0,high=n-1;
   while(low<=high)
{
    
    int mid = low + (high - low) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == n - 1 || arr[mid + 1] <= arr[mid]))
       {
           cout<<arr[mid]<<endl;
           break;
       }
 
    // If  its left neighbour is greater than mid,
    // then peek is in left half 
    else if (mid > 0 && arr[mid - 1] > arr[mid])
        high=mid-1;
 
    // If  its right neighbour is greater than mid,
    // then peek is in right half 
    else
       
            low=mid + 1;
}

 
    return 0;
}