//write a program to find second smallest element in an array.take array size from user.
#include<stdio.h>
/* int main()
{
    int a[100],i,j,n,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }

    }
    printf("The second smallest element is %d",a[1]);
    return 0;
} */
int main ()
{
   int a[100];
   int i,n,min,secondmin;
   printf("Enter the elements:");
   for (i = 0; i <=9; i++)
      scanf("%d", &a[i]);

   min=a[0];
   if(min>a[1])
   {
      secondmin=min;
      min=a[1];  
   }
   else
      secondmin=a[1];

   for(i=2;i<=9;i++)
   {
      if(a[i]>=secondmin)
         continue;
      if(a[i]>=min)
      {
         secondmin=a[i];
         continue;
      }
      secondmin=min;
      min=a[i];
   }
   printf("The second min is %d",secondmin);
   return 0;
}