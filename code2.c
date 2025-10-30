#include <stdio.h>

int main() {
    int meal1, meal2, meal3, meal4;
    float average;

    printf("Enter calories present in your BREAKFAST: ");
    scanf("%d", &meal1);

    printf("Enter calories present in your LUNCH: ");
    scanf("%d", &meal2);

    printf("Enter calories present in your EVENING SNACKS : ");
    scanf("%d", &meal3);
    
    printf("Enter calories present in your DINNER: ");
    scanf("%d", &meal4);

    average = (meal1 + meal2 + meal3 + meal4) ;

    printf("\n--- Student Result ---\n");
    printf("meal-1   : %d\n", meal1);
    printf("meal-2 : %d\n", meal2);
    printf("meal-3 : %d\n", meal3);
    printf("meal-4 : %d\n", meal4);
    printf("Average : %.2f\n", average);

    if (meal1 < 450 || meal2 < 450 || meal3 < 450 || meal4 < 450) {
        printf("SORRY YOU HAVE NOT COMPLETED YOUR DAILY CALORIES INTAKE (OR YOU HAVE NOT NOT COMPLETED THE CALORIES INTAKE THROUGH ANY OF YOUR MEAL)\n");
    } 
    else if (average >= 1800) {
        printf(" 🎉 Congratulations you have completed your daily calories intake\n");
    } 
    else {
        printf("Sorry you have not completed your daily calories intake, go and complete your daily calories intake ✘ \n");
    }

    return 0;
}
