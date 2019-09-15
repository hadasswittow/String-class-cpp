//
// Created by hadasswittow on 9/15/19.
//

#include "MyString.h"

//----------------------- constructor and destructor---------------------
MyString::MyString(char *s) {
    setString(s);
}

MyString::MyString(const MyString &s) {
    setString(s.getString());
}

MyString::~MyString() {
    delete[] str;
    str = NULL;
}

//------------------------- get and set----------------------
char *MyString::getString() const {
    return str;
}

void MyString::setString(const char *s) {
    if (s) {
        size_t len = strlen(s) + 1;
        str = new char[len];
        strncopy(str, s, len);
    } else str = NULL;
}

///-------------------------------- operators---------------------------------------


MyString &MyString::operator=(const MyString &s) {
    if (str!= NULL)
        delete[] str;
    setString(s.getString());
    return *this;
}

MyString MyString::operator+(const MyString &s) {
    size_t mySize = strlen(str);
    size_t otherSize = strlen(s.getString());
    char *temp = new char[mySize + otherSize + 1];
    strcopy(temp, str);
    strCat(temp, s.getString());
    MyString x(temp);
    delete [] temp;
    return x;
}

void MyString::operator+=(const MyString &s) {
    MyString temp = *this + s;
    *this = temp;
}

MyString MyString::operator*(const int num) {
    size_t len = strlen(str);
    char *temp = new char[len * num + 1];
    for (int i = 0; i < num; i++)
        strncopy(temp + i * len, str, len + 1);
    MyString s(temp);
    delete [] temp;
    return s;
}

bool MyString::operator==(const MyString &s) const {
    return !strcompare(str, s.getString());
}

bool MyString::operator>(const MyString &s) const {
    return strcompare(str, s.getString()) > 0;
}

bool MyString::operator<(const MyString &s) const {
    return strcompare(str, s.getString()) < 0;
}

bool MyString::operator!=(const MyString &s) const {
    return (strcompare(str, s.getString()));
}

bool MyString::operator>=(const MyString &s) const {
    return (strcompare(str, s.getString())) >= 0;
}

bool MyString::operator<=(const MyString &s) const {
    return ((strcompare(str, s.getString())) <= 0);
}

//-------------------- a few more functions----------------
void MyString::print() const {
    if (str) std::cout << str << std::endl;
}


size_t MyString::length() const {
    return strlen(str);
}