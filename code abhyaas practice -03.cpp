//code abhyaas basics -- 03


//1.finding missing number in the array.

#include <stdio.h>
int findMissingNumber(int arr[], int size) {
    int expectedSum = size* (size + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < size-1; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int arr[] = {2,4,1,8,6,3,7};
    int size = sizeof(arr) / sizeof(arr[0])+1;
    int missingNumber = findMissingNumber(arr, size);

    printf("Missing number is: %d\n", missingNumber);

    return 0;
}

