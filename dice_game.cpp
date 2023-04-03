#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void rule(){
    cout<<"請輸入你的選擇(請輸入選項數字): "<<endl;
	cout<<"選項 1.我要玩，規則:點數較大者勝"<<endl
		<<"選項 2.我要玩，規則:點數較小者勝"<<endl
		<<"選項 3.我不玩了，退出遊戲"<<endl<<endl;
}
int main(){
	cout<<"歡迎來到擲骰子的世界，在這裡一次只會骰一次骰子喔^__^"<<endl<<endl;
	rule();
		
	int n;
	int d1, d2; 
	int a=0, b=0, c=0;
	
	while(cin>>n){
		cout<<endl;
		
		if(n!=1&&n!=2&&n!=3){
			cout<<"尼的腦袋還好嗎(*‘ v`*)??"<<endl 
				<<"輸入錯誤，請再次輸入數字(1 or 2 or 3):"<<endl<<endl;
		}
		
		srand(time(NULL));
		d1=rand()%6+1;
		d2=rand()%6+1;
		
		if(n==1){
			cout<<"選擇規則:點數大者勝"<<endl;
			cout<<"您的點數: "<<d1<<endl;
			cout<<"電腦的點數: "<<d2<<endl;
			
			if(d1>d2){
				cout<<"哈哈，你贏了--_(:3 」∠ )_"<<endl<<endl;
				a++;
			}else if(d1==d2){
				cout<<"_(┐「ε:)_--這場平局唷--_(:3 」∠ )_"<<endl<<endl;
				c++;
		 	}else if(d1<d2){
				cout<<"_(┐「ε:)_--該課金囉，你輸了"<<endl<<endl;
				b++;
			}
			
			rule();
		}
		if(n==2){
			cout<<"選擇規則:點數小者勝"<<endl;
			cout<<"您的點數: "<<d1<<endl;
			cout<<"電腦的點數: "<<d2<<endl;
			
			if(d1>d2){
				cout<<"_(┐「ε:)_--該課金囉，你輸了"<<endl<<endl;
				b++;
			}else if(d1==d2){
				cout<<"_(┐「ε:)_--這場平局唷--_(:3 」∠ )_"<<endl<<endl;
				c++;
			}else if(d1<d2){
				cout<<"哈哈，你贏了--_(:3 」∠ )_"<<endl<<endl;
				a++;
			} 	
			
			rule();
		}
		if(n==3){
			cout<<"( ⊙_⊙)≡o────★尼竟然要結束遊戲!!!"<<endl<<endl;
			cout<<"尼的戰績: "<<endl<<endl;
			cout<<"---你贏了"<<a<<"場"<<endl<<endl;
			cout<<"-------你輸了"<<b<<"場"<<endl<<endl;
			cout<<"----------平局了"<<c<<"場"<<endl<<endl;
			cout<<" 下次要再來玩喔喔喔喔喔喔喔喔喔"<<endl;
			cout<<"◢▆▅▄▃ ╰(〞︶〝) ╯ ▃▄▅▆◣";
			break;
		}
	}
}
