// malloc Function [malloc()];

#include <stdio.h>
#include <stdlib.h>
int main()
{
     int *ptr;
     ptr = (int *)malloc(5 * sizeof(int));
     ptr[0] = 12;
     ptr[1] = 13;
     ptr[2] = 14;
     ptr[3] = 15;
     ptr[4] = 16;
     for (int i = 0; i <= 4; i++)
     {
          printf("%d\t", ptr[i]);
     }

     return 0;
}

//Calloc function [calloc()]

#include<stdio.h>
#include<stdlib.h>
int main() {
int *ptr;
ptr=(int*)calloc(5,sizeof(int));
     ptr[0] = 12;
     ptr[1] = 13;
     ptr[2] = 14;
     ptr[3] = 15;
     ptr[4] = 16;
     for (int i = 0; i <= 4; i++)
     {
          printf("%d\t", ptr[i]);
     }
return 0 ;
}

// free function [free()]

#include<stdio.h>
#include<stdlib.h>
int main() {
int *ptr;
ptr=(int*)calloc(5,sizeof(int));
     ptr[0] = 12;
     ptr[1] = 13;
     ptr[2] = 14;
     ptr[3] = 15;
     ptr[4] = 16;
     for (int i = 0; i <= 4; i++)
     {
          printf("%d\t", ptr[i]);
     }
     free(ptr);// free function
return 0 ;
}

// realloc function [realloc()]

#include <stdio.h>
#include <stdlib.h>
int main()
{
     int *ptr;
     ptr = (int *)malloc(5 * sizeof(int));
     ptr[0] = 12;
     ptr[1] = 13;
     ptr[2] = 14;
     ptr[3] = 15;
     ptr[4] = 16;
     ptr[5] = 17;
     ptr[6] = 18;
     ptr[7] = 19;
     for (int i = 0; i <= 4; i++)
     {
          printf("%d\t", ptr[i]);
     }

     return 0;
}
