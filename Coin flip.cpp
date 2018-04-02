    # include<bits/stdc++.h>
    using namespace std;
    int main() 
    {
    	int t;
    	cin>>t;
    	for(int i=0;i<t;i++)
        { int g;
            cin>>g;
    		int j=0,a[g];
    		for(int j=0;j<g;j++)
    		{
    			int i,n,q,f;
    			cin>>i>>n>>q;
    			if(n%2==0)
    			{
    				f=n/2;
    			}
    			else
    			{
    				if(i==q)
    				{
    					f=n/2;
    				}
    				else
    				{
    					f=(n/2)+1;
    				}
    			}
    		
    			cout<<f<<endl;
    	 }
        }
    	   
    return 0;
    }  
