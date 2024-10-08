// Complex (real, imaginary)

#include<stdio.h>

 struct complexNo
{
    int realNo;
    int imgNo;
     complexNo()
    {
        printf(":: Default Constructor Output ::\n\n");
        this->imgNo=10;
        this->realNo=10;
    }

       complexNo(int real ,int img)
    {
        printf(":: 2 PM vala Constructor Output ::\n\n");
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

    complexNo add(complexNo c)
    {
       complexNo temp;
       temp.realNo = this->realNo+c.realNo;
       temp.imgNo= this->imgNo +c.imgNo;
       return temp;
    }

     complexNo mul(complexNo c)
    {
       complexNo temp;
       temp.realNo = this->realNo*c.realNo;
       temp.imgNo= this->imgNo *c.imgNo;
       return temp;
    }
     complexNo div(complexNo c)
    {
       complexNo temp;
       temp.realNo = this->realNo/c.realNo;
       temp.imgNo= this->imgNo / c.imgNo;
       return temp;
    }
     
     void disp()
 {
    printf("\n:: Outputs Using Display Are ::");
    printf("\nReal No Are : %d\n",this->realNo);
    printf("Img No Are : %di\n",this->imgNo);

    printf("Complex No Are : %d+%di\n\n",this->realNo,this->imgNo);
 }

};

complexNo add(complexNo c , int a)
{
    c.setImgNo(c.imgNo+ a);
    c.setRealNo(c.realNo+ a);


    return c;
}

complexNo mul(complexNo c , int a)
{
    c.setImgNo(c.imgNo* a);
    c.setRealNo(c.realNo* a);


    return c;
}

complexNo div(complexNo c , int a)
{
    c.setImgNo(c.imgNo/ a);
    c.setRealNo(c.realNo/ a);


    return c;
}





int main()
{
    complexNo c1(10,20),c2(10,20),c3,c4,c5,c6;    
        
        // printf("Complex No. Of C1 Object  : %d+%di\n\n",c1.getRealNo(),c1.getImgNo());
        // printf("Complex No. Of C2 Object  : %d+%di\n\n",c2.getRealNo(),c2.getImgNo());
        // // c3.add(c1,c2);
        // c3=c1.add(c2);
        // printf("Addition Of Complex C1 and C2 Is C3  = %d + %di \n\n\n",c3.getRealNo(),c3.getImgNo());
        // c3.disp();
        c4=add(c1,10);
        c4.disp();

        c4=mul(c1,10);
        c4.disp();
        c5=mul(c1,10);
        // c5.disp();
        printf("Division Of Complex C1 and C2 Is C6  = %d + %di \n\n\n",c3.getRealNo(),c3.getImgNo());


        c6=c1.mul(c2);
        c6.disp();

        c6=mul(c1,10);
        c6.disp();


            
}