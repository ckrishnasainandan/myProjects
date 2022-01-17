#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip.h>
class batsmen
{
	private:
		char pname[13][25];
		char teaa[25],teab[25];
		int  runsmade[12],totalruns,totalruns1;
		int  sixs[12];
		int  fours[12];
		int  n,extra;
		int  ballcount,ball[12];
		int  out,max;
		int  over;


	public:
		batsmen();
		void putdata();
		void putdata1();
		void update(int n,int o)
		{
		     if(n==0)
		     {
		       ballcount++;
		       ball[out]++;
		       cout<<"\n";
		       cout<<"\n....DOT BALL....";
		       cout<<"\n";
		       cout<<"\n .....BALL REMAINED.... "<<(o*6)-ballcount;
		     }
		     else if(n==6)
		     {
		       sixs[out]=sixs[out]+1;
		       runsmade[out]=runsmade[out]+n;
		       totalruns=totalruns+n;
		       ballcount++;
		       ball[out]++;
		       cout<<"\n";
		       cout<<"\n";
		       cout<<"\n ........THAT'S A SIX BY......"<<pname[out];
		       cout<<"\n ........BALL REMAINED........"<<(o*6)-ballcount;
		     }
		     else if(n==4)
		     {
		       fours[out]=fours[out]+1;
		       runsmade[out]=runsmade[out]+n;
		       totalruns=totalruns+n;
		       ballcount++;
		       ball[out]++;
		       cout<<"\n";
		       cout<<"\n";
		       cout<<"\n ......SUPER FOUR THAT IS FROM...."<<pname[out];
		       cout<<"\n ......BALL REMAINED........ "<<(o*6)-ballcount;
		     }
		     else if(n==1||n==2||n==3)
		     {
		       runsmade[out]=runsmade[out]+n;
		       totalruns=totalruns+n;
		       ballcount++;
		       ball[out]++;
		       cout<<"\n";
		       cout<<"\n";
		       cout<<"\n BALL REMAINED "<<(o*6)-ballcount;
		     }
		     else if(n==7)
		     {
		       extra=extra+1;
		       cout<<"\n";
		       cout<<"\n";
		       cout<<"\n ........WIDE........";
		       cout<<"\n ........BALL REMAINED......."<<(o*6)-ballcount;
		     }
		     else if(n==8)
		     {
		       cout<<"\n ........OH THAT'S OUT........";
		       cout<<"\n OUT PLAYER "<<pname[out];
		       cout<<"\n RUNS "<<runsmade[out];
		       ball[out]++;
		       out++;
		       cout<<"\n";
		       cout<<"\n";
		       cout<<"\n NEW PLAYER "<<pname[out];
		       cout<<"\n RUNS "<<runsmade[out];
		       ballcount++;
		       if(out>=max)
		       {
			  cout<<"\n\n\t\t INNINGS COMPLETED ";
		       }
		       cout<<"\n BALL REMAINED "<<(o*6)-ballcount;
		     }
		     if(ballcount%6==0)
		     {
		       over++;
		       cout<<"\n\n\t\t\t\a OVER COMPLETED ";
		       if(over>=o)
		       {
			  cout<<"\n\n\t\t\t\a\a INNINGS COMPLETED";
		       }
		     }
		}
		int updata1(int m,int o,int target)
		{
		     if(m==0)
		     {
		       ballcount++;
		       ball[out]++;
		       cout<<"\n";
		       cout<<"\n....DOT BALL....";
		       cout<<"\n";
		       cout<<"\n .....RUNS REQUIED..... "<<target;
		       cout<<"\n .....BALL REMAINED.... "<<(o*6)-ballcount;
		     if(ballcount%6==0)
		     {
		       over++;
		       cout<<over<<"\n\n\n\t\t\a OVER COMPLETED ";
		       if(over>=o)
		       {
			  cout<<"\n\a\a INNINGS COMPLETED ";
			  if(target<=0)
				 cout<<"\n MATCH LOSS BY "<<teaa;
			  else if(target==1)
				 cout<<"\n TIE MATCH BETWEEN "<<teaa<<" and "
				 <<teab;
			  else if(target>1)
				 cout<<"\n MATCH WON BY "<<teaa;

		       }
		     }
		       return target;
		     }
		     else if(m==6)
		     {
		       runsmade[out]=runsmade[out]+m;
		       sixs[out]=sixs[out]+1;
		       totalruns1=totalruns1+m;

		       target=target-m;
		       if(target<=0)
		       {
			  cout<<"\n";
			  cout<<"\n\t MATCH LOSS BY"<<teaa;
			  cout<<"\n";
		       }
		       ballcount++;
		       ball[out]++;
		       cout<<"\n";
		       cout<<"\n .....SUPER SIX FROM...... "<<pname[out];
		       cout<<"\n";
		       cout<<"\n .....RUNS REQUIED..... "<<target;
		       cout<<"\n .....BALL REMAINED.... "<<(o*6)-ballcount;
		     if(ballcount%6==0)
		     {
		       over++;
		       cout<<over<<"\n\n\n\t\t\a OVER COMPLETED ";
		       if(over>=o)
		       {
			  cout<<"\n\a\a INNINGS COMPLETED ";
			  if(target<=0)
				 cout<<"\n MATCH LOSS BY "<<teaa;
			  else if(target==1)
				 cout<<"\n TIE MATCH BETWEEN "<<teaa<<" and "
				 <<teab;
			  else if(target>1)
				 cout<<"\n MATCH WON BY "<<teaa;

		       }
		     }
		       return target;
		     }
		     else if(m==4)
		     {
		       fours[out]=fours[out]+1;
		       runsmade[out]=runsmade[out]+m;
		       totalruns1=totalruns1+m;

		       target=target-m;
		       if(target<=0)
		       {
			  cout<<"\n";
			  cout<<"\n\t MATCH LOSS BY"<<teaa;
			  cout<<"\n";
		       }
		       ballcount++;
		       ball[out]++;
		       cout<<"\n";
		       cout<<"\n ....THAT's A FOUR FROM...."<<pname[out];
		       cout<<"\n";
		       cout<<"\n ....RUNS REQUIED...."<<target;
		       cout<<"\n ....BALL REMAINED..."<<(o*6)-ballcount;
		     if(ballcount%6==0)
		     {
		       over++;
		       cout<<over<<"\n\n\n\t\t\a OVER COMPLETED ";
		       if(over>=o)
		       {
			  cout<<"\n\a\a INNINGS COMPLETED ";
			  if(target<=0)
				 cout<<"\n MATCH LOSS BY "<<teaa;
			  else if(target==1)
				 cout<<"\n TIE MATCH BETWEEN "<<teaa<<" and "
				 <<teab;
			  else if(target>1)
				 cout<<"\n MATCH WON BY "<<teaa;

		       }
		     }
		       return target;
		     }
		     else if(m==1||m==2||m==3)
		     {
		       runsmade[out]=runsmade[out]+m;
		       totalruns1=totalruns1+m;

		       target=target-m;
		       if(target<=0)
		       {
			  cout<<"\n";
			  cout<<"\n\t MATCH LOSS BY"<<teaa;
			  cout<<"\n";
		       }
		       ballcount++;
		       ball[out]++;
		       cout<<"\n ....RUNS REQUIED.... "<<target;
		       cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
		     if(ballcount%6==0)
		     {
		       over++;
		       cout<<over<<"\n\n\n\t\t\a OVER COMPLETED ";
		       if(over>=o)
		       {
			  cout<<"\n\a\a  INNINGS COMPLETED ";
			  if(target<=0)
				 cout<<"\n MATCH LOSS BY "<<teaa;
			  else if(target==1)
				 cout<<"\n TIE MATCH BETWEEN "<<teaa<<" and "
				 <<teab;
			  else if(target>1)
				 cout<<"\n MATCH WON BY "<<teaa;

		       }
		     }
		       return target;
		     }
		     else if(m==7)
		     {
		       extra=extra+1;
		       totalruns1++;
		       target=target-1;
		       if(target<=0)
		       {
			  cout<<"\n";
			  cout<<"\n\t MATCH LOSS BY "<<teaa;
			  cout<<"\n";
		       }
		       cout<<"\n";
		       cout<<"\n ....WIDE BALL....";
		       cout<<"\n";
		       cout<<"\n ....RUNS REQUIED... "<<target;
		       cout<<"\n ....BALL REMAINED.. "<<(o*6)-ballcount;

		       return target;
		     }
		     else if(m==8)
		     {
		       cout<<"\n ....OH THAT'S OUT... ";
		       cout<<"\n OUT PLAYER "<<pname[out];
		       cout<<"\n RUNS "<<runsmade[out];
		       ball[out]++;
		       out++;
		       cout<<"\n";
		       cout<<"\n";
		       cout<<"\n NEW PLAYER "<<pname[out];
		       cout<<"\n RUNS "<<runsmade[out];
		       ballcount++;
		       cout<<"\n ....RUNS REQUIED... "<<target;
		       cout<<"\n ....BALL REMAINED.. "<<(o*6)-ballcount;
		       if(out>=max)
		       {
			  cout<<"\n\n\n\t\t INNINGS COMPLETED ";
		       }
		     if(ballcount%6==0)
		     {
		       over++;
		       cout<<over<<"\n\n\n\t\t\a OVER COMPLETED ";
		       if(over>=o)
		       {
			  cout<<"\n\a\a  INNINGS COMPLETED ";
			  if(target<=0)
				 cout<<"\n MATCH LOSS BY "<<teaa;
			  else if(target==1)
				 cout<<"\n TIE MATCH BETWEEN "<<teaa<<" and "
				 <<teab;
			  else if(target>1)
				 cout<<"\n MATCH WON BY "<<teaa;

		       }
		     }
		       return target;
		     }

		}
		int getdata()
		{
			cout<<"\n..........TEAM..........";
			cout<<"\n";
			cout<<setw(10)<<"PLAYER";
			cout<<setw(5)<<"  RUNS";
			cout<<setw(5)<<"  SIXS";
			cout<<setw(5)<<"  FOURS";
			cout<<setw(5)<<"  BALLS";
			for(int i=0;i<11;i++)
			{
			     cout<<"\n";
			     cout<<setw(10)<<pname[i];
			     cout<<setw(5)<<runsmade[i];
			     cout<<setw(5)<<sixs[i];
			     cout<<setw(5)<<fours[i];
			     cout<<setw(7)<<ball[i];
			}

			cout<<"\n\t Extra        "<<extra;
			totalruns=totalruns+extra;
			cout<<"\n\t Team runs    "<<totalruns;
			totalruns=totalruns+1;
			cout<<"\n\t TARGET FOR "<<teab<<" IS "<<totalruns;
			return totalruns;
		}
		void getdata1()
		{
			cout<<"\n..........TEAM..........";
			cout<<"\n";
			cout<<setw(10)<<"PLAYER";
			cout<<setw(5)<<"  RUNS";
			cout<<setw(5)<<"  SIXS";
			cout<<setw(5)<<"  FOURS";
			cout<<setw(5)<<"  BALLS";
			for(int i=0;i<11;i++)
			{
			     cout<<"\n";
			     cout<<setw(10)<<pname[i];
			     cout<<setw(5)<<runsmade[i];
			     cout<<setw(5)<<sixs[i];
			     cout<<setw(5)<<fours[i];
			     cout<<setw(7)<<ball[i];
			}

			cout<<"\n\t Extra        "<<extra;
			cout<<"\n\t Team runs    "<<totalruns1;
			}

};
batsmen::batsmen()
{
	for(int i=0;i<12;i++)
	{
	       strcpy(pname[i],"NULL");
	       runsmade[i]=0;
	       sixs[i]=0;
	       fours[i]=0;
	       ball[i]=0;
	}
	ballcount=0;
	n=0;
	out=0;
	max=11;
	totalruns=0;
	totalruns1=0;
	over=0;
	extra=0;
}
void batsmen::putdata()
{
	cout<<"\n .....ENTER TEAM A NAME..... ";
	gets(teaa);
	cout<<"\n .....ENTER TEAM B NAME..... ";
	gets(teab);
	cout<<"\n .....ENTER PLAYERs OF "<<teaa;
	for(int i=0;i<11;i++)
	{
	       cout<<"\n ENTER NAME....NO "<<i+1<<" ";
	       gets(pname[i]);
	}
}
void batsmen::putdata1()
{
	cout<<"\n .....ENTER PLAYERs OF "<<teab;
	for(int i=0;i<11;i++)
	{
	       cout<<"\n ENTER NAME....NO "<<i+1<<" ";
	       gets(pname[i]);
	}

}
class bowler
{
	private:
		char pnam[11][25],ch;
		char teama[25],teamb[25];
		int  over,s;
		int  runsgiven[11];
		int  wicket[11],out,max;
		int  extra;
		int  choos;
		int total;
		int ballcount,ball[12];
		void choose()
		{
			cout<<"\n CHOOSE BOWLER ";
			for(int i=0;i<11;i++)
			{
			  cout<<" "<<i+1<<"."<<pnam[i];
			}
			cin>>choos;
			cout<<"\n  YOU WANT TO SELECT "<<pnam[choos-1]
			<<" Y/N ";
			cin>>ch;
			if(ch=='y'||ch=='Y')
				s=choos;

		}

