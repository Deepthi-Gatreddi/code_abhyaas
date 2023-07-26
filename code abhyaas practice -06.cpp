//code abhyaas basics -- 06

//creating a singly linked list.

//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//
//struct node
//{
//    int data;
//    struct node *next;
//};
//void printList(struct node* node) {
//  while (node != NULL) {
//    printf(" %d ", node->data);
//    printf(" ->%d| ", node->next);
//    node = node->next;
//  }
//}
//int main()
//{
//    struct node *prev,*head,*newnode;
//    int len,i;
//    printf ("Length of the List:");
//    scanf("%d",&len);
//    head=NULL;
//    for(i=0;i<len;i++)
//    {
//        newnode=(struct node*)malloc(sizeof(struct node));
//        printf("Enter the %d Node Data\n",i+1);
//		scanf("%d",&newnode->data);
//        newnode->next=NULL;
//        if(head==NULL)
//            head=newnode;
//        else
//            prev->next=newnode;
//        prev=newnode;
//    }
//    printList(head);
//    return 0;
//}









//insertion at starting.

//#include<stdio.h>
//#include<stdlib.h>
//
//struct node {
//    int data;
//    struct node *next;
//}*firstnode;
//
//void PrintList(struct node* node);
//void Creation(int Length);
//void InsertatBegin(int newData);
//
//int main()
//{
//    int Length,i,newData;
//    printf("\n\n Linked List : Insert a new node at the beginning of a Linked List :\n");
//	printf("-------------------------------------------------------------\n");
//    printf(" Input the Length of nodes : ");
//    scanf("%d", &Length);
//    Creation(Length);
//    printf("\n Data entered in the list : \n");
//    PrintList(firstnode);
//    printf ("\n Enter  the New Data : ");
//    scanf("%d",&newData);
//    InsertatBegin(newData);
//    printf("\n The New List are : \n");
//    PrintList(firstnode);
//    return 0;
//}
//void Creation(int Length)
//{
//    struct node *temp,*newnode;
//	int data,i;
//	firstnode = (struct node *)malloc(sizeof(struct node));
//	printf(" Input data for node 1 : ");
//    scanf("%d", &data);
//    firstnode->data= data;
//    firstnode->next = NULL; // links the address field to NULL
//    temp=firstnode;
//    for (i=2;i<=Length;i++)
//    {
//    	newnode=(struct node *)malloc(sizeof(struct node));
//    	printf(" Input data for node %d : ",i);
//    	scanf("%d",&data);
//    	newnode->data=data;
//    	newnode->next=NULL;
//    	temp->next=newnode;
//    	temp=temp->next;
//    }
//
//}
//
//void PrintList(struct node* node) 
//{
//    int j;
//    j=1;
//    while (node != NULL) 
//    {
//        printf(" Data of %d Node = %d\n",j++, node->data);
//        node = node->next;
//    }
//}
//void InsertatBegin(int newData)
//{
//    struct node *newnode;
//    newnode = (struct node*)malloc(sizeof(struct node));
//    newnode->data = newData; //Links the data part
//    newnode->next = firstnode; //Links the address part
//    firstnode = newnode; //Makes firstnode as first node
//    
//}










//insertion at end

