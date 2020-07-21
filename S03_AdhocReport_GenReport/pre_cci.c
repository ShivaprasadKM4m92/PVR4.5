# 1 "c:\\project\\pvr\\scripts\\updated\\s03_adhocreport_genreport\\\\combined_S03_AdhocReport_GenReport.c"
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







 
 



















# 1 "c:\\project\\pvr\\scripts\\updated\\s03_adhocreport_genreport\\\\combined_S03_AdhocReport_GenReport.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\project\\pvr\\scripts\\updated\\s03_adhocreport_genreport\\\\combined_S03_AdhocReport_GenReport.c" 2

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

void addDynatraceHeaderTest(char* header){
	char* headerValue;
	int headerValueLength;
	int vuserid, scid;
	char *groupid, *timestamp;
	char* vuserstring=(char*) malloc(sizeof(char) * 10);
	char* ltnString=(char*) malloc(sizeof(char) * 10);

	if(lr_get_attrib_string("DynatraceLTN")!=0){
		strcpy(ltnString,lr_get_attrib_string("DynatraceLTN"));
	}
	lr_whoami(&vuserid, &groupid, &scid);
	itoa(vuserid,vuserstring,10);

	headerValueLength = strlen(header) + 4 + strlen(vuserstring) + 4 + strlen(ltnString) + 4;
	headerValue = (char*) malloc(sizeof(char) * headerValueLength);
	strcpy(headerValue, header);
	if(lr_get_attrib_string("DynatraceLTN")!=0){
		strcat(headerValue,"LTN=");
		strcat(headerValue,ltnString);
		strcat(headerValue,";");
	}
	strcat(headerValue,"VU=");
	strcat(headerValue,vuserstring);
	strcat(headerValue,";");

	web_add_header("X-dynaTrace-Test", headerValue);
	free(headerValue);
	free(vuserstring);
}
 
 


