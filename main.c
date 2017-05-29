#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  char suj[6][15]={{"QUE JE"},{"QUE TU"}
  ,{"QU'IL"},{"QUE NOUS"},{"QUE VOUS"},{"QU'ILS"}};
 char fin[6][15]={{"ASSE"},{"ASSES"},{"AT"},{"ASSIONS"},
{"ASSIEZ"},{"ASSENT"}};
  char ver[100] ;
  scanf("%s",ver);
  int n =strlen(ver);
  ver[n-2] = '\0';
  ver[n-3] ='\0';
  int i;
  for(i = 0 ; i < 6 ;i++){

  printf("%s %s%s\n",suj[i],ver,fin[i]);
  }

  }




