
#include <stdio.h>


int main(void)
{
    FILE* file = fopen("card.raw", "r");
    
   
    if (file == NULL)
    {
        fclose(file); 
        printf("unable to recover file from card.raw \n");
        return 1;
    }

    int counter = 0; 
   
    unsigned char jpeg[512];
    
     char fname[10];
   
   
   
    FILE* temp = NULL; 
     
    
    
	return 0;
}