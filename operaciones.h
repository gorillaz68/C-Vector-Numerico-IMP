int suma(int x){
    int i;
    int acum=0;
    for(i=0;i<x;i++){
        acum=acum+numeros[i];
    }
    return acum;
}
int restar(int x){
    int i;
    int acum=numeros[0];
    for(i=1;i<x;i++){
        acum=acum-numeros[i];
    }
    return acum;
}
int multiplicar(int x){
    int i;
    int acum=numeros[0];
    for(i=1;i<x;i++){
        acum=acum*numeros[i];
    }
    return acum;
}
int dividir(int x){
    int i;
    int acum=numeros[0];
    for(i=1;i<x;i++){
        if(numeros[i]!=0){
            acum=acum/numeros[i];
        }else{
            printf("divizion por zero\n");
            exit(0);
        }
    }
    return acum;
}
