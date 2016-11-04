#include "riven.h"
#include <iostream>

int main() {

    riven a( 3.74*pow(10,-2), -0.825,0.16*pow(10,2));

    a.solve();
    std::cout << "V = " << a.getResult() << std::endl;

    informationAlerts(a);

    return 0;
}
