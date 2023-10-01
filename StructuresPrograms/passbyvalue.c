#include<stdio.h>
#include<string.h>

typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[50];
}pokemon;

void change(pokemon p)
{
    p.hp=60;
    p.attack=100;
    p.speed=70;
    p.tier='A';
    strcpy(p.name,"Pikachu");
}

int main()
{
    pokemon pikachu;
    pikachu.hp=70;
    pikachu.attack=90;
    pikachu.speed=140;
    pikachu.tier='B';
    strcpy(pikachu.name,"Pikachu");
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}