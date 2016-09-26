//LIQUIDITY RATIO

vector<double> OCFCL(vector<double> cashflow_op,vector<double> currliabilities)
{
	vector<double> A;
	int i;
	for(i=0;i<cashflow_op.size();i++)
	{
	   A[i]=cashflow_op[i]/currliabilities[i];	
	}
	return A;
	
}
