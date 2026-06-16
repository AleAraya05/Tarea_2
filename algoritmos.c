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
    /* TODO: implementar */
    (void)arr;
    (void)n;
}

void selection_sort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;

            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

    }
}

void insertion_sort(int *arr, int n) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
}

/* ── Búsqueda ─────────────────────────────────────────── */

int busqueda_lineal(int *arr, int n, int valor) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
    (void)valor;
    return -1;
}

int busqueda_binaria(int *arr, int n, int valor) {
    int izquierda = 0;
    int derecha = n - 1;

    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;
        if (arr[medio] == valor) {
            return medio;

        }

        if (arr[medio] <  valor) {

            izquierda = medio + 1;
        } else {
            derecha = medio - 1;

        }

    }
    return -1;
}

int buscar_ocurrencias(int *arr, int n, int valor, int *posiciones) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
    (void)valor;
    (void)posiciones;
    return 0;
}
