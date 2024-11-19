#include <iostream>
#include"myarray.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int size;
	cout<<"Enter size of Array :";
	cin>>size;
	MyArray obj1(size);
	MyArray obj2(obj1);
 
	// int ch;
	// int x,ind;
	// do
	// {
	
	// 	cout<<endl <<"1. Add element"<<endl;
	// 	cout<<"2. Display"<<endl;
	// 	cout<<"3. Delete"<<endl;
	// 	cout<<"4. Search"<<endl;
	// 	cout<<"10. Exit"<<endl;
	// 	cout<<"Enter choice"<<endl;
	// 	cin>> ch;
	// 	switch(ch){
	// 		case 1:
				
	// 			cout<<endl<<"Enter element"<<endl;
	// 			cin>>x;
	// 			obj1.addEle(x);
	// 			break;
	// 		case 2:
	// 			obj1.display();
	// 			break;
	// 		case 3:
	// 				int pos;
	// 			cout<<endl<<"Enter position to delete"<<endl;
	// 			cin>>pos;
	// 			obj1.deleteEle(pos);
	// 			break;
	// 		case 4:
				
	// 			cout<<endl<<"Enter element to search"<<endl;
	// 			cin>>x;
	// 			ind= obj1.search(x);
	// 			if(ind == -1)
	// 			{
	// 				cout<<endl<<"No. not found"<<endl;
					
	// 			}
	// 			else
	// 			{
	// 				cout<<endl<<"Element present at "<<ind<<endl;
	// 			}
	// 			break;
	// 	}
	// }while(ch!=10);			
	
	

	return 0;
}
