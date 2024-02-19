%{

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int yylex(void);
void yyerror(const char* msg);
char* int2chr(int);
char* dul2chr(double);
// char* str2chr(char *);
char* get_non_term0(const char *);
char* get_non_term1(const char *, char *);
char* get_non_term2(const char * ,char *, char *);
char* get_non_term3(const char * ,char *, char *, char *);
char* get_non_term4(const char * ,char *, char *, char *, char *);
char* get_non_term5(const char * ,char *, char *, char *, char *, char *);
char* get_non_term6(const char * ,char *, char *, char *, char *, char *, char *);
char* get_non_term7(const char * ,char *, char *, char *, char *, char *, char *, char *);
char* get_non_term8(const char * ,char *, char *, char *, char *, char *, char *, char *,char *);

%}

%union{
    int inte;
    double doub;
    char* str;
}

%token <str> OP BREAK CONTINUE RET FOR DO WHILE SWITCH CASE DEFAULT TYPE ID CHAR STRING CONST COMMA SEMICOLON COLON LOGIC_OR LOGIC_AND BITWISE_OR BITWISE_AND EQUAL N_EQUAL G_EQUAL L_EQUAL GREATER LESS MINUS PLUS MUL DIV MOD NEG INC DEC  L_BRKT R_BRKT L_CURV R_CURV L_PARA R_PARA IF ELSE
%token <str> ASSIGN SHORT SIGN
%token <inte> INTEGER
%token <doub> DOUBLE

%type <str> stmt_for for_ctnt expr_
%type <str> stmt_while
%type <str> stmt_switch swth_clauses swth_clause
%type <str> stmt_if 
%type <str> stmt_expr
%type <str> comp_stmt stmts stmt var_decl
%type <str> fn_def fn_head
%type <str> fn_decl fn_params fn_param
%type <str> const_decl const_idents const_ident
%type <str> array_decl arrays array_init array arr_brkts arr_brkt arr_ctnts arr_ctnt
%type <str> scalar_decl idents ident_init
%type <str> expr
%type <str> e_logic_or e_logic_and e_bitwise_or e_bitwise_and
%type <str> e_equal e_greater
%type <str> e_add_sub e_mul_div_mod
%type <str> e_unary
%type <str> e_top
%type <str> brkts_e brkt_e call_fn params

%type <str> plus_minus mul_div_mod inc_dec
%type <str>  VAR LITER cooltype paratype varinc

%start programs
%right ASSIGN
%left LOGIC_OR
%left LOGIC_AND
%left BITWISE_OR
%left BITWISE_AND
%left EQUAL N_EQUAL
%left GREATER LESS G_EQUAL L_EQUAL
%right NEG


%%

programs: programs program
        | program
        ;

program: fn_def { printf("%s", $1); free($1); }
       | fn_decl { printf("%s", $1); free($1); }
       | const_decl { printf("%s", $1); free($1); }
       | array_decl { printf("%s", $1); free($1); }
       | scalar_decl { printf("%s", $1); free($1); }
       ;

stmts: stmts stmt {
        $$ = get_non_term2("", $1, $2);
        }
     | stmt
     ;

stmt: stmt_expr { $$ = get_non_term1("stmt", $1); }
    | stmt_if { $$ = get_non_term1("stmt", $1); }
    | stmt_switch { $$ = get_non_term1("stmt", $1); }
    | stmt_while { $$ = get_non_term1("stmt", $1); }
    | stmt_for { $$ = get_non_term1("stmt", $1); }
    |RET expr SEMICOLON { $$ = get_non_term3("stmt", $1, $2, $3); }
    | RET SEMICOLON { $$ = get_non_term2("stmt", $1, $2); }
    | BREAK SEMICOLON { $$ = get_non_term2("stmt", $1, $2); }
    | CONTINUE SEMICOLON { $$ = get_non_term2("stmt", $1, $2); }
    | var_decl
    | comp_stmt { $$ = get_non_term1("stmt", $1); }
    ;

comp_stmt: L_CURV stmts R_CURV {
             $$ = get_non_term3("", $1, $2, $3);
             }
         | L_CURV R_CURV {
            $$ = get_non_term2("", $1, $2);
             }
         ;

stmt_expr: expr SEMICOLON {
             $$ = get_non_term2("", $1, $2);
             }
         ;

