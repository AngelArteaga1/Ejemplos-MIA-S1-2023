#include "analizador.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "../mkdisk/mkdisk.h"

/*Funciones que devuelven el tipo y el valor de un parametro en strings ya en lowercase */
string get_tipo_parametro(string parametro){
    //Iteramos hasta obtener el tipo del parametro
    string tipo = "";
    for(int i = 0; i < parametro.length(); i++){
        if(parametro.at(i) == '=') break;
        char caracter = tolower(parametro.at(i));
        tipo = tipo + caracter;
    }
    //devolvemos el string
    return tipo;
}
string get_valor_parametro(string parametro){
    //Iteramos hasta obtener el tipo del parametro
    string valor = "";
    bool concatenar = false;
    for(int i = 0; i < parametro.length(); i++){
        if(concatenar){
            char caracter = parametro.at(i);
            valor = valor + caracter;
        }
        if(parametro.at(i) == '>') concatenar = true;
    }
    //devolvemos el string
    return valor;
}

/*Funcion para analizar el comando de mkdisk*/
void analizar_mkdisk(char *parametros){
    //Pasamos a la siguiente posicion
    parametros = strtok(NULL, " ");
    //Inicializamos nuestro disco
    mkdisk *disco = new mkdisk();
    while(parametros != NULL){
        //Obtenemos el tipo y el valor del parametro actual
        string tmpParam = parametros;
        string tipo = get_tipo_parametro(tmpParam);
        string valor = get_valor_parametro(tmpParam);
        //Verificamos cual parametro es para inicializar el objeto (los parametros ya vienen en lowercase)
        if(tipo == "$size"){
            disco->size = stoi(valor);
        } else if (tipo == "$path"){
            disco->path = valor;
        } else if (tipo == "$name"){
            disco->name = valor;
        } else {
            cout << "Parametro no aceptado en 'mkdisk': " << valor << endl;
        }
        parametros = strtok(NULL, " ");
    }
    //Creamos el disco
    disco->make_mkdisk(disco);
}


/*Funcion que define que comando es el que hay que ejecutar*/
void analizar(char *comando) {
    char *token = strtok(comando, " ");
    if(strcasecmp(token, "mkdisk") == 0){
        analizar_mkdisk(token);
    } else {
        cout << "Comando no aceptado :c" << endl;
    }
}