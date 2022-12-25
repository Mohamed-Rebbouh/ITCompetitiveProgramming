#include<stdio.h>
#include<stdlib.h>
typedef struct mall{
int x;
struct mall *suiv;
}*list;

void init(list *l){
*l=NULL;
}
void alouer(list *l){
*l=malloc(sizeof(struct mall));
}

void aff_val(list l,int val){
l->x=val;
}
void aff_suiv(list l,list v){
l->suiv=v;
}

list suiv(list l){
return l->suiv;
}

int val(list l){
return l->x;
}





list supp(list l){
list p,k;
   k=l;
  while(k!=NULL){
     p=suiv(k);
     while(p!=NULL){
        if(val(p)==val(k))
          aff_suiv(k,suiv(p));

          p=suiv(p);
     }
     k=suiv(k);
  }
  return l;
}

void afficher(list l){
while(l!= NULL){
   printf("%d",val(l));
   printf("-");
   l=suiv(l);
}

}

int main(){
list a,b,c,d,e,f,k;
init(&a);
alouer(&a);
alouer(&b);
alouer(&c);
alouer(&d);
alouer(&e);
alouer(&f);
aff_val(a,1);
aff_val(b,1);
aff_val(c,1);
aff_val(d,2);
aff_val(e,2);
aff_val(f,3);
aff_suiv(a,b);
aff_suiv(b,c);
aff_suiv(c,d);
aff_suiv(d,e);
aff_suiv(e,f);
aff_suiv(f,NULL);
afficher(a);
k=supp(a);
printf("\n");
afficher(k);
return 0;
}