stmt_if: IF L_PARA expr R_PARA comp_stmt ELSE comp_stmt {$$ = get_non_term7("", $1, $2, $3, $4, $5,$6,$7);}
       | IF L_PARA expr R_PARA comp_stmt {$$ = get_non_term5("", $1, $2, $3, $4, $5);}
       ;


stmt_switch: SWITCH L_PARA expr R_PARA L_CURV swth_clauses R_CURV {
               $$ = get_non_term7("", $1, $2, $3, $4, $5, $6, $7);
               }
           | SWITCH L_PARA expr R_PARA L_CURV R_CURV {
               $$ = get_non_term6("", $1, $2, $3, $4, $5, $6);
               }
           ;

swth_clauses: swth_clauses swth_clause {
                $$ = get_non_term2("", $1, $2);
                }
            | swth_clause
            ;

swth_clause: CASE expr COLON stmts {
               $$ = get_non_term4("", $1, $2, $3, $4);
               }
           | CASE expr COLON {
               $$ = get_non_term3("", $1, $2, $3);
               }
           | DEFAULT COLON stmts {
               $$ = get_non_term3("", $1, $2, $3);
               }
           | DEFAULT COLON {
               $$ = get_non_term2("", $1, $2);
           }

stmt_while: WHILE L_PARA expr R_PARA stmt {
              $$ = get_non_term5("", $1, $2, $3, $4, $5);
              }
          | DO stmt WHILE L_PARA expr R_PARA SEMICOLON {
              $$ = get_non_term7("", $1, $2, $3, $4, $5, $6, $7);
              }
          ;

stmt_for: FOR L_PARA for_ctnt R_PARA stmt {
            $$ = get_non_term5("", $1, $2, $3, $4, $5);
            }
        ;

for_ctnt: expr_ SEMICOLON expr_ SEMICOLON expr_ {
            $$ = get_non_term5("", $1, $2, $3, $4, $5);
            }
        ;

expr_: expr
     | /* empty */ { $$ = get_non_term0(""); }
     ;




var_decl: const_decl
        | array_decl
        | scalar_decl
        ;

fn_def: TYPE fn_head comp_stmt {
           $$ = get_non_term3("func_def", $1, $2, $3);
           }
        |CONST TYPE fn_head comp_stmt {
           $$ = get_non_term4("func_def", $1, $2, $3,$4);
           }
        |CONST cooltype fn_head comp_stmt {
           $$ = get_non_term4("func_def", $1, $2, $3,$4);
           }
        |cooltype fn_head comp_stmt {
           $$ = get_non_term3("func_def", $1, $2, $3);
           }
      
      ;

fn_decl: TYPE fn_head SEMICOLON {
           $$ = get_non_term3("func_decl", $1, $2, $3);
           }
        |cooltype fn_head SEMICOLON {
           $$ = get_non_term3("func_decl", $1, $2, $3);
           }
        |CONST cooltype fn_head SEMICOLON {
           $$ = get_non_term4("func_decl", $1, $2, $3,$4);
           }
       
       ;

fn_head: ID L_PARA fn_params R_PARA {
           $$ = get_non_term4("", $1, $2, $3, $4);
           }
        |MUL ID L_PARA fn_params R_PARA {
           $$ = get_non_term5("", $1, $2, $3, $4, $5);
           }
        ;

fn_params: fn_params COMMA fn_param {
             $$ = get_non_term3("", $1, $2, $3);
             }
         | fn_param
         | /* empty */ { $$ = get_non_term0(""); }
         ;

fn_param: TYPE ID {
            $$ = get_non_term2("", $1, $2);
            }
        | TYPE MUL ID{
            $$ = get_non_term3("", $1, $2,$3);
            }
        |cooltype ID{
            $$ = get_non_term2("", $1, $2);
            }
        |CONST cooltype ID{
            $$ = get_non_term3("", $1, $2,$3);
            }
        |cooltype MUL ID{
            $$ = get_non_term3("", $1, $2,$3);
            }
        |CONST cooltype MUL ID{
            $$ = get_non_term4("", $1, $2,$3,$4);
            }
        |CONST TYPE ID {
            $$ = get_non_term3("", $1, $2,$3);
            }
        |CONST TYPE MUL ID{
            $$ = get_non_term4("", $1, $2,$3,$4);
            }
        ;

const_decl: CONST TYPE const_idents SEMICOLON {
              $$ = get_non_term4("scalar_decl", $1, $2, $3, $4);
              }
          ;

const_idents: const_idents COMMA const_ident {
                $$ = get_non_term3("", $1, $2, $3);
                }
            | const_ident
            ;

