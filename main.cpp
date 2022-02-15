#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
// ===========help==========================
void help()
{
    cout << "\n"
            "Usage :-\n"
            "$ msg help                    # Show usage\n"
            "$ msg encrypt your string     # This command is use to  Encrypts your given string \n"
            "$ msg decrypt your string     # This command is use to  Decrypts your given string\n"
         << endl;
}
// ===========random generator===================
int rndom()
{
     srand(time(NULL));
     int number1 = rand() % 10 + 1 ;
     int number2 = rand() % 5 ;
     int number3 = rand() % 5 + 5;
     int number = number1 + number2 + number3;
     if (number <= 10 || number == 13 )
     {
          return number + 9;
     }
     else
     {
          return number;
     }
}
// ============used struct=====================
struct var
{
    int a;
    char *chr[];
};
// ========encryption================
var encrypt(int argc, char *argv[])
{
    string str1;
    for (int i = 2; i < argc; i++)
    {
        str1 = str1 + argv[i] + " ";
    }
    int r = rndom();
    for (int i = 0; i != str1.size(); i++)
    {
        str1[i] = str1[i] - r;
    }
    // ---------------------------------------------
    cout <<str1<<char(r);
    // ---------------------------------------------
    // cout <<endl<< str1 << r;
}
// ========decryption==========================
var decrypt(int argc, char *argv[])
{
    string str2;
    // cout << "Enter your string here : ";
    // getline(cin, str2);
    for (int i = 2; i < argc; i++)
    {
        str2 = str2 + argv[i] + " ";
    }
    int j = str2.size() - 1;  // last element
    char d = str2[j];
    int o = char(d);
    // ----------decrypt loop----------
    for (int i = 0; i != str2.size(); i++)
    {
        str2[i] = str2[i] + o;
    }
    // ---------printing -------------
    int var = str2.size() - 2;
    for (int i = 0; i < var; i++)
    {
        cout << str2[i];
    }
}
// ===========main==========================

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        help();
    }
    else if (strcmp(argv[1], "help") == 0)
    {
        help();
    }
    else if (strcmp(argv[1], "encrypt") == 0)
    {
        encrypt(argc, argv);
    }
    else if (strcmp(argv[1], "decrypt") == 0)
    {
        decrypt(argc, argv);
    }
    else
    {
        cout << "Invalid Input !";
    }
    return 0;
}