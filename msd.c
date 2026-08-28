#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main()
{
  struct Node *x, *y, *z, *temp;

  x = (struct Node *)malloc(sizeof(struct Node));
  y = (struct Node *)malloc(sizeof(struct Node));
  z = (struct Node *)malloc(sizeof(struct Node));

    x>data = 10;
    x>next = y;

    y>data = 20;
    y>next = z;

    z>data = 30;
    z>next = null;

    temp = x;

    while (temp != null) {
        printf("%d ", temp->data);
        temp = temp->next;
   }
   printf("null");
   return 0;
}
