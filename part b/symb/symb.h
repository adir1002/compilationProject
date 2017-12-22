#ifndef SEMANTIC_H
#define SEMANTIC_H


/*
Potential fail here
It may not recognize the folder.
*/
#include "../ast/print_ast.h"


typedef struct symbTable{
    int type;
    char* name;
    int scope;
    bool m7;
    bool m8;
    // if scope increased
    struct symbTable* child;
    struct symbTable* parent;
    struct symbTable* next;
    struct symbTable* before;
}symbTable;

static symbTable** smt;
static symbTable* head;
static symbTable* helper1;
static symbTable* helper2;
static int lastType;
/*
TODO: Function that free all memory.
*/

void returnTheSmtPointerToTheBeginning();
int lookup(symbTable* looker);
void buildSymbTable(node* root,int nest);
void printSymbTable();
void init();
void testingAfterSymbolTableBuiltUp();
int getVariableType(symbTable* local1);
int getProcedureNumber(char* p);
int getFunctionType(symbTable* p);
void getThisPointerToTheBeginning(symbTable* takeMeBack);


/*Mission one*/
void checkIfMainDoseNotExist();
/*Mission two*/
void checkIfMainGetArguments();
/*Mission three*/
void thereAreNoTwoFunctionsWithTheSameNameInTheScope();
/*Mission four*/
void theAreNoTwoVariablesWithTheSameNmaeInTheScope();
/*Mission five*/
void functionsDefinedBeforeTheyHaveBeenCalled();
/*Mission six*/
void variablesAreDefinedBeforeUsed();
/*Mission seven*/
void numberOfArgumentsInTheCallingFunctionAreFits();
/*Mission eight*/
void typeOfArgumentsInTheCallingFunctionAreFits();
/*Mission nine*/
void returnValueIsTheSameAsTheFunctioType();
/*Mission ten*/
void returnTypeEquelToIdentifierType();
/*Mission eleven*/
void expressionInIfStatmentIsBoolean(symbTable* p);
/*Mission twelfth*/
void theConditionTypeInForLoopIsBoolean(symbTable* p);
/*Mission thirteen*/
void variablesInStringIndexAreIntegers(symbTable* p);
/*Mission fourteen*/
void typeBeforeIndexIsString(symbTable* p);
/*Mission fiveteen*/
void variablesFromTheBothAssignmentSideAreTheSame(symbTable* p);
/*Mission sixteen*/
void aBunchOfSemantics(symbTable* p);
/*Mission eighteen*/
void ampersandIsJustBeforefitsType(symbTable* p);
/*Mission nineteen*/
void pointerJustForPointer(symbTable* p);
#endif