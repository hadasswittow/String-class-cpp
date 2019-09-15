//
// Created by hadasswittow on 9/15/19.
//

#ifndef STRINGEXE_MYSTRING_H
#define STRINGEXE_MYSTRING_H

#include <iostream>
#include <cstddef>
#include "stringFunctions.h"

class MyString {

public:
    // constructor.
    MyString(char *s = NULL);
    MyString(const MyString &s);
    ~MyString();

    // view function.
    char *getString() const;

    // modify function.
    MyString &operator=(const MyString &);

    // operators
    bool operator==(const MyString &) const;
    MyString operator+(const MyString &);
    void operator+=(const MyString & s);
    MyString operator*(int);
    bool operator>(const MyString &) const;
    bool operator<(const MyString & s) const;
    bool operator!=(const MyString & s) const;
    bool operator>=(const MyString & s) const;
    bool operator<=(const MyString & s) const;

    size_t length()const;
    // print
    void print() const;
private:
    char *str;
    void setString(const char *s);
};


#endif //STRINGEXE_MYSTRING_H
