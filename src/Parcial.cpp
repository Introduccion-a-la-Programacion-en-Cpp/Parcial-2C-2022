// Ejercicio-04.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

void tema1() {
    
    cout << "1 - ¿Cual de las siguientes opciones corresponde a una cadena de caracteres correcta en su sintaxis ?" << endl;
    // Descomentar
    //string miCadena = Alejandro Medici
    //string miCadena = 'Uade';
    //string miCadena = “Augusto Canepa”;
    //string miCadena = 'Char';

    cout << "2 - ¿Cual  es el output si el usuario ingresa 5.7 y luego presiona la tecla enter en su teclado?" << endl;
    {
        float x = 24;
        int y = 6;
        x = x + y;
        cin >> x;
        cout << y; // Aqui el ouput...
        // Respuestas:
        // y
        // 0.57E1
        // 6
        // 5.7
        // 30
    }

    cout << "3 - ¿Cual es el valor de la variable x?" << endl;
    {
        float x = (6 / 9) * (3 + 6) + 1 * (4 + 2) + ((3 / 2) - 6);
        cout << x;
        // 17
        // 7.5
        // 9
        // 1
        // Ninguna de las anteriores
    }

    cout << "4 - ¿Cual es el valor de la variable x?" << endl;
    {
        float x = 2E1;
        cout << x;
        // 2
        // 100
        // 20
        // El valor es invalido
        // Hay un error en la sintaxis
    }


    cout << "5 - ¿Cual es el valor de la variable z?" << endl;
    {
        int x = -1;
        int y = x++;
        int z = ++y;
        cout << z;
        // 1
        // 2
        // 3 
        // 0
        // -2
    }

    cout << "6 - ¿Cual es el valor de la variable a?" << endl;
    {   
        int a = 4 - (27 % 5) * (10 % 3);
        cout << a;
        // 0
        // 1
        // 2 
        // 3
        // 4
    }

    cout << "7 - ¿Cual de las siguientes palabras NO puede ni debe ser usada como nombre de variable?" << endl;
    {
        //int INT = 0;
        //int int x = 1;
        //int iNt = 34;
        // Ninguna de las anteriores
    }

    cout << "8 - ¿Declare una cadena de caracteres?" << endl;
    {
        string myName = "Bjarne Stroustrup";
    }

    cout << "9 - ¿Cual es el output del siguiente codigo?" << endl;
    {
        int a = 10, b = --a, c = ++a;
        cout << c << b << a;
        // cba
        // 101010
        // 10910
        // 989
        // Ninguna de las anteriores
        cout << endl;
    }

    cout << "10 - ¿Cual es el valor final de la variable k?" << endl;
    {
        int i = 5, j = -2, k = -5;
        if (i >= 0) {
            if (j <= 0) {
                if (k < 0 && k > -5)
                    k = k + 2;
                if (k <= 0)
                    k++;
            }
            else if (k < 0)
                k = k + 15 * 37;
        }

        if (i <= 0)
            i++;

        k = i + j + k;
        cout << k;
    }

    cout << "11 - Se debe generar de manera manual el mapa para un mod de Minecraft a partir de un tablero de 50x50" << endl;
    {
        // Le va a solicitar al jugador que ingrese por consola el nombre de la unidad que debe guardarse en cada celda los siguientes elementos que representados por un caracter;
        // ● Casillero vacío, carácter: “0” 
        // ● Bloque de tierra, carácter: “T” 
        // ● Cofre, carácter: “C” 
        // ● Enemigo, chance 10%, carácter: “E” 
        // Una vez completada la carga mostrar todos los valores almacenados por pantalla
        // Extra: en caso de que el usuario introduzca un valor que no sea valido debera estar contemplado por el programa y tomar una decision en base a eso.

    }

}

