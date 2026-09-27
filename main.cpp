#include <iostream>
using namespace std;

int main() {

    cout << "Podaj numer: " << endl;
    double x;
    cin >> x;

    cout << "Podaj operator (+,-,*,/): ";
    char c;
    cin >> c;

    cout << "Podaj numer: " << endl;
    double y;
    cin >> y;

    switch(c) {

        case '+':
            cout << "Wynik to: " << x + y;
            break;

        case '-':
            cout << "Wynik to: " << x - y;
            break;

        case '*':
            cout << "Wynik to: " << x * y;
            break;

        case '/':
            if (y != 0) {
                cout << "Wynik to: " << x / y;
            }
            else {
                cout << "Nie możesz dzielić przez 0.";
            }
            break;

        default:
            cout << "Nieprawidłowy operator.";
    }

    return 0;
}