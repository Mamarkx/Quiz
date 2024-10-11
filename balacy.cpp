#include<iostream>
#include<windows.h>
#include <unistd.h>
#include<conio.h>
#include<dos.h>
using namespace std;
void Main();
void info();
void GE5();
void Home();
void GE6();
void GE7();
void GE8();
void MS101();
void CCS103();
void FILDIS();
void NSTP2();
void PE2();
string name;
string sec;
int main(){
	Main();
	return 0;
}
void Main(){
	
	int x,i;
	cout<<"Enter Your Name: ";
	cin.ignore(2,'\n');
	getline(cin,name);
	cout<<"Enter Your Section: ";
  	cin.ignore(2,'\n');
	getline(cin,sec);
	system("CLS");
	system("color 0a");
 cout<<"\n\n\n\t\t\t\t\t\t\t Please wait while loading\n\n";
 char a=177, b=219;
 cout<<"\t\t\t\t\t\t\t\t";
 for (int i=0;i<=15;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t\t\t\t\t\t";
 for (int i=0;i<=15;i++)
 {
  cout<<b;
  for (int j=0;j<=1e8;j++); //You can also use sleep function instead of for loop
 }


 system("CLS");
 info();
}
    
	
	

void info()
{
	int x;
	cout<<endl;
	cout<<"\t\t\tChoose a subject to take a Quiz on."<<endl; 
	cout<<"-----------------------------------------------------------------------------------------------------*\n";         
	cout<<"* 1. GE8                                                                                             *\n"<<endl;
	cout<<"* 2. NSTP2                                                                                           *\n"<<endl;
	cout<<"* 3. CCS103                                                                                          *\n"<<endl;
	cout<<"* 4. FILDIS                                                                                          *\n"<<endl;
	cout<<"* 5. MS101                                                                                           *\n"<<endl;
	cout<<"* 6. PE2                                                                                             *\n"<<endl;
	cout<<"* 7. GE5                                                                                             *\n "<<endl;
	cout<<"* 8. GE6                                                                                             *\n "<<endl;
	cout<<"* 9. GE7                                                                                             *\n "<<endl;
	cout<<"* 10. Exit                                                                                           *\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------*\n";
	cout<<endl;
	cout<<"Select a Subject : ";
	cin>>x;	
	
	switch(x){
  		case 1:system("CLS");GE8();break;
  		case 2:system("CLS");NSTP2();break;
  		case 3:system("CLS");CCS103();break;
  		case 4:system("CLS");FILDIS();break;
  		case 5:system("CLS");MS101();break;
  		case 6:system("CLS");PE2();break;
  		case 7:system("CLS");GE5();break;
  		case 8:system("CLS");GE6();break;
  		case 9:system("CLS");GE7();break;
  		case 10:cout<<"----------------------------------------THANKYOUUUU------------------------------------------------"<<endl;
		exit(0);
		break;
  		default:cout<<"Invalid"<<endl<<endl;
		  Main();	
	
}
}

void Home(){
	char g;
	cout<<"X FOR MENU\t\t\t\tY FOR EXIT"<<endl;
	cin>>g;
	switch(g){
		case'x':case'X':system("CLS");info();break;
		case 'y':case'Y':system("CLS");exit(0);break;
		default:system("CLS");cout<<"ERRRROORRRRRR";
	}
}
void GE8(){
	
	char ans;

	int y;
	float score=0,average;



	
	cout<<"\t\t\t GE8  -  Ethics "<<endl;
	cout<<endl;
	cout<<endl;
	


	cout<<endl;
	cout<<"Instruction : Choose the letter of the correct answer."<<endl;
	cout<<"1.) An___________may leave an individual to question their values, feel guilty about their action , and feel burdened or relieved."<<endl;
	cout<<"A. Dilemma"<<endl;
	cout<<"B. Moral dilemma"<<endl;//correct
	cout<<"C. Ethical dilemmma"<<endl;
	cout<<"D. Classical dilemma"<<endl;
	cout<<"Your Answer: "; 
	cin>>ans;
	switch(ans){case 'B':case 'b': score++; break;}
	cout<<endl;
	
	cout<<"2.) The__________or dilemmas are related to the embedded ethical standards in formal organizations"<<endl;
	cout<<"A. Micro level "<<endl;
	cout<<"B. Organizational level"<<endl;//correct
	cout<<"C. Sytematic level"<<endl;
	cout<<"D. Individual level"<<endl;
	cout<<"Your Answer : ";
	cin>>ans;
	switch(ans){case 'B':case 'b': score++; break;}
	cout<<endl;
	
	cout<<"3.) Decisions should be unbiased without favoritism or prejudice."<<endl;
	cout<<"A. Integrity"<<endl;
	cout<<"B. Equity"<<endl;
	cout<<"C. Loyalty"<<endl;
	cout<<"D. Impartiality"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"4.)__________ is a choice between two or more alternatives in which the outcomes are equalily undesirable or favorable."<<endl;
	cout<<"A. Dilemma"<<endl;
	cout<<"B. Moral dilemma"<<endl;
	cout<<"C. Ethical dilemma"<<endl;
	cout<<"D. Classical dilemma "<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"5.)__________ can be the same thing as forgetting."<<endl;
	cout<<"A. Rights"<<endl;
	cout<<"B. Freedom"<<endl;
	cout<<"C. Excuse"<<endl;
	cout<<"D. Forgiveness"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"6.) An ethical person accepts individual differences and beliefs and judges'others only on their character."<<endl;
	cout<<"A. Tolerance"<<endl;//correct
	cout<<"B. Reliable"<<endl;
	cout<<"C. Safeguard"<<endl;
	cout<<"D. Avoidance"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"7.)______________ regulates and controls the inner and external motives of a person."<<endl;
	cout<<"A. Religion"<<endl;
	cout<<"B. Law"<<endl;
	cout<<"C. Morality"<<endl;//correct
	cout<<"D. Ethics"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"8.)______________arises when an individual involuntary chooses among two morally sound desions, but they may struggle with the conventional limitations of a commercial, a state, agency , or the law."<<endl;
	cout<<"A. Moral dilemma"<<endl;
	cout<<"B. Ethical dilemma"<<endl;//correct
	cout<<"C. Classical dilemma"<<endl;
	cout<<"D. dilemma "<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"9.) It is scarely possible to be truly ethical and not genuinely concerned with the welfare of others.What universal values is this?"<<endl;
    cout<<"A. Citizenship"<<endl;
	cout<<"B. Diligent"<<endl;
	cout<<"C. Caring"<<endl;//correct
	cout<<"D. Responsible"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"10.) This refers to an end justifies the means attitude."<<endl;
    cout<<"A. Self-righteousness"<<endl;//correct
	cout<<"B. Fairness"<<endl;
	cout<<"C. Values"<<endl;
	cout<<"D. Frankness"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"11.)___________ is about promoting and protecting the interests of people, organizations or affilations"<<endl;
	cout<<"A. Caring"<<endl;
	cout<<"B. Loyalty"<<endl;//correct
	cout<<"C. Truthfulness"<<endl;
	cout<<"D. Citizenship "<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"12.) This means that the weakness, disadvantage, or ignorance of others should not be taken advantage of."<<endl;
	cout<<"A. Equity"<<endl;//correct
	cout<<"B. Frankness"<<endl;
	cout<<"C. Fairness"<<endl;
	cout<<"D. Values"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"13.)__________ prohibits stealing,cheating,fraud,and trickery."<<endl;
	cout<<"A. Honesty in conduct"<<endl;//correct
	cout<<"B. Reliability"<<endl;
	cout<<"C. Integrity"<<endl;
	cout<<"D. Caring"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"14.)Generally,__________encourages 'The Good',regarding the well-being and welfare of human-beings,animals,and the environment"<<endl;
	cout<<"A. Nonmoral standard"<<endl;
	cout<<"B. Moral standard"<<endl;
	cout<<"C. Law"<<endl;
	cout<<"D. Religion"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"15.) is the refusal to see a situation clearly."<<endl;
	cout<<"A. Self-deception"<<endl;//correct
	cout<<"B. Fairness"<<endl;
	cout<<"C. Values"<<endl;
	cout<<"D. Equity"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	cout<<"*******************************|        RESULT        |***************************************"<<endl;	
	cout<<" Name:  "<<name<<endl;
	cout<<" Section :  "<<sec<<endl;
	cout<<" Your Score: "<<score<<"/15"<<endl;
	average = (score / 15 ) *50+50;
	cout<<" Average : "<<average<<endl;
	if( average>=75){
		cout<<" Remark : Passed"<<endl;
	}
	else{
		cout<<" Remark : Failed"<<endl;
	}
	cout<<"*********************************************************************************************"<<endl;
	cout<<endl<<endl<<endl;

Home();
		
}
void NSTP2(){
	char ans;
	string a,s,d;
	int y;
	float score=0,average;



	
	cout<<"\t\t\t NSTP2  -  NATIONAL SERVICE TRAINING PROGRAM 2 "<<endl;
	cout<<endl;
	cout<<endl;
	

	cout<<endl;
	cout<<"Instruction : Choose the letter of the correct answer."<<endl;	
	cout<<"1.) When was the first automated election in the philippines?"<<endl;
	cout<<"A. May 2010"<<endl;//correct 
	cout<<"B. May 2008"<<endl;
	cout<<"C. May 2009"<<endl;
	cout<<"D. May 2011"<<endl;
	cout<<"Your Answer: "; 
	cin>>ans;
	switch(ans){case 'A':case 'a': score++; break;}
	cout<<endl;
	
	cout<<"2.) What electoral scandal did  Gloria Arroyo when she calls up one of the COMELEC Commissioner?"<<endl;
	cout<<"A. Hello Gracia"<<endl;
	cout<<"B. Hello Garci"<<endl;//correct
	cout<<"C. Hello Commie"<<endl;
	cout<<"D. Hello Grace"<<endl;
	cout<<"Your Answer : ";
	cin>>ans;
	switch(ans){case 'B':case 'b': score++; break;}
	cout<<endl;
	
	cout<<"3.) How many hours the streamer should be removed after the meeting or rally?"<<endl;
	cout<<"A. Within 12hours"<<endl;
	cout<<"B. Within 36hours"<<endl;
	cout<<"C. Within 18hours"<<endl;
	cout<<"D. Within 24hours"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"4.) It is democratic tool related to elections in which the electorate votes for or against the proposal,law or policy."<<endl;
	cout<<"A. Co-option"<<endl;
	cout<<"B. By-election"<<endl;
	cout<<"C. Referendum"<<endl;//correct
	cout<<"D. Primary Election"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"5.) How many days is the campaign period of local candidates,such as Congressman,Governor,Provincial Board,Mayor & Councilor"<<endl;
	cout<<"A. 30 days"<<endl;
	cout<<"B. 90 days"<<endl;
	cout<<"C. 60 days"<<endl;
	cout<<"D. 45 days"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"6.) Who is the president was alleged on manipulating electoral process in 1986?"<<endl;
	cout<<"A. Joseph Estrada"<<endl;
	cout<<"B. Ferdinand Marcos"<<endl;//correct
	cout<<"C. Fidel Ramos"<<endl;
	cout<<"D. Corazon Aquino"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"7.) What Republic Act known as the 'Fair Election Act?'"<<endl;
	cout<<"A. R.A 9008"<<endl;
	cout<<"B. R.A 9006"<<endl;//correct
	cout<<"C. R.A 9806"<<endl;
	cout<<"D. R.A 9086"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"8.) Who is the head officer in City Election Office?"<<endl;
	cout<<"A. City Engineer"<<endl;
	cout<<"B. City Registrar"<<endl;
	cout<<"C. City Election Supervisor"<<endl;
	cout<<"D. City Election Director"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"9.) How many days is the campaign period of Barangay Election?"<<endl;
    cout<<"A. 30 Days"<<endl;
	cout<<"B. 60 Days"<<endl;
	cout<<"C. 45 Days"<<endl;
	cout<<"D. 15 Days"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"10.) A characteristics of A Dynamic Learning Commmunities is.."<<endl;
    cout<<"A. Autonomous community members"<<endl;
	cout<<"B. Flexible and negotiated learning activies"<<endl;
	cout<<"C. All of the above"<<endl;//correct
	cout<<"D. Distributed control"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"11.) How many days be the streamer displayed before the date of campiagn meeting or rally?"<<endl;
	cout<<"A. 7 days"<<endl;
	cout<<"B. 5 days"<<endl;//correct
	cout<<"C. 6 days"<<endl;
	cout<<"D. 4 days"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"12.) When was the Omnibus Election Code approved? "<<endl;
	cout<<"A. Dec 05, 1986"<<endl;
	cout<<"B. Dec 03, 1986"<<endl;
	cout<<"C. Dec 03, 1985"<<endl;//correct
	cout<<"D. Dec 02, 1985"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"13.) An election in which all or most members of a given political body are up for election"<<endl;
	cout<<"A. General Election"<<endl;//correct
	cout<<"B. Primary Election"<<endl;
	cout<<"C. Presidential Election"<<endl;
	cout<<"D. By-Election"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"14.) PCOS means Precinct Count Optical?"<<endl;
	cout<<"A. Site"<<endl;
	cout<<"B. Scan"<<endl;//correct
	cout<<"C. System"<<endl;
	cout<<"D. Synchronization"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"15.) Any person who gives , offers or promises money or anything of value for or against any aspirant for the nomination or choice of a candidate."<<endl;
	cout<<"A. Vote-buying and Vote Selling"<<endl;//correct
	cout<<"B. Wagering upong result of Election"<<endl;
	cout<<"C. Conspiracy to bribe voters"<<endl;
	cout<<"D. Coercion of subordinates"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	cout<<"*******************************|        RESULT        |***************************************"<<endl;	
	cout<<" Name:  "<<name<<endl;
	cout<<" Section :  "<<sec<<endl;
	cout<<" Your Score: "<<score<<"/15"<<endl;
	average = (score / 15 ) *50+50;
	cout<<" Average : "<<average<<endl;
	if( average>=75){
		cout<<" Remark : Passed"<<endl;
	}
	else{
		cout<<" Remark : Failed"<<endl;
	}
	cout<<"*********************************************************************************************"<<endl;
	cout<<endl<<endl<<endl;

Home();
	
	
}
void CCS103(){
		char ans;
	string a,s,d;
	int y;
	float score=0,average;



	
	cout<<"\t\t\t CCS103  -  Computer Programming 2 "<<endl;
	cout<<endl;
	cout<<endl;
	

	cout<<"Instruction : Choose the letter of the correct answer."<<endl;	
	cout<<"1.) This statement to specify a block of code to be executed if the condition is false."<<endl;
	cout<<"A. Else"<<endl;//correct
	cout<<"B. Nested IF"<<endl;
	cout<<"C. IF"<<endl;
	cout<<"D. Else IF"<<endl;
	cout<<"Your Answer: "; 
	cin>>ans;
	switch(ans){case 'A':case 'a': score++; break;}
	cout<<endl;
	
	cout<<"2.) The statement to specify a new condition if the first condition is false"<<endl;
	cout<<"A. Else IF"<<endl;//correct
	cout<<"B. IF"<<endl;
	cout<<"C. Nested IF"<<endl;
	cout<<"D. Else"<<endl;
	cout<<"Your Answer : ";
	cin>>ans;
	switch(ans){case 'A':case 'a': score++; break;}
	cout<<endl;
	
	cout<<"3.) It consists of three operands."<<endl;
	cout<<"A. Else IF"<<endl;
	cout<<"B. Ternary Operator"<<endl;//correct
	cout<<"C. IF"<<endl;
	cout<<"D. Nested IF"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"4.) A loop is usually used when the number of iterations is known."<<endl;
	cout<<"A. Do..While Loop"<<endl;
	cout<<"B. While Loop"<<endl;
	cout<<"C. For Loop"<<endl;//correct
	cout<<"D. None of the Above "<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"5.) Identify this character '\b'"<<endl;
	cout<<"A. Form Feed"<<endl;
	cout<<"B. Return"<<endl;
	cout<<"C. Newline"<<endl;
	cout<<"D. Backspace"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"6.) Identify this character '\f'"<<endl;
	cout<<"A. Form Feed"<<endl;//correct
	cout<<"B. Newline"<<endl;
	cout<<"C. Backspace"<<endl;
	cout<<"D. Return"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"7.) Identify this character '\n'"<<endl;
	cout<<"A. Newline"<<endl;//correct
	cout<<"B. Return"<<endl;
	cout<<"C. Backspace"<<endl;
	cout<<"D. Form Feed"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"8.) Identify this operator '=='"<<endl;
	cout<<"A. Less Than"<<endl;
	cout<<"B. Greater Than"<<endl;
	cout<<"C. Equal To"<<endl;//correct
	cout<<"D. Not Equal To"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"9.) Identify this character '\r'"<<endl;
    cout<<"A. Backspace"<<endl;
	cout<<"B. Return"<<endl;//correct
	cout<<"C. Newline"<<endl;
	cout<<"D. Form Feed"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"10.) Identify this operator '>'"<<endl;
    cout<<"A. Less Than"<<endl;
	cout<<"B. Greater Than"<<endl;//correct
	cout<<"C. Not Equal To"<<endl;
	cout<<"D. Equal To"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"11.) Identify this operator '||'"<<endl;
	cout<<"A. Logical And"<<endl; 
	cout<<"B. None of the Above"<<endl;
	cout<<"C. Logical Not"<<endl;
	cout<<"D. Logical Or"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"12.) It can only have alphabets, Numbers and the Underscore. "<<endl;
	cout<<"A. Operators"<<endl;
	cout<<"B. None of the above"<<endl;
	cout<<"C. Data types"<<endl;
	cout<<"D. Variable"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"13.) It cannot begin with a number"<<endl;
	cout<<"A. Variable"<<endl;//correct
	cout<<"B. Data Types"<<endl;
	cout<<"C. Operators"<<endl;
	cout<<"D. None of the Above"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"14.) It is a container( Storage Area )To hold data"<<endl;
	cout<<"A. Data Types"<<endl;
	cout<<"B. Variable"<<endl;//correct
	cout<<"C. None of the Above"<<endl;
	cout<<"D. Operators"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"15.) It is a numeric Literal that has either form or an exponent form."<<endl;
	cout<<"A. Floating-Point Literal"<<endl;//correct
	cout<<"B. Floating-Point"<<endl;
	cout<<"C. Float"<<endl;
	cout<<"D. Float Literal"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	cout<<endl;
	cout<<"*******************************|        RESULT        |***************************************"<<endl;	
	cout<<" Name:  "<<name<<endl;
	cout<<" Section :  "<<sec<<endl;
	cout<<" Your Score: "<<score<<"/15"<<endl;
	average = (score / 15 ) *50+50;
	cout<<" Average : "<<average<<endl;
	if( average>=75){
		cout<<" Remark : Passed"<<endl;
	}
	else{
		cout<<" Remark : Failed"<<endl;
	}
	cout<<"*********************************************************************************************"<<endl;
	cout<<endl<<endl<<endl;

	Home();
	
}
void FILDIS(){
	char ans;
	string a,s,d;
	int y;
	float score=0,average;



	
	cout<<"\t\t\t FILDIS  -  FILIPINO SA IBA'T IBANG DISIPLINA  "<<endl;
	cout<<endl;
	cout<<endl;
	

	cout<<"Instruction : Choose the letter of the correct answer."<<endl;	
	cout<<"1.)  Ilang ilog na malinis ang mayroon sa pilipinas"<<endl;
	cout<<"A. 423"<<endl;
	cout<<"B. 421"<<endl;//correct
	cout<<"C. 429"<<endl;
	cout<<"D. 444"<<endl;
	cout<<"Your Answer: "; 
	cin>>ans;
	switch(ans){case 'B':case 'b': score++; break;}
	cout<<endl;
	
	cout<<"2.) Gaano kalaking ektarya ng lupaing pwedeng sakahan ang mayroon sa pilipinas"<<endl;
	cout<<"A. 12.4 Milyon"<<endl;//correct
	cout<<"B. 12.6 Milyon"<<endl;
	cout<<"C. 12.8 Milyon"<<endl;
	cout<<"D. 12.9 Milyon"<<endl;
	cout<<"Your Answer : ";
	cin>>ans;
	switch(ans){case 'A':case 'a': score++; break;}
	cout<<endl;
	
	cout<<"3.) Ito ang industriya na lumilikha ng mabibigat na produkto salik sa paglikha ng makina"<<endl;
	cout<<"A. Mabigat na Industriya"<<endl;//correct
	cout<<"B. Intermediate na Industriya"<<endl;
	cout<<"C. Magaan na Industriya"<<endl;
	cout<<"D. Likas na Industriya"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"4.) Ano ang kahulugan ng NREL"<<endl;
	cout<<"A. National Reveal Energy Laboratory"<<endl;
	cout<<"B. National Resources Energy Laboratory"<<endl;
	cout<<"C. National Renewable Energy Laboratory"<<endl;//correct
	cout<<"D. National Risk Energy Laboratory"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"5.) Ito ang proseso ng pagtatag at pagpapaunlad ng iba't ibang antas ng Negosyo sa bansa"<<endl;
	cout<<"A. Edukasyon"<<endl;
	cout<<"B. Kultural"<<endl;
	cout<<"C. Politika"<<endl;
	cout<<"D. Industriyalisasyon"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"6.) Ito ang tawag sa paggamit ng higit sa dalawang Wika"<<endl;
	cout<<"A. Multilingguwal"<<endl;//correct
	cout<<"B. Monolingguwal"<<endl;
	cout<<"C. Bilingguwal"<<endl;
	cout<<"D. Lingguwa Franca"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"7.) Ito ang opisyal na wika ng pilipinas"<<endl;
	cout<<"A. Tagalog"<<endl;
	cout<<"B. Filipino"<<endl;//correct
	cout<<"C. Pilipino"<<endl;
	cout<<"D. Pinoy"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"8.) Gaano karami ang wika sa pilipinas"<<endl;
	cout<<"A. Higit 600"<<endl;
	cout<<"B. Higit 500"<<endl;
	cout<<"C. Higit 200"<<endl;
	cout<<"D. Higit 100"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"9.) Pang ilan ang pilipinas sa produksion ng ginto sa buong mundo"<<endl;
    cout<<"A. Ika-2"<<endl;
	cout<<"B. Ika-4"<<endl;
	cout<<"C. Ika-3"<<endl;//correct
	cout<<"D. Ika-5"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"10.) Gaano karaming Geothermal ang maaring makuha sa lupain ng pilipinas"<<endl;
    cout<<"A. 2,800MW"<<endl;
	cout<<"B. 2,600MW"<<endl;//correct
	cout<<"C. 2,700MW"<<endl;
	cout<<"D. 2,890MW"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"11.) Malay ang isa sa opisyal na wika sa bansa na ito."<<endl;
	cout<<"A. Singapore"<<endl;
	cout<<"B. South Africa"<<endl;
	cout<<"C. Malaysia"<<endl;//correct
	cout<<"D. Timor Leste"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"12.) Ito ang bansang palaging itinuturing na bahagi ng Africa"<<endl;
	cout<<"A. Mauritius"<<endl;//correct
	cout<<"B. Luxembourg"<<endl;
	cout<<"C. Malasyia"<<endl;
	cout<<"D. Singapore"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"13.) Mayroon (11) opisyal na wika ang bansang ito."<<endl;
	cout<<"A. South Africa"<<endl;//correct
	cout<<"B. Singapore"<<endl;
	cout<<"C. Philippines"<<endl;
	cout<<"D. Ghana"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"14.) Siya ang Direktor Heneral ng Komisyon sa Wikang Filipino"<<endl;
	cout<<"A. Pamela Constantino"<<endl;
	cout<<"B. Roberto Antonuevo"<<endl;//correct
	cout<<"C. Virgilio Almario"<<endl;
	cout<<"D. Freddie Aguilar"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"15.) Ito ay isalag maliit na bansang bumubuo sa kaharian ng Netherlands"<<endl;
	cout<<"A. Anuba"<<endl;//correct
	cout<<"B. India"<<endl;
	cout<<"C. East Timor"<<endl;
	cout<<"D. Qatar"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	cout<<endl;
	cout<<"*******************************|        RESULT        |***************************************"<<endl;	
	cout<<" Name:  "<<name<<endl;
	cout<<" Section :  "<<sec<<endl;
	cout<<" Your Score: "<<score<<"/15"<<endl;
	average = (score / 15 ) *50+50;
	cout<<" Average : "<<average<<endl;
	if( average>=75){
		cout<<" Remark : Passed"<<endl;
	}
	else{
		cout<<" Remark : Failed"<<endl;
	}
	cout<<"*********************************************************************************************"<<endl;
	cout<<endl<<endl<<endl;



	Home();
		
	
}
void MS101(){
	char ans;
	string a,s,d;
	int y;
	float score=0,average;



	
	cout<<"\t\t\t MS101  -  Discrete Mathematics "<<endl;
	cout<<endl;
	cout<<endl;
	

	cout<<"Instruction : Choose the letter of the correct answer."<<endl;
	cout<<"1.) The____________ of a are written inside a pair of curly braces and are represented by commas.The name of the set is always written in capital letter."<<endl;
	cout<<"A. Union of Sets"<<endl;
	cout<<"B. Element of Sets"<<endl;//correct
	cout<<"C. Venn diagram"<<endl;
	cout<<"D. Cartesian product of sets"<<endl;
	cout<<"Your Answer: "; 
	cin>>ans;
	switch(ans){case 'B':case 'b': score++; break;}
	cout<<endl;
	
	cout<<"2.) Power set of empty set has exactly__________subset."<<endl;
	cout<<"A. Two"<<endl;
	cout<<"B. One"<<endl;//correct
	cout<<"C. Zero"<<endl;
	cout<<"D. Three"<<endl;
	cout<<"Your Answer : ";
	cin>>ans;
	switch(ans){case 'B':case 'b': score++; break;}
	cout<<endl;
	
	cout<<"3.) It used to illustrate various operations like union, intersection and difference. We can express the relationship among sets thorugh this in a more significant way."<<endl;
	cout<<"A. Venn diagram"<<endl;//correct
	cout<<"B. Union of Sets"<<endl;
	cout<<"C. Cartersian product of Sets"<<endl;
	cout<<"D. Elements of Sets"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"4.) It is the smallest set when contains all the elements of both the sets.The symbol for denoting_____is'U'."<<endl;
	cout<<"A. Complement of Sets"<<endl;
	cout<<"B. Cartesian product of Sets"<<endl;
	cout<<"C. Union of Sets"<<endl;//correct
	cout<<"D. Intersection of Sets "<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"5.) A__________is an ordered collection of objects"<<endl;
	cout<<"A. Relation"<<endl;
	cout<<"B. Function"<<endl;
	cout<<"C. Set"<<endl;//correct
	cout<<"D. Propositon"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"6.) It is the largest set which contains all the elements that are common to both the sets."<<endl;
	cout<<"A. Cartesian product of Sets"<<endl;
	cout<<"B. Union of Sets"<<endl;
	cout<<"C. Intersection of Sets"<<endl;//correct
	cout<<"D. Venn diagram"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"7.) The set of odd positive integers less than 10 can be expressed by_______"<<endl;
	cout<<"A. {1,3,5,7,9}"<<endl;//correct
	cout<<"B. {1,2,3}"<<endl;
	cout<<"C. {1,2,5,9}"<<endl;
	cout<<"D. {1,5,7,9,11}"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"8.) What is the cardinality of an empty?"<<endl;
	cout<<"A. 1"<<endl;
	cout<<"B. 2"<<endl;
	cout<<"C. 0"<<endl;//correct
	cout<<"D. 3"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"9.) What is the cardinality of the intersection of two disjoint sets?"<<endl;
    cout<<"A. 2"<<endl;
	cout<<"B. 0"<<endl;//correct
	cout<<"C. 3"<<endl;
	cout<<"D. 1"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"10.) The symbolization for a conjunction is....."<<endl;
    cout<<"A. P & Q"<<endl;//correct
	cout<<"B. -P"<<endl;
	cout<<"C. P V Q"<<endl;
	cout<<"D. P -> Q"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"11.) In a conditional statement, Unless means 'If not' and introduces..."<<endl;
	cout<<"A. The Conjunct"<<endl;
	cout<<"B. The Antecedent"<<endl;//correct
	cout<<"C. A Negation"<<endl;
	cout<<"D. The Consequent"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"12.) It is Impossible for a valid argument to have true premises and..."<<endl;
	cout<<"A. A false Conclusion"<<endl;//correct
	cout<<"B. A True Conclusion"<<endl;
	cout<<"C. A Negated Conclusion"<<endl;
	cout<<"D. A Conditional"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"13.) In a Disjunction even if one of the statements is false.THe whole Disjunction is still"<<endl;
	cout<<"A. False"<<endl;
	cout<<"B. Both True and false"<<endl;
	cout<<"C. Negated"<<endl;
	cout<<"D. True"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"14.) Is a breakdown of all the possible truth values returned by a logical expression."<<endl;
	cout<<"A. True Table"<<endl;
	cout<<"B. Set of Table"<<endl;
	cout<<"C. Law Table"<<endl;
	cout<<"D. Truth Table"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"15.) An incorrect reasoning or mistake which leads to invalid arguments."<<endl;
	cout<<"A. Fallacy"<<endl;//correct
	cout<<"B. Wallacy"<<endl;
	cout<<"C. Gallacy"<<endl;
	cout<<"D. Ballacy"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	cout<<endl;
	cout<<"*******************************|        RESULT        |***************************************"<<endl;	
	cout<<" Name:  "<<name<<endl;
	cout<<" Section :  "<<sec<<endl;
	cout<<" Your Score: "<<score<<"/15"<<endl;
	average = (score / 15 ) *50+50;
	cout<<" Average : "<<average<<endl;
	if( average>=75){
		cout<<" Remark : Passed"<<endl;
	}
	else{
		cout<<" Remark : Failed"<<endl;
	}
	cout<<"*********************************************************************************************"<<endl;
	cout<<endl<<endl<<endl;

Home();
	
}
void PE2(){
	char ans;
	string a,s,d;
	int y;
	float score=0,average;



	
	cout<<"\t\t\t PE2  -  PHYSICAL EDUCATION 2  "<<endl;
	cout<<endl;
	cout<<endl;
	

	cout<<endl;
	cout<<"Instruction : Choose the letter of the correct answer."<<endl;	
    cout<<"1.) A transfer of weight from one foot to the other. Push off with a spring and land on the ball of the other foot, letting the heel come down Bend knee to absorb the shock. "<<endl;
    cout<<"A. Sliding "<<endl;
    cout<<"B. Skipping "<<endl;
    cout<<"C. Leaping "<<endl; //correct
    cout<<"Your Answer: ";
    cin>>ans;
    switch (ans)
    { case 'C' : case 'c' : score ++; break; }
    cout<<endl;

    cout<<"2.) This is a Tiruray dance for Girls, performed in Nuro, Cotabato. The dancers go around the cloth with small, heavy steps but with graceful hand and arm movements."<<endl;
    cout<<"A. Makonggo "<<endl;
    cout<<"B. Lubi-lubi "<<endl;
    cout<<"C. Mag-Asik "<<endl;//correct
    cout<<"Your Answer: ";
    cin>>ans;
    switch (ans)
    { case 'C' : case 'c' : score ++; break; }
    cout<<endl;

    cout<<"3.) A dance of courtship and is often performed at weddings and other social occasions. "<<endl;
    cout<<"A. Kutsara "<<endl; //correct
    cout<<"B. Polkabal "<<endl;
    cout<<"C. Surtido "<<endl;
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'A' : case 'a' : score ++; break; }
cout<<endl;

cout<<"4.) It is a transfer of weight from one foot to the other. "<<endl;
cout<<"A. Walk "<<endl; //correct
cout<<"B. Skip "<<endl;
cout<<"C. Run "<<endl;
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'A' : case 'a' : score ++; break; }
cout<<endl;

