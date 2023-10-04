#include<stdio.h>
#include<stdlib.h>
int arr[20];
void insert_sort(int n){
    int i,val,temp;
    for(i=0;i<n;i++){
        val = arr[i];
        temp = i;
        while(arr[temp-1] > val && temp!=0)
        {
            arr[temp] = arr[temp-1];
            temp = temp-1;

        }
        arr[temp]=val;

    }
   
    printf(" successfully sorted using insertion sorting algorathem ");

  
}

int main(){
    int n,i;
    printf("enter the number of elements :");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter %dth elements :",i);
        scanf("%d",&arr[i]);

    }

    insert_sort(n);
    for(i=0;i<n;i++){
        printf("%d \t ",arr[i]);
    }

}