int menu(){
    int op=0;
    printf("****Menu del programa****\n");
    printf("1.-Sumar\n");
    printf("2.-Restar\n");
    printf("3.-Multiplicar\n");
    printf("4.-Dividir\n");
    printf("5.-Salir\n");
    scanf("%d",&op);
    printf("Ingrese la opción:%d\n",op);
    return op;
}
