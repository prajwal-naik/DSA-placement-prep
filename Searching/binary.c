#include<stdio.h>

int binarySearch(int*, int, int, int);

int main(){
    int arr[] = {7};
    int size = sizeof(arr)/sizeof(int);
    printf("pos: %d", binarySearch(arr, 0, size, 7));
    return 0;
}

int binarySearch(int* a, int s, int e, int target){
    // while(s<=e){
    //     int m = s+((e-s)/2);
    //     if(a[m] == target)
    //         return m;
    //     if(target > a[m])
    //         s = m+1;
    //     else
    //         e = m-1;
    // }
    // return -1;
    if(s <= e){
        int m = s + (e-s)/2;
        printf("%d ", m);
        if(a[m] == target)
            return m;
        if(target < a[m])
            return binarySearch(a, s, m-1, target);
        else
            return binarySearch(a, m+1, e, target);
    }
    return -1;
}