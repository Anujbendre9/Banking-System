//================================Banking System=======================================//
#include<stdio.h>
#include<stdlib.h>
int list();
void diposite();
void transfer();
void withdraw();
void checkDetail();
int TotalAmount=1000,Amount,Amo,Tr,TotalDiposite=0,Totalwith=0;
int TotalTr=0;
int main()
{
    while(1)
    {
        exit(0);
        switch(list())
        {
            case 1:
                diposite(); 
                TotalDiposite+=Amount;
                break;
            case 2:
                withdraw();
                if(Amo<=TotalAmount) 
                Totalwith+=Amo;
                break;
            case 3: 
                transfer();
                if(Tr<=TotalAmount)
                TotalTr+=Tr;
                break;
            case 4:
                checkDetail();
                break;
            case 5:
                exit(0);
            default:
            {
                printf("\n Invalid choise.");
            }
        }
    }
}
int list()
{
    int ch;
    printf("\n1. Diposite Amount: ");
    printf("\n2. Withdraw Amount: ");
    printf("\n3. Transfer Amount: ");
    printf("\n4. Check detail: ");
    printf("\n5. Exit:");

    printf("\n Enter your choise:");
    scanf("%d",&ch);
    return(ch);
}

void diposite()
{
    printf("\nEnter the amount you wnat to diposite:");
    scanf("%d",&Amount);
    TotalAmount+=Amount;
}

void withdraw()
{
    printf("\n Enter the amount you wish to withdraw:");
    scanf("%d",&Amo);
    if(Amo<=TotalAmount)
    TotalAmount-=Amo;
    else
    {
        printf("\n Less amount withdraw is not possible.");
    }
}

void transfer()
{
    printf("\n Enterb a amount you want to transfer:");
    scanf("%d",&Tr);
    if(Tr<=TotalAmount)
    TotalAmount-=Tr;
    else
    {
        printf("\n Less amount transfer is not possible.");
    }
}

void checkDetail()
{
    printf("\n Total amount=%d",TotalAmount);
    printf("\n Total diposied amount =%d",TotalDiposite);
    printf("\n Total withdraaw amoount=%d",Totalwith);
    printf("\n Total transfer amount=%d",TotalTr);
}