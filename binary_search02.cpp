#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// find first number <x 
int main()
{
      vector<int> vec{2,4,6,8,12,15};
      int ans,x,low=0,high=vec.size();
      cin>>x;
      while(low<=high)
      {
          int mid=low+(high-low)/2;
          if(vec[mid]<x)
          {
              ans=vec[mid];
              low=mid+1;
          }
          else
          high=mid-1;
      }
      cout<<ans;
    return 0;
}