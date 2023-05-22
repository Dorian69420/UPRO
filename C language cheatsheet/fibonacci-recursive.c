// 0, 1, 1, 2, 3, 5, 8, 13, ... zbroj zadnja dva člana
// samo za higher intermediate - advanced korisnike

int fibbonacci(int broj) {
    if (broj == 0) {
        return 0;
    }
    if (broj == 1) {
        return 1;
    }
    return fibbonacci(broj-1) + fibbonacci(broj-2);
}
