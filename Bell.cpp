#include <iostream>
#include "Bell.h"

using namespace std;

Bell::Bell()
{
    isDing = true;
}

void Bell::sound()
{
    if (isDing)
    {
        cout << "ding" << endl;
    }
    else
    {
        cout << "dong" << endl;
    }

    isDing = !isDing;
}