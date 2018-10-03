/* This is a programme code for the conversion application */
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void currency();
void length();
void weight();
void area();
void frequency();
void pressure();
void energy();
void time();
void temperature();
void volume();
void speed();
int main()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<"\n"<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<"\n"<<"\n";
    char code_fn[4]={0},reuse[6]={0};
    cout<<"CODES FOR CONVERSIONS \n cur for CURRENCY conversion \n wei for WEIGHT conversion \n len for LENGTH conversion \n are for AREA conversion \n spe for SPEED conversion \n fre for FREQUENCY conversion \n pre for PRESSURE conversion \n ene for ENERGY conversion \n vol for VOLUME conversion \n tim for TIME conversion \n tem for TEMPERATURE conversion"<<"\n";
    cout<<"\n\nPlease enter the codes for the type of conversion you want to do  :   ";
    cin>>code_fn;
    if(strcmp(code_fn,"spe")==0||strcmp(code_fn,"cur")==0||strcmp(code_fn,"fre")==0||strcmp(code_fn,"wei")==0||strcmp(code_fn,"len")==0||strcmp(code_fn,"are")==0||strcmp(code_fn,"ene")==0||strcmp(code_fn,"vol")==0||strcmp(code_fn,"tim")==0||strcmp(code_fn,"tem")==0||strcmp(code_fn,"pre")==0)
       {
        if (strcmp(code_fn,"cur")==0)
            currency();
        else if (strcmp(code_fn,"len")==0)
            length();
        else if (strcmp(code_fn,"wei")==0)
            weight();
        else if (strcmp(code_fn,"are")==0)
            area();
        else if (strcmp(code_fn,"fre")==0)
            frequency();
        else if (strcmp(code_fn,"pre")==0)
            pressure();
        else if (strcmp(code_fn,"ene")==0)
            energy();
        else if (strcmp(code_fn,"tim")==0)
            time();
        else if (strcmp(code_fn,"tem")==0)
            temperature();
        else if (strcmp(code_fn,"vol")==0)
            volume();
        else
            speed();
       }
    else
        {cout<<"!!!!!!!!ENTERED WRONG CODE FOR CONVERSION!!!!!!!!!";
        system("pause");}
    cond1 : system("cls");
            cout<<"\n"<<"\n\nEnter 'exit' to EXIT from application or 'again' to REUSE the application"<<"\n";
            cin>>reuse;
        if (strcmp(reuse,"exit")==0)
            return 0;
        else if(strcmp(reuse,"again")==0)
            main();
        else
            {cout<<"!!!!!!!******!!!!!!!ENTRY IS NOT CORRECT!!!!!!!*******!!!!!!!"<<"\n"<<"!!!!!!!******!!!!!!!    ENTER AGAIN    !!!!!!!*******!!!!!!!";
              system("pause");
               goto cond1;
            }
}
void currency()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<"\n"<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<"\n"<<"\n";
    char in_type,out_type;
    double amo,amo1;
    cout<<"!! The Following Conversion is based on the Currencies Values of - AUG 02 2018 - !!"<<"\n"<<"\n";
    cout<<"INDIA               ----       i      ||        AFGHANISTHAN         ----      f "<<"\n";
    cout<<"BANGLADESH          ----       b      ||        CHINA                ----      n "<<"\n";
    cout<<"JAPAN               ----       j      ||        PAKISTHAN            ----      p "<<"\n";
    cout<<"SAUDI_AREBIA        ----       s      ||        RUSSIA               ----      r "<<"\n";
    cout<<"SWITZERLAND         ----       w      ||        UNITED_KINGDOM(UK)   ----      g "<<"\n";
    cout<<"UNITED_STATES(US)   ----       u      ||        CANADA               ----      c "<<"\n";
    cout<<"AUSTRALIA           ----       a      ||        NEWZEALAND           ----      z "<<"\n";
    cout<<"The Country Codes given above To Convert CURRENCIES ^^"<<"\n";
    cout<<"Enter the code for input type currency    :     "<<"\n"<<">>>>      ";
    cin>>in_type;
    if(in_type=='i'||in_type=='b'||in_type=='j'||in_type=='s'||in_type=='w'||in_type=='u'||in_type=='a'||in_type=='f'||in_type=='n'||in_type=='p'||in_type=='r'||in_type=='g'||in_type=='c'||in_type=='z')
    {
    cout<<"ENTER THE AMOUNT OF CURRENCY  : ";
    cin>>amo;
    amo1=amo;
    cout<<"\nEnter the code for output type currency    :      "<<"\n"<<">>>>      ";
    cin>>out_type;
    if(out_type=='i'||out_type=='b'||out_type=='j'||out_type=='s'||out_type=='w'||out_type=='u'||out_type=='a'||out_type=='f'||out_type=='n'||out_type=='p'||out_type=='r'||out_type=='g'||out_type=='c'||out_type=='z')
    {
    switch(in_type)
    {   case 'i' : cout<<"converting currency from : INDIAN ";
                    amo=amo*1;
                        break;
        case 'b' : cout<<"converting currency from : BANGLADESH ";
                    amo=amo*0.81;
                        break;
        case 'j' : cout<<"converting currency from : JAPAN ";
                    amo=amo*0.62;
                        break;
        case 's' : cout<<"converting currency from : SAUDI_AREBIA ";
                    amo=amo*18.27;
                        break;
        case 'w' : cout<<"converting currency from : SWITZERLAND ";
                    amo=amo*68.91;
                        break;
        case 'u' : cout<<"converting currency from : UNITED_STATES(US) ";
                    amo=amo*68.52;
                        break;
        case 'a' : cout<<"converting currency from : AUSTRALIA  ";
                    amo=amo*50.71;
                        break;
        case 'f' : cout<<"converting currency from : AFGHANISTHAN  ";
                    amo=amo*0.95;
                        break;
        case 'n' : cout<<"converting currency from : CHINA  ";
                    amo=amo*10.03;
                        break;
        case 'p' : cout<<"converting currency from : PAKISTHAN  ";
                    amo=amo*0.55;
                        break;
        case 'r' : cout<<"converting currency from : RUSSIA  ";
                    amo=amo*1.08;
                        break;
        case 'g' : cout<<"converting currency from : UNITED_KINGDOM(UK)  ";
                    amo=amo*89.08;
                        break;
        case 'c' : cout<<"converting currency from : CANADA   ";
                    amo=amo*52.67;
                        break;
        case 'z' : cout<<"converting currency from : NEWZEALAND  :";
                    amo=amo*46.20;
                        break;
    }
   switch(out_type)
    {   case 'i' : amo=amo*1;
                    cout<<" into : INDIAN :";
                        break;
        case 'b' : amo=amo*1.22;
                    cout<<" into : BANGLADESH :";
                        break;
        case 'j' : amo=amo*1.63;
                    cout<<" into : JAPAN :";
                        break;
        case 's' : amo=amo*0.055;
                    cout<<" into : SAUDI_AREBIA :";
                        break;
        case 'w' : amo=amo*0.0153;
                    cout<<" into : SWITZERLAND :";
                        break;
        case 'u' : amo=amo*0.0155;
                    cout<<" into : UNITED_STATES(US) :";
                        break;
        case 'a' : amo=amo*0.020;
                    cout<<" into : AUSTRALIA  :";
                        break;
        case 'f' : amo=amo*1.05;
                    cout<<" into : AFGHANISTHAN  :";
                        break;
        case 'n' : amo=amo*0.100;
                    cout<<" into : CHINA  :";
                        break;
        case 'p' : amo=amo*1.81;
                    cout<<" into : PAKISTHAN  :";
                        break;
        case 'r' : amo=amo*0.92;
                    cout<<" into : RUSSIA  :";
                        break;
        case 'g' : amo=amo*0.011;
                    cout<<" into : UNITED_KINGDOM(UK)  :";
                        break;
        case 'c' : amo=amo*0.019;
                    cout<<" into : CANADA   :";
                        break;
        case 'z' : amo=amo*0.022;
                    cout<<" into : NEWZEALAND  :";
                        break;
        }
    if (in_type==out_type)
        cout<<"  "<<amo1;
    else
        cout<<"  "<<amo;
    cout<<"  \nconversion done  ";
    }
     else
    {
        cout<<"ENTERED WRONG CODE FOR THE CURRENCY CONVERSION"<<"\n"<<"     ########  PRESSS ENTER  ########";
        currency();
    }
    }
    else
    {
        cout<<"ENTERED WRONG CODE FOR THE CURRENCY CONVERSION"<<"\n"<<"     ########  PRESSS ENTER  ########";
        currency();
    }
    system("pause");
}
void temperature()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<endl<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<endl<<endl;
    char in_type,out_type;
    double amo;
    cout<<"Celsius         ----     c"<<endl;
    cout<<"Fahrenheit      ----     f"<<endl;
    cout<<"Kelvin          ----     k"<<endl;
    cout<<"The Codes given above To Convert temperature ^^"<<endl;
    cout<<"Enter the code for input type temperature    :     "<<endl<<">>>>      ";
    cin>>in_type;
    if(in_type=='c'||in_type=='k'||in_type=='f'||in_type=='r'||in_type=='e')
    {
    cout<<"ENTER THE AMOUNT OF TEMPERATURE  : ";
    cin>>amo;
    cout<<endl<<endl<<"Enter the code for output type temperature    :      "<<endl<<">>>>      ";
    cin>>out_type;
    if(out_type=='c'||out_type=='k'||out_type=='f'||out_type=='r'||out_type=='e')
    {
    switch(in_type)
     {  case 'c' :cout<<"\nconverting temperature from :  "<<amo<<" Celsius ";
                        break;
        case 'k' :cout<<"\nconverting temperature from :  "<<amo<<" Kelvin ";
                        break;
        case 'f' :cout<<"\nconverting temperature from :  "<<amo<<" Fahrenheit ";
                        break;
        }
        if(in_type=='c' && out_type=='f')
            amo=32+(amo*1.8);
        if(in_type=='c' && out_type=='k')
            amo=273.15+amo;
        if(in_type=='k' && out_type=='f')
            amo=(-459)+(amo*1.8);
        if(in_type=='k' && out_type=='c')
            amo=(-273.15)+amo;
        if(in_type=='f' && out_type=='c')
            amo=(-17.77777778)+(0.55555556*amo);
        if(in_type=='f' && out_type=='k')
            amo=255.372222+(0.55555556*amo);
        if(in_type==out_type)
            amo=amo;
        switch(out_type)
    {   case 'c' : cout<<"into  Celsius   :  "<<amo<<"\n\n";
                        break;
        case 'k' : cout<<"into  Kelvin   :  "<<amo<<"\n\n";
                        break;
        case 'f' : cout<<"into  Fahrenheit   :  "<<amo<<"\n\n";
                        break;
        }
        cout<<"  \nconversion done  ";
    }
     else
    {
        cout<<"ENTERED WRONG CODE FOR THE TEMPERATURE CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          temperature();
    }
    }
    else
    {
        cout<<"ENTERED WRONG CODE FOR THE TEMPERATURE CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          temperature();
    }
    system("pause");
}
void area()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<"\n"<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<"\n"<<"\n";
    char in_type='\0',out_type='\0';
    double amo=0;
    cout<<"SQUARE_METER           ----     m      ||    SQUARE_CENTI_METER      ----     c"<<"\n";
    cout<<"SQUARE_KILO_METER      ----     k      ||    SQUARE_YARDS            ----     y"<<"\n";
    cout<<"SQUARE_INCHES          ----     i      ||    HCTARE                  ----     h"<<"\n";
    cout<<"SQUARE_FOOT            ----     f      ||    ACER                    ----     a"<<"\n";
    cout<<"SQUARE_MILE            ----     e"<<"\n";
    cout<<"The Codes given above To Convert AREA ^^"<<"\n";
    cout<<"Enter the code for input type AREA    :     "<<"\n"<<">>>>      ";
    cin>>in_type;
    if(in_type=='m'||in_type=='k'||in_type=='i'||in_type=='f'||in_type=='e'||in_type=='c'||in_type=='y'||in_type=='h'||in_type=='a')
    {
    cout<<"ENTER THE AMOUNT OF AREA  : ";
    /* There is a condition for checking amo
    is int or not which is not working properly*/
    if(!(cin>>amo))
    {cout<<"Entered wrong input ";
    system("pause");
    area();
    }
    cout<<"\n"<<"\n"<<"Enter the code for output type AREA    :      "<<"\n"<<">>>>      ";
    cin>>out_type;
    if(out_type=='m'||out_type=='k'||out_type=='i'||out_type=='f'||out_type=='e'||out_type=='c'||out_type=='y'||out_type=='h'||out_type=='a')
    {
    switch(in_type)
     {  case 'm' :cout<<"\nconverting AREA from :  "<<amo<<" SQUARE_METER ";
                    amo=amo*1;
                        break;
        case 'k' :cout<<"\nconverting AREA from :  "<<amo<<" SQUARE_KILO_METER ";
                    amo=amo*1000000;
                        break;
        case 'i' :cout<<"\nconverting AREA from :  "<<amo<<" SQUARE_INCHES ";
                    amo=amo*0.00064516;
                        break;
        case 'f' :cout<<"\nconverting AREA from :  "<<amo<<" SQUARE_FOOT ";
                    amo=amo*0.092903;
                        break;
        case 'e' :cout<<"\nconverting AREA from :  "<<amo<<" SQUARE_MILE ";
                    amo=amo*2589988.11;
                        break;
        case 'c' :cout<<"\nconverting AREA from :  "<<amo<<" SQUARE_CENTI_METER ";
                     amo=amo*0.0001;
                        break;
        case 'y' :cout<<"\nconverting AREA from :  "<<amo<<" SQUARE_YARDS  ";
                     amo=amo*0.836127;
                        break;
        case 'h' :cout<<"\nconverting AREA from :  "<<amo<<" HCTARE  ";
                     amo=amo*10000;
                        break;
        case 'a' :cout<<"\nconverting AREA from :  "<<amo<<" ACER  ";
                     amo=amo*4046.86;
                        break;
    }
   switch(out_type)
    {   case 'm' : amo=amo*1;
                    cout<<"into  SQUARE_METER   :  "<<amo<<"\n\n";
                        break;
        case 'k' : amo=amo*0.000001;
                    cout<<"into  SQUARE_KILO_METER   :  "<<amo<<"\n\n";
                        break;
        case 'i' : amo=amo*1550;
                    cout<<"into  SQUARE_INCHES   :  "<<amo<<"\n\n";
                        break;
        case 'f' : amo=amo*10.7639;
                    cout<<"into  SQUARE_FOOT   :  "<<amo<<"\n\n";
                        break;
        case 'e' : amo=amo*0.0000000386102159;
                    cout<<"into  SQUARE_MILE   :  "<<amo<<"\n\n";
                        break;
        case 'c' : amo=amo*10000;
                    cout<<"into  SQUARE_CENTI_METER   :  "<<amo<<"\n\n";
                        break;
        case 'y' : amo=amo*1.19599;
                    cout<<"into  SQUARE_YARDS   :  "<<amo<<"\n\n";
                        break;
        case 'h' : amo=amo*0.0001;
                    cout<<"into  HCTARE   :  "<<amo<<"\n\n";
                        break;
        case 'a' : amo=amo*0.000247105;
                    cout<<"into  ACER   :  "<<amo<<"\n\n";
                        break;
        }
        cout<<"  \nconversion done  ";
    }
     else
    {
        cout<<"ENTERED WRONG CODE FOR THE AREA CONVERSION"<<"\n"<<"     ########  PRESSS ENTER  ########";
        system("pause");
          area();
    }
    }
    else
    {
        cout<<"ENTERED WRONG CODE FOR THE AREA CONVERSION"<<"\n"<<"     ########  PRESSS ENTER  ########";
        system("pause");
          area();
    }
    system("pause");
}
void speed()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<endl<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<endl<<endl;
    char in_type,out_type;
    double amo;
    cout<<"KNOT                   ----     k      ||    FOOT PER SEC    ----     f"<<endl;
    cout<<"MILES PER HOUR         ----     i      ||    METER PER SEC   ----     m"<<endl;
    cout<<"KILO_METER PER HOURS   ----     o      "<<endl;
    cout<<"The Codes given above To Convert speedS ^^"<<endl;
    cout<<"Enter the code for input type speed    :     "<<endl<<">>>>      ";
    cin>>in_type;
    if(in_type=='k'||in_type=='m'||in_type=='o'||in_type=='f'||in_type=='i')
    {
    cout<<"ENTER THE SPEED  : ";
    cin>>amo;
    cout<<endl<<endl<<"Enter the code for output type speed    :      "<<endl<<">>>>      ";
    cin>>out_type;
    if(out_type=='k'||out_type=='m'||out_type=='o'||out_type=='f'||out_type=='i')
    {
    switch(in_type)
      { case 'k' :  cout<<"\nConverting speed from   **KNOT**  ";
                    amo=amo*0.514444;
                    break;
        case 'o' :  cout<<"\nConverting speed from   **KILO_METER PER HOURS**";
                    amo=amo*0.2777778;
                    break;
        case 'm' :  cout<<"\nConverting speed from   **METER PER SEC**";
                    amo=amo*1;
                    break;
        case 'i' :  cout<<"\nConverting speed from   **MILES PER HOURS**";
                    amo=amo*0.44704;
                    break;
        case 'f' :  cout<<"\nConverting speed from   **FOOT PER SEC**";
                    amo=amo*0.3048;
                    break;
            }
    switch(out_type)
    {   case 'k' :  amo=amo*1.94384;
                    cout<<"into : **KNOT** ==   "<<amo;
                    break;
        case 'o' :  amo=amo*3.6;
                    cout<<"into : **KILO_METER PER HOURS** ==   "<<amo;
                    break;
        case 'm' :  amo=amo*1;
                    cout<<"into : **METER PER SEC** ==   "<<amo;
                    break;
        case 'i' :  amo=amo*2.23694;
                    cout<<"into : **MILES PER HOURS** ==   "<<amo;
                    break;
        case 'f' :  amo=amo*3.28084;
                    cout<<"into : **FOOT PER SEC** ==   "<<amo;
                    break;
            }
            cout<<"  \nconversion done  ";
        }
        else
            {
            cout<<"ENTERED WRONG CODE FOR THE SPEED CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
            speed();
            }
        }
  else
    {
        cout<<"ENTERED WRONG CODE FOR THE SPEED CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
        speed();
    }
    system("pause");
}
void energy()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<endl<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<endl<<endl;
    char in_type,out_type;
    double amo;
    cout<<"JOULE              ----     j      ||    KILO_WATT_HOUR         ----     a"<<endl;
    cout<<"KILO_JOULE         ----     k      ||    BRITISH_THERMAL_UNIT   ----     b"<<endl;
    cout<<"GRAM_CALORIE       ----     g      ||    US_THERMAL_UNIT        ----     u"<<endl;
    cout<<"KILO_CALORIE       ----     l      ||    FOOT_POUND             ----     f"<<endl;
    cout<<"WATT_HOUR          ----     w"<<endl;
    cout<<"The Codes given above To Convert energy ^^"<<endl;
    cout<<"Enter the code for input type energy    :     "<<endl<<">>>>      ";
    cin>>in_type;
    if(in_type=='j'||in_type=='k'||in_type=='g'||in_type=='l'||in_type=='w'||in_type=='a'||in_type=='b'||in_type=='u'||in_type=='f')
    {
    cout<<"ENTER THE AMOUNT OF ENERGY  : ";
    cin>>amo;
    cout<<endl<<endl<<"Enter the code for output type energy    :      "<<endl<<">>>>      ";
    cin>>out_type;
    if(out_type=='j'||out_type=='k'||out_type=='g'||out_type=='l'||out_type=='w'||out_type=='a'||out_type=='b'||out_type=='u'||out_type=='f')
    {
    switch(in_type)
     {  case 'j' :cout<<"\nconverting energy from :  "<<amo<<" JOULE ";
                    amo=amo*1;
                        break;
        case 'k' :cout<<"\nconverting energy from :  "<<amo<<" KILO_JOULE ";
                    amo=amo*1000;
                        break;
        case 'g' :cout<<"\nconverting energy from :  "<<amo<<" GRAM_CALORIE ";
                    amo=amo*4.184;
                        break;
        case 'l' :cout<<"\nconverting energy from :  "<<amo<<" KILO_CALORIE ";
                    amo=amo*4184;
                        break;
        case 'w' :cout<<"\nconverting energy from :  "<<amo<<" WATT_HOUR ";
                    amo=amo*3600;
                        break;
        case 'a' :cout<<"\nconverting energy from :  "<<amo<<" KILO_WATT_HOUR ";
                     amo=amo*3600000;
                        break;
        case 'b' :cout<<"\nconverting energy from :  "<<amo<<" BRITISH_THERMAL_UNIT  ";
                     amo=amo*1055.06;
                        break;
        case 'u' :cout<<"\nconverting energy from :  "<<amo<<" US_THERMAL_UNIT  ";
                     amo=amo*105506000;
                        break;
        case 'f' :cout<<"\nconverting energy from :  "<<amo<<" FOOT_POUND  ";
                     amo=amo*1.35582;
                        break;
    }
   switch(out_type)
    {   case 'j' : amo=amo*1;
                    cout<<"into  JOULE   :  "<<amo<<"\n\n";
                        break;
        case 'k' : amo=amo*0.001;
                    cout<<"into  KILO_JOULE   :  "<<amo<<"\n\n";
                        break;
        case 'g' : amo=amo*0.239006;
                    cout<<"into  GRAM_CALORIE   :  "<<amo<<"\n\n";
                        break;
        case 'l' : amo=amo*0.000239006;
                    cout<<"into  KILO_CALORIE   :  "<<amo<<"\n\n";
                        break;
        case 'w' : amo=amo*0.000277778;
                    cout<<"into  WATT_HOUR   :  "<<amo<<"\n\n";
                        break;
        case 'a' : amo=amo*0.000000277;
                    cout<<"into  KILO_WATT_HOUR   :  "<<amo<<"\n\n";
                        break;
        case 'b' : amo=amo*0.000947817;
                    cout<<"into  BRITISH_THERMAL_UNIT   :  "<<amo<<"\n\n";
                        break;
        case 'u' : amo=amo*0.0000000094804;
                    cout<<"into  US_THERMAL_UNI   :  "<<amo<<"\n\n";
                        break;
        case 'f' : amo=amo*0.737562;
                    cout<<"into  FOOT_POUND   :  "<<amo<<"\n\n";
                        break;
        }
        cout<<"  \nconversion done  ";
    }
     else
    {
        cout<<"ENTERED WRONG CODE FOR THE ENERGY CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          energy();
    }
    }
    else
    {
        cout<<"ENTERED WRONG CODE FOR THE ENERGY CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          energy();
    }
    system("pause");
}
void frequency()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<endl<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<endl<<endl;
    char in_type,out_type;
    double amo;
    cout<<"HERTZ           ----     h      ||    GEGA_HERTZ      ----     g"<<endl;
    cout<<"KILO_HERTZ      ----     k      ||    MEGA_HERTZ      ----     m"<<endl;
    cout<<"The Codes given above To Convert frequency ^^"<<endl;
    cout<<"Enter the code for input type frequency    :     "<<endl<<">>>>      ";
    cin>>in_type;
    if(in_type=='m'||in_type=='k'||in_type=='g'||in_type=='h')
    {
    cout<<"ENTER THE AMOUNT OF FREQUENCY  : ";
    cin>>amo;
    cout<<endl<<endl<<"Enter the code for output type frequency    :      "<<endl<<">>>>      ";
    cin>>out_type;
    if(out_type=='m'||out_type=='k'||out_type=='g'||out_type=='h')
    {
    switch(in_type)
     {  case 'm' :cout<<"\nconverting frequency from :  "<<amo<<" MEGA_HERTZ ";
                    amo=amo*1000;
                        break;
        case 'k' :cout<<"\nconverting frequency from :  "<<amo<<" KILO_HERTZ ";
                    amo=amo*1;
                        break;
        case 'g' :cout<<"\nconverting frequency from :  "<<amo<<" GEGA_HERTZ ";
                    amo=amo*1000000;
                        break;
        case 'h' :cout<<"\nconverting frequency from :  "<<amo<<" HERTZ ";
                    amo=amo*0.001;
                        break;
    }
   switch(out_type)
    {   case 'm' : amo=amo*1;
                    cout<<"into  MEGA_HERTZ   :  "<<amo<<"\n\n";
                        break;
        case 'k' : amo=amo*0.001;
                    cout<<"into  KILO_HERTZ   :  "<<amo<<"\n\n";
                        break;
        case 'g' : amo=amo*0.000001;
                    cout<<"into  GEGA_HERTZ   :  "<<amo<<"\n\n";
                        break;
        case 'h' : amo=amo*1000;
                    cout<<"into  HERTZ   :  "<<amo<<"\n\n";
                        break;
            }
            cout<<"  \nconversion done  ";
    }
     else
    {
        cout<<"ENTERED WRONG CODE FOR THE FREQUENCY CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          frequency();
    }
    }
    else
    {
        cout<<"ENTERED WRONG CODE FOR THE FREQUENCY CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          frequency();
    }
    system("pause");
}
void length()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<endl<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<endl<<endl;
    char in_type,out_type;
    double amo;
    cout<<"METER           ----     m      ||    CENTI_METER      ----     c"<<endl;
    cout<<"KILO_METER      ----     k      ||    YARDS            ----     y"<<endl;
    cout<<"DECI_METER      ----     d      ||    MILI_METER       ----     l"<<endl;
    cout<<"FOOT            ----     f      ||    NANO_METR        ----     n"<<endl;
    cout<<"MICRO_METER     ----     r      ||    MILE             ----     e"<<endl;
    cout<<"INCHES          ----     i  "<<endl<<"The Codes given above To Convert LENGTHS ^^"<<endl;
    cout<<"Enter the code for input type Length    :     "<<endl<<">>>>      ";
    cin>>in_type;
    if(in_type=='m'||in_type=='c'||in_type=='k'||in_type=='d'||in_type=='f'||in_type=='i'||in_type=='r'||in_type=='y'||in_type=='l'||in_type=='n'||in_type=='e')
    {
    cout<<"ENTER THE LENGTH  : ";
    cin>>amo;
    cout<<endl<<endl<<"Enter the code for output type length    :      "<<endl<<">>>>      ";
    cin>>out_type;
    if(out_type=='m'||out_type=='c'||out_type=='k'||out_type=='d'||out_type=='f'||out_type=='i'||out_type=='r'||out_type=='y'||out_type=='l'||out_type=='n'||out_type=='e')
    {
    switch(in_type)
      { case 'm' :  cout<<"\nConverting length from   **METER**  ";
                    amo=amo*1;
                    break;
        case 'k' :  cout<<"\nConverting length from   **KILO_METER**";
                    amo=amo*1000;
                    break;
        case 'd' :  cout<<"\nConverting length from   **DECI_METER**";
                    amo=amo*0.1;
                    break;
        case 'c' :  cout<<"\nConverting length from   **CENTI_METER**";
                    amo=amo*0.01;
                    break;
        case 'l' :  cout<<"\nConverting length from   **MILI_METER**";
                    amo=amo*0.001;
                    break;
        case 'r' :  cout<<"\nConverting length from   **MICRO_METER**";
                    amo=amo*0.000001;
                    break;
        case 'n' :  cout<<"\nConverting length from   **NANO_METR**";
                    amo=amo*0.000000001;
                    break;
        case 'e' :   cout<<"\nConverting length from   **MILE**";
                    amo=amo*1609.34;
                    break;
        case 'y' :  cout<<"\nConverting length from   **YARDS**";
                    amo=amo*0.9144;
                    break;
        case 'f' :  cout<<"\nConverting length from   **FOOT**";
                    amo=amo*0.3048;
                    break;
        case 'i' :  cout<<"\nConverting length from   **INCHES**";
                    amo=amo*0.0254;
                    break;
            }
    switch(out_type)
    {   case 'm' :  amo=amo*1;
                    cout<<"into : **METER** ==   "<<amo;
                    break;
        case 'k' :  amo=amo*0.001;
                    cout<<"into : **KILO_METER** ==   "<<amo;
                    break;
        case 'd' :  amo=amo*10;
                    cout<<"into : **DECI_METER** ==   "<<amo;
                    break;
        case 'c' :  amo=amo*100;
                    cout<<"into : **CENTI_METER** ==   "<<amo;
                    break;
        case 'l' :  amo=amo*1000;
                    cout<<"into : **MILI_METER** ==   "<<amo;
                    break;
        case 'r' :  amo=amo*1000000;
                    cout<<"into : **MICRO_METER** ==   "<<amo;
                    break;
        case 'n' :  amo=amo*1000000000;
                    cout<<"into : **NANO_METR** ==   "<<amo;
                    break;
        case 'e' :  amo=amo*0.00062137;
                    cout<<"into : **MILE** ==   "<<amo;
                    break;
        case 'y' :  amo=amo*1.09361;
                    cout<<"into : **YARDS** ==   "<<amo;
                    break;
        case 'f' :  amo=amo*3.280;
                    cout<<"into : **FOOT** ==   "<<amo;
                    break;
        case 'i' :  amo=amo*39.3701;
                    cout<<"into : **INCHES** ==   "<<amo;
                    break;
            }
            cout<<"  \nconversion done  ";
        }
        else
            {
            cout<<"ENTERED WRONG CODE FOR THE LENGTH CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
            length();
            }
        }
  else
    {
        cout<<"ENTERED WRONG CODE FOR THE LENGTH CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
        length();
    }
    system("pause");
}
void pressure()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<endl<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<endl<<endl;
    char in_type,out_type;
    double amo;
    cout<<"ATM           ----     a      ||    PASCAL       ----     p"<<endl;
    cout<<"BAR           ----     b      ||    TORR         ----     t"<<endl;
    cout<<"POUNDS-FORCE PER SQUARE INCH        ----     f      "<<endl;
    cout<<"\nThe Codes given above To Convert pressure ^^"<<endl;
    cout<<"Enter the code for input type pressure    :     "<<endl<<">>>>      ";
    cin>>in_type;
    if(in_type=='a'||in_type=='b'||in_type=='p'||in_type=='t'||in_type=='f'||in_type=='c'||in_type=='y'||in_type=='h'||in_type=='a')
    {
    cout<<"ENTER THE AMOUNT OF PRESSURE  : ";
    cin>>amo;
    cout<<endl<<endl<<"Enter the code for output type pressure    :      "<<endl<<">>>>      ";
    cin>>out_type;
    if(out_type=='a'||out_type=='b'||out_type=='p'||out_type=='t'||out_type=='f'||out_type=='c'||out_type=='y'||out_type=='h'||out_type=='a')
    {
    switch(in_type)
     {  case 'a' :cout<<"\nconverting pressure from :  "<<amo<<" ATM";
                    amo=amo*1;
                        break;
        case 'b' :cout<<"\nconverting pressure from :  "<<amo<<" BAR ";
                    amo=amo*0.986923;
                        break;
        case 'p' :cout<<"\nconverting pressure from :  "<<amo<<" PASCAL ";
                    amo=amo*0.00000986923;
                        break;
        case 't' :cout<<"\nconverting pressure from :  "<<amo<<" TORR ";
                    amo=amo*0.00131579;
                        break;
        case 'f' :cout<<"\nconverting pressure from :  "<<amo<<" POUNDS-FORCE PER SQUARE INCH ";
                    amo=amo*0.068046;
                        break;
 }
   switch(out_type)
    {   case 'a' : amo=amo*1;
                    cout<<"into  ATM   ==  "<<amo<<"\n\n";
                        break;
        case 'b' : amo=amo*1.01325;
                    cout<<"into  BAR   ==  "<<amo<<"\n\n";
                        break;
        case 'p' : amo=amo*101325;
                    cout<<"into  PASCAL   ==  "<<amo<<"\n\n";
                        break;
        case 't' : amo=amo*760;
                    cout<<"into  TORR   ==  "<<amo<<"\n\n";
                        break;
        case 'f' : amo=amo*14.6959;
                    cout<<"into  POUNDS-FORCE PER SQUARE INCH   :  "<<amo<<"\n\n";
                        break;
        }
        cout<<"  \nconversion done  ";
    }
     else
    {
        cout<<"ENTERED WRONG CODE FOR THE PRESSURE CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          pressure();
    }
    }
    else
    {
        cout<<"ENTERED WRONG CODE FOR THE PRESSURE CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          pressure();
    }
    system("pause");
}
void time()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<endl<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<endl<<endl;
    char in_type,out_type;
    double amo;
    cout<<"MINUTE             ----     m      ||     SECONDS        ----     s"<<endl;
    cout<<"NANO_SECONDS       ----     n      ||     DAY            ----     d"<<endl;
    cout<<"MICRO_SECONDS      ----     r      ||     WEEK           ----     w"<<endl;
    cout<<"MILI_SECONDS       ----     l      ||     HOURS          ----     h"<<endl;
    cout<<"YEAR               ----     y      ||     MONTH          ----     o"<<endl;
    cout<<"DECADE             ----     e      ||     CENTURY        ----     c"<<endl;
    cout<<"The Codes given above To Convert time ^^"<<endl;
    cout<<"Enter the code for input type time    :     "<<endl<<">>>>      ";
    cin>>in_type;
    if(in_type=='m'||in_type=='s'||in_type=='n'||in_type=='d'||in_type=='r'||in_type=='w'||in_type=='l'||in_type=='h'||in_type=='y'||in_type=='o'||in_type=='e'||in_type=='c')
    {
    cout<<"ENTER THE AMOUNT OF TIME  : ";
    cin>>amo;
    cout<<endl<<endl<<"Enter the code for output type time    :      "<<endl<<">>>>      ";
    cin>>out_type;
    if(out_type=='m'||out_type=='s'||out_type=='n'||out_type=='d'||out_type=='r'||out_type=='w'||out_type=='l'||out_type=='h'||out_type=='y'||in_type=='o'||in_type=='e'||in_type=='c')
    {
    switch(in_type)
     {  case 'm' :cout<<"\nconverting time from :  "<<amo<<" MINUTE ";
                    amo=amo*1;
                        break;
        case 's' :cout<<"\nconverting time from :  "<<amo<<" SECONDS ";
                    amo=amo*0.0166667;
                        break;
        case 'n' :cout<<"\nconverting time from :  "<<amo<<" NANO_SECONDS ";
                    amo=amo*0.00000000001667;
                        break;
        case 'd' :cout<<"\nconverting time from :  "<<amo<<" DAY ";
                    amo=amo*1440;
                        break;
        case 'r' :cout<<"\nconverting time from :  "<<amo<<" MICRO_SECONDS ";
                    amo=amo*0.00000001667;
                        break;
        case 'w' :cout<<"\nconverting time from :  "<<amo<<" WEEK ";
                     amo=amo*10080;
                        break;
        case 'l' :cout<<"\nconverting time from :  "<<amo<<" MILI_SECONDS  ";
                     amo=amo*0.000016667;
                        break;
        case 'h' :cout<<"\nconverting time from :  "<<amo<<" HOURS  ";
                     amo=amo*60;
                        break;
        case 'y' :cout<<"\nconverting time from :  "<<amo<<" YEAR  ";
                     amo=amo*525600;
                        break;
        case 'o' :cout<<"\nconverting time from :  "<<amo<<" MONTH  ";
                     amo=amo*43800;
                        break;
        case 'e' :cout<<"\nconverting time from :  "<<amo<<" DECADE  ";
                     amo=amo*5256000;
                        break;
        case 'c' :cout<<"\nconverting time from :  "<<amo<<" CENTURY  ";
                     amo=amo*52560000;
                        break;
    }
   switch(out_type)
    {   case 'm' : amo=amo*1;
                    cout<<"into  MINUTE   :  "<<amo<<"\n\n";
                        break;
        case 's' : amo=amo*60;
                    cout<<"into  SECONDS   :  "<<amo<<"\n\n";
                        break;
        case 'n' : amo=amo*60000000000;
                    cout<<"into  NANO_SECONDS   :  "<<amo<<"\n\n";
                        break;
        case 'd' : amo=amo*0.00069444444;
                    cout<<"into  DAY   :  "<<amo<<"\n\n";
                        break;
        case 'r' : amo=amo*60000000;
                    cout<<"into  MICRO_SECONDS   :  "<<amo<<"\n\n";
                        break;
        case 'w' : amo=amo*0.000099206;
                    cout<<"into  WEEK   :  "<<amo<<"\n\n";
                        break;
        case 'l' : amo=amo*60000;
                    cout<<"into  MILI_SECONDS   :  "<<amo<<"\n\n";
                        break;
        case 'h' : amo=amo*0.016666667;
                    cout<<"into  HOURS   :  "<<amo<<"\n\n";
                        break;
        case 'y' : amo=amo*0.0000019026;
                    cout<<"into  YEAR   :  "<<amo<<"\n\n";
                        break;
        case 'o' : amo=amo*0.000022831;
                    cout<<"into  MONTH   :  "<<amo<<"\n\n";
                        break;
        case 'e' : amo=amo*0.00000019026;
                    cout<<"into  DECADE   :  "<<amo<<"\n\n";
                        break;
        case 'c' : amo=amo*0.000000019026;
                    cout<<"into  CENTURY   :  "<<amo<<"\n\n";
                        break;
        }
        cout<<"  \nconversion done  ";
    }
     else
    {
        cout<<"ENTERED WRONG CODE FOR THE TIME CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          time();
    }
    }
    else
    {
        cout<<"ENTERED WRONG CODE FOR THE TIME CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          time();
    }
    system("pause");
}
void volume()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<endl<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<endl<<endl;
    char in_type,out_type;
    double amo;
    cout<<"LITER              ----     l      ||    MILI_LITER       ----     r"<<endl;
    cout<<"CUBIC_METER        ----     m      ||    CUBIC_FOOT       ----     f"<<endl;
    cout<<"MILI_METER         ----     e      ||    CUBIC_INCH       ----     i"<<endl;
    cout<<"CUBIC_CENTI_METER  ----     c      ||    CUBIC_YARDS      ----     y"<<endl;
    cout<<"HECTOLITER         ----     h      ||    CUBIC_ACER_FOOT  ----     a"<<endl;
    cout<<"The Codes given above To Convert volumeS ^^"<<endl;
    cout<<"Enter the code for input type volume    :     "<<endl<<">>>>      ";
    cin>>in_type;
    if(in_type=='l'||in_type=='m'||in_type=='e'||in_type=='c'||in_type=='h'||in_type=='r'||in_type=='f'||in_type=='y'||in_type=='i'||in_type=='a')
    {
    cout<<"ENTER THE VOLUME  : ";
    cin>>amo;
    cout<<endl<<endl<<"Enter the code for output type volume    :      "<<endl<<">>>>      ";
    cin>>out_type;
    if(out_type=='l'||out_type=='m'||out_type=='e'||out_type=='c'||out_type=='h'||out_type=='r'||out_type=='f'||out_type=='y'||out_type=='i'||out_type=='a')
    {
    switch(in_type)
      { case 'l' :  cout<<"\nConverting volume from   **LITER**  ";
                    amo=amo*1;
                    break;
        case 'e' :  cout<<"\nConverting volume from   **CUBIC_MILI_METER**";
                    amo=amo*0.000001;
                    break;
        case 'c' :  cout<<"\nConverting volume from   **CUBIC_CENTI_METER**";
                    amo=amo*0.001;
                    break;
        case 'm' :  cout<<"\nConverting volume from   **CUBIC_METER**";
                    amo=amo*1000;
                    break;
        case 'i' :  cout<<"\nConverting volume from   **CUBIC_INCH**";
                    amo=amo*0.016387064;
                    break;
        case 'f' :  cout<<"\nConverting volume from   **CUBIC_FOOT**";
                    amo=amo*28.3168466;
                    break;
        case 'a' :  cout<<"\nConverting volume from   **CUBIC_ACER_FOOT**";
                    amo=amo*1234000;
                    break;
        case 'y' :  cout<<"\nConverting volume from   **CUBIC_YARDS**";
                    amo=amo*764.554858;
                    break;
        case 'h' :  cout<<"\nConverting volume from   **HECTOLITER**";
                    amo=amo*100;
                    break;
        case 'r' :  cout<<"\nConverting volume from   **MILI_LITER**";
                    amo=amo*0.001;
                    break;
            }
    switch(out_type)
    {   case 'l' :  amo=amo*1;
                    cout<<"into : **LITER** ==   "<<amo;
                    break;
        case 'e' :  amo=amo*1000000;
                    cout<<"into : **CUBIC_MILI_METER** ==   "<<amo;
                    break;
        case 'c' :  amo=amo*1000;
                    cout<<"into : **CUBIC_CENTI_METER** ==   "<<amo;
                    break;
        case 'm' :  amo=amo*0.001;
                    cout<<"into : **CUBIC_METER** ==   "<<amo;
                    break;
        case 'i' :  amo=amo*61.0237441;
                    cout<<"into : **CUBIC_INCH** ==   "<<amo;
                    break;
        case 'f' :  amo=amo*0.035314667;
                    cout<<"into : **CUBIC_FOOT** ==   "<<amo;
                    break;
        case 'a' :  amo=amo*0.000000810372;
                    cout<<"into : **CUBIC_ACER_FOOT** ==   "<<amo;
                    break;
        case 'y' :  amo=amo*0.001307441;
                    cout<<"into : **CUBIC_YARDS** ==   "<<amo;
                    break;
        case 'h' :  amo=amo*0.01;
                    cout<<"into : **HECTOLITER** ==   "<<amo;
                    break;
        case 'r' :  amo=amo*1000;
                    cout<<"into : **MILI_LITER** ==   "<<amo;
                    break;
            }
            cout<<"  \nconversion done  ";
        }
        else
            {
            cout<<"ENTERED WRONG CODE FOR THE VOLUME CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
            volume();
            }
        }
  else
    {
        cout<<"ENTERED WRONG CODE FOR THE VOLUME CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
        volume();
    }
    system("pause");
}
void weight()
{   system("cls");
    cout<<"########!!!!########   ****  NOTE  ****  ########!!!!########"<<endl<<"## THIS APPLICATION IS  'CASE SENSITIVE'  ENTER PROPERLY ##"<<endl<<endl;
    char in_type,out_type;
    double amo;
    cout<<"GRAM           ----     g      ||    IMPERIAL_GRAM      ----     i"<<endl;
    cout<<"KILO_GRAM      ----     k      ||    US_TON             ----     u"<<endl;
    cout<<"TONNE          ----     t      ||    MILI_GRAM          ----     m"<<endl;
    cout<<"OUNCE          ----     o      ||    STONE              ----     s"<<endl;
    cout<<"MICRO_GRAM     ----     c      ||    POUND              ----     p"<<endl;
    cout<<"The Codes given above To Convert WEIGHT ^^"<<endl;
    cout<<"Enter the code for input type Weight    :     "<<endl<<">>>>      ";
    cin>>in_type;
    if(in_type=='k'||in_type=='g'||in_type=='t'||in_type=='o'||in_type=='c'||in_type=='i'||in_type=='u'||in_type=='m'||in_type=='s'||in_type=='p')
    {
    cout<<"ENTER THE AMOUNT OF Weight  : ";
    cin>>amo;
    cout<<endl<<endl<<"Enter the code for output type Weight    :      "<<endl<<">>>>      ";
    cin>>out_type;
    if(out_type=='k'||out_type=='g'||out_type=='t'||out_type=='o'||out_type=='c'||out_type=='i'||out_type=='u'||out_type=='m'||out_type=='s'||out_type=='p')
    {
    switch(in_type)
     {  case 'g' :cout<<"\nconverting weight from :  "<<amo<<" GRAM ";
                    amo=amo*0.001;
                        break;
        case 'k' :cout<<"\nconverting weight from :  "<<amo<<" KILO_GRAM ";
                    amo=amo*1;
                        break;
        case 't' :cout<<"\nconverting weight from :  "<<amo<<" TONNE ";
                    amo=amo*1000;
                        break;
        case 'm' :cout<<"\nconverting weight from :  "<<amo<<" MILI_GRAM ";
                    amo=amo*0.000001;
                        break;
        case 'c' :cout<<"\nconverting weight from :  "<<amo<<" MICRO_GRAM ";
                    amo=amo*0.000000001;
                        break;
        case 'i' :cout<<"\nconverting weight from :  "<<amo<<" IMPERIAL_GRAM ";
                     amo=amo*1016.05;
                        break;
        case 'u' :cout<<"\nconverting weight from :  "<<amo<<" US_TON  ";
                     amo=amo*907.185;
                        break;
        case 's' :cout<<"\nconverting weight from :  "<<amo<<" STONE  ";
                     amo=amo*6.35029;
                        break;
        case 'p' :cout<<"\nconverting weight from :  "<<amo<<" POUND  ";
                     amo=amo*0.453592;
                        break;
        case 'o' :cout<<"\nconverting weight from :  "<<amo<<" OUNCE  ";
                     amo=amo*0.0283495;
                        break;
    }
   switch(out_type)
    {   case 'g' : amo=amo*1000;
                    cout<<"into  GRAM   :  "<<amo<<"\n\n";
                        break;
        case 'k' : amo=amo*1;
                    cout<<"into  KILO_GRAM   :  "<<amo<<"\n\n";
                        break;
        case 't' : amo=amo*0.001;
                    cout<<"into  TONNE   :  "<<amo<<"\n\n";
                        break;
        case 'm' : amo=amo*1000000;
                    cout<<"into  MILI_GRAM   :  "<<amo<<"\n\n";
                        break;
        case 'c' : amo=amo*1000000000;
                    cout<<"into  MICRO_GRAM   :  "<<amo<<"\n\n";
                        break;
        case 'i' : amo=amo*0.000984207;
                    cout<<"into  IMPERIAL_GRAM   :  "<<amo<<"\n\n";
                        break;
        case 'u' : amo=amo*0.00110231;
                    cout<<"into  US_TON   :  "<<amo<<"\n\n";
                        break;
        case 's' : amo=amo*0.157473;
                    cout<<"into  STONE   :  "<<amo<<"\n\n";
                        break;
        case 'p' : amo=amo*2.20462;
                    cout<<"into  POUND   :  "<<amo<<"\n\n";
                        break;
        case 'o' : amo=amo*35.274;
                    cout<<"into  OUNCE   :  "<<amo<<"\n\n";
                        break;
        }
        cout<<"  \nconversion done  ";
    }
     else
    {
        cout<<"ENTERED WRONG CODE FOR THE WEIGHT CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          weight();
    }
    }
    else
    {
        cout<<"ENTERED WRONG CODE FOR THE WEIGHT CONVERSION"<<endl<<"     ########  PRESSS ENTER  ########";
          weight();
    }
    system("pause");
}
