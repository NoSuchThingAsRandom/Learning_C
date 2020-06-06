#include <stdio.h>
#include <string.h>
int main() {
    unsigned char  name1 [10]= "Joe";
    unsigned char name2[10] = "Bloggs";
    unsigned char fullname[20]="";

    strncat(fullname,name1,strlen(name1));
    strncat(fullname," ",1);
    strncat(fullname,name2,strlen(name2));

    printf("%s\n", fullname); // should print "Joe Bloggs"
}