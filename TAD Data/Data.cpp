#include <iostream>
#include "Data.h"

using namespace std;

// ---------------------------------------------------------------------------
Data :: Data(int d, int m, int a)
{
    setDia(d);
    setMes(m);
    setAno(a);
}

/*
    Vantagem de usar os setters no construtor:
    Ao usar os métodos setter dentro do construtor, você evita duplicação de código, pois toda a lógica 
    de validação dos valores já está centralizada nos setters. Isso também facilita futuras manutenções, 
    pois se você precisar alterar a regra de validação, você só precisará modificar o setter, sem mexer 
    no construtor.
    
    Dessa forma, qualquer modificação no controle de valores inválidos será aplicada tanto no construtor 
    quanto em qualquer outro lugar que utilize os setters.
*/

Data :: Data()
{
    setDia(1);
    setMes(1);
    setAno(1900);
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
        cout << "Tu inseriu um valor inválido para dia"<<endl;
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
        cout << "Tu inseriu um valor inválido para mes"<<endl;
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
        cout << "Tu inseriu um valor inválido para ano"<<endl;
        ano = 1900;
    }
}

// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
int Data :: dataToInt()
{
    //entregar o numero de dias
    //numero de dias vai ser calculado pelo numero de anos 
    //  (cada ano tem 365 dias)
    // + numero do mês que esta associado ao vetor numDiasMes
    // + o dia 

    return (ano*365) + numDiasMes[mes] + dia;
}
// ---------------------------------------------------------------------------