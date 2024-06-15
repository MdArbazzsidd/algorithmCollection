#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void seclectionSort(int arr[], int n){
    int i,j,min_idx,temp;

    for(i=0;i<n-1;i++){
        min_idx=0;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }

        if(min_idx!=0){
            temp=arr[min_idx];
            arr[min_idx]=arr[i];
            arr[i]=temp;
        }
    }
}

void printArrays(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}

int main(){
    int i,n;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        arr[i]=rand()%1000;
        printf("%d",arr[i]);
    }

    start= clock();
    seclectionSort(arr,n);
    end=clock();

    cpu_time_used= ((double)(end-start))/ CLOCKS_PER_SEC;

    printf("The sorted arrays are:)");

    printArrays(arr,n);

    printf("execution time: %f seconds\n", cpu_time_used);

    return 0;
}


 