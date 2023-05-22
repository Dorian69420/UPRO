#include <math.h>

char heksaBroj[10];
int i, broj = 0, brHeksaZnamenki;
//unos znakova heksadekadski
//dobij duljinu heksaBroja
for (i = 0; i < brHeksaZnamenki; i++) {
    if (heksaBroj[i] >= 'A' && heksaBroj[i] <= 'Z') {
        broj += (heksaBroj[i] - 'A') * pow(16, brHeksaZnamenki - 1 - i);
    }
}
