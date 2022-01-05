#include <bits/stdc++.h>
#include <string.h>

using namespace std;
int main()
{
    int count = 0;
    char databits[50];

    cout << "Enter Data Characters: ";
    cin >> databits;
    
    cout <<"Data Byte Before Bit Stuffing: "<<databits;

    cout << endl <<"Data Byte After Bit stuffing :";
    cout << "F ";

    for (int i = 0; i < strlen(databits); i++)
    {
        if (databits[i] == 'E') /* Esc (E) */
        {
            cout << "EE";
        }
        else if (databits[i] == 'F') /* Flag (F) */
        {
            cout << "EF";
        }
        else
            printf("%c", databits[i]);
    }
    cout << " F";

    return 0;
}