cout<<"5.) The line of movement taken which maybe forward, backward, sideward, diagonal, upward, or a combination of those mentioned. "<<endl;
cout<<"A. Signature "<<endl;
cout<<"B. Sharp "<<endl;
cout<<"C. Direction "<<endl; //correct
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'C' : case 'c' : score ++; break; }
cout<<endl;

cout<<"6.) Refers to the movement or movements done for each of the dance steps. "<<endl;
cout<<"A. Step pattern "<<endl; //correct
cout<<"B. Rhythm "<<endl;
cout<<"C. Form "<<endl;
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'A' : case 'a' : score ++; break; }
cout<<endl;

cout<<"7.) The festivity opens with the Pahanda or presentation of dowry. "<<endl;
cout<<"A. Konoton "<<endl;
cout<<"B. Lubi-lubi "<<endl;
cout<<"C. Pagkawin "<<endl; //correct
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'C' : case 'c' : score ++; break; }
cout<<endl;

cout<<"8.) A kind of exercise that merges rhythmic aerobic exercise and strength training exercise. "<<endl;
cout<<"A. Gymnastics "<<endl;
cout<<"B. Folk dance "<<endl;
cout<<"C. Aerobic "<<endl; //correct
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'C' : case 'c' : score ++; break; }
cout<<endl;

