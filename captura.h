void capturar_num(int tam){
    int i;
    for(i=0;i<tam;i++){
        scanf("%d",&numeros[i]);
        //printf("el numero %d es:%d\n",i+1,numeros[i]);
        escribir_num(i);
        //printf("tamaño:%d\n",tam);
    }
}
