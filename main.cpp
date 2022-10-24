#include <iostream>


int policz(int a, int b){

    return a * b;             ///zmiana na mnożenie
}
int main() {

    std::cout << "Hello, World!" << std::endl;

    std::cout << "w pierwszym branchu; 2 * 3 = " <<policz(2,3) << std::endl;
    return 0;
}