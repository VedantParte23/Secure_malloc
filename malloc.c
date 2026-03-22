#include<stdio.h>
#include<stdlib.h>
#undef malloc
#undef free


void *secure_malloc(size_t size, char* file, int line);
void secure_free(void* pointer);
void print_report(void);



typedef struct Node{
    void*address;   
    size_t size;
    char*file;
    int line;
    struct Node* next;
} Node;


Node * head = NULL;

void *secure_malloc(size_t size, char* file, int line){
    void* ptr = malloc(size);
    if (ptr == NULL){
        printf("Some erorr occoured during memory allocation\n\n");
        return NULL;
    }
    
        Node* node = (Node*)malloc(sizeof(Node));
        node->size = size;
        node->address = ptr;
        node->file = file;
        node->line = line;
        node->next = head;
        head = node;

        printf("Memory Aloocation: %zu bytes at %p, on line %d from file: %s\n",size, ptr,line,file);
        return ptr;
    
}

void secure_free(void* pointer){
    if (pointer ==NULL) return;
    
    //college linked list refernce
    Node **temp_head = &head;

    while (*temp_head)
    {
        if((*temp_head)->address == pointer){

            Node* temp = *temp_head;

            *temp_head = temp->next;

            free(temp->address);
            free(temp);

            return;
        }
        temp_head = &((*temp_head)->next);
    }
    printf("Some error occoured\n");
    
}


void print_report(){
    printf("|==== Secure Malloc Repost ===|\n\n");

    if (!head){
        printf("No leanks! All good lad\n");
    }
    else{
        Node * temp = head;
        while (temp)
        {
            printf("Leaks: %zu bytes at %p on line %d form file %s\n",temp->size, temp ->address, temp->line, temp->file);
            temp = temp->next;
        }
        
    }
    

}

