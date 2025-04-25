void cargarProductos(){
    for (int i=0; i<NUM_PRODUCT; i++){

        (Flores+i)->id = i+1;
        (Flores+i)->nombre = *(nombres+i);
        (Flores+i)->precio = *(precio+i);
        (Flores+i)->cant = *(cant+i);  
        }

    arrayCarro = (Carrito *) calloc (10, sizeof(Carrito)); //memoria dinamica

    for (int i = 0; i < NUM_PRODUCT; i++){
        (arrayCarro+i)->comprado = 0;
        (arrayCarro+i)->precio = 0;
    }  
}