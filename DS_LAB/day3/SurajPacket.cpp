#include<iostream>
using namespace std;
namespace suraj
{
class PacketArray{
	int _top,_packet;
	int data[3][3];
	public:
	PacketArray():_top(-1),_packet(-1){
	}

	bool IsPackeFull(){ return _packet==2;}
	bool IsArrayFull(){ return _top==2;}
	bool IsPackeEmpty(){ return _packet==-1;}
	bool IsArrayEmpty(){ return _top==-1;}

	void Increment(){
		_top++;
		if(_packet<0) _packet++;
		if(_top==3){
			_top=0;
			_packet++;
		}
	}
	void Decrement(){
		_top--;
		if(_packet<0) _packet++;
		if(_top==-1){
			_top=2;
			_packet--;
		}
	}
	void Push(int value){
		if(IsPackeFull() && IsArrayFull()){
			cout<<"Stack Overflow"<<endl;
		}
		else{
			Increment();
			data[_packet][_top]=value;
		}
	}
	int Pop(){
		int value;
		if(IsPackeEmpty()){
			cout<<"Stack Underflow"<<endl;
		}
		else{
			value = data[_packet][_top];
			cout<<"Pop value is ="<<value;
			Decrement();
		}
		return value;
	}
	int Peek(){
		return data[_packet][_top];		
	}
	void List(){
		cout<<"*************************"<<endl;
		if(IsPackeEmpty())
		{
			cout<<"List is Empty"<<endl;
		}
		else{
			int temptop= _top;
			for(int i=_packet;i>=0;i--){
				cout<<"Packet is "<<i<<endl;
				for(int j=temptop;j>=0;j--){
					cout<<data[i][j]<<endl;
				}
				temptop=2;
			}
		}
		cout<<"*************************"<<endl;
	}
};
int Menu(){
	int ch;
	cout<<"\n1.Push\t2.Pop\t3.Peek\t4.List\t5.Exit\nEnter your choice = ";
	cin>>ch;
	return ch;
}
void main(){
	int value,choice;

	PacketArray objPacket;
	while(1){
		cout<<"\n1.Push\t2.Pop\t3.Peek\t4.List\t5.Exit\nEnter your choice = ";
		cin>>choice;
		switch(choice){
		case 1:
			cout<<"Enter value = ";
			cin>>value;
			objPacket.Push(value);
			break;
		case 2:
			objPacket.Pop();
			break;
		case 3:
			value = objPacket.Peek();
			cout<<"Peek value is = "<<value<<endl;
			break;
		case 4:
			objPacket.List();
			break;
		case 5:
			exit(0);
		default:
			cout<<"Invail choice"<<endl;
			break;
		}
	}	
}
}