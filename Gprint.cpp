#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

void PrintVec( vector<int> v)
{
	int i = 0;

	for(i = 0; i < v.size(); i++)
	{
		printf("v[%d] = %d ",i,v[i]);
	}


	printf("\n");

	return;
}




void PrintVec2d( vector< vector<int> > vv)
{
	int i = 0;

	for(i = 0; i < vv.size(); i++)
	{
		printf("v[%d]",i);
		PrintVec(vv[i]);
	}


	printf("\n");

	return;
}

