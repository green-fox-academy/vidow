#include <iostream>
#include <vector>
#include "Human.h"
#include "SuperHuman.h"
#include "AquaHuman.h"

using namespace std;

int main()
{
    Human h;
    SuperHuman sh;
    AquaHuman ah;

    h.travelling();
    sh.travelling();
    ah.travelling();

    return 0;
}
