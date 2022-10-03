//
// Created by hloi on 10/3/2022.
//

#ifndef CH05INFIXEXAMPLE_SYNTAX_ERROR_H
#define CH05INFIXEXAMPLE_SYNTAX_ERROR_H

#include <stdexcept>
class Syntax_Error : public std::invalid_argument {
public:
    Syntax_Error(std::string msg) : std::invalid_argument(msg) {}
};

#endif //CH05INFIXEXAMPLE_SYNTAX_ERROR_H