const_ident: ID ASSIGN expr {
              $$ = get_non_term3("", $1, $2, $3);
              }
            |ID
            ;

array_decl: TYPE arrays SEMICOLON {
              $$ = get_non_term3("array_decl", $1, $2, $3);
              }
            |cooltype arrays SEMICOLON {
              $$ = get_non_term3("array_decl", $1, $2, $3);
              }
            | CONST TYPE arrays SEMICOLON {
              $$ = get_non_term4("array_decl", $1, $2, $3,$4);
              }
            | CONST cooltype arrays SEMICOLON {
              $$ = get_non_term4("array_decl", $1, $2, $3,$4);
              }
          ;


arrays: arrays COMMA array_init {
          $$ = get_non_term3("", $1, $2, $3);
          }
      | array_init
      ;

array_init: array ASSIGN arr_ctnt  {
              $$ = get_non_term3("", $1, $2, $3);
              }
          | array
          ;

array: ID arr_brkts {
         $$ = get_non_term2("", $1, $2);
         }
     ;

arr_brkts: arr_brkts arr_brkt {
             $$ = get_non_term2("", $1, $2);
             }
         | arr_brkt
         ;

arr_brkt: L_BRKT expr R_BRKT {
            $$ = get_non_term3("", $1, $2, $3);
            }



arr_ctnts: arr_ctnts COMMA arr_ctnt {
             $$ = get_non_term3("", $1, $2, $3);
             }
         | arr_ctnt
        
         ;

arr_ctnt: L_CURV arr_ctnts R_CURV {
            $$ = get_non_term3("", $1, $2, $3);
            }
        |expr
        ;

scalar_decl: TYPE idents SEMICOLON {
               $$ = get_non_term3("scalar_decl", $1, $2, $3);
               }
            |cooltype idents SEMICOLON {
               $$ = get_non_term3("scalar_decl", $1, $2, $3);
               }
            
            |CONST cooltype idents SEMICOLON {
               $$ = get_non_term4("scalar_decl", $1, $2, $3, $4);
               }
           ;
cooltype: SIGN SHORT TYPE{
               $$ = get_non_term3("", $1, $2, $3);
               };
            |SIGN TYPE{
               $$ = get_non_term2("", $1, $2);
               };
            |SHORT TYPE{
               $$ = get_non_term2("", $1, $2);
               };
            |SIGN SHORT{
               $$ = get_non_term2("", $1, $2);
               };
            |SHORT{
               $$ = get_non_term1("", $1);
               };
            |SIGN{
               $$ = get_non_term1("", $1);
               };
            |CONST{
               $$ = get_non_term1("", $1);
               };
            ;


idents: idents COMMA ident_init {
                $$ = get_non_term3("", $1, $2, $3);
                }
            | ident_init
            ;

ident_init: ID ASSIGN expr {
              $$ = get_non_term3("", $1, $2, $3);
              }
          | ID
          | MUL ID{
              $$ = get_non_term2("", $1, $2);
              }
          ;

expr: VAR ASSIGN expr {
        $$ = get_non_term3("expr", $1, $2, $3);
        }
    | e_logic_or
    ;

e_logic_or: e_logic_or LOGIC_OR e_logic_and {
              $$ = get_non_term3("expr", $1, $2, $3);
              }
          | e_logic_and
          ;

e_logic_and: e_logic_and LOGIC_AND e_bitwise_or {
              $$ = get_non_term3("expr", $1, $2, $3);
              }
           | e_bitwise_or
           ;

e_bitwise_or: e_bitwise_or BITWISE_OR e_bitwise_and {
              $$ = get_non_term3("expr", $1, $2, $3);
              }
            | e_bitwise_and
            ;

e_bitwise_and: e_bitwise_and BITWISE_AND e_equal {
                 $$ = get_non_term3("expr", $1, $2, $3);
                 }
             | e_equal
             
             ;

e_equal: e_equal EQUAL e_greater {
           $$ = get_non_term3("expr", $1, $2, $3);
           }
        | e_equal N_EQUAL e_greater {
           $$ = get_non_term3("expr", $1, $2, $3);
           }
        | e_greater
        ;

e_greater: e_greater GREATER e_add_sub {
             $$ = get_non_term3("expr", $1, $2, $3);
             }
         | e_greater G_EQUAL e_add_sub {
             $$ = get_non_term3("expr", $1, $2, $3);
             }
         | e_greater LESS e_add_sub {
             $$ = get_non_term3("expr", $1, $2, $3);
             }
         | e_greater L_EQUAL e_add_sub {
             $$ = get_non_term3("expr", $1, $2, $3);
             }
         | e_add_sub
         ;

