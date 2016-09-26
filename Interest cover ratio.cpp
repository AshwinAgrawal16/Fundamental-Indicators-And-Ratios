//LEVEARGE RATIO
// Interest cover ratio
vector<double> ICR(vector<double> pretax_income,vector<double> interest_expense)
{
	int i;
	vector<double> A;
	for(i=0;i<pretax_income.size();i++)
	{
		A[i]=(pretax_income[i]+interest_expense[i])/interest_expense[i];
	}
	
	return A;
}
