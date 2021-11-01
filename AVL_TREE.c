#include<stdio.h>
struct Pateint_Node{
    int Pateint_Id;
    char Name[20];
    int age;
    int Room_no;
    char Prescribed_Doc[20];
    char BG[2];
    char DOA[20];
    char Gender;
    char Disease[20];
    struct Pateint_Node *left;
    struct  Pateint_Node *right;
    int height;
    
    
};
int Height(struct Pateint_Node *node){
    if(node==NULL){
        return 0;
    }
    return node->height;
}

struct Pateint_Node* NewNode(char name[20],int id,int Age,int roomno,char Gender,char DOA[20],char doc[20],char bg[2],char disease[20],char doa[20]){
    struct Pateint_Node *newnode=(struct Pateint_Node*) malloc(sizeof(struct Pateint_Node));
    newnode->Pateint_Id=id;
    newnode->age=Age;
    strcpy(newnode->Name,name);  
    newnode->Room_no=roomno;
    strcpy(newnode->BG,bg);
    strcpy(newnode->Disease,disease);
    strcpy(newnode->DOA,doa);
    strcpy(newnode->Gender,Gender);
    newnode->height=1;
    strcpy(newnode->Prescribed_Doc,doc);
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}