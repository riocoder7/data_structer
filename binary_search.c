#include <stdio.h>
#define size 5
int binarysearch(int a[], int item)
{
    int pos = -1, low = 0, high = size, mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == item)
        {
            pos = mid;
            break;
        }
        else if (item > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return pos;
}
int main()
{
    int a[size], i = 0, item, pos;

    for (i = 0; i < size; i++)
    {
        printf("Enter Element: ");
        scanf("%d", &a[i]);
    }

    printf("\nEnter Item To be Searched: ");

    scanf("%d", &item);

    pos = binarysearch(a, item);

    if (pos >= 0)
        printf("\nItem Found at Position: %d\n", pos + 1);
    
    else
        printf("\nItem Not Found");
    
    return 0;
}