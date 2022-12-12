int polje[10], i, brClanova = 8, pozicija = 2, noviBrojUbaciti;

//prebacivanje brojeva s desna na lijevo
for (i = brClanova; i > pozicija; i--) {
    polje[i] = polje[i+1];
}
polje[pozicija] = noviBrojUbaciti;