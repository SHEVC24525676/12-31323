#include "b.h"

int main()
{
    Bankomat bankomat(123, 10000, 10, 1000);

    bankomat.Print();

    cout << endl;

    bankomat.TakeMoney(500);

    cout << endl;

    bankomat.Print();

    return 0;
}