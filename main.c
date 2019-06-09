#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#define MAX_TITLE_LENGTH 256
#define MAX_DESCRIPTION_LENGTH 256

typedef enum { TODO, BLOCKED, COMPLETED} status_type;

typedef struct Tasks {
    char title[MAX_TITLE_LENGTH];
    char description[MAX_DESCRIPTION_LENGTH];
    status_type status;
} Task;


int setTaskTitle(Task* t, char* title)
{
    strcpy(t->title, title);
    return 0;
}

const char* getTaskTitle(Task* t)
{
    printf("Title = %s\n", t->title);
    return t->title;
}

int setTaskDescription(Task* t, char* description)
{
    strcpy(t->title, description);
    return 0;
}

const char* getTaskDescription(Task* t)
{
    printf("description = %s\n", t->description);
    return t->title;
}

Task* createTask(char* title, char* description)
{
    Task* t = malloc(sizeof(Task));
    strcpy(t->title, title);
    strcpy(t->description, description);
    t->status = TODO;
    return t;
}

void destroyTask(Task* t)
{
    free(t);
}

void listTasks()
{
    printf("not implimented");
}


int main()
{
    char title[256];
    char description[256];
    printf("Please enter a title:\n > ");
    fgets(title, MAX_TITLE_LENGTH, stdin);
    printf("Please enter a description:\n > ");
    fgets(description, MAX_DESCRIPTION_LENGTH, stdin);
    Task* t1 = createTask(title, description);
    getTaskTitle(t1);
    getTaskDescription(t1);
    destroyTask(t1);
    return 0;
}


