#include "Complexe.h"
#include <iostream>
#include<cmath>
using namespace std;

int main()
{   
    double a=3;
    Complexe C1(2, 1);
    Complexe C2(1, 2);
    Complexe C3 = C1 + C2;
    Complexe C4 = C1 + a;
    C3.afficher();
    C4.afficher();
    cout << "......." << endl;


    Complexe C5 = C1 - C2;
    Complexe C6 = C1 - a;

    C5.afficher();
    C6.afficher();
    cout << "......." << endl;

    Complexe C11 = C1 - C2;
    Complexe C12 = C1 - a;

    C5.afficher();
    C6.afficher();
    cout << "......." << endl;

    Complexe C7 = C1 * C2;
    Complexe C8 = C1 * a;

    C7.afficher();
    C8.afficher();
    cout << "......." << endl;

    Complexe C9 = C1 / C2;
    Complexe C10 = C1 / a;

    C9.afficher();
    C10.afficher();
    cout << "......." << endl;

    cout << "C1 == C2 : " << (C1 == C2) << endl;
    cout << "C1 != C2 : " << (C1 != C2) << endl;
    cout << "C1 < C2  : " << (C1 < C2) << endl;
    cout << "C1 > C2  : " << (C1 > C2) << endl;
    cout << "C1 <= C2 : " << (C1 <= C2) << endl;
    cout << "C1 >= C2 : " << (C1 >= C2) << endl;

    cout << "......." << endl;

    return 0;


}

