#include<stdio.h>
int input()
{
  int x;
  printf("Enetr number:- ");
  scanf("%d",&x);
  return x;
}
int find_fibo(int n)
{
  int a=0,b=1,c=0,i;
  if(n==2)
    return 1;
  for(i=2;i<n;i++)
  {
    c=a+b;
    a=b;
    b=c;
  }
  return c;
}
void output(int n, int fibo)
{
  printf("Fibonacci of %dth term is %d",n,fibo);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}


/*
int fibo(int n)
{
  
}

  int i,count=1,ans;
  int a[n];
  a[0]=0;
  a[1]=1;
  if(n==1)
    return 0;
  else if(n==2)
    return 1;
  for(i=2;i<n;i++)
  {
    a[i]=count;
    count=count+a[i-1];
    ans=a[i];
  }
  return ans;
*/