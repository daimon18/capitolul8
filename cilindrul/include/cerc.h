#ifndef CERC_H
#define CERC_H


class cerc
{
    public:
        cerc(double InitRaza);
        double GetRaza();
        double arie();
        virtual ~cerc();

    protected:

    private:
         double _raza;
};

#endif // CERC_H
