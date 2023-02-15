#include <stdio.h>
#include <math.h>

int jump_Search(int a[],int element,int size)
{
    int blockSize = sqrt(size);
    int start = 0;
    int end = blockSize;

    while(a[end] <= element && end < size)
    {
        start = end;
        end = end + blockSize;
        if(end < size-1)
            return -1;
    }
    for (int i = start; i < end; i++)
    {
        if (a[i] == element)
        {
            return i;
        }
        
    }
    return -1;
    
}


int main()
{
       int t;
    printf("Enter total cases you want to pass\n");
    scanf("%d",&t);


    for(int i = 0;i<t;i++)
    {
        int n;
        printf("Enter the size of array : ");
        scanf("%d",&n);
        int A[n];
        for(int i = 0;i<n;i++)
        {
            printf("Enter element : ");
            scanf("%d", &A[i]);
        }
        int key;
        printf("Enter the key you want to search : ");
        scanf("%d",&key);
        int pos = jump_Search(A,n,key);
        if (pos >= 0)
        {
            printf("Present %d\n",pos);
        }
        else
        {
            printf("NOT PRESENT\n");
        }
    } 
    return 0;
}