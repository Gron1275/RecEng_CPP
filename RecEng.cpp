#include "pch.h"
#include "RecEng.h"


RECENG_API struct Person {
	
public:
	int personID;
	double value;
	Person(int, double);
};
Person::Person(int inPersonID, double inValue) {
	personID = inPersonID;
	value = inValue;
}
RECENG_API bool ExpandCluster(Person inPerson, int ClusterID)
{
	return true;
}