cout<<"9.) It is the heartbeat of the people. "<<endl;
cout<<"A. Folk dance "<<endl; //correct
cout<<"B. Social dance "<<endl;
cout<<"C. Break dance "<<endl;
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'A' : case 'a' : score ++; break; }
cout<<endl;

cout<<"10.) The fundamental dance position, raising arms to a circle in front of the chest. "<<endl;
cout<<"A. 1st position "<<endl; //correct
cout<<"B. 2nd position "<<endl;
cout<<"C. 3rd position "<<endl;
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'A' : case 'a' : score ++; break; }
cout<<endl;
cout<<"11.) It is an occupational dance from Paoay, Ilocos Norte. It depicts the beating of cotton pods to separate the seeds drom the fibers. "<<endl;
cout<<"A. Makonggo "<<endl;
cout<<"B. Binatbatan "<<endl; //correct
cout<<"C. Pagkawil "<<endl;
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'B' : case 'b' : score ++; break; }
cout<<endl;

cout<<"12.) It is a performed by pushing off from one foot and landing on the other foot. "<<endl;
cout<<"A. Jump "<<endl;
cout<<"B. Slide "<<endl;
cout<<"C. Leap "<<endl; //correct
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'C' : case 'c' : score ++; break; }
cout<<endl;

cout<<"13.) It is a social gathering with a more formal atmosphere compared to the simple and informal parties in which the recreational dances are the usual forms. "<<endl;
cout<<"A. Modern dance "<<endl;
cout<<"B. Social dance "<<endl;
cout<<"C. Ballroom dance "<<endl; //correct
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'C' : case 'c' : score ++; break; }
cout<<endl;

