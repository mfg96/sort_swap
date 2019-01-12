//mfarazsohail

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30 //definition of size

void loadArray(int *nums, int size); //prototype
void bubbleSort(int *nums, int size); //prototype
void swap (int *x, int *y); //prototype
void printArray(int *nums, int size); //prototype

int main()
{
  int NumList[SIZE];
  int *ptrNL=NumList;
  loadArray(ptrNL,SIZE);
  bubbleSort(ptrNL,SIZE);
  printArray(ptrNL,SIZE);
  return 0;
}

void loadArray(int *nums, int size)
{int *k;
  srand(time(NULL));
  for(k=nums;k<nums+size;k++)
  {
    *k=rand()%50;
    printf("%d ",*k);
  }

}

void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

void bubbleSort(int *nums, int size)
{int *i;
  int n;
  for (n=0;n<size;n++)
  {
  for( i=nums;i<nums+size-1;i++)
  {
    if(*i<*(i+1))
    swap((i+1),i);
  }
}

}

void printArray(int *nums, int size)
{ int *j;
  for(j=nums;j<nums+size;j++)
  {
    printf("sorted one :%d ",*j);
  }
}
