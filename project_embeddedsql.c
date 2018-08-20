#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdbool.h>
#include "sqlca.h"



EXEC SQL INCLUDE sqlca;
EXEC SQL BEGIN DECLARE SECTION;

typedef struct
{
  char bankname[50];
  char bankid[50];
}bank_record;

const char *query;

typedef struct{
 char dob[10];
 long int aadhar_no;
 char fname[10];
 char lname[10];
 char mname[10];
 char c_district[15];
 int c_pincode;
 char c_state[15];
 char bank_id[50];
}customer_record;

typedef struct{
 float avg_amount;
 char o_bank_id[50];
 char mon[3];
}query_4_record;

typedef struct
{
 char fname[10];
 long int aadhar_no;
 int amount;
 char date_1[10];
}query_8_record;

typedef struct{
 int branch_id;	
 char branchname[50];
 char br_district[15];
 char bank_id[50];
 int br_pincode;
 char br_state[25];
}branch_record;

typedef struct{
 long int account_no;
 long int aadhar_no;
 char account_type[10];
 int balance;
 char bank_id[50];
 int branch_id;
}account_record;

typedef struct{
 char fname[10];
 long int aadhar_no;
 long int amount;
 char mon[3];
}query_6_record;


typedef struct{
 int branch_id;
 char atm_id[10];
 int count;
 char mon[3];
}query_7_record;

typedef struct{
 char atm_id[10];
 char bank_id[50];
 char a_district[15];
 char a_state[15];
 int a_pincode;
 long int cash_balance;
 int branch_id;
}atm_record;


typedef struct{
 long int card_no;
 int cvv;
 char card_fname[10];
 char card_mname[10];
 char card_lname[10];
 char fromdate[10];
 char expirydate[10];
 char card_type[15];
 int pin_no;
 long int aadhar_no;
 char bank_id[50];
 long int account_no;
 long int transaction_limit;
}atmcard_record;



typedef struct{
 long int phone_no[5];
 long int aadhar_no;
}phone_record;

typedef struct{
 char email[80];
 long int aadhar_no;
}email_record;


typedef struct{
 long int aadhar_no;
 int branch_id;
 char date_1[10];
 int amount;
 char transaction_type[15];
}query_5_record;

typedef struct{
 long int transaction_id;
 long int account_no;
 char transaction_type[15];
 long int aadhar_no;
}transaction_H_record;

typedef struct{
 long int transaction_id;
 long int aadhar_no;
 long int card_no;
 char date_1[10];
 int amount;
 int balance_left;
 char location_l[20];
 char time_t[10];
 char atm_id[10];
 char bank_id[50];
}transaction_details_record;


typedef struct{
 char o_bank_id[10];
 long int o_bank_account;
 int tax;
 char bank_id[50];
}other_bank_details_record;


typedef struct{
 int transaction_id;
 long int aadhar_no;
 long int card_no;
 char date_1[10];
 int amount;
 char location_l[20];
 char time_t[10];
}other_bank_td_record;



typedef struct{
 long int transaction_id;
 long int aadhar_no;
 long int card_no;
 char date_1[10];
 int amount;
 char location_l[20];
 char time_t[10];
 char atm_id[10];
 char bank_id[50];
 char o_bank_id[50];
}other_bank_transaction_details_record;




typedef struct{
 char fname[10];
 char atm_id[10];
 int branch_id;
 char district[10];
 char branch_name[50];
}query_3_record;

typedef struct{
 long int transaction_id;
 long int aadhar_no;
 long int card_no;
 char date_1[10];
 int amount;
 int balance_left;
 char location_l[20];
 char time_t[10];
 char atm_id[10];
 char bank_id[50];
 int branch_id;
}transaction_details_1_record;

/////////////////////////////////////////////////////////////////////////////////////

long int try1;
long int try2;
char try3[10];
int try4;
char try5[10];
int try6;
long int try7;
int try8;
int count;

int check;
int transaction_id;
long int aadhar_no;
long int card_no;
char date_1[10];
int amount;
char location_l[20];
char mon[3];
long int bo;
char bankid[50];
char bankname[50];
char try[10];
char o_bank_id[10];
int o_bank_account;
int tax;

int transaction_id;
char date_1[10];
int amount;
int balance_left;
char location_l[20];
char time[10];

int transaction_id;
char transaction_type[15];

long int card_no;
int cvv;
char card_fname[10];
char card_mname[10];
char card_lname[10];
char fromdate[10];
char expirydate[10];
char card_type[15];
int pin_no;
long int transaction_limit;

long int account_no;
char account_type[10];
int balance;

char email[80];


char fname[10];
char mname[10];
char lname[10];
char dob[10];
char c_district[15];
int c_pincode;
char c_state[15];

int check1;
long int check2;
long int check3;
int check4;
int check5;
int check6;
int check7;
int check8;
int check9;
int check10;
int check11;
int check12;
int check13;
int check14;
int check15;
int check16;
int check17;
long int check18;
long int check19;
int check20;



int branch_id;	
char branchname[50];
char address[60];
char br_district[15];
int br_pincode;
char br_state[25];


char atm_id[10];
char a_district[15];
char a_state[15];
int a_pincode;
int cash_balance;

int phone_no[5];

