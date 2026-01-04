#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char waste[50];

    int plastic = 0, paper = 0, metal = 0, organic = 0, other = 0;

    printf("WASTE MANAGEMENT SYSTEM\n");
    printf("Колко отпадъка ще въведеш? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nВъведи отпадък #%d: ", i + 1);
        scanf("%s", waste);

        if (strcmp(waste, "plastic") == 0) {
            plastic++;
            printf("→ Пластмаса (рециклируема)\n");
        }
        else if (strcmp(waste, "paper") == 0) {
            paper++;
            printf("→ Хартия (рециклируема)\n");
        }
        else if (strcmp(waste, "metal") == 0) {
            metal++;
            printf("→ Метал (рециклируем)\n");
        }
        else if (strcmp(waste, "organic") == 0) {
            organic++;
            printf("→ Органичен отпадък (разгражда се)\n");
        }
        else {
            other++;
            printf("→ Друг отпадък (нерециклируем)\n");
        }
    }

    printf("\n--- ОТЧЕТ ---\n");
    printf("Пластмаса: %d\n", plastic);
    printf("Хартия: %d\n", paper);
    printf("Метал: %d\n", metal);
    printf("Органични: %d\n", organic);
    printf("Други: %d\n", other);

    int recyclable = plastic + paper + metal;
    int non_recyclable = organic + other;

    printf("\nРециклируеми: %d\n", recyclable);
    printf("Нерециклируеми: %d\n", non_recyclable);

    return 0;
}
