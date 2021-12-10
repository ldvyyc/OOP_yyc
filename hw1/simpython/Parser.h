#ifndef PARSER_h
#define PARSER_h
#include <string>
using namespace std;
class Parser
{
public:
    string typ1 = "usage: ./main [--help] [--one ONE] [--two TWO] [--three THREE]";
    string typ2 = "optional arguments:";
    string typ3 = " --help   show this help message and exit";
    string typ4 = " --one ONE   First number";
    string typ5 = " --two TWO   Next number";
    string typ6 = " --three THREE   Third number";
    string wrongc = "./main: error: unrecognized arguments: ";
    string missingc1 = "./main: error: argument ";
    string missingc2 = ": expected an argument";
    string weitianjia = "./main: error: unrecognized arguments: ";
    string notz = ": invalid int value: '";
    string number1;
    string number2;
    string number3;
    string num1;
    string num2;
    string num3;
    int x1;
    int x2;
    int x3;
    void add_argument(string a, int x1, string b);
    int init(int c, char *d[]);
    int get_argument(string e);
};

#endif