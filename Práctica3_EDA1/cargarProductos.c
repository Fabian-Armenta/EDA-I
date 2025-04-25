void cargarProductos(){
    for (int i=0; i<5; i++){

        Flores[i].id = i+1;
        Flores[i].nombre = *(nombres+i);
        Flores[i].precio = *(precio+i);
        Flores[i].cant = *(cant+i);
        Flores[i].carrito = *(carrito+i);    
        }
}