#include <stdio.h>

int binarySearch(int arr[],int element,int size)
{
    int low = 0;
    int high = size-1;
    
    while(low<=high)
    {
        int mid = high+(low-high)/2;
        if(arr[mid] == element)
        {
            return mid;
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
    return -1;
}

int main()
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

    int pos = binarySearch(arr,element,size);
    if (pos >= 0)
    {
        printf("Present %d\n",pos+1);
    }
    else
    {
        printf("Not present\n");
    }
    return 0;
}