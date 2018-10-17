#ifndef GATO_H
#define GATO_H
#include "Animal.h"

class Gato : public Animal
{
    public:
        Gato();
        virtual string FazerBarulho();
        virtual ~Gato();

    protected:

    private:
};

#endif // GATO_H
