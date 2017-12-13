#include <iostream>
using namespace std;

/* Algorithm: frame of square
 * length = 4
 * output:
 * @@@@
 * @  @
 * @  @
 * @@@@
 */

 void print_sideofSquare(int size);

int main() {

/* Method-1: Intuitive Method */

	int i, j;  // counter
	int length;  // size of square
	cout << "Please enter the length of side of square: " ;
	cin >> length;
	cout << endl;

	for(i = 1; i <= length; i++) cout << "@";
	cout << endl;
	for(i = 1; i <= length - 2; i++){
		cout << "@";
		for(j = 1; j <= length - 2; j++) cout << " ";
		cout << "@" << endl;
	}
	for(i = 1; i <= length; i++) cout << "@";
	cout << endl;
	cout << endl;

	print_sideofSquare(length);
}

/* Method-2: Use array */
void print_sideofSquare(int size){

	// last character of every column is '\0'
	char array[size][size];

	int i, j; // counter
	for (i = 0; i < size; i++){
    	for (j = 0; j < size; j++){
        	array[i][j] = ' ';
    	}
	}

	for(i = 0; i < size; i++){
		array[0][i] = '@';
		array[i][0] = '@';
		array[i][size-1] = '@';
		array[size-1][i] = '@';
	}

	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			cout << array[i][j];
		}
		cout << endl;
	}
}
