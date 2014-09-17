#include "extern_c_api.h"

#include <string> 


AwbmSimulation * CreateSimulation()
{
	return new AwbmSimulation();
}

void Dispose(AwbmSimulation * modelSimulation)
{
	delete modelSimulation;
}

void Execute(AwbmSimulation * modelSimulation)
{
	modelSimulation->Execute();
}

void GetRecorded(AwbmSimulation * modelSimulation, char * variableIdentifier, double * values, int arrayLength)
{
	int simulLen = modelSimulation->NumSteps();
	if (simulLen != arrayLength) throw "data length specifications are inconsistent";
	double * tmp = modelSimulation->GetRecorded(std::string(variableIdentifier));
	for (int i = 0; i < arrayLength; i++)
		values[i] = tmp[i]; // TODO: faster options? memcopy?

}

void SetSpan(AwbmSimulation * modelSimulation, int from, int to)
{
	modelSimulation->SetSpan(from, to);
}

void Play(AwbmSimulation * modelSimulation, char * variableIdentifier, double * values, int arrayLength)
{
	modelSimulation->Play(std::string(variableIdentifier), values);
}

void Record(AwbmSimulation * modelSimulation, char * variableIdentifier)
{
	modelSimulation->Record(std::string(variableIdentifier));
}

void SetVariable(AwbmSimulation * modelSimulation, char * variableIdentifier, double value)
{
	modelSimulation->SetVariable(std::string(variableIdentifier), value);
}

double GetVariable(AwbmSimulation * modelSimulation, char * variableIdentifier)
{
	return modelSimulation->GetVariable(std::string(variableIdentifier));
}

int GetStart(AwbmSimulation * modelSimulation)
{
	return modelSimulation->GetStart();
}

int GetEnd(AwbmSimulation * modelSimulation)
{
	return modelSimulation->GetEnd();
}
