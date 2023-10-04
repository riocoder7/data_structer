#include <stdio.h>
#define size 5
int linearsearch(int a[], int item)
{
    int pos = -1;
    int loc = 0;
    for (loc = 0; loc < size; loc++)
    {
        if (a[loc] == item)
        {
            pos = loc;
            break;
        }
    }
    return pos;
}
int main()
{
    int a[size];
    int i = 0, item, pos;
    for (i = 0; i < size; i++)
    {
        printf("Enter Element: ");
        scanf("%d", &a[i]);
    }
    printf("\nEnter Item to be serched: ");
    scanf("%d", &item);
    pos = linearsearch(a, item);
    if (pos >= 0)
        printf("\nElements Found At Position: %d\n", pos + 1);
    else
        printf("\nItem Not Found in the list\n");
    return 0;
}