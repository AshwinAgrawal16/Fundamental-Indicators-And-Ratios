//LEVARAGE RATIO  
// A DECREASING DEBT TO EQUITY RATIO MEANS THE COMAPANY IS GROWING 
// SO WE CALCULATE CHANGE IN DEBT TO RATIO RATHER THAN DE ITSELF......BECAUSE ITS REALATIVE
vector<double> DE(vector<double> she_equity,vector<double> debt)
{
	int i;
	vector<double> A;
	for(i=0;i<debt.size();i++)
	{
		A[i]=debt[i]/she_equity[i];
	}
	return A;
}
