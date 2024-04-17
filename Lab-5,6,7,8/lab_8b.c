#include <stdio.h>

int main() {
    int e;
    scanf("%d", &e);

    for (int i = 1; i <= e; i++) {
        int n;
        scanf("%d", &n);

        char field[n + 1];
        scanf("%s", field);

        int scare = 0;
        for (int j = 0; j < n; j++) {
            if (field[j] == '.' && (j == 0 || field[j - 1] != '.')) { // Corrected the index from i to j
                scare++;
            }
        }

        printf("Case %d: %d\n", i, scare);
    }

    return 0;
}
