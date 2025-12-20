#include <stdio.h>

int binarysearch(int arr[], int n, int search) {
    int st = 0;
    int end = n - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] == search)
            return mid;
        else if (arr[mid] < search)
            st = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int main() {
    int n, search, ans;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    ans = binarysearch(arr, n, search);

    if (ans != -1)
        printf("Element found at position %d", ans + 1);
    else
        printf("Element not found");

    return 0;
}
