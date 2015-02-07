// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)

{
    while(!mi_cola.empty())   // se  recorre la cola mientras no este vacia.
    {

        if ((mi_cola.front()%2)==0)    //realiza la condicion tomando el primer elemento de la cola y le extrae el residuo.
    {                                 // Hace la comparacion si es par o impar.
    return true;                      //si es verdadero retorna true y saca al primer elemento de la cola/
    mi_cola.pop();
    } else

    {
    return false;                    // de lo contrario retorna falso y saca un elemento de la cola
    mi_cola.pop();
    }
    }
    return 0;

    }


//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    while(!mi_lista.empty())
        {
        if ((mi_lista.front()%2)==0)   // toma el primer elemento de la lista y le extrae el residuo lo compara si es par
        {
        return true;                     // de ser si retorna verdaddero y saca el primer elemento
         mi_lista.pop_front();
        }
        else {
               return false;
         mi_lista.pop_front();                      //retorna falso y saca otro elemento
        }


return false;
}
}
//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{

 while(!mi_cola.empty())
 {

    if (str==mi_cola.front())          //compara si str esta en la cola
    return true;                     // retorna true si lo encuentra
    mi_cola.pop();                           // saca elemenots
}
return false;                  // si no se cumple retorna falsp
}

//devuelve true si str es un elemento de mi_lista, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    while (!mi_lista.empty())         //compara la si no esta vacia
    {
      if(str==mi_lista.front())         //busca si encuentra str
            return true;          //true si lo encuentra y luego saca un elemenot
      mi_lista.pop_front();         // falso si lo encuentra
    }
    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
   int acumulado=0;                         //acumulado que va sumando los elementos
    while(!mi_cola.empty())                  // si no esta vacio
    {
    acumulado=acumulado+mi_cola.front();  // suma el primer elemento mas el elemento anterior
    mi_cola.pop();                 // saca el eleemento ya sumado en el acumulado

    }


    return acumulado;
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
int sumarLetras(list<string> mi_lista)
{

    return -1;
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
