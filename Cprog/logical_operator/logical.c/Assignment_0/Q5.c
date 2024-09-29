
// //  Q 5. If there are 20 students who like football, 30 students like badminton and
// 10 like both. There are 20 who are not interested in any of the games. How
// many total number of students are there?

int main ()
    {
        int football=20 ;
        int batmin = 30;
        int both =10;
        int notint = 20;

        int onlyfootball = football - both ;
                printf(" Total student of  onlyfootball  is %d \n",onlyfootball );

        int onlybatmin = batmin -both ;

                printf(" Total student of  onlybatmin  is %d \n",onlybatmin );
                                printf(" notint student  is %d \n",notint );

                



        
        int total = onlyfootball + onlybatmin + notint +both; 
        printf(" Total student of class is %d\n",total );
    }