EXEC SQL END DECLARE SECTION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void insert_atm()
{

printf("\n Enter details:\n");
   
   EXEC SQL BEGIN DECLARE SECTION;
   char atm_id[10];
   atm_record atmrec;
   EXEC SQL END DECLARE SECTION;

	printf("\ndistrict ");
	scanf("%s",a_district);

 	printf("atm id");
	scanf("%s",atm_id);

 	printf("\nState: ");
	scanf("%s",a_state);

	printf("\npin Code: ");
	scanf("%d",&a_pincode);

	printf("cash balance");
	scanf("%d",&cash_balance);

	printf("branch id ");
	scanf("%d",&branch_id);

int check17;//0 or 1
query="SELECT ATM_existance(:atm_id)";
EXEC SQL PREPARE s20 from :query;
EXEC SQL EXECUTE s20 into :check17 using :atm_id;

	if(check17==1)
		{
		  printf("the atm id already exist therefore invalid insert \n");
		  return;
		}



int check;//0 or 1
query="SELECT branch_check(:branch_id)";
EXEC SQL PREPARE s1 from :query;
EXEC SQL EXECUTE s1 into :check using :branch_id;

	if(check==0)
		{
		  printf("the branch id does not exist therefore invalid insert \n");
		  return;
		}


EXEC SQL set transaction read write;
EXEC SQL insert into atm values(:atm_id,'SBIN0',:a_district,:a_state,:a_pincode,:cash_balance,:branch_id);

	if (sqlca.sqlcode < 0) 
		{
		  printf("\n\natm (%s) DID NOT GET ADDED\n",atm_id);
		  EXEC SQL rollback work;
		  EXEC SQL commit;
		  return;        
		}
		EXEC SQL commit;
		return;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void insert_atm_card()
{

printf("\n Enter details:\n");
   EXEC SQL BEGIN DECLARE SECTION;
   long int card_no; 
   long int aadhar_no;
   EXEC SQL END DECLARE SECTION;

	printf("\nCard fName: ");
	scanf("%s",card_fname);

	printf("\nCard MName: ");
	scanf("%s",card_mname);

	printf("\nCard lName: ");
	scanf("%s",card_lname);

	printf("enter fromdate in format 2017-09-19");
	scanf("%s",fromdate);

	printf("enter expiry in format 2017-09-19");
	scanf("%s",expirydate);

	printf("card_type");
	scanf("%s",card_type);

	printf("the aadhar no");
  	scanf("%ld",&aadhar_no);

 	printf("a card no");
	scanf("%ld",&card_no);

	printf(" cvv ");
  	scanf("%d",&cvv);

	printf("pin no");
	scanf("%d",&pin_no);

	printf("account_no");
	scanf("%ld",&account_no);

	printf("transaction limit");
	scanf("%ld",&transaction_limit);

int check1;//0 or 1 or 2
query="SELECT aadhaar_cust_and_has_atmcard_check(:aadhar_no)";
EXEC SQL PREPARE s2 from :query;
EXEC SQL EXECUTE s2 into :check1 using :aadhar_no;

	if(check1==1)
		{
		  printf("Customer already has atm_card");
		  return;
		}
	if(check1==0)
		{
		  printf("customer does not exist");
		  return;
		}

long int check18;
query="SELECT aadhar_check_in_cust(:aadhar_no)";
EXEC SQL PREPARE s21 from :query;
EXEC SQL EXECUTE S21 into :check18 using :aadhar_no;

printf("%ld",check18);

	if(check18!=account_no)
		{
		  printf("wrong account no");
		  return;
		}

EXEC SQL set transaction read write;
EXEC SQL insert into atm_card values(:card_no,:cvv,:card_fname,:card_mname,:card_lname,:fromdate,:expirydate,:card_type,:pin_no,:aadhar_no,'SBIN0',:account_no,:transaction_limit);
	if (sqlca.sqlcode < 0) 
		{
		  printf("\n\natm card (%ld) DID NOT GET ADDED\n",card_no);
		  EXEC SQL rollback work;
		  EXEC SQL commit;
		  return;        
		}
EXEC SQL commit;
return;


}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void insert_trans(){


printf("\n Enter details:\n");

EXEC SQL BEGIN DECLARE SECTION;

int transaction_id; 
long int card_no;

EXEC SQL END DECLARE SECTION;

printf(" transaction_type");
scanf("%s",transaction_type);

printf("date format 2018-09-08 (yyyy-mm-dd");
scanf("%s",date_1);

printf("location ");
scanf("%s",location_l);

printf("time hh:mm:ss");
scanf("%s",time);

printf("atm id");
scanf("%s",atm_id);

printf("a card no");
scanf("%ld",&card_no);

printf("the transaction id");
scanf("%d",&transaction_id);

	
printf("amount");
scanf("%d",&amount);

printf("  %s  \n",atm_id);
//stored procedure check atm exist ...
int check8;//0 or 1
query="SELECT atm_existance(:atm_id)";

EXEC SQL PREPARE s9 from :query;
EXEC SQL EXECUTE s9 into :check8 using :atm_id;

printf("%d please atm exist",check8);


EXEC SQL set transaction read write;

//stored procedure if card_no exists  return aadhar_no account_no

long int check2;//aadhar_no
query="SELECT cardno_to_aadhar_no(:card_no)";

EXEC SQL PREPARE s3 from :query;
EXEC SQL EXECUTE s3 into :check2 using :card_no;

printf("%ld",check2);

long int check3;//account_no
query="SELECT cardno_to_account_no(:card_no)";

EXEC SQL PREPARE s4 from :query;
EXEC SQL EXECUTE s4 into :check3 using :card_no;

printf("%ld jcz",check3);



//expiry card
int check4;//0 or 1
query="SELECT card_exp_check(:card_no,:date_1)";//sp5=expiry date
 
EXEC SQL PREPARE s5 from :query;
EXEC SQL EXECUTE s5 into :check4 using :card_no,:date_1;

//trnsaction_limit
int check5;//0 or 1
query="SELECT trans_limit_per_card(:card_no,:date_1,:amount)";

EXEC SQL PREPARE s6 from :query;
EXEC SQL EXECUTE s6 into :check5 using :card_no,:date_1,:amount;

printf("%d trans limit ",check5);


if(check8==0)
{
 printf("atm does not exist");
 return;
}

if(check4==0)
{
 printf("card expiry");
 return;
}

if(check5==0)
{
 printf("transaction limit exceeded");
 return;
}





EXEC SQL set transaction  read write;
EXEC SQL insert into transaction_h values(:transaction_id,:check3,:transaction_type,:check2);

if (sqlca.sqlcode < 0) {
			 printf("\n\n transact (%ld) DID NOT GET ADDED\n",card_no);
			 EXEC SQL rollback work;
			 EXEC SQL commit;
			 return;
		       }
else
  	{
        EXEC SQL COMMIT;

		

        EXEC SQL set transaction read write;
        int check7;//0 or 1
        query="SELECT update_balance_and_trans_check(:amount,:check3)";
        EXEC SQL PREPARE s8 from :query;
	EXEC SQL EXECUTE s8 into :check7 using :amount,:check3;
	EXEC SQL commit;
	EXEC SQL set transaction read write;
	EXEC SQL insert into transaction_details values(:transaction_id,:check2,:card_no,:date_1,:amount,:check7,:location_l,:time,:atm_id,'SBIN0');}



	EXEC SQL commit;
	EXEC SQL set transaction read write;
	int check6;//0 or 1
	query="SELECT ATM_balance_update(:amount,:atm_id)";
	EXEC SQL PREPARE s7 from :query;
	EXEC SQL EXECUTE s7 into :check6 using :amount,:atm_id;
	printf("%d atm update",check6);

	EXEC SQL commit;
	return;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void insert_other_bank()
{
   printf("\n Enter details:\n");

   EXEC SQL BEGIN DECLARE SECTION;

   long int o_bank_account;
   char o_bankid[50];

   other_bank_details_record obrec;
   int tax_count;

   EXEC SQL END DECLARE SECTION;

   printf("enter other bank id \n");
   scanf("%s",o_bankid);

   printf("enter other bank account no \n");
   scanf("%ld",&o_bank_account);

   printf("enter tax \n");
   scanf("%d",&tax_count);

   EXEC SQL select * into :obrec from other_bank_details where o_bank_id= :o_bankid;

   if (sqlca.sqlcode == 0) {
			    printf("other bank details already exists \n");
			    return;
			   }

   EXEC SQL set transaction read write;
   EXEC SQL insert into other_Bank_details values(:o_bankid,:o_bank_account,:tax_count,'SBIN0');

   if (sqlca.sqlcode < 0) {
			    printf("\n\nBANK (%s) DID NOT GET ADDED\n",o_bankid);
			    EXEC SQL rollback work;
		            EXEC SQL commit;
			    return;
		           }

   EXEC SQL commit;
   return;


}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void insert_o_trans(){


    
   EXEC SQL BEGIN DECLARE SECTION;
   int transaction_id; 

   EXEC SQL END DECLARE SECTION;

   printf("date format 2018-09-08 (yyyy-mm-dd");
   scanf("%s",date_1);

   printf("location (city)");
   scanf("%s",location_l);

   printf("time hh:mm:ss");
   scanf("%s",time);

   printf("your bank id");
   scanf("%s",o_bank_id);

   printf("atm id");
   scanf("%s",atm_id);

   printf("a card no");
   scanf("%ld",&card_no);

   printf("the transaction id");
   scanf("%d",&transaction_id);

   printf("aadhar no");
   scanf("%ld",&aadhar_no);

   printf("amount");
   scanf("%d",&amount);

EXEC SQL set transaction read write;


//stored procedure check atm exist ...
int check9;//0 or 1
query="SELECT ATM_existance(:atm_id)";
EXEC SQL PREPARE s10 from :query;
EXEC SQL EXECUTE s10 into :check9 using :atm_id;


/*
//tax or not
int check11;//0 or 1(0 means yes tax)
query="SELECT tax_check(:card_no,)";
EXEC SQL PREPARE s12 from :query;
EXEC SQL EXECUTE s12 into :check11 using :amount;

*/

//other bank_id
int check12;//0 or 1
query="SELECT other_bankid_check(:o_bank_id)";
EXEC SQL PREPARE s13 from :query;
EXEC SQL EXECUTE s13 into :check12 using :o_bank_id;


if(check9==0)
{
  printf("atm does not exist");
  return;
}

if(check12==0)
{
  printf("add details of other bank first");
  insert_other_bank();
}

EXEC SQL insert into transaction_details_other_bank values(:transaction_id,:aadhar_no,:card_no,:date_1,:amount,:location_l,:time,:atm_id,'SBIN0',:o_bank_id);
if (sqlca.sqlcode < 0) {
			printf("\n\ntransac (%ld) DID NOT GET ADDED\n",card_no);
			EXEC SQL rollback work;
			EXEC SQL commit;
			return;
		        }
		
EXEC SQL commit;
EXEC SQL set  TRANSACTION READ WRITE;
int check10;//0 or 1
query="SELECT atm_balance_update(:amount,:atm_id)";
EXEC SQL PREPARE s11 from :query;
EXEC SQL EXECUTE s11 into :check10 using :amount,:atm_id;
EXEC SQL COMMIT;
return;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void remove_atm_card()
{


	EXEC SQL BEGIN DECLARE SECTION;
	long  int  atm_card_id;
	long  int  a;
	atmcard_record acrec;
	transaction_details_record tdrec;
	EXEC SQL END DECLARE SECTION;
	printf("enter atm card number \n");
	scanf("%ld",&atm_card_id);

	EXEC SQL select * into :acrec from atm_card where card_no = :atm_card_id;

if (sqlca.sqlcode > 0) {
                        printf("atm_card (%ld) does not exist\n",atm_card_id);
                        return;
                       }

EXEC SQL set transaction read write;

EXEC SQL DECLARE delete_C CURSOR FOR
SELECT * FROM transaction_details WHERE card_no = :atm_card_id;
 
EXEC SQL OPEN delete_C;
 
do 
{
     EXEC SQL FETCH delete_C INTO :tdrec;

     if (sqlca.sqlcode != 0) break;
     printf( "\nDeleting all the records of the transaction_details...\n");

     EXEC SQL DELETE FROM transaction_details WHERE CURRENT OF delete_C;
} while ( 1 );
 
EXEC SQL CLOSE delete_C;

EXEC SQL commit;

EXEC SQL set transaction read write;

EXEC SQL delete from atm_card where card_no=:atm_card_id;

//EXEC SQL commit;
	
if (sqlca.sqlcode == 0)
{
			
  printf("Deleted Successfully the atm_card\n");
  EXEC SQL commit;
}
else
{
  printf("Some error \n");
  EXEC SQL commit;
}
	
EXEC SQL commit;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




void remove_atm()
{


	EXEC SQL BEGIN DECLARE SECTION;
	long  int  atm_card_id;
	long  int  a;
	atm_record arec;
	transaction_details_record tdrec;
	EXEC SQL END DECLARE SECTION;
	printf("enter atm id \n");
	scanf("%s",atm_id);

EXEC SQL set transaction read write;

EXEC SQL select * into :arec from atm where atm_id = :atm_id;
if (sqlca.sqlcode > 0)
{
  printf("atm(%s) does not exist\n",atm_id);
  EXEC SQL rollback;
  return;
}

EXEC SQL set transaction read write;

EXEC SQL DECLARE delete_D CURSOR FOR
SELECT * FROM transaction_details WHERE atm_id = :atm_id;
	
EXEC SQL OPEN delete_D;
 
do
{
  EXEC SQL FETCH delete_D INTO :tdrec;
  if (sqlca.sqlcode != 0) break;
  printf( "\nDeleting all the records of the transaction_details...\n");
  EXEC SQL DELETE FROM transaction_details WHERE CURRENT OF delete_D;
} while ( 1 );
 
EXEC SQL CLOSE delete_C;

EXEC SQL commit;
	
EXEC SQL set transaction read write;

EXEC SQL delete from atm where atm_id=:atm_id;

	//EXEC SQL commit;
	
if (sqlca.sqlcode == 0)
{
			
  printf("Deleted Successfully the atm\n");
  EXEC SQL commit;
}
else
{
		
 printf("Some error \n");
 EXEC SQL commit;
}
	
EXEC SQL commit;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_customer()
{
  EXEC SQL BEGIN DECLARE SECTION;
  customer_record crec;
  EXEC SQL END DECLARE SECTION;

  EXEC SQL DECLARE showOH CURSOR FOR SELECT * FROM customer;
  EXEC SQL OPEN showOH;
  EXEC SQL FETCH showOH INTO :crec;
printf("dob \t aadhar \t fname \t lname \t mname \t district \t pincode \t state \t bankid \n");
  while(sqlca.sqlcode==0)
  {
   printf("%s \t %ld \t %s \t %s \t %s \t %s \t %d \t %s\t  %s\n",crec.dob,crec.aadhar_no,crec.fname,crec.lname,crec.mname,crec.c_district,crec.c_pincode,crec.c_state,crec.bank_id);

   printf("\n\n\n");
   EXEC SQL FETCH showOH INTO :crec;
  }

  EXEC SQL CLOSE showOH;
  EXEC SQL COMMIT;
  return;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void print_p_customer(long int aadhar)
{
 EXEC SQL BEGIN DECLARE SECTION;
 long int aadhar_no_1 = aadhar;

 EXEC SQL END DECLARE SECTION;
 EXEC SQL BEGIN DECLARE SECTION;

 customer_record crec;
 EXEC SQL END DECLARE SECTION;
//printf("%ld %ld",aadhar,aadhar_no_1);
printf("dob \t aadhar \t fname \t lname \t mname \t district \t pincode \t state \t bankid \n");

 EXEC SQL SELECT * INTO :crec FROM customer WHERE aadhar_no = :aadhar_no_1;
 printf("%s \t  %ld \t  %s \t  %s\t  %s\t  %s\t  %d\t  %s\t %s\t \n ",crec.dob,crec.aadhar_no,crec.fname,crec.lname,crec.mname,crec.c_district,crec.c_pincode,crec.c_state,crec.bank_id);

 EXEC SQL COMMIT;
 return;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void print_transaction()
{
  EXEC SQL BEGIN DECLARE SECTION;
  transaction_details_record tdrec;
  EXEC SQL END DECLARE SECTION;

  EXEC SQL DECLARE showtd CURSOR FOR SELECT * FROM transaction_details;
  EXEC SQL OPEN showtd;
  EXEC SQL FETCH showtd INTO :tdrec;
printf("tr_id \t aadhar_no \t card_no \t cardno \t date \t amount \t balance \t location \t time \t atmid \t bankid \n");
  while(sqlca.sqlcode==0)
  {
   printf("%ld \t %ld \t  %ld \t %s\t  %d \t %d \t %s\t %s \t %s \t%s \n",tdrec.transaction_id,tdrec.aadhar_no,tdrec.card_no,tdrec.date_1,tdrec.amount,tdrec.balance_left,tdrec.location_l,tdrec.time_t,tdrec.atm_id,tdrec.bank_id);


   printf("\n\n\n");
   EXEC SQL FETCH showtd INTO :tdrec;
  }

  EXEC SQL CLOSE showtd;
  EXEC SQL COMMIT;
  return;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void print_p_transaction(long int aadhar_no)
{
  EXEC SQL BEGIN DECLARE SECTION;
  long int aadhar_no_1 = aadhar_no ;
  transaction_details_record tdrec;
  EXEC SQL END DECLARE SECTION;


  EXEC SQL SELECT * INTO :tdrec FROM transaction_details WHERE aadhar_no = :aadhar_no_1;
  //EXEC SQL DECLARE showtd CURSOR FOR SELECT * FROM transaction_details;


printf("tr_id \t aadhar_no \t card_no \t cardno \t date \t amount \t balance \t location \t time \t atmid \t bankid \n");
  
  EXEC SQL OPEN showtd;
  EXEC SQL FETCH showtd INTO :tdrec;
  while(sqlca.sqlcode==0)
  {
  	printf("%ld \t %ld \t %ld \t %s \t %d \t %d\t  %s \t %s\t  %s \t%s\n",tdrec.transaction_id,tdrec.aadhar_no,tdrec.card_no,tdrec.date_1,tdrec.amount,tdrec.balance_left,tdrec.location_l,tdrec.time_t,tdrec.atm_id,tdrec.bank_id);


   	printf("\n\n\n");
	EXEC SQL FETCH showOH INTO :tdrec;
   }
  
  EXEC SQL CLOSE showtd;
  EXEC SQL COMMIT;
  return;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




void print_other_bank()
{
 EXEC SQL BEGIN DECLARE SECTION;
 other_bank_details_record obdrec;
 EXEC SQL END DECLARE SECTION;
printf("o_bankid \t account \t tax \t bankid \n");
 EXEC SQL DECLARE showobd CURSOR FOR SELECT * FROM other_bank_details;
 EXEC SQL OPEN showobd;
 EXEC SQL FETCH showobd INTO :obdrec;
 while(sqlca.sqlcode==0)
 {
  printf("%s \t%ld \t %d \t%s \n", obdrec.o_bank_id,obdrec.o_bank_account,obdrec.tax,obdrec.bank_id);
  printf("\n\n\n");
  EXEC SQL FETCH showobd INTO :obdrec;
 }
 EXEC SQL CLOSE showobd;
 EXEC SQL COMMIT;
 return;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_other_bank_details(char atm_id_2[])
{
  EXEC SQL BEGIN DECLARE SECTION;
  char atm_id_1[10];
  int i=0;
  other_bank_transaction_details_record drec;
  EXEC SQL END DECLARE SECTION;

  for(i=0;i<10;i++)
  atm_id_1[i]=atm_id_2[i];
  //printf("%s",atm_id_1);
  //EXEC SQL set transaction read only;
  int check16;//0 or 1(0 means yes tax)
  query="SELECT ATM_existance(:atm_id_1)";

  EXEC SQL PREPARE s17 from :query;
  EXEC SQL EXECUTE s17 into :check16 using :atm_id_1;

  if(check16==0)
  {
   printf("atm id does not exist");
   return;
  }
printf("tr_id \t aadhar_no \t card_no \t cardno \t date \t amount  \t location \t time \t atmid \t bankid \t o_bankid\n");
  EXEC SQL set transaction read only;
  EXEC SQL DECLARE showw CURSOR FOR SELECT * from transaction_details_other_bank where atm_id=:atm_id_1;
  EXEC SQL OPEN showw;
  EXEC SQL FETCH showw INTO :drec;

  while(sqlca.sqlcode==0)
  {
    printf("%ld\t  %ld \t %ld \t %s\t %d\t %s\t %s \t %s\t %s \t%s\n ",drec.transaction_id,drec.aadhar_no,drec.card_no,drec.date_1,drec.amount,drec.location_l,drec.time_t,drec.atm_id,drec.bank_id,drec.o_bank_id);
		


    printf("\n\n\n");
    EXEC SQL FETCH showw INTO :drec;
  }

  EXEC SQL CLOSE showw;
  EXEC SQL COMMIT;
  return;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query_3_details()
{
  EXEC SQL BEGIN DECLARE SECTION;
  query_3_record tdrec;
  char fname[10];
  EXEC SQL END DECLARE SECTION;

  printf("enter the first name");
  scanf("%s ",fname);

  int check14;//0 or 1(0 means yes tax)

  query="SELECT fname_check(:fname)";

  EXEC SQL PREPARE s15 from :query;
  EXEC SQL EXECUTE s15 into :check14 using :fname;

  if(check14==0)
  {
   printf("fname does not exist");
  }

printf("fname \t atm_id \t branch_id\t district\t branch name \n");
  EXEC SQL declare c cursor for select customer.fname,atm.atm_id,branch.branch_id,customer.c_district ,branch.branch_name from customer,atm,branch where customer.fname=:fname and customer.c_district=atm.a_district and branch.branch_id=atm.branch_id;

  EXEC SQL OPEN C ;

  EXEC SQL FETCH C INTO :tdrec ;

  while(sqlca.sqlcode==0)
  {
    printf("%s \t %s \t %d \t %s\t %s\n",tdrec.fname,tdrec.atm_id,tdrec.branch_id,tdrec.district,tdrec.branch_name);

    printf("\n\n\n");
    EXEC SQL FETCH c INTO :tdrec;
  }

  EXEC SQL CLOSE c ;
  EXEC SQL COMMIT;
  return;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query_transact()
{
	EXEC SQL BEGIN DECLARE SECTION;
	transaction_details_1_record tdrec;
	char atm_id[10];
	char m[3];
	EXEC SQL END DECLARE SECTION;

 	printf("enter the atm_id and month");
	scanf("%s %s",atm_id,m);

	int check13;//0 or 1(0 means yes tax)
	query="SELECT ATM_existance(:atm_id)";

	EXEC SQL PREPARE s14 from :query;
	EXEC SQL EXECUTE s14 into :check13 using :atm_id;

	if(check13==0)
 	{
	printf("atm id does not exist");
	return;
	}
	printf("tr_id \t aadharno \t cardno \t date \t amount \t balance \t location \t time \t atmid \t bankid\n");
	EXEC SQL declare Q cursor for select  		transaction_details.transaction_id,transaction_details.aadhar_no,transaction_details.card_no,transaction_details.date_1,transaction_details.amount,transaction_details.balance_left,transaction_details.location_l,transaction_details.time_t,transaction_details.atm_id,transaction_details.bank_id,account.branch_id from transaction_details,account  where transaction_details.aadhar_no=account.aadhar_no and atm_id=:atm_id and extract(month from date_1)=:m;

	EXEC SQL OPEN Q ;

	EXEC SQL FETCH Q INTO :tdrec ;

	printf("%ld \t %ld \t %ld \t %s\t %d \t %d \t %s\t %s \t %s \t %s\n",tdrec.transaction_id,tdrec.aadhar_no,tdrec.card_no,tdrec.date_1,tdrec.amount,tdrec.balance_left,tdrec.location_l,tdrec.time_t,tdrec.atm_id,tdrec.bank_id);

	while(sqlca.sqlcode==0)
	{
	printf("%ld \t %ld \t %ld \t %s\t %d \t %d \t %s\t %s \t %s \t %s",tdrec.transaction_id,tdrec.aadhar_no,tdrec.card_no,tdrec.date_1,tdrec.amount,tdrec.balance_left,tdrec.location_l,tdrec.time_t,tdrec.atm_id,tdrec.bank_id);

	printf("\n\n\n");
	EXEC SQL FETCH Q INTO :tdrec;
	}
	EXEC SQL CLOSE Q ;
	EXEC SQL COMMIT;
	return;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void query_details()
{
	EXEC SQL BEGIN DECLARE SECTION;
	customer_record crec;
	account_record accrec;
	char card_type_1[10], account_type_1[10];
	EXEC SQL END DECLARE SECTION;

 	printf("enter the card_type and account_type");
	scanf("%s %s",card_type_1,account_type_1);

printf("dob \t aadhar_no \t fname \t mname \t lname \t district \t pincode \t state \t bankid \n");
	EXEC SQL declare T cursor for select customer.dob,customer.aadhar_no,customer.fname,customer.mname, customer.lname,customer.c_district,customer.c_pin_code,customer.c_state,customer.bank_id 
from customer,atm_card,account where atm_card.card_type=:card_type_1 and customer.aadhar_no=atm_card.aadhar_no and account.account_type=:account_type_1 and customer.aadhar_no=account.aadhar_no;

	EXEC SQL OPEN T ;

	EXEC SQL FETCH T INTO :crec ;

	printf(" \n %s \t %ld \t  %s\t  %s\t  %s \t %s \t %d \t %s \t %s\n",crec.dob,crec.aadhar_no,crec.fname,crec.mname,crec.lname,crec.c_district,crec.c_pincode,crec.c_state,crec.bank_id);

	while(sqlca.sqlcode==0)
	{
		printf("%s\t  %ld \t %s \t  %s \t %s \t %s \t %d \t %s \t %s\n",crec.dob,crec.aadhar_no,crec.fname,crec.mname,crec.lname,crec.c_district,crec.c_pincode,crec.c_state,crec.bank_id);

		printf("\n\n\n");
		EXEC SQL FETCH T INTO :crec;
	}
	EXEC SQL CLOSE T ;
	EXEC SQL COMMIT;
	return;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void query_4()
{
	EXEC SQL BEGIN DECLARE SECTION;

	char atm_id[10];
	query_4_record qrec;
	EXEC SQL END DECLARE SECTION;
//order by month

printf("avg_amount \t bankid \t month ");
	EXEC SQL declare W cursor for select avg(amount),other_bank_id,extract(month from date_1) from transaction_details_other_bank group by transaction_details_other_bank.other_bank_id,extract(month from date_1);

	EXEC SQL OPEN W ;

	EXEC SQL FETCH W INTO :qrec ;

//printf(" \n %f %s ",qrec.avg_amount,qrec.o_bank_id);
	while(sqlca.sqlcode==0)
	{
		printf(" \n %f \t %s \t %s",qrec.avg_amount,qrec.o_bank_id,qrec.mon);

		printf("\n\n\n");
		EXEC SQL FETCH W INTO :qrec;
	}
	EXEC SQL CLOSE W ;
	EXEC SQL COMMIT;
	return;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void query5()
{
	EXEC SQL BEGIN DECLARE SECTION;
	query_5_record qrec2;
	EXEC SQL END DECLARE SECTION;
printf("aadharno \t branchid\t date \t amount \t transaction type \n");
	EXEC SQL declare Z cursor for select transaction_H.aadhar_no,account.branch_id,max(transaction_details.date_1),transaction_details.amount,transaction_H.transaction_type from transaction_H join account on transaction_h.aadhar_no=account.aadhar_no join transaction_details on transaction_h.aadhar_no=transaction_details.aadhar_no group by transaction_H.aadhar_no,account.branch_id,transaction_details.amount,transaction_H.transaction_type;

	EXEC SQL OPEN Z ;

	EXEC SQL FETCH Z INTO :qrec2 ;

	//printf(" \n %f %s ",qrec.avg_amount,qrec.o_bank_id);
	while(sqlca.sqlcode==0)
	{
		printf(" \n %ld\t  %d \t %s \t %d \t%s\n",qrec2.aadhar_no,qrec2.branch_id,qrec2.date_1,qrec2.amount,qrec2.transaction_type);
		printf("\n\n\n");
		EXEC SQL FETCH Z INTO :qrec2;
	}
	EXEC SQL CLOSE Z ;
	EXEC SQL COMMIT;
	return;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////\
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void query6()
{
	EXEC SQL BEGIN DECLARE SECTION;
	query_6_record qrec3;
	EXEC SQL END DECLARE SECTION;


printf("fname \t aadhar_no \t amount \t month \n");

	EXEC SQL declare Y cursor for select customer.fname,customer.aadhar_no,sum(transaction_details.amount),extract(month from transaction_details.date_1) from customer join transaction_details on  transaction_details.aadhar_no=customer.aadhar_no group by  customer.fname,customer.aadhar_no,extract(month from transaction_details.date_1) ;
	EXEC SQL OPEN Y ;

	EXEC SQL FETCH Y INTO :qrec3 ;

	//printf(" \n %f %s ",qrec.avg_amount,qrec.o_bank_id);
	while(sqlca.sqlcode==0)
	{
		printf(" \n %s\t %ld \t %ld \t%s",qrec3.fname,qrec3.aadhar_no,qrec3.amount,qrec3.mon);
		printf("\n\n\n");
		EXEC SQL FETCH Y INTO :qrec3;
	}
	EXEC SQL CLOSE Y ;
	EXEC SQL COMMIT;
	return;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void query7()
{
	EXEC SQL BEGIN DECLARE SECTION;
	query_7_record qrec4;
	EXEC SQL END DECLARE SECTION;


printf("branch_id \t atmid \t count \t month");
	EXEC SQL declare X cursor for select atm.branch_id,transaction_details.atm_id,count(transaction_details.transaction_id),extract(month from transaction_details.date_1) from atm join transaction_details on atm.atm_id=transaction_details.atm_id group by atm.branch_id,transaction_details.atm_id,extract(month from transaction_details.date_1) ;
	EXEC SQL OPEN X ;

	EXEC SQL FETCH X INTO :qrec4 ;

//printf(" \n %f %s ",qrec.avg_amount,qrec.o_bank_id);
	while(sqlca.sqlcode==0)
	{
		printf(" \n %d \t %s \t %d \t %s \n",qrec4.branch_id,qrec4.atm_id,qrec4.count,qrec4.mon);
		printf("\n\n\n");
		EXEC SQL FETCH X INTO :qrec4;
	}
	EXEC SQL CLOSE X ;
	EXEC SQL COMMIT;
	return;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query8()
{
	EXEC SQL BEGIN DECLARE SECTION;
	query_8_record qrec5;
	EXEC SQL END DECLARE SECTION;

printf("fname \t aadharno \t amount \t date \n");

	EXEC SQL declare A cursor for select customer.fname,customer.aadhar_no,max(transaction_details.amount),transaction_details.date_1
	from customer join transaction_details on customer.aadhar_no=transaction_details.aadhar_no group by customer.fname,customer.aadhar_no, transaction_details.date_1;
	EXEC SQL OPEN A;
	EXEC SQL FETCH A INTO :qrec5 ;

//printf(" \n %f %s ",qrec.avg_amount,qrec.o_bank_id);
	while(sqlca.sqlcode==0)
	{
		printf(" \n %s \t %ld \t %d \t %s \n",qrec5.fname,qrec5.aadhar_no,qrec5.amount,qrec5.date_1);
		printf("\n\n\n");
		EXEC SQL FETCH A INTO :qrec5;
	}
	EXEC SQL CLOSE A ;
	EXEC SQL COMMIT;
	return;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void main_print()
{
	int print_choice;
	int ch;
	X:
	printf("\n 1.customer details\n");
	printf("2. transaction details of a particular person \n");
	printf("3. other_bank _connected\n");
	printf("4. other_bank _transactions\n");
	printf("5. Return Back\n");
	printf("Enter your choice: ");
	scanf("%d",&print_choice);
	switch(print_choice)
	{
		case 1:

			printf("if u want to see details of particular person type 1 and for all type 0");
			scanf("%d",&ch);
			if(ch==1)
			{
				printf("\nEnter the customer aadhar_no for whom you want to see the records: ");
				scanf("%ld",&try1);
				print_p_customer(try1);
			}
			if(ch==0)
			{
				printf("printing all customers");
				print_customer();
			}
			break;

		case 2:
			printf("if u want to see transaction details of particular person type 1 and for all type 0");
			scanf("%d",&ch);
			if(ch==1)
			{
				printf("\nEnter the customer aadhar_no for whom you want to see the transaction records: ");
				scanf("%ld",&try2);
				print_p_transaction(try2);
			}
			if(ch==0)
			print_transaction();
			break;

		case 3:
			printf("other banks connected are");
			print_other_bank();
			break;

		case 4:
			printf("other banks transaction done on a particular atm");
			printf("\nEnter the atm_id ");
			scanf("%s",try3);
			print_other_bank_details(try3);
			break;

		case 5:
			break;

		default:
			printf("Invalid Input\nEnter again\n");
			goto X;
}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void main_remove()
{
	int remove_choice;
	printf("Enter the type of entry you want to delete\n");
	printf("1. atm_card\n");
	printf("2. atm\n");
	printf("3. Back to main menu\n");
	printf("4. Exit\n");
	printf("Enter your choice:  ");
	scanf("%d",&remove_choice);
	switch(remove_choice)
	{
		case 1:
			remove_atm_card();
			break;
		case 2:
			remove_atm();
			break;
		case 3:
			return;
		case 4:
			EXEC SQL COMMIT;
			EXEC SQL DISCONNECT;
			exit(0);
}
}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void main_insert()
{
	int insert_choice;
	int ch;
	printf("Enter the type of a new Entry\n");
	printf("1. an atm card\n");
	printf("2. add a new atm\n");
	printf("3. a new transaction\n");
	printf("4. a new bank entry\n");
	printf("5. Back to main menu\n");
	printf("6. Exit\n");
	printf("Enter your choice:  ");
	scanf("%d",&insert_choice);
	switch(insert_choice)
	{
		case 1:
			insert_atm_card();
			break;
		case 2:
			insert_atm();
			break;
		case 3:
			printf("sbi (1) or not (0)");
			scanf("%d",&ch);
			if (ch==1)
			insert_trans();

			else
			insert_o_trans();

			break;
		case 4:
			insert_other_bank();
			break;
		case 5:
			return;
		case 6:
		EXEC SQL COMMIT;
		EXEC SQL DISCONNECT;
		exit(0);
}
}





///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void main_menu()
{
printf("\n\n");
printf("*********************************************************\n");
printf("BANK ACCOUNTING ATM\n");
printf("Please select an option:\n");
printf("<1> Insert a new Entry\n");
printf("<2> Remove an existing Entry\n");
printf("<3> printing enteries Entry\n");
printf("<4> Giving person details having particular card type  and bank account type \n");
printf("<5> transaction details  for a given atm id and date\n");
printf("<6> get the nearest atm details and branch_supervisors for a given customer's name(place retrieve) \n");
printf("<7> average transaction from other bank cards per month for a user given atm id\n");
printf("<8> record of latest transaction of all customers branch wise\n");
printf("<9> total money withdrawn by customers monthly\n");
printf("<10> branch wise no. of transactions done by atms monthly\n");
printf("<11> maximum transaction amount of customer on particular dates\n");
printf("<12> Exit\n");

printf("*********************************************************\n");
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int main()
{
	EXEC SQL BEGIN DECLARE SECTION;
	const char *target = "201551072@10.100.1.62:5432";
	const char *user = "201551072";
	const char *password = "201551072";
	EXEC SQL END DECLARE SECTION;

	EXEC SQL CONNECT TO :target USER :user IDENTIFIED BY "201551072";
	EXEC SQL set search_path to bank_accounting_to_atm;

	int main_choice;
	X:
	main_menu();
	printf("\nEnter your choice (eg. 1 for 1st choice):  ");
	scanf("%d",&main_choice);
	switch(main_choice)
	{
		case 1:
			main_insert();
			break;
		case 2:
			main_remove();
		case 3:
			main_print();
			break;
		case 4:
			query_details();

			break;
		case 5:
			query_transact();
			break;
		case 6:
			query_3_details();
			break;
		case 7:
			query_4();
			break;
		case 8:
			query5();
			break;
		case 9:
			query6();
			break;
		case 10:
			query7();
			break;
		case 11:
                        query8();
			break;
		case 12:
	EXEC SQL COMMIT;
	EXEC SQL DISCONNECT;
	exit(0);
	default:
	printf("Re-enter your choice");
	goto X;
}
//EXEC SQL DISCONNECT project;
	return 0;
}




