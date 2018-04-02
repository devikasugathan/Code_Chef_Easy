    # include<bits/stdc++.h>
    using namespace std;
    int main() 
    {
    	int t;
    	cin>>t;
    	for(int i=0;i<t;i++)
    	{
    	  int n,k,b=0,c=0;
    	  cin>>n>>k;
    	  long int a[n];
    	  for(int j=0;j<n;j++)
    	  {
    	     cin>>a[j];
    	  }
    	  sort(a,a+n);
    	  if(k>n-k)
    	  {k=n-k;
    	  }
    	  for(int l=0;l<k;l++)
    	  {b=b+a[l];
    	  }
    	  for(int y=k;y<n;y++)
    	  {
    	  c=c+a[y];
    	}
    	long int s=c-b;
    	cout<<s<<endl;
    	}
     
    return 0;
    }  


