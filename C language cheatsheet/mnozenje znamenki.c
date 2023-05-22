int i, broj, tmpBroj, produkt = 1, znamenka;
//unesi broj
tmpBroj = broj; //kopiramo broj
while (tmpBroj > 0) {
    znamenka = tmpBroj % 10; //dobij krajnju desnu znamenku
    produkt *= znamenka;
    tmpBroj /= 10; //odjeci krajnu desnu znamenku
}
