#-
#include ./procedure/squareamplitude/numbertoindex.h
#include ./procedure/squareamplitude/feynmanrule.h 
#include ./procedure/squareamplitude/seperatecolorlorentzindex.h
#include ./procedure/squareamplitude/complexconjugate.h
#include ./procedure/squareamplitude/squareamplitude.h
#include ./procedure/squareamplitude/calcolorfactor.h
#include ./procedure/squareamplitude/colorbasis.h
#include ./procedure/squareamplitude/calamp_NLO_10.h
#include ./procedure/squareamplitude/findnf.h
#include ./procedure/squareamplitude/tensor_structure.h
#include ./procedure/squareamplitude/momentumshift.h
#include ./procedure/squareamplitude/proptoscalar.h

Symbol D;
Dimension D;
Symbol CA,CF,Nc,Na;
Symbol s12,s13,s14,s23,s24,s34;
Autodeclare Index i,ie,ii,iie,ig,l,le,ll,lle,a=Nc,ae=Nc,aa=Nc,c=Na,ce=Na,cc=Na,cg=Na,ccg=Na;
Autodeclare Symbol m,mt,mu,mh;
Autodeclare Vector p,q,k;
CFunction UB,U,VB,V,E,EB;
CFunction ghprop,glprop,fpropu,fpropt,fprop,vrtx,prop;
CFunction g,gl,gh,gv,gg,ch,cp,mom;
Cfunction t,f(antisymmetric),d(symmetric);
Symbol Uug,Ttg,Tth,Uup,gggg,ggg,Ghghg;
Symbol gs,e,Y;
Symbol up,top,gluon,photon;
Symbol basis1,Basis1,basis2,Basis2,basis3,Basis3;
Symbol s12,s23,s13,s14,s24,s34,s123;

CFunction Sector,DiaMatch,Shift;
Autodeclare CFunction F;
Symbol [],a;

Set particleset:up,top,gluon,photon;
Set fermionset:up,top;
Set kset: k1,k2,-k1,-k2;

Set iset:i1,...,i100;
Set ieset:ie1,...,ie100;
Set igset:ig1,...,ig100;
Set iiset:ii1,...,ii100;
Set iieset:iie1,...,iie100;
Set lset:l1,...,l100;
Set leset:le1,...,le100;
Set llset:ll1,...,ll100;
Set lleset:lle1,...,lle100;
Set aset:a1,...,a100;
Set cset:c1,...,c100;
Set aeset:ae1,...,ae100;
Set ceset:ce1,...,ce100;
Set aaset:aa1,...,aa100;
Set ccset:cc1,...,cc100;
Set cgset:cg1,...,cg100;
Set ccgset:ccg1,...,ccg100;

Off statistics;

#include twoloop.h


Multiply left E(-6,p3,0,gluon)*UB(-2,p1,mt,up)*V(-4,p2,mt,up);

#do i=167,167
    .sort
    Skip;
    NSkip loop2diagram`i';

    Multiply left DiaMatch(`i');
#enddo

.sort
#include ../reduze_2_massive_F1_fianl/myresults/twoloop.match.info.inc

#call momentumshift
.sort

#call numbertoindex
#call feynmanrule
#call seperatecolorlorentzindex
#call calcolorfactor
#call findnf
#call tensorstructure
.sort

Local CT11=T11;
Local CT12=T12;
Local CT13=T13;
Local CT21=T21;
Local CT22=T22;
Local CT23=T23;
Local CT=T;

Local CE4=E4;
.sort
Skip;
NSkip CT11,CT12,CT13,CT21,CT22,CT23,CT,CE4;

#call complexconjugate
.sort

#do i=167,167
    
    Skip;
    
    Global diagram`i'coeff1=loop2diagram`i'*E(le1,p4,0,photon)*CT11*CE4;
    Global diagram`i'coeff2=loop2diagram`i'*E(le1,p4,0,photon)*CT12*CE4;
    Global diagram`i'coeff3=loop2diagram`i'*E(le1,p4,0,photon)*CT13*CE4;
    Global diagram`i'coeff4=loop2diagram`i'*E(le1,p4,0,photon)*CT21*CE4;
    Global diagram`i'coeff5=loop2diagram`i'*E(le1,p4,0,photon)*CT22*CE4;
    Global diagram`i'coeff6=loop2diagram`i'*E(le1,p4,0,photon)*CT23*CE4;
    Global diagram`i'coeff7=loop2diagram`i'*E(le1,p4,0,photon)*CT*CE4;
    
    #call squareamplitude 
    #call proptoscalar

    .sort

#enddo

Print +s diagram167coeff1;
.store

save after_momentumshift.sav;

.end