void tema2() {

    cout << "1 - ¿Cual de las siguientes opciones corresponde a una cadena de caracteres correcta en su sintaxis ?" << endl;
    // Descomentar
    //string miCadena = Alejandro Medici
    //string miCadena = 'Uade';
    //string miCadena = "Augusto Canepa";
    //string miCadena = 'String';

    cout << "2 - ¿Cual  es el output si el usuario ingresa 5.7 y luego presiona la tecla enter en su teclado?" << endl;
    {
        float x = -10;
        unsigned int y = 1;
        x = x + y;
        cin >> x;
        cout << y; // Aqui el ouput...
        // Respuestas:
        // 1
        // 13.7E1
        // -1
        // 49885481
        // x
    }

    cout << "3 - ¿Cual es el valor de la variable x?" << endl;
    {
        float x = 6 * (1.0f / 2) + 1 * (7 + 3) + ((12 / 2) - 6);
        cout << x;
        // 28
        // 31
        // .5
        // 28.9
        // Ninguna de las anteriores
    }

    cout << "4 - ¿Cual es el valor de la variable x?" << endl;
    {
        float x = 1E2;
        cout << x;
        // 1
        // 11
        // 10
        // El valor es invalido
        // Hay un error en la sintaxis
    }


    cout << "5 - ¿Cual es el valor de la variable z?" << endl;
    {
        // descomentar lo que corresponda
        int x = 1;
        int y = ++x - 1;
        int z = ++y;
        cout << z;
        // 1
        // 2
        // 3 
        // 4
        // 5
    }

    cout << "6 - ¿Cual es el valor de la variable a?" << endl;
    {
        int b = 8 - (10 % 2) * (6 % 6);
        cout << b;
        // 10
        // 1
        // 4 
        // 7
        // 8
    }

    cout << "7 - ¿Cual de las siguientes palabras NO puede ni debe ser usada como nombre de variable?" << endl;
    {
        //int float = 0;
        //int _default = 1;
        //int habilityPower = 34;
        // Ninguna de las anteriores
    }

    cout << "8 - ¿Declare una cadena de caracteres?" << endl;
    {
        string myName = "Bjarne Stroustrup";
    }

    cout << "9 - ¿Cual es el output del siguiente codigo?" << endl;
    {
        int a = 1, b = --a, c = ++a;
        cout << c << b << a;
        // 989
        // 898
        // 979
        // 899
        // Ninguna de las anteriores
        cout << endl;
    }

    cout << "10 - ¿Cual es el valor final de la variable k?" << endl;
    {
        int i = -255, j = -2, k = -1;
        if (i >= 0) {
            if (j <= 0) {
                if (k < 0 && k > -5)
                    k = k + 2;
                if (k <= 0)
                    k++;
            }
            else if (k < 0)
                k = k + 15 * 37;
        }

        if (i <= 0)
            i++;

        k = i + j + k;
        cout << k;
    }

    cout << "11 - Se debe generar de manera manual el mapa para un mod de Minecraft a partir de un tablero de 50x50" << endl;
    {
        // Le va a solicitar al jugador que ingrese por consola el nombre de la unidad que debe guardarse en cada celda los siguientes elementos que representados por un caracter;
        // ●Casillero vacío, carácter: “-” 
        // ● Bloque de tierra, carácter: “B” 
        // ● Cofre, carácter: “$” 
        // ● Enemigo, carácter: “X” 
        // Una vez completada la carga mostrar todos los valores almacenados por pantalla
        // Extra: en caso de que el usuario introduzca un valor que no sea valido debera estar contemplado por el programa y tomar una decision en base a eso.

    }

}

