#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{ int n,k,c=0;
	  scanf("%d%d",&n,&k);
	   int a[n];
	  for(int j=0;j<n;j++)
	  {
	      scanf("%d",&a[j]);
	  }
	  for(int l=0;l<n;l++)
	  {
	      if(a[l]%2==0)
	      c++;
	      
	     
	  }
	  if(c==n&&k==0)
	  printf("NO\n");
	  else if(c>=k)
	  printf("YES\n");
	  else
	  printf("NO\n");
	}
return 0;	  
	 }
