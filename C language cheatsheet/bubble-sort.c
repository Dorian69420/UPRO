int i, j, polje[10], n = 10, tmp;
//popuni polje
for (i = 0; i < n-1; i++) {
    for (j = 0; j < n - 1 - i; j++) {
        if (polje[j] < polje[j+1]) { // od manjeg prema vecem
        tmp = polje[j];
        polje[j] = polje[j+1];
        polje[j+1] = tmp;
        }
    }
}
