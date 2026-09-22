#include <stdio.h>

int main() {
    int choice, n, original, temp;
    int reverse, digit, sum, count, isPrime, i;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count Number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);

                original = n;
                reverse = 0;

                while (n > 0) {
                    digit = n % 10;
                    reverse = reverse * 10 + digit;
                    n = n / 10;
                }

                if (original == reverse)
                    printf("Palindrome Number\n");
                else
                    printf("Not a Palindrome Number\n");

                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);

                original = n;
                temp = n;
                count = 0;
                sum = 0;

                while (temp > 0) {
                    count++;
                    temp = temp / 10;
                }

                temp = n;

                while (temp > 0) {
                    int power = 1;

                    digit = temp % 10;

                    for (i = 1; i <= count; i++) {
                        power = power * digit;
                    }

                    sum = sum + power;
                    temp = temp / 10;
                }

                if (sum == original)
                    printf("Armstrong Number\n");
                else
                    printf("Not an Armstrong Number\n");

                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);

                isPrime = 1;

                if (n < 2)
                    isPrime = 0;

                for (i = 2; i < n; i++) {
                    if (n % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }

                if (isPrime == 1)
                    printf("Prime Number\n");
                else
                    printf("Not a Prime Number\n");

                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &n);

                sum = 0;

                while (n != 0) {
                    digit = n % 10;
                    sum = sum + digit;
                    n = n / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;

            case 5:
                printf("Enter an integer: ");
                scanf("%d", &n);

                count = 0;

                if (n == 0) {
                    count = 1;
                } else {
                    while (n != 0) {
                        count++;
                        n = n / 10;
                    }
                }

                printf("Number of digits = %d\n", count);

                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}