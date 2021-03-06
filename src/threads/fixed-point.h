#define F 1048576

//Convert n to fixed point:	n * f
#define INT_TO_F(N)(N*F)

//Convert x to integer (rounding toward zero):	x / f
#define F_TO_INT_Z(X)(X/F)

//Convert x to integer (rounding to nearest):	(x + f / 2) / f if x >= 0, 
//(x - f / 2) / f if x <= 0.
#define F_TO_INT(X)(X>=0?((X+F/2)/F):((X-F/2)/F))

//Add x and y:	x + y
#define ADD(X,Y)(X+Y)

//Subtract y from x:	x - y
#define SUBTRACT(X,Y)(X-Y)

//Add x and n:	x + n * f
#define ADD_F(X,N)(X+N*F)

//Subtract n from x:	x - n * f
#define SUBTRACT_F(X,N)(X-N*F)

//Multiply x by y:	((int64_t) x) * y / f
#define MULTIPLY(X,Y)(((int64_t) X) * Y / F)

//Multiply x by n:	x * n
#define MULTIPLY_F(X,N)(X*N)

//Divide x by y:	((int64_t) x) * f / y
#define DIV(X,Y)(((int64_t) X) * F / Y)

//Divide x by n:	x / n
#define DIV_F(X,N)(X/N)
