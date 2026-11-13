#include <stdio.h>

int main() {

    // 1. POSITIVE, NEGATIVE OR ZERO
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Positive\n");
    } else if (n < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }


    // 2. EVEN OR ODD
    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }


    // 3. DIVISIBLE BY 5 AND 11
    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 11 == 0) {
        printf("Divisible by 5 and 11\n");
    } else {
        printf("Not divisible by 5 and 11\n");
    }


    // 4. LARGEST OF TWO NUMBERS
    int a, b;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Largest is %d\n", a);
    } else {
        printf("Largest is %d\n", b);
    }


    // 5. LEAP YEAR
    int year;

    printf("\nEnter year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("Leap year\n");
    } else if (year % 100 == 0) {
        printf("Not a leap year\n");
    } else if (year % 4 == 0) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }


    // 6. LARGEST AMONG THREE NUMBERS
    int c;

    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Largest is %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest is %d\n", b);
    } else {
        printf("Largest is %d\n", c);
    }


    // 7. MULTIPLE OF 3 OR 7
    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0 || n % 7 == 0) {
        printf("Multiple of 3 or 7\n");
    } else {
        printf("Not a multiple of 3 or 7\n");
    }


    // 8. ELIGIBLE TO VOTE
    int age;

    printf("\nEnter age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible to vote\n");
    } else {
        printf("Not eligible to vote\n");
    }


    // 9. VALID TRIANGLE BASED ON ANGLES
    int angle1, angle2, angle3;

    printf("\nEnter three angles: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 > 0 && angle2 > 0 && angle3 > 0 &&
        angle1 + angle2 + angle3 == 180) {
        printf("Valid triangle\n");
    } else {
        printf("Invalid triangle\n");
    }


    // 10. PALINDROME 3-DIGIT NUMBER
    int original, reverse, digit;

    printf("\nEnter a 3-digit number: ");
    scanf("%d", &n);

    original = n;
    reverse = 0;

    digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;

    digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;

    digit = n % 10;
    reverse = reverse * 10 + digit;

    if (original == reverse) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }


    // 11. GRADE USING NESTED IF ELSE
    int marks;

    printf("\nEnter marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade A\n");
    } else {
        if (marks >= 80) {
            printf("Grade B\n");
        } else {
            if (marks >= 70) {
                printf("Grade C\n");
            } else {
                if (marks >= 50) {
                    printf("Grade D\n");
                } else {
                    printf("Fail\n");
                }
            }
        }
    }


    // 12. POSITIVE/NEGATIVE AND EVEN/ODD
    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        if (n % 2 == 0) {
            printf("Positive even\n");
        } else {
            printf("Positive odd\n");
        }
    } else if (n < 0) {
        if (n % 2 == 0) {
            printf("Negative even\n");
        } else {
            printf("Negative odd\n");
        }
    } else {
        printf("Zero\n");
    }


    // 13. LOAN ELIGIBILITY
    int income;

    printf("\nEnter age and income: ");
    scanf("%d %d", &age, &income);

    if (age > 20 && age < 70 && income > 500000) {
        printf("Eligible for loan\n");
    } else {
        printf("Not eligible for loan\n");
    }


    // 14. ELECTRICITY BILL CALCULATOR
    int units;
    int bill;

    printf("\nEnter units consumed: ");
    scanf("%d", &units);

    if (units < 100) {
        bill = units * 10 + 2000;
    } else {
        bill = units * 15 + 2000;
    }

    printf("Total bill = Rs. %d\n", bill);


    // 15. PROFIT OR LOSS
    int cp, sp;

    printf("\nEnter cost price and selling price: ");
    scanf("%d %d", &cp, &sp);

    if (sp > cp) {
        printf("Profit = Rs. %d\n", sp - cp);
    } else if (cp > sp) {
        printf("Loss = Rs. %d\n", cp - sp);
    } else {
        printf("No profit, no loss\n");
    }


    // 16. SORT THREE NUMBERS IN ASCENDING ORDER
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int temp;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Ascending order: %d %d %d\n", a, b, c);


    // 17. CALCULATOR USING SWITCH CASE
    int choice;
    float x, y;

    printf("\nEnter two numbers: ");
    scanf("%f %f", &x, &y);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Answer = %.2f\n", x + y);
            break;

        case 2:
            printf("Answer = %.2f\n", x - y);
            break;

        case 3:
            printf("Answer = %.2f\n", x * y);
            break;

        case 4:
            if (y != 0) {
                printf("Answer = %.2f\n", x / y);
            } else {
                printf("Cannot divide by zero\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }


    // 18. DAY OF THE WEEK
    printf("\nEnter number from 1 to 7: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Monday\n");
            break;

        case 2:
            printf("Tuesday\n");
            break;

        case 3:
            printf("Wednesday\n");
            break;

        case 4:
            printf("Thursday\n");
            break;

        case 5:
            printf("Friday\n");
            break;

        case 6:
            printf("Saturday\n");
            break;

        case 7:
            printf("Sunday\n");
            break;

        default:
            printf("Invalid choice\n");
    }


    // 19. MONTH NAME
    printf("\nEnter number from 1 to 12: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("January\n");
            break;

        case 2:
            printf("February\n");
            break;

        case 3:
            printf("March\n");
            break;

        case 4:
            printf("April\n");
            break;

        case 5:
            printf("May\n");
            break;

        case 6:
            printf("June\n");
            break;

        case 7:
            printf("July\n");
            break;

        case 8:
            printf("August\n");
            break;

        case 9:
            printf("September\n");
            break;

        case 10:
            printf("October\n");
            break;

        case 11:
            printf("November\n");
            break;

        case 12:
            printf("December\n");
            break;

        default:
            printf("Invalid choice\n");
    }


    // 20. DIGIT IN WORDS
    printf("\nEnter a digit from 0 to 9: ");
    scanf("%d", &choice);

    switch(choice) {

        case 0:
            printf("Zero\n");
            break;

        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;

        case 3:
            printf("Three\n");
            break;

        case 4:
            printf("Four\n");
            break;

        case 5:
            printf("Five\n");
            break;

        case 6:
            printf("Six\n");
            break;

        case 7:
            printf("Seven\n");
            break;

        case 8:
            printf("Eight\n");
            break;

        case 9:
            printf("Nine\n");
            break;

        default:
            printf("Invalid digit\n");
    }


    // 21. TRAFFIC LIGHT
    printf("\nEnter color code: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Red - Stop\n");
            break;

        case 2:
            printf("Yellow - Get ready\n");
            break;

        case 3:
            printf("Green - Go\n");
            break;

        default:
            printf("Invalid color code\n");
    }

    return 0;
}