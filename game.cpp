#include<iostream>
using namespace std;

	char arr[3][3]={'a','b','c','d','e','f','g','h','i'};
	char turn='A';
	bool gameover= false;
	char n;
void board(){
	cout<<"PLAYER 1 : X"<<endl;
	cout<<"PLAYER 2 : 0"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  "<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"  "<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  "<<endl;
	cout<<"     |     |     "<<endl;
}
void input(char n){
	switch(n){
		case 'a':
			if(turn=='A')
			arr[0][0]='X';
			else
			arr[0][0]='O';
			break;
		case 'b':
			if(turn=='A')
			arr[0][1]='X';
			else
			arr[0][1]='O';
			break;
		case 'c':
			if(turn=='A')
			arr[0][2]='X';
			else
			arr[0][2]='O';
			break;
		case 'd':
			if(turn=='A')
			arr[1][0]='X';
			else
			arr[1][0]='O';
			break;
		case 'e':
			if(turn=='A')
			arr[1][1]='X';
			else
			arr[1][1]='O';
			break;
		case 'f':
			if(turn=='A')
			arr[1][2]='X';
			else
			arr[1][2]='O';
			break;
		case 'g':
			if(turn=='A')
			arr[2][0]='X';
			else
			arr[2][0]='O';
			break;
		case 'h':
			if(turn=='A')
			arr[2][1]='X';
			else
			arr[2][1]='O';
			break;
		case 'i':
			if(turn=='A')
			arr[2][2]='X';
			else
			arr[2][2]='O';
			break;
		default :
			cout<<"INVALID ENTRY"<<endl;
	}
	if(turn=='A')
	turn='B';
	else
	turn='A';
	system("cls");
}
void wincheck(){
	if((turn=='A'&&arr[0][0]==arr[0][1]&&arr[0][1]==arr[0][2]) || (turn=='A'&&arr[1][0]==arr[1][1]&&arr[1][1]==arr[1][2]) || (turn=='A'&&arr[2][0]==arr[2][1]&&arr[2][1]==arr[2][2]) || (turn=='A'&&arr[0][0]==arr[1][0]&&arr[1][0]==arr[2][0]) || (turn=='A'&&arr[0][1]==arr[1][1]&&arr[1][1]==arr[2][1]) || (turn=='A'&&arr[0][2]==arr[1][2]&&arr[1][2]==arr[2][2]) || (turn=='A'&&arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])||(turn=='A'&&arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0])){
		cout<<"PLAYER B WINS"<<endl;
		gameover=true;
	}
	if((turn=='B'&&arr[0][0]==arr[0][1]&&arr[0][1]==arr[0][2]) || (turn=='B'&&arr[1][0]==arr[1][1]&&arr[1][1]==arr[1][2]) || (turn=='B'&&arr[2][0]==arr[2][1]&&arr[2][1]==arr[2][2]) || (turn=='B'&&arr[0][0]==arr[1][0]&&arr[1][0]==arr[2][0]) || (turn=='B'&&arr[0][1]==arr[1][1]&&arr[1][1]==arr[2][1]) || (turn=='B'&&arr[0][2]==arr[1][2]&&arr[1][2]==arr[2][2]) || (turn=='B'&&arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])||(turn=='B'&&arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0])){
		cout<<"PLAYER A WINS"<<endl;
		gameover=true;
	}
	if((arr[0][0]=='X'||arr[0][0]=='O')&&(arr[0][1]=='X'||arr[0][1]=='O')&&(arr[0][2]=='X'||arr[0][2]=='O')&&(arr[1][0]=='X'||arr[1][0]=='O')&&(arr[1][1]=='X'||arr[1][1]=='O')&&(arr[1][2]=='X'||arr[1][2]=='O')&&(arr[2][0]=='X'||arr[2][0]=='O')&&(arr[2][1]=='X'||arr[2][1]=='O')&&(arr[2][2]=='X'||arr[2][2]=='O')){
		cout<<"GAME DRAW !! ";
		gameover=true;
	}
}
int main(){
	cout<<endl;
	cout<<endl;
	while(!gameover){
	board();
	if(turn=='A')
	cout<<"PLAYER 1 ON WHICH LOCATION YOU WANT TO MARK : ";
	else
	cout<<"PLAYER 2 ON WHICH LOCATION YOU WANT TO MARK : ";
	cin>>n;
	if(n=='X'||n=='O'){
		cout<<"Location is Marked !!\n";
		if(turn=='A')
	cout<<"PLAYER 1 ON WHICH LOCATION YOU WANT TO MARK : ";
	else
	cout<<"PLAYER 2 ON WHICH LOCATION YOU WANT TO MARK : ";
	cin>>n;
	}
	input(n);
	wincheck();
	}
return 0;
}
