#include<iostream>
using namespace std;

class complexno {
    int real;
    int img;

public:
    complexno() {
        real = 0;
        img = 0;
    }

    complexno(int r, int i) {
        real = r;
        img = i;
        cout << "Parameter Const. Called " << endl;
    }

    int getImg() {
        return img;
    }

    int getReal() {
        return real;
    }

    void setImg(int i) {
        img = i;
    }

    void setReal(int r) {
        real = r;
    }

    complexno operator++(int) {
        complexno temp = *this;
        real++;
        img++;
        return temp;
    }

    complexno& operator++() {
        real++;
        img++;
        return *this;
    }
};

int main() {
    complexno C1(10, 20);

    complexno a = C1++;
    complexno b = ++C1;

    cout << "C1 Img Post Inc  : " << a.getImg() << endl;
    cout << "C1 Real Post Inc : " << a.getReal() << endl << endl;

    cout << "C1 Img Pre Inc  : " << b.getImg() << endl;
    cout << "C1 Real Pre Inc : " << b.getReal() << endl;

    return 0;
}
