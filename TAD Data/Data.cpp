#include <iostream>
#include "Data.h"

using namespace std;

// ---------------------------------------------------------------------------
Data :: Data(int d, int m, int a)
{
    dia = d;
    mes = m;
    ano = a;
}

Data :: Data()
{

}

Data :: ~Data()
{

}
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
void Data :: setDia(int d)
{
    if (d >= 0 && d <= 31)
    {
        dia = d;
    }
    else 
    {
        dia = 1;
    }
}
void Data :: setMes(int m)
{
    if (m >= 1 && m <= 12)
    {
        mes = m;
    }
    else 
    {
        mes = 1;
    }
}
void Data :: setAno(int a)
{
    if (a > 0)
    {
        ano = a;
    }
    else 
    {
        ano = 1900;
    }
}

// perguntar como essa varificação fica frente ao construtor que recebe parâmetros
// ---------------------------------------------------------------------------