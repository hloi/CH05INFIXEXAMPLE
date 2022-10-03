cmake_minimum_required(VERSION 3.23)
project(CH05INFIXEXAMPLE)

set(CMAKE_CXX_STANDARD 14)

add_executable(CH05INFIXEXAMPLE main.cpp Postfix_Evaluator.cpp Postfix_Evaluator.h Syntax_Error.h Infix_To_Postfix.cpp Infix_To_Postfix.h)
