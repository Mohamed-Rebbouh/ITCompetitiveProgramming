#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct point{
int x,y;
};

float distance(struct point p1,struct point p2){

return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}

int main(){
int n,i,j;
float min;
struct point t[100];
printf("donner n:");
scanf("%d",&n);

for(i=0;i<n;i++){
 printf("donner x de point %d",i);
 scanf("%d",&t[i].x);
  printf("donner y de point %d",i);
 scanf("%d",&t[i].y);
}

min=distance(t[0],t[1]);

if(n>2){
for(i=0;i<n;i++){
  for(j=2;j<n;j++){
      if(min>distance(t[i],t[j]))
                min=distance(t[i],t[j]);

  }

}}
printf("min distance =%f",min);



return 0;
}
