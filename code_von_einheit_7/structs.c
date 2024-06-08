#include <stdio.h>
// datentyp variable_name {...} 
typedef struct
{
    int id;
    char firstLetterOfName;
}structs;
int main() {
    structs s, st;
    s.id=0;
    s.firstLetterOfName='A';
    st.id = 1;
    st.firstLetterOfName='B';
    printf("s.id=%d, s.fLON=%c", s.id, s.firstLetterOfName);
    return 0;
}