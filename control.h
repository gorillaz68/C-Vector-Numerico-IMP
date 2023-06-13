void control(int opt,int tam){
    
    int acum=0;
    switch(opt){
        case 1:
            //printf("estoy en suma\n");
            acum=suma(tam);
            escribir(acum);
            break;
        case 2:
            acum=restar(tam);
            escribir(acum);
            break;
        case 3:
            acum=multiplicar(tam);
            escribir(acum);
            break;
        case 4:
            acum=dividir(tam);
            escribir(acum);
            break;
        case 5:
            escribir_Exit();
            exit(0);
        default:
            escribir_exc();
            break;
    }
}
