#include<iostream>

using namespace std;

int compute_factorial(int number) {
    int result = 1;
    for(int i = 2; i <= number; i++) {
        result *= i;
    }
    return result;
}


int main() {


    return 0;
}