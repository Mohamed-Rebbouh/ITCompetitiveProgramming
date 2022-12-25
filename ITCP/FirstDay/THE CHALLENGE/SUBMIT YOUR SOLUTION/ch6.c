#include<stdio.h>
#include<stdlib.h>

int serch(int t[],int n,int size){
for(int i=0;i<size;i++){
  if(t[i]==n)
return 1;

}
return -1;
}


int main(){

int t[]={1,2,3,4};
printf("%d",serch(t,5,4));
return 0;

}
