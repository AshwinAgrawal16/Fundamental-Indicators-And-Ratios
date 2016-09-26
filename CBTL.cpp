// LIQUIDITY RATIO  Cash balance to total liabilities (CBTL)
vector<double> CBTL(vector<double> cash,vector<double> liabilities)   //CASH AND LIABILITIES ARE TOTAL
{
	int i;
	vector<double> A;
	for(i=0;i<cash.size();i++)
	{
		A[i]=cash[i]/liabilities[i];
	}
	
	return A;
	
	
}

