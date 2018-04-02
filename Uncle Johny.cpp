
Home  » Uncle Johny » All Submissions » devika_sugathn [17818246]
Solution: 17818246

CodeChef submission 17818246 (C++14) plaintext list. Status: AC, problem JOHNY, contest CODECHEF. By devika_sugathn (devika_sugathn), 2018-03-12 20:06:00.

    # include<bits/stdc++.h>
    using namespace std;
    int main() 
    {
    	int t;
    	cin>>t;
    	for(int i=0;i<t;i++)
    	{ int n,pos=0;
    	  cin>>n;
    	  int a[n];
    	  for(int j=0;j<n;j++)
    	  {
    	      cin>>a[j];
    	  }
    	  int l;
    	  cin>>l;
    	  int temp =a[l-1];
    	  
    	  for(int k=0;k<n;k++)
    	     { sort(a,a+n);
    	      if(a[k]==temp)
    	        {  pos=k;        
    	            
    	        }
    	     }
    	  cout<<pos+1<<endl;
    	 }
    	   
    return 0;
    }  


