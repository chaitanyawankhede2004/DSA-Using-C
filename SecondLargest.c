
#include<stdio.h>
#include<limits.h>

int main() {
    int n, first_max = INT_MIN, second_max = INT_MIN;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > first_max) {
            second_max = first_max;
            first_max = arr[i];
        } else if (arr[i] > second_max && arr[i] < first_max) {
            second_max = arr[i];
        }
    }
    printf("%d\n", second_max);
    return 0;
}


