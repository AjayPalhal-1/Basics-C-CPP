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
     complexNo(int real ,int img)
    {
        printf(":: Parameterized Constructor Called ::\n\n");
        this->imgNo=img;
        this->realNo=real;
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
    complexNo c1,c2(10,20) ,c3;

    
        printf("** Values Of Attributes Before Setting it ** \n Complex No. C1 : %d+%di\n\n",c1.getRealNo(),c1.getImgNo());

        c1.setImgNo(10);
    
        c1.setRealNo(5);
        
        printf("Complex No. Of Object C1 : %d+%di\n\n",c1.getRealNo(),c1.getImgNo());
        printf("Complex No. Of Object C2 : %d+%di\n\n",c2.getRealNo(),c2.getImgNo());
        c3.setImgNo(c1.getImgNo()+c2.getImgNo());
        c3.setRealNo(c1.getRealNo()+c2.getRealNo());
        printf("Addition C1 + C2 = C3 : %d+%di\n\n",c3.getRealNo(),c3.getImgNo());

            
}