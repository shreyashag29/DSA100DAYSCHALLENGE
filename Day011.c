#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int (*arr)[m] = malloc(n * sizeof *arr);
    int (*arr1)[m] = malloc(n * sizeof *arr1);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &arr1[i][j]);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            arr[i][j] += arr1[i][j];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    free(arr);
    free(arr1);

    return 0;
}
