#include <stdio.h>
#include <string.h>

struct date {
    int month;
    int day;
    int year;
};

struct student {
    char name[100];
    struct date birthday;
};

struct student mhs;

int main () {
    strcpy(mhs.name, "Aziz Fatih Aryasuta");
    mhs.birthday.month = 11;
    mhs.birthday.day = 11;
    mhs.birthday.year = 2007;

    printf("Name     : %s\n", mhs.name);
    printf("Birthday : %d-%d-%d\n", mhs.birthday.month, mhs.birthday.day, mhs.birthday.year);
}