//#include<stdio.h>
//#include<stdlib.h>
//
//struct node {
//    int data;
//    struct node *next;
//}*firstnode;
//
//void PrintList(struct node* node);
//void Creation(int Length);
//void InsertatEnd(int newData);
//
//int main()
//{
//    int Length,i,newData;
//    printf("\n\n Linked List : Insert a new node at the End of a Linked List:\n");
//	printf("-------------------------------------------------------------\n");
//    printf(" Input the Length of nodes : ");
//    scanf("%d", &Length);
//    Creation(Length);
//    printf("\n Data entered in the list : \n");
//    PrintList(firstnode);
//    printf ("\n Enter  the New Data : ");
//    scanf("%d",&newData);
//    InsertatEnd(newData);
//    printf("\n The New List are : \n");
//    PrintList(firstnode);
//    return 0;
//}
//void Creation(int Length)
//{
//    struct node *temp,*newnode;
//	int data,i;
//	firstnode = (struct node *)malloc(sizeof(struct node));
//	printf(" Input data for node 1 : ");
//    scanf("%d", &data);
//    firstnode->data= data;
//    firstnode->next = NULL; // links the address field to NULL
//    temp=firstnode;
//    for (i=2;i<=Length;i++)
//    {
//    	newnode=(struct node *)malloc(sizeof(struct node));
//    	printf(" Input data for node %d : ",i);
//    	scanf("%d",&data);
//    	newnode->data=data;
//    	newnode->next=NULL;
//    	temp->next=newnode;
//    	temp=temp->next;
//    }
//
//}
//void PrintList(struct node* node) 
//{
//    int j;
//    j=1;
//    while (node != NULL) 
//    {
//        printf(" Data of %d Node = %d\n",j++, node->data);
//        node = node->next;
//    }
//}
//void InsertatEnd(int newData)
//{
//    struct node *newnode,*temp;
//    newnode=(struct node*)malloc(sizeof(struct node));
//    newnode->data=newData;
//    newnode->next=NULL;
//    temp=firstnode;
//    while(temp->next!=NULL)
//    {
//        temp = temp->next;
//    }
//    temp->next = newnode;
//}








//insertion at middle

//#include<stdio.h>
//#include<stdlib.h>
//
//struct node {
//    int data;
//    struct node *next;
//}*firstnode;
//
//void PrintList(struct node* node);
//void Creation(int Length);
//void InsertatMiddle(int newData,int Position);
//
//int main()
//{
//    int Length,i,newData,Position;
//    printf("\n\n Linked List : Insert a new node at the Middle of a Linked List:\n");
//	printf("-------------------------------------------------------------\n");
//    printf(" Input the Length of nodes : ");
//    scanf("%d", &Length);
//    Creation(Length);
//    printf("\n Data entered in the list : \n");
//    PrintList(firstnode);
//    printf ("\n Enter  the New Data : ");
//    scanf("%d",&newData);
//    printf(" Input the position to insert new node : " );
//    scanf("%d", &Position);
//        if(Position<=1 || Position>=Length)
//    {
//     printf("\n Insertion can not be possible in that position.\n ");
//    }
//        if(Position>1 && Position<Length)      
//      {
//          InsertatMiddle(newData,Position);
//       printf("\n Insertion completed successfully.\n ");
//      }
//    printf("\n The new list are : \n");
//    PrintList(firstnode);
//    return 0;
//}
//void Creation(int Length)
//{
//    struct node *temp,*newnode;
//	int data,i;
//	firstnode = (struct node *)malloc(sizeof(struct node));
//	printf(" Input data for node 1 : ");
//    scanf("%d", &data);
//    firstnode->data= data;
//    firstnode->next = NULL; // links the address field to NULL
//    temp=firstnode;
//    for (i=2;i<=Length;i++)
//    {
//    	newnode=(struct node *)malloc(sizeof(struct node));
//    	printf(" Input data for node %d : ",i);
//    	scanf("%d",&data);
//    	newnode->data=data;
//    	newnode->next=NULL;
//    	temp->next=newnode;
//    	temp=temp->next;
//    }
//
//}
//void PrintList(struct node* node) 
//{
//    int j;
//    j=1;
//    while (node != NULL) 
//    {
//        printf(" Data of %d Node = %d\n",j++, node->data);
//        node = node->next;
//    }
//}
//void InsertatMiddle(int newData,int Position)
//{
//    
//    int i;
//    struct node *newnode, *temp;
//    newnode = (struct node*)malloc(sizeof(struct node));
//    newnode->data = newData; //Links the data part
//    newnode->next = NULL;
//    temp = firstnode;
//    for(i=2; i<Position; i++)
//    {
//        temp = temp->next;
//    }
//    if(temp != NULL)
//    {
//        newnode->next = temp->next;  //Links the address part of new node
//        temp->next = newnode;   
//    }
//    else
//    {
//        printf(" Insert is not possible to the given position.\n");
//    }
//    
//}









