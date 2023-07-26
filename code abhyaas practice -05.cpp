//code abhyaas basics -- 05

//to find given string is palindrome or not


//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int isPalindrome(char str[]) {
//    int length = strlen(str);
//    int i, j;
//
//    for (i = 0, j = length - 1; i < j; i++, j--) {
//        if (tolower(str[i]) != tolower(str[j])) {
//            return 0; // Not a palindrome
//        }
//    }
//
//    return 1; // Palindrome
//}
//
//int main() {
//    char str[100];
//
//    printf("Enter a string: ");
//    scanf("%s", str);
//
//    if (isPalindrome(str)) {
//        printf("%s is a palindrome.\n", str);
//    } else {
//        printf("%s is not a palindrome.\n", str);
//    }
//
//    return 0;
//}
//






//to find given number is perfect or not

//A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding the number itself).


//#include <stdio.h>
//#include <math.h>
//
//int isPerfectNumber(int num) {
//    int sum = 1; // Start with 1, as every number is divisible by 1
//
//    // Find factors up to the square root of num
//    for (int i = 2; i <= sqrt(num); i++) {
//        if (num % i == 0) {
//            sum += i; // Add factor
//            if (i != num / i) {
//                sum += num / i; // Add the corresponding factor
//            }
//        }
//    }
//
//    if (sum == num) {
//        return 1; // Perfect number
//    } else {
//        return 0; // Not a perfect number
//    }
//}
//
//int main() {
//    int num;
//
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    if (isPerfectNumber(num)) {
//        printf("%d is a perfect number.\n", num);
//    } else {
//        printf("%d is not a perfect number.\n", num);
//    }
//
//    return 0;
//}







//armstrong or not
// An Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits. 


#include <stdio.h>
#include <math.h>

int isArmstrongNumber(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    // count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // calculate the result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num) {
        return 1; // Armstrong number
    } else {
        return 0; // Not an Armstrong number
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrongNumber(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}


