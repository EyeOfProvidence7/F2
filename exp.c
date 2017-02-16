#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h>  
#include <assert.h> 

#define MAXINPUT 100
#define MAXIDENT 10

/*If we are going to solve equations later, being able to work with
the coefficients directly will be useful, so we use a struct
*/
typedef struct Variable {
	char name[100]; //assumed max length of name, will implement with malloc later
	int coefficient;
} Variable;
	
//From scanner.h
typedef enum TokenType { 
  Number,
  Identifier,
  Symbol
} TokenType;

typedef union Token {
  int number;
  Variable identifier;
  char symbol;
} Token;

//From scanner.h
typedef struct ListNode *List;

//From scanner.h
typedef struct ListNode {
  TokenType tt;
  Token t;
  List next;
} ListNode;

//Reads in an arithmetical expression into a char array.
char* readInput(){
    int strLen = MAXINPUT;
    int c = getchar();
    int i = 0;
    char *s = malloc((strLen+1)*sizeof(char));
    assert(s != NULL);
    while(c != '\n'){
        s[i] = c;
        i++;
        if (i >= strLen){
            strLen = 2*strLen;
            s = realloc(s, (strLen+1)*sizeof(char));
            assert(s != NULL);
        }
        c = getchar();
    }
    s[i] = '\0';
    return s;
}s

int main(int argc, char* argv[]){
    return 0;
}
