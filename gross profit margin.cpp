// 
//GROSS PROFIT MARGIN
vector<double> GPM(vector<double> sales,vector<double> cost)
{
	int i;
	vector<double> A;
	for(i=0;i<sales.size();i++)
	{
		A[i]=((sales[i]-cost[i])/(sales[i]))*100;
	}
	return A;
}
