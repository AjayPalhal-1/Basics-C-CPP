// print the Sum Of ODD and EVEN No. Of N take Num from User 
int Sum_Evn_ODD(int);

int main ()
{
    
    printf(" Entre the no.\n");

    int num ; 
    int Add = Sum_Evn_ODD( num);
    printf(" Addition Of Even No. is = %d \n",Add);




}

// Function For ADDITION OF EVEN NUMBER AND ODD NUMBER 

    int Sum_Evn_ODD (int num )
    {
        int i, EvnAdd =0,Odd_add=0 ;

    scanf("%d",&num);
    for(i=1; i<=num;i++)
    {
        int rem = i%2;
        if(rem==0)
        {
            EvnAdd = EvnAdd + i;
            
        }
        else
        {
            Odd_add = Odd_add+ i;
        }
    }   
        //printf(" Addition Of Even No. is = %d \n",EvnAdd);
        //printf(" Addition Of ODD No. is = %d \n",Odd_add);
        return EvnAdd ;




    }







