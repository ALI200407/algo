#include <stdio.h>

int add(int a,int b)
{ 
return a + b;
}

int max(int a,int b)
{
if(a>b)
return a;
else
return b;
}

float average(int arr[],int n)
{
  int t=0;
  for(int i=0;i<n;i++)
  {
  t=add(t,arr[i]);
  }
  return (float)t/n;
}
int main()
{
  int n; 
  printf("enter N\n");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
  printf("enter the box  %d\n",i);
  scanf("%d",&arr[i]);
  }
  int b=arr[0];
  for( int i=1;i<n;i++)
  {
  b=max(b ,arr[i]);
  }
  float avg = average(arr,n);
  printf("big namber is %d \n",b);
  printf("The average of the numbers is %.2f\n",avg); 
}
