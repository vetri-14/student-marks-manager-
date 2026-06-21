#include <stdio.h>

int main() {
    int marks[5], sum = 0;

    printf("Enter 5 subject marks:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    printf("Total = %d\n", sum);
    printf("Average = %.2f\n", sum / 5.0);
    if(sum / 5.0 >= 90){
        printf("Grade: A\n");
    }
    else{
        printf("Grade: B\n");
    }
    return 0;
}