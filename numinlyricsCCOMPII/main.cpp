#include <iostream>
#include <cstring>
using namespace std;

int contarDigitos(int Num){
    int Contador, Num2;
    Num2 = Num;
    Contador = 0;
    while(Num != 0){
            Contador++;
            Num=(Num / 10);
    }
    return Contador;
}
string LecUnidades(int num)
{
    int n5;
    n5 = (num % 10);
    string unidades[] ={"cero", "uno", "dos" ,"tres" ,"cuatro" ,"cinco" ,
                         "seis" ,"siete" ,"ocho" ,"nueve"};
    if(n5>=0)
    {
        return unidades[n5];
    }

}
string LecDece(int num)
{
    string especiales[] ={"once", "doce","trece","catorce", "quince",
                         "dieciseis","diecisiete","dieciocho","diecinueve","veinti"};
    string decenas[] ={ "diez","veinte","treinta","cuarenta","cincuenta", "sesenta",
                        "setenta", "ochenta", "noventa"};
    int n4 = (num / 10) % 10;
    if(n4==1&&num>10&&num<20)
    {
        return especiales[num-11];
    }
    if(num%10==0)
    {
        return decenas[n4-1];
    }
    if(n4==2&&num>20&&num<30)
    {
        return especiales[9]+LecUnidades(num);
    }
    if(num>29&&num%10!=0)
    {
        return decenas[n4-1]+" y "+LecUnidades(num);
    }

}
string LecCen(int num)
{
    string centenas[] =
    {"cien", "ciento","cientos"};
    string add[]=
    {"quinientos","sete", "nove"};

    int n3 = (num / 100) % 10;
    if(num==100){return centenas[0];}
    if(num>100&&num<110){return centenas[1]+" "+LecUnidades(num-100);}
    if(num>109&&num<200)
    {
            return centenas[1]+" "+LecDece(num-100);
    }
        if(n3!=1&&n3!=5&&n3!=9&&n3!=7&&num%100==0){return LecUnidades(n3)+centenas[2];}
        if(n3!=5&&n3!=9&&num>199&&n3!=7&&num%100!=0)
        {
            return LecUnidades(n3)+centenas[2]+" "+LecDece(num-(n3*100));
        }
        if(n3==5){if(num%100==0)return add[0];if(num%100!=0)return add[0]+" "+LecDece(num-500);}
        if(n3==9){if(num%100==0)return add[2]+centenas[2];if(num%100!=0)return add[2]+centenas[2]+" "+LecDece(num-900);}
        if(n3==7){if(num%100==0)return add[1]+centenas[2];if(num%100!=0)return add[1]+centenas[2]+" "+LecDece(num-700);}

}
string Evaluar(int num)
{
    if(num>=0&&num<10)
    {
        return LecUnidades(num);
    }
    if(num>9&&num<100)
    {
        return LecDece(num);
    }
    if(num>99&&num<1000)
    {
        return LecCen(num);
    }
}
string LecMil(int num)
{
    string miles[]={"mil",""};

    int n1 = num / 1000;
    if(num==1000){return miles[0];}
    if(n1==1&&num%1000!=0)
    {
        return miles[0]+" "+Evaluar(num-1000);
    }
    int partecen=(num-(n1*1000));
    if(num==21000){return "veintiun "+miles[0]+" ";}
    if(num>21000&&num<22000){return "veintiun "+miles[0]+" "+Evaluar(partecen);}
    if(n1!=1&&partecen==0){return Evaluar(n1)+" "+miles[0]+" ";}
    if(n1!=1&&partecen!=0){return Evaluar(n1)+" "+miles[0]+" "+Evaluar(partecen);}


}
string EvaluarMil(int num)
{
    if(num<1000)
    {
        return Evaluar(num);
    }
    if(num>999)
    {
        return LecMil(num);
    }
}
string MasD6(long long int num)
{
    string mill[]={"millon","millones"};
    long long int n0 = num / 1000000;
    if(num==1000000){return "un "+mill[0];}
    if(num%1000000==0&&n0!=1){return EvaluarMil(n0)+" "+mill[1];}

    long int newNum=num-(n0*1000000);
    if(n0!=1&&n0<1000000){return EvaluarMil(n0)+" "+mill[1]+" "+EvaluarMil(newNum);}

}

int main()
{
    long long int numero;

   cout<<"Escribe un numero : "; cin>>numero;


   if(contarDigitos(numero)==1)
   {
       cout<<LecUnidades(numero)<<endl;
   }
   if(contarDigitos(numero)==2)
   {
       cout<<LecDece(numero)<<endl;
   }
   if(contarDigitos(numero)==3)
   {
       cout<<LecCen(numero)<<endl;
   }
   if(contarDigitos(numero)>3&&contarDigitos(numero)<7)
   {
       cout<<LecMil(numero)<<endl;
   }
   if(contarDigitos(numero)>6&&contarDigitos(numero)<13)
   {
       cout<<MasD6(numero)<<endl;
   }
   return 0;

}























