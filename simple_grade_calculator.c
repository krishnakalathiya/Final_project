#include <stdio.h>

int main() {
    int score;
    char grade;

    // Step 1: Input score
    printf("Enter your score: ");
    scanf("%d", &score);

    // Step 2: Determine grade using nested ternary operator
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

    // Print grade
    printf("Your grade is %c. ", grade);

    // Step 3: Comments using switch-case
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done.\n");
            break;
        case 'C':
            printf("Good job.\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    // Step 4: Eligibility check using if-else
    if (grade != 'F') {
        printf("Congratulations! You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}

