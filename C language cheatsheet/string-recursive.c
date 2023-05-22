void ispis(char *znakovi) {
    printf("%c", *znakovi);
    if (*znakovi == '\0') {
        return;
    }
    ispis(znakovi+1);
}
