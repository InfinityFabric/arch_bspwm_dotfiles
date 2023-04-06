#procedure proptoscalar

.sort

Splitarg prop;
id prop(?a,p?kset,?b)=1;

Transform prop addargs(1,last-1);
id prop(p1?,a?)=prop(p1.p1-a^2);

#endprocedure
