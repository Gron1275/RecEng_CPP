#pragma once
#ifdef RECENG_EXPORTS
#define RECENG_API __declspec(dllexport)
#else
#define RECENG_API __declspec(dllimport)
#endif
extern "C" RECENG_API struct Person;
extern "C" RECENG_API bool ExpandCluster(Person inPerson, int ClusterID);
