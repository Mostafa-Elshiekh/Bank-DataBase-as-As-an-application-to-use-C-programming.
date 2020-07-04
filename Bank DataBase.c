#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct customer  //A Struct Which Includes The Data Of Customer
{
    char name[40];
    int id;
    int cash;
    char visa[20];
}one[3];

void Create (void) //  This Function To Creat New Customer
{
    static int i = 1;
    for (i; i < 4; i++) {
        printf("enter the name of customer: %d \n", i);
        scanf("%s", &one[i].name);
        printf("enter the id of customer : %d \n", i);
        scanf("%d", &one[i].id);
        printf("enter the cash of customer :%d \n", i);
        scanf("%d", &one[i].cash);
        printf("enter the type <credit or debit> of card customer : %d \n ", i);
        scanf("%s",&one[i].visa);
        i++;
        break;
    }
    if(i>=4)
    {
        printf("/n Not Valid The Array Is Full \n");
    }
}
void Edit(void) //  This Function To Edit  The Data Of Customer
{
    int d;
    printf("enter the id to edit: \n ");
    scanf("%d",&d);
    for(int i=0;i<2;i++)
    {
        if(one[i].id==d)
        {
            printf("enter the name of customer : \n");
            scanf("%s",&one[i].name);
            printf("enter the id of customer : \n");
            scanf("%d",&one[i].id);
            printf("enter the cash of customer : \n");
            scanf("%d",&one[i].cash);
            printf("enter the type visa of customer: \n ");
            scanf("%s",&one[i].visa);
        }
    }
}
void Delete(void) //  This Function To Delete The Customer
{
    int D;
    int k;
    printf("enter the id to edit: \n ");
    scanf("%d",&D);
    for(int i=0;i<3;i++)
    {      if (one[i].id == D)
        {
            for(int k=i;k<3;k++) {
                one[k] = one[k+1];
            }
            printf("\n The customer Is Deleted \n");

        }
    }

}

void Transfer(void) //This Function To Transfer From One Account To Another
{
    int source;
    scanf("%d", &source);
    int destination;
    scanf("%d", &destination);
    int trnas;
    scanf("%d", &trnas);
    for (int i = 0; i < 3; i++)
    {
        if(one[i].id==source)
        {
            one[i].cash=one[i].cash-trnas;
        }

        if(one[i].id==destination)
        {
            one[i].cash=one[i].cash+trnas;
        }
    }
}
void Print(void) //This Function To Print The Data Of Customer
{   int d;
    printf("enter the id of customer : \n");
    scanf("%d",&d);
    for(int i=0;i<3;i++) {
        if(one[i].id==d) {
            printf("\nThe name of the customer is : %s \n", one[i].name);
            printf("\nThe id of the customer is : %d \n", one[i].id);
            printf("\nThe chsh of the customer is : %d \n", one[i].cash);
            printf("\nThe type visa of the customer is : %s \n", one[i].visa);
            return;
        }
    }
    printf("not found");

}

int main()
{
    int START=0;
    while (START!=6) {
        printf(" \n1- Creat a New Customer <Press 1 To Select This option> \n");
        printf(" \n2- Edit The Data Customer <Press 2 To Select This option> \n");
        printf(" \n3- Delete The Data Customer <Press 3 To Select This option> \n");
        printf(" \n4- Transfer  <Press 4 To Select This option> \n");
        printf(" \n5- Print the data of Customer <Press 5 To Select This option> \n");
        printf(" \n6- to end the program <Press 6 To Select This option> \n");
        scanf("%d", &START);

        if (START == 1) {
            Create();
        } else if (START == 2) {
            Edit();
        } else if (START == 3) {
            Delete();
        } else if (START == 4) {
            Transfer();
        } else if (START == 5) {
            Print();
        } else if (START == 6) {
            printf("\nThe Program Is Finish \n");
            break;
        }
    }
    return 0;
}
