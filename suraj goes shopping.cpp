    # include<bits/stdc++.h>
    using namespace std;
     
     
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
          int n,sum=0;
          cin>>n;
          int a[n];
          for(int i=0;i<n;i++)
          cin>>a[i];
          if(n==1)
          {
              cout<<a[0]<<endl;
          }
          else
          {
            sort(a,a+n);
            for(int i=n-1;i>=0;i-=4)
            {
                if(i==0)
                {
                    sum+=a[0];
                }
                else
                {
                    sum += a[i]+a[i-1];
                }
            }
            cout<<sum<<endl;
          }
        }
        return 0;
    }  
