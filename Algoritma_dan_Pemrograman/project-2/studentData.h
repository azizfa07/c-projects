// studentData.h
#ifndef STUDENTDATA_H
#define STUDENTDATA_H

typedef struct {
    int id;
    int nis;
    int presentNumber;
    char name[100];
    char address[100];
    char classroom[100];
} student;

extern student studentList[100];
extern int numberOfStudents;

#endif