void main ()
 {
 int a = 10, *p, **q;
p = &a;
q = &p;
// printing the value
printf("%d", a+*p+**q);
}