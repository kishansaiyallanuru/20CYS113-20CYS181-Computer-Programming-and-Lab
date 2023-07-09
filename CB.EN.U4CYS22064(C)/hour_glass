#include <stdio.h>
 
int main()
{
  int rows, i, j, k;
 
  
  scanf("%d", &rows);
  rows = rows+1;
 
  // ASCII value of alphabet 'D'
  
  for(i=rows-1;i>1;i--){
    for(k=0;k<rows-i;k++) {
        printf("  ");
    }
    int alphabet = 68;
    for(j=0;j<2*i-1;j++){
        printf("%c ",alphabet);
        ++alphabet;
    }
    if(i>2){
    printf("\n");
    }
  }
  for(i=0;i<rows;i++){
    for(k=0;k<rows-i;k++) {
        printf("  ");
    }
    int alphabet = 68;
    for(j=1;j<=2*i-1;j++){
        if(j>=1){
            printf("%c ",alphabet);
        ++alphabet;
        }
        
    }
    printf("\n");  
  }
  return 0;

}
