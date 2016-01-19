#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using std::cout;
using std::cin;
int flag=0,n_q=0,chk_no,ava=0,ann=0;
int age;
char chk='y',address[140],name[80];
class hospital
{
	int age;
	char address[140],name[80];
	public:
		void choice()
		{
			int choice;
			cout<<"\n \n What are you looking for: \n";
            cout<<"\t 1.Cardeologist \n";
            cout<<"\t 2.Surgeon \n";
            cout<<"\t 3.Physician \n";
            cout<<"\t 4.Dental \n";
            cout<<"\t 5.Gastreologist \n";
            cout<<"\t 6.Neurosurgeon \n";                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
            cout<<"\n Enter your choice:";
            cin>>choice;
            switch (choice)
            {
            	case 1:
            		{
            			int card_ch;
	                    cout<<"\n You opted for Cardeologist,Doctors available are: \n \n";
	                    cout<<"\t 1.Dr Kamya Srivastava \n";
	                    cout<<"\t 2.Dr D2 \n";
	                    cout<<"\t 3.Dr d3 \n";
	                    cout<<"\n Please enter your choice:";
	                    cin>>card_ch;
	                    switch (card_ch)
	                    {
	                    	case 1:
	                    		{
	                    				cout<<" \n \t Dr Kamya";
       	                                cout<<"\n \n \t Monday-Wednesday \t 10:00-2:00";
		                                cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                break;
								}
							case 2:
								{
									    cout<<" \n \t Dr d2";
	                                  	cout<<"\n  \n \t Wednesday-Friday \t 10:00-2:00";
	                                 	cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                break;
								}
							case 3:
							    {
	                             	    cout<<" \n \t Dr d3";
		                                cout<<"\n \n \t Friday-Saturday \t 10:00-2:00";
		                                cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                break;						
								}
								 default: 
	                           	{
								    flag=1;
	                          	    cout<<"\n \t Wrong input";
	                          	    cout<<"\n \t ***********************************************************";
	                        	    break;
								}	
						}
							break;
					}
						case 2:
							{
								int surg_ch;
	                            cout<<"\n You opted for Sugeon,Doctors available are: \n \n";
	                            cout<<"\t 1.Dr Ds1 \n";
	                            cout<<"\t 2.Dr DS2 \n";
	                            cout<<"\t 3.Dr ds3 \n";
	                            cout<<"\n Please enter your choice:";
	                            cin>>surg_ch;
	                            switch (surg_ch)
	                            {
	                            	    case 1:
	                            		{
	                            			cout<<" \n \t Dr Ds1";
	                                       	cout<<"\n \n \t Monday-Wednesday \t 10:00-2:00";
	                                    	cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
	                                    	break;
										}
										case 2:
											{
												cout<<" \n \t Dr ds2";
	                                        	cout<<"\n \n \t Wednesday-Friday \t 10:00-2:00";
	                                        	cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                        break;
											}
										case 3:
											{
												cout<<" \n \t Dr ds3";
	                                         	cout<<"\n \n \t Friday-Saturday \t 10:00-2:00";
	                                           	cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
	                                           	break;
											}
												default:
													{
			                                            flag=1;
		                                                cout<<"\n \t Wrong input";
		                                                cout<<"\n \t ***********************************************************";
		                                                break;
		                                            }
								}
									break;
							}
							 case 3:
							 	{
							 			int phy_ch;
	                                    cout<<"\n You opted for Physician,Doctors available are: \n \n";
	                                    cout<<"\t 1.Dr dp1 \n";
	                                    cout<<"\t 2.Dr Dp2 \n";
	                                    cout<<"\t 3.Dr dp3 \n";
	                                    cout<<"\n Please enter your choice:";
	                                    cin>>phy_ch;
                                       	switch (phy_ch)
                                       	{
                                       		case 1:
                                       			{
                                  				cout<<" \n \t Dr dp1";
		                                        cout<<"\n \n \t Monday-Wednesday \t 10:00-2:00";
		                                        cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
	                                           	break;
												}
											case 2:
												{
								     			cout<<" \n \t Dr dp2";
		                                        cout<<"\n \n \t Wednesday-Friday \t 10:00-2:00";
		                                        cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                        break;
												}
											case 3:
											   {
												cout<<" \n \t Dr dp3";
	                                           	cout<<"\n \n \t Friday-Saturday \t 10:00-2:00";
	                                          	cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
	                                           	break;
												}
												default:
													{
													
			                                            flag=1;
		                                                cout<<"\n \t Wrong input";
		                                                cout<<"\n \t ***********************************************************";
		                                                break;
													}
										}
											break;
								}
								case 4:
									{
										int dental_ch;
	                                    cout<<"\n You opted for Dental,Doctors available are: \n \n";
	                                    cout<<"\t 1.Dr dd1 \n";
	                                    cout<<"\t 2.Dr Dd2 \n";
	                                    cout<<"\t 3.Dr dd3 \n";
	                                    cout<<"\n Please enter your choice:";
	                                    cin>>dental_ch;
	                                    switch (dental_ch)
	                                    {
	                                    	case 1:
	                                    		{
	                                    			cout<<" \n \t Dr dd11";
	                                               	cout<<"\n \n \t Monday-Wednesday \t 10:00-2:00";
		                                            cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                            break;
												}
											case 2:
												{
													cout<<" \n \t Dr dd22";
	                                              	cout<<"\n \n \t Wednesday-Friday \t 10:00-2:00";
		                                            cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                            break;
												}
											case 3:
												{
													cout<<" \n \t Dd3 dp3";
	                                               	cout<<"\n \n \t Friday-Saturday \t 10:00-2:00";
	                                               	cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
	                                               	break;
												}
														default:
															{
															
			                                                    flag=1;
																cout<<"\n \t Wrong input";
																cout<<"\n \t ***********************************************************";
		                                                        break;
		                                                    }
						    				}
										break;
					       				}
									case 5:
										{
											int gas_ch;
	                                        cout<<"\n You opted for Gastreologist,Doctors available are: \n \n";
	                                        cout<<"\t 1.Dr dg1 \n";
	                                        cout<<"\t 2.Dr Dg22 \n";
	                                        cout<<"\t 3.Dr dpg33 \n";
	                                        cout<<"\n Please enter your choice:";
	                                        cin>>gas_ch;
	                                        switch (gas_ch)
	                                        {
	                                        	 case 1:
	                                        	 	{
	                                        	 		cout<<" \n \t Dr dg1";
	                                                	cout<<"\n \n \t Monday-Wednesday \t 10:00-2:00";
		                                                cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                                break;
													}
												 case 2:
													{
														cout<<" \n \t Dr dg2";
		                                                cout<<"\n \n \t Wednesday-Friday \t 10:00-2:00";
	                                                    cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                                break;
													}
												 case 3:
												 	{
												 		cout<<" \n \t Dr dg3";
		                                                cout<<"\n \n \t Friday-Saturday \t 10:00-2:00";
		                                                cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                                break;
													}
													default:
														{
														
		                                         	        flag=1;
		                                                    cout<<"\n \t Wrong input";
		                                                    cout<<"\n \t ***********************************************************";
		                                                    break;
														}
											}
											break;
										}
										 case 6:
										 	{
										 		int neo_ch;
	                                            cout<<"\n You opted for Neurosurgeon,Doctors available are: \n \n";
	                                            cout<<"\t 1.Dr dn1 \n";
	                                            cout<<"\t 2.Dr Dn2 \n";
	                                            cout<<"\t 3.Dr dn3 \n";
	                                            cout<<"\n Please enter your choice:";
	                                            cin>>neo_ch;
	                                            switch (neo_ch)
	                                            {
	                                            	case 1:
	                                            		{
	                                            			cout<<" \n \t Dr dn1";
		                                                    cout<<"\n \n \t Monday-Wednesday \t 10:00-2:00";
		                                                    cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                                    break;
														}
													case 2:
													    {
													    	cout<<" \n \t Dr dn2";
		                                                    cout<<"\n \n \t Wednesday-Friday \t 10:00-2:00";
		                                                    cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                                    break;
														}
													case 3:
													    {
													    	cout<<" \n \t Dr dn3";
		                                                    cout<<"\n \n \t Friday-Saturday \t 10:00-2:00";
		                                                    cout<<"\n \n \t Fees:300(normal) \t Fees:500(Emergency)";
		                                                    break;
														}		
													default:
														{
		                                         	        flag=1;
	                                              	        cout<<"\n \t Wrong input";
	                                              	        cout<<"\n \t ***********************************************************";
	                                               	        break;
														}
												}
												break;
											}
											default:
			                               {
											    flag=1;
											    ann=1;
			                                    cout<<"\n \t Wrong input";
			                                    cout<<"\n \t ***********************************************************";
			                                    break;
											}
			}
		}
		void user_info()
		{
			cout<<"\n Enter patient's name:";
            gets(name);
            cout<<"\n Enter patient's age:";
            cin>>age;
            cout<<"\n Enter address:";
            gets(address);
            cout<<"\n Please submit the fees";
		}
		void normal_patient();
     	void critical();
	    void checkout();
	    void bill();
	    void ask();
	    void new_patient();
};
void hospital::normal_patient()
{
	cout<<"\n Your waitng no. is:"<<n_q;
    cout<<"\n Please wait kindly:";
    n_q++;
}
void hospital::critical()
{
	cout<<"\n You may proceed to the doctor";
    ava=1;
}
void hospital::ask()
{
	if(flag==0)
	{
			cout<<"\n \n Is the condition of the patient is critical/Is there any emergency:(y/n):";
	}
}
void hospital::bill()
{
	if(flag==0 && ann==0)
	{
		cout<<"\n \n \t *************    Bill    *************";
	    cout<<" \n Patient's Name:";
	    puts(name);
	    cout<<"\n Patient's Age:"<<age;
	    cout<<"\n Patient's address:";
	    puts(address);
	    if(ava==0)
	    {
		    cout<<"Fees is:"<<300;
	    }
	    else if(ava==1)
	    {
		    cout<<"Fees is:"<<500;
	    }
	}
}
void hospital::new_patient()
{
	cout<<"\n ********************************************************** \n";
	cout<<"\n ********************************************************** \n";
	cout<<"Do you want to enter more records(y/n):";
	cin>>chk;
}
int main()
{
	hospital a1;
    char ans='y',ans2;
    cout<<"\t \t WELCOME TO  MADANLAAL CHIKITSALAYA \n";
    while(chk=='y')
    {   
		    a1.choice();
		    while(flag==1)
		    {
		     	flag=0;
				a1.choice();

	    	}
		    if (flag==0)
			{
		        while(ans=='n' || ans=='y')
			    {
			    	
				    cout<<"\n \n Do you want to continue(y/n):";
		            cin>>ans;
		            if(ans=='y')
		            {
		    	       a1.user_info();
			        }     
			        else if(ans=='n')
			        {
				        cout<<"\n Thank You for your service :)";
				        a1.new_patient();
			        }
			        else
			        {
			 	        cout<<"\n Wrong input";
			 	        cout<<"\n \n Do you want to continue(y/n)?:";
			 	        cin>>ans;
			        }
			    }
		    }
		    if(ann==0)
		    {
		         a1.ask();
		    }
		    cin>>ans2;
		    if(ans2=='n')
		    a1.normal_patient();
		    else if(ans2=='y')
		    a1.critical();
		    else
		    {
			    cout<<"\n Wrong input";
			    a1.ask();
		    }
		    a1.bill();
            a1.new_patient();
            if (chk=='n')
			{
				return 0;
			}
		    
	    
	}
	    return 0;
}
