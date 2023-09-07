	#include<iostream>
	#include<fstream>
	#include<string.h>
	#include<stdlib.h>
	using namespace std;

	string buffer;
	class voter
	{
		string voter_id,voter_name,dob,gender,booth_no,voter_pswd;
	public:
		void unpack();
		void read();
		void read_file();
		void write_file();
		void display();
		void pack();
		int del(string);
		void modify(string);
		int search1(string);
	}v;

	class candidate{
		string candidate_id,candidate_name,gender,party_name,ward_no;
	public:
		void unpack();
		void read();
		void read_file();
		void write_file();
		void display();
		void pack();
		int del(string);
		void modify(string);
		int search1(string);

	}c;

	class party{
		string party_name,party_symbol;
	public:
		void unpack();
		void read();
		void read_file();
		void write_file();
		void display();
		void pack();
		int del(string);
		void modify(string);
		int search1(string);

	}p;

	class ward{
		string ward_no,ward_area,booth_count;
	public:
		void unpack();
		void read();
		void read_file();
		void write_file();
		void display();
		void pack();
		int del(string);
		void modify(string);
		int search1(string);

	}w;
	class boothofficer{
		string boothofficer_id, boothofficer_name,ward_area, ward_no;
	public:
		void unpack();
		void read();
		void read_file();
		void write_file();
		void display();
		void pack();
		int del(string);
		void modify(string);
		int search1(string);

	}b;


	int main()
	{
	int ch,table,f,x;
	cout<<"\n.........VARIABLE LENGTH RECORDS.........\n.........ONLINE VOTING SYSTEM...........\n";
	

	while(1){
		cout<<"\n1:VOTER 2:CANDIDATE 3.PARTY 4.WARD 5.BOOTH OFFICER\n";
		cin>>table;
		string vid,cid,pname,wno,bid;
		switch(table){
			case 1: cout<<"\nVOTER TABLE\n";
				x=1;
				while(x){
					cout<<"\n1:Pack 2:Unpack 3:Search 4:Modify 5.Delete 6.Main Menu\n";
					cin>>ch;
					switch(ch)
					{
						case 1:	v.read();
			      				v.pack();
			      				v.write_file();
			      				break;
						case 2:	v.read_file();
			       				break;
						case 3:	cout<<"Enter voter id to search\n";
							cin>>vid;
			        			v.search1(vid);
			        			break;
						case 4:	cout<<"Enter voter id to search\n";
			       				cin>>vid;
			       				v.modify(vid);
			       				break;
						case 5:cout<<"Enter voter id of the record to delete\n";
							cin>>vid;
							f=v.del(vid);
							if(f==0) cout<<"Record deleted!";
							break;
						case 6:x=0;
							break;
						default : exit(0);
					}//switch
				}//while
				break;
			case 2: cout<<"\nCANDIDATE TABLE\n";
				x=1;
				while(x){
					cout<<"\n1:Pack 2:Unpack 3:Search 4:Modify 5.Delete 6.main Menu\n";
					cin>>ch;
					switch(ch)
					{
						case 1:	c.read();
			      				c.pack();
			      				c.write_file();
			      				break;
						case 2:	c.read_file();
			       				break;
						case 3:	cout<<"Enter candidate id to search\n";
							cin>>cid;
			        			c.search1(cid);
			        			break;
						case 4:	cout<<"Enter candidate id to search\n";
			       				cin>>cid;
			       				c.modify(cid);
			       				break;
						case 5:cout<<"Enter candidate id of the record to delete\n";
							cin>>cid;
							f=c.del(cid);
							if(f==0) cout<<"Record deleted!";
							break;
						case 6:x=0;
							break;
						default : exit(0);
					}//switch
				}//while
				break;

			case 3: cout<<"\nPARTY TABLE\n";
				x=1;
				while(x){
					cout<<"\n1:Pack 2:Unpack 3:Search 4:Modify 5.Delete 6.main Menu\n";
					cin>>ch;
					switch(ch)
					{
						case 1:	p.read();
			      				p.pack();
			      				p.write_file();
			      				break;
						case 2:	p.read_file();
			       				break;
						case 3:	cout<<"Enter party name to search\n";
							cin>>pname;
			        			p.search1(pname);
			        			break;
						case 4:	cout<<"Enter party name to search\n";
			       				cin>>pname;
			       				p.modify(pname);
			       				break;
						case 5:cout<<"Enter party name of the record to delete\n";
							cin>>pname;
							f=p.del(pname);
							if(f==0) cout<<"Record deleted!";
							break;
						case 6:x=0;
							break;
						default : exit(0);
					}//switch
				}//while
				break;
			case 4: cout<<"\nWARD TABLE\n";
				x=1;
				while(x){
					cout<<"\n1:Pack 2:Unpack 3:Search 4:Modify 5.Delete 6.main Menu\n";
					cin>>ch;
					switch(ch)
					{
						case 1:	w.read();
			      				w.pack();
			      				w.write_file();
			      				break;
						case 2:	w.read_file();
			       				break;
						case 3:	cout<<"Enter ward number to search\n";
							cin>>wno;
			        			w.search1(wno);
			        			break;
						case 4:	cout<<"Enter ward number to search\n";
			       				cin>>wno;
			       				w.modify(wno);
			       				break;
						case 5:cout<<"Enter ward number of the record to delete\n";
							cin>>wno;
							f=w.del(wno);
							if(f==0) cout<<"Record deleted!";
							break;
						case 6:x=0;
							break;
						default : exit(0);
					}//switch
				}//while
				break;

      case 5: cout<<"\nBoothofficer TABLE\n";
				x=1;
				while(x){
					cout<<"\n1:Pack 2:Unpack 3:Search 4:Modify 5.Delete 6.main Menu\n";
					cin>>ch;
					switch(ch)
					{
						case 1:	b.read();
			      				b.pack();
			      				b.write_file();
			      				break;
						case 2:	b.read_file();
			       				break;
						case 3:	cout<<"Enter candidate id to search\n";
							cin>>bid;
			        			b.search1(bid);
			        			break;
						case 4:	cout<<"Enter candidate id to search\n";
			       				cin>>bid;
			       				b.modify(bid);
			       				break;
						case 5:cout<<"Enter candidate id of the record to delete\n";
							cin>>bid;
							f=b.del(bid);
							if(f==0) cout<<"Record deleted!";
							break;
						case 6:x=0;
							break;
						default : exit(0);
					}//switch
				}//while
				break;
                default:exit(0);
      }
	}
	}

	void voter::read()
	{
		cout<<"Enter details[voter id, voter name, date of birth, gender, voter password, booth number]\n";
		cin>>voter_id>>voter_name>>dob>>gender>>voter_pswd>>booth_no;
	}

	void voter::pack()
	{
		buffer.erase();
		buffer+=voter_id+"|"+voter_name+"|"+dob+"|"+gender+"|"+voter_pswd+"|"+booth_no+"$\n";
	}

	void voter::read_file()
	{
		fstream fp;
		fp.open("voter.txt",ios::in);
		while(!fp.eof())
		{
			buffer.erase();
			getline(fp,buffer);
			v.unpack();
			if(!fp.eof())
				v.display();
		}
		fp.close();
	}

	void voter::unpack()
	{
		int i=0;
		voter_id.erase();
		while(buffer[i]!='|')
		voter_id+=buffer[i++];
		i++;

		voter_name.erase();
		while(buffer[i]!='|')
		voter_name+=buffer[i++];
		i++;

		dob.erase();
		while(buffer[i]!='|')
		dob+=buffer[i++];
		i++;

		gender.erase();
		while(buffer[i]!='|')
		gender+=buffer[i++];
		i++;

		voter_pswd.erase();
		while(buffer[i]!='|')
		voter_pswd+=buffer[i++];
		i++;

		booth_no.erase();
		while(buffer[i]!='$')
		booth_no+=buffer[i++];
	}

	void voter::display()
	{
		cout<<"\nVoter Id: "<<voter_id<<"\nVoter Name:"<<voter_name<<"\nDate of Birth: "<<dob<<"\nGender: "<<gender<<"\nVoter Password: "<<voter_pswd<<"\nBooth number: "<<booth_no<<endl;
	}
	int voter::search1(string vid)
	{
		fstream fp;
		int recno=0,flag=0,pos=0;
		fp.open("voter.txt",ios::in);
		while(!fp.eof())
		{
			buffer.erase();
			getline(fp,buffer);
			recno++;
			v.unpack();
			if(voter_id==vid)
			{
				cout<<"\nRecord is "<<buffer;
				cout<<"\nRecord Found at Position "<<recno;
				pos=fp.tellg();
				flag=1;
				return pos;
			}
		}
		fp.close();
		if(!flag)
			cout<<"Record not found\n";
		return pos;
	}

	int voter::del(string vid)
	{
		fstream fp;
		char mark='*',t;
		int pos,flag=0;
		pos=v.search1(vid);
		if(pos)
		{
			fp.open("voter.txt",ios::in|ios::out);
			pos-=2;
			t=fp.get();
			while(t!='$'&&pos!=0)
			{
				pos--;
				fp.seekp(pos,ios::beg);
				t=fp.get();
			}

			if(pos!=0)
				fp.seekp(pos+2,ios::beg);
			else
				fp.seekp(pos,ios::beg);

			fp.put(mark);
			flag=1;
		}
		fp.close();
		if(!flag)
			return 0;
		else
			return 1;
	}

	void voter::modify(string vid)
	{
		if(del(vid))
		{
		cout<<"\nEnter details[voter id, voter name, date of birth, gender, voter password, booth number] to modify\n";
		cin>>voter_id>>voter_name>>dob>>gender>>voter_pswd>>booth_no;
		buffer.erase();
		v.pack();
		v.write_file();
		}
	}


	void voter::write_file()
	{
		fstream fp;
		fp.open("voter.txt",ios::out|ios::app);
		fp<<buffer;
		fp.close();
	}

