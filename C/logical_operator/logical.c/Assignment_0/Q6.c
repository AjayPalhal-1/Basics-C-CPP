//6. Convert the time entered in hr , min and sec into seconds.  7 hour , 72 minits , second = 34 ;convert it in second 

int main (){

    int Hr = 7;
    int minits= 72;
    int second = 34 ;
    int total_sec = (Hr * 60*60)+ (minits * 60 )+ second ;
    printf(" totol seconds are %d \n ", total_sec);
}