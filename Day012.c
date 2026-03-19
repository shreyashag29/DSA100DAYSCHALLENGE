#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);

    int (*arr)[n] = malloc(m * sizeof *arr);

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    if(m != n){
        printf("Not a Symmetric Matrix\n");
        free(arr);
        return 0;
    }

    for(int i = 0; i < m; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i][j] != arr[j][i]){
                printf("Not a Symmetric Matrix\n");
                free(arr);
                return 0;
            }
        }
    }

    printf("Symmetric Matrix\n");
    free(arr);
    return 0;
}
