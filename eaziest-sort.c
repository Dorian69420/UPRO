int i, j, polje[10], n = 10, tmp;
//popuni polje
for (i = 0; i < n-1; i++) {
    for (j = i + 1; j < n; j++) {
        if (polje[i] < polje[j]) {
            tmp = polje[i];
            polje[i] = polje[j];
            polje[j] = tmp;
        }
    }
}