#include <stdio.h>

int linear_search(int key,int A[],int n)
{
        for(int i = 0;i<n;i++)
        {
            if(key == A[i])
                return i+1;
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
        int pos = linear_search(key,A,n);
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