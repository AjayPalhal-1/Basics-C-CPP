#include<stdio.h>

int main()
{

    int unit, charges ;
    printf(" Entre THe Units \n");

    scanf("%d",&unit);

    if ( unit <= 50 )
    { charges = unit * 30; 
        printf(" Your Bill Is %d = \n" , charges );
        
    }
   else  if ( unit <= 150  )
    { charges = unit * 40; 
        printf(" Your Bill Is %d =\n " , charges );
        
    }
    else if  ( unit >= 151  )
    { charges = unit * 50; 
        printf(" Your Bill Is %d = \n" , charges );
        
    }
}