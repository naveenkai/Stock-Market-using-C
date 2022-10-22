#include<stdio.h>
int pcount=0;
int scount=0;
int total_amt;
struct node1{

char name[20];
int wallet;



};
struct node {

    int acct_number;
    struct node1 *link;
    struct node *next;

};

struct node *head=NULL;
struct node *tail=NULL;

struct node *head1=NULL;
struct node *tail1=NULL;

void addnode1()
{
   //struct node1 *deal;
//pcount++;
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
     struct node1 *newNode1=(struct node1*)malloc(sizeof(struct node1));
    newNode->link=newNode1;
    printf("ENTER YOUR NAME:");
    scanf("%s",newNode->link->name);
    printf("UNIQUE BUSINESS ID:");
    scanf("%d",&newNode->acct_number);
    newNode->link->wallet=10000;
   // newNode->acct_number=data;
     if(head1==NULL)
    {
        head1=newNode;
        tail1=newNode;
    }
    else
    {
        tail1->next=newNode;
        tail1=newNode;


    }

}
void addnode()
{
   //struct node1 *deal;
//scount++;
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
     struct node1 *newNode1=(struct node1*)malloc(sizeof(struct node1));
    newNode->link=newNode1;
    printf("ENTER YOUR NAME :");
    scanf("%s",newNode->link->name);
    printf("UNIQUE BUSINESS ID:");
    scanf("%d",&newNode->acct_number);
    newNode->link->wallet=5000;
   // newNode->acct_number=data;
     if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail=newNode;


    }

}




 display()
{
struct node *current=head;
int count=1;

if(head==NULL)
{
printf(" NO INVESTMENT YET\n");
return 0;
}

while(current!=NULL)
{
//printf("current value %d\n",current->acct_number);

printf("INVESTOR NUMBER %d:\n",count);
printf("NAME:%s\n",(current->link->name));
printf("UNIQUE BUSINESS ID: %d\n",(current->acct_number));
printf("WALLET VALUE: %d\n\n\n",(current->link->wallet));

current = current->next;
count++;
}



}
int display1()
{

struct node *current1=head1;
int count=1;

if(head1==NULL)
{
printf("NO INVESTMENT YET\n");
return 0;
}

while(current1!=NULL)
{
//printf("current value %d\n",current->acct_number);

printf("INVESTOR NUMBER %d\n",count);
printf("NAME:%s\n",(current1->link->name));
printf("UNIQUE BUSINESS ID: %d\n",(current1->acct_number));
printf("WALLET VALUE: %d\n\n\n",(current1->link->wallet));
current1 = current1->next;
count++;

}
//tail=head1;
total_amt=(pcount*10000)+(scount*5000);
//lineprint();
printf("----------------------------------\n");
    printf("TODAY'S TOTAL INVESTMENT: %d\n",total_amt);
//lineprint();
printf("----------------------------------\n\n\n");

}
void lineprint()
{
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

}

void market_value()
{
int t_market_cap=4500000;
float weight;
int t_shares;
float point;
weight=(float)total_amt/(float)t_market_cap;
point=weight*1000;
t_shares=pcount+scount;
printf("TODAYS STATISTICS OF INVEST HERE\n");
lineprint();
//printf("no.of shares\ market capital \tpoints\n");
printf("no.of shares-----%d\nmarket capital-----%d\npoints------%f",t_shares,total_amt,point);

}


int profit()
{
int prof;
float pr;
float new_wallet=0;
//current1->tail1=current->head;
struct node *current2=head;
//struct node *current3;

tail->next=head1;

int count=1;
printf("\n\n\nHYPOTHETICAL PROFIT\n\n:");

scanf("%d",&prof);
printf("TODAYS PROFITS EARNED BY CUSTOMERS \n");
if(head==NULL)
{
printf(" NO INVESTMENT YET\n");
return 0;
}

while(current2!=NULL)
{
//printf("current value %d\n",current->acct_number);

printf("INVESTOR NUMBER %d:\n",count);
printf("NAME:%s\n",(current2->link->name));
if(count<=3)
{
new_wallet=0;
pr=prof*0.1;
new_wallet=((current2->link->wallet)+(pr));
printf("WALLET: %d\n",(current2->link->wallet) );
printf("PROFIT:%f\n",pr);
//printf("wallet:%d + profit:%f\n",(current2->link->wallet),pr);
printf("CURRENT WALLET VALUE:%f\n\n\n",new_wallet);


}
if(count>3&&count<=6)
{
new_wallet=0;
pr=prof*0.01;
new_wallet=((current2->link->wallet)+(pr));
printf("WALLET: %d\n",(current2->link->wallet) );
printf("PROFIT:%f\n",pr);
printf("CURRENT WALLET VALUE:%f\n\n\n",new_wallet);


}
if(count>6&&count<=10)
{
new_wallet=0;
pr=prof*0.001;
new_wallet=((current2->link->wallet)+(pr));
printf("WALLET: %d\n",(current2->link->wallet) );
printf("PROFIT:%f\n",pr);
printf("CURRENT WALLET VALUE :%0.2f\n\n\n",new_wallet);


}


current2 = current2->next;
count++;
}

}




int main()
{
    //printf("Hello world!");
    int choice, pack;
    
    printf("-\n");
    scanf("%d",&choice);
    while(1){
    if(choice==2002){
    printf("WELCOME TO INVEST HERE\n");
    lineprint();
    printf("THE MORNING TRADING SESSION STARTS NOW ");
    lineprint();
    printf("ENTER\n 1 for PREMIUM PACK\n 2 for STANDARD PACK\n");
    scanf("%d",&pack);
    switch(pack)
    {
    case 1:
    pcount++;
    printf("YOU HAVE CHOSEN PREMIUM ACCOUNT \n");
    addnode();
    printf("YOUR AMOUNT IS INVESTED!!!!\n");
    printf("THANK YOU!!!!\n\n\n\n");
    
    break;
    
    case 2:
    scount++;
    printf("YOU HAVE CHIOSEN STANDARD ACCOUNT \n");
    addnode1();
    printf("YOUR AMOUNT IS INVESTED!!!!!\n");
    printf("THANK YOU!!!!\n\n\n\n");
    
    break;
    
    case 11:
    printf("------------------------\n");
    printf("\n\nTODAYS SESSION DETAILS \n");
    printf("------------------------\n");
    printf("PREMIUM INVESTMENTS\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
    display();
    printf("STANDARD INVESTMENTS\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
    display1();
  // tail=head1;
     market_value();
    profit();
    
    exit(1);
    
    //goto label ;
    break;
    }
    
    }
    
    }
    //label:
   // printf("hiiii");
    return 0;
}