//deletion at first

//#include<stdio.h>
//#include<stdlib.h>
//
//struct node {
//    int data;
//    struct node *next;
//}*firstnode;
//
//void PrintList(struct node* node);
//void FirstNodeDeletion();
//void Creation(int Length);
//
//int main()
//{
//    int Length,i;
//    printf("\n\n Linked List : Delete first node of Singly Linked List :\n");
//	printf("-------------------------------------------------------------\n");
//    printf(" Input the Length of nodes : ");
//    scanf("%d", &Length);
//    Creation(Length);
//    printf("\n Data entered in the list : \n");
//    PrintList(firstnode);
//    FirstNodeDeletion();
//    PrintList(firstnode);
//    return 0;
//}
//void Creation(int Length)
//{
//    struct node *temp,*newnode;
//	int data,i;
//	firstnode = (struct node *)malloc(sizeof(struct node));
//	printf(" Input data for node 1 : ");
//    scanf("%d", &data);
//    firstnode->data= data;
//    firstnode->next = NULL; // links the address field to NULL
//    temp=firstnode;
//    for (i=2;i<=Length;i++)
//    {
//    	newnode=(struct node *)malloc(sizeof(struct node));
//    	printf(" Input data for node %d : ",i);
//    	scanf("%d",&data);
//    	newnode->data=data;
//    	newnode->next=NULL;
//    	temp->next=newnode;
//    	temp=temp->next;
//    }
//
//}
//void PrintList(struct node* node) 
//{
//    int j;
//    j=1;
//    while (node != NULL) 
//    {
//        printf(" Data of %d Node = %d\n",j++, node->data);
//        node = node->next;
//    }
//}
//void FirstNodeDeletion()
//{
//    struct node *Delptr;
//    if(firstnode == NULL)
//    {
//        printf(" There are no node in the list.");
//    }
//    else
//    {
//        Delptr = firstnode;
//        firstnode = firstnode->next;
//        printf("\n Data of node 1 which is being deleted is :  %d\n", Delptr->data);
//        free(Delptr);  // Clears the memory occupied by first node
//    }
//}











//deletion at last.


//#include<stdio.h>
//#include<stdlib.h>
//
//struct node {
//    int data;
//    struct node *next;
//}*firstnode;
//
//void PrintList(struct node* node);
//void EndNodeDeletion();
//void Creation(int Length);
//
//int main()
//{
//    int Length,i;
//    printf("\n\n Linked List : Delete End node of Singly Linked List :\n");
//	printf("-------------------------------------------------------------\n");
//    printf(" Input the Length of nodes : ");
//    scanf("%d", &Length);
//    Creation(Length);
//    printf("\n Data entered in the list : \n");
//    PrintList(firstnode);
//    EndNodeDeletion();
//    printf("\n New Data of the list : \n");
//    PrintList(firstnode);
//    return 0;
//}
//void Creation(int Length)
//{
//    struct node *temp,*newnode;
//	int data,i;
//	firstnode = (struct node *)malloc(sizeof(struct node));
//	printf(" Input data for node 1 : ");
//    scanf("%d", &data);
//    firstnode->data= data;
//    firstnode->next = NULL; // links the address field to NULL
//    temp=firstnode;
//    for (i=2;i<=Length;i++)
//    {
//    	newnode=(struct node *)malloc(sizeof(struct node));
//    	printf(" Input data for node %d : ",i);
//    	scanf("%d",&data);
//    	newnode->data=data;
//    	newnode->next=NULL;
//    	temp->next=newnode;
//    	temp=temp->next;
//    }
//
//}
//void PrintList(struct node* node) 
//{
//    int j;
//    j=1;
//    while (node != NULL) 
//    {
//        printf(" Data of %d Node = %d\n",j++, node->data);
//        node = node->next;
//    }
//}
//void EndNodeDeletion()
//{
//    struct node *DelLast, *preNode;
//    DelLast = firstnode;
//    preNode = firstnode;
//    /* Traverse to the last node of the list*/
//    while(DelLast->next != NULL)
//    {
//        preNode = DelLast;
//        DelLast = DelLast->next;
//        }
//        if(DelLast == firstnode)
//        {
//            firstnode = NULL;
//        }
//        else
//        {
//            preNode->next = NULL;
//            printf("\n Data of node Last which is being deleted is :  %d\n", DelLast->data);
//        }
//        free(DelLast);
//}













