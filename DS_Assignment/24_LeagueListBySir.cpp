//#include<iostream>
//#include<string>
//#include<list>
//using namespace std;
//namespace nmComposite
//{
//	class IShow
//	{
//	public:
//		virtual void Show() = 0;
//	};
//
//
//	class Team :public IShow
//	{
//		string _name;
//	public:
//		Team(string name) :_name(name)
//		{
//		}
//		void Show()
//		{
//			cout << "\t\t\t" << _name << endl;
//		}
//	};
//
//	class TeamList :list<Team*>, public IShow
//	{
//	public:
//
//		void AddTeam(Team *tm)
//		{
//			this->push_back(tm);
//		}
//		void Show()
//		{
//			list<Team*>::iterator it1 = this->begin();
//			list<Team*>::iterator it2 = this->end();
//			while (it1 != it2)
//			{
//				(*it1)->Show();
//				it1++;
//			}
//
//		}
//	};
//
//
//	class Division :public IShow
//	{
//		string _name;
//		TeamList *teamList;
//	public:
//		Division(string name) :_name(name), teamList(new TeamList())
//		{
//		}
//		void AddTeam(Team *team)
//		{
//			teamList->AddTeam(team);
//		}
//		void Show()
//		{
//			cout << "\t\t" << _name << endl;
//			teamList->Show();
//		}
//	};
//
//	class DivisionList :list<Division*>, public IShow
//	{
//	public:
//
//		void AddDivision(Division *div)
//		{
//			this->push_back(div);
//		}
//		void Show()
//		{
//			list<Division*>::iterator it1 = this->begin();
//			list<Division*>::iterator it2 = this->end();
//			while (it1 != it2)
//			{
//				(*it1)->Show();
//				it1++;
//			}
//
//		}
//	};
//
//
//	class League :public IShow
//	{
//		string _name;
//		DivisionList *divList;
//	public:
//		League(string name) :_name(name), divList(new DivisionList())
//		{
//		}
//		void AddDivision(Division *div)
//		{
//			divList->AddDivision(div);
//		}
//		void Show()
//		{
//			cout << "\t" << _name << endl;
//			divList->Show();
//		}
//	};
//
//	class LeagueList :list<League*>, public IShow
//	{
//	public:
//
//		void AddLeague(League *league)
//		{
//			this->push_back(league);
//		}
//		void Show()
//		{
//			list<League*>::iterator it1 = this->begin();
//			list<League*>::iterator it2 = this->end();
//			while (it1 != it2)
//			{
//				(*it1)->Show();
//				it1++;
//			}
//
//		}
//	};
//
//	void main()
//	{
//		LeagueList list;
//		League *l1;
//		Division *div;
//		Team *team;
//		list.AddLeague(l1 = new League("League A"));
//		l1->AddDivision(div = new Division("Division Alpha"));
//		div->AddTeam(team = new Team("RCB"));
//		div->AddTeam(team = new Team("KKR"));
//		div->AddTeam(team = new Team("CSK"));
//		div->AddTeam(team = new Team("SRH"));
//		l1->AddDivision(div = new Division("Division Beta"));
//		div->AddTeam(team = new Team("MI"));
//		div->AddTeam(team = new Team("PW"));
//		div->AddTeam(team = new Team("DD"));
//		div->AddTeam(team = new Team("RR"));
//		l1->AddDivision(div = new Division("Division Gama"));
//		div->AddTeam(team = new Team("KP"));
//		div->AddTeam(team = new Team("KT"));
//		div->AddTeam(team = new Team("DC"));
//		div->AddTeam(team = new Team("GE"));
//		list.AddLeague(l1 = new League("League B"));
//		l1->AddDivision(div = new Division("Division Apple"));
//		div->AddTeam(team = new Team("KS"));
//		div->AddTeam(team = new Team("CSS"));
//		div->AddTeam(team = new Team("TW"));
//		div->AddTeam(team = new Team("MH"));
//		l1->AddDivision(div = new Division("Division Orange"));
//		div->AddTeam(team = new Team("KB"));
//		div->AddTeam(team = new Team("CSS"));
//		div->AddTeam(team = new Team("TW"));
//		div->AddTeam(team = new Team("MH"));
//		l1->AddDivision(div = new Division("Division Pine"));
//		div->AddTeam(team = new Team("Chelsea"));
//		div->AddTeam(team = new Team("Barcelona"));
//		div->AddTeam(team = new Team("Madrid"));
//		div->AddTeam(team = new Team("Liver"));
//		list.AddLeague(l1 = new League("League C"));
//		l1->AddDivision(div = new Division("Division North"));
//		l1->AddDivision(div = new Division("Division East"));
//		l1->AddDivision(div = new Division("Division South"));
//
//
//		list.Show();
//
//
//	}
//}