//***********************************************************************************************************************

	void candidate::read()
	{
		cout<<"Enter details[Candidate id, candidate name, gender, party name, ward number]\n";
		cin>>candidate_id>>candidate_name>>gender>>party_name>>ward_no;
	}

	void candidate::pack()
	{
		buffer.erase();
		buffer+=candidate_id+"|"+candidate_name+"|"+gender+"|"+party_name+"|"+ward_no+"$\n";
	}

	void candidate::read_file()
	{
		fstream fp;
		fp.open("candidate.txt",ios::in|ios::out);
		while(!fp.eof())
		{
			buffer.erase();
			getline(fp,buffer);
			unpack();
			if(!fp.eof())
			display();
		}
		fp.close();
	}

	void candidate::unpack()
	{
		int i=0;
		candidate_id.erase();
		while(buffer[i]!='|')
		candidate_id+=buffer[i++];
		i++;

		candidate_name.erase();
		while(buffer[i]!='|')
		candidate_name+=buffer[i++];
		i++;

		gender.erase();
		while(buffer[i]!='|')
		gender+=buffer[i++];
		i++;

		party_name.erase();
		while(buffer[i]!='|')
		party_name+=buffer[i++];
		i++;

		ward_no.erase();
		while(buffer[i]!='$')
		ward_no+=buffer[i++];
	}


	void candidate::display()
	{
		cout<<"\nCandidate Id: "<<candidate_id<<"\nCandidate Name:"<<candidate_name<<"\nGender: "<<gender<<"\nParty Name: "<<party_name<<"\nWard number: "<<ward_no<<endl;
	}
	int candidate::search1(string cid)
	{
		fstream fp;
		int recno=0,flag=0,pos=0;
		fp.open("candidate.txt",ios::in);
		while(!fp.eof())
		{
			buffer.erase();
			getline(fp,buffer);
			recno++;
			c.unpack();
			if(candidate_id==cid)
			{
				cout<<"\nRecord is "<<buffer;
				cout<<"\nRecord Found at Position "<<recno;
				pos=fp.tellg();
				flag=1;
				return pos;
			}
		}
		fp.close();
		if(!flag)
			cout<<"Record not found\n";
		return pos;
	}

	int candidate::del(string cid)
	{
		fstream fp;
		char mark='*',t;
		int pos,flag=0;
		pos=c.search1(cid);
		if(pos)
		{
			fp.open("candidate.txt",ios::in|ios::out);
			pos-=2;
			t=fp.get();
			while(t!='$'&&pos!=0)
			{
				pos--;
				fp.seekp(pos,ios::beg);
				t=fp.get();
			}

			if(pos!=0)
				fp.seekp(pos+2,ios::beg);
			else
				fp.seekp(pos,ios::beg);

			fp.put(mark);
			flag=1;
		}
		fp.close();
		if(!flag)
			return 0;
		else
			return 1;
	}

	void candidate::modify(string cid)
	{
		if(del(cid))
		{
			cout<<"Enter details[Candidate id, candidate name, gender, party name, ward number]\n";
			cin>>candidate_id>>candidate_name>>gender>>party_name>>ward_no;
			buffer.erase();
			c.pack();
			c.write_file();
		}
	}


	void candidate::write_file()
	{
		fstream fp;
		fp.open("candidate.txt",ios::out|ios::app);
		fp<<buffer;
		fp.close();
	}

