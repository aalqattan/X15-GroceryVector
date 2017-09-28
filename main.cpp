// Authors: Ali Alqattan, Abdullah Baron, Oscar saucedo,Humaid Alketbi

#include<iostream>
#include<string>
#include<vector>


using namespace std;
int main()

{

vector<string> Grocerylist;
char input;
int numItems = 0;

string add;
do{

cout<<"\n==GROCERY LIST MANAGER==";

cout<<"\nEnter your choice: ";

cout<<"\n (A)dd an item";

cout<<"\n (S)how grocery list";

cout<<"\n (Q)uit";

cout<<"\nYour choice (A/S/Q): ";

cin>>input;

if(input == 'a'|| input == 'A'){

cout<<"What is the name of the item you would like to add to your list?"<<endl;

cin>>add;
Grocerylist.push_back(add);

add.clear();
} 


if(input == 's'|| input == 'S'){

for(int p = 0; p < Grocerylist.size() ; p++){

cout<<Grocerylist[p];
 
}
}




}while(input != 'Q' && input != 'q');

return 0;

}



