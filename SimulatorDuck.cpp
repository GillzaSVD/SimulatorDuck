#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"

int main()
{
    MallardDuck* duck1 = new MallardDuck();
    duck1->display();
    duck1->performFly();

    RedheadDuck* duck2 = new RedheadDuck();
    duck2->display();
    duck2->performFly();

    RubberDuck* duck3 = new RubberDuck();
    duck3->display();
    duck3->performFly();

    DecoyDuck* duck4 = new DecoyDuck();
    duck4->display();
    duck4->performFly();

}