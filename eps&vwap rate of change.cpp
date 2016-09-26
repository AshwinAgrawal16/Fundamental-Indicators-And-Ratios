//
// VARIANT OF EPS RATE OF CHANGE....in place of eps change we use change in ratio of eps and vwap price of the security
// rate of change of (eps/vwap) over n days
// (eps/vwap-delay(eps/vwap,n))/(eps/vwap).....n is number of days or quaters
vector<double> eps_vwap(vector<double> eps,vector<double> vwap,int n)
{
	vector<double> ROC;
	int i;
	for(i=0;i<eps.size()-n;i++)
	{
		ROC[i]=((eps[i]/vwap[i])-(eps[i+n]/vwap[i+n]))/(eps[i/vwap[i]]);
	}
	return ROC;
}
