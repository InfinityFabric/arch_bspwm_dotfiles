#procedure findnf
.sort

* seperate momentum combination like f(...,p+q,...) into f(...,p,...)+f(...,q,...) form

id g(i1?,i2?,up?fermionset,i3?)=g(i1,i2,up,i3);
id mom(i1?,i2?)=mom(i1,i2);

* connect spin line in each diagram

repeat id g(i1?,i2?,up?fermionset,?a)*g(i2?,i3?,up?fermionset,?b)=g(i1,i3,up,?a,?b);

*if ( match(g(i1?,i1?,up,?a)) );
*Multiply nf-1;
*endif;

#endprocedure
