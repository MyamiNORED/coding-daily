int mystery(int b, int c) {
    return c + 2 * b;
}

int main() {
    int a = 4;
    int b = 2;
    int c = 5;

    a = mystery(c, b);
    c = mystery(b, a);
    cout << a << b << c <<endl;
    return 0;
}


a = mystery(b =  5 , c = 2 ) -> 2 + 2 * 5 --> 12

c = mystery (b = 2 , c = 12 ) --> 12 + 2 * 2 --> 16


12 16 2
