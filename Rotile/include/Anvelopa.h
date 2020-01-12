#ifndef ANVELOPA_H
#define ANVELOPA_H
#include <string>
enum TipAnvelopa{iarna,vara,universal};
class Anvelopa
{
    public:
        Anvelopa();
        virtual ~Anvelopa();

    protected:

    private:
         string _brand;
        int presiune;
        TipAnvelopa _tipAnvelopa;
};

#endif // ANVELOPA_H
