#include <stdio.h>
#include <fstream>
#include "./analizador/analizador.h"
using namespace std;

int main()
{
  cout << "*****************************************" << endl;
  cout << "***** ANGEL OSWALDO ARTEAGA GARCIA ******" << endl;
  cout << "********* SISTEMA DE ARCHIVOS ***********" << endl;
  cout << "*********** PROYECTO 1, MIA *************" << endl;
  cout << "************** 201901816 ****************" << endl;
  cout << "*****************************************" << endl;

  char comando[400];
  bool repetir = true;
  do{
    //Pedimos el comando
    cout<< "> ";
    scanf(" %[^\n]",comando);
    //Ahora analizamos
    analizar(comando);
  } while(repetir);
  return 0;
}