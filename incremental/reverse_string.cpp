#include <iostream>
#include <string.h>
using namespace std;

/* reverse string
 * For example:
 * "Hello World!" --> "!dlroW olleH"
 */

void reverse_string();
void reverse2(char* s);

int main() {
	char s[15] = "Hello World!";
	reverse_string();
	reverse2(s);
	cout << "2.���ध�᪺�r��O: " << s << endl;
	return 0;
}

// method 1
void reverse_string()
{
    char a[15] = "Hello World!";

    int i, j;  // counter

    // ��ӪT�|�A�@�ӱq�Y����A�@�ӱq�����Y�C
    for (i = 0, j = 12; i < j; i++, j--)
        swap(a[i], a[j]);

    cout << "1.���ध�᪺�r��O: " << a << endl;
}

// method 2
void reverse2(char* s)
{
    int n = strlen(s);
    int i;
    for (i = 0; i < n/2; i++)
        swap(s[i], s[n-1-i]);
}

void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

// url: http://www.csie.ntnu.edu.tw/~u91029/AlgorithmDesign.html#1
