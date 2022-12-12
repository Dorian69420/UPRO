//for koristimo najčešće kad imamo konačan broj elemenata
for (i = 0; i < 10; i++) {
    //radi sta triba
}

//while koristimo kad ne znamo konačan broj elemenata
printf("\nUpisi broj veci od 10: ");
scanf("%d", &broj); while (broj > 10) {
    // radi s brojem sta triba
    printf("\nUpisi broj veci od 10: ");
    scanf("%d", &broj);
}

// do while koristimo za provjeru unosa podataka
do {
    printf("\nUnesi broj veci od 10: ");
    scanf("%d", &broj);
    } while(!(broj > 10));