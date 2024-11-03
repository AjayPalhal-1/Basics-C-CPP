



#include<stdio.h>

struct FileCompresser 
{
   FileCompresser(){};

   void ToCompress (){};
  //  {
  //    printf("\nGeneric Compresser Is Applied\n\n");
  //  }


};

struct Imgcmpresser : public FileCompresser
{
    Imgcmpresser(){};
    void ToCompress ()
   {
     printf("\nImage Compresser Is Applied");
   }

};

struct PhotoCompresser : public FileCompresser
{   
    PhotoCompresser(){};

    void ToCompress ()
   {
     printf("\nPhoto Compresser Is Applied");
   }

};


struct ZIPCompresser : public FileCompresser
{   
    ZIPCompresser(){};

    void ToCompress ()
   {
     printf("\nZIP Compresser Is Applied");
   }

};

struct VideoCompresser : public FileCompresser
{   
    VideoCompresser(){};

    void ToCompress ()
   {
     printf("\nVideo Compresser Is Appliedn\n\n");
   }

};

int main()
{
    FileCompresser* F1[4];

    F1[0] = new VideoCompresser();
    F1[1] = new Imgcmpresser();
    F1[2] = new PhotoCompresser();
    F1[3] = new ZIPCompresser();


    

    for(int i = 0; i<4;i++)
    {
        F1[i]->ToCompress();
    } 

        for(int i = 0; i < 4; i++)
    {
        delete F1[i]; // Delete allocated memory
    }
    return 0;
}