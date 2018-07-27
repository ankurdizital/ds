// implementation of tree ANKUR GUPTA  21 JULY
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
};

void main()
{
  int a;
  struct node *p,q,*r;
  p=NULL;

  while(scanf("%d",&a)!=EOF)
  add(&p,a);
  display(&p);

}

add(struct node **m,int n)
{

  struct node *temp,*s,*k,*l;
  s=*m;
  if(*m==NULL)
    {
  temp=malloc(sizeof(struct node));
  temp->data=n;
  temp->left=NULL;
  temp->right=NULL;
  *m=temp;
    }

  else
    {


      if(n>((*m)->data))
	add(&((*m)->right),n);

      else
      add(&((*m)->left),n);
  
    }
   
}



display(struct node **q)
{
  if(*q!=NULL)
    {
      printf("%d \t",(*q)->data);
      display(&((*q)->left));
      display(&((*q)->right));  
}
}


