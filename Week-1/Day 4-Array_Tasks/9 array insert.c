/*
9. Given an array. Insert a new value in a specific index and reorder the array again.
Input_3:
4
1 1 1 1
2 2

Output_3: 
1 1 2 1 1

*/
/*
1. Take an input N. In the next line input N integers. Print this N integers in separate lines.
5
1 2 3 4 5
and output will be
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
    int arr[20],n,i;
    while(scanf("%d",&n)==1)
    {
        int num,index;
         for(i=0;i<n;i++)
                scanf("%d",&arr[i]);


        scanf("%d %d",&index,&num);
if(index<n+1 || index>=0)
{
    for(i=n;i>=index;i--)
          {
              arr[i]=arr[i-1];
          }
          arr[index]=num;
          n++;

            for(i=0;i<n;i++)
                  printf("%d ",arr[i]);

}

        printf("\n");
    }


}
