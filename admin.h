#include <stdio.h>
#define X 100
int numeros[X]; //Vector numerico declarado como Vector Global
#include "salida.h"
#include "operaciones.h"
#include "control.h"
#include "menu.h"
#include "captura.h"
#include "entrada.h"
int admin(){
    int tam=0;
    int opc=0;
    tam=leer_entrada();
     //numero[tam]=numeros[tam];
    capturar_num(tam);
    opc=menu();
    control(opc,tam);
    return 0;
}
