#include <iostream>
#include <vector>

#include <string.h>

using namespace std;

int main()
{
    char str[] = "This is an example string";

    char* ptr = str;

    while(ptr=strtok(ptr, " "))
    {
        printf("%s\n", ptr);
        ptr = strstr(ptr, " ");
    }

    return 0;
}