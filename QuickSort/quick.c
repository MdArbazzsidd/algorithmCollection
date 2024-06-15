// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>

// // function to swap two element

// void swap(int *a, int *b){
//     int temp= *a;
//     *a= *b;
//     *b= temp;
// }

// // partition function

// int partition(int arr[], int low, int high){
//     // init poivt to be the first element 

//     int pivot= arr[low];
//     int i=low;
//     int j=high;

//     while(i<j){
//         // condtion 1: find the first elemetn greater than the pivot

//         while(arr[i]<= pivot && i<= high-1){
//             i++;
//         }

//         // condtion 2: to find the first smaller than the pivot elem

//         while(arr[j]> pivot && j >= low+1){
//             j--;
//         }
//         if(i<j){
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[low] , &arr[j]);
//     return j;
// }


// // quick sort function

// void quickSort(int arr[], int low, int high){
//     if(low<high){
//         //call the partitaion function to find the partition index
        
//         int partitionIndex= partition(arr,low,high);

//         // recursively call the quicksort for left and right half based on partition index

//         quickSort(arr,low, partitionIndex-1);
//         quickSort(arr,partitionIndex+1,high);
//     }
// }


// int main(){
//     int i,n;
//     clock_t start, end;
//     double cpu_time_used;

//     printf("Enterr the value of n");
//     scanf("%d",&n);

//     int arr[n];
//     for(i=0;i<n;i++){
//         arr[i]=rand()%1000;
//         printf("%d ",arr[i]);
//     }

//     start=clock();
//     quickSort(arr,0,n-1);
//     end=clock();

//     cpu_time_used=((double)(end-start)) / CLOCKS_PER_SEC;

//     printf("\n The sorted arryas: \n");
//     for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }

//     printf("Executin time : %f second\n",cpu_time_used);
//     return 0;
// }