void tema3() {

    cout << "1 - ¿Cual de las siguientes opciones corresponde a una cadena de caracteres correcta en su sintaxis ?" << endl;
    // Descomentar
    //string miCadena = Alejandro Medici
    //string miCadena = L'UADE';
    //string miCadena = "Augusto Canepa";
    //string miCadena = 'Esta es la respuesta';

    cout << "2 - ¿Cual  es el output si el usuario ingresa 5.7 y luego presiona la tecla enter en su teclado?" << endl;
    {
        float x = 10.f;
        int y = 100;
        x = x + y;
        cin >> x;
        cout << y; // Aqui el ouput...
        // Respuestas:
        // y
        // 8.57E1
        // 8.5
        // x
        // Ninguna de las anteriores
    }

    cout << "3 - ¿Cual es el valor de la variable x?" << endl;
    {
        float x = 10 * (10 / 2) + 3 * (1 / 2) * ((3 * 2) - 6);
        cout << x;
        // 53
        // 54
        // 0
        // 59
        // Ninguna de las anteriores
    }

    cout << "4 - ¿Cual es el valor de la variable x?" << endl;
    {
        float x = 1E3;
        cout << x;
        // 1
        // 11
        // 10
        // El valor es invalido
        // Hay un error en la sintaxis
    }


    cout << "5 - ¿Cual es el valor de la variable z?" << endl;
    {
        // descomentar lo que corresponda
        int x = 1;
        int y = --x * 2;
        int z = y--;
        cout << z;
        // 1
        // 2
        // 3 
        // 4
        // 5
    }

    cout << "6 - ¿Cual es el valor de la variable a?" << endl;
    {
        int a = 3 - (6 % 5) * (10 % 8);
        cout << a;
        // 0
        // 1
        // 2 
        // 3
        // Ninguna de las anteriores
    }

    cout << "7 - ¿Cual de las siguientes palabras NO puede ni debe ser usada como nombre de variable?" << endl;
    {
        //int _Cout = 0;
        //int char = 1;
        //int _default = 34;
        //Ninguna de las anteriores
    }

    cout << "8 - ¿Declare una cadena de caracteres?" << endl;
    {
        string myName = "Bjarne Stroustrup";
    }

    cout << "9 - ¿Cual es el output del siguiente codigo?" << endl;
    {
        int a = 9, b = --a, c = ++a;
        cout << c << b << a;
        // 989
        // 898
        // 979
        // 899
        // Ninguna de las anteriores
        cout << endl;
    }

    cout << "10 - ¿Cual es el valor final de la variable k?" << endl;
    {
        int i = -2, j = -5, k = -1;
        if (i >= 0) {
            if (j <= 0) {
                if (k < 0 && k > -5)
                    k = k + 2;
                if (k <= 0)
                    k++;
            }
            else if (k < 0)
                k = k + 15 * 37;
        }

        if (i <= 0)
            i++;

        k = i + j + k;
        cout << k;
    }

    cout << "11 - Se debe generar de manera manual el mapa para un mod de Minecraft a partir de un tablero de 50x50" << endl;
    {
        // Le va a solicitar al jugador que ingrese por consola el nombre de la unidad que debe guardarse en cada celda los siguientes elementos que representados por un caracter;
        // ●Casillero vacío, carácter : “ - ”
        // ● Bloque de tierra, carácter : “B”
        // ● Zombie, carácter : “Z”
        // ● Creeper, carácter : “C”
        // Una vez completada la carga mostrar todos los valores almacenados por pantalla
        // Extra: en caso de que el usuario introduzca un valor que no sea valido debera estar contemplado por el programa y tomar una decision en base a eso.

    }

}

const int MENU_WIDTH = 80;

void drawBreakLine() {
    cout.width(MENU_WIDTH);
    cout.fill('*');
    cout << '*' << endl;
    cout.fill(' ');
}

// I create a string intentionally 
void drawMenuLine(const string text) {
    cout.width(MENU_WIDTH);
    cout << std::left << "| " + text << '|' << endl;
}

void displayMenu() {
    
    drawBreakLine();
    drawMenuLine("Ingrese una opcion");
    drawBreakLine();
    drawMenuLine("* Tema uno (1)");
    drawMenuLine("* Tema dos (2)");
    drawMenuLine("* Tema tres (3)");
    drawBreakLine();
}

int main()
{
    displayMenu();
    int option = -1;
    cout << "Ingrese opcion: ";
    cin >> option;
    switch (option) {
    case 1:
        tema1();
        break;
    case 2:
        tema2();
        break;
    case 3:
        tema3();
        break;
    default:
        break;
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
