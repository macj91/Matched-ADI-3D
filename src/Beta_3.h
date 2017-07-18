#ifndef __Beta_3_H__
#define __Beta_3_H__

#include "Constant.h"
#include "Beta.h"

class Beta_3: public Beta
{
public:
    Beta_3();
    
    virtual double Inside(Doub_I, Doub_I, Doub_I) const;
    virtual double Outside(Doub_I, Doub_I, Doub_I) const;
    virtual double Inside_Dx(Doub_I, Doub_I, Doub_I) const;
    virtual double Outside_Dx(Doub_I, Doub_I, Doub_I) const;
    virtual double Inside_Dy(Doub_I, Doub_I, Doub_I) const;
    virtual double Outside_Dy(Doub_I, Doub_I, Doub_I) const;
    virtual double Inside_Dz(Doub_I, Doub_I, Doub_I) const;
    virtual double Outside_Dz(Doub_I, Doub_I, Doub_I) const;
};

#endif
