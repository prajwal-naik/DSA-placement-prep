#include<stdio.h>

void selectionSort(int*, int);
void swap(int* a, int* b);

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    selectionSort(arr, 5);
    for(int i = 0; i<5; i++)
        printf("%d ", arr[i]);
    return 0;
}

void selectionSort(int* arr, int n){
    for(int i = 0; i<n; i++){
        int min = i;
        for(int j = i; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
       swap(&arr[i], &arr[min]);
    }
}

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}