#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,sqr1,sqr2,sum,count=0;
    scanf("%d",&n);
    int x[n],y[n],v[n],sol[n],result;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&v[i]);
    }
    for(i=0;i<n;i++)
    {
        sqr1=x[i]*x[i];
        sqr2=y[i]*y[i];
        sum=sqr1+sqr2;
        sol[i]=sqrt(sum);
        result=sol[i];
        sol[i]=result/v[i];
    }
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
      if(sol[i]==sol[j])
      {
       count++;
   }
  }
 }
 printf("%d",count);
}  