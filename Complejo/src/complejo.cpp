#include "complejo.h"

Complejo::Complejo( float a, float b)
   {
   R = a;
   I = a;
   }


   void Complejo::Recibe()
   {
   cout << "\nIntroduzca la parte real del numero: " << endl;
   cin >> R;
   cout << "\nIntroduzca la parte compleja del numero: " << endl;
   cin >> I;
   }

  float Complejo::Real()
  {
   return R;
  }


  float Complejo::Imaginario()

  {
   return I;
  }

void Complejo::Suma( float a, float b, float c, float d)

   {
  cout <<"\n La suma de los numeros es:  ( "  << a + c
       << " , " << b + d
       <<" )" << endl;
   }


  void Complejo::Resta( float a, float b, float c, float d)

  {
  cout <<"\n La resta de los numeros es:  ( " << a - c << " , "
       << b - d
       <<" )" << endl;
  }

