#pragma once

#include <string>
#include "constant.h"
#include "surface/surface_cartesian.h"

/************************************************************
 Heart Surface with parameter [a,b,c,d,e,p]

 Equation : (a * x^2 + b * y^2 + c * z^2 + d)^3 + e * x ^2 * z^3 + p * y^2 * z^3
 = 0

 Suggested domain: [-4,4;-2,2;-4,4]
 ************************************************************/
class Surface_Heart : public Surface_Cartesian {
private:
  double par[6];

  virtual double func(const Doub_I, const Doub_I, const Doub_I) const;
  virtual double dfx(const Doub_I, const Doub_I, const Doub_I) const;
  virtual double dfy(const Doub_I, const Doub_I, const Doub_I) const;
  virtual double dfz(const Doub_I, const Doub_I, const Doub_I) const;

public:
  Surface_Heart(VecDoub_I);
  virtual double Set_Node(const Doub_I, const Doub_I, const Doub_I) const;
  virtual VecDoub normal(Doub_I, Doub_I, Doub_I);
  virtual void display();
  virtual double check(Doub_I, Doub_I, Doub_I);
};
