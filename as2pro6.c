#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("Total = %d, Average = %.2f\n", total, avg);

    if (avg >= 70)
        printf("Grade: Distinction\n");
    else if (avg >= 60)
        printf("Grade: First\n");
    else if (avg >= 50)
        printf("Grade: Second\n");
    else if (avg >= 35)
        printf("Grade: Third Class\n");
    else
        printf("Grade: Fail\n");

    return 0;
}