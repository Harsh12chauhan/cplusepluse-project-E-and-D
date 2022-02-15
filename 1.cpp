#include <iostream>
using namespace std;


void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    int val;
    cout << "Enter 1 for encryption and 2 for decryption :";
    cin >> val;
    if (val == 1)
    {
        char c[50];
        cout<<"Enter your string here :";
        cin >> c;
        encrypt(c);
        printf("Encrypted string is:\n%s", c);
    }
    else if (val == 2)
    {
        char a[50];
        cout<<"Enter your string here :";
        cin >> a;
        decrypt(a);
        printf("Decrypted string is:\n%s", a);
    }
    else
    {
        cout << "Invalid Input ! ";
    }

    return 0;
}
