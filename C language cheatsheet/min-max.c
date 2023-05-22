int i, polje[10], minBroj, maxBroj;

for(i = 0; i < 10; i++) {
    //popuni polje
}

minBroj = polje[0];
maxBroj = polje[0];

for (i = 1; i < 10; i++) {
    if (polje[i] < minBroj) {
        minBroj = polje[i];
    } if (polje[i] > maxBroj) {
        maxBroj = polje[i];
    }
}
