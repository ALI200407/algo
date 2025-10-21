#include<stdio.h>
int i,j,h,g,n;
  

int main()
{
    printf("enter n");
    scanf("%d",&n);
    int T[n][n];
     
     for(i=0;i<n;i++)
	 {
     	 for(j=0;j<n;j++)
	     {
     	        printf("t[%d][%d]",i,j);
     			scanf("%d",&T[i][j]);
	     }
     	
	 }
	        for(i=0;i<n;i++)
	        {
     	          for(j=0;j<n;j++)
	              {
     	                 printf("%d",T[i][j]);
     			         printf("\t");
	               }
         	printf("\n");
	        }
	     
	       for(i=0;i<n;i++)
	       {
     	        for(j=0;j<i;j++)
	            {
     	              if(i==j)
					  {
					  	T[i][j]=T[i][j];
					  }
					    	
					     if(i!=j)
					     {
					     	  g= T[i][j];
					    
					  	      T[i][j]=T[j][i];
					  	      T[j][i]=g;
					     }
					    
     		        	
	            }
     	
	        }
	        
	                                for(i=0;i<n;i++)
	       							{
     	        							for(j=0;j<n;j++)
	            							{
     	              							 printf("%d",T[i][j]);
     			         							printf("\t");
     		        	
	           								 }
     										printf("\n");
	       							 }
}
