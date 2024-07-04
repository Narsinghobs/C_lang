// #ifndef EMP_H
// #define EMP_H

#pragma once


struct Employee{
    char *empName;
    int empId;
    int empSal;
    
};

typedef struct Employee EMP;

void getData(EMP *);
void display(EMP);
int findEmpName(EMP *, int, char *);

int findEmpID(EMP *, int, int);
// #endif