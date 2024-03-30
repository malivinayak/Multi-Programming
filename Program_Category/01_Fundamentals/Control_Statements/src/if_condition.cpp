#include<iostream>

using namespace std;

int main(int argc, char* argv[]){

int value = 0; /* Declaring and assigning a default value of 0 to the interger type variable named "value" */

cout<<"Please enter a value : ";
cin>>value;
if(value == 1){ /* Here the if statement is checking if the value of variable `value` is equal to one */
	
	cout<<"Hey! value is equal to 1"<<endl; /* Printing to stdout(screen) if value is equal to one */
}

else /* `else if` statement is used so that it is checked only if the previous conditional statements are false */
	if(value == 0){

		cout<<"Hey! value is equal to 0"<<endl;
}

else{ /* `else` statement is used so that it is executed without checking any value if the previous `if/else if` statements have all resulted to false*/

	cout<<"Hey! value is neither 0 or 1, it is equal to "<< value <<endl;

}

return 0;
}

/*

Please run `make all` for compiling this .cpp program without any hassle! Then execute `./if_condition` for running the program.

*/
