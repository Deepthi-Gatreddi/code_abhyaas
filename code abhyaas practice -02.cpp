//code abhyaas basics -- 02
//1.program to reverse an array.
//#include <stdio.h>
//
//void reverseArray(int arr[], int size) {
//    int start = 0;
//    int end = size - 1;
//
//    while (start < end) {
//        // Swap elements at start and end
//        int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//
//        // Move start and end towards the middle
//        start++;
//        end--;
//    }
//}
//
//int main() {
//    int arr[] = {20, 16, 36, 14, 30};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    printf("Original array: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    reverseArray(arr, size);
//
//    printf("\nReversed array: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}





//2.Remvoing even integers in the array
//#include <stdio.h>
//
//void removeEvenIntegers(int arr[], int size) {
//    int oddnumbers = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (arr[i] % 2 != 0) {
//            oddnumbers++;
//        }
//    }
//
//    int oddarr[oddnumbers];
//    int j=0;
//    for(int i=0;i<size;i++){
//    	if(arr[i]%2!=0){
//    		oddarr[j]=arr[i];
//    		j++;
//		}
//	}
//	printf("\nArray after removing even integers: ");
//    for (int i = 0; i < oddnumbers; i++) {
//        printf("%d ", oddarr[i]);
//    }
//}
//
//int main() {
//    int arr[] = {3,2,4,5,7,10,12};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    printf("Original array: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    removeEvenIntegers(arr, size);
//
//    return 0;
//}





//3.second largest element in the array.
#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int size) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {1,1,1,1,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);

    printf("The second largest element is: %d\n", secondLargest);

    return 0;
}




