#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

using namespace std;

class Animal
{
    public:
        Animal();
        virtual string FazerBarulho();
        virtual ~Animal();

    protected:

    private:
};

#endif // ANIMAL_H
