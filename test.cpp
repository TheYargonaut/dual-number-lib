#include "dual.h"

#include <iostream>

using namespace std;
using namespace dual;

int main() {
    Dual< double > foo{ 1.0, 0.1 };
    Dual< float > bar{ 0.1, -1.0 };

    cout << foo << "\n" << bar << endl;
}