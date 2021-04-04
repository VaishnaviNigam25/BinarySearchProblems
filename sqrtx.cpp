#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    int x;
     cin>>x;
      if(x==0 || x==1)
          return x;
        int ans;
        double mid;
        int left=1;
        int right=x;
       while(left<=right)
          {
            mid=left+(right-left)/2; 
           if((mid*mid)==x)
             return mid;
             
            else if((mid*mid)<x)
            {
                ans=mid;
                 left=mid+1;//
            }
            else
              right=mid-1;//  
        }
       
       cout<<ans<<endl;
       
      return 0;
    }
    
   