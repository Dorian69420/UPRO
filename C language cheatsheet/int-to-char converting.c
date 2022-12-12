int broj, brZnamenki = 0, ostatak;
char heksabroj[10], znak;

while(broj > 0) {
    ostatak = broj % 16;
    if (ostatak >= 10) {
        znak = 'A' + ostatak - 10;
    } else {
        znak = '0' + ostatak;
    }
    heksabroj[brZnamenki] = znak;
    brZnamenki++;
}

//ispis unazad
for(int i = brZnamenki-1; i >= 0; i--) {
    printf("%c", heksabroj[i]);
}