#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h>  
#include <assert.h> 

/*If we are going to solve equations later, being able to work with
the coefficients directly will be useful, so we use a struct
*/

typedef enum TokenType { 
  Number,
  Identifier,
  Symbol
} TokenType;


typedef union Token {
  int number;
  char *identifier;
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
    // Do more stuff.
    return 0;
}
