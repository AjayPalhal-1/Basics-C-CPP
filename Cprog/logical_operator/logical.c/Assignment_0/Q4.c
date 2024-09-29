// If area  of room is 144 sq m. Then how many tiles of size 12*12 sq cm will
// be required to cover the flooring of room.


int main (){
int room_area = 144;
int tile_size = 12;
int New_area = 144*10000;// conv from square meter to cm 
int area_size = 12*12 ;
int no_of_tiles = New_area/ area_size;
printf("%d",no_of_tiles);



}