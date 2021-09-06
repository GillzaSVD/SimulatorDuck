#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"

int main()
{
    MallardDuck* duck1 = new MallardDuck();
    duck1->display();
    duck1->quack();
    duck1->fly();
    RedheadDuck* duck2 = new RedheadDuck();
    duck2->display();
    duck2->quack();
    duck2->fly();
    RubberDuck* duck3 = new RubberDuck();
    duck3->display();
    duck3->quack();
    duck3->fly();
    DecoyDuck* duck4 = new DecoyDuck();
    duck4->display();
    duck4->quack();
    duck4->fly();
}