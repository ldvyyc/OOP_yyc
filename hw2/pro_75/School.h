#ifndef __SCHOOL__
#define __SCHOOL__
#include <iostream>
#include "Student.h"
#include <string>
using namespace std;
//extern int count = 0;
class School
{
public:
    int count, num,riqi;
    string out;
    string outt = "Not Found", con = "-", endd = "\n";
    School(int n);
    string nameee[1000], iddd[1000], gradeee[1000], provvv[1000], timeee[1000];
    int iddd1[1000],timeee1[1000];
    char provvv1[1000];
    void add_member(Student A);
    string &operator[](int b)
    {
        int riqi1=0;
        int xuehao1=0;
        int fin = 0;
        int flag = 0;
        //        string qq = to_string(b);
        //        return qq;
        //cout << num << endl << qq << endl;
        for (int i = 0; i < num; i++)
        {
            if (iddd1[i] == b)
            {
                flag++;
                if (timeee1[i] > riqi1) {
                    fin = i;
                    riqi1 = timeee1[i];
                }
                if (timeee1[i] == riqi1 && iddd1[i]>xuehao1) {
                    fin = i;
                    xuehao1 = iddd1[i];
                }
            }
        }
        if (flag > 0){
            out = nameee[fin];
                out.append(con);
                out.append(timeee[fin]);
                out.append(con);
                out.append(gradeee[fin]);
                out.append(con);
                out.append(iddd[fin]);
                out.append(endd);
                //cout << out << endl;
                return out;
        }
        return outt;
    }
    string &operator[](char x)
    {
        int riqi1=0;
        int xuehao1=0;
        int fin = 0;
        int flag = 0;
        for (int i = 0; i < num; i++)
        {
            if (provvv1[i] == x)
            {
                flag++;
                if (timeee1[i] > riqi1) {
                    fin = i;
                    riqi1 = timeee1[i];
                }
                if (timeee1[i] == riqi1 && iddd1[i]>xuehao1) {
                    fin = i;
                    xuehao1 = iddd1[i];
                }
            }
        }
        if (flag > 0){
            out = nameee[fin];
                out.append(con);
                out.append(timeee[fin]);
                out.append(con);
                out.append(gradeee[fin]);
                out.append(con);
                out.append(iddd[fin]);
                out.append(endd);
                //cout << out << endl;
                return out;
        }
        return outt;
    }
    string &operator[](string y)
    {
        int riqi1=0;
        int xuehao1=0;
        int fin = 0;
        int flag = 0;
        for (int i = 0; i < num; i++)
        {
            if (nameee[i].compare(y) == 0)
            {
                flag++;
                if (timeee1[i] > riqi1) {
                    fin = i;
                    riqi1 = timeee1[i];
                }
                if (timeee1[i] == riqi1 && iddd1[i]>xuehao1) {
                    fin = i;
                    xuehao1 = iddd1[i];
                }
            }
        }
        if (flag > 0){
            out = nameee[fin];
                out.append(con);
                out.append(timeee[fin]);
                out.append(con);
                out.append(gradeee[fin]);
                out.append(con);
                out.append(iddd[fin]);
                out.append(endd);
                //cout << out << endl;
                return out;
        }
        return outt;
    }
};

#endif