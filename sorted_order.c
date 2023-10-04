#include <stdio.h>

void main()
{
    int i, j, k, size1, size2, size3;

    int arr1[size1], arr2[size2], arr3[size3];

    printf("Enter the array size of array 1 :");

    scanf("%d", &size1);

    printf("Enter the element in array 1 :\n");

    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];
    }
    size3 = i;
    printf("\nEnter the size of array 2 : ");
    scanf("%d", &size2);
    printf("Enter the element in array2 : \n");
    for (j = 0; j < size2; j++)
    {
        scanf("%d", &arr2[j]);
        arr3[size3] = arr2[j];
        size3++;
    }
    for (i = 0; i < size3; i++)
    {
        for (j = i + 1; j < size3; j++)
        {
            if (arr3[i] > arr3[j])
            {
                k = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = k;
            }
        }
    }
    printf("\n\nThe Merged Array in sorted order is: \n");
    
    for (i = 0; i < size3; i++)
        printf("%d\n", arr3[i]);
}