int i, j, matrica[5][5], n, m;

//unos elemenata matrice - skeniranje s konzole
for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
        scanf("%d", &matrica[i][j]); //ovde se mogu koristiti i drugi tipovi podataka umjesto int ("%d") npr. float, double, char...
    }
}

//ispis elemenata matrice
for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
        printf("%5d", matrica[i][j]);
    }
    printf("\n");
}
