#include <math.h>

int binarniBroj[32], i, broj = 0, brZnamenkiBinBroja;
//unos broja znamenki binarnog broja
//unos polja binarnog broja
for (i = 0; i < brZnamenkiBinBroja; i++) {
    broj += binarniBroj[i] * pow(2, brZnamenkiBinBroja - 1 - i);
}