//deletion at middle.

//#include<stdio.h>
//#include<stdlib.h>
//
//struct node {
//    int data;
//    struct node *next;
//}*firstnode;
//
//void PrintList(struct node* node);
//void MiddleNodeDeletion(int Postion);
//void Creation(int Length);
//
//int main()
//{
//    int Length,i,Postion;
//    printf("\n\n Linked List : Delete Middle node of Singly Linked List :\n");
//	printf("-------------------------------------------------------------\n");
//    printf(" Input the Length of nodes : ");
//    scanf("%d", &Length);
//    Creation(Length);
//    printf("\n Data entered in the list : \n");
//    PrintList(firstnode);
//    printf("\n Input the position of node to delete : ");
//    scanf("%d", &Postion);
//
//    if(Postion<=1 || Postion>=Length)
//    {
//     printf("\n Deletion can not be possible from that position.\n ");
//    }
//	      if(Postion>1 && Postion<Length)
//      {
//       printf("\n Deletion completed successfully.\n ");
//	   MiddleNodeDeletion(Postion);
//      }
//
//	    printf("\n The new List are  : \n");
//    PrintList(firstnode);
//    return 0;
//}
//void Creation(int Length)
//{
//    struct node *temp,*newnode;
//	int data,i;
//	firstnode = (struct node *)malloc(sizeof(struct node));
//	printf(" Input data for node 1 : ");
//    scanf("%d", &data);
//    firstnode->data= data;
//    firstnode->next = NULL; // links the address field to NULL
//    temp=firstnode;
//    for (i=2;i<=Length;i++)
//    {
//    	newnode=(struct node *)malloc(sizeof(struct node));
//    	printf(" Input data for node %d : ",i);
//    	scanf("%d",&data);
//    	newnode->data=data;
//    	newnode->next=NULL;
//    	temp->next=newnode;
//    	temp=temp->next;
//    }
//
//}
//void PrintList(struct node* node) 
//{
//    int j;
//    j=1;
//    while (node != NULL) 
//    {
//        printf(" Data of %d Node = %d\n",j++, node->data);
//        node = node->next;
//    }
//}
//void MiddleNodeDeletion(int Postion)
//{
//    int i;
//    struct node *DelMid, *preNode;
//    if(firstnode== NULL)
//    {
//        printf(" There are no nodes in the List.");
//    }
//    else
//    {
//        DelMid = firstnode;
//        preNode = firstnode;
// 
//        for(i=2; i<=Postion; i++)
//        {
//            preNode = DelMid;
//            DelMid = DelMid->next;
//        }
//        if(DelMid != NULL)
//        {
//            if(DelMid == firstnode)
//                firstnode = firstnode->next;
// 
//            preNode->next = DelMid->next;
//            DelMid->next = NULL;
//            printf("\n Data of %d Last which is being deleted is :  %d\n",Postion, DelMid->data);
//            free(DelMid);
//        }
//        else
//        {
//            printf(" Deletion can not be possible from that position.");
//        }
//    }
//}