cout<<"14.) The arrangement of long and short intervals with relation to the underlying beat. "<<endl;
cout<<"A. Rhythmic pattern "<<endl;  //correct
cout<<"B. Rhythmic "<<endl;
cout<<"C. Sound "<<endl;
cout<<"Your Answer: ";
cin>>ans;
switch (ans)
{ case 'A' : case 'a' : score ++; break; }
cout<<endl;
cout<<"15.) It is the highest form of dance. "<<endl;
cout<<"A. Rhythmic pattern "<<endl;
cout<<"B. Creative dance "<<endl; //correct
cout<<"C. Creative rhythm "<<endl;
cout<<"Your Answer: ";
cin>>ans;
	cout<<endl;
	cout<<"*******************************|        RESULT        |***************************************"<<endl;	
	cout<<" Name:  "<<name<<endl;
	cout<<" Section :  "<<sec<<endl;
	cout<<" Your Score: "<<score<<"/15"<<endl;
	average = (score / 15 ) *50+50;
	cout<<" Average : "<<average<<endl;
	if( average>=75){
		cout<<" Remark : Passed"<<endl;
	}
	else{
		cout<<" Remark : Failed"<<endl;
	}
	cout<<"*********************************************************************************************"<<endl;
	cout<<endl<<endl<<endl;
Home();

}

void GE5(){
	char ans;
	string a,s,d;
	int y;
	float score=0,average;

	
	cout<<"\t\t\t GE5  -  Purposive Communication"<<endl;
	cout<<endl;
	cout<<endl;

	cout<<endl;
	cout<<"Instruction : Choose the letter of the correct answer."<<endl;
	cout<<"1.) This refers to the topmost fear in the world of public speaking "<<endl;
	cout<<"A. Stage fright"<<endl;//Correct
	cout<<"B. Stage presence"<<endl;
	cout<<"C. Articulation "<<endl;
	cout<<"D. None of the above"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A':case 'a': score++; break;}
	cout<<endl;
	
	cout<<"2.) Speech for the First Senate Meeting"<<endl;
	cout<<"A. Extemporaneous Speech"<<endl;
	cout<<"B. Impromptu Speech"<<endl;
	cout<<"C. Manuscript Speech "<<endl;//correct
	cout<<"D. Memorized Speech"<<endl;
	cout<<"Your Answer : ";
	cin>>ans;
	switch(ans){case 'C':case 'c': score++; break;}
	cout<<endl;
	
	cout<<"3.)________ is a Specific type of speech in which the speaker aims to convince the audience to accept their point of views"<<endl;
	cout<<"A. Informative Speeech"<<endl;
	cout<<"B. Demonstrative Speech"<<endl;
	cout<<"C. Entertaining Speech"<<endl;
	cout<<"D. Persuasive Speech"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"4.)_______ provides the audience with information to have a clear understanding of objects, people, processes,concepts and ideas."<<endl;
	cout<<"A. Informative Speeech"<<endl;//correct
	cout<<"B. Demonstrative Speech"<<endl;
	cout<<"C. Entertaining Speech"<<endl;
	cout<<"D. Persuasive Speech"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"5.)________ is an informative speech that demonstrates how something is made, is done,and works"<<endl;
	cout<<"A. Informative Speeech"<<endl;
	cout<<"B. Demonstrative Speech"<<endl;//correct
	cout<<"C. Entertaining Speech"<<endl;
	cout<<"D. Persuasive Speech"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"6.)___________ aims to share goodwill,joy,and pleasure with the audience"<<endl;
	cout<<"A. Informative Speeech"<<endl;
	cout<<"B. Demonstrative Speech"<<endl;
	cout<<"C. Entertaining Speech"<<endl;//correct
	cout<<"D. Persuasive Speech"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"7.)___________ does not use additional equipment"<<endl;
	cout<<"A. Unaided Communication"<<endl;//correct
	cout<<"B. Comprehensive Communication"<<endl;
	cout<<"C. Aided Communication "<<endl;
	cout<<"D. None of the above "<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"8.)_________ assist a person to remember events or complete tasks"<<endl;
	cout<<"A. Supports For communication partnes"<<endl;
	cout<<"B. Visual Supports"<<endl;//correct
	cout<<"C. Targeted expressive aids"<<endl;
	cout<<"D. Aided Communication"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"9.)________ meet a person's needs"<<endl;
    cout<<"A. Supports For communication partnes"<<endl;
	cout<<"B. Visual Supports"<<endl;
	cout<<"C. Targeted expressive aids"<<endl;
	cout<<"D. Comprehensive espressive aids"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"10.)__________ Refers to the concept of communication that means less words with understandable message"<<endl;
    cout<<"A. Conciseness"<<endl;//correct
	cout<<"B. Completeness"<<endl;
	cout<<"C. Clarity"<<endl;
	cout<<"D. Consideration"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"11.)_________ uses equipment, with pictures and symbol"<<endl;
	cout<<"A. Supports For communication partnes"<<endl;
	cout<<"B. Visual Supports"<<endl;
	cout<<"C. Targeted expressive aids"<<endl;
	cout<<"D. Aided Communication"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"12.)________ help a person in specific sitations, such as making basic requests or request card"<<endl;
	cout<<"A. Supports For communication partnes"<<endl;
	cout<<"B. Visual Supports"<<endl;
	cout<<"C. Targeted expressive aids"<<endl;//correct
	cout<<"D. Aided Communication"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"13.)___ allow telephone use and adapted home services"<<endl;
	cout<<"A. Environmental control devices"<<endl;
	cout<<"B. Adapted telephone"<<endl;//correct
	cout<<"C. Targeted expressive aids"<<endl;
	cout<<"D. Computer access"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"14.)_________ enable the functional use of the computer for writing and communication activities"<<endl;
	cout<<"A. adapted telephone"<<endl;
	cout<<"B. computer access"<<endl;//correct
	cout<<"C. Targeted expressive aids"<<endl;
	cout<<"D. Environmental control access"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	cout<<endl;
	cout<<"*******************************|        RESULT        |***************************************"<<endl;	
	cout<<" Name:  "<<name<<endl;
	cout<<" Section :  "<<sec<<endl;
	cout<<" Your Score: "<<score<<"/15"<<endl;
	average = (score / 15 ) *50+50;
	cout<<" Average : "<<average<<endl;
	if( average>=75){
		cout<<" Remark : Passed"<<endl;
	}
	else{
		cout<<" Remark : Failed"<<endl;
	}
	cout<<"*********************************************************************************************"<<endl;
	cout<<endl<<endl<<endl;
Home();

}

