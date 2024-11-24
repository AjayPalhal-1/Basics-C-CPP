#include"tystd.h"

namespace TY
{
    TYMARKS::TYMARKS()
    {
        this->practMarks=0;
        this->theoryMarks=0;
    }

    TYMARKS::TYMARKS(int pract , int th )
    {
        this->practMarks=pract;
        this->theoryMarks=th;
    }

   int  TYMARKS::getPractmarks()
    {
        return this->practMarks;

    }

     int  TYMARKS::getTheorymarks()
    {
        return this->theoryMarks;

    }


}