int i, polje[10], nasaoDjeljitelja, j;
for(i = 0; i < 10; i++) {
    //popuni polje
    nasaoDjeljitelja = 0; // restartamo svaki put na 0, kao da ne postoji djeljitelj
    for (j = 2; j <=polje[i]/2; j++) { // j <= sqrt(polje[i]) ovo je najbrzi uvjet
        if (polje[i] % j == 0) {
            nasaoDjeljitelja = 1;
            break; //moze bez break, ali onda u for dodat jos jedan uvjet && nasaoDjeljitelja == 0
        }
    } if (nasaoDjeljitelja == 0) { // broj je prost/prim ako "prezivi" gornji for
        // radi sa prostim brojem sto zelis
    }
}