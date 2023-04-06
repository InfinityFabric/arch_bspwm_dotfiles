#procedure integralID

id Sector(F?,i1?,i2?)=Sector(F,i1,i2,0,0,0,0,0,0,0,0);

Transform Sector decode(last,3):base=2;

id Sector(F?,i1?,i2?,i3?,i4?,i5?,i6?,i7?,i8?,i9?,i10?,0,0,0,0,0,0,0,0)=Sector(F,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10);

id Sector(F?,i?,i1?,i2?,i3?,i4?,i5?,i6?,i7?,i8?,i9?)*prop1^s1?*prop2^s2?*prop3^s3?*prop4^s4?*prop5^s5?*prop6^s6?*prop7^s7?*prop8^s8?*prop9^s9?=F(i1-s1,i2-s2,i3-s3,i4-s4,i5-s5,i6-s6,i7-s7,i8-s8,i9-s9);

#endprocedure
