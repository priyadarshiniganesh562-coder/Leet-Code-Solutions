    int reverse(int x) {
     long int reverse, d;

    reverse = 0;
    while (x != 0) {
        d = x % 10;
        reverse = reverse * 10 + d;
        x = x / 10;
    }
    if ((reverse> pow(2, 31) - 1) || (reverse < pow(-2, 31))) {
        return 0;
    }
    return reverse;
}
