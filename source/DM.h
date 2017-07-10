/*
 * DM.h
 *
 *  Created on: 03/07/2017
 *      Author: david
 */

#ifndef JDDarkMatter_H_
#define JDDarkMatter_H_

#include <TF1.h>
using namespace std;

//JDDarkMatter ¿?

class JDDarkMatter {
public:

	JDDarkMatter(TString candidate, TString source, TString form);
		virtual ~JDDarkMatter();

// GetTF1JFactorVsTheta
TF1* GetJFactor()
{
	return fJFactor;
}

// x[0] == normalization point [deg]
//TF1* GetQFactor(Double_t thetaNorm)
TF1* GetQFactor()
{
	return fQFactor;
}

Double_t GetTheta()
{
	return dTheta;
}

//GetJFactorName
//GetAuthorName
//GetIsAnnihilation

protected:

void CreateFunctionsDM();
void SetJFactor();

Double_t dJFactor(Double_t* x, Double_t* par);
Double_t dQFactor(Double_t* x, Double_t* par);


private:

///////////////////////////////////////////////////////
//TString
///////////////////////////////////////////////////////

TString sCandidate;
TString sSource;
TString sForm;

///////////////////////////////////////////////////////
//TString
///////////////////////////////////////////////////////
Bool_t isAnnihilation;

///////////////////////////////////////////////////////
//Double_t
///////////////////////////////////////////////////////

Double_t dTheta;


///////////////////////////////////////////////////////
//TGraph
///////////////////////////////////////////////////////

TGraph* gJFactor;

///////////////////////////////////////////////////////
//TF1
///////////////////////////////////////////////////////

TF1* fJFactor;
TF1* fQFactor;


};



#endif /* JDDarkMatter_H_ */