	public:
		bowler()
		{

			for(int i=0;i<11;i++)
			{
			  strcpy(pnam[i],"NULL");
			  runsgiven[i]=0;
			  wicket[i]=0;
			  ball[i]=0;
			}
			over=0;
			extra=0;
			total=0;
			ballcount=0;
			out=0;
			max=11;
			choos=0;
			s=0;
		}

		void putdat()
		{
			cout<<"\n .....ENTER TEAM A NAME..... ";
			gets(teama);
			cout<<"\n .....ENTER TEAM B NAME..... ";
			gets(teamb);
			cout<<"\n .....ENTER PLAYER OF "<<teama;
			for(int i=0;i<11;i++)
			{
			  cout<<"\n ENTER PLAYER NAME....NO "<<i+1<<" ";
			  gets(pnam[i]);
			}
			choose();
		}
		void putdat1()
		{
			cout<<"\n .....ENTER PLAYERS OF "<<teamb;
			for(int i=0;i<11;i++)
			{
			  cout<<"\n ENTER PLAYER NAME....NO "<<i+1<<" ";
			  gets(pnam[i]);
			}
			cout<<"\n choose bowler for 1st over ";
			choose();
		}
		void uptodate(int n,int o)
		{

		if(choos==s)
		{
			if(n==0)
			{
				cout<<"\n .....DOT BALL BY......"<<pnam[s-1];
				ballcount++;
				ball[s-1]++;
				cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
			}
			else if(n==6)
			{
				total=total+n;

				runsgiven[s-1]=runsgiven[s-1]+6;
				ballcount++;
				ball[s-1]++;
				cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
			}
			else if(n==4)
			{
				total=total+n;

				runsgiven[s-1]=runsgiven[s-1]+4;
				ballcount++;
				ball[s-1]++;
				cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
			}
			else if(n==1||n==2||n==3)
			{
				total=total+n;
				runsgiven[s-1]=runsgiven[s-1]+n;
				ballcount++;
				ball[s-1]++;
				cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
			}
			else if(n==7)
			{
				total=total+1;
				extra++;
				cout<<"\n";
				cout<<"\n .....WIDE....."<<pnam[s-1];
				cout<<"\n";
			}
			else if(n==8)
			{
				wicket[s-1]=wicket[s-1]+1;
				cout<<"\n";
				cout<<"\n .....THAT'S A WICKET FOR...."<<pnam[s-1];
				cout<<"\n";
				ballcount++;
				ball[s-1]++;
				cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
			}
		     if(ballcount%6==0)
		     {
		       over++;
		       cout<<"\n\n\t\t\t\a OVER COMPLETED ";
		       if(over<o)
			  choose();
		       else if(over>=o)
		       {
			  cout<<"\n\n\t\t\t\a\a INNINGS COMPLETED";
		       }

		     }
		}

		}
		int uptodate1(int n,int o,int target)
		{

			if(choos==s)
			{
			if(n==0)
			{
				cout<<"\n .....DOT BALL BY......"<<pnam[s-1];
				ballcount=ballcount+1;
				ball[s-1]++;
				cout<<"\n .....RUNS REQUIED FOR "<<teamb<<" IS LESS THAN "<<target;
				cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
				if(ballcount%6==0)
				{
				over++;
				cout<<"\n\n\t\t\t\a OVER COMPLETED ";

				if(over<o)
				   choose();
				else if(over>=o)
				{
				   cout<<"\n\n\t\t\t\a\a INNINGS COMPLETED";
				   if(target==0)
					cout<<"\n TIE MATCH BETWEEN "<<teama<<" and "
					<<teamb;
				   else if(target>0)
					cout<<"\n MATCH WON BY  "<<teamb;
				   else
					cout<<"\n MATCH WON BY  "<<teama;

				}
				}
				return target;
			}
			else if(n==6)
			{
				total=total+n;
				target=target-6;
				runsgiven[s-1]=runsgiven[s-1]+6;
				ballcount=ballcount+1;
				ball[s-1]++;
				if(target<0)
					cout<<"\n .....MATCH LOSS BY "<<teamb;
				cout<<"\n .....RUNS REQUIED FOR "<<teamb<<" IS LESS THAN "<<target;
				cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
				if(ballcount%6==0)
				{
				over++;
				cout<<"\n\n\t\t\t\a OVER COMPLETED ";

				if(over<o)
				   choose();
				else if(over>=o)
				{
				   cout<<"\n\n\t\t\t\a\a INNINGS COMPLETED";
				   if(target==0)
					cout<<"\n TIE MATCH BETWEEN "<<teama<<" and "
					<<teamb;
				   else if(target>0)
					cout<<"\n MATCH WON BY  "<<teamb;
				   else
					cout<<"\n MATCH WON BY  "<<teama;

				}
				}
				return target;
			}
			else if(n==4)
			{
				total=total+n;
				target=target-4;
				runsgiven[s-1]=runsgiven[s-1]+4;
				ballcount=ballcount+1;
				ball[s-1]++;
				if(target<0)
					cout<<"\n .....MATCH LOSS BY "<<teamb;
				cout<<"\n .....RUNS REQUIED FOR "<<teamb<<" IS LESS THAN "<<target;
				cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
				if(ballcount%6==0)
				{
				over++;
				cout<<"\n\n\t\t\t\a OVER COMPLETED ";

				if(over<o)
				   choose();
				else if(over>=o)
				{
				   cout<<"\n\n\t\t\t\a\a INNINGS COMPLETED";
				   if(target==0)
					cout<<"\n TIE MATCH BETWEEN "<<teama<<" and "
					<<teamb;
				   else if(target>0)
					cout<<"\n MATCH WON BY  "<<teamb;
				   else
					cout<<"\n MATCH WON BY  "<<teama;

				}
				}
				return target;
			}
			else if(n==1||n==2||n==3)
			{
				total=total+n;
				target=target-n;
				runsgiven[s-1]=runsgiven[s-1]+n;

				ballcount=ballcount+1;
				ball[s-1]++;
				if(target<0)
					cout<<"\n .....MATCH LOSS BY "<<teamb;
				cout<<"\n .....RUNS REQUIED FOR "<<teamb<<" IS LESS THAN "<<target;
				cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
				if(ballcount%6==0)
				{
				over++;
				cout<<"\n\n\t\t\t\a OVER COMPLETED ";

				if(over<o)
				   choose();
				else if(over>=o)
				{
				   cout<<"\n\n\t\t\t\a\a INNINGS COMPLETED";
				   if(target==0)
					cout<<"\n TIE MATCH BETWEEN "<<teama<<" and "
					<<teamb;
				   else if(target>0)
					cout<<"\n MATCH WON BY  "<<teamb;
				   else
					cout<<"\n MATCH WON BY  "<<teama;

				}
				}
				return target;
			}
			else if(n==7)
			{
				total=total+1;
				target=target-1;
				extra++;
				cout<<"\n";
				cout<<"\n .....WIDE....."<<pnam[s-1];
				if(target<0)
					cout<<"\n .....MATCH LOSS BY "<<teamb;
				cout<<"\n";
				cout<<"\n .....RUNS REQUIED FOR "<<teamb<<" IS LESS THAN "<<target;
				cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
				return target;
			}
			else if(n==8)
			{
				out++;
				wicket[s-1]=wicket[s-1]+1;
				cout<<"\n";
				cout<<"\n .....THAT'S A WICKET FOR...."<<pnam[s-1];
				cout<<"\n";
				ballcount=ballcount+1;

				ball[s-1]++;
				if(target<0)
					cout<<"\n .....MATCH LOSS BY "<<teamb;
				cout<<"\n .....RUNS REQUIED FOR "<<teamb<<" IS LESS THAN "<<target;
				cout<<"\n ....BALL REMAINED... "<<(o*6)-ballcount;
				cout<<"\n ";
				if(out>=max)
				cout<<"\n ....MATCH WON BY "<<teamb;
				if(ballcount%6==0)
				{
				over++;
				cout<<"\n\n\t\t\t\a OVER COMPLETED ";

				if(over<o)
				   choose();
				else if(over>=o)
				{
				   cout<<"\n\n\t\t\t\a\a INNINGS COMPLETED";
				   if(target==0)
					cout<<"\n TIE MATCH BETWEEN "<<teama<<" and "
					<<teamb;
				   else if(target>0)
					cout<<"\n MATCH WON BY  "<<teamb;
				   else
					cout<<"\n MATCH WON BY  "<<teama;

				}
				}
				return target;
			}
			}
		}
		int getdat()
		{
			cout<<"\n..........TEAM..........";
			cout<<"\n";
			cout<<setw(10)<<"PLAYER";
			cout<<setw(5)<<"  RUNS";
			cout<<setw(5)<<"  WICKET";
			cout<<setw(7)<<"  OVERS";
			for(int i=0;i<11;i++)
			{
			     cout<<"\n";
			     cout<<setw(10)<<pnam[i];
			     cout<<setw(5)<<runsgiven[i];
			     cout<<setw(5)<<wicket[i];
			     cout<<setw(7)<<ball[i]/6;
			}

			cout<<"\n\t Extra        "<<extra;
			total=total+extra;
			cout<<"\n\t Team runs    "<<total;
			cout<<"\n\t TARGET FOR "<<teamb
			<<" IS LESS THAN "<<total;
			return total;

		}
		void getdat1()
		{
			cout<<"\n..........TEAM..........";
			cout<<"\n";
			cout<<setw(10)<<"PLAYER";
			cout<<setw(5)<<"  RUNS";
			cout<<setw(5)<<"  WICKET";
			cout<<setw(7)<<"  OVERS";
			for(int i=0;i<11;i++)
			{
			     cout<<"\n";
			     cout<<setw(10)<<pnam[i];
			     cout<<setw(5)<<runsgiven[i];
			     cout<<setw(5)<<wicket[i];
			     cout<<setw(7)<<ball[i]/6;
			}

			cout<<"\n\t Extra        "<<extra;
			total=total+extra;
			cout<<"\n\t Team runs    "<<total;
		}
};
void main()
{
	clrscr();
	int n,o,a,b,target,targe;
	int flag;
	char team1[25],team2[25];
	char ch='y';
	cout<<"\n\t\t             WELCOME                ";
	cout<<"\n\t\t          To Cricket Game           ";
	cout<<"\n\t\t           INCTURCTIONS             ";
	cout<<"\n\t\t    1.FOR ONE   RUN  PRESS = 1 ";
	cout<<"\n\t\t    2.FOR TWO   RUNS PRESS = 2 ";
	cout<<"\n\t\t    3.FOR THREE RUNS PRESS = 3 ";
	cout<<"\n\t\t    4.FOR FOUR  RUNS PRESS = 4 ";
	cout<<"\n\t\t    5.FOR SIX   RUNS PRESS = 6 ";
	cout<<"\n\t\t    6.FOR WIDE  PRESS      = 7 ";
	cout<<"\n\t\t    7.FOR WICKET PRESS     = 8" ;
	cout<<"\n\n";
	cout<<"\n\t\t WHO MANY OVERS DO YOU WANT TO PLAY ";
	cin>>o;
	clrscr();
	do
	{
	     cout<<"\n\t\t\t MENU ";
	     cout<<"\n\t\t  *********************";
	     cout<<"\n\t\t  **1. BATSMEN       **";
	     cout<<"\n\t\t  **                 **";
	     cout<<"\n\t\t  **2. BOWLER        **";
	     cout<<"\n\t\t  **                 **";
	     cout<<"\n\t\t  **3. PREVIOUS DATA **";
	     cout<<"\n\t\t  **                 **";
	     cout<<"\n\t\t  **4. EXIT          **";
	     cout<<"\n\t\t  *********************";
	     cout<<"\n";
	     cin>>n;

	     if(n==1)
	     {   cout<<"\n\t\t    1. 1st INNINGS ";
		 cout<<"\n\t\t    2. 2nd INNINGS ";
		 cout<<"\n";
		 cin>>a;
		 if(a==1)
		 {
			 clrscr();
			 int n1;
			 char ch1;
			 fstream f;
			 f.open("bats.dat",ios::app|ios::in);
			 batsmen bn;
			 bn.putdata();
			 do
			 {
			  clrscr();
			  cout<<"\n Enter batsmen runs ";
			  cin>>n1;
			  bn.update(n1,o);
			  cout<<"\n PRESS Y FOR CONTINUE INNINGS,PRESS N FOR EXIT INNINGS ";
			  cin>>ch1;
			 }while(ch1=='Y'||ch1=='y');
			 clrscr();
			 target=bn.getdata();
			 f.write((char*)&bn,sizeof(bn));
			 f.close();
		 }


		 else
		 {       clrscr();
			 int m;
			 char cm;
			 batsmen bn1;
			 fstream f;
			 f.open("bats1.dat",ios::app|ios::in);
			 bn1.putdata1();
			 do
			 {
			  clrscr();
			  cout<<"\n Enter batsmen runs ";
			  cin>>m;
			  target=bn1.updata1(m,o,target);
			  cout<<"\n PRESS Y FOR CONTINUE INNINGS,PRESS N FOR EXIT INNINGS ";
			  cin>>cm;
			 }while(cm=='y'||cm=='Y');
			 clrscr();
			 bn1.getdata1();
			 f.write((char*)&bn1,sizeof(bn1));
			 f.close();

		 }

	     }
	     else if(n==2)
	     {
		cout<<"\n\t\t    1. 1st INNINGS ";
		cout<<"\n\t\t    2. 2nd INNINGS ";
		cout<<"\n";
		cin>>b;
		if(b==1)
		{
		 clrscr();
		 int n2;
		 char ch2;
		 bowler br;
		 fstream f;
		 f.open("bowl.dat",ios::app|ios::in);
		 br.putdat();
		 do
		 {
		     clrscr();
		     cout<<"\n Enter RUNS GIVEN ";
		     cin>>n2;
		     br.uptodate(n2,o);
		     cout<<"\n PRESS Y FOR CONTINUE INNINGS,PRESS N FOR EXIT INNINGS ";
		     cin>>ch2;
		 }while(ch2=='y'||ch2=='Y');
		 clrscr();
		 targe=br.getdat();
		 f.write((char*)&br,sizeof(br));
		 f.close();
		}
		else
		{
		 clrscr();
		 int d;
		 char ca;
		 bowler br1;
		 fstream f;
		 f.open("bowl1.dat",ios::app|ios::in);
		 br1.putdat1();
		 do
		 {
		     clrscr();
		     cout<<"\n Enter RUNS GIVEN ";
		     cin>>d;
		     targe=br1.uptodate1(d,o,targe);
		     cout<<"\n PRESS Y FOR CONTINUE INNINGS,PRESS N FOR EXIT INNINGS ";
		     cin>>ca;
		 }while(ca=='y'||ca=='Y');
		 clrscr();

		 br1.getdat1();
		 f.write((char*)&br1,sizeof(br1));
		 f.close();
		}
	     }
	     else if(n==3)
	     {
		cout<<"\n\t\t 1.BATMING DATA ";
		cout<<"\n\t\t 2.BOWLING DATA ";
		cout<<"\n";
		cin>>flag;
		if(flag==1)
		{       fstream f;
			f.open("bats.dat",ios::app|ios::in);
			batsmen b;
			while(f.read((char*)&b,sizeof(b)))
			{
				b.getdata();
			}
			f.close();
			cout<<"\n";
			cout<<"\n PRESS ENTER TO CONTINUE ";
			system("pause");

			f.open("bats1.dat",ios::app|ios::in);
			while(f.read((char*)&b,sizeof(b)))
			{
				b.getdata1();
			}
			f.close();
		}
		if(flag==2)
		{       fstream f;
			f.open("bowl.dat",ios::out|ios::in);
			bowler ba;
			while(f.read((char*)&ba,sizeof(ba)))
			{
				ba.getdat();
			}
			f.close();
			cout<<"\n";
			cout<<"\n PRESS ENTER TO CONTINUE ";
			system("pause");

			f.open("bowl1.dat",ios::out|ios::in);
			while(f.read((char*)&ba,sizeof(ba)))
			{
				ba.getdat1();
			}
			f.close();
		}
	     }
	     else if(n==4)
	     {
		 exit(0);
	     }
	     else
	     {
		 cout<<"\n WRONG INPUT !!! ";
	     }
	     cout<<"\n PRESS Y FOR CONTINUE INNINGS,PRESS N FOR EXIT ";
	     cin>>ch;
	     clrscr();

	}while(ch=='y'||ch=='Y');

	getch();
}