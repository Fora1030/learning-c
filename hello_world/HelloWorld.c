// #include <stdlib.h>
#include <stdio.h>
#include <windows.h>

void printWord(){
	printf("Hello world from a function!\n");
}

void printWordWithParam(char* word){
	printf("%s", word);
}
int main()
{
	printf("Hello World\n");
	system("cmd.exe");	
	printWord();
	printWordWithParam("Parameter passed!\n");
	return 0;
}


