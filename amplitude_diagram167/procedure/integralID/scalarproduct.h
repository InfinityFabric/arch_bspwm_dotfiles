#procedure scalarproduct

id p4=p1+p2+p3;

id p1.p1=mt^2;
id p2.p2=mt^2;
id p3.p3=0;

id p1.p2=s12/2-mt^2;
id p1.p3=s13/2-1/2*mt^2;
id p2.p3=s23/2-1/2*mt^2;

If(match(Sector(F1,?a)));

id k1.p2=-1/2*prop9-mt^2+1/2*prop3+1/2*s12;
id k2.p1=-1/2*prop5+1/2*prop8;
id k1.k1=mt^2+prop1;
id k2.k2=prop8;
id p1.k1=mt^2+1/2*prop1-1/2*prop3;
id k2.p2=1/2*prop5-1/2*prop6+1/2*s12;
id k2.k1=1/2*prop8-1/2*prop2+1/2*prop1;
id k2.p3=1/2*prop6+1/2*s13+1/2*s23-mt^2-1/2*prop7;
id p3.k1=1/2*s13+1/2*prop9+1/2*s23-mt^2-1/2*prop4;

endif;

If(match(Sector(F2,?a)));


id p2.k1=-1/2*prop5+1/2*s12-mt^2+1/2*prop4;
id k2.p3=-1/2*prop9+1/2*s23+1/2*prop8-1/2*mt^2+1/2*s13;
id k2.k1=1/2*prop2-1/2*prop3+1/2*prop1+mt^2;
id p1.k1=1/2*prop1+mt^2-1/2*prop4;
id k2.p1=1/2*prop2-1/2*prop7+mt^2;
id k1.k1=prop1+mt^2;
id p3.k1=1/2*s23+1/2*prop5-mt^2-1/2*prop6+1/2*s13;
id k2.p2=1/2*prop7+1/2*s12-1/2*prop8-mt^2;
id k2.k2=prop2+mt^2;

endif;
If(match(Sector(F3,?a)));


id k1.k2=-1/2*prop3+1/2*prop1+1/2*mt^2+1/2*prop2;
id p2.k2=1/2*prop7+1/2*s12-mt^2-1/2*prop8;
id k1.p3=1/2*s23+1/2*prop5-1/2*prop6-mt^2+1/2*s13;
id p1.k1=1/2*prop1-1/2*prop4+mt^2;
id k1.k1=prop1+mt^2;
id p1.k2=-1/2*prop7+1/2*mt^2+1/2*prop2;
id p2.k1=-1/2*prop5+1/2*s12+1/2*prop4-mt^2;
id k2.k2=prop2;
id p3.k2=1/2*s23-1/2*prop9-mt^2+1/2*s13+1/2*prop8;

endif;
If(match(Sector(F4,?a)));


id p2.k2=-1/2*prop8+1/2*s12+1/2*prop7-1/2*mt^2;
id k1.k1=mt^2+prop1;
id p1.k2=-1/2*prop7+mt^2+1/2*prop2;
id k1.k2=-1/2*prop3+mt^2+1/2*prop1+1/2*prop2;
id k1.p3=1/2*s23-1/2*prop6-mt^2+1/2*prop5+1/2*s13;
id p2.k1=1/2*s12+1/2*prop4-mt^2-1/2*prop5;
id k1.p1=-1/2*prop4+mt^2+1/2*prop1;
id k2.k2=mt^2+prop2;
id k2.p3=1/2*s23-1/2*prop9+1/2*prop8-3/2*mt^2+1/2*s13;

endif;
If(match(Sector(F5,?a)));


id k1.p3=1/2*s23-1/2*mt^2+1/2*prop4-1/2*prop5;
id k2.k2=prop2;
id k2.p1=1/2*prop8-1/2*prop9+1/2*s12-1/2*mt^2+1/2*s13;
id k1.k2=1/2*prop1-1/2*prop3+1/2*prop2;
id k1.p1=1/2*s12-3/2*mt^2+1/2*s13-1/2*prop6+1/2*prop5;
id p2.k2=-1/2*prop7+1/2*prop2;
id k2.p3=-1/2*prop8+1/2*s23-1/2*mt^2+1/2*prop7;
id k1.k1=prop1+mt^2;
id k1.p2=1/2*prop1+mt^2-1/2*prop4;

endif;
If(match(Sector(F6,?a)));


id p2.k2=-1/2*prop7+mt^2+1/2*prop2;
id k1.k1=mt^2+prop1;
id p1.k2=1/2*s12-3/2*mt^2+1/2*s13+1/2*prop8-1/2*prop9;
id k1.p3=1/2*s23-1/2*mt^2+1/2*prop4-1/2*prop5;
id k1.k2=-1/2*prop3+mt^2+1/2*prop2+1/2*prop1;
id p2.k1=mt^2-1/2*prop4+1/2*prop1;
id k1.p1=1/2*s12-1/2*prop6-3/2*mt^2+1/2*s13+1/2*prop5;
id k2.p3=1/2*s23+1/2*prop7-1/2*mt^2-1/2*prop8;
id k2.k2=mt^2+prop2;

