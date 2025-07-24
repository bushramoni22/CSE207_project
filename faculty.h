#ifndef FACULTY_H
#define FACULTY_H
enum designation{
    LECTURER,
   SENIOR_LECTURER,
   ASSISTANT_PROFESSOR,
   PROFESSOR,

};
   

typedef struct faculty{
    char *name;
    char *id; 
    int designation ;
}faculty;
void add_faculty();


#endif