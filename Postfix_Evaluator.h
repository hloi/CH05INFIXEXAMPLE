//
// Created by hloi on 10/3/2022.
//

#ifndef CH05INFIXEXAMPLE_POSTFIX_EVALUATOR_H
#define CH05INFIXEXAMPLE_POSTFIX_EVALUATOR_H
#include <stack>
#include <string>
#include "Syntax_Error.h"


class Postfix_Evaluator {
// Public member functions
public:
/** Evaluates a postfix expression.
@param expression The expression to be evaluated
@return The value of the expression
@throws Syntax_Error if a syntax error is detected
*/
    int eval(const std::string& expression);
// Private member functions
private:
/** Evaluates the current operator.
This function pops the two operands off the operand
stack and applies the operator.
@param op A character representing the operator
@throws Syntax_Error if top is attempted on an empty stack
*/
    int eval_op(char op);
/** Determines whether a character is an operator.
@param ch The character to be tested
@return true if the character is an operator
*/
    bool is_operator(char ch) const {
        return OPERATORS.find(ch) != std::string::npos;
    }
// Data fields
    static const std::string OPERATORS;
    std::stack<int> operand_stack;
};

#endif //CH05INFIXEXAMPLE_POSTFIX_EVALUATOR_H
