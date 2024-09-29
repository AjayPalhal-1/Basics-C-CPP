// //7. Find total length of wire required for n fences around rectangular box
// horizontally.

// hint formula ;     2*(length*width)

int main (){
    int N= 10;
    int length = 7;
    int width = 5;
    int perm = 2 * (length + width );
    int total_Length = N* perm ;
    printf("Total Length of wire is %d ", total_Length);


}