#include <iostream>


int main() {
    char choise;

    while(true){
e
        double x, y;


        std::cout << "Ievadiet x vetribu: ";
        std::cin >> x;
        if (x < -2) {
            std::cout << "f(x) = 0";
        } else if (x > -2 && x < -1) {
            y = x*(-1)-2;
            std::cout << "f(x) = " << y;
        } else if (x >= -1 && x < 1) {
            y = x;
            std::cout << "f(x) = " << y;
        } else if (x >= 1 && x < 2) {
            y = x*(-1)-2;
        } else if (x >= 2) {
            std::cout << "f(x) = 0";
        }
        std::cout << std::endl;
        
        
       
        std::cout << "Vai turpinat? (y/n): ";
        std::cin >> choise; 
        if (choise == 'n') {
            break;
        }   
    }

    return 0;
}