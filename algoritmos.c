/*
 * algoritmos.c
 * IE-0117 - Tarea en clase: Ordenamiento y Búsqueda
 *
 * Implementar las funciones asignadas en este archivo.
 * No modificar algoritmos.h ni main.c.
 */

#include "algoritmos.h"

/* ── Ordenamiento ─────────────────────────────────────── */

void bubble_sort(int *arr, int n) {
    int i, j;
    int tmp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {

            //Si el elemento actual es mayor que el siguiente, se intercambian
            if (*(arr + j) > *(arr + j + 1)) {
                tmp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = tmp;
            }
        }
    }
}

/* ── Búsqueda ─────────────────────────────────────────── */

int buscar_ocurrencias(int *arr, int n, int valor, int *posiciones) {
    int i;
    int cantidad = 0;

    for (i = 0; i < n; i++) {
        if (*(arr + i) == valor) {
            *(posiciones + cantidad) = i;
            cantidad++;
        }
    }
    return cantidad;
}
