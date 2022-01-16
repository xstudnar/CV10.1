#include <iostream>
#include "Forest.h"

int main() {
    Forest* forest = new Forest();

    forest->setTime(EnumTime::Future);

    forest->printDescription();
    forest->printItems();
    forest->printNpcs();
    forest->printPossibilities();

    delete forest;
    return 0;
}
