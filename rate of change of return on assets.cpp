//
// rate of change of return of assets
vector<double> ROC_ASSETS(vector<double> return_assets,int n)
{
	int i;
	vector<double> ROC;
	for(i=0;i<return_assets.size()-n;i++)
	{
		ROC[i]=(return_assets[i]-return_assets[i+n])/return_assets[i];
	}
	return ROC;
}
