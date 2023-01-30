#include "./imagen.cpp"

void crearArchivo(string filename){
    //Inicializamos el archivo
    string path = "./imagenes/" + filename;
    FILE *archivo = fopen(path.c_str(), "wb");
    fseek(archivo, 0, SEEK_SET);

    Resolution resolucion;
    resolucion.width = 2;
    resolucion.height = 2;

    fwrite(&resolucion.width, sizeof(resolucion.width), 1, archivo);
    fwrite(&resolucion.height, sizeof(resolucion.height), 1, archivo);

    Color primero = getColor(0,0,0);
    Color segundo = getColor(255,255,255);
    Color tercero = getColor(255,255,255);
    Color cuarto = getColor(0,0,0);

    fwrite(&primero, sizeof(primero), 1, archivo);
    fwrite(&segundo, sizeof(segundo), 1, archivo);
    fwrite(&tercero, sizeof(tercero), 1, archivo);
    fwrite(&cuarto, sizeof(cuarto), 1, archivo);


    fclose(archivo);
}

void leerArchivo(string filename){
    //Inicializamos el archivo
    string path = "./imagenes/" + filename;
    FILE *archivo = fopen(path.c_str(), "rb+");
    fseek(archivo, 0, SEEK_SET);

    int width = 0;
    int height = 0;
    fread(&width, sizeof(width), 1, archivo);
    fread(&height, sizeof(height), 1, archivo);

    cout << "width:" << width << endl;
    cout << "height:" << height << endl;


    Color primero;
    Color segundo;
    Color tercero;
    Color cuarto;

    fread(&primero, sizeof(primero), 1, archivo);
    fread(&segundo, sizeof(segundo), 1, archivo);
    fread(&tercero, sizeof(tercero), 1, archivo);
    fread(&cuarto, sizeof(cuarto), 1, archivo);

    draw(primero);
    draw(segundo);
    cout << endl;
    draw(tercero);
    draw(cuarto);


    printColor(primero);
    printColor(segundo);
    printColor(tercero);
    printColor(cuarto);


    fclose(archivo);
}

int main(){
    //Obtenemos el nombre del archivo
    string filename;
    cout << "Ingrese el nombre de la imagen: ";
    getline(cin, filename);

    string option;
    cout << "1. Para escribir" << endl << "2. Para leer" << endl;
    cout << "> ";
    getline(cin, option);
    if(option == "1"){
        crearArchivo(filename);
    } else if(option == "2"){
        leerArchivo(filename);
    }
    return 0;
}