void GE6(){
	char ans;
	string a,s,d;
	int y;
	float score=0,average;



	
	cout<<"\t\t\t GE6  -  Art Appreciation"<<endl;
	cout<<endl;
	cout<<endl;
	

	cout<<endl;
	cout<<"Instruction : Choose the letter of the correct answer."<<endl;
	cout<<"1.) What is the general meaning or intention of the piece of art? "<<endl;
	cout<<"A. Subject"<<endl;
	cout<<"B. Expression"<<endl;
	cout<<"C. Content"<<endl;//correct
	cout<<"D. Form"<<endl;
	cout<<"Your Answer: "; 
	cin>>ans;
	switch(ans){case 'C':case 'c': score++; break;}
	cout<<endl;
	
	cout<<"2.) The_____________communicates reseqarched knowledge about an artwork to clients"<<endl;
	cout<<"A. Curator"<<endl;//correct
	cout<<"B. Dealer"<<endl;
	cout<<"C. Agent"<<endl;
	cout<<"D. Collector"<<endl;
	cout<<"Your Answer : ";
	cin>>ans;
	switch(ans){case 'A':case 'a': score++; break;}
	cout<<endl;
	
	cout<<"3.) What do you call the main focus in the works of art?"<<endl;
	cout<<"A. Form"<<endl;
	cout<<"B. Expression"<<endl;
	cout<<"C. Content"<<endl;
	cout<<"D. Subject"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"4.) Who proposed the philosophy that art as a representation"<<endl;
	cout<<"A. pythagoras"<<endl;
	cout<<"B. Plato"<<endl;
	cout<<"C. Archimedes"<<endl;
	cout<<"D. Aristotle"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"5.) Who claimed that artworks are vrsioons of possible realities?"<<endl;
	cout<<"A. Plato"<<endl;
	cout<<"B. Aristotle"<<endl;//correct
	cout<<"C. Pythagoras"<<endl;
	cout<<"D. Archimedes"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"6.) What subject of art refers to complete abstraction art?"<<endl;
	cout<<"A. Representational"<<endl;
	cout<<"B. Figurative"<<endl;
	cout<<"C. Abstract"<<endl;
	cout<<"D. Non-representational"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"7.) According to plato, What is true reality?"<<endl;
	cout<<"A. Ideal world"<<endl;
	cout<<"B. World of Forms"<<endl;//correct
	cout<<"C. Worls of gods"<<endl;
	cout<<"D. Physical world"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"8.) Dynamics is an elements of "<<endl;
	cout<<"A. Music"<<endl;//correct
	cout<<"B. Literature"<<endl;
	cout<<"C. Short story"<<endl;
	cout<<"D. Poetry"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"9.) What do you call the study of the nature of art?"<<endl;
    cout<<"A. Types of art"<<endl;
	cout<<"B. Kinds of art"<<endl;
	cout<<"C. Functions of art"<<endl;
	cout<<"D. Philosophy of art"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"10.) What is the topic of Van Goghs Starry Night?"<<endl;
    cout<<"A. Mythology"<<endl;
	cout<<"B. History"<<endl;
	cout<<"C. Nature"<<endl;//correct
	cout<<"D. Animals"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"11.) Harmony is an element of "<<endl;
	cout<<"A. Short Story"<<endl;
	cout<<"B. Music"<<endl;//correct
	cout<<"C. Poetry"<<endl;
	cout<<"D. Literature"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"12.) Which among the following is the work of an artisan?"<<endl;
	cout<<"A. Film"<<endl;
	cout<<"B. Theater"<<endl;
	cout<<"C. Epic chanting"<<endl;//correct
	cout<<"D. Dance"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"13.) Who painted the Creation of Adam"<<endl;
	cout<<"A. Michelangelo"<<endl;//correct
	cout<<"B. Pablo Picasso"<<endl;
	cout<<"C. Leonardo Da Vinci"<<endl;
	cout<<"D. Vincent Van Gogh"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"14.) Which level of content in art refers to the literal statement or the narrative conetnt in he artwork? "<<endl;
	cout<<"A. Conventional"<<endl;
	cout<<"B. Subjective"<<endl;
	cout<<"C. Hidden"<<endl;
	cout<<"D. Factual"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"15.)___________ is a major aspect of the drama because the effect of plot on the viewer is primarrily affected by the actors' performances."<<endl;
	cout<<"A. Performance"<<endl;//correct
	cout<<"B. Meaning"<<endl;
	cout<<"C. Beat"<<endl;
	cout<<"D. Line"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	cout<<endl;
	cout<<"*******************************|        RESULT        |***************************************"<<endl;	
	cout<<" Name:  "<<name<<endl;
	cout<<" Section :  "<<sec<<endl;
	cout<<" Your Score: "<<score<<"/15"<<endl;
	average = (score / 15 ) *50+50;
	cout<<" Average : "<<average<<endl;
	if( average>=75){
		cout<<" Remark : Passed"<<endl;
	} 
	else{
		cout<<" Remark : Failed"<<endl;
	}
	cout<<"*********************************************************************************************"<<endl;
	cout<<endl<<endl<<endl;

Home();

}


