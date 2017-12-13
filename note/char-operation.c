/* Problem : operation Add/Subtract two variable of char type
             is equal to char type

/* example 1 */

void print_lowercase()
{
    char s[15] = “Hello World!";

    for (int i=0; s[i]; i++)
    if (s[i] >= ‘A’ && s[i] <= 'Z')
        cout << s[i] – 'A' + 'a';  // error: print integer
    else
        cout << s[i];   // print character
}

out: 104ello 119orld!

/* example 1 modify */

void print_lowercase()
{
    char s[15] = “Hello World!";

    for (int i=0; s[i]; i++)
    if (s[i] >= ‘A’ && s[i] <= 'Z')
        /* 兩種改法:要印出char型態 */
        cout << char(s[i] - 'A' + 'a');          // method 1
        cout << static_cast<char>(s[i] - 'A' + 'a'); // method 2 強制轉型
    else
        cout << s[i];
}


/* example 2 */
void string_to_integer()
{
    char s[10] = "26962869";

    int n = 0;
    for (int i=0; s[i]; i++)
        n = n * 10 + s[i] - '0'; // n最後為int

        /* 減'0'的字元是因為陣列的數字實際為ASCII
         * ex:s[0]='2' 轉換成integer為32
         * 因此要扣掉'0' (ASCII為30)
         * s[0] - '0' = 2
         * 而因為n是int type
         * 因此最後印出是整數型態 */

    cout << n;
}

/* Conclusion: */
/* char之間的計算結果可為char型態、或是int型態
 * 看印出的型態要求決定印出的型態
 */

// source url: http://www.csie.ntnu.edu.tw/~u91029/AlgorithmDesign.html#4
// reference url: https://stackoverflow.com/questions/33466270/use-of-si-0