//**************************************************************************************************************************************************
	void party::read()
	{
		cout<<"Enter details[party name party symbol]\n";
		cin>>party_name>>party_symbol;
	}

	void party::pack()
	{
		buffer.erase();
		buffer+=party_name+"|"+party_symbol+"$\n";
	}

	void party::read_file()
	{
		fstream fp;
		fp.open("party.txt",ios::in);
		while(!fp.eof())
		{
			buffer.erase();
			getline(fp,buffer);
			p.unpack();
			if(!fp.eof())
				p.display();
		}
		fp.close();
	}

	void party::unpack()
	{
		int i=0;
		party_name.erase();
		while(buffer[i]!='|')
		party_name+=buffer[i++];
		i++;

		party_symbol.erase();
		while(buffer[i]!='$')
		party_symbol+=buffer[i++];

	}

	void party::display()
	{
		cout<<"\nParty Name: "<<party_name<<"\nParty Symbol:"<<party_symbol<<endl;
	}
	int party::search1(string pname)
	{
		fstream fp;
		int recno=0,flag=0,pos=0;
		fp.open("party.txt",ios::in);
		while(!fp.eof())
		{
			buffer.erase();
			getline(fp,buffer);
			recno++;
			p.unpack();
			if(party_name==pname)
			{
				cout<<"\nRecord is "<<buffer;
				cout<<"\nRecord Found at Position "<<recno;
				pos=fp.tellg();
				flag=1;
				return pos;
			}
		}
		fp.close();
		if(!flag)
			cout<<"Record not found\n";
		return pos;
	}

	int party::del(string pname)
	{
		fstream fp;
		char mark='*',t;
		int pos,flag=0;
		pos=p.search1(pname);
		if(pos)
		{
			fp.open("party.txt",ios::in|ios::out);
			pos-=2;
			t=fp.get();
			while(t!='$'&&pos!=0)
			{
				pos--;
				fp.seekp(pos,ios::beg);
				t=fp.get();
			}

			if(pos!=0)
				fp.seekp(pos+2,ios::beg);
			else
				fp.seekp(pos,ios::beg);

			fp.put(mark);
			flag=1;
		}
		fp.close();
		if(!flag)
			return 0;
		else
			return 1;
	}

	void party::modify(string pname)
	{
		if(del(pname))
		{
		cout<<"Enter details[party name party symbol]\n";
		cin>>party_name>>party_symbol;
		buffer.erase();
		p.pack();
		p.write_file();
		}
	}


	void party::write_file()
	{
		fstream fp;
		fp.open("party.txt",ios::out|ios::app);
		fp<<buffer;
		fp.close();
	}

