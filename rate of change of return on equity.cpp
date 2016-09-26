//
// rate of change of return on equity
vector<double> rate_roe(vector<double> return_equity,int n)
{
	vector<double> ROC;
	int i;
	for(i=0;i<return_equity.size()-n;i++)
	{
		ROC[i]=(return_equity[i]-return_equity[i+n])/return_equity[i];
	}
	return ROC;
}
