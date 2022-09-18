#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//Se crean los nodos de la lista enlazada
Node* create(int val){
    Node* node=(Node*)malloc(sizeof(Node));
    node->value=val;
    node->next=NULL;
    return node;
}

//Metodo para insertar valores al final de la lista
void insert(List* list, int val){
	if(list->head==NULL){
		list->head=create(val);
		return;
	}
	Node* aux = list->head;
	while(aux->next){
		aux = aux->next;
	}
	aux->next=create(val);
}

//Se crea la lista con la cantidad de elementos especificados y se lee
void read_list(int n){
    List list;
    list.head=NULL;
   	int i;
	for(i=1;i<=n;i++){
   		insert(&list, i);
	}
   	
    printf("Elements created\n");
    Node* node = list.head;
    while(node->next){
    	printf("%d\n", node->value);
    	node = node->next;    	
	}
	printf("%d\n", node->value);
}
