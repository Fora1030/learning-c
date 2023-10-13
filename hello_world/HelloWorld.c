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
	system("C:/Program Files (x86)/Microsoft Office/root/Office16/WINWORD.EXE");	
	printWord();
	printWordWithParam("Parameter passed!\n");
	return 0;
}


