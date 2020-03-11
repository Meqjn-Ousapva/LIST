//Use "RK4" wrt para x_i.

//void PRK4(double(*func)(double*),double* P_C;int sel,double h)
//PRK4:	"Partial R-K4".
//paras:
//	func:	Function Pionter, Following "Numerical Function Standard";
//	P_C:	para character,Following "Numerical Function Standard";
//	sel:	int;select which para use R-K4;
//		Example:P_C={2,x1,x2},"sel=1" means "para x1";
//	h:	double;step;

void PRK4(double(*func)(double*),double* P_C,int sel,double h){
	double tem=P_C[sel];
	double k1=func(P_C);
	P_C[sel]+=h*k1/2;
	double k2=func(P_C);
	P_C[sel]+=h*k2/2;
	double k3=func(P_C);
	P_C[sel]+=h*k3;
	double k4=func(P_C);
	P_C[sel]=tem+h*(k1+2*k2+2*k3+k4)/6;
}
