#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
/*
containers
iterators
allgorithm
binders
negators
*/
void main1()
{
	vector<int> vec;
	vec.push_back(100);
	vec.push_back(200);
	vec.push_back(300);
	vec.push_back(400);
	vec.push_back(500);
	
	vector<int>::iterator it1=vec.begin();
	vector<int>::iterator it2=vec.end();

	while(it1!=it2)
	{
		cout<<*it1<<endl;
		it1++;
	}
}


void main2()
{
	map<string,vector<int> > repo;
	vector<int> vec;
	vec.push_back(150);
	vec.push_back(180);
	vec.push_back(90);
	repo["sachin"]=vec;
	vector<int> vec1;
	vec1.push_back(80);
	vec1.push_back(90);
	vec1.push_back(100);
	repo["saurav"]=vec1;

	vector<int> vec2;
	vec2.push_back(120);
	vec2.push_back(130);
	vec2.push_back(60);
	repo["anupam"]=vec2;


	map<string,vector<int> >::iterator it1=repo.begin();
	map<string,vector<int> >::iterator it2=repo.end();

	while(it1!=it2)
	{
		cout<<it1->first<<endl;
		vector<int>::iterator it3=it1->second.begin();
		vector<int>::iterator it4=it1->second.end();
		while(it3!=it4)
		{
			cout<<*it3<<"\t";
			it3++;
		}
		cout<<endl;
		it1++;
	}
}


void main()
{
	map<string,map<string,int> > details;

	map<string,int> sachinRecord;
	sachinRecord["Sharjah"]=145;
	sachinRecord["Bangalore"]=116;
	sachinRecord["Chennai"]=200;

	
	map<string,int> anilRecord;
	anilRecord["kotla"]=10;
	anilRecord["Bangalore"]=45;
	anilRecord["Chennai"]=6;

	map<string,int> sewagRecord;
	sewagRecord["lords"]=195;
	sewagRecord["multan"]=309;
	sewagRecord["indore"]=100;

	details["sachin"]=sachinRecord;
	details["anil"]=anilRecord;
	details["sewag"]=sewagRecord;


	map<string,map<string,int> >::iterator it1= details.begin();
	map<string,map<string,int> >::iterator it2= details.end();

	while(it1!=it2)
	{
		cout<<it1->first<<endl;
		map<string,int>::iterator it3=it1->second.begin();
		map<string,int>::iterator it4=it1->second.end();
		while(it3!=it4)
		{
			cout<<"\t"<<it3->first<<"\t"<<it3->second<<endl;
			it3++;
		}
		it1++;
	}

}