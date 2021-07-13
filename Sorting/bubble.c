#include<stdio.h>

void bubbleSort(int*, int);
void swap(int* a, int* b);

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(int);
    bubbleSort(arr, size);
    for(int i = 0; i<size; i++)
        printf("%d ", arr[i]);
    return 0;
}

void bubbleSort(int* a, int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}