#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    }pokemon;

    //nesting 1
    typedef struct legendarypokemon{
        pokemon normal;   //all attributes of pokemon are used 
        char ability[10];
    }legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp=120;
    mewtwo.normal.attack=90;
    mewtwo.normal.speed=130;
    strcpy(mewtwo.normal.name,"mewtwo");
    mewtwo.normal.tier='A';

    //nesting 2
    typedef struct godpokemon{
        legendarypokemon legend;  //attributes of legendary pokemon are copied
        char specialattack[15];
    }godpokemon;

    godpokemon arceus;
    strcpy(arceus.specialattack,"Turns into stone");
    strcpy(arceus.legend.ability,"Force");
    arceus.legend.normal.hp=170;    //normal=1st structure,legend=2nd
                                    //godpokemon=last;
    return 0; 
}