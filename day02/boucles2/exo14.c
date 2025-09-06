#include <stdio.h>

int main() {
    int choose;
    char *day[] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    for(int i=0; i<7; i++){
        printf("%d. %s\n", i+1, day[i]);
    }
    printf("choose a day (1-7): ");
    scanf("%d", &choose);
    printf("you choose: %s\n", day[choose-1]);
    printf("the rest :\n");
    for(int i=choose; i<7; i++){
        printf("%d. %s\n", i+1, day[i]);
    }
    return 0;
}
