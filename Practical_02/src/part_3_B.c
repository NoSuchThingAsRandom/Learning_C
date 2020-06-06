
#include <stdio.h>
#include <string.h>
int main() {
    unsigned char sentence1[25] = "It's a nice day today. ";
    unsigned char sentence2[25] = "It really is.";
    unsigned char firstbit[30];

    // TODO: use two string manipulation functions to make firstbit
    // sentence1 followed by as much of sentence2 as will fit.
    strncat(firstbit,sentence1,strlen(sentence1));
    strncat(firstbit,sentence2,sizeof(firstbit)-strlen(firstbit));
    printf("%s\n", firstbit); // should print "It's a nice day today. It rea"
    printf("%d\n", sizeof(firstbit)); // should print "It's a nice day today. It rea"
}