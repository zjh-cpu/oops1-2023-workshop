#include <iostream>
#include <string>

using namespace std;

string c(int d, int base) {
    string result = "";
    while (d > 0) {
        int remainder = d % base;
        char digit = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        result = digit + result;
        d = d / base;
    }
    return result;
}

int main() {
    int d = 75;
    int t = 2;
    string binaryNumber = c(d, t);
    cout << d << " in base " << t << " is " << binaryNumber << endl;
    return 0;
}