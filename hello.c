// Hello world program for CS50 online class
// by Stephen Kowalski

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}