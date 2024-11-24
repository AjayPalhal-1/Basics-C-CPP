
#include"systd.h"

namespace SY
{
   SYMARKS::SYMARKS()
   {
     this->compTotal=0;
     this->entcTotal=0;
     this->mathTotal=0;        

   }

   SYMARKS::SYMARKS(int cmp , int entc, int math)
   {
    this->compTotal=cmp;
     this->entcTotal=entc;
     this->mathTotal=math;             

   }

 int SYMARKS:: getCompTotal()
 {
     return this->compTotal;
 }
 int SYMARKS:: getEntcTotal()
 {
     return this->entcTotal;
 }
 int SYMARKS:: getMathTotal()
 {
     return this->mathTotal;
 }

}