#include "Cjuego.h"

Cjuego::Cjuego()
{
   //EstablecerTablero(4);

    //ctor
}
/*void Cjuego::EstablecerTablero(int n)
{
    if(n<4) n=4;
    if(n>10) n=10;
    tamanioTablero=n;
    tablero.CrearMatriz(n+3,n+3);
    tablero.RellenarArray('.');
}

void Cjuego::MostrarTablero()
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

void Cjuego::IngresarFicha(char ficha,int col)
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
bool Cjuego::ExistenEspaciosDisponibles()
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

bool Cjuego::ExisteCuatroEnRaya(char ficha)
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
bool Cjuego::ExistenEspaciosDisponiblesEnCol(int col)
{
    for(int f=0;f<tamanioTablero;f++)
    {
        if(tablero(f,col-1)=='.')
            return true;
    }
    return false;

}*/
void Cjuego::IngresarNombres()
{
    string nombre;
    cout<<"Ingresa nombre del jugador1 : ";
    cin>>nombre;
    jugador1->setNombre(nombre);
    cout<<"Ingresa nombre del jugador2 : ";
    cin>>nombre;
    jugador2->setNombre(nombre);
}
/*int Cjuego::SolicitarMovimiento(string jugador)
{
    int col;
    for(;;)
    {
        cout<<jugador<<" :";
        cin>>col;
        if(col>=1 && col<=tamanioTablero&&tablero.ExistenEspaciosDisponiblesEnCol(col))break;
        if(col==0)break;
    }
    return col;

}*/
void Cjuego::Jugar()
{
    int col;
    char ganador='E';

    IngresarNombres();

    do
    {
        cout<<"Ingrese un tamano entre el 4 - 10 : ";
        cin>>tamanioTablero;
    }while(tamanioTablero<4||tamanioTablero>10);
    system("cls");
    tablero.EstablecerTablero(tamanioTablero);
    tablero.MostrarTablero();

    while(tablero.ExistenEspaciosDisponibles())
    {
        //col=SolicitarMovimiento(Nombre1);
        col=jugador1->SeleccionarMovimiento(tablero,tamanioTablero,'X');



        if(col==0)break;

        tablero.IngresarFicha('X',col);
        system("cls");
        tablero.MostrarTablero();
        if(tablero.ExisteCuatroEnRaya('X'))
        {
            ganador='X';
            break;
        }
        if(!tablero.ExistenEspaciosDisponibles())break;

        col=jugador2->SeleccionarMovimiento(tablero,tamanioTablero,'O');
        if(col==0)break;
        tablero.IngresarFicha('O',col);
        system("cls");
        tablero.MostrarTablero();
        if(tablero.ExisteCuatroEnRaya('O'))
        {
            ganador='O';
            break;
        }
    }
    if(ganador=='E')
    {
        cout<<"---EMPATE---"<<endl;
    }
    else
    {
        cout<<"Gano : "<<ganador<<endl;
    }

}
void Cjuego::setJugador1(Cjugador *jugador)
{
    jugador1=jugador;
}
void Cjuego::setJugador2(Cjugador *jugador)
{
    jugador2=jugador;
}
Cjuego::~Cjuego()
{
    //dtor
}
