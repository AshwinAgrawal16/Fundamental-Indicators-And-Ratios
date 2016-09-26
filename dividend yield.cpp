// VALUATION RATIO
//DIVIDEND YIELD
vector<double> DY(vector<double> dividend_annual,int close)
{
	int i;
	vector<double> A;
	for(i=0;i<close.size();i++)
	{
		A[i]=dividend_annual[i]/close[i];
	}
	return A;
}
