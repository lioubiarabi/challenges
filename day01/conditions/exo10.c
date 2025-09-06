#include <stdio.h>

int main() {
    int d, m, y;
    printf("enter the day/month/year: ");
    scanf("%d/%d/%d", &d, &m, &y);

    switch (m) {
        case 1: printf("%d-Janvier-%d\n", d, y); break;
        case 2: printf("%d-Fevrier-%d\n", d, y); break;
        case 3: printf("%d-Mars-%d\n", d, y); break;
        case 4: printf("%d-Avril-%d\n", d, y); break;
        case 5: printf("%d-Mai-%d\n", d, y); break;
        case 6: printf("%d-Juin-%d\n", d, y); break;
        case 7: printf("%d-Juillet-%d\n", d, y); break;
        case 8: printf("%d-Aout-%d\n", d, y); break;
        case 9: printf("%d-Septembre-%d\n", d, y); break;
        case 10: printf("%d-Octobre-%d\n", d, y); break;
        case 11: printf("%d-Novembre-%d\n", d, y); break;
        case 12: printf("%d-Decembre-%d\n", d, y); break;
        default: printf("Invalid month\n");
    }

    return 0;
}
