    # include<stdio.h>
    int main() 
    {
    	int x;
    	float y,b=0;
    	scanf("%d%f",&x,&y);
    	if(x%5==0&&x<y)
    	{b=y-x-0.50;
            printf("%.2f",b);
    	}
    	else 
    	{
    	b=y;
    	printf("%.2f",b);
    	}
     
    return 0;
    }  
