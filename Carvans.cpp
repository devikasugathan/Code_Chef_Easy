    # include<bits/stdc++.h>
    using namespace std;
    int main() 
    {
    	int t;
    	cin>>t;
    	for(int i=0;i<t;i++)
    	{ int n,c=1;
    	  cin>>n;
    	  int a[n];
    	  for(int j=0;j<n;j++)
    	  {
    	      cin>>a[j];
    	  }
    	  int m=a[0];
    	  for(int k=1;k<n;k++)
    	     { 
    	      if(a[k]<m)
    	        {  m=a[k];
    	           c++;
    	        }
    	     }
    	  cout<<c<<endl;
    	 }
    	   
    return 0;
    }  
