// Day 26 - Q104
// Problem Statement: Write a program to Create quiz application.

#include <stdio.h>

int main() {
    int score = 0, ans;
    
    printf("Welcome to the Quiz!\n\n");
    
    printf("Q1. What is the capital of France?\n");
    printf("1. Berlin\n2. Madrid\n3. Paris\n4. Rome\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if(ans == 3) {
        printf("Correct!\n");
        score++;
    } else printf("Wrong!\n");
    
    printf("\nQ2. Which programming language is known as mother of all languages?\n");
    printf("1. C\n2. Java\n3. Python\n4. C++\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if(ans == 1) {
        printf("Correct!\n");
        score++;
    } else printf("Wrong!\n");
    
    printf("\nQ3. What is 5 + 7?\n");
    printf("1. 10\n2. 12\n3. 14\n4. 15\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if(ans == 2) {
        printf("Correct!\n");
        score++;
    } else printf("Wrong!\n");
    
    printf("\nQuiz Over! Your score: %d/3\n", score);
    
    return 0;
}
