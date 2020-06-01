vuser_end()
{

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

	web_custom_request("xhr_streaming_11", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t269.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("xhr_streaming_12", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t270.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	lr_end_transaction("S01_T16_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}