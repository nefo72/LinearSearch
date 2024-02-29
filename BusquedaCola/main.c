#include <stdio.h>
#include "queue.h"


int main(void) {
    Queue qu;
    createQueue(&qu);
    puts("\nEnque\n");
    enqueue(&qu, 10);
    enqueue(&qu, 20);
    enqueue(&qu, 30);
    enqueue(&qu, 40);
    enqueue(&qu, 16510);
    enqueue(&qu, 1651);
    enqueue(&qu, 5);
    enqueue(&qu, 40000);
    show(&qu);
    puts("\n---------\n");

    Node* aux = qu.head;
    int buscado;
    printf("Ingresa el número a buscar: ");
    scanf("%d", &buscado);
    printf("Ingresaste: %d\n", buscado);
    int counter = 0;
    int encontrado = 0;

    while (aux != NULL) {
        if (aux->e == buscado) {
            printf("Se encontró en %d\n", counter);
            encontrado = 1;
            break;
        }
        aux = aux->next;
        counter++;
    }

    if (!encontrado) {
        printf("No se encontró el número %d\n", buscado);
    }

    return 0;
}




/*int searchInQueue(Queue* qu, int target) {
    Queue tempQueue;
    createQueue(&tempQueue);

    int found = 0;

    while (qu->head != NULL) {
        int element = dequeue(qu);
        enqueue(&tempQueue, element);

        if (element == target) {
            found = 1;
            break;
        }
    }

    while (tempQueue.head != NULL) {
        int element = dequeue(&tempQueue);
        enqueue(qu, element);
    }

    return found;
}
*/