#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef enum { TODO, BLOCKED, COMPLETED} status_type;

typedef struct Tasks {
  char title[256];
  char description[256];
  status_type status;
} Task;

Task* createTask()
{
  Task* t = malloc(sizeof(Task));
  strcpy(t->title, "Example Title");
  strcpy(t->description, "Example description");
  t->status = TODO;
  return t;

}

void destroyTask(Task* t)
{
  free(t);
}

int main()
{
  Task* t1 = createTask();
  printf("Title = %s\n", t1->title);
  destroyTask(t1);
  return 0;
}
