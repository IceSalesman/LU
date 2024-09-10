/*******************************************
Dāvis Karpovskis, dk24053
A8 Dots naturāls skaitlis n. Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda naturāla skaitļa kvadrāti.
Programma izveidota: 08.09.2024.
*******************************************/
#include <iostream>
#include <cmath>

int main() {
    char choise; // Dod iespēju atkāroti lietot programmu
    std::cout << "Dots naturals skaitlis n. Izdrukat tos skaitla n reizinatajus, kuri ir kada naturala skaitla kvadrati." << std::endl;
    while (true) {
        int n;


        std::cout << "Ievadiet naturalu skaitli n: ";
        std::cin >> n;
        for (int i = 1; i <= n; i++) { 
            if (n % i == 0) {
                double sqrt_i = sqrt(i); 
                if (sqrt_i == int(sqrt_i)) { // Lai iegūtu reizinātājus, kuri ir kāda naturāla skaitļa kvadrāts 
                    std::cout << i << " "; 
                }
            }
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


/****************************************************
       Ievads      Programmas vēlamā      Rezults
                       reakcija         
         16             1 4 16               +
         36            1 4 9 36              +
        126              1 25                +
          0               -                  +
*****************************************************/