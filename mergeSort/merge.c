

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int arr[], int l, int m, int r){
    int i,k,j;

    int n2=r-m;
    int n1=m-l+1;

    // create temp arrays
    int L[n1], R[n2];

    //pasting the value inside these arrays

    for(i=0;i<n1;i++){
        L[i]=arr[l+i];
    }

    for(j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }
    

    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2){
        if(L[i]<= R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    // remaming l1 elem and r2 elem is pasting to the k;

    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }

}

void mergesort(int arr[], int l, int r){

    if(l<r){

        // int m = l + (r - 1) / 2;
        int m = l + (r - l) / 2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void printArrays(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}


int main(){
    int i,n;

    clock_t start,end;
    double cpu_time_used;

    printf("Enter the value of n: \n");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        arr[i]=rand()%1000;
        printf("%d ",arr[i]);
    }

    start=clock();
    mergesort(arr,0,n-1);
    end=clock();

    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;

    printf("sorted arrays\n");
    printArrays(arr,n);

    printf("Execution time %f second \n",cpu_time_used);
    return 0;
}