# 3 "c:\\project\\pvr\\scripts\\updated\\s03_adhocreport_genreport\\\\combined_S03_AdhocReport_GenReport.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\project\\pvr\\scripts\\updated\\s03_adhocreport_genreport\\\\combined_S03_AdhocReport_GenReport.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_cleanup_auto_headers();
	
	web_cleanup_cookies();
	
	web_set_max_html_param_len("99999999");
	
	lr_start_transaction("S03_T01_OpenApplication");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

 
 

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 
 
 
 
 
 
 
 
 
 

	web_reg_save_param_ex(
		"ParamName=CsrfTokenId",
		"LB=_csrf\" value=\"",
		"RB=\"/>",
		"SEARCH_FILTERS",
		"Scope=ALL",
		"IgnoreRedirections=No",
		"LAST");


	addDynatraceHeaderTest("TSN=S03_T01_OpenApplication;PC=auth;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("auth", 
		"URL={URL}/reports/login/auth", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		"LAST");

	 

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_concurrent_start(0);
	addDynatraceHeaderTest("TSN=S03_T01_OpenApplication;PC=login-56e6216b7dfd4b175b930dda2cfcea23.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"URL={URL}/reports/assets/login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t5.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T01_OpenApplication;PC=application-3d100486bb60d4ee3003d4ee9f8d893e.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"URL={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t6.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T01_OpenApplication;PC=cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"URL={URL}/reports/assets/cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t7.inf", 
		"LAST");

 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T01_OpenApplication;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL={URL}/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t8.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T01_OpenApplication;PC=jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"URL={URL}/reports/assets/jquery/jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t9.inf", 
		"LAST");
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T01_OpenApplication;PC=customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"URL={URL}/reports/assets/jquery/customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t11.inf", 
		"LAST");

 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T01_OpenApplication;PC=OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/reports/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t12.inf", 
		"LAST");

	

	web_concurrent_end(0);

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	
	lr_end_transaction("S03_T01_OpenApplication",2);

	lr_think_time(3);

	lr_start_transaction("S03_T02_Login");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Safari/537.36");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

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

	web_reg_find("Search=Body",
		"Text=Dashboard",
		"LAST");

	 
	web_reg_save_param_ex(
		"ParamName=User_Id",
		"LB=userId=\"",
		"RB=\">",
		"SEARCH_FILTERS",
		"Scope=ALL",
		"LAST");
	
 
	web_reg_save_param_regexp(
		"ParamName=CfrTokenId_2",
		"RegExp=\\ content=\"(.*?)\"/>\\\n\\ \\ \\ \\ \\ \\ \\ \\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/index*",
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=authenticate;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_submit_data("authenticate",
		"Action={URL}/reports/login/authenticate",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer={URL}/reports/login/auth",
		"Snapshot=t19.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=username", "Value={UserName}", "ENDITEM",
		"Name=password", "Value={Password}", "ENDITEM",
		"Name=_csrf", "Value={CsrfTokenId}", "ENDITEM",
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(0);

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"URL={URL}/reports/assets/theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t20.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=rxapplication-eebebbeb632a82e8608209da3ab42ef2.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"URL={URL}/reports/assets/app/rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t21.inf", 
		"LAST");
 
 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=Accept;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"URL={URL}/reports/assets/app/dashboard/addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t22.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=fuelux-b7cf5c5c681fcdbd63156284516c90e9.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL={URL}/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=gridstack.min-82a5fabd01f65ac4b5e87078091be104.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		"LAST");
 
 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=Accept;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL={URL}/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=dashboard-8dee5417b984f9891cddc783e9314ce6.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL={URL}/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t26.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL={URL}/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t27.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"URL={URL}/reports/assets/app/dashboard/dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		"LAST");
 
 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=Accept;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"URL={URL}/reports/assets/app/actionItem/actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t29.inf", 
		"LAST");

	

 
 
 
 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=X-Requested-With;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("en.json", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=fullcalendar-ab21481ecaaf856ac398df2626c214f0.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=calendar-f9ce111f86c4726c1303830d83a16683.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"URL={URL}/reports/assets/app/calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t32.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t33.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=fuelux-58910ec6bd502e7c4aabf85922131616.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"URL={URL}/reports/assets/fuelux/fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t34.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=workFlow-3b78500b81fd61ce5b59cc202a54e63c.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL={URL}/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t35.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t36.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL={URL}/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t37.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=highcharts-more-31bca387194b423710d019dfa069474a.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t38.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL={URL}/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=highcharts-3d-b0c0c823b44f85cb61361491f4353576.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t40.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=pushNotification-3d08817200dceb0a405d9f7aefa3192f.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"URL={URL}/reports/assets/app/pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t41.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t42.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=gridstack.min-157675a5f94f1a18234a494030c5d8f0.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t43.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=store.modern.min-ee86dbde67356086e53dffdd31c6867d.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"URL={URL}/reports/assets/store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t44.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL={URL}/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=jquery.core-2c7cdf128b42d849235dea8cadd879b8.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"URL={URL}/reports/assets/app/jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t46.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=jquery.app-782d8f87ac279a019b37b18a315654b2.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL={URL}/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t47.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=deleteModal-68b8e74283c8070801d2afbaf40831a1.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"URL={URL}/reports/assets/app/deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t48.inf", 
		"LAST");

 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"URL={URL}/reports/assets/fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t49.inf", 
		"LAST");
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=Origin;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t50.inf", 
		"LAST");
 
 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=Origin;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t51.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC={User_Id};SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("{User_Id}", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591018020978", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=index;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index", 
		"URL={URL}/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		"LAST");

 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=info;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("info", 
		"URL={URL}/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=latestAdhocReport;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("latestAdhocReport", 
		"URL={URL}/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=dataTables_en.json;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTables_en.json", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json?_=1591018020979", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		"LAST");
 
 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=Accept;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("latestPeriodicReport", 
		"URL={URL}/reports/periodicReportConfigurationRest/latestPeriodicReport?length=4&start=0&_=1591018020980", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T02_Login;PC=dataTables_en.json_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTables_en.json_2", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json?_=1591018020981", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	
 
 
 
 
 
 
 
 

	web_concurrent_end(0);
	
	lr_end_transaction("S03_T02_Login",2);

	lr_think_time(3);

	lr_start_transaction("S03_T03_NavigateAdhocReport_GeneratedReports");

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

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=index_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index_2", 
		"URL={URL}/reports/report/index", 
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

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL={URL}/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t63.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=jquery.shorten-748253da78c6257aced45caa5931b43b.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"URL={URL}/reports/assets/shorten/jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t64.inf", 
		"LAST");
 
 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("commonGeneratedReportsActions-92cd7ea27c1fa611ab72257ef28bd4a1.js", 
		"URL={URL}/reports/assets/app/commonGeneratedReportsActions-92cd7ea27c1fa611ab72257ef28bd4a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t65.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=report-642940a44e4a2866cc88c5756e005b4b.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("report-642940a44e4a2866cc88c5756e005b4b.js", 
		"URL={URL}/reports/assets/app/report/report-642940a44e4a2866cc88c5756e005b4b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t66.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"URL={URL}/reports/assets/app/configuration/deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t67.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"URL={URL}/reports/assets/app/utils/pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t69.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL={URL}/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t70.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"URL={URL}/reports/assets/copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t71.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"URL={URL}/reports/assets/app/utils/pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t72.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=emailModal-c328f6452c15ee5b9612d5799369da83.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"URL={URL}/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t73.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=tinymce.min-8913ae2d8b5e63961b59cb681291410b.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"URL={URL}/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t74.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"URL={URL}/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t75.inf", 
		"LAST");

 

 
 
 
 
 
 
 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=en.json_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("en.json_2", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t68.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t76.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=X-Requested-With;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTables_en.json_3", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t77.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=tag;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("tag", 
		"URL={URL}/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t78.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=allEmailsForCC;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmailsForCC", 
		"URL={URL}/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t79.inf", 
		"Mode=HTTP", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=allEmails;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmails", 
		"URL={URL}/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=list;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("list", 
		"URL={URL}/reports/workflowState/list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		"LAST");
	
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=datepicker.hbs;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("datepicker.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t82.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=filter_panel.hbs;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("filter_panel.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t83.inf", 
		"LAST");

 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC={User_Id}_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("{User_Id}_2", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591018053187", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t84.inf", 
		"Mode=HTTP", 
		"LAST");

	
 



	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=theme.min.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("theme.min.js", 
		"URL={URL}/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t86.inf", 
		"LAST");

	web_concurrent_end(0);

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=X-Requested-With;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports", 
		"URL={URL}/reports/api/reports?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018053188", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		"LAST");


	web_concurrent_start(0);
			
	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=plugin.min.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js", 
		"URL={URL}/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t90.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=plugin.min.js_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_2", 
		"URL={URL}/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t91.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=plugin.min.js_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_3", 
		"URL={URL}/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t92.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=plugin.min.js_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_4", 
		"URL={URL}/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t93.inf", 
		"LAST");


	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=plugin.min.js_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_5", 
		"URL={URL}/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t95.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=skin.min.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("skin.min.css", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t96.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=content.min.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("content.min.css", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t97.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T03_NavigateAdhocReport_GeneratedReports;PC=editor-687e49e2901f89d1e65cc77026ec0a3e.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"URL={URL}/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t98.inf", 
		"LAST");

	web_concurrent_end(0);

 
 
 
 
 
 
 
 
 
 
 

 
 
	
 
 
 
 
 
 
 
 

	lr_end_transaction("S03_T03_NavigateAdhocReport_GeneratedReports",2);

	lr_think_time(3);
	
	lr_start_transaction("S03_T04_SearchReports");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	
	 
	web_reg_save_param_ex(
		"ParamName=Report_Id",
		"LB=id\":",
		"RB=,\"numOfExecutions",
		"SEARCH_FILTERS",
		"Scope=ALL",
		"LAST");

	
	web_reg_find("Search=Body",
		"Text={SearchReports}",
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T04_SearchReports;PC=reports_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_2", 
		"URL={URL}/reports/api/reports?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D={SearchReports}&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString={SearchReports}&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018053189", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		"LAST");

	

	lr_end_transaction("S03_T04_SearchReports",2);

	lr_think_time(3);

	lr_start_transaction("S03_T05_ViewReports");

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");


	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	 
	
	web_reg_save_param_ex(
		"ParamName=RecordId",
		"LB=name=\"id\" value=\"",
		"RB=\" id=\"id\" />",
		"SEARCH_FILTERS",
		"Scope=ALL",
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC={Report_Id};SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("{Report_Id}", 
		"URL={URL}/reports/report/showFirstSection/{Report_Id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_concurrent_start(0);

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=caseSeries-2b3162da7d0ee39f0d14d35afd619ae8.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("caseSeries-2b3162da7d0ee39f0d14d35afd619ae8.js", 
		"URL={URL}/reports/assets/app/report/caseSeries-2b3162da7d0ee39f0d14d35afd619ae8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t103.inf", 
		"LAST");

 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=Sec-Fetch-Mode;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"URL={URL}/reports/assets/expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t104.inf", 
		"LAST");

 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=Sec-Fetch-Mode;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"URL={URL}/reports/assets/configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t105.inf", 
		"LAST");

 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=Sec-Fetch-Mode;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("solid-gauge-dea4ed491a81514f163d664d2d9b4135.js", 
		"URL={URL}/reports/assets/highcharts/modules/solid-gauge-dea4ed491a81514f163d664d2d9b4135.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t106.inf", 
		"LAST");
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=addSection-9123c19b5cc5be0ec58f58d57e123c1f.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("addSection-9123c19b5cc5be0ec58f58d57e123c1f.js", 
		"URL={URL}/reports/assets/app/addSection-9123c19b5cc5be0ec58f58d57e123c1f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t107.inf", 
		"LAST");

 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=Sec-Fetch-Mode;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"URL={URL}/reports/assets/app/configuration/copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t109.inf", 
		"LAST");

 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=Sec-Fetch-Mode;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"URL={URL}/reports/assets/app/expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t110.inf", 
		"LAST");
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=blankParameters-cef91892ccdf31d55934699882b389d5.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"URL={URL}/reports/assets/app/configuration/blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t111.inf", 
		"LAST");

 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=Sec-Fetch-Mode;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=If-None-Match;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("en.json_3", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t108.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=studyDrugs-9650caca7b2eaad47de57af7bbefe066.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL={URL}/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t113.inf", 
		"LAST");

 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t114.inf", 
		"LAST");

 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("comment-b85750cd7841837e8523d04d9fda7ad1.js", 
		"URL={URL}/reports/assets/app/comment-b85750cd7841837e8523d04d9fda7ad1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t115.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL={URL}/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t116.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t117.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=studyCompounds-d1264ac301b89c2be214faf502830ceb.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL={URL}/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t118.inf", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t119.inf", 
		"LAST");

	

 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=column-view-64c0085c608464f4a6f66e33d985ae27.html_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=X-Requested-With;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("getNumOperators", 
		"URL={URL}/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=getDateOperators;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("getDateOperators", 
		"URL={URL}/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=getStringOperators;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("getStringOperators", 
		"URL={URL}/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=getValuelessOperators;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("getValuelessOperators", 
		"URL={URL}/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_end(0);
	
	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC={User_Id}_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("{User_Id}_3", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591018102066", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"text/html, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{CfrTokenId_2}");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=getReportAsHTMLString;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_submit_data("getReportAsHTMLString", 
		"Action={URL}/reports/report/getReportAsHTMLString", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=filename", "Value=R{RecordId}_en", "ENDITEM", 
		"Name=id", "Value={RecordId}", "ENDITEM", 
		"Name=isInDraftMode", "Value=false", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=info_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("info_3", 
		"URL={URL}/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=polymer.html;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("polymer.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=polymer-mini.html;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("polymer-mini.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=polymer-micro.html;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("polymer-micro.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T05_ViewReports;PC=column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t132.inf", 
		"LAST");

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 
	
 
 
 
 
 
 
 
 

	lr_end_transaction("S03_T05_ViewReports",2);

	lr_think_time(3);

	lr_start_transaction("S03_T06_DownloadPDF");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	addDynatraceHeaderTest("TSN=S03_T06_DownloadPDF;PC={RecordId};SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("{RecordId}", 
		"URL={URL}/reports/report/show/{RecordId}?outputFormat=PDF&isInDraftMode=false&paperReport=false", 
		"Resource=1", 
		"RecContentType=application/pdf", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t134.inf", 
		"LAST");

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	

	lr_end_transaction("S03_T06_DownloadPDF",2);

	lr_think_time(3);

	lr_start_transaction("S03_T07_DownloadExcel");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	addDynatraceHeaderTest("TSN=S03_T07_DownloadExcel;PC={RecordId}_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("{RecordId}_2", 
		"URL={URL}/reports/report/show/{RecordId}?outputFormat=XLSX&isInDraftMode=false", 
		"Resource=1", 
		"RecContentType=application/vnd.openxmlformats-officedocument.spreadsheetml.sheet", 
		"Referer={URL}/reports/report/show/{RecordId}", 
		"Snapshot=t136.inf", 
		"LAST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	lr_end_transaction("S03_T07_DownloadExcel",2);

	lr_think_time(3);

	lr_start_transaction("S03_T08_ClickBack");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	addDynatraceHeaderTest("TSN=S03_T08_ClickBack;PC=index_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index_3", 
		"URL={URL}/reports/report/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S03_T08_ClickBack;PC={User_Id}_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("{User_Id}_4", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591018165480", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T08_ClickBack;PC=reports_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_3", 
		"URL={URL}/reports/api/reports?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D={SearchReports}&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString={SearchReports}&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018165481", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t140.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S03_T08_ClickBack;PC=info_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("info_4", 
		"URL={URL}/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t141.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("If-None-Match", 
		"\"tinymce/skins/lightgray/content.min-8db73e017a6fd48f80352a66b2be8507.css\"");

	addDynatraceHeaderTest("TSN=S03_T08_ClickBack;PC=content.min.css_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("content.min.css_2", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t142.inf", 
		"LAST");

	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 
	
 
 
 
 
 
 
 
 

	lr_end_transaction("S03_T08_ClickBack",2);

	lr_think_time(3);

	lr_start_transaction("S03_T09_Click_New(State)");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S03_T09_Click_New(State);PC=index_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index_4", 
		"URL={URL}/reports/workflowJustificationRest/index?initialState=New&executedReportConfiguration={Report_Id}&_=1591018165482", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 

	lr_end_transaction("S03_T09_Click_New(State)",2);

	lr_think_time(3);

	lr_start_transaction("S03_T10_Click_Confirm");

	web_add_header("X-CSRF-TOKEN",
		"{CfrTokenId_2}");

	web_reg_find("Search=Body",
		"Text=Successfully updated state",
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T10_Click_Confirm;PC=save;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_submit_data("save", 
		"Action={URL}/reports/workflowJustificationRest/save", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=toState.id", "Value=23", "ENDITEM", 
		"Name=1591018160707", "Value=", "ENDITEM", 
		"Name=description", "Value=Test", "ENDITEM", 
		"Name=dataLength", "Value=", "ENDITEM", 
		"Name=fromState.id", "Value=14", "ENDITEM", 
		"Name=executedReportConfiguration.id", "Value={Report_Id}", "ENDITEM", 
		"Name=reportRequest.id", "Value=", "ENDITEM", 
		"Name=workflowRule.id", "Value=6569", "ENDITEM", 
		"Name=password", "Value=", "ENDITEM", 
		"LAST");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S03_T10_Click_Confirm;PC=reports_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_4", 
		"URL={URL}/reports/api/reports?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D={SearchReports}&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString={SearchReports}&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018165484", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		"LAST");


	lr_end_transaction("S03_T10_Click_Confirm",2);

	lr_think_time(3);

	lr_start_transaction("S03_T11_Click_UnderReview");

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S03_T11_Click_UnderReview;PC=index_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index_5", 
		"URL={URL}/reports/workflowJustificationRest/index?initialState=Under+Review&executedReportConfiguration={Report_Id}&_=1591018165485", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S03_T11_Click_UnderReview",2);

	lr_think_time(3);

	lr_start_transaction("S03_T12_Click_Confirm");

 
 
 
 
 
 
 
 

	web_add_header("X-CSRF-TOKEN",
		"{CfrTokenId_2}");

	web_reg_find("Search=Body",
		"Text=Successfully updated state",
		"LAST");

	addDynatraceHeaderTest("TSN=S03_T12_Click_Confirm;PC=save_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_submit_data("save_2", 
		"Action={URL}/reports/workflowJustificationRest/save", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=toState.id", "Value=24", "ENDITEM", 
		"Name=1591018160707", "Value=", "ENDITEM", 
		"Name=description", "Value=Test", "ENDITEM", 
		"Name=dataLength", "Value=", "ENDITEM", 
		"Name=fromState.id", "Value=23", "ENDITEM", 
		"Name=executedReportConfiguration.id", "Value={Report_Id}", "ENDITEM", 
		"Name=reportRequest.id", "Value=", "ENDITEM", 
		"Name=workflowRule.id", "Value=6570", "ENDITEM", 
		"Name=password", "Value=", "ENDITEM", 
		"LAST");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S03_T12_Click_Confirm;PC=reports_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_5", 
		"URL={URL}/reports/api/reports?draw=3&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D={SearchReports}&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString={SearchReports}&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018165487", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S03_T12_Click_Confirm",2);

	

	addDynatraceHeaderTest("PC=sharedWithList;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("sharedWithList", 
		"URL={URL}/reports/userRest/sharedWithList?term=&page=1&max=30&_=1591018165488", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		"LAST");


 
 
 
 
 
 
 
 
 
 
 
 

	
	lr_think_time(3);

	lr_start_transaction("S03_T13_CreationActionItem");
	
	web_add_header("X-CSRF-TOKEN",
		"{CfrTokenId_2}");

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=save_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_submit_data("save_3", 
		"Action={URL}/reports/actionItem/save", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=actionCategory", "Value=ADHOC_REPORT", "ENDITEM", 
		"Name=priority", "Value=MEDIUM", "ENDITEM", 
		"Name=assignedTo", "Value=User_6542", "ENDITEM", 
		"Name=dueDate", "Value=30-Jun-2020", "ENDITEM", 
		"Name=completionDate", "Value=", "ENDITEM", 
		"Name=status", "Value=OPEN", "ENDITEM", 
		"Name=description", "Value=Test", "ENDITEM", 
		"Name=actionItemId", "Value=", "ENDITEM", 
		"Name=appType", "Value=ADHOC_REPORT", "ENDITEM", 
		"Name=dateCreated", "Value=01-Jun-2020 01:32:03 PM", "ENDITEM", 
		"Name=aiVersion", "Value=", "ENDITEM", 
		"Name=executedReportId", "Value={Report_Id}", "ENDITEM", 
		"Name=assignedToName", "Value=", "ENDITEM", 
		"Name=caseNumber", "Value=", "ENDITEM", 
		"Name=errorType", "Value=", "ENDITEM", 
		"Name=dataType", "Value=", "ENDITEM", 
		"Name=caseVersion", "Value=", "ENDITEM", 
		"Name=capaId", "Value=", "ENDITEM", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=Upgrade-Insecure-Requests;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index_6", 
		"URL={URL}/reports/report/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=en.json_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("en.json_4", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t160.inf", 
		"LAST");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=allEmails_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmails_2", 
		"URL={URL}/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_concurrent_start(0);
	
	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=tag_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("tag_2", 
		"URL={URL}/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		"LAST");
 
 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=Accept;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmailsForCC_2", 
		"URL={URL}/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		"LAST");
 
 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=If-None-Match;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTables_en.json_4", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t164.inf", 
		"LAST");
 
 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=Accept;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("list_2", 
		"URL={URL}/reports/workflowState/list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=datepicker.hbs_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("datepicker.hbs_2", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t166.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=filter_panel.hbs_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("filter_panel.hbs_2", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t167.inf", 
		"LAST");

 

 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC={User_Id}_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("{User_Id}_5", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591018357982", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=theme.min.js_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("theme.min.js_2", 
		"URL={URL}/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t169.inf", 
		"LAST");
	
	web_concurrent_end(0);

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=reports_6;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_6", 
		"URL={URL}/reports/api/reports?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D={SearchReports}&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString={SearchReports}&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018357983", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=info_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("info_5", 
		"URL={URL}/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/image/plugin.min-716893a7547aa00912d40eb0b9aa6cac.js\"");

	web_concurrent_start(0);

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=plugin.min.js_6;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_6", 
		"URL={URL}/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t172.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=plugin.min.js_7;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_7", 
		"URL={URL}/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t173.inf", 
		"LAST");
 
 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=If-None-Match;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_8", 
		"URL={URL}/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t174.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=plugin.min.js_9;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_9", 
		"URL={URL}/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t175.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=plugin.min.js_10;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_10", 
		"URL={URL}/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t176.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=skin.min.css_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("skin.min.css_2", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t177.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T13_CreationActionItem;PC=content.min.css_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("content.min.css_3", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t178.inf", 
		"LAST");

	web_concurrent_end(0);

	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 
	
 
 
 
 
 
 
 
 

	lr_end_transaction("S03_T13_CreationActionItem",2);

	lr_think_time(3);

	lr_start_transaction("S03_T14_Archive");

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

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=archive;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("archive", 
		"URL={URL}/reports/report/archive?id={Report_Id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t180.inf", 
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

	web_concurrent_start(0);

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=en.json_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("en.json_5", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t181.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=dataTables_en.json_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTables_en.json_5", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t182.inf", 
		"LAST");

	
 
 
 
 
 
 
 
 
 
 
 
 
	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=X-Requested-With;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmails_3", 
		"URL={URL}/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=tag_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("tag_3", 
		"URL={URL}/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=allEmailsForCC_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmailsForCC_3", 
		"URL={URL}/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=list_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("list_3", 
		"URL={URL}/reports/workflowState/list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		"LAST");
 
 
 
 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=If-None-Match;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("datepicker.hbs_3", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t187.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=filter_panel.hbs_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("filter_panel.hbs_3", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t188.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC={User_Id}_6;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("{User_Id}_6", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591018390465", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("If-None-Match", 
		"\"tinymce/themes/modern/theme.min-98730a64991f004de9a37595e4889bfa.js\"");

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=theme.min.js_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("theme.min.js_3", 
		"URL={URL}/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t190.inf", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=info_6;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("info_6", 
		"URL={URL}/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=reports_7;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_7", 
		"URL={URL}/reports/api/reports?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D={SearchReports}&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString={SearchReports}&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018390466", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/image/plugin.min-716893a7547aa00912d40eb0b9aa6cac.js\"");

	web_concurrent_start(0);

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=plugin.min.js_11;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_11", 
		"URL={URL}/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t193.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=plugin.min.js_12;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_12", 
		"URL={URL}/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t194.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=plugin.min.js_13;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_13", 
		"URL={URL}/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t195.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=plugin.min.js_14;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_14", 
		"URL={URL}/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t196.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=plugin.min.js_15;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_15", 
		"URL={URL}/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t197.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=skin.min.css_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("skin.min.css_3", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t198.inf", 
		"LAST");

 
 

	addDynatraceHeaderTest("TSN=S03_T14_Archive;PC=content.min.css_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("content.min.css_4", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t199.inf", 
		"LAST");

	web_concurrent_end(0);

	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 
	
 
 
 
 
 
 
 
 

	lr_end_transaction("S03_T14_Archive",2);

	lr_think_time(3);

	lr_start_transaction("S03_T15_ClearFilter");

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

	addDynatraceHeaderTest("TSN=S03_T15_ClearFilter;PC=reports_8;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_8", 
		"URL={URL}/reports/api/reports?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018390467", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S03_T15_ClearFilter",2);

	lr_think_time(3);

	lr_start_transaction("S03_T16_Logout");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	addDynatraceHeaderTest("TSN=S03_T16_Logout;PC=logout;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("logout", 
		"URL={URL}/reports/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/report/index", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S03_T16_Logout",2);

	lr_think_time(3);

	return 0;
}
# 5 "c:\\project\\pvr\\scripts\\updated\\s03_adhocreport_genreport\\\\combined_S03_AdhocReport_GenReport.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\project\\pvr\\scripts\\updated\\s03_adhocreport_genreport\\\\combined_S03_AdhocReport_GenReport.c" 2

