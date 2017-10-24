#include <iostream>
#include "complejo.h"
using namespace std;

int main()
{
    Complejo s;
    Complejo x;
    Complejo y;
    x.Recibe();
    y.Recibe();
    s.Suma(x.Real(), x.Imaginario(), y.Real(), y.Imaginario());
    s.Resta(x.Real(), x.Imaginario(), y.Real(), y.Imaginario());

  return 0;
}
