



#include<stdio.h>

struct FileCompresser 
{
   FileCompresser(){};

   void ToCompress ()
   {
     printf("/nGeneric Compresser Is Applied");
   }


};

struct Imgcmpresser : public FileCompresser
{
    Imgcmpresser();
    void ToCompress ()
   {
     printf("/nImage Compresser Is Applied");
   }

};

struct PhotoCompresser : public FileCompresser
{   
    PhotoCompresser();

    void ToCompress ()
   {
     printf("/nPhoto Compresser Is Applied");
   }

};


struct ZIPCompresser : public FileCompresser
{   
    ZIPCompresser();

    void ToCompress ()
   {
     printf("/nZIP Compresser Is Applied");
   }

};

struct VideoCompresser : public FileCompresser
{   
    VideoCompresser();

    void ToCompress ()
   {
     printf("/nVideo Compresser Is Applied");
   }

};

int main()
{
    FileCompresser* F1;

    F1[0]=new VideoCompresser();
    

    for(int i =0; i> 4;i++)
    {
        F1[i]->
    } 
    
    return 0;
}