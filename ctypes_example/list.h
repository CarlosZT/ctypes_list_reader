#include <stdio.h>
#include <stdlib.h>

//Estructura para miembros de la lista
typedef struct Node
{
    int value;
    struct Node* next;
}Node;

//Estructura de la lista
typedef struct List
{
    Node* head;
}List;