endif;
If(match(Sector(F7,?a)));


id k2.p3=-1/2*prop6-1/2*prop3+1/2*prop4-1/2*mt^2+1/2*s13+1/2*prop5;
id k2.k1=-1/2*prop3+1/2*prop1+1/2*prop2;
id p2.k1=1/2*s23+1/2*prop6+1/2*s12-3/2*mt^2-1/2*prop7;
id k2.p1=-1/2*prop8+1/2*prop2;
id p1.k1=1/2*prop1+mt^2-1/2*prop5;
id k1.k1=prop1+mt^2;
id p3.k1=-1/2*prop6-1/2*mt^2+1/2*s13+1/2*prop5;
id k2.p2=1/2*prop8+1/2*s12-1/2*prop9;
id k2.k2=prop2;

endif;
If(match(Sector(F8,?a)));


id k2.p1=1/2*prop2+mt^2-1/2*prop8;
id p2.k1=-1/2*prop6+1/2*s12-1/2*mt^2+1/2*prop5;
id k2.k1=1/2*prop2-1/2*prop3+mt^2+1/2*prop1;
id p1.k1=mt^2-1/2*prop5+1/2*prop1;
id k2.p3=1/2*s23-1/2*prop7+1/2*prop6-1/2*prop3-3/2*mt^2+1/2*prop4+1/2*s13;
id k2.k2=prop2+mt^2;
id k2.p2=1/2*s12-mt^2+1/2*prop8-1/2*prop9;
id k1.k1=mt^2+prop1;
id k1.p3=1/2*s23-1/2*prop7+1/2*prop6-3/2*mt^2+1/2*s13;

endif;
If(match(Sector(F9,?a)));


id k2.p1=1/2*prop8-1/2*prop2-mt^2;
id p2.k1=-1/2*prop8+1/2*s23+prop2+s12-1/2*prop5-1/2*prop9+1/2*mt^2+1/2*prop4;
id k2.p3=-1/2*prop6-1/2*prop3+mt^2+1/2*prop1-1/2*s13+1/2*prop4;
id p1.k1=1/2*prop8+1/2*prop6-prop2-1/2*s12+1/2*prop5+1/2*prop9-3/2*mt^2+1/2*s13-1/2*prop4-1/2*prop7;
id k2.k1=-1/2*prop6-1/2*prop3+prop2+1/2*s12-1/2*prop5-1/2*prop9+2*mt^2+1/2*prop1-1/2*s13+1/2*prop4+1/2*prop7;
id k2.k2=prop2+mt^2;
id k2.p2=-1/2*prop8+prop2+1/2*s12-1/2*prop9+mt^2;
id k1.p3=-1/2*prop6+1/2*prop1;
id k1.k1=mt^2+prop1;

endif;
If(match(Sector(F10,?a)));


id k2.k2=prop2;
id k1.p1=-1/2*prop5+1/2*prop1+mt^2;
id k1.p3=1/2*s23-1/2*prop7-3/2*mt^2+1/2*s13+1/2*prop6;
id k1.k1=prop1+mt^2;
id k2.p3=1/2*prop2-1/2*prop8;
id k1.p2=1/2*prop5+1/2*s12-1/2*mt^2-1/2*prop6;
id p2.k2=1/2*prop5-1/2*prop3+1/2*s12-3/2*mt^2+1/2*prop4-1/2*prop6;
id k1.k2=1/2*prop1+1/2*prop2-1/2*prop3;
id k2.p1=1/2*prop8-1/2*mt^2+1/2*s13-1/2*prop9;

endif;
If(match(Sector(F11,?a)));


id k1.p3=-1/2*prop7+1/2*prop1;
id k2.k2=mt^2+prop2;
id k2.p1=-1/2*prop4-mt^2-1/2*prop1+1/2*prop6+1/2*prop3;
id k1.k2=mt^2+1/2*prop1+1/2*prop2-1/2*prop3;
id p2.k2=1/2*s23-1/2*prop9+1/2*prop4+1/2*s12-1/2*mt^2+1/2*prop1+1/2*s13-1/2*prop6-1/2*prop3+1/2*prop8;
id k1.p1=-mt^2-1/2*prop1+1/2*prop6;
id k2.p3=1/2*mt^2+1/2*prop2-1/2*prop8;
id k1.k1=mt^2+prop1;
id k1.p2=1/2*s23-1/2*prop9-1/2*mt^2+1/2*prop1+1/2*prop5+1/2*s13-1/2*prop6-1/2*prop3+1/2*prop8;

endif;

#endprocedure
