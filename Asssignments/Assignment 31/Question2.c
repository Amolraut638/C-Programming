//write a function to find the smallest number from the given array of any size.(TSRS)
#include<stdio.h>
int min(int A[],int size)
{
  int i,m;
  m=A[0];
  for(i=0;i<size;i++)
    if(m>A[i])
      m=A[i];
  return m;

}
int main()
{
  int A[]={10,20,40,30,55,35,39};
  int size=sizeof(A)/sizeof(A[0]);//divide by A[0] is not understanded
  printf("The smallest element in array is %d",min(A,size));
  return 0;
}