#include<iostream>

using namespace std;

int compute_factorial(int number) {
    int result = 1;
    for(int i = 2; i <= number; i++) {
        result *= i;
    }
    return result;
}

bool is_prime(int number) {
    if(number <= 1) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;

    for(int i = 3; i * i <= number; i += 2) {
        if(number % i == 0)
            return false;
    }
    return true;
}

int main() {
    int a, b;
    cout << "Podaj dwie liczby calkowite: ";
    cin >> a >> b;

    int wyjscie;
    do {
        cout << "\nMENU\n";
        cout << "Podaj numer czynnosci, ktora chcesz wykonac:\n";
        cout << "1. Oblicz silnie liczby a\n";
        cout << "2. Sprawdz czy liczba a jest pierwsza\n";
        cout << "0. Wyjscie\n";
        cin >> wyjscie;

        switch(wyjscie) {
            case 1:
                cout << a << "! = " << compute_factorial(a) << endl;
                break;
            case 2:
                if(is_prime(a))
                    cout << a << " jest liczba pierwsza." << endl;
                else
                    cout << a << " nie jest liczba pierwsza." << endl;
                break;
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Nieprawidlowy numer czynnosci!" << endl;
        }

    } while(wyjscie != 0);

    return 0;
}