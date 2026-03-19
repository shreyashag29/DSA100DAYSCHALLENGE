#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d", &n);

    int *nums1 = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &nums1[i]);

    scanf("%d", &m);

    int *nums2 = malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
        scanf("%d", &nums2[i]);

    int *arr = malloc((n + m) * sizeof(int));

    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (nums1[i] <= nums2[j])
            arr[k++] = nums1[i++];
        else
            arr[k++] = nums2[j++];
    }

    while (i < n)
        arr[k++] = nums1[i++];

    while (j < m)
        arr[k++] = nums2[j++];

    for (int i = 0; i < k; i++)
        printf("%d ", arr[i]);

    free(nums1);
    free(nums2);
    free(arr);

    return 0;
}
