// VALUATION RATIO
// PEG ratio...price to earning growth ratio
vector<double> PEG(vector<double> close,vector<double> eps,int n)
{
	int i;
	vector<double> A;
	for(i=0;i<close.size();i++)
	{
		A[i]=close[i]/eps[i];                  // A is the vector of PE ratio
	}
	vector<double> OUT;
	for(i=0;i<eps.size()-n;i++)
	{
		OUT[i]=A[i]/(((eps[i]-eps[i+n])/eps[i])*100);
	}
	
	return OUT;
}
