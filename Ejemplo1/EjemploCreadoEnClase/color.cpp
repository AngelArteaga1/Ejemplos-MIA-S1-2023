#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>

using namespace std;


typedef struct{
    int red;
    int green;
    int blue;
}Color;


Color getColor(int red, int green, int blue){
    Color colorcito;
    colorcito.red = red;
    colorcito.green = green;
    colorcito.blue = blue;
    return colorcito;
}

void printColor(Color colorcito){
    cout << "[" << colorcito.red << ", " << colorcito.green << ", " << colorcito.blue << "]";
}

void draw(Color colorcito){
    if(colorcito.red == 0 && colorcito.green == 0 && colorcito.blue == 0){
        cout << "\033[1;40m   \033[0m"; //NEGRO
    } else if(colorcito.red = 255 && colorcito.green == 255 && colorcito.blue == 255){
        cout << "\033[1;47m   \033[0m"; //BLANCO
    } else if(colorcito.red = 255 && colorcito.green == 0 && colorcito.blue == 0){
        cout << "\033[1;41m   \033[0m"; //ROJO
    } else if(colorcito.red = 143 && colorcito.green == 70 && colorcito.blue == 1){
        cout << "\033[1;42m   \033[0m"; //CAFE
    } else if(colorcito.red = 252 && colorcito.green == 193 && colorcito.blue == 87){
        cout << "\033[1;43m   \033[0m"; //PIEL
    } else if(colorcito.red = 70 && colorcito.green == 255 && colorcito.blue == 0){
        cout << "\033[1;42m   \033[0m"; //VERDE
    } else if(colorcito.red = 210 && colorcito.green == 46 && colorcito.blue == 45){
        cout << "\033[1;41m   \033[0m"; //CAFE
    } else if(colorcito.red = 255 && colorcito.green == 249 && colorcito.blue == 173){
        cout << "\033[1;43m   \033[0m"; //AMARILLO
    }
}