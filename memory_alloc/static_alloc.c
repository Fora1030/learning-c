#include <stdio.h>

void increasePage_number(const char* text);


int main(void)
{
    increasePage_number("Tittle Test");
    increasePage_number("Chapter 1 ");
    increasePage_number("                 ");
    increasePage_number("                 ");
    increasePage_number("                 ");
    increasePage_number("Chapter 2 ");
    increasePage_number("                 ");
    increasePage_number("                 ");
    increasePage_number("                 ");
    increasePage_number("Chapter 3 ");
    increasePage_number("                 ");
    increasePage_number("                 ");
    increasePage_number("                 ");
    increasePage_number("Conclusion");
    return 0;
}


void increasePage_number(const char* text)
{
    static int pageNumber = 1;

    printf( "_____________________________\n"
            "|---------------------------|\n"
            "      %10s    \n", text);
    printf( "|                           |\n"
            "|   page content goes here. |\n"
            "|          More             |\n"
            "|     details below         |\n"
            "|---------------------------|\n"
            "|          page %1d          |\n"
            "|---------------------------|\n", pageNumber);
    printf( "_____________________________\n");
    printf("              |\n");
    printf("              |\n");
    printf("              v\n");
    pageNumber += 1;

}