#procedure tensorstructure

.sort

Local T11 = UB(ie2,p1,mt,up)*g(ie2,ie4,up,p3)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le10,p1)*mom(le1,p1)-s13/2*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le10)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le1,p1)+s14/4*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le10,p3,le1)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon);

Local T12 = UB(ie2,p1,mt,up)*g(ie2,ie4,up,p3)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le10,p1)*mom(le1,p2)-s13/2*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le10)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le1,p2)+s24/4*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le10,p3,le1)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon);

Local T13 = UB(ie2,p1,mt,up)*g(ie2,ie4,up,p3)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le10,p1)*mom(le1,p3)-s13/2*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le10)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le1,p3)+s34/4*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le10,p3,le1)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon);

Local T21 = UB(ie2,p1,mt,up)*g(ie2,ie4,up,p3)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le10,p2)*mom(le1,p1)-s23/2*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le10)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le1,p1)+s14/4*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le1,p3,le10)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon);

Local T22 = UB(ie2,p1,mt,up)*g(ie2,ie4,up,p3)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le10,p2)*mom(le1,p2)-s23/2*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le10)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le1,p2)+s24/4*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le1,p3,le10)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon);

Local T23 = UB(ie2,p1,mt,up)*g(ie2,ie4,up,p3)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le10,p2)*mom(le1,p3)-s23/2*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le10)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le1,p3)+s34/4*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le1,p3,le10)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon);

Local T=s23*( UB(ie2,p1,mt,up)*g(ie2,ie4,up,le1)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le10,p1)+1/2*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le10,p3,le1)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon) )-s13*( UB(ie2,p1,mt,up)*g(ie2,ie4,up,le1)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon)*mom(le10,p2)+1/2*UB(ie2,p1,mt,up)*g(ie2,ie4,up,le1,p3,le10)*V(ie4,p2,mt,up)*E(le10,p3,0,gluon) );

Local E4=E(le1,p4,0,photon);

.sort

#endprocedure
