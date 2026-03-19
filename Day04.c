#include <stdio.h>
#include <stdlib.h>

void reversing(int *arr , int n){
    int last_element = n - 1;
    int swap;

    for(int i = 0; i < n/2; i++)
    {
        swap = arr[i];
        arr[i] = arr[last_element];
        arr[last_element] = swap;
        last_element--;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reversing(arr, n);

    free(arr);   // good practice

    return 0;
}
