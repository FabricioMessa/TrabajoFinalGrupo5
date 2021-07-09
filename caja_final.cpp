#include <iostream>
#include <stdio.h>
using namespace std;
#include <fstream>

void caja_final(float precio){
    cout << "\n";
    ofstream boleta;

    boleta.open("Boleta.txt");

    boleta << "\t\t\t\t\tSUPERMERCADO ||TIENDITA DE DON POTENCIO||\n";
    boleta << "El precio final a pagar es de " << precio << "s/.\n";
    boleta << "\t\t\t\t\t\tY Recuerda...\n";
    boleta << "Cada interacción que tenemos con un cliente influye en si regresará o no. Tenemos que ser grandiosos en cada momento, o los perderemos.\n";
    boleta << "\tEn el mundo online, es importante recordar que tu competencia está a solo un clic de distancia.\n";
    boleta << "\t\t\t\t\tQue tenga un bien día, vuelva pronto!!\n";

    fstream archivo("Boleta.bin", ios::binary | ios::out | ios::app);
    archivo.read((char *) & precio, sizeof(float));
    archivo.write((char *) & precio, sizeof(float));
    archivo.close();
}