void GE7(){
	char ans;
	string a,s,d;
	int y;
	float score=0,average;



	
	cout<<"\t\t\t GE7  -  Science and Technology and Society"<<endl;
	cout<<endl;
	cout<<endl;
	

	cout<<endl;
	cout<<"Instruction : Choose the letter of the correct answer."<<endl;
	cout<<"1.) Who is Freud's friend who told him about using hynosis to cure patients?"<<endl;
	cout<<"A. Hermann Nothnagel"<<endl;
	cout<<"B. Theodor Meynert"<<endl;
	cout<<"C. Josef Breuer"<<endl;//correct
	cout<<"D. Nicolaus copernicus"<<endl;
	cout<<"Your Answer: "; 
	cin>>ans;
	switch(ans){case 'C':case 'c': score++; break;}
	cout<<endl;
	
	cout<<"2.) Who among these observed a guest star which is a supernova and the remnant of which is now called the Crab Nebula?"<<endl;
	cout<<"A. Egyptian astronomers"<<endl;
	cout<<"B. Joseph Needham"<<endl;
	cout<<"C. Chinese astronomers"<<endl;//correct
	cout<<"D. Persian astronomers"<<endl;
	cout<<"Your Answer : ";
	cin>>ans;
	switch(ans){case 'C':case 'c': score++; break;}
	cout<<endl;
	
	cout<<"3.)___________ or the use of plants to cure diseases, is a method developed by indegenous Filipinos."<<endl;
	cout<<"A. Herbal medicine"<<endl;//correct
	cout<<"B. Weaving technology"<<endl;
	cout<<"C. Salting"<<endl;
	cout<<"D. Irrigation"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"4.) What was promoted by jesuits who founded tha Manila Observatory that was made as a central station of the philippine Weather Bereau in 1901?"<<endl;
	cout<<"A. Astronomical studies"<<endl;
	cout<<"B. Meteorological studies"<<endl;//correct
	cout<<"C. Medical Studies"<<endl;
	cout<<"D. Seismological studies"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"5.) Who introduced the concept of 'anu' which he defined as the matter which cannot be subdivided?"<<endl;
	cout<<"A. Kanada"<<endl;//correct
	cout<<"B. Joseon"<<endl;
	cout<<"C. Pythagora"<<endl;
	cout<<"D. Plato"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"6.) What area of science offers major benefits for disease diagnosis and treatment that also poses serious questions about the nature and sanctity of human life and the protection of human rights?"<<endl;
	cout<<"A. Culture"<<endl;
	cout<<"B. Commodification"<<endl;
	cout<<"C. Monodisciplinary"<<endl;
	cout<<"D. Medical Biotechnology"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"7.) How many percent of research and development facilities are located in developed countries?"<<endl;
	cout<<"A. 52"<<endl;
	cout<<"B. 21"<<endl;
	cout<<"C. 83"<<endl;
	cout<<"D. 98"<<endl;//correct
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"8.) What is an end of all of the actions that we perform which we desire for itself?"<<endl;
	cout<<"A. Flourishing"<<endl;
	cout<<"B. Eudaimonia"<<endl;//correct
	cout<<"C. Survival"<<endl;
	cout<<"D. Purpose"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"9.) What is a science that lends itself to thhe recording and study of observations and the vigorous nothing of the motions of the stars,planets,and the moon?"<<endl;
    cout<<"A. Astrology"<<endl;
	cout<<"B. Protoscience"<<endl;
	cout<<"C. Astronomy"<<endl;//correct
	cout<<"D. Medicine"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'D': case 'd': score++; break;}
	cout<<endl;
	
	cout<<"10.) What remained as the highest institution of learning throughout the Spanish regime?"<<endl;
    cout<<"A. University of Santo Tomas"<<endl;//correct
	cout<<"B. University of the Philippines"<<endl;
	cout<<"C. Ateneo de Manila University"<<endl;
	cout<<"D. De La Salle University"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"11.) For Heidegger,________________ is the realm of the destining that at any given time starts a revealing upon its way."<<endl;
	cout<<"A. Revealing"<<endl;
	cout<<"B. Freedom"<<endl;//correct
	cout<<"C. Happiness"<<endl;
	cout<<"D. Virtues"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'B': case 'b': score++; break;}
	cout<<endl;
	
	cout<<"12.) Which among the following is the work of an artisan?"<<endl;
	cout<<"A. Film"<<endl;
	cout<<"B. Theater"<<endl;
	cout<<"C. Epic chanting"<<endl;//correct
	cout<<"D. Dance"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"13.)__________ is a method developed by indigenous Filipinos to keep food from spoiling."<<endl;
	cout<<"A. Salting"<<endl;//correct
	cout<<"B. Irrigation"<<endl;
	cout<<"C. Weaving technology"<<endl;
	cout<<"D. Herbal medicine"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'A': case 'a': score++; break;}
	cout<<endl;
	
	cout<<"14.) According to Aristotle, what is personal, freely pursued, and changeable according to situations?"<<endl;
	cout<<"A. Human flourishing"<<endl;
	cout<<"B. Prudent action"<<endl;
	cout<<"C. Virtue of prudence"<<endl;//correct
	cout<<"D. Fundamnetal fact"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	switch(ans){case 'C': case 'c': score++; break;}
	cout<<endl;
	
	cout<<"15.)___________ is a property of one's life when considered as a whole.'"<<endl;
	cout<<"A. Eudaimonia"<<endl;//correct
	cout<<"B. Flourishing"<<endl;
	cout<<"C. Freedom"<<endl;
	cout<<"D. Function"<<endl;
	cout<<"Your Answer: ";
	cin>>ans;
	cout<<endl;
	cout<<"*******************************|        RESULT        |***************************************"<<endl;	
	cout<<" Name:  "<<name<<endl;
	cout<<" Section :  "<<sec<<endl;
	cout<<" Your Score: "<<score<<"/15"<<endl;
	average = (score / 15 ) *50+50;
	cout<<" Average : "<<average<<endl;
	if( average>=75){
		cout<<" Remark : Passed"<<endl;
	}
	else{
		cout<<" Remark : Failed"<<endl;
	}
	cout<<"*********************************************************************************************"<<endl;
	cout<<endl<<endl<<endl;

	Home();
}


