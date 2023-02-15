#include "mkdisk.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <ctime>
#include <unistd.h>
#include <iostream>
#include "../analizador/analizador.h"

mkdisk::mkdisk(){}

void mkdisk::make_mkdisk(mkdisk *disco){
    //instrucciones del "mkdisk"
    cout << "name: " << disco->name << endl;
    cout << "path: " << disco->path << endl;
    cout << "size: " << disco->size << endl;
}