#include <stdio.h>
#include <stdlib.h>


typedef struct table {
    int id;
    struct table* next;
    struct table* nexttable;
} table;


typedef struct man {
    int id;
    struct man* next;

} man;


typedef struct tail {
    int max, count;
    struct tail* point;
    struct tail* nexttail;

} tail;


int main(void)
{

    int n, m, i, j;
    table *head, *curr2, *tmp2;
    tail *bottom, *curr3, *tmp3;
    man *curr, *tmp;

    scanf("%d",&n);
    head = (table*)malloc(sizeof(table));
    curr2=head;
    bottom = (tail*)malloc(sizeof(tail));
    curr3=bottom;
  //  curr = (man*)malloc(sizeof(man));
    head->id=1;
    head->next=curr;
  //  curr->id=n;
    bottom->max=n;
    bottom->count=1;
    bottom->point=curr;
    bottom->nexttail=NULL;


    scanf("%d",&n);

    while(n!=-1)
    {
        if(n>curr3->max&&curr3->count<5)
        {
           // tmp=curr;
           // curr = (man*)malloc(sizeof(man));
           // curr->id=n;
          //  tmp->next=curr;
            curr3->max=n;
            curr3->count++;
          //  bottom->point=curr;
            curr3=bottom;

        }



        else
            if(curr3->nexttail==NULL)
            {
                tmp2=curr2;
                curr2 = (table*)malloc(sizeof(table));
                tmp2->nexttable=curr2;
               // curr->id=2;
    tmp3=curr3;
    curr3 = (tail*)malloc(sizeof(tail));
   // curr = (man*)malloc(sizeof(man));
    curr2->id=1;

   // curr->id=n;
    curr3->max=n;
    curr3->count=1;
   // curr3->point=curr;
    tmp3->nexttail=curr3;
    curr3->nexttail=NULL;
    curr3=bottom;
            }

            else{
               curr3=curr3->nexttail;

continue;
            }



        scanf("%d",&n);
        curr3=bottom;

    }
    curr3=bottom;
    while(curr3!=NULL)
    {
        printf("%d\n",curr3->max);
        curr3=curr3->nexttail;
    }

return 0;
}

/*192.168.136.1*//*CSY103062316*/