e_add_sub: e_add_sub plus_minus e_mul_div_mod {
             $$ = get_non_term3("expr", $1, $2, $3);
             }
         | e_mul_div_mod
         ;

e_mul_div_mod: e_mul_div_mod mul_div_mod e_unary {
                 $$ = get_non_term3("expr", $1, $2, $3);
                 }
            | paratype
            |MUL paratype {$$ = get_non_term2("expr", $1, $2);}

        |BITWISE_AND e_unary{$$ = get_non_term2("expr", $1, $2);}
             | e_unary
             ;
paratype:L_PARA TYPE R_PARA e_unary{
        $$ = get_non_term4("expr", $1, $2, $3,$4);
        }
    | L_PARA cooltype R_PARA e_unary{
        $$ = get_non_term4("expr", $1, $2, $3,$4);
        }
        | L_PARA TYPE MUL R_PARA e_unary{
        $$ = get_non_term5("expr", $1, $2, $3,$4,$5);
        }
    | L_PARA cooltype MUL R_PARA e_unary{
        $$ = get_non_term5("expr", $1, $2, $3,$4,$5);
        }
        | L_PARA CONST cooltype MUL R_PARA e_unary{
        $$ = get_non_term6("expr", $1, $2, $3,$4,$5,$6);
        }
        | L_PARA CONST TYPE MUL R_PARA e_unary{
        $$ = get_non_term6("expr", $1, $2, $3,$4,$5,$6);
        }
        | L_PARA CONST cooltype R_PARA e_unary{
        $$ = get_non_term5("expr", $1, $2, $3,$4,$5);
        }
        | L_PARA CONST TYPE R_PARA e_unary{
        $$ = get_non_term5("expr", $1, $2, $3,$4,$5);
        }
        ;

e_unary: NEG e_unary {
           $$ = get_non_term2("expr", $1, $2);
           }
       | plus_minus e_unary %prec NEG {
           $$ = get_non_term2("expr", $1, $2);
           }
       | inc_dec VAR %prec NEG {
           $$ = get_non_term2("expr", $1, $2);
           }
        
        
       | e_top
       ;

e_top: VAR inc_dec{
         $$ = get_non_term2("expr", $1, $2);
         }
     | call_fn {
         $$ = get_non_term1("expr", $1);
         }
     | VAR
     | LITER {
         $$ = get_non_term1("", $1);
         }
     | L_PARA expr R_PARA {
         $$ = get_non_term3("expr", $1, $2, $3);
         }
     ;

plus_minus: PLUS
          | MINUS
          | OP
          ;

mul_div_mod: MUL
           | DIV
           | MOD
           ;

inc_dec: INC
       | DEC
       ;

call_fn: VAR L_PARA params R_PARA {
           $$ = get_non_term4("", $1, $2, $3, $4);
           }
       ;

params: params COMMA expr {
          $$ = get_non_term3("", $1, $2, $3);
          }
      | expr
      | /* empty */ { $$ = get_non_term0(""); }
      ;

VAR: ID brkts_e {
       $$ = get_non_term2("expr", $1, $2);
       }
   | ID {$$ = get_non_term1("expr", $1);}//
   |MUL varinc {$$ = get_non_term2("expr", $1,$2);}//
   ;
varinc: VAR inc_dec{ $$ = get_non_term2("expr", $1, $2);}
    



LITER: INTEGER {$$ = get_non_term1("expr", int2chr($1)); }
     | DOUBLE {$$ = get_non_term1("expr", dul2chr($1));}
     | CHAR {$$ =get_non_term1("expr",$1);}
     | STRING  {$$ =get_non_term1("expr",$1);}
     ;


brkts_e: brkts_e brkt_e {$$ = get_non_term2("", $1, $2);}
       | brkt_e
       ;

brkt_e: L_BRKT expr R_BRKT {
    $$ = get_non_term3("", $1, $2, $3);
};



%%

int main(void)
{
    yyparse();//
   
    return 0;
}


char* int2chr(int d)
{
    int length = snprintf(NULL, 0, "%d", d) + 1;
    char *ret = (char*)malloc(sizeof(char) * length);
    snprintf(ret, length, "%d", d);
    return ret;
}

