#include<stdio.h>

int main(){
    int n,search,found=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(int i =0;i<n;i++){
        if(arr[i]==search){
            printf("Element %d found at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }
    if (found = 0){
        printf("Element %d not found in the array\n", search);
    }

    return 0;
}