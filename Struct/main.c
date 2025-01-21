#include <stdio.h>

// Creamos la struct

struct producto {

    char codigo;    // codigo del producto (un solo caracter)
    int cantidad;   // cantidad disponible
    float precio;   // precio del producto
};

int main() {
    // declaracion de una variable de tipo Producto
    struct producto producto1;

    // asignacion de valores
    producto1.codigo = 'A';      // codigo del producto
    producto1.cantidad = 10;     // cantidad disponible
    producto1.precio = 25.50;    // precio del producto

    // Mostrar los valores
    printf("Codigo:%c\n", producto1.codigo);
    printf("Cantidad:%d\n", producto1.cantidad);
    printf("Precio:%.2f\n", producto1.precio);

    return 0;
}