char* dul2chr(double f)
{
    int length = snprintf(NULL, 0, "%lf", f) + 1;
    char *ret = (char*)malloc(sizeof(char) * length);
    snprintf(ret, length, "%lf", f);
    return ret;
}

/* char* str2chr(char* s)
{
    char* ret = (char*)malloc(sizeof(char) * 2);
    ret[1] = '\x00';

    if (strcmp(s + 1, "\\n") == 0)
    {
        ret[0] = '\n';
    }
    else if (strcmp(s + 1, "\\t") == 0)
    {
        ret[0] = '\t';
    }
    else if (strcmp(s + 1, "\\\\") == 0)
    {
        ret[0] = '\\';
    }
    else if (strcmp(s + 1, "\\\'") == 0)
    {
        ret[0] = '\'';
    }
    else
    {
        ret[0] = s[1];
    }

    free(s);
    return ret;
} */


char* get_non_term0(const char* tag)
{
    int len = 1;

    if (strcmp(tag, "") != 0)//not 空
    {
        len += (strlen(tag) * 2 + 5);
    }

    char* ret = (char*)malloc(sizeof(char) * len);

    if (strcmp(tag, "") != 0)//not 空
    {
        sprintf(ret, "<%s></%s>", tag, tag);
    }

    ret[len - 1] = '\0';

    return ret;
}

char *get_non_term1(const char *tag, char *s1)
{
    int len = strlen(s1)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s</%s>", tag, s1, tag);
    else
        sprintf(ret, "%s", s1);

    free(s1);

    ret[len - 1] = '\0';
    return ret;
}

char *get_non_term2(const char *tag, char *s1, char *s2)
{
    int len = strlen(s1)+strlen(s2)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s</%s>", tag, s1, s2, tag);
    else
        sprintf(ret, "%s%s", s1, s2);

    free(s1);
    free(s2);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term3(const char *tag, char *s1, char *s2, char *s3)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s</%s>", tag, s1, s2, s3, tag);
    else
        sprintf(ret, "%s%s%s", s1, s2, s3);

    free(s1);
    free(s2);
    free(s3);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term4(const char *tag, char *s1, char *s2, char *s3, char *s4)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+strlen(s4)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s%s</%s>", tag, s1, s2, s3, s4, tag);
    else
        sprintf(ret, "%s%s%s%s", s1, s2, s3, s4);

    free(s1);
    free(s2);
    free(s3);
    free(s4);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term5(const char *tag, char *s1, char *s2, char *s3, char *s4, char *s5)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+strlen(s4)+strlen(s5)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s%s%s</%s>", tag, s1, s2, s3, s4, s5, tag);
    else
        sprintf(ret, "%s%s%s%s%s", s1, s2, s3, s4, s5);

    free(s1);
    free(s2);
    free(s3);
    free(s4);
    free(s5);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term6(const char *tag, char *s1, char *s2, char *s3, char *s4, char *s5, char *s6)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+strlen(s4)+strlen(s5)+strlen(s6)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s%s%s%s</%s>", tag, s1, s2, s3, s4, s5, s6, tag);
    else
        sprintf(ret, "%s%s%s%s%s%s", s1, s2, s3, s4, s5, s6);

    free(s1);
    free(s2);
    free(s3);
    free(s4);
    free(s5);
    free(s6);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term7(const char *tag, char *s1, char *s2, char *s3, char *s4, char *s5, char *s6, char *s7)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+strlen(s4)+strlen(s5)+strlen(s6)+strlen(s7)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s%s%s%s%s</%s>", tag, s1, s2, s3, s4, s5, s6, s7, tag);
    else
        sprintf(ret, "%s%s%s%s%s%s%s", s1, s2, s3, s4, s5, s6, s7);

    free(s1);
    free(s2);
    free(s3);
    free(s4);
    free(s5);
    free(s6);
    free(s7);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term8(const char *tag, char *s1, char *s2, char *s3, char *s4, char *s5, char *s6, char *s7,char *s8)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+strlen(s4)+strlen(s5)+strlen(s6)+strlen(s7)+strlen(s8)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s%s%s%s%s%s</%s>", tag, s1, s2, s3, s4, s5, s6, s7,s8, tag);
    else
        sprintf(ret, "%s%s%s%s%s%s%s%s", s1, s2, s3, s4, s5, s6, s7,s8);

    free(s1);
    free(s2);
    free(s3);
    free(s4);
    free(s5);
    free(s6);
    free(s7);
    free(s8);

    ret[len - 1] = '\0';
    return ret;
}
