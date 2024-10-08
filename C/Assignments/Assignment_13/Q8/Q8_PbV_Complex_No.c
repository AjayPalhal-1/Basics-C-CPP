// Complex (real, imaginary)

#include<stdio.h>

typedef struct complexNo
{
    int realNo;
    int imgNo;

}complexNo;

complexNo add(complexNo c)
{
    complexNo temp =c;
    printf("Enter the Real No : ");
    scanf("%d",&temp.realNo);

    printf("Enter the Img No : ");
    scanf("%d",&temp.imgNo);
    
        return  temp;


}

void disp(complexNo c)
{
    printf("\n\n:: Outputs Are ::");
    printf("\nReal No Are : %d\n",c.realNo);
    printf("Img No Are : %di\n",c.imgNo);

    printf("Complex No Are : %d+%di\n\n",c.realNo,c.imgNo);


}

int menu()
{
    int choice ;
    printf("Enter Your Choice \n");
    printf("Adding Complex No : 1\nShowing Complex No : 2\nFor Exit : 0\n");
    scanf("%d",&choice);
    return choice;

}

int main()
{
    complexNo c1,c2;

    int ch;
    
    do
    { 
         ch = menu();
        switch (ch)
        {
        case 1 :
            c1 = add(c1);
            break;
        case 2:
             disp(c1);
             break;
        
        default:
            break;
        }

    } while (menu());
    
  

}