//***************************************************************************************************************************************************
	void ward::read()
	{
		cout<<"Enter details[ward number, ward area, booth count]\n";
		cin>>ward_no>>ward_area>>booth_count;
	}

	void ward::pack()
	{
		buffer.erase();
		buffer+=ward_no+"|"+ward_area+"|"+booth_count+"$\n";
	}

	void ward::read_file()
	{
		fstream fp;
		fp.open("ward.txt",ios::in);
		while(!fp.eof())
		{
			buffer.erase();
			getline(fp,buffer);
			w.unpack();
			if(!fp.eof())
				w.display();
		}
		fp.close();
	}

	void ward::unpack()
	{
		int i=0;
		ward_no.erase();
		while(buffer[i]!='|')
		ward_no+=buffer[i++];
		i++;

		ward_area.erase();
		while(buffer[i]!='|')
		ward_area+=buffer[i++];
		i++;

		booth_count.erase();
		while(buffer[i]!='$')
		booth_count+=buffer[i++];

	}

	void ward::display()
	{
		cout<<"\nWard Number: "<<ward_no<<"\nWard Area:"<<ward_area<<"\nBooth count: "<<booth_count<<endl;
	}
	int ward::search1(string wno)
	{
		fstream fp;
		int recno=0,flag=0,pos=0;
		fp.open("ward.txt",ios::in);
		while(!fp.eof())
		{
			buffer.erase();
			getline(fp,buffer);
			recno++;
			w.unpack();
			if(ward_no==wno)
			{
				cout<<"\nRecord is "<<buffer;
				cout<<"\nRecord Found at Position "<<recno;
				pos=fp.tellg();
				flag=1;
				return pos;
			}
		}
		fp.close();
		if(!flag)
			cout<<"Record not found\n";
		return pos;
	}

	int ward::del(string wno)
	{
		fstream fp;
		char mark='*',t;
		int pos,flag=0;
		pos=w.search1(wno);
		if(pos)
		{
			fp.open("ward.txt",ios::in|ios::out);
			pos-=2;
			t=fp.get();
			while(t!='$'&&pos!=0)
			{
				pos--;
				fp.seekp(pos,ios::beg);
				t=fp.get();
			}

			if(pos!=0)
				fp.seekp(pos+2,ios::beg);
			else
				fp.seekp(pos,ios::beg);

			fp.put(mark);
			flag=1;
		}
		fp.close();
		if(!flag)
			return 0;
		else
			return 1;
	}

	void ward::modify(string wno)
	{
		if(del(wno))
		{
		cout<<"Enter details[ward number, ward area, booth count]\n";
		cin>>ward_no>>ward_area>>booth_count;
		buffer.erase();
		w.pack();
		w.write_file();
		}
	}


	void ward::write_file()
	{
		fstream fp;
		fp.open("ward.txt",ios::out|ios::app);
		fp<<buffer;
		fp.close();
	}
