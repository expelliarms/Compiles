#include "y.tab.h"
#include <stdio.h>
extern int yylex();
extern char *yytext;
main(){
  int token;
  while((token = yylex())!=0){
    switch(token){
    case AUTO_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case ENUM_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case RESTRICT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case UNSIGNED_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case BREAK_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case EXTERN_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case RETURN_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case VOID_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case CASE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case FLOAT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case SHORT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case VOLATILE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case CHAR_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case FOR_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case SIGNED_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case WHILE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case CONST_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case GOTO_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case SIZEOF_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case BOOL_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case CONTINUE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case IF_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case STATIC_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case COMPLEX_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case DEFAULT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case INLINE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case STRUCT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case IMAGINARY_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case DO_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case INT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case SWITCH_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case DOUBLE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case LONG_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case TYPEDEF_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case ELSE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case REGISTER_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case UNION_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case IDENTIFIER : printf("<IDENTIFIER, %d, %s>\n",token,yytext);
      break;
    case INTEGER_CONSTANT : printf("<INTEGER, %d, %s>\n",token,yytext);
      break;
    case FLOAT_CONSTANT :  printf("<FLOAT, %d, %s>\n",token,yytext);
      break;
    case ENUMERATION : printf("<ENUMERATION, %d, %s>\n",token,yytext);
      break;
    case CHAR_CONSTANT : printf("<CHARACTER CONSTANT, %d, %s>\n",token,yytext);
      break;
    case STRING_LITERAL : printf("<STRING LITERAL, %d, %s>\n",token,yytext);
      break;
    case LEFT_SHIFT_EQUAL : printf("<LEFT_SHIFT_EQUAL, %d, %s>\n",token,yytext);
      break;
    case ELLIPSES : printf("<ELLIPSES, %d, %s>\n",token,yytext);
      break;
    case RIGHT_SHIFT_EQUAL : printf("<RIGHT_SHIFT_EQUAL, %d, %s>\n",token,yytext);
      break;
    case VAL_AT : printf("<VAL_AT, %d, %s>\n",token,yytext);
      break;
    case PLUS_PLUS : printf("<PLUS_PLUS, %d, %s>\n",token,yytext);
      break;
    case MINUS_MINUS : printf("<MINUS_MINUS, %d, %s>\n",token,yytext);
      break;
    case LEFT_SHIFT : printf("<LEFT_SHIFT, %d, %s>\n",token,yytext);
      break;
    case RIGHT_SHIFT : printf("<RIGHT_SHIFT, %d, %s>\n",token,yytext);
      break;
    case LESS_EQUAL : printf("<LESS_EQUAL, %d, %s>\n",token,yytext);
      break;
    case GREATER_EQUAL : printf("<GREATER_EQUAL, %d, %s>\n",token,yytext);
      break;
    case EQUAL_EQUAL : printf("<EQUAL_EQUAL, %d, %s>\n",token,yytext);
      break;
    case NOT_EQUAL : printf("<NOT_EQUAL, %d, %s>\n",token,yytext);
      break;
    case LOGICAL_AND : printf("<LOGICAL_AND, %d, %s>\n",token,yytext);
      break;
    case LOGICAL_OR : printf("<LOGICAL_OR, %d, %s>\n",token,yytext);
      break;
    case STAR_EQUAL : printf("<STAR_EQUAL, %d, %s>\n",token,yytext);
      break;
    case BY_EQUAL : printf("<BY_EQUAL, %d, %s>\n",token,yytext);
      break;
    case PERCENT_EQUAL : printf("<PERCENT_EQUAL, %d, %s>\n",token,yytext);
      break;
    case PLUS_EQUAL : printf("<PLUS_EQUAL, %d, %s>\n",token,yytext);
      break;
    case MINUS_EQUAL : printf("<MINUS_EQUAL, %d, %s>\n",token,yytext);
      break;
    case AND_EQUAL : printf("<AND_EQUAL, %d, %s>\n",token,yytext);
      break;
    case BITWISENOT_EQUAL : printf("<BITWISENOT_EQUAL, %d, %s>\n",token,yytext);
      break;
    case OR_EQUAL : printf("<OR_EQUAL, %d, %s>\n",token,yytext);
      break;
    case '[' : printf("<SQUARE OPEN, %d, %s>\n",token,yytext);
      break;
    case ']' : printf("<SQUARE CLOSED, %d, %s>\n",token,yytext);
      break;
    case '(' : printf("<C OPEN, %d, %s>\n",token,yytext);
      break;
    case ')': printf("<C CLOSED, %d, %s>\n",token,yytext);
      break;
    case '{' : printf("<CURLY OPEN, %d, %s>\n",token,yytext);
      break;
    case '}' : printf("<CURLY CLOSED, %d, %s>\n",token,yytext);
      break;
    case '.' : printf("<DOT, %d, %s>\n",token,yytext);
      break;
    case '&' : printf("<BITWISE AND, %d, %s>\n",token,yytext);
      break;
    case '*' : printf("<STAR, %d, %s>\n",token,yytext);
      break;
    case '+' : printf("<PLUS, %d, %s>\n",token,yytext);
      break;
    case '-' : printf("<MINUS, %d, %s>\n",token,yytext);
      break;
    case '~' : printf("<BITWISE COMPLEMENT, %d, %s>\n",token,yytext);
      break;
    case '!' : printf("<LOGICAL NOT, %d, %s>\n",token,yytext);
      break;
    case '/' : printf("<DIVIDE, %d, %s>\n",token,yytext);
      break;
    case '%' : printf("<MODULO, %d, %s>\n",token,yytext);
      break;
    case '<' : printf("<LESS THAN, %d, %s>\n",token,yytext);
      break;
    case '>' : printf("<GREATER THAN, %d, %s>\n",token,yytext);
      break;
    case '^' : printf("<NOT, %d, %s>\n",token,yytext);
      break;
    case '|' : printf("<BITIWSE OR, %d, %s>\n", token,yytext);
      break;
    case '?' : printf("<TERNARY, %d, %s>\n",token,yytext);
      break;
    case ':' : printf("<COLON, %d, %s>\n",token,yytext);
      break;
    case ';' : printf("<TERMINATOR, %d, %s>\n",token,yytext);
      break;
    case '=' : printf("<EQUALS, %d, %s>\n",token,yytext);
      break;
    case ',' : printf("<COMMA, %d, %s>\n",token,yytext);
      break;
    case '#' : printf("<HASHTAG, %d, %s>\n",token,yytext);
      break;
    case SINGLE_COMMENT : printf("<SINGLE COMMENT, %d, %s>\n",token,yytext);
      break;
    case MULTI_COMMENT : printf("<MULTI COMMENT, %d, %s>\n",token,yytext);
      break;
    }
  }
}
