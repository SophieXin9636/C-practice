/* Problem : operation Add/Subtract two variable of char type
             is equal to char type

/* example 1 */

void print_lowercase()
{
    char s[15] = ��Hello World!";

    for (int i=0; s[i]; i++)
    if (s[i] >= ��A�� && s[i] <= 'Z')
        cout << s[i] �V 'A' + 'a';  // error: print integer
    else
        cout << s[i];   // print character
}

out: 104ello 119orld!

/* example 1 modify */

void print_lowercase()
{
    char s[15] = ��Hello World!";

    for (int i=0; s[i]; i++)
    if (s[i] >= ��A�� && s[i] <= 'Z')
        /* ��ا�k:�n�L�Xchar���A */
        cout << char(s[i] - 'A' + 'a');          // method 1
        cout << static_cast<char>(s[i] - 'A' + 'a'); // method 2 �j���૬
    else
        cout << s[i];
}


/* example 2 */
void string_to_integer()
{
    char s[10] = "26962869";

    int n = 0;
    for (int i=0; s[i]; i++)
        n = n * 10 + s[i] - '0'; // n�̫ᬰint

        /* ��'0'���r���O�]���}�C���Ʀr��ڬ�ASCII
         * ex:s[0]='2' �ഫ��integer��32
         * �]���n����'0' (ASCII��30)
         * s[0] - '0' = 2
         * �Ӧ]��n�Oint type
         * �]���̫�L�X�O��ƫ��A */

    cout << n;
}

/* Conclusion: */
/* char�������p�⵲�G�i��char���A�B�άOint���A
 * �ݦL�X�����A�n�D�M�w�L�X�����A
 */

// source url: http://www.csie.ntnu.edu.tw/~u91029/AlgorithmDesign.html#4
// reference url: https://stackoverflow.com/questions/33466270/use-of-si-0
