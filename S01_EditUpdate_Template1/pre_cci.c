# 1 "c:\\project\\pvr\\scripts\\s01_editupdate_template1\\\\combined_S01_EditUpdate_Template1.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\project\\pvr\\scripts\\s01_editupdate_template1\\\\combined_S01_EditUpdate_Template1.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\project\\pvr\\scripts\\s01_editupdate_template1\\\\combined_S01_EditUpdate_Template1.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\project\\pvr\\scripts\\s01_editupdate_template1\\\\combined_S01_EditUpdate_Template1.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{

	
	return 0;
}
# 4 "c:\\project\\pvr\\scripts\\s01_editupdate_template1\\\\combined_S01_EditUpdate_Template1.c" 2

# 1 "Action.c" 1
Action()
{

	
	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_cleanup_auto_headers();
	
	web_cleanup_cookies();
	
	web_set_max_html_param_len("99999999");
	
	lr_start_transaction("S01_T01_OpenApplication");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 
 
 
 
 
 
 
 
 
 


web_reg_save_param_ex(
		"ParamName=Csrf_TokenId",
		"LB=_csrf\" value=\"",
		"RB=\"/>",
		"SEARCH_FILTERS",
		"Scope=ALL",
		"IgnoreRedirections=No",
		"LAST");

	web_url("auth", 
		"URL={URL}/reports/login/auth", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"URL={URL}/reports/assets/login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t2.inf", 
		"LAST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_concurrent_start(0);

 
 
 
 
 
 
 

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

 
 
 
 
 
 
 

	web_concurrent_end(0);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"URL={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t6.inf", 
		"LAST");

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"30eda4abc258dd5ed14a4f12a1888af3d101a33d");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	

	web_add_auto_header("User-Agent", 
		"Chrome WIN 81.0.4044.138 (8c6c7ba89cc9453625af54f11fd83179e23450fa-refs/branch-heads/4044@{#999}) channel(stable)");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Content-Encoding", 
		"gzip");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("X-Client-Data", 
		"CIi2yQEIo7bJAQjEtskBCKmdygEI0K/KAQi8sMoBCO21ygEIjrrKARi9usoBGJu+ygE=");

	

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL={URL}/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t9.inf", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"URL={URL}/reports/assets/cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t10.inf", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"URL={URL}/reports/assets/jquery/jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t11.inf", 
		"LAST");

	web_url("customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"URL={URL}/reports/assets/jquery/customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t12.inf", 
		"LAST");

	web_add_header("Origin", 
		"{URL}");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/reports/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t13.inf", 
		"LAST");

	web_add_cookie("cc_cookie_decline=null; DOMAIN=pvr-perf.rxlogix.com");

	web_add_cookie("cc_cookie_accept=cc_cookie_accept; DOMAIN=pvr-perf.rxlogix.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("auth_2", 
		"URL={URL}/reports/login/auth", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		"LAST");

	

	lr_end_transaction("S01_T01_OpenApplication",2);

	lr_think_time(3);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	

	lr_start_transaction("S01_T02_Login");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Content-Type", 
		"application/x-www-form-urlencoded");

	web_add_header("Origin", 
		"{URL}");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 
	web_reg_save_param_regexp(
		"ParamName=Csrf_Token_Id",
		"RegExp=\\ content=\"(.*?)\"/>\\\n\\ \\ \\ \\ \\ \\ \\ \\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/index*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=UserId",
		"RegExp=\\ userId=\"(.*?)\">\\\n\\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/index*",
		"LAST");

	web_submit_data("authenticate",
		"Action={URL}/reports/login/authenticate",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/reports/login/auth",
		"Snapshot=t18.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=username", "Value={UserName}", "ENDITEM",
		"Name=password", "Value={Password}", "ENDITEM",
		"Name=_csrf", "Value={Csrf_TokenId}", "ENDITEM",
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(0);

	web_url("theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"URL={URL}/reports/assets/theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t19.inf", 
		"LAST");

 
 

	web_url("rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"URL={URL}/reports/assets/app/rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t20.inf", 
		"LAST");
 
 
 

	web_url("addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"URL={URL}/reports/assets/app/dashboard/addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t21.inf", 
		"LAST");
 
 
 

	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL={URL}/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t22.inf", 
		"LAST");
 
 
 

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		"LAST");
 
 
 

	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL={URL}/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		"LAST");

 
 

	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL={URL}/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		"LAST");

 
 

	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL={URL}/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t26.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 

	web_url("en.json", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		"LAST");
 
 
 
 
 
 
 
 
 

	web_url("dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"URL={URL}/reports/assets/app/dashboard/dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		"LAST");

	web_url("actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"URL={URL}/reports/assets/app/actionItem/actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t29.inf", 
		"LAST");

	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t30.inf", 
		"LAST");

	web_url("calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"URL={URL}/reports/assets/app/calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		"LAST");

	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t32.inf", 
		"LAST");

	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL={URL}/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t33.inf", 
		"LAST");

	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t34.inf", 
		"LAST");

	web_url("fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"URL={URL}/reports/assets/fuelux/fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t35.inf", 
		"LAST");

	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL={URL}/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t36.inf", 
		"LAST");

	web_url("highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t37.inf", 
		"LAST");

	web_url("highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t38.inf", 
		"LAST");

	web_url("gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		"LAST");

	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL={URL}/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t40.inf", 
		"LAST");

	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t41.inf", 
		"LAST");

	
	web_url("pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"URL={URL}/reports/assets/app/pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t43.inf", 
		"LAST");

	web_url("deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"URL={URL}/reports/assets/app/deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t44.inf", 
		"LAST");

	web_url("jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"URL={URL}/reports/assets/app/jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		"LAST");

	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL={URL}/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t46.inf", 
		"LAST");

	web_url("store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"URL={URL}/reports/assets/store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t47.inf", 
		"LAST");

	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL={URL}/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t48.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"URL={URL}/reports/assets/fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t50.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 

	web_url("6542",
		"URL={URL}/reports/notificationRest/forUser/{UserId}?_=1589965692480",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/dashboard/index",
		"Snapshot=t51.inf",
		"Mode=HTTP",
		"LAST");
 
 
 

	web_url("latestAdhocReport", 
		"URL={URL}/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		"LAST");

 

 
 
 
 
 
 
 
 
 
 
 

	web_url("index", 
		"URL={URL}/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		"LAST");
 
 
 

	web_url("dataTables_en.json", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 

	web_url("latestPeriodicReport", 
		"URL={URL}/reports/periodicReportConfigurationRest/latestPeriodicReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("dataTables_en.json_2", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t57.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 

	web_add_header("Accept", 
		"*/*");

 
 
 
 
 
 
 
 

 

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t59.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t60.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 



	web_concurrent_end(0);

	lr_end_transaction("S01_T02_Login",2);

	lr_think_time(3);

	lr_start_transaction("S01_T03_NavigateTemplates_TemplateLibrary");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_2", 
		"URL={URL}/reports/template/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(0);

	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL={URL}/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t63.inf", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL={URL}/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t64.inf", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"URL={URL}/reports/assets/shorten/jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t65.inf", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"URL={URL}/reports/assets/app/utils/pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t66.inf", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"URL={URL}/reports/assets/app/utils/pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t67.inf", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("template-4449dd937496140ccf5c770e8e904088.js", 
		"URL={URL}/reports/assets/app/template/template-4449dd937496140ccf5c770e8e904088.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t69.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_2", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t68.inf", 
		"LAST");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_url("dataTables_en.json_3", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t70.inf", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("lookup", 
		"URL={URL}/reports/lookup?name=category", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t71.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("tag", 
		"URL={URL}/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t72.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_start(0);

	web_url("datepicker.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t73.inf", 
		"LAST");

	web_url("filter_panel.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t74.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("6542_2",
		"URL={URL}/reports/notificationRest/forUser/{UserId}?_=1589965752675",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/index",
		"Snapshot=t75.inf",
		"Mode=HTTP",
		"LAST");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t76.inf", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_2", 
		"URL={URL}/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t77.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 

 



	web_reg_save_param_ex(
		"ParamName=CLL_Id1",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"General Case Information",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CLL_Id2",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Patient Demographic Information",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CCL_Id3",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Study Information",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CLL_Id4",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Event Information",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CLL_Id5",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Cause of Death Information",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CCL_Id6",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Product Information",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");
		
		

 



	web_reg_save_param_ex(
		"ParamName=CCL_Id7",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Product-Event Information",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CLL_Id9",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Pregnancy Information",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CCL_Id10",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Patient Medical Condition",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CLL_Id_11",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Patient Lab Test Results",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CLL_12",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Reporter Information",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CLL_ID13",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Narrative Information",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CLL_Id_14",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Company Causality Comment",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=CLL_Id_15",
		"LB/IC={\"id\":",
		"RB/IC=,\"category\":\" \",\"name\":\"Case Narrative Listing",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_url("templates", 
		"URL={URL}/reports/api/templates?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=category&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=name&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=description&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=qualityChecked&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=checkUsage&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=owner.fullName&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastUpdated&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=lastExecuted&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=tags&24248columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=false&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&"
		"search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&direction=desc&sort=isFavorite&_=1589965752676", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t78.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 
 
 
 
 
 
 
 
 

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");



	lr_end_transaction("S01_T03_NavigateTemplates_TemplateLibrary",2);

	lr_think_time(3);

	lr_start_transaction("S01_T04_SearchTemplate");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_reg_find("Search=Body",
		"Text={Temaplate_Name}",
		"LAST");

 



	web_reg_save_param_ex(
		"ParamName=Edit_Id1",
		"LB/IC={\"aaData\":[{\"id\":",
		"RB/IC=,\"category\":",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_url("templates_2", 
		"URL={URL}/reports/api/templates?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=category&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=name&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=description&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=qualityChecked&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=checkUsage&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=owner.fullName&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastUpdated&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=lastExecuted&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=tags&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=false&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&"
		"search%5Bvalue%5D={Temaplate_Name}&search%5Bregex%5D=false&searchString={Temaplate_Name}&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&direction=desc&sort=isFavorite&_=1589965752677", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_T04_SearchTemplate",2);

	lr_think_time(3);

	lr_start_transaction("S01_T05_EditTemplate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 

 

	web_reg_save_param_ex(
		"ParamName=Version_1",
		"LB=<input type=\"hidden\" name=\"version\" id=\"version\" value=\"",
		"RB=\" />",
		"SEARCH_FILTERS",
		"Scope=ALL",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=CLL_Id8",
		"LB=name=\"selectCLL_7\" value=\"",
		"RB=\"",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_url("30908",
		"URL={URL}/reports/template/edit/{Edit_Id1}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={URL}/reports/template/index",
		"Snapshot=t82.inf",
		"Mode=HTTP",
		"LAST");

 
 
 
 
 
 
 

 
 
 
 
 
 
 
 

	web_concurrent_start(0);

	web_url("category-b0ba00263a1e3916a858e6a7c54c56a9.js",
		"URL={URL}/reports/assets/app/category-b0ba00263a1e3916a858e6a7c54c56a9.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t83.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("solid-gauge-dea4ed491a81514f163d664d2d9b4135.js",
		"URL={URL}/reports/assets/highcharts/modules/solid-gauge-dea4ed491a81514f163d664d2d9b4135.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t84.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("underscore-observe-abc51dad2eaec79d8704301ae539bd96.js",
		"URL={URL}/reports/assets/underscore/underscore-observe-abc51dad2eaec79d8704301ae539bd96.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t85.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js",
		"URL={URL}/reports/assets/app/tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t86.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("ec.min-159a716b40399743119ee2fb91783197.js",
		"URL={URL}/reports/assets/easychart/ec.min-159a716b40399743119ee2fb91783197.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t87.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("template-8e43d0b89c5a9e5b3eb583f7e626cde1.css",
		"URL={URL}/reports/assets/template-8e43d0b89c5a9e5b3eb583f7e626cde1.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t89.inf",
		"LAST");
 
 
 
 
 
 
 
 
 

	web_url("expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css",
		"URL={URL}/reports/assets/expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t90.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("select2-treeview-a19d774562c3ce40252e5c9866e9029b.css",
		"URL={URL}/reports/assets/select2-treeview-a19d774562c3ce40252e5c9866e9029b.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t91.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("editColumns-eb41040416b5d15abf12fa1f75a4dad4.js",
		"URL={URL}/reports/assets/app/template/editColumns-eb41040416b5d15abf12fa1f75a4dad4.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t92.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("editTemplate-61b6a7e8dad095487edf261b8c9e5f40.js",
		"URL={URL}/reports/assets/app/template/editTemplate-61b6a7e8dad095487edf261b8c9e5f40.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t93.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("editMeasures-bdb9a7a04f8123cadc0579982d0417ab.js",
		"URL={URL}/reports/assets/app/template/editMeasures-bdb9a7a04f8123cadc0579982d0417ab.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t94.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("editColumnMeasure-9e39378fc671a73c6529cb92dd722996.js",
		"URL={URL}/reports/assets/app/template/editColumnMeasure-9e39378fc671a73c6529cb92dd722996.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t95.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("editTemplateSet-9bd78227726dd0d43f2d662701e10609.js",
		"URL={URL}/reports/assets/app/template/editTemplateSet-9bd78227726dd0d43f2d662701e10609.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t96.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js",
		"URL={URL}/reports/assets/app/expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t97.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("editChartTemplate-8ffb6a79fc1c7af7bf486a336924c4e4.js",
		"URL={URL}/reports/assets/app/template/editChartTemplate-8ffb6a79fc1c7af7bf486a336924c4e4.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t98.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js",
		"URL={URL}/reports/assets/app/disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t99.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("select2-treeview-a36da271e6071724e73d966828e9bc72.js",
		"URL={URL}/reports/assets/select2/select2-treeview-a36da271e6071724e73d966828e9bc72.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t100.inf",
		"LAST");

 

 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("en.json_3",
		"URL={URL}/reports/assets/i18n/en.json",
		"Resource=1",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t88.inf",
		"LAST");

 
 
 
 
 
 
 
 
 
 
 

	web_url("getTemplateNameDescription",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id1}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t101.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_2",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id2}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t102.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_3",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id3}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t103.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_4",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id4}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t104.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_5",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id5}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t105.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_6",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id6}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t106.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_7",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id8}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t107.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_8",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id9}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t108.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_9",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id10}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t109.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_10",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id7}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t110.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_11",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id_11}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t111.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_12",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_ID13}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t112.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_13",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_12}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t113.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_14",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id_14}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t114.inf",
		"Mode=HTTP",
		"LAST");

 
 

	web_url("6542_3",
		"URL={URL}/reports/notificationRest/forUser/{UserId}?_=1589965794013",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t115.inf",
		"Mode=HTTP",
		"LAST");

 
 

	web_url("sharedWithValues",
		"URL={URL}/reports/userRest/sharedWithValues?ids=User_{UserId}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t116.inf",
		"Mode=HTTP",
		"LAST");

 
 
 
 
 
 
 
 
 
 
	
	web_concurrent_end(0);

	lr_end_transaction("S01_T05_EditTemplate",2);

	lr_think_time(3);

 
 
 
 
 
 
 
 
 
 

	lr_start_transaction("S01_T06_Add_CaseLineListingTemplate_Tag_And_Update");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getTemplateSetCLL",
		"URL={URL}/reports/reportTemplateRest/getTemplateSetCLL?term=&page=1&max=30&oldSelectedValue=&_=1589965794014",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t124.inf",
		"Mode=HTTP",
		"LAST");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Template {Temaplate_Name} updated",
		"LAST");

	web_submit_data("update",
		"Action={URL}/reports/template/update?_csrf={Csrf_Token_Id}",
		"Method=POST",
		"EncType=multipart/form-data",
		"RecContentType=text/html",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t125.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=id", "Value={Edit_Id1}", "ENDITEM",
		"Name=owner", "Value={UserId}", "ENDITEM",
		"Name=name", "Value={Temaplate_Name}", "ENDITEM",
		"Name=description", "Value={Template_Description}", "ENDITEM",
		"Name=category.id", "Value=", "ENDITEM",
		"Name=tags", "Value=Data entry", "ENDITEM",
		"Name=sharedWith", "Value=User_{UserId}", "ENDITEM",
		"Name=_qualityChecked", "Value=", "ENDITEM",
		"Name=fixedTemplateName", "Value=", "ENDITEM",
		"Name=fixedTemplateFile", "Value=", "File=yes", "ENDITEM",
		"Name=_useFixedTemplate", "Value=", "ENDITEM",
		"Name=selectCLL_0", "Value={CLL_Id1}", "ENDITEM",
		"Name=selectCLL_1", "Value={CLL_Id2}", "ENDITEM",
		"Name=selectCLL_2", "Value={CCL_Id3}", "ENDITEM",
		"Name=selectCLL_3", "Value={CLL_Id4}", "ENDITEM",
		"Name=selectCLL_4", "Value={CLL_Id5}", "ENDITEM",
		"Name=selectCLL_5", "Value={CCL_Id6}", "ENDITEM",
		"Name=selectCLL_6", "Value={CCL_Id7}", "ENDITEM",
		"Name=selectCLL_7", "Value={CLL_Id8}", "ENDITEM",
		"Name=selectCLL_8", "Value={CLL_Id9}", "ENDITEM",
		"Name=selectCLL_9", "Value={CCL_Id10}", "ENDITEM",
		"Name=selectCLL_10", "Value={CLL_Id_11}", "ENDITEM",
		"Name=selectCLL_11", "Value={CLL_12}", "ENDITEM",
		"Name=selectCLL_12", "Value={CLL_ID13}", "ENDITEM",
		"Name=selectCLL_13", "Value={CLL_Id_14}", "ENDITEM",
		"Name=selectCLL_", "Value={CLL_Id_15}", "ENDITEM",
		"Name=selectCLL_", "Value=", "ENDITEM",
		"Name=templateSetCLLIds", "Value={CLL_Id1},{CLL_Id2},{CCL_Id3},{CLL_Id4},{CLL_Id5},{CCL_Id6},{CCL_Id7},{CLL_Id8},{CLL_Id9},{CCL_Id10},{CLL_Id_11},{CLL_12},{CLL_ID13},{CLL_Id_14},{CLL_Id_15}", "ENDITEM",
		"Name=_excludeEmptySections", "Value=", "ENDITEM",
		"Name=excludeEmptySections", "Value=on", "ENDITEM",
		"Name=templateType", "Value=TEMPLATE_SET", "ENDITEM",
		"Name=edit", "Value=true", "ENDITEM",
		"Name=templateId", "Value={Edit_Id1}", "ENDITEM",
		"Name=version", "Value={Version_1}", "ENDITEM",
		"Name=Update", "Value=Update", "ENDITEM",
		"Name=_csrf", "Value={Csrf_Token_Id}", "ENDITEM",
		"LAST");

	web_url("ec.render.min-f6d1f2204b8afac135ad5f0e158f00e8.js",
		"URL={URL}/reports/assets/easychart/ec.render.min-f6d1f2204b8afac135ad5f0e158f00e8.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t126.inf",
		"LAST");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_4",
		"URL={URL}/reports/assets/i18n/en.json",
		"Resource=1",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t127.inf",
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getTemplateNameDescription_15",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id1}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t128.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_16",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id3}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t129.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_17",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id2}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t130.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_18",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id4}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t131.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_19",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id5}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t132.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_20",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id6}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t133.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_21",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id7}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t134.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_22",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id8}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t135.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_23",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id9}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t136.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_24",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_12}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t137.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_25",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id10}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t138.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_26",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id_11}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t139.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_27",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id_15}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t140.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_28",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id_14}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t141.inf",
		"Mode=HTTP",
		"LAST");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("6542_4",
		"URL={URL}/reports/notificationRest/forUser/{UserId}?_=1589965842864",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t142.inf",
		"Mode=HTTP",
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");
 
 
 
 
 
 
 
 
 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getTemplateNameDescription_29",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_ID13}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t144.inf",
		"Mode=HTTP",
		"LAST");

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 
 
 
 
 
 
 
 
 

	lr_end_transaction("S01_T06_Add_CaseLineListingTemplate_Tag_And_Update",2);

	
	lr_think_time(3);

	lr_start_transaction("S01_T07_EditTemplate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_save_param_ex(
		"ParamName=Version_2",
		"LB=<input type=\"hidden\" name=\"version\" id=\"version\" value=\"",
		"RB=\" />",
		"SEARCH_FILTERS",
		"Scope=ALL",
		"LAST");
	
	web_url("30908_2",
		"URL={URL}/reports/template/edit/{Edit_Id1}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t146.inf",
		"Mode=HTTP",
		"LAST");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_5",
		"URL={URL}/reports/assets/i18n/en.json",
		"Resource=1",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t147.inf",
		"LAST");

	
	
	
	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_concurrent_start(0);
	
	web_url("getTemplateNameDescription_30",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id1}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t148.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_31",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id3}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t149.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_32",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id2}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t150.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_33",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id5}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t151.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_34",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id4}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t152.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_35",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id9}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t153.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_36",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id10}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t154.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_37",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id7}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t155.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_38",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id8}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t156.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_39",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id6}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t157.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_40",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_12}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t158.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_41",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id_11}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t159.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_42",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_ID13}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t160.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_43",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id_14}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t161.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_44",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id_15}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t162.inf",
		"Mode=HTTP",
		"LAST");

 

	web_url("info_5",
		"URL={URL}/reports/stomp/info",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t163.inf",
		"Mode=HTTP",
		"LAST");

 
 

	web_url("sharedWithValues_2",
		"URL={URL}/reports/userRest/sharedWithValues?ids=User_{UserId}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t164.inf",
		"Mode=HTTP",
		"LAST");

 
 

	web_url("6542_5",
		"URL={URL}/reports/notificationRest/forUser/{UserId}?_=1589965896039",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t165.inf",
		"Mode=HTTP",
		"LAST");

	web_concurrent_end(0);
	
	lr_end_transaction("S01_T07_EditTemplate",2);

	lr_think_time(3);

	lr_start_transaction("S01_T08_Remove_CaseLineListingTemplate_And_ClickUpdate");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

 
 
 
 
 
 
 
 
 
 

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	web_reg_find("Search=Body",
		"Text=Template {Temaplate_Name} updated",
		"LAST");

	web_submit_data("update_2",
		"Action={URL}/reports/template/update?_csrf={Csrf_Token_Id}",
		"Method=POST",
		"EncType=multipart/form-data",
		"RecContentType=text/html",
		"Referer={URL}/reports/template/edit/{Edit_Id1}",
		"Snapshot=t167.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=id", "Value={Edit_Id1}", "ENDITEM",
		"Name=owner", "Value={UserId}", "ENDITEM",
		"Name=name", "Value={Temaplate_Name}", "ENDITEM",
		"Name=description", "Value={Template_Description}", "ENDITEM",
		"Name=category.id", "Value=", "ENDITEM",
		"Name=tags", "Value=Data entry", "ENDITEM",
		"Name=sharedWith", "Value=User_{UserId}", "ENDITEM",
		"Name=_qualityChecked", "Value=", "ENDITEM",
		"Name=fixedTemplateName", "Value=", "ENDITEM",
		"Name=fixedTemplateFile", "Value=", "File=yes", "ENDITEM",
		"Name=_useFixedTemplate", "Value=", "ENDITEM",
		"Name=selectCLL_0", "Value={CLL_Id1}", "ENDITEM",
		"Name=selectCLL_1", "Value={CLL_Id2}", "ENDITEM",
		"Name=selectCLL_2", "Value={CCL_Id3}", "ENDITEM",
		"Name=selectCLL_3", "Value={CLL_Id4}", "ENDITEM",
		"Name=selectCLL_4", "Value={CLL_Id5}", "ENDITEM",
		"Name=selectCLL_5", "Value={CCL_Id6}", "ENDITEM",
		"Name=selectCLL_6", "Value={CCL_Id7}", "ENDITEM",
		"Name=selectCLL_7", "Value={CLL_Id8}", "ENDITEM",
		"Name=selectCLL_8", "Value={CLL_Id9}", "ENDITEM",
		"Name=selectCLL_9", "Value={CCL_Id10}", "ENDITEM",
		"Name=selectCLL_10", "Value={CLL_Id_11}", "ENDITEM",
		"Name=selectCLL_11", "Value={CLL_12}", "ENDITEM",
		"Name=selectCLL_12", "Value={CLL_ID13}", "ENDITEM",
		"Name=selectCLL_13", "Value={CLL_Id_14}", "ENDITEM",
		"Name=selectCLL_", "Value=", "ENDITEM",
		"Name=templateSetCLLIds", "Value={CLL_Id1},{CLL_Id2},{CCL_Id3},{CLL_Id4},{CLL_Id5},{CCL_Id6},{CCL_Id7},{CLL_Id8},{CLL_Id9},{CCL_Id10},{CLL_Id_11},{CLL_12},{CLL_ID13},{CLL_Id_14}", "ENDITEM",
		"Name=_excludeEmptySections", "Value=", "ENDITEM",
		"Name=excludeEmptySections", "Value=on", "ENDITEM",
		"Name=templateType", "Value=TEMPLATE_SET", "ENDITEM",
		"Name=edit", "Value=true", "ENDITEM",
		"Name=templateId", "Value={Edit_Id1}", "ENDITEM",
		"Name=version", "Value={Version_2}", "ENDITEM",
		"Name=Update", "Value=Update", "ENDITEM",
		"Name=_csrf", "Value={Csrf_Token_Id}", "ENDITEM",
		"LAST");

	
	
	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_6",
		"URL={URL}/reports/assets/i18n/en.json",
		"Resource=1",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t168.inf",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_concurrent_start(0);
	

	web_url("getTemplateNameDescription_45",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id3}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t169.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_46",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id2}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t170.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_47",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id1}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t171.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_48",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id4}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t172.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_49",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id6}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t173.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_50",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id8}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t174.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_51",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id7}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t175.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_52",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id5}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t176.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_53",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id9}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t177.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_54",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CCL_Id10}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t178.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_55",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id_11}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t179.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_56",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_12}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t180.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_57",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_ID13}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t181.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getTemplateNameDescription_58",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={CLL_Id_14}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t182.inf",
		"Mode=HTTP",
		"LAST");

 
 

	web_url("6542_6",
		"URL={URL}/reports/notificationRest/forUser/{UserId}?_=1589965932442",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t183.inf",
		"Mode=HTTP",
		"LAST");

 
 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 

	web_concurrent_end(0);
	
	lr_end_transaction("S01_T08_Remove_CaseLineListingTemplate_And_ClickUpdate",2);

	lr_think_time(3);

	lr_start_transaction("S01_T08_ClickRun");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("keep-alive",
		"URL={URL}/reports/keep-alive?_=1589965932443",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t186.inf",
		"Mode=HTTP",
		"LAST");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("create",
		"URL={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={URL}/reports/template/view/{Edit_Id1}",
		"Snapshot=t187.inf",
		"Mode=HTTP",
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(0);

	web_url("templateQueries-b30e257e7bf112701696b0edaac3908d.js",
		"URL={URL}/reports/assets/app/configuration/templateQueries-b30e257e7bf112701696b0edaac3908d.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t188.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("configuration-11b5b002dec2c8f1f643a1db6b80c6db.css",
		"URL={URL}/reports/assets/configuration-11b5b002dec2c8f1f643a1db6b80c6db.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t190.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css",
		"URL={URL}/reports/assets/copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t191.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("scheduler-293bc77ad497c01ec53bcb2f97095e6b.js",
		"URL={URL}/reports/assets/app/scheduler-293bc77ad497c01ec53bcb2f97095e6b.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t192.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js",
		"URL={URL}/reports/assets/app/configuration/configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t193.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js",
		"URL={URL}/reports/assets/app/configuration/deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t194.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("dateRange-114c7d1894185a1583d21cb5f436038a.js",
		"URL={URL}/reports/assets/app/configuration/dateRange-114c7d1894185a1583d21cb5f436038a.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t195.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("blankParameters-cef91892ccdf31d55934699882b389d5.js",
		"URL={URL}/reports/assets/app/configuration/blankParameters-cef91892ccdf31d55934699882b389d5.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t196.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js",
		"URL={URL}/reports/assets/app/configuration/copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t197.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("emailConfiguration-59c065e4239f87a883e747de81101001.js",
		"URL={URL}/reports/assets/app/configuration/emailConfiguration-59c065e4239f87a883e747de81101001.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t198.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html",
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t199.inf",
		"Mode=HTTP",
		"LAST");

	

 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("en.json_7",
		"URL={URL}/reports/assets/i18n/en.json",
		"Resource=1",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t189.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css",
		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t200.inf",
		"LAST");

 
 
 
 
 

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js",
		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t201.inf",
		"LAST");

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js",
		"URL={URL}/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t202.inf",
		"LAST");

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js",
		"URL={URL}/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t203.inf",
		"LAST");

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js",
		"URL={URL}/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t204.inf",
		"LAST");

	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js",
		"URL={URL}/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t205.inf",
		"LAST");

	web_url("emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js",
		"URL={URL}/reports/assets/app/emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t206.inf",
		"LAST");

	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js",
		"URL={URL}/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t207.inf",
		"LAST");

	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js",
		"URL={URL}/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t208.inf",
		"LAST");

	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js",
		"URL={URL}/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t209.inf",
		"LAST");

 
 
 
 
 
 
 
 

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2",
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html",
		"Resource=0",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t210.inf",
		"Mode=HTTP",
		"LAST");
 
 
 

	web_url("getTemplateNameDescription_59",
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id={Edit_Id1}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t211.inf",
		"Mode=HTTP",
		"LAST");

 
 

	web_url("allEmails",
		"URL={URL}/reports/email/allEmails",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t212.inf",
		"Mode=HTTP",
		"LAST");

	web_url("allEmailsForCC",
		"URL={URL}/reports/email/allEmailsForCC?emails=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t213.inf",
		"Mode=HTTP",
		"LAST");

 
 

	web_url("fetchEvaluateCaseDatesForDatasource",
		"URL={URL}/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=true&dataSourceId=6594",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t214.inf",
		"Mode=HTTP",
		"LAST");

	web_url("fetchEvaluateCaseDateSubmissionForDatasource",
		"URL={URL}/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t215.inf",
		"Mode=HTTP",
		"LAST");

	web_url("fetchDateRangeTypesForDatasource",
		"URL={URL}/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t216.inf",
		"Mode=HTTP",
		"LAST");

 
 

	web_url("getNumOperators",
		"URL={URL}/reports/query/getNumOperators",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t217.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getDateOperators",
		"URL={URL}/reports/query/getDateOperators",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t218.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getStringOperators",
		"URL={URL}/reports/query/getStringOperators",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t219.inf",
		"Mode=HTTP",
		"LAST");

	web_url("getValuelessOperators",
		"URL={URL}/reports/query/getValuelessOperators",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t220.inf",
		"Mode=HTTP",
		"LAST");

	web_url("6542_7",
		"URL={URL}/reports/notificationRest/forUser/{UserId}?_=1589965999059",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t221.inf",
		"Mode=HTTP",
		"LAST");

 
 
 
 

 
 
 
 
 
 
 
 

	web_url("polymer.html",
		"URL={URL}/reports/assets/plugin/dictionary/polymer.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t223.inf",
		"Mode=HTTP",
		"LAST");

 
 

	web_url("sharedWithValues_3",
		"URL={URL}/reports/userRest/sharedWithValues?ids=User_{UserId}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t224.inf",
		"Mode=HTTP",
		"LAST");

	web_url("theme.min.js",
		"URL={URL}/reports/assets/tinymce/themes/modern/theme.min.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t225.inf",
		"LAST");

	web_url("polymer-mini.html",
		"URL={URL}/reports/assets/plugin/dictionary/polymer-mini.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t226.inf",
		"Mode=HTTP",
		"LAST");

	web_url("polymer-micro.html",
		"URL={URL}/reports/assets/plugin/dictionary/polymer-micro.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t227.inf",
		"Mode=HTTP",
		"LAST");

	web_concurrent_end(0);
	
	web_concurrent_start(0);

	web_url("plugin.min.js",
		"URL={URL}/reports/assets/tinymce/plugins/imagetools/plugin.min.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t228.inf",
		"LAST");

	web_url("plugin.min.js_2",
		"URL={URL}/reports/assets/tinymce/plugins/table/plugin.min.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t229.inf",
		"LAST");

	web_url("plugin.min.js_3",
		"URL={URL}/reports/assets/tinymce/plugins/image/plugin.min.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t230.inf",
		"LAST");

	web_url("plugin.min.js_4",
		"URL={URL}/reports/assets/tinymce/plugins/link/plugin.min.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t231.inf",
		"LAST");

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js",
		"URL={URL}/reports/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t232.inf",
		"LAST");

	web_url("plugin.min.js_5",
		"URL={URL}/reports/assets/tinymce/plugins/code/plugin.min.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t233.inf",
		"LAST");

	web_url("skin.min.css",
		"URL={URL}/reports/assets/tinymce/skins/lightgray/skin.min.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t234.inf",
		"LAST");

	web_url("content.min.css",
		"URL={URL}/reports/assets/tinymce/skins/lightgray/content.min.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t235.inf",
		"LAST");

	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css",
		"URL={URL}/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t236.inf",
		"LAST");

	web_concurrent_end(0);

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 

 
 
 
 
 
 
 

	lr_end_transaction("S01_T08_ClickRun",2);

	lr_think_time(3);

	lr_start_transaction("S01_T09_ClickProductSelectionLookUp");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Csrf_Token_Id}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

 
	web_reg_save_param_ex(
		"ParamName=productId",
		"LB=[{\"level\":\"3\",\"name\":\"PARACETAMOL\",\"id\":\"",
		"RB=\"",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_submit_data("searchViews",
		"Action={URL}/reports/productDictionary/searchViews",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t238.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=contains", "Value={ProductLookUpSearch}", "ENDITEM",
		"Name=dictionaryLevel", "Value=3", "ENDITEM",
		"Name=ref_level", "Value=", "ENDITEM",
		"Name=exact_search", "Value=false", "ENDITEM",
		"Name=imp", "Value=false", "ENDITEM",
		"Name=dataSource", "Value=pva", "ENDITEM",
		"Name=filters", "Value={}", "ENDITEM",
		"LAST");

 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 

	web_custom_request("getSelectedItem",
		"URL={URL}/reports/productDictionary/getSelectedItem?productId={productId}&dataSource=pva&dictionaryLevel=3&currentLang=en",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t239.inf",
		"Mode=HTTP",
		"EncType=",
		"LAST");

	web_submit_data("getPreLevelProductParents",
		"Action={URL}/reports/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t240.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=dataSource", "Value=pva", "ENDITEM",
		"Name=dictionaryLevel", "Value=3", "ENDITEM",
		"Name=currentLang", "Value=en", "ENDITEM",
		"Name=productIds", "Value={productId}", "ENDITEM",
		"LAST");

	web_submit_data("getPreLevelProductParents_2",
		"Action={URL}/reports/productDictionary/getPreLevelProductParents",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t241.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=dataSource", "Value=pva", "ENDITEM",
		"Name=dictionaryLevel", "Value=2", "ENDITEM",
		"Name=currentLang", "Value=en", "ENDITEM",
		"Name=productIds", "Value=102542", "ENDITEM",
		"LAST");

	lr_end_transaction("S01_T09_ClickProductSelectionLookUp",2);

	lr_think_time(3);

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-CSRF-TOKEN", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive_2",
		"URL={URL}/reports/keep-alive?_=1589965999060",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t242.inf",
		"Mode=HTTP",
		"LAST");

	lr_start_transaction("S01_T11_AddProduct");

	lr_end_transaction("S01_T11_AddProduct",2);

	lr_think_time(3);

	lr_start_transaction("S01_T12_Click_Close");

	lr_end_transaction("S01_T12_Click_Close",2);

	lr_think_time(3);

	lr_start_transaction("S01_T13_EnterReportName_Click_Save&Run");

	web_url("keep-alive_3",
		"URL={URL}/reports/keep-alive?_=1589965999061",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t243.inf",
		"Mode=HTTP",
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Your report has been scheduled and will be delivered",
		"LAST");

	web_submit_data("run",
		"Action={URL}/reports/configuration/run",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/reports/configuration/create?selectedTemplate={Edit_Id1}",
		"Snapshot=t244.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=owner", "Value={UserId}", "ENDITEM",
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[{\"name\":\"{ProductLookUpSearch}\",\"id\":\"{productId}\"}],\"4\":[]}", "ENDITEM",
		"Name=_suspectProduct", "Value=", "ENDITEM",
		"Name=studySelection", "Value=", "ENDITEM",
		"Name=eventSelection", "Value=", "ENDITEM",
		"Name=_limitPrimaryPath", "Value=", "ENDITEM",
		"Name=JSONExpressionValues", "Value=", "ENDITEM",
		"Name=dateRangeType.id", "Value=1", "ENDITEM",
		"Name=sourceProfile.id", "Value=6594", "ENDITEM",
		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", "ENDITEM",
		"Name=evaluateDateAsSubmissionDate", "Value=LATEST_VERSION", "ENDITEM",
		"Name=evaluateDateAs", "Value=LATEST_VERSION", "ENDITEM",
		"Name=asOfVersionDate", "Value=", "ENDITEM",
		"Name=useCaseSeries", "Value=", "ENDITEM",
		"Name=_excludeFollowUp", "Value=", "ENDITEM",
		"Name=_includeLockedVersion", "Value=", "ENDITEM",
		"Name=includeLockedVersion", "Value=on", "ENDITEM",
		"Name=_includeAllStudyDrugsCases", "Value=", "ENDITEM",
		"Name=_excludeNonValidCases", "Value=", "ENDITEM",
		"Name=excludeNonValidCases", "Value=on", "ENDITEM",
		"Name=_includeMedicallyConfirmedCases", "Value=", "ENDITEM",
		"Name=_includeNonSignificantFollowUp", "Value=", "ENDITEM",
		"Name=_event_exactSearch", "Value=", "ENDITEM",
		"Name=_product_exactSearch", "Value=", "ENDITEM",
		"Name=_study_exactSearch", "Value=", "ENDITEM",
		"Name=studyDrugs", "Value=", "ENDITEM",
		"Name=_study_imp", "Value=", "ENDITEM",
		"Name=studyCompounds", "Value=", "ENDITEM",
		"Name=templateQueries[0].version", "Value=", "ENDITEM",
		"Name=templateQueries[0].id", "Value=", "ENDITEM",
		"Name=templateQueries[0].dynamicFormEntryDeleted", "Value=false", "ENDITEM",
		"Name=templateQueries[0].new", "Value=true", "ENDITEM",
		"Name=templateQueries[0].template", "Value={Edit_Id1}", "ENDITEM",
		"Name=templateQueries[0].header", "Value=", "ENDITEM",
		"Name=templateQueries[0].title", "Value=", "ENDITEM",
		"Name=templateQueries[0].footer", "Value=", "ENDITEM",
		"Name=templateQueries[0]._headerProductSelection", "Value=", "ENDITEM",
		"Name=templateQueries[0]._headerDateRange", "Value=", "ENDITEM",
		"Name=templateQueries[0]._displayMedDraVersionNumber", "Value=", "ENDITEM",
		"Name=templateQueries[0]._privacyProtected", "Value=", "ENDITEM",
		"Name=templateQueries[0]._blindProtected", "Value=", "ENDITEM",
		"Name=templateQueries[0].query", "Value=", "ENDITEM",
		"Name=templateQueries[0].queryLevel", "Value=CASE", "ENDITEM",
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUMULATIVE", "ENDITEM",
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", "ENDITEM",
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", "ENDITEM",
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", "ENDITEM",
		"Name=templateQueries[0].validQueries", "Value=", "ENDITEM",
		"Name=reportName", "Value={ReportName}", "ENDITEM",
		"Name=description", "Value=", "ENDITEM",
		"Name=_qualityChecked", "Value=", "ENDITEM",
		"Name=_isTemplate", "Value=", "ENDITEM",
		"Name=sharedWith", "Value=User_{UserId}", "ENDITEM",
		"Name=TimeZoneSelectlist", "Value=", "ENDITEM",
		"Name=intervalSelectlist", "Value=none", "ENDITEM",
		"Name=monthlySelectlist", "Value=1", "ENDITEM",
		"Name=repeat-monthly", "Value=bysetpos", "ENDITEM",
		"Name=monthlySelectlist", "Value=1", "ENDITEM",
		"Name=monthlySelectlist", "Value=SU", "ENDITEM",
		"Name=repeat-yearly", "Value=bymonthday", "ENDITEM",
		"Name=monthlySelectlist", "Value=1", "ENDITEM",
		"Name=monthlySelectlist", "Value=1", "ENDITEM",
		"Name=yearlyDateSelectlist", "Value=1", "ENDITEM",
		"Name=yearlyDaySelectlist", "Value=SU", "ENDITEM",
		"Name=yearlyDaySelectlist", "Value=1", "ENDITEM",
		"Name=EndSelectlist", "Value=never", "ENDITEM",
		"Name=isEnabled", "Value=true", "ENDITEM",
		"Name=schedulerTime", "Value=2020-05-20 09:13:17", "ENDITEM",
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-05-20T09:13Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n"
		"                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", "ENDITEM",
		"Name=configSelectedTimeZone", "Value=UTC", "ENDITEM",
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", "ENDITEM",
		"Name=deliveryOption._attachmentFormats", "Value=", "ENDITEM",
		"Name=deliveryOption._attachmentFormats", "Value=", "ENDITEM",
		"Name=deliveryOption._attachmentFormats", "Value=", "ENDITEM",
		"Name=deliveryOption._attachmentFormats", "Value=", "ENDITEM",
		"Name=deliveryOption.additionalAttachments", "Value=", "ENDITEM",
		"Name=ccValue", "Value=", "ENDITEM",
		"Name=subjectValue", "Value=", "ENDITEM",
		"Name=emailConfiguration.subject", "Value=", "ENDITEM",
		"Name=bodyValue", "Value=", "ENDITEM",
		"Name=emailConfiguration.body", "Value=", "ENDITEM",
		"Name=emailConfiguration._noEmailOnNoData", "Value=", "ENDITEM",
		"Name=noEmailOnNoDataValue", "Value=", "ENDITEM",
		"Name=emailConfiguration.pageOrientation", "Value=PORTRAIT", "ENDITEM",
		"Name=pageOrientationValue", "Value=PORTRAIT", "ENDITEM",
		"Name=emailConfiguration.paperSize", "Value=LETTER", "ENDITEM",
		"Name=paperSizeValue", "Value=LETTER", "ENDITEM",
		"Name=emailConfiguration.sensitivityLabel", "Value=SENSITIVE", "ENDITEM",
		"Name=sensitivityLabelValue", "Value=SENSITIVE", "ENDITEM",
		"Name=emailConfiguration._showPageNumbering", "Value=", "ENDITEM",
		"Name=emailConfiguration.showPageNumbering", "Value=on", "ENDITEM",
		"Name=showPageNumberingValue", "Value=true", "ENDITEM",
		"Name=emailConfiguration._showCompanyLogo", "Value=", "ENDITEM",
		"Name=emailConfiguration.showCompanyLogo", "Value=on", "ENDITEM",
		"Name=showCompanyLogoValue", "Value=true", "ENDITEM",
		"Name=emailConfiguration._excludeCriteriaSheet", "Value=", "ENDITEM",
		"Name=excludeCriteriaSheetValue", "Value=false", "ENDITEM",
		"Name=emailConfiguration._excludeAppendix", "Value=", "ENDITEM",
		"Name=excludeAppendixValue", "Value=false", "ENDITEM",
		"Name=emailConfiguration._excludeComments", "Value=", "ENDITEM",
		"Name=excludeCommentsValue", "Value=false", "ENDITEM",
		"Name=emailConfiguration._excludeLegend", "Value=", "ENDITEM",
		"Name=excludeLegendValue", "Value=false", "ENDITEM",
		"Name=emailTemplateName", "Value=", "ENDITEM",
		"Name=emailTemplateDescription", "Value=", "ENDITEM",
		"Name=delimiter", "Value=none", "ENDITEM",
		"Name=templateBlanks", "Value=false", "ENDITEM",
		"Name=queryBlanks", "Value=false", "ENDITEM",
		"Name=schedulerFrom", "Value=createPage", "ENDITEM",
		"Name=editable", "Value=true", "ENDITEM",
		"Name=blankValuesJSON", "Value=", "ENDITEM",
		"Name=_csrf", "Value={Csrf_Token_Id}", "ENDITEM",
		"LAST");

	web_concurrent_start(0);

	web_url("executionStatus-abc243051811af7ce55db349117755f2.js", 
		"URL={URL}/reports/assets/app/configuration/executionStatus-abc243051811af7ce55db349117755f2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t245.inf", 
		"LAST");

	web_url("executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"URL={URL}/reports/assets/executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t247.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_8", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t246.inf", 
		"LAST");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_concurrent_start(0);

	web_url("dataTables_en.json_4", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t248.inf", 
		"LAST");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");

	web_url("datepicker.hbs_2", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t249.inf", 
		"LAST");

 
 
 
 
 

	web_url("filter_panel.hbs_2", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t250.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("6542_8",
		"URL={URL}/reports/notificationRest/forUser/{UserId}?_=1589966153077",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/executionStatus/list",
		"Snapshot=t251.inf",
		"Mode=HTTP",
		"LAST");

	web_url("executionStatus", 
		"URL={URL}/reports/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=reportName&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=periodicReportType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=version&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=executionStatus&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=false&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=runDate&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionTime&columns%5B6%5D%5Bname%5D=&"
		"columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=frequency&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=sharedWith&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D="
		"false&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=deliveryMedia&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=false&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=runDate&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=5&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&searchString=&direction=desc&sort=runDate&status=GENERATING&_=1589966153078", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t252.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	lr_end_transaction("S01_T13_EnterReportName_Click_Save&Run",2);

	lr_think_time(3);

	lr_start_transaction("S01_T14_NavigateTemplates_TemplateLibrary");

 
 
 
 
 
 
 
 
 
 

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_3", 
		"URL={URL}/reports/template/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t256.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
 
 
 
 
 
 
 
 
 
 
 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_concurrent_start(0);

	web_url("en.json_9", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t258.inf", 
		"LAST");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_url("dataTables_en.json_5", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t259.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("lookup_2", 
		"URL={URL}/reports/lookup?name=category", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t260.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("tag_2", 
		"URL={URL}/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t261.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");

	web_concurrent_start(0);

	web_url("datepicker.hbs_3", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t262.inf", 
		"LAST");

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");

	web_url("filter_panel.hbs_3", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t263.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("6542_9",
		"URL={URL}/reports/notificationRest/forUser/{UserId}?_=1589966177791",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/template/index",
		"Snapshot=t264.inf",
		"Mode=HTTP",
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

 
 
 
 
 
 
 
 

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("templates_3", 
		"URL={URL}/reports/api/templates?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=category&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=name&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=description&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=qualityChecked&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=checkUsage&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=owner.fullName&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastUpdated&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=lastExecuted&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=tags&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=false&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&"
		"search%5Bvalue%5D={Temaplate_Name}&search%5Bregex%5D=false&searchString={Temaplate_Name}&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&direction=desc&sort=isFavorite&_=1589966177792", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t266.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_T14_NavigateTemplates_TemplateLibrary",2);

	lr_think_time(3);

	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

 
 
 
 
 
 
 

	lr_start_transaction("S01_T15_RemoveFilter");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("templates_4", 
		"URL={URL}/reports/api/templates?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=category&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=name&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=description&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=qualityChecked&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=checkUsage&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=owner.fullName&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastUpdated&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=lastExecuted&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=tags&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=false&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&"
		"search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&direction=desc&sort=isFavorite&_=1589966177793", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t268.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_T15_RemoveFilter",2);

	lr_think_time(3);

	lr_start_transaction("S01_T16_Logout");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("logout", 
		"URL={URL}/reports/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("logout_2", 
		"URL={URL}/reports/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/template/index", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		"LAST");

	
	lr_end_transaction("S01_T16_Logout",2);

	lr_think_time(3);

	return 0;
}
# 5 "c:\\project\\pvr\\scripts\\s01_editupdate_template1\\\\combined_S01_EditUpdate_Template1.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{

	
	return 0;
}
# 6 "c:\\project\\pvr\\scripts\\s01_editupdate_template1\\\\combined_S01_EditUpdate_Template1.c" 2

