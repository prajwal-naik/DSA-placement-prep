#include<stdio.h>

void insertionSort(int*, int);
void swap(int* a, int* b);

int main(){
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(int);
    insertionSort(arr, size);
    for(int i = 0; i<size; i++)
        printf("%d ", arr[i]);
    return 0;
}

void insertionSort(int* a, int n){
    for(int i = 0; i<n; i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}