#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>

using namespace std;


class complejo
{
    private:
        double R;
        double I;

    public:

    Complejo( float = 0, float = 0);
    void Recibe();
    float Real();
    float Imaginario();
    void Suma(float, float, float, float);
    void Resta(float, float, float, float);

    void Impresion()
    {
    cout << "( " << R << " , " << I <<" )" << endl;
    }



    protected:
    private:
};

#endif // COMPLEJO_H
