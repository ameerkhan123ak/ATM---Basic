#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pass,pss,amt,con,choice,amount,ext;
    int cont;
    int balance=10000;
      printf("\n----------Welcome to karur vysaya atm---------");
    printf("\nplease insert your card ");
    pss:
    printf("\nEnter your password:");
    scanf("%d",&pass);
    if(pass==1234)
    {
        con:
        printf("\nplease proceed");
        printf("\n1.Check balance");
        printf("\n2.Cash withdraw");
        printf("\n3.exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        while(choice!=3)
        {

        switch(choice)
        {

            case 1:
            printf("\nyour balance is %d\n\n",balance);
            printf("\nDo you want to continue:");
            printf("\npress 1 to continue");
            printf("\npress 2 to exit");
            printf("\nplease enter:");
            scanf("%d",&cont);
                switch(cont)
                {
                    case 1:
                    goto con;

                    case 2:
                    goto ext;
                }
            break;

            case 2:
            amt:
            printf("\nEnter your amount:");
            scanf("%d",&amount);
            if(amount>balance)
            {
                printf("\n\nInsufficient balance !\n\n");
                goto amt;
            }
            else
            {
                balance=balance-amount;
                printf("\nyour balance is %d\n\n",balance);
                printf("\nDo you want to continue:");
                printf("\npress 1 to continue");
                printf("\npress 2 to exit");
                printf("\nplease enter:");
                scanf("%d",&cont);
                switch(cont)
                {
                    case 1:
                    goto con;

                    case 2:
                    goto ext;
                }
            }
            break;

        }
       }
    }
    else
    {
        printf("Your password is incorrect !");
        goto pss;
    }
    ext:
    printf("\nThanks for making payment ! ");
    printf("\nplease collect receipt ");
    return 0;
}