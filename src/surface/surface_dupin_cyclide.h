#pragma once

#include "constant.h"
#include "surface/surface_cartesian.h"
#include <string>

/****************************************************************
 Dupin Cuclide Surface with parameter [a ,b, c]

 Equation : (a - sqrt(x^2 + y^2))^2 + z * z + b * x - c * c = 0

 Suggested domain: [-4,4;-4,4;-4,4] for grid (20,40,80,160)
 ****************************************************************/
class Surface_Dupin_Cyclide : public Surface_Cartesian {
private:
  double a, b, c;

  virtual double func(const Doub_I, const Doub_I, const Doub_I) const;
  virtual double dfx(const Doub_I, const Doub_I, const Doub_I) const;
  virtual double dfy(const Doub_I, const Doub_I, const Doub_I) const;
  virtual double dfz(const Doub_I, const Doub_I, const Doub_I) const;

public:
  Surface_Dupin_Cyclide(VecDoub_I);
  virtual double Set_Node(Doub_I, Doub_I, Doub_I) const;
  virtual VecDoub normal(Doub_I, Doub_I, Doub_I);
  virtual void display();
  virtual double check(Doub_I, Doub_I, Doub_I);
};
