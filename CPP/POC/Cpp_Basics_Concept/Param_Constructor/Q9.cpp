// Complex (real, imaginary)

#include<stdio.h>

 struct complexNo
{
    int realNo;
    int imgNo;
     complexNo()
    {
        printf(":: Default Constructor Called ::\n\n");
        this->imgNo=0;
        this->realNo=0;
        
    }
    complexNo(int real , int img)
    {
        printf(":: Parameterise Constructor Called ::\n\n");

        this->realNo=real;
        this->imgNo=img;

    }

    complexNo(int real)
    {
        printf(":: Parameterise Constructor Called  For Real No. ::\n\n");

        this->realNo=real;
        // this->imgNo=img;

    }


    void setImgNo(int imgno)
    {
        this->imgNo=imgno;
    }

     void setRealNo(int realno)
    {
        this->realNo=realno;
    }

    int getImgNo()
    {
        return this->imgNo;
    }

    int getRealNo()
    {
        return this->realNo;
    }

    
     
     void disp(complexNo c)
 {
    printf("\n\n:: Outputs Are ::");
    printf("\nReal No Are : %d\n",c.realNo);
    printf("Img No Are : %di\n",c.imgNo);

    printf("Complex No Are : %d+%di\n\n",c.realNo,c.imgNo);
}

};

int main()
{
    complexNo c1(10,20),c2(30,40),c3,c4(5);

    
        // printf("** Values Of Attributes Before Setting it ** \n\n Complex No. : %d+%di\n\n",c1.getRealNo(),c1.getImgNo());
        // c1.setImgNo(10);
        // c1.setRealNo(5);        
        // printf("Complex No. : %d+%di\n\n",c1.getRealNo(),c1.getImgNo());
            
}