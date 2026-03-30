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
    int number;
    cin >> number;
    cout << compute_factorial(number);

    if(is_prime(number))
        cout << number << " is prime." << endl;
    else
        cout << number << " is not prime." << endl;

    return 0;
}