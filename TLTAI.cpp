//LEVEARGE RATIO
// Total liabilities to total tangible assets (TLTAI)
// IF RATIO IS GREATER THAN 1 THE COMPANYS BUSINESS IS RISKY
vector<double> TLTAI(vector<double> tangible_assets,vector<double> liabilities)
{
	int i;
	vector<double> A;
	for(i=0;i<liabilities.size();i++)
	{
		A[i]=liabilities[i]/tangible_assets[i];
	}
	return A;
	
}
