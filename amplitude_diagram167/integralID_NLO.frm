#-

#include ./procedure/integralID/scalarproduct.h
#include ./procedure/integralID/integralID.h
#include ./procedure/integralID/crossing.h
#include ./procedure/integralID/proprule.h

Autodeclare Symbol i;
Autodeclare Vector p,q,k;
Autodeclare Symbol prop;
Symbol s12,s23,s13,s14,s24,s34,s123;

Autodeclare CFunction pentagon;
CFunction pentagon1x23,pentagon1x234;
Autodeclare CFunction Sector,F;
Symbol mu,mt,mh;
CFunction crossx23;
Autodeclare Symbol s,[];

Off statistics;

Load after_momentumshift.sav;

.sort

*#do i={16,18,19,20,21,24,25,28,92,96,102,104,106,108,115,116,118,124,126,132,137,140,141,144,161,165,173,175}
#do i=167,167
    #do j=1,7
	Global dia`i'co`j'=diagram`i'coeff`j';
    #enddo
#enddo

.sort
Delete storage;
#call crossing
#call proprule
#call scalarproduct
#call integralID

*Bracket pentagon1,pentagon2;

.sort
Format mathematica;
Bracket F1,F2,F3,F4,F5,F6,F7,F8,F9,F10,F11;
*Print +s amp10o27o1;
Print +s;
.sort
*Format mathematica;
*#write <test.m> "(%E)",amp10o27o1
.store

save amp_ID.sav;

.end
