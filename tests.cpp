//
// Created by hadasswittow on 9/15/19.
//

#include "tests.h"
void testConstructors(){
    MyString string((char*)"Hi There");
    MyString string1(string);
    string.print();
    string1.print();
}
void testComperators() {
    MyString string1((char*)"Hi There");
    MyString string2(string1);
    string1.print();
    std::cout<<(string1==string2)<<std::endl;
    std::cout<<(string1>string2)<<std::endl;
    std::cout<<(string1>=string2)<<std::endl;
    std::cout<<(string1<string2)<<std::endl;
    std::cout<<(string1<=string2)<<std::endl;
    std::cout<<(string1!=string2)<<std::endl;
}
void testOperators(){
    MyString string1((char*)"Hi There ");
    MyString string2=string1;
    string2.print();
    MyString string3((char*)"Hadass Wittow");
    MyString string4=string2+string3;
    string4.print();
    string1+=string3;
    string1.print();
    MyString string5=string2*3;
    string5.print();

}
void testLength(){
    MyString string3((char*)"Hadass Wittow");
    std::cout<<string3.length()<<std::endl;
}