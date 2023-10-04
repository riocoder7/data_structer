#include<stdio.h>
#include<malloc.h>
int arr[20];
void Selection_Sort(int n){
    int i,j,temp,min;
    for(i=0;i<n;i++){
        min = i;

        for(j=i+1;j<n;j++){
           
           if(arr[min]>arr[j]){
              
              min = j;

        }   
            
        }
       temp = arr[i];
       arr[i]= arr[min];
       arr[min] = temp;

        
    }
    printf(" successfully insert selection algrathim :");
}

void main(){
    int i,n;
    printf(" enter number of elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf(" enter %dth elememts ",i);
        scanf("%d",&arr[i]);

    }
    Selection_Sort(n);
    for(i=0;i<n;i++){
        printf("%d \t ",arr[i]);
    }
}