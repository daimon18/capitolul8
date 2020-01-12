#ifndef JANTA_H
#define JANTA_H

enum MatJanta{tabla,aluminiu};
class Janta
{
    public:
        Janta();
        Janta(unsigned short a, int b, MatJanta c);
       void SchimbaJanta(MatJanta var1, int var2);
        virtual ~Janta();

    protected:

    private:
        unsigned short _nrPrezoane;
        int _diametru;
        MatJanta _matJanta;
};

#endif // JANTA_H
