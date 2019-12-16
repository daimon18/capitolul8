#ifndef CERC_H
#define CERC_H


class cerc
{
    public:
        cerc(double InitRaza);
        double GetRaza();
        virtual ~cerc();

    protected:

    private:
         double _raza;
        double arie(double _raza);
};

#endif // CERC_H
