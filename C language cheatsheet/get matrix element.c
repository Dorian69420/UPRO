int i, j, matrica[5][5], n, m;
//unos broja redaka i stupaca matrice
//popuniti matricu
for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
        matrica[i][j] += 2; //prolazimo po retcima (i dodajemo svima 2)
        matrica[j][i] -= 3; //prolazimo po stupcima (i oduzimamo svima 3)
    }
}

// ako je matrica kvadratna, odnosno n == m
for (i = 0; i < n; i++) {
    matrica[i][i] *= 2; //prolazimo glavnom dijagonalom (i mnozimo clanove sa 2)
    matrica[i][n - 1 - i] /= 3; //prolazimo sporednom dijagonalom (i dijelimo clanove)
}

// ako matrica nije kvadratna
for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
        if (i == j) {
            matrica[i][j] *= 2; //prolazimo glavnom dijagonalom (i mnozimo clanove sa 2)
        }
        if ((i+j) == (m-1)) {
            matrica[i][j] /= 3; //prolazimo sporednom dijagonalom (i dijelimo clanove)
        }
    }
}   
