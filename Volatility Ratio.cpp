// Volatility Ratio
double var(vector<double> close,int j,int n)
{
		double close_sum=0;
	int i;
	for(i=j;i<n+j;i++)
    {
      close_sum=close[i]+close_sum;
    } 
    double mean_close=close_sum/n;
    double sum_dev=0;
    for(i=j;i<n+j;i++)
    {
    	sum_dev=(close[i]-mean_close)*(close[i]-mean_close)+sum_dev;
    }
    double var=sum_dev/n;
    
	//sum_of_elems = std::accumulate(vector.begin(), vector.end(), 0);
}

double mean(vector<double> close,int j,int n)
{
		double close_sum=0;
	int i;
	for(i=j;i<n+j;i++)
    {
      close_sum=close[i]+close_sum;
    } 
    double mean_close=close_sum/n;
    return mean_close;
	
}
vector<double VR(vector<double> close, int n)
{
	 int i;
	 vector<double> vr;
	 for(i=0;i<close.size()-n;i++)
	 {
	    vr[i]=sqrt(var(close,i,n))/mean(close,i,n);	
	 }
	 return vr;
}


