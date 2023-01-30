
#include "./imagen.cpp"
#include <string.h>

void crearArchivo(string filename){
    //Inicializamos el archivo
    string path = "./imagenes/" + filename;
    FILE *archivo = fopen(path.c_str(), "wb");
    fseek(archivo, 0, SEEK_SET);

    //Creamos la imagen
    Resolution size = getResolucionMarioBros();
    Color * imagen = getMarioBros();

    //Escribimos la informacion en el archivo
    fwrite(&size.width, sizeof(size.width), 1, archivo);
    fwrite(&size.height, sizeof(size.height), 1, archivo);

    //Escribimos los pixeles
    for(int i = 0; i < size.width * size.height; i++){
        Color pixel = imagen[i];
        fwrite(&pixel, sizeof(pixel), 1, archivo);
    }

    //Cerramos el archivo
    fclose(archivo);

    cout << "Imagen generada correctamente" << endl;
}

void leerArchivo(string filename){
    //Inicializamos el archivo
    string path = "./imagenes/" + filename;
    FILE *archivo = fopen(path.c_str(), "rb+");
    fseek(archivo, 0, SEEK_SET);

    //Obtenemos x & y
    int width = 0;
    int height = 0;
    fread(&width, sizeof(int), 1, archivo);
    fread(&height, sizeof(int), 1, archivo);

    //Obtenemos la matriz de colores -> Tambien funciona
    //Color imagen[width*height];
    //fread(&imagen, sizeof(imagen), 1, archivo);

    //Mostramos la imagen
    ofstream file;
    file.open("./representacion/imagen.dot", ios::out);
    if(file.fail()){
        cout<<"Error no se pudo abrir el archivo";
        return;
    }


    file << "digraph {" << endl;
    file << "node [shape=none]" << endl;
    file << "n2 [label = <" << endl;
    file << "<table border=\"0\" cellspacing=\"0\">" << endl;


    int index = 0;
    for(int i = 0; i < height; i++){
        file << "<tr>" << endl;
        for(int j = 0; j < width; j++){
            //Obtenemos el color
            Color color;
            fread(&color, sizeof(color), 1, archivo);
            //Escribimos el color
            file << "<td bgcolor=\"" << convertToHex(color) <<"\" width=\"20\" height=\"10\"> </td>" << endl;
            //Por si queremos imprimir en consola
            draw(color);
            index++;
        }
        cout << endl;
        file << "</tr>" << endl;
    }

    file << "</table>" << endl;
    file << "> ]" << endl;
    file << "}" << endl;

    //Cerramos el file
    file.close();

    //Cerramos el archivo
    fclose(archivo);

    cout << "Imagen leida correctamente" << endl;
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