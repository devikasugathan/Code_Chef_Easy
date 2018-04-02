    # include<bits/stdc++.h>
    using namespace std;
    int main() 
    {
    	int t;
    	cin>>t;
    	for(int i=0;i<t;i++)
    	{
    	    int c=0;
    	    char j[100];
    	    char s[100];
    	    cin>>j;
    	    cin>>s;
    	    int ls =strlen(j);
    	    int lj=strlen(s);
    	    for(int l=0;l<lj;l++)
    	    {
    	        for(int k=0;k<ls;k++)
    	        {
    	            if(j[k]==s[l])
    	            { c++;
    	              break;
    	            }
    	        }
    	    }
    	    cout<<c<<endl;
    	}
    	
    	
    	   
    return 0;
    }  
