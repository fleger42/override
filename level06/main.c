#include <string.h>
#include <stdio.h>

int main()
{
    char old_string[] = "terminate";
    int new_string;

    old_string[strcspn(old_string, "\n")] = 0;

        new_string = (old_string[3] ^ 0x1337) + 6221293;
        for ( int i = 0; i < strnlen(old_string, 32); ++i )
        {
        if ( old_string[i] <= 31 )
            return 1;
        new_string += (new_string ^ (unsigned int)old_string[i]) % 0x539;
        }
    printf("%d", new_string);
}