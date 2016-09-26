//
//Net Profit Margin
vector<double> NPM(vector<double> net_income,vector<double> sales)
{
	int i;
	vector<double> A;
	for(i=0;i<net_income.size();i++)
	{
		A[i]=(net_income[i]/sales[i])*100;
	}
	return A;
}
