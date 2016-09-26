//PROBABILITY RATIOS
//RATE OF CHANGE OF EPS
vector<double> EpsChange(vector<double> eps,int n)
{
	int i;
	vector<double> ROC;
	for(i=0;i<eps.size()-n;i++)
	{
		ROC[i]=(eps[i]-eps[i+n])/eps[i];
	}
	return ROC;
}
