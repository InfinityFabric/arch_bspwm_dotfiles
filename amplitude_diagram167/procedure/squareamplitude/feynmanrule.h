#procedure feynmanrule

* all index including lorentz dirac color are represented in i and ie , we will change it in the next procedure

* vertex 

id vrtx(Uug,i1?,p1?,i2?,p2?,i3?,p3?)=i_*gs*g(i1,i3,up,i2)*t(i2,i1,i3);
id vrtx(Uup,i1?,p1?,i2?,p2?,i3?,p3?)=i_*e*g(i1,i3,up,i2)*cp(i1,i3);
id vrtx(Ttg,i1?,p1?,i2?,p2?,i3?,p3?)=i_*gs*g(i1,i3,top,i2)*t(i2,i1,i3);
id vrtx(Tth,i1?,p1?,i2?,p2?,i3?,p3?)=-i_*Y*g(i1,i2,top)*ch(i1,i2);
id vrtx(ggg,i1?,p1?,i2?,p2?,i3?,p3?)=gs*f(i1,i2,i3)*(gv(i1,i2)*mom(i3,p1-p2)+gv(i2,i3)*mom(i1,p2-p3)+gv(i3,i1)*mom(i2,p3-p1));
id vrtx(Ghghg,i1?,p1?,i2?,p2?,i3?,p3?)=gs*f(i1,i2,i3)*mom(i2,-p3);

* propagators

id fpropu(i1?,i2?,p?,m?)=i_*(g(i1,i2,up,p)+g(i1,i2,up)*m)*fprop(i2,i1)*prop(p,m);
id fpropt(i1?,i2?,p?,m?)=i_*(g(i1,i2,top,p)+g(i1,i2,top)*m)*fprop(i2,i1)*prop(p,m);
id glprop(i1?,i2?,p?,m?)=-i_*gl(i2,i1)*glprop(i2,i1)*prop(p,m);
id ghprop(i1?,i2?,p?,m?)=i_*gh(i1,i2)*prop(p,m);

#do i=1,10
  id once vrtx(gggg,i1?,p1?,i2?,p2?,i3?,p3?,i4?,p4?)=-i_*gs^2*(
  f(i1,i2,ig{`i'})*f(i3,i4,ig{`i'})*
  (gg(i1,i3)*gg(i2,i4)-gg(i1,i4)*gg(i2,i3))+
  f(i1,i3,ig{`i'})*f(i2,i4,ig{`i'})*
  (gg(i1,i2)*gg(i3,i4)-gg(i1,i4)*gg(i2,i3))+
  f(i1,i4,ig{`i'})*f(i2,i3,ig{`i'})*
  (gg(i1,i2)*gg(i3,i4)-gg(i1,i3)*gg(i2,i4)));
#enddo

#endprocedure
