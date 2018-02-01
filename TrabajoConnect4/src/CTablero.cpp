#include "CTablero.h"

CTablero::CTablero()
{
   EstablecerTablero(4);
    //ctor
}
void CTablero::EstablecerTablero(int n)
{
    if(n<4) n=4;
    if(n>10) n=10;
    tamanioTablero=n;
    tablero.CrearMatriz(n+3,n+3);
    tablero.RellenarArray('.');
}
char CTablero::operator()(int f,int c)
{
    return tablero(f,c);
}

void CTablero::MostrarTablero()
{
    for(int f=0;f<tamanioTablero;f++)
    {
        for(int c=0;c<tamanioTablero;c++)
        {
            cout<<tablero(f,c)<<" ";
        }
        cout<<endl;
    }
    for(int c=1;c<=tamanioTablero;c++)
    {
        cout<<c<<" ";
    }
    cout<<endl;
}

void CTablero::IngresarFicha(char ficha,int col)
{
    int f;
    for(f=tamanioTablero-1;f>=0;f--)
    {
        if(tablero(f,col-1)=='.')
        {
            tablero(f,col-1)=ficha;
            break;
        }
    }

}
bool CTablero::ExistenEspaciosDisponibles()
{
    for(int f=0;f<tamanioTablero;f++)
    {
        for(int c=0;c<tamanioTablero;c++)
        {
            if(tablero(f,c)=='.')
            {
                return true;
            }

        }
    }
    return false;

}

bool CTablero::ExisteCuatroEnRaya(char ficha)
{
    for(int f=0;f<tamanioTablero;f++)
    {
        for(int c=0;c<tamanioTablero;c++)
        {
            if(tablero(f,c)==ficha)
            {
                if(tablero(f,c+1)==ficha && tablero(f,c+2)==ficha && tablero(f,c+3)==ficha)
                    return true;
                if(tablero(f+1,c)==ficha && tablero(f+2,c)==ficha && tablero(f+3,c)==ficha)
                    return true;
                if(tablero(f+1,c+1)==ficha && tablero(f+2,c+2)==ficha && tablero(f+3,c+3)==ficha)
                    return true;
            }

        }
    }
    return false;
}
bool CTablero::ExistenEspaciosDisponiblesEnCol(int col)
{
    for(int f=0;f<tamanioTablero;f++)
    {
        if(tablero(f,col-1)=='.')
            return true;
    }
    return false;

}


CTablero::~CTablero()
{
    //dtor
}
