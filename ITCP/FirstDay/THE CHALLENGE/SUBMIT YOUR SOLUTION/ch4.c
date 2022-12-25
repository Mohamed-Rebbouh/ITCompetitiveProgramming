#include<stdio.h>
#include<stdlib.h>

void trie(int t[],int k[],int x,int b){
int i,j,y;
for (i=0;i<x;i++){
 for(j=1;j<x;j++){
  if(t[j]<t[i]){
    y=t[i];
    t[i]=t[j];
    t[j]=y;
  }
 }
 for(j=0;j<b;j++){
  if(k[j]<t[i]){
    y=t[i];
    t[i]=k[j];
    k[j]=y;
  }
 }
}
for(i=0;i<b;i++){
  for(j=1;j<b;i++){
      if(k[j]<k[i]){
    y=k[i];
    k[i]=k[j];
    k[j]=y;
  }
  }
}


printf("a=[");
for(i=0;i<x;i++){
  printf("%d,",t[i]);

}
printf("]\n");


printf("b=[");
for(i=0;i<b;i++){
  printf("%d,",k[i]);
}
printf("]");


}

int main(){
int i,j;
int a[]={5,8,9,10};
int b[]={1,2,100};
trie(a,b,4,3);





return 0;
}


