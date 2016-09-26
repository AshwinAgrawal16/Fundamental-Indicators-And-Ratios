//
//Price To Earning ratio
vector<double> PE(vector<double> close,vector<double> eps)
{
	int i;
	vector<double> A;
	for(i=0;i<close.size();i++)
	{
		A[i]=close[i]/eps[i];
	}
	return A;
}
