#include<stdio.h>

int linearSearch(int*, int, int);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr)/sizeof(int);
    printf("%d", linearSearch(arr, size, 7));
    return 0;
}

int linearSearch(int* a, int n, int target){
    for(int i = 0; i< n; i++){
        if(a[i] == target)
            return i;
    }
    return -1;
}