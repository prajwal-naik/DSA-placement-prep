#include<stdio.h>

void mergeSort(int*, int, int);
void merge(int*, int, int, int);
void swap(int* a, int* b);

int main(){
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(int);
    mergeSort(arr, 0, size-1);
    for(int i = 0; i<size; i++)
        printf("%d ", arr[i]);
    return 0;
}

void mergeSort(int* a, int l, int r){
    if(l<r){
        int m = l + (r-l)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

void merge(int*a, int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1], R[n2];
    for(int i=0; i<n1; i++)
        L[i] = a[l+i];
    for(int i = 0; i<n2; i++)
        R[i] = a[m+i+1];
    int i = 0;
    int j = 0;
    int k = l;
    while(i<n2 && j<n2){
        if(L[i] <= R[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k++] = L[i++];
    }
    while(j<n2){
        a[k++] = R[j++];
    }
}

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}