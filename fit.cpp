//    fitness calculator
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<math.h>
using namespace std;
class fitness{
	protected:
		char name[20];
			int age,h /*height*/,w /*weight*/,neck,waist,hip,gen,ch;
				int feet,inches,a;
					float bmi;  //BODY MASS INDEX
						float iw;   //IDEAL WEIGHT
							float bf;   //BODY FAT
								float bmr;  //BASAL METABOLIC RATE
									string s1,s2;
	public:
		fitness()
			{
				s1="\t\t\t\t\tWELCOME TO FITNESS CALCULATOR";
				for(int i=0;i<35;i++)
				{
					cout<<s1[i];
					for(int j=0;j<10000000;j++)
					{}	
				}
				s2="\n\nENTER YOUR GOOD NAME\n";
				for(int i=0;i<23;i++)
				{
					cout<<s2[i];
					for(int j=0;j<9000000;j++)
					{}
				}
				cin.getline(name,20);
					cout<<"please select your gender \n if male press 1\n if female press 2"<<endl;
						cin>>gen;
							cout<<"\n"<<"enter your age"<<endl;
								cin>>age;
									cout<<"\n"<<"enter your height in cm`s"<<endl;
										cin>>h;
											cout<<"\n"<<"enter your weight in kg`s"<<endl;
										cin>>w;
									cout<<"\n"<<"enter your neck size in cm`s"<<endl;
								cin>>neck;
							cout<<"\n"<<"enter your waist size in cm`s"<<endl;
						cin>>waist;
					cout<<"\n"<<"enter your hip size in cm`s"<<endl;
				cin>>hip;
			}
};
class calculate:public fitness{
	public:
	void input();
	void choice()
	{
		cout<<"\n"<<" IF YOU WANT TO CALCULATE ANYTING ELSE PLEASE PRESS 1 OR PRESS ANY KEY TO EXIT";
		    cin>>a;
				if(a==1)
					{
						input();
					}
	}
	~calculate()
	{
		cout<<"\n\t\t\t\tTHANKYOU FOR USING THIS CALCULATOR"<<endl;
			cout<<"\n\t\t\t\tHOPE YOU TAKE CARE OF YOUR FITNESS"<<endl;	
	}
	void file()
	{
		fstream fit("details.txt",ios::out|ios::app);
	    	fit<<"\n\nENTER YOUR GOOD NAME "<<endl<<name<<endl;
				fit<<"please select your gender \n if male press 1\n if female press 2 "<<endl<<gen<<endl;
					fit<<"\n"<<"enter your age "<<endl<<age<<endl;
						fit<<"\n"<<"enter your height in cm`s "<<endl<<h<<endl;
						fit<<"\n"<<"enter your weight in kg`s "<<endl<<w<<endl;
					fit<<"\n"<<"enter your neck size in cm`s "<<endl<<neck<<endl;
				fit<<"\n"<<"enter your waist size in cm`s "<<endl<<waist<<endl;
			fit<<"\n"<<"enter your hip size in cm`s "<<endl<<hip<<endl;
		fit.close();
	}
};
void calculate::input()
{
	system("cls");
		cout<<"\n\t\t WHAT DO YOU WANT TO CALCULATE \n"<<endl;
			cout<<"enter your choice as per following"<<endl;
				cout<<"press 1 for BODY MASS INDEX"<<endl;
					cout<<"press 2 for BASAL METABOLIC RATE"<<endl;
				cout<<"press 3 for BODY FAT "<<endl;
			cout<<"press 4 for IDEAL WEIGHT"<<endl;
		cin>>ch;
	system("cls");
	enum fitness{BMI=1,BMR,BF,IW}f;
	switch(ch)
	{
		case BMI:
			bmi=(w*10000)/(float)(h*h);
			cout<<"\n\n\t\t\t\tYOUR BMI = "<<bmi<<"kg/m^2"<<endl;
			if(bmi<16)
				{
					cout<<"\n\t\t\t\t\tSevere Thinness\n";
						cout<<"\n\t\t\t\t  you should intake\n";
							cout<<"\n\t\t\t\t1. 3-5 servings of vegetables.";
								cout<<"\n\t\t\t\t2. 2-4 servings of fruit.";
								cout<<"\n\t\t\t\t3. 2-3 servings of milk and dairy products like milk, yogurt and cheese.";
							cout<<"\n\t\t\t\t4. 6-11 servings of bread, cereals, rice and pasta.";
						cout<<"\n\t\t\t\t5. 2-3 servings of meat, fish and legumes.";
					cout<<"\n\t\t\t\t6. Used fats, oils and sweets in moderation and in small quantitie\n";
				}
			else if(bmi>=16&&bmi<=17)
				{
					cout<<"\n\t\t\t\t\tModerate Thinness\n";
						cout<<"\n\t\t\t\tHere are some tips:";
							cout<<"\n\t\t\t\t1. Eat healthy food.";
								cout<<"\n\t\t\t\t2. Include fat and sweet in your diet";
									cout<<"\n\t\t\t\t3. Drink more milk & calcium-rich food items.";
								cout<<"\n\t\t\t\t4. Exercise regularly";
							cout<<"\n\t\t\t\t5. Jog daily";
						cout<<"\n\t\t\t\t6. Include more non-veg in your diet, that is if you eat non-veg at all";
					cout<<"\n\t\t\t\t7. You can try out herbal health tonics in your diet. But only buy them from good brands.\n";
				}
			else if(bmi>=17&&bmi<=18.5)
				{
					cout<<"\n\t\t\t\t\tMild Thinness\n";
						cout<<"\n\t\t\t\tHere are some tips:";
							cout<<"\n\t\t\t\t1. Eat healthy food.";
								cout<<"\n\t\t\t\t2. Include fat and sweet in your diet";
									cout<<"\n\t\t\t\t3. Drink more milk & calcium-rich food items.";
								cout<<"\n\t\t\t\t4. Exercise regularly";
							cout<<"\n\t\t\t\t5. Jog daily";
						cout<<"\n\t\t\t\t6. Include more non-veg in your diet, that is if you eat non-veg at all";
					cout<<"\n\t\t\t\t7. You can try out herbal health tonics in your diet.\n";
				}
			else if(bmi>=18.5&&bmi<=25)
				{
					cout<<"\n\t\t\t\t\tYou are Normal\n";
						cout<<"\n\t\t\t\tHere are some tips:";
							cout<<"\n\t\t\t\t1. Eat healthy food.";
								cout<<"\n\t\t\t\t2. Exercise regularly";
							cout<<"\n\t\t\t\t3. Jog daily";
						cout<<"\n\t\t\t\t4. you should 3-5 servings of vegetables.";
					cout<<"\n\t\t\t\t5. you should 2-4 servings of fruit.\n";
				}
			else if(bmi>=25&&bmi<=30)
				{
					cout<<"\n\t\t\t\t\tOver Weight\n";
						cout<<"\n\t\t\t\tHere's what you can do to lose weight or avoid becoming overweight or obese:";
    						cout<<"\n\t\t\t\t1.Eat more fruit, vegetables, nuts, and whole grains.";
    						cout<<"\n\t\t\t\t2.Exercise, even moderately, for at least 30 minutes a day.";
    					cout<<"\n\t\t\t\t3.Cut down your consumption of fatty and sugary foods.";
    				cout<<"\n\t\t\t\t4.Use vegetable-based oils rather than animal-based fats.\n";
				}
			else if(bmi>=30&&bmi<=40)
				{
					cout<<"\n\t\t\t\t\tObese Class\n";
						cout<<"\n\t\t\t\tHere's what you can do to lose weight or avoid becoming overweight or obese:";
    						cout<<"\n\t\t\t\t1.Eat more fruit, vegetables, nuts, and whole grains.";
    						cout<<"\n\t\t\t\t2.Exercise, even moderately, for at least 30 minutes a day.";
    					cout<<"\n\t\t\t\t3.Cut down your consumption of fatty and sugary foods.";
    				cout<<"\n\t\t\t\t4.Use vegetable-based oils rather than animal-based fats.\n";
				}
			choice();
			break;
		case BMR:
			if(gen==1)
				{
					bmr=(10*w)+(6.25*h)-(5*age)+5;
						cout<<"\n\n\t\t\t\tYOUR BMR = "<<bmr<<" calories/day"<<endl;
							cout<<"\n\t\t\t\t1.Do cardio daily....";
    							cout<<"\n\t\t\t\t2.Commit to strength training. ...";
					    			cout<<"\n\t\t\t\t3.Eat more protein. ...";
    									cout<<"\n\t\t\t\t4.Sleep at least 8 hrs a day ...";
    								cout<<"\n\t\t\t\t5.Drink plenty of water. ...";
    							cout<<"\n\t\t\t\t6.Meditate daily ...";
    						cout<<"\n\t\t\t\t7.Stop fad diets. ...";
    					cout<<"\n\t\t\t\t8.Decrease caloric intake.\n";
				}
			else
				{
					bmr=(10*w)+(6.25*h)-(5*age)-161;
						cout<<"\n\n\t\t\t\tYOUR BMR = "<<bmr<<" calories/day"<<endl;
							cout<<"\n\t\t\t\t1.Do cardio daily....";
    							cout<<"\n\t\t\t\t2.Commit to strength training. ...";
								    cout<<"\n\t\t\t\t3.Eat more protein. ...";
    									cout<<"\n\t\t\t\t4.Sleep at least 8 hrs a day ...";
    								cout<<"\n\t\t\t\t5.Drink plenty of water. ...";
    							cout<<"\n\t\t\t\t6.Meditate daily ...";
    						cout<<"\n\t\t\t\t7.Stop fad diets. ...";
    					cout<<"\n\t\t\t\t8.Decrease caloric intake.\n";
				}
			choice();
			break;
		case BF:
			if(gen==1)
				{
					double ma=log10(waist-neck);
						double ht=log10(h);
							float bodyma=1.0324-(0.19077*ma)+(0.15456*ht);
								bf=(495/bodyma)-450;
									cout<<"\n\n\t\t\t\tYOUR BODY FAT PERCENTAGE IS "<<bf<<"%"<<endl;
								cout<<"\n\t\t\t\t1.Caloric Balance is One aspect of maintaining a healthy body. ...";
		    				cout<<"\n\t\t\t\t2.Take Care of Nutrition. ...";
    					cout<<"\n\t\t\t\t3.Do Strength Training. ...";
				    cout<<"\n\t\t\t\t4.Aerobic Exercise.\n";
				}
			else
				{
					double fe=log10(waist+hip-neck);
						double ht=log10(h);		
							float bodyfe=1.29579-(0.35004*fe)+(0.22100*ht);
								bf=(495/bodyfe)-450;
									cout<<"\n\n\t\t\t\tYOUR BODY FAT PERCENTAGE IS "<<bf<<"%"<<endl;
								cout<<"\n\t\t\t\t1.Caloric Balance is One aspect of maintaining a healthy body. ...";
		    				cout<<"\n\t\t\t\t2.Take Care of Nutrition. ...";
    					cout<<"\n\t\t\t\t3.Do Strength Training. ...";
				    cout<<"\n\t\t\t\t4.Aerobic Exercise.\n";
				}
			choice();
			break;
		case IW:
		    cout<<"\tcan you please enter your height in feet and inches if you are over 5 feet"<<endl;
			    cin>>feet>>inches;
				    if(gen==1)
					    {
					    	iw=50+(2.3*inches);	
								cout<<"\n\n\t\t\t\tYOUR IDEAL WEIGHT IS "<<iw<<"kg"<<endl;
								    cout<<"\n\t\t\t\t1.Exercise. Regular physical activity burns calories and builds muscle ";
									    cout<<"\n\t\t\t\t2.Reduce screen time. ...";
								    cout<<"\n\t\t\t\t3.Watch out for portion distortion. ...";
							    cout<<"\n\t\t\t\t4.Eat 5 servings of fruits and veggies a day. ...";
					    	cout<<"\n\t\t\t\t5.Don't skip breakfast.\n";
						}
					else
						{
							iw=45.5+(2.3*inches);
		    					cout<<"\n\n\t\t\t\tYOUR IDEAL WEIGHT IS "<<iw<<"kg"<<endl;
		    						cout<<"\n\t\t\t\t1.Exercise. Regular physical activity burns calories and builds muscle ";
									    cout<<"\n\t\t\t\t2.Reduce screen time. ...";
								    cout<<"\n\t\t\t\t3.Watch out for portion distortion. ...";
							    cout<<"\n\t\t\t\t4.Eat 5 servings of fruits and veggies a day. ...";
					    	cout<<"\n\t\t\t\t5.Don't skip breakfast.\n";
						}
			choice();
			break;
		default:
			{
				cout<<"INVALID INPUT"<<endl;
					cout<<"ENTER A VALID CHOICE"<<endl;
						getch();
							input();		
			}
	}
}
int main()
{	
	system("color 3f");
	calculate c1;
	c1.input();
	c1.file();
	return 0;
}