//***********************************************************************************************************************

    void boothofficer::read()
	{
		cout<<"Enter details[boothofficer id, boothofficer name, ward area, ward no]\n";
		cin>>boothofficer_id>>boothofficer_name>>ward_area>>ward_no;

	}

	void boothofficer::pack()
	{
		buffer.erase();
		buffer+=boothofficer_id+"|"+boothofficer_name+"|"+ward_area+"|"+ward_no+"$\n";
	}

	void boothofficer::read_file()
	{
		fstream fp;
		fp.open("boothofficer.txt",ios::in|ios::out);
		while(!fp.eof())
		{
			buffer.erase();
			getline(fp,buffer);
			b.unpack();
			if(!fp.eof())
				b.display();
		}
		fp.close();
	}

	void boothofficer::unpack()
	{
		int i=0;
		boothofficer_id.erase();
		while(buffer[i]!='|')
		boothofficer_id+=buffer[i++];
		i++;

		boothofficer_name.erase();
		while(buffer[i]!='|')
		boothofficer_name+=buffer[i++];
		i++;

		ward_area.erase();
		while(buffer[i]!='|')
		ward_area+=buffer[i++];
		i++;

		ward_no.erase();
		while(buffer[i]!='$')
		ward_no+=buffer[i++];

	}

	void boothofficer::display()
	{

	 cout<<"\nboothofficer id: "<<boothofficer_id<<"\nboothofficer name:"<<boothofficer_name<<"\nward_area: "<<ward_area<<"\nWard number: "<<ward_no<<endl;
	}

	int boothofficer::search1(string bid)
	{
		fstream fp;
		int recno=0,flag=0,pos=0;
		fp.open("boothofficer.txt",ios::in);
		while(!fp.eof())
		{
			buffer.erase();
			getline(fp,buffer);
			recno++;
			b.unpack();
			if(boothofficer_id==bid)
			{
				cout<<"\nRecord is "<<buffer;
				cout<<"\nRecord Found at Position "<<recno;
				pos=fp.tellg();
				flag=1;
				return pos;
			}
		}
		fp.close();
		if(!flag)
			cout<<"Record not found\n";
		return pos;
	}

	int boothofficer::del(string bid)
	{
		fstream fp;
		char mark='*',t;
		int pos,flag=0;
		pos=b.search1(bid);
		if(pos)
		{
			fp.open("boothofficer.txt",ios::in|ios::out);
			pos-=2;
			t=fp.get();
			while(t!='$'&&pos!=0)
			{
				pos--;
				fp.seekp(pos,ios::beg);
				t=fp.get();
			}

			if(pos!=0)
				fp.seekp(pos+2,ios::beg);
			else
				fp.seekp(pos,ios::beg);

			fp.put(mark);
			flag=1;
		}
		fp.close();
		if(!flag)
			return 0;
		else
			return 1;
	}

	void boothofficer::modify(string bid)
	{
		if(del(bid))
		{
		cout<<"Enter details[boothofficer id ,boothofficer name, ward area,ward no]\n";
		cin>>boothofficer_id>>boothofficer_name>>ward_area>>ward_no;
		buffer.erase();
		b.pack();
		b.write_file();
		}
	}


	void boothofficer::write_file()
	{
		fstream fp;
		fp.open("boothofficer.txt",ios::out|ios::app);
		fp<<buffer;
		fp.close();
	}
