#include<stdio.h>
#include<malloc.h>
int arr[20];
void bubble_sort(int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]  = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
}

void main(){
    int n, i;
    printf(" enter number of elements :");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf(" enter %dth elements ",i);
        scanf("%d",&arr[i]);

    }

    bubble_sort(n);
    for(i=0;i<n;i++){
        printf("%d \t \t ",arr[i]);
    }

}