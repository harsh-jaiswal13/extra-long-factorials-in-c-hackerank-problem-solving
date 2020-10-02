#include <bits/stdc++.h>

using namespace std;

int main()
{ int n,i,carry;
  cin>>n;
  int a[1000],top2=0; 
  a[0]=1;
  if(n==0 || n==1){cout<<"1"; return 0;}
  else{
        for(int tr=2;tr<=n;tr++)
        {
          i=0,carry=0;
          while(i<=top2)
               {  if(i==top2)
                             {int ans=a[i]*tr+carry;
                               while(ans>0)
                                {  int temp=ans/10;
                                  int r=ans-temp*10;
                                  a[i]=r;i++;
                                  ans=temp;
                                }
                             }
                  else{int ans=a[i]*tr+carry;
                       carry=ans/10;
                       int r=ans-carry*10;
                       a[i]=r;i++;
                      }

               }top2=i-1;
        }
        
      }
  for(int i=top2;i>=0;i--)cout<<a[i];
  return 0;
 
}
