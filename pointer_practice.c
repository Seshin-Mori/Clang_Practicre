#include <stdio.h>
#include <string.h>
struct Human
{
    int age;
    char name[256];
    char country[256];
    char job[256];
    char skill[256];
};

void setName(struct Human *p);
void setCountry(struct Human *p);
void setJob(struct Human *p);
void setSkill(struct Human *p);

int main()
{
    struct Human human_a;

    setName(&human_a);
    setCountry(&human_a);
    setJob(&human_a);
    setSkill(&human_a);

    printf("%s, %s, %s, %s\n",human_a.name,human_a.country,human_a.job,human_a.skill);
    return 0;
}

void setName(struct Human *p) {
    strcpy(p->name, "Mori");
};
void setCountry(struct Human *p){
    strcpy(p->country,"Japan");
};
void setJob(struct Human *p){   
    strcpy(p->job, "Programmer");
};
void setSkill(struct Human *p){
    strcpy(p->skill, "C Language");
};