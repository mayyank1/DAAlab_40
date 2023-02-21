#include <stdio.h>

int binarySearch(int arr[],int element,int size,int searchFirst)
{
    int low = 0;
    int high = size-1;
    int result = -1;
    
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == element)
        {
            result = mid;
            
            if (searchFirst) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        else if(arr[mid] < element)
        {
            low = mid+1;
        }
        else if(arr[mid] > element)
        {
            high = mid-1;
        }
    }
    return result;
}

int main()
{
    int t;
    printf("Enter total cases you want to pass\n");
    scanf("%d",&t);

    for(int i = 0;i<t;i++)
    {
        int size;
        printf("Enter the size of an array: ");
        scanf("%d",&size);

        int arr[size];
        printf("Enter a sorted array\n");
        for(int i = 0;i<size;i++)
        {
            printf("Enter element : ");
            scanf("%d",&arr[i]);
        }

        int element;
        printf("Enter the element you want to search : ");
        scanf("%d",&element);

        int first = binarySearch(arr,element,size,1);
        int last = binarySearch(arr,element,size,0);
        int count = last-first+1;

        if (first >= 0)
        {
            printf("Present %d - %d\n",element,count);
        }
        else
        {
            printf("Not present\n");
        }
    }
    return 0;
}