#-
Symbol D;
Autodeclare Index i;
Autodeclare Vector p,q,k;
Autodeclare Symbol gs,Y,N,e;
Symbol s12,s13,s23,s123,s14,s24,s34;
Symbol mt,mh,mu;
CFunction pentagon1,pentagon2;
Autodeclare Symbol basis,Basis;

***** loacl declaration *****

Function num,den;
Symbol d;

Load amp_ID.sav;

#do i=1,13
    #do j=1,7
        Global d`i'o`j'=dia`i'co`j';
    #enddo
#enddo

.sort
Delete storage;
***** transform kira default dimension d into my default dimension D *****
id D=d;
*****

#do i=1,1
    
#include ../kira/results/pentagon1/kira_myintegrals.inc

#enddo

id prop(?a)=den(?a);

***** tansfrom kira d into D *****
id d=D;
*****

*id mu=0;
*id mt=0;

.sort

#do i=1,7
    Global coeff`i'=
    #do j=1,13
    +d`j'o`i'
    #enddo
    ;
#enddo

*Bracket pentagon1,pentagon2,basis1,basis2,Basis1,Basis2,Nc,Y,gs;
Bracket pentagon1;
Print +s coeff7;
.sort
Format mathematica;
#write <coeff_test.m> "(%E)",coeff7
*save amp_master.sav;

.end
