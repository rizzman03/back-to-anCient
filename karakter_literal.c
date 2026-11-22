/*
 * 1. Karakter tunggal 'a' 'b' 'c'
 * 2. escape karakter '\n' new line, '\t' tabulation, '\\', '\'' tanda petik
 * 3. ascii \x41 \x111
 */

#include "stdio.h"

int main() 
{
    printf("karakter tunggal = %c\n", 'B');
    printf("escape karakter %c\n baris baru\n", '\n');
    printf("tabulation = tab%ctab\n", '\t');
    printf("ascii = %c\n", '\x41');
    printf("%d\n", 100);
    return 0;
}
