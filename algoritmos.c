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

    for (int i = 0; i < n; i++) {

        int key = arr[i];
        int j = i -1;

        if (j >= 0 && arr[j] > key ) {

            arr[j + 1] = arr[j];
            j = j - 1;
            arr[j + 1] = key;
        }

    }

}

/* ── Búsqueda ─────────────────────────────────────────── */

int busqueda_lineal(int *arr, int n, int valor) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
    (void)valor;

    for (int i = 0; i < n; i++) {

        if (arr[i] == valor) {
            return i;
        }
    }

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
