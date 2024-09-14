/*******************************************
Dāvis Karpovskis, dk24053
AuPLa0201. Izveidot C++ programmu, kura pārvērš Fārenheita grādos uzdotu temperatūru par temperatūru Celsija grādos. Formula pārvēršanai:
C = 5/9(F-32)
Temperatūru Celsija grādos izdrukāt ar vienu ciparu aiz komata.
Programma izveidota: 13.09.2024.
*******************************************/

#include <iostream>
#include <iomanip>

int main() {
    char choise;
    while(true){
        double f;
        std::cout << "Ievadiet temperaturu (Farenheits): ";
        std::cin >> f;
        double c = (f - 32) * 5 / 9;
        std::cout << std::setprecision(1) << std::fixed;
        std::cout << "Temperatura (Celsijs): " << c << std::endl;\
        
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
          0             -17.8                +
         32               0.0                +
      97.88              36.6                +
        -17              27.2                +
*****************************************************/