#include "push_swap.h"

void enqueue(t_list** queue, int num)
{
    t_list* newNode = (t_list*)malloc(sizeof(t_list));
    newNode->num = num;
    newNode->next = NULL;

    if (*queue == NULL) {
        *queue = newNode;
    } else {
        t_list* current = *queue;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Función para desencolar un elemento de la lista
int dequeue(t_list** queue)
{
    if (*queue == NULL) {
        fprintf(stderr, "Error: Cola vacía\n");
        exit(EXIT_FAILURE);
    }
    t_list* temp = *queue;
    int num = temp->num;
    *queue = temp->next;
    free(temp);
    return num;
} 

int	maxNum(t_list *lst)
{
	int	i;
    int max = lst->num;
	i = 0;
	while (lst)
	{
        if (lst->num > max)
            max = lst->num;
    	i++;
		lst = lst->next;
	}
	return (max);
}

t_list* radixSort(t_list *a, int n)
{
    int exp = 1;
    int base = 16;

    // Guarda el puntero al inicio de la lista
    t_list* original = a;

    while (maxNum(original) / exp > 0)
    {
        t_list** queues = (t_list**)malloc(sizeof(t_list*) * base);

        for (int i = 0; i < base; i++)
        {
            queues[i] = NULL;
        }

        // Utiliza una nueva lista para almacenar los elementos ordenados
        t_list* sortedList = NULL;

        // Recorre la lista original y encola los elementos en las colas
        while (original != NULL)
        {
            int index = (original->num / exp) % base;
            enqueue(&queues[index], original->num);
            original = original->next;
        }

        // Recoger los elementos de las colas y encolarlos en la nueva lista
        for (int i = 0; i < base; i++)
        {
            while (queues[i] != NULL)
            {
                enqueue(&sortedList, dequeue(&queues[i]));
            }
        }

        // Restablecer el puntero al inicio de la lista original
        original = sortedList;
        
        // Restablecer el puntero al inicio de la lista después de cada iteración
        sortedList = NULL;

        // Liberar la memoria de las colas
        free(queues);

        exp *= base;
    }

    return original; // Devuelve la lista ordenada
}
