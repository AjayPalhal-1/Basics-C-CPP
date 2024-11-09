class Book
{
    private:

    char title[20];
    int isbnno;
    char author[20];
    int pbyear;

    public:
    Book();    
    Book(char* title , int isbn , char* name , int pyear);
    void DisplayInfo();    


};