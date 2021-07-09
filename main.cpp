#include <iostream>
#include <fstream>
#include "productos.cpp"
#include "opciones.cpp"
#include "carrito_verduras.cpp"
#include "carrito_carnes.cpp"
#include "carrito_frutas.cpp"
#include "carrito_pescados.cpp"
#include "carrito_dulces.cpp"
#include "carrito_juguetes.cpp"
#include "caja_final.cpp"
#include "Model.cpp"

using namespace std;

//=======================================================================================================================================================================
void welcome();
//========================================================================================================================================================================
int main(){

    for (int i = 0; i < 50; i++)
    {
        welcome();
        system("cls");
    }

    Sesion *Nuevasesion = new Sesion;
    Nuevasesion->Menu();

    char primera_Respuesta;

    do
    {
        cout << "Buenas, viene a comprar algo? (A.Si / B.No): ";
        cin >> primera_Respuesta;
    } while ((primera_Respuesta != 'A') && (primera_Respuesta != 'B'));

    if (primera_Respuesta == 'A')
    {
        productos(primera_Respuesta);
    }

    if (primera_Respuesta == 'B')
    {
        cout << "Gracias, que tenga un buen dia.\n";
    }

    system("pause");
    return 0;
}

//==================================================================================================================================================================================
void welcome(){

    cout << "\t===============================================================================================================\n";
    cout << "\t===============================================================================================================\n";
    cout << "\t||    _ __   __ __   __ __    __ __ __    __          __ __ __    __ __ __    __ __  __ _  __    __ __ __    ||\n";
    cout << "\t||   |    | |     | |     |  |        |  |  |        |        |  |        |  |     |/    |/  |  |        |   ||\n";
    cout << "\t||   |/|  | |/|   | |/|   |  |  |-----   |  |        |  |--|__|  |  |--|  |  |    _     _    |  |  |-----    ||\n";
    cout << "\t||     |  |   |   |   |   |  |  |__ __   |  |        |  |        |  |  |  |  |   / |   / |   |  |  |__ __    ||\n";
    cout << "\t||    /  /   /   /   /   /   |        |  |  |        |  |        |  |  |  |  |   | |   | |   |  |        |   ||\n";
    cout << "\t||   /  /   /   /   /   /    |  |-----   |  |        |  |        |  |  |  |  |   | |   | |   |  |  |-----    ||\n";
    cout << "\t||  |   |__/    |__/   /     |  |__ __   |  |__ __   |  |__|--|  |  |  |  |  |   | |   | |   |  |  |__ __    ||\n";
    cout << "\t||  |                  |     |        |  |        |  |        |  |   --   |  |   | |   | |   |  |        |   ||\n";
    cout << "\t||   ------------------       --------    --------    ........    --------    ---   ---   ---    --------    ||\n";
    cout << "\t===============================================================================================================\n";
    cout << "\t===============================================================================================================\n";
    cout << "\n";
}

