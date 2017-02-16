#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h>  
#include <assert.h> 

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

int main(int argc, char* argv[]){
    // Do stuff.
    return 0;
}
