#procedure proprule

argument;

id p4=p1+p2+p3;

id p1.p1=mt^2;
id p2.p2=mt^2;
id p3.p3=0;

id p1.p2=s12/2-mt^2;
id p1.p3=s13/2-1/2*mt^2;
id p2.p3=s23/2-1/2*mt^2;

endargument;

#endprocedure
