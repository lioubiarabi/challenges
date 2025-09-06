#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int i = 0, j = 0;
    printf("enter string 1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("enter string 2: ");
    fgets(s2, sizeof(s2), stdin);
    while (s1[i] != '\0') i++;
    if (i > 0 && s1[i - 1] == '\n') {
        i--;
    }
    while (s2[j] != '\0') {
        s1[i++] = s2[j++];
    }
    s1[i] = '\0';

    printf("the result: %s", s1);
    return 0;
}
