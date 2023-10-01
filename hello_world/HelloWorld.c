#include <stdio.h>

void printWord(){
	printf("Hello world from a function!\n");
}

void printWordWithParam(char* word){
	printf("%s", word);
}
int main()
{
	printf("Hello World\n");
	printWord();
	printWordWithParam("Parameter passed!\n");
	return 0;
}


