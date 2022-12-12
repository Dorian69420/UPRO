#include <string.h>

char rijeci[5][30], tmp[30];
int i, j, n = 5;
//upisi 5 rijeci
for (i = 0; i < n-1; i++) {
    for (j = i + 1; j < n; j++) {
        if (strcmp(rijeci[i], rijeci[j]) > 0) {
            strcpy(tmp, rijeci[i]);
            strcpy(rijeci[i], rijeci[j]);
            strcpy(rijeci[j], tmp);
        }
    }
}