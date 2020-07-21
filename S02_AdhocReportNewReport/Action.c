Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_cleanup_auto_headers();
	
	web_cleanup_cookies();
	
	web_set_max_html_param_len("99999999");
	
	lr_start_transaction("S02_T01_OpenApplication");

//	web_add_auto_header("Accept-Encoding", 
//		"gzip, deflate, br");
//
//	web_add_header("Accept-Language", 
//		"en-US,en;q=0.9");
//
////	web_add_header("Origin", 
////		"https://www.google.com");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_auto_header("User-Agent", 
//		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Safari/537.36");
//
//	
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"document");
//
//	web_add_header("Accept", 
//		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
//
//	web_add_header("Sec-Fetch-User", 
//		"?1");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

/*Correlation comment - Do not change!  Original value='06836c6c-2c7f-4478-9973-1131e79a0291' Name ='csrf_tokenId' Type ='Manual'*/
//	web_reg_save_param_attrib(
//		"ParamName=csrf_tokenId",
//		"TagName=input",
//		"Extract=value",
//		"Name=_csrf",
//		"Type=hidden",
//		SEARCH_FILTERS,
//		"IgnoreRedirections=No",
//		LAST);

	web_reg_save_param_ex(
		"ParamName=csrf_tokenId",
		"LB=_csrf\" value=\"",
		"RB=\"/>",
		SEARCH_FILTERS,
		"Scope=ALL",
		"IgnoreRedirections=No",
		LAST);


	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	addDynatraceHeaderTest("TSN=S02_T01_OpenApplication;PC=auth;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("auth", 
		"URL={URL}/reports/login/auth", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	
//
//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T01_OpenApplication;PC=login-56e6216b7dfd4b175b930dda2cfcea23.css;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"URL={URL}/reports/assets/login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t6.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T01_OpenApplication;PC=application-3d100486bb60d4ee3003d4ee9f8d893e.css;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"URL={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t7.inf", 
		LAST);

//	web_revert_auto_header("Accept");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	
//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");

	addDynatraceHeaderTest("TSN=S02_T01_OpenApplication;PC=Sec-Fetch-Site;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"URL={URL}/reports/assets/cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t9.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");

	addDynatraceHeaderTest("TSN=S02_T01_OpenApplication;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"URL={URL}/reports/assets/jquery/customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t10.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T01_OpenApplication;PC=application-f8ff3189b5e73f6aa63ba16652634041.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL={URL}/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t11.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T01_OpenApplication;PC=jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"URL={URL}/reports/assets/jquery/jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t12.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

//	web_concurrent_start(NULL);
//
	addDynatraceHeaderTest("TSN=S02_T01_OpenApplication;PC=OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/reports/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t13.inf", 
		LAST);

		
	web_concurrent_end(NULL);

//	web_revert_auto_header("Accept");
//
//	web_add_auto_header("User-Agent", 
//		"Chrome WIN 83.0.4103.61 (94f915a8d7c408b09cc7352161ad592299f384d2-refs/branch-heads/4103@{#561}) channel(stable)");
//
//	web_add_header("Cache-Control", 
//		"no-cache");
//
//	web_add_header("Content-Encoding", 
//		"gzip");
//
//	web_add_header("Pragma", 
//		"no-cache");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"none");



	

	lr_end_transaction("S02_T01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Safari/537.36");

	
	lr_start_transaction("S02_T02_Login");

//	web_add_header("Accept", 
//		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"document");
//
//	web_add_header("Cache-Control", 
//		"max-age=0");
//
//	web_add_header("Content-Type", 
//		"application/x-www-form-urlencoded");
//
//	web_add_header("Origin", 
//		"{URL}");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-User", 
//		"?1");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

	//userId="32180">
	
	web_reg_save_param_ex(
		"ParamName=User_Id",
		"LB=userId=\"",
		"RB=\">",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);

	
	web_reg_find("Search=Body",
		"Text=Welcome",
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=authenticate;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_submit_data("authenticate",
		"Action={URL}/reports/login/authenticate",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer={URL}/reports/login/auth",
		"Snapshot=t19.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=username", "Value={UserName}", ENDITEM,
		"Name=password", "Value={Password}", ENDITEM,
		"Name=_csrf", "Value={csrf_tokenId}", ENDITEM,
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"URL={URL}/reports/assets/theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t20.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=rxapplication-eebebbeb632a82e8608209da3ab42ef2.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"URL={URL}/reports/assets/app/rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t21.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=Accept;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"URL={URL}/reports/assets/app/dashboard/addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t22.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=Accept;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"URL={URL}/reports/assets/app/dashboard/dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=fuelux-b7cf5c5c681fcdbd63156284516c90e9.css;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL={URL}/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=gridstack.min-82a5fabd01f65ac4b5e87078091be104.css;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=Accept;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL={URL}/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t26.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=dashboard-8dee5417b984f9891cddc783e9314ce6.css;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL={URL}/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t27.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL={URL}/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"URL={URL}/reports/assets/app/actionItem/actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t29.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=Accept;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t30.inf", 
		LAST);

	
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=en.json;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("en.json", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=calendar-f9ce111f86c4726c1303830d83a16683.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"URL={URL}/reports/assets/app/calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t32.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t33.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=workFlow-3b78500b81fd61ce5b59cc202a54e63c.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL={URL}/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t34.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=fuelux-58910ec6bd502e7c4aabf85922131616.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"URL={URL}/reports/assets/fuelux/fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t35.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t36.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=highcharts-3d-b0c0c823b44f85cb61361491f4353576.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t37.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL={URL}/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t38.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL={URL}/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=highcharts-more-31bca387194b423710d019dfa069474a.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t40.inf", 
		LAST);

//	web_revert_auto_header("Accept");
//
//	web_revert_auto_header("Accept-Language");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Accept-Language", 
//		"en-US,en;q=0.9");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=Sec-Fetch-Site;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t42.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t43.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=pushNotification-3d08817200dceb0a405d9f7aefa3192f.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"URL={URL}/reports/assets/app/pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t44.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=deleteModal-68b8e74283c8070801d2afbaf40831a1.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"URL={URL}/reports/assets/app/deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=jquery.core-2c7cdf128b42d849235dea8cadd879b8.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"URL={URL}/reports/assets/app/jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t46.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=store.modern.min-ee86dbde67356086e53dffdd31c6867d.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"URL={URL}/reports/assets/store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t47.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=jquery.app-782d8f87ac279a019b37b18a315654b2.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL={URL}/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t48.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL={URL}/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t49.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"URL={URL}/reports/assets/fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t50.inf", 
		LAST);

	

//	web_concurrent_start(NULL);

	

//	web_add_header("Origin", 
//		"{URL}");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t52.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t53.inf", 
		LAST);

//	web_concurrent_end(NULL);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=X-Requested-With;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("latestAdhocReport", 
		"URL={URL}/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC={User_Id};SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("{User_Id}", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591009293777", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");

//	web_url("info", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/dashboard/index", 
//		"Snapshot=t56.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=index;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("index", 
		"URL={URL}/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=Accept;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("dataTables_en.json", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=latestPeriodicReport;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("latestPeriodicReport", 
		"URL={URL}/reports/periodicReportConfigurationRest/latestPeriodicReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("Accept");
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S02_T02_Login;PC=dataTables_en.json_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("dataTables_en.json_2", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json?_=1591009293778", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("Sec-Fetch-Dest");
//
//	web_revert_auto_header("Sec-Fetch-Mode");
//
//	web_revert_auto_header("Sec-Fetch-Site");
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_header("Cache-Control", 
//		"no-cache");
//
//	web_add_header("Pragma", 
//		"no-cache");
//
//	web_add_header("Upgrade", 
//		"websocket");addDynatraceHeaderTest("TSN=S02_T02_Login;PC=websocket;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	
//
//	web_url("websocket", 
//		"URL={URL}/reports/stomp/714/0tvx3urr/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t61.inf", 
//		"Mode=HTTP", 
//		LAST);
	
//	web_concurrent_end(NULL);
	
	web_concurrent_end(NULL);

	lr_end_transaction("S02_T02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T03_NavigateAdhocReport_NewReport");

//	web_add_header("Accept", 
//		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"document");
//
//	web_add_header("Sec-Fetch-User", 
//		"?1");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

/*Correlation comment - Do not change!  Original value='121eb882-afbd-4ca0-ab1c-922c042b7c10' Name ='Csrf_TokenId' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=Csrf_TokenId",
		"RegExp=\\ content=\"(.*?)\"/>\\\n\\ \\ \\ \\ \\ \\ \\ \\ ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_reg_find("Search=Body",
		"Text=PV Reports - Adhoc Reports",
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=create;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("create", 
		"URL={URL}/reports/configuration/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"URL={URL}/reports/assets/app/tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t63.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=templateQueries-b30e257e7bf112701696b0edaac3908d.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"URL={URL}/reports/assets/app/configuration/templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t64.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
		"URL={URL}/reports/assets/app/configuration/configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t65.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=scheduler-293bc77ad497c01ec53bcb2f97095e6b.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"URL={URL}/reports/assets/app/scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t66.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"URL={URL}/reports/assets/app/configuration/deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t67.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("dateRange-114c7d1894185a1583d21cb5f436038a.js", 
		"URL={URL}/reports/assets/app/configuration/dateRange-114c7d1894185a1583d21cb5f436038a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t68.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=blankParameters-cef91892ccdf31d55934699882b389d5.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"URL={URL}/reports/assets/app/configuration/blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t69.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"URL={URL}/reports/assets/expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t71.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"URL={URL}/reports/assets/app/configuration/copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t72.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"URL={URL}/reports/assets/copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t73.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"URL={URL}/reports/assets/app/expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t74.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=configuration-11b5b002dec2c8f1f643a1db6b80c6db.css;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"URL={URL}/reports/assets/configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t75.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=emailConfiguration-59c065e4239f87a883e747de81101001.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"URL={URL}/reports/assets/app/configuration/emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t76.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"URL={URL}/reports/assets/app/disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t77.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=column-view-64c0085c608464f4a6f66e33d985ae27.html;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t78.inf", 
		"Mode=HTTP", 
		LAST);

//	web_concurrent_end(NULL);

//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("If-None-Match", 
//		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=en.json_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("en.json_2", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t70.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=studyDrugs-9650caca7b2eaad47de57af7bbefe066.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL={URL}/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t79.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL={URL}/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t80.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t81.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");
	
//	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t82.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=studyCompounds-d1264ac301b89c2be214faf502830ceb.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL={URL}/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t83.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t84.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=tinymce.min-8913ae2d8b5e63961b59cb681291410b.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"URL={URL}/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t85.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"URL={URL}/reports/assets/app/emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t86.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=emailModal-c328f6452c15ee5b9612d5799369da83.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"URL={URL}/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t87.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"URL={URL}/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t88.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t89.inf", 
		LAST);
	
//	web_concurrent_end(NULL);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=column-view-64c0085c608464f4a6f66e33d985ae27.html_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t90.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=X-Requested-With;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("allEmails", 
		"URL={URL}/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=fetchDateRangeTypesForDatasource;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("fetchDateRangeTypesForDatasource", 
		"URL={URL}/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=allEmailsForCC;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("allEmailsForCC", 
		"URL={URL}/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=fetchEvaluateCaseDateSubmissionForDatasource;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("fetchEvaluateCaseDateSubmissionForDatasource", 
		"URL={URL}/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=fetchEvaluateCaseDatesForDatasource;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("fetchEvaluateCaseDatesForDatasource", 
		"URL={URL}/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=true&dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=getDateOperators;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("getDateOperators", 
		"URL={URL}/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=getNumOperators;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("getNumOperators", 
		"URL={URL}/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=getStringOperators;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("getStringOperators", 
		"URL={URL}/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=getValuelessOperators;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("getValuelessOperators", 
		"URL={URL}/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC={User_Id}_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("{User_Id}_2", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591009327410", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=polymer.html;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("polymer.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=sharedWithValues;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("sharedWithValues", 
		"URL={URL}/reports/userRest/sharedWithValues?ids=User_{User_Id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

//	web_url("info_2", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/configuration/create", 
//		"Snapshot=t103.inf", 
//		"Mode=HTTP", 
//		LAST);



//	web_concurrent_start(NULL);

	

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=theme.min.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("theme.min.js", 
		"URL={URL}/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t105.inf", 
		LAST);

//	web_concurrent_end(NULL);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=polymer-mini.html;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("polymer-mini.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		LAST);

//	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=plugin.min.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("plugin.min.js", 
		"URL={URL}/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t107.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=polymer-micro.html;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("polymer-micro.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

//	web_concurrent_end(NULL);
//
//	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=plugin.min.js_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("plugin.min.js_2", 
		"URL={URL}/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t109.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=plugin.min.js_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("plugin.min.js_3", 
		"URL={URL}/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t110.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=plugin.min.js_4;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("plugin.min.js_4", 
		"URL={URL}/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t111.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=plugin.min.js_5;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("plugin.min.js_5", 
		"URL={URL}/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t112.inf", 
		LAST);

//	web_concurrent_end(NULL);
//
//	web_revert_auto_header("Accept");
//
//	web_revert_auto_header("Sec-Fetch-Dest");
//
//	web_revert_auto_header("Sec-Fetch-Mode");
//
//	web_revert_auto_header("Sec-Fetch-Site");
//
//	web_add_header("Cache-Control", 
//		"no-cache");
//
//	web_add_header("Pragma", 
//		"no-cache");
////
////	web_add_header("Upgrade", 
////		"websocket");
////
////	web_url("websocket_2", 
////		"URL={URL}/reports/stomp/986/zn_ee2cn/websocket", 
////		"Resource=0", 
////		"Referer=", 
////		"Snapshot=t113.inf", 
////		"Mode=HTTP", 
////		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t114.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("skin.min.css", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t115.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("content.min.css", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t116.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	addDynatraceHeaderTest("TSN=S02_T03_NavigateAdhocReport_NewReport;PC=Sec-Fetch-Dest;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"URL={URL}/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t117.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("S02_T03_NavigateAdhocReport_NewReport",LR_AUTO);

	lr_think_time(3);

	
	lr_start_transaction("S02_T04_ClickProductLookUp");

	lr_end_transaction("S02_T04_ClickProductLookUp",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T05_SearchProduct");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Csrf_TokenId}");

	addDynatraceHeaderTest("TSN=S02_T05_SearchProduct;PC=searchViews;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_submit_data("searchViews", 
		"Action={URL}/reports/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value={ProductName}", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={}", ENDITEM, 
		LAST);

	lr_end_transaction("S02_T05_SearchProduct",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T06_SelectProduct");

	addDynatraceHeaderTest("TSN=S02_T06_SelectProduct;PC=getSelectedItem;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_custom_request("getSelectedItem", 
		"URL={URL}/reports/productDictionary/getSelectedItem?productId={ProductId}&dataSource=pva&dictionaryLevel=3&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	
	addDynatraceHeaderTest("TSN=S02_T06_SelectProduct;PC=getPreLevelProductParents;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_submit_data("getPreLevelProductParents", 
		"Action={URL}/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value={ProductId}", ENDITEM, 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T06_SelectProduct;PC=getPreLevelProductParents_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_submit_data("getPreLevelProductParents_2", 
		"Action={URL}/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=2", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=101234", ENDITEM, 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T06_SelectProduct;PC=getPreLevelProductParents_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_submit_data("getPreLevelProductParents_3", 
		"Action={URL}/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=107955", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

//	web_url("keep-alive_2", 
//		"URL={URL}/reports/keep-alive?_=1591009327412", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/configuration/create", 
//		"Snapshot=t125.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("S02_T06_SelectProduct",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T07_AddSections_1");

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S02_T07_AddSections_1;PC=getTemplateList;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("getTemplateList", 
		"URL={URL}/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1591009327413", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T07_AddSections_1;PC=customSQLValuesForTemplate;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("customSQLValuesForTemplate", 
		"URL={URL}/reports/template/customSQLValuesForTemplate?templateId={TemplateId1}&_=1591009327414", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T07_AddSections_1;PC=poiInputsForTemplate;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("poiInputsForTemplate", 
		"URL={URL}/reports/template/poiInputsForTemplate?templateId={TemplateId1}&_=1591009327415", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T07_AddSections_1;PC=getQueryList;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("getQueryList", 
		"URL={URL}/reports/queryRest/getQueryList?isQueryTargetReports=true&term=&page=1&max=30&oldSelectedValue=&_=1591009327416", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T07_AddSections_1;PC=queryExpressionValuesForQuery;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("queryExpressionValuesForQuery", 
		"URL={URL}/reports/query/queryExpressionValuesForQuery?queryId=29556&_=1591009327417", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T07_AddSections_1;PC=customSQLValuesForQuery;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("customSQLValuesForQuery", 
		"URL={URL}/reports/query/customSQLValuesForQuery?queryId=29556&_=1591009327418", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T07_AddSections_1;PC=queryExpressionValuesForQuerySet;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("queryExpressionValuesForQuerySet", 
		"URL={URL}/reports/query/queryExpressionValuesForQuerySet?queryId=29556&_=1591009327419", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		LAST);
	
	
	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T07_AddSections_1;PC=reportFieldsForQueryValue;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("reportFieldsForQueryValue", 
		"URL={URL}/reports/queryRest/reportFieldsForQueryValue?name=masterCloseDate&_=1591009327420", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T07_AddSections_1;PC=reportFieldsForQueryValue_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("reportFieldsForQueryValue_2", 
		"URL={URL}/reports/queryRest/reportFieldsForQueryValue?name=masterCloseDate&_=1591009327421", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("keep-alive_3", 
//		"URL={URL}/reports/keep-alive?_=1591009327422", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/configuration/create", 
//		"Snapshot=t135.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("S02_T07_AddSections_1",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T08_AddSections_2");

	

//	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=getTemplateList_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("getTemplateList_2", 
		"URL={URL}/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1591009327423", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=customSQLValuesForTemplate_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("customSQLValuesForTemplate_2", 
		"URL={URL}/reports/template/customSQLValuesForTemplate?templateId={TemplateId2}&_=1591009327424", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=poiInputsForTemplate_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("poiInputsForTemplate_2", 
		"URL={URL}/reports/template/poiInputsForTemplate?templateId={TemplateId2}&_=1591009327425", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t140.inf", 
		"Mode=HTTP", 
		LAST);



	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=getQueryList_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("getQueryList_2", 
		"URL={URL}/reports/queryRest/getQueryList?isQueryTargetReports=true&term=&page=1&max=30&oldSelectedValue=&_=1591009327426", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=queryExpressionValuesForQuery_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("queryExpressionValuesForQuery_2", 
		"URL={URL}/reports/query/queryExpressionValuesForQuery?queryId=29531&_=1591009327427", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=customSQLValuesForQuery_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("customSQLValuesForQuery_2", 
		"URL={URL}/reports/query/customSQLValuesForQuery?queryId=29531&_=1591009327428", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=queryExpressionValuesForQuerySet_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("queryExpressionValuesForQuerySet_2", 
		"URL={URL}/reports/query/queryExpressionValuesForQuerySet?queryId=29531&_=1591009327429", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);
	
	//web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=reportFieldsForQueryValue_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("reportFieldsForQueryValue_3", 
		"URL={URL}/reports/queryRest/reportFieldsForQueryValue?name=doseRegimensPackageId&_=1591009327430", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=possibleValues;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("possibleValues", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=doseRegimensPackageId&_=1591009327432", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=reportFieldsForQueryValue_4;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("reportFieldsForQueryValue_4", 
		"URL={URL}/reports/queryRest/reportFieldsForQueryValue?name=doseRegimensLotNo&_=1591009327431", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=possibleValues_2;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("possibleValues_2", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=doseRegimensPackageId&_=1591009327433", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=possibleValues_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("possibleValues_3", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=doseRegimensLotNo&_=1591009327434", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T08_AddSections_2;PC=possibleValues_4;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("possibleValues_4", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=doseRegimensLotNo&_=1591009327435", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		LAST);
	
//	web_concurrent_end(NULL);

	
	lr_end_transaction("S02_T08_AddSections_2",LR_AUTO);

	lr_think_time(3);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("keep-alive_4", 
//		"URL={URL}/reports/keep-alive?_=1591009327436", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/configuration/create", 
//		"Snapshot=t153.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_start_transaction("S02_T09_AddSections_3");


	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S02_T09_AddSections_3;PC=getTemplateList_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("getTemplateList_3", 
		"URL={URL}/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1591009327437", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T09_AddSections_3;PC=poiInputsForTemplate_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("poiInputsForTemplate_3", 
		"URL={URL}/reports/template/poiInputsForTemplate?templateId={TemplateId3}&_=1591009327439", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T09_AddSections_3;PC=customSQLValuesForTemplate_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("customSQLValuesForTemplate_3", 
		"URL={URL}/reports/template/customSQLValuesForTemplate?templateId={TemplateId3}&_=1591009327438", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		LAST);

	

	addDynatraceHeaderTest("TSN=S02_T09_AddSections_3;PC=getQueryList_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("getQueryList_3", 
		"URL={URL}/reports/queryRest/getQueryList?isQueryTargetReports=true&term=&page=1&max=30&oldSelectedValue=&_=1591009327440", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T09_AddSections_3;PC=queryExpressionValuesForQuery_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("queryExpressionValuesForQuery_3", 
		"URL={URL}/reports/query/queryExpressionValuesForQuery?queryId=29507&_=1591009327441", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T09_AddSections_3;PC=customSQLValuesForQuery_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("customSQLValuesForQuery_3", 
		"URL={URL}/reports/query/customSQLValuesForQuery?queryId=29507&_=1591009327442", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T09_AddSections_3;PC=queryExpressionValuesForQuerySet_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("queryExpressionValuesForQuerySet_3", 
		"URL={URL}/reports/query/queryExpressionValuesForQuerySet?queryId=29507&_=1591009327443", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T09_AddSections_3;PC=reportFieldsForQueryValue_5;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("reportFieldsForQueryValue_5", 
		"URL={URL}/reports/queryRest/reportFieldsForQueryValue?name=studyCodeBroken&_=1591009327444", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T09_AddSections_3;PC=possibleValues_5;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("possibleValues_5", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=studyCodeBroken&_=1591009327445", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T09_AddSections_3;PC=possibleValues_6;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("possibleValues_6", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=studyCodeBroken&_=1591009327446", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

//	web_add_auto_header("Accept", 
//		"*/*");

	

	lr_end_transaction("S02_T09_AddSections_3",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T10_SaveAndRun");

	web_revert_auto_header("X-Requested-With");

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
		"Text=Your report has been scheduled",
		LAST);

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=run;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_submit_data("run",
		"Action={URL}/reports/configuration/run",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/reports/configuration/create",
		"Snapshot=t168.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=owner", "Value={User_Id}", ENDITEM,
	//	"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[{\"name\":\"{ProductName} Capsule\",\"id\":\"{ProductId}\"}],\"4\":[]}", ENDITEM,
		"Name=productSelection", "Value={\"1\":[{\"name\":\"{ProductName}\",\"id\":\"{ProductId}\"}],\"2\":[],\"3\":[],\"4\":[]}", ENDITEM, 
		"Name=_suspectProduct", "Value=", ENDITEM,
		"Name=studySelection", "Value=", ENDITEM,
		"Name=eventSelection", "Value=", ENDITEM,
		"Name=_limitPrimaryPath", "Value=", ENDITEM,
		"Name=JSONExpressionValues", "Value=", ENDITEM,
		"Name=dateRangeType.id", "Value=1", ENDITEM,
		"Name=sourceProfile.id", "Value=6594", ENDITEM,
		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", ENDITEM,
		"Name=evaluateDateAsSubmissionDate", "Value=LATEST_VERSION", ENDITEM,
		"Name=evaluateDateAs", "Value=LATEST_VERSION", ENDITEM,
		"Name=asOfVersionDate", "Value=", ENDITEM,
		"Name=useCaseSeries", "Value=", ENDITEM,
		"Name=_excludeFollowUp", "Value=", ENDITEM,
		"Name=_includeLockedVersion", "Value=", ENDITEM,
		"Name=includeLockedVersion", "Value=on", ENDITEM,
		"Name=_includeAllStudyDrugsCases", "Value=", ENDITEM,
		"Name=_excludeNonValidCases", "Value=", ENDITEM,
		"Name=excludeNonValidCases", "Value=on", ENDITEM,
		"Name=_includeMedicallyConfirmedCases", "Value=", ENDITEM,
		"Name=_includeNonSignificantFollowUp", "Value=", ENDITEM,
		"Name=_event_exactSearch", "Value=", ENDITEM,
		"Name=_product_exactSearch", "Value=", ENDITEM,
		"Name=_study_exactSearch", "Value=", ENDITEM,
		"Name=studyDrugs", "Value=", ENDITEM,
		"Name=_study_imp", "Value=", ENDITEM,
		"Name=studyCompounds", "Value=", ENDITEM,
		"Name=templateQueries[0].version", "Value=", ENDITEM,
		"Name=templateQueries[0].id", "Value=", ENDITEM,
		"Name=templateQueries[0].dynamicFormEntryDeleted", "Value=false", ENDITEM,
		"Name=templateQueries[0].new", "Value=true", ENDITEM,
		"Name=templateQueries[0].template", "Value={TemplateId1}", ENDITEM,
		"Name=templateQueries[0].header", "Value=", ENDITEM,
		"Name=templateQueries[0].title", "Value=", ENDITEM,
		"Name=templateQueries[0].footer", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._headerProductSelection", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._headerDateRange", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._displayMedDraVersionNumber", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._privacyProtected", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._blindProtected", "Value=", ENDITEM,
		"Name=templateQueries[0].query", "Value=29556", ENDITEM,
		"Name=templateQueries[0].queryLevel", "Value=CASE", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUSTOM", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value={FromDate}", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value={ToDate}", ENDITEM,
		"Name=templateQuery0.qev[0].field", "Value=masterCloseDate", ENDITEM,
		"Name=templateQuery0.qev[0].operator", "Value=GREATER_THAN_OR_EQUAL", ENDITEM,
		"Name=selectValue", "Value=", ENDITEM,
		"Name=selectSelectAuto", "Value=", ENDITEM,
		"Name=templateQuery0.qev[0].value", "Value={ToDate}", ENDITEM,
		"Name=templateQuery0.qev[0].key", "Value=1", ENDITEM,
		"Name=templateQuery0.qev[0].specialKeyValue", "Value=", ENDITEM,
		"Name=templateQuery0.qev[0].isFromCopyPaste", "Value=", ENDITEM,
		"Name=templateQuery0.qev[1].field", "Value=masterCloseDate", ENDITEM,
		"Name=templateQuery0.qev[1].operator", "Value=LESS_THAN_OR_EQUAL", ENDITEM,
		"Name=selectValue", "Value=", ENDITEM,
		"Name=selectSelectAuto", "Value=", ENDITEM,
		"Name=templateQuery0.qev[1].value", "Value={ToDate}", ENDITEM,
		"Name=templateQuery0.qev[1].key", "Value=2", ENDITEM,
		"Name=templateQuery0.qev[1].specialKeyValue", "Value=", ENDITEM,
		"Name=templateQuery0.qev[1].isFromCopyPaste", "Value=", ENDITEM,
		"Name=templateQueries[0].validQueries", "Value=29556", ENDITEM,
		"Name=templateQueries[1].version", "Value=", ENDITEM,
		"Name=templateQueries[1].id", "Value=", ENDITEM,
		"Name=templateQueries[1].dynamicFormEntryDeleted", "Value=false", ENDITEM,
		"Name=templateQueries[1].new", "Value=true", ENDITEM,
		"Name=templateQueries[1].template", "Value={TemplateId2}", ENDITEM,
		"Name=templateQueries[1].header", "Value=", ENDITEM,
		"Name=templateQueries[1].title", "Value=", ENDITEM,
		"Name=templateQueries[1].footer", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._headerProductSelection", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._headerDateRange", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._displayMedDraVersionNumber", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._privacyProtected", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._blindProtected", "Value=", ENDITEM,
		"Name=templateQueries[1].query", "Value=29531", ENDITEM,
		"Name=templateQueries[1].queryLevel", "Value=CASE", ENDITEM,
		"Name=templateQueries[1].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUSTOM", ENDITEM,
		"Name=templateQueries[1].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM,
		"Name=templateQueries[1].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value={ToDate}", ENDITEM,
		"Name=templateQueries[1].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value={ToDate}", ENDITEM,
		"Name=templateQuery1.qev[0].field", "Value=doseRegimensPackageId", ENDITEM,
		"Name=templateQuery1.qev[0].operator", "Value=EQUALS", ENDITEM,
		"Name=templateQuery1.qev[0].value", "Value=", ENDITEM,
		"Name=selectSelectAuto", "Value=", ENDITEM,
		"Name=selectDate", "Value={ToDate}", ENDITEM,
		"Name=selectSelect", "Value=", ENDITEM,
		"Name=templateQuery1.qev[0].key", "Value=1", ENDITEM,
		"Name=templateQuery1.qev[0].specialKeyValue", "Value=", ENDITEM,
		"Name=templateQuery1.qev[0].isFromCopyPaste", "Value=", ENDITEM,
		"Name=templateQuery1.qev[1].field", "Value=doseRegimensLotNo", ENDITEM,
		"Name=templateQuery1.qev[1].operator", "Value=EQUALS", ENDITEM,
		"Name=templateQuery1.qev[1].value", "Value=", ENDITEM,
		"Name=selectSelectAuto", "Value=", ENDITEM,
		"Name=selectDate", "Value={ToDate}", ENDITEM,
		"Name=delimitertemplateQuery1qev1", "Value=none", ENDITEM,
		"Name=selectSelect", "Value=", ENDITEM,
		"Name=templateQuery1.qev[1].key", "Value=2", ENDITEM,
		"Name=templateQuery1.qev[1].specialKeyValue", "Value=", ENDITEM,
		"Name=templateQuery1.qev[1].isFromCopyPaste", "Value=", ENDITEM,
		"Name=templateQueries[1].validQueries", "Value=29531", ENDITEM,
		"Name=templateQueries[2].version", "Value=", ENDITEM,
		"Name=templateQueries[2].id", "Value=", ENDITEM,
		"Name=templateQueries[2].dynamicFormEntryDeleted", "Value=false", ENDITEM,
		"Name=templateQueries[2].new", "Value=true", ENDITEM,
		"Name=templateQueries[2].template", "Value={TemplateId3}", ENDITEM,
		"Name=templateQueries[2].header", "Value=", ENDITEM,
		"Name=templateQueries[2].title", "Value=", ENDITEM,
		"Name=templateQueries[2].footer", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._headerProductSelection", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._headerDateRange", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._displayMedDraVersionNumber", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._privacyProtected", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._blindProtected", "Value=", ENDITEM,
		"Name=templateQueries[2].query", "Value=29507", ENDITEM,
		"Name=templateQueries[2].queryLevel", "Value=CASE", ENDITEM,
		"Name=templateQueries[2].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUSTOM", ENDITEM,
		"Name=templateQueries[2].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM,
		"Name=templateQueries[2].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value={ToDate}", ENDITEM,
		"Name=templateQueries[2].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value={ToDate}", ENDITEM,
		"Name=templateQuery2.qev[0].field", "Value=studyCodeBroken", ENDITEM,
		"Name=templateQuery2.qev[0].operator", "Value=EQUALS", ENDITEM,
		"Name=templateQuery2.qev[0].copyPasteValue", "Value=", ENDITEM,
		"Name=selectSelectAuto", "Value=", ENDITEM,
		"Name=selectDate", "Value={ToDate}", ENDITEM,
		"Name=delimitertemplateQuery2qev0", "Value=none", ENDITEM,
		"Name=templateQuery2.qev[0].value", "Value=", ENDITEM,
		"Name=templateQuery2.qev[0].key", "Value=1", ENDITEM,
		"Name=templateQuery2.qev[0].specialKeyValue", "Value=", ENDITEM,
		"Name=templateQuery2.qev[0].isFromCopyPaste", "Value=", ENDITEM,
		"Name=templateQueries[2].validQueries", "Value=29507", ENDITEM,
		"Name=reportName", "Value={ReportName}", ENDITEM,
		"Name=description", "Value={ReportName}", ENDITEM,
		"Name=_qualityChecked", "Value=", ENDITEM,
		"Name=_isTemplate", "Value=", ENDITEM,
		"Name=sharedWith", "Value=User_{User_Id}", ENDITEM,
		"Name=emailAttachmentCheckbox", "Value=", ENDITEM,
		"Name=TimeZoneSelectlist", "Value=", ENDITEM,
		"Name=intervalSelectlist", "Value=none", ENDITEM,
		"Name=monthlySelectlist", "Value=1", ENDITEM,
		"Name=repeat-monthly", "Value=bysetpos", ENDITEM,
		"Name=monthlySelectlist", "Value=1", ENDITEM,
		"Name=monthlySelectlist", "Value=SU", ENDITEM,
		"Name=repeat-yearly", "Value=bymonthday", ENDITEM,
		"Name=monthlySelectlist", "Value=1", ENDITEM,
		"Name=monthlySelectlist", "Value=1", ENDITEM,
		"Name=yearlyDateSelectlist", "Value=1", ENDITEM,
		"Name=yearlyDaySelectlist", "Value=SU", ENDITEM,
		"Name=yearlyDaySelectlist", "Value=1", ENDITEM,
		"Name=EndSelectlist", "Value=never", ENDITEM,
		"Name=isEnabled", "Value=true", ENDITEM,
		"Name=schedulerTime", "Value={CurrentDate} {CurrentTime}", ENDITEM,
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"{CurrentDate}T{SchTime2}Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n"
		"                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM,
		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM,
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption.additionalAttachments", "Value=", ENDITEM,
		"Name=ccValue", "Value=", ENDITEM,
		"Name=subjectValue", "Value=", ENDITEM,
		"Name=emailConfiguration.subject", "Value=", ENDITEM,
		"Name=bodyValue", "Value=", ENDITEM,
		"Name=emailConfiguration.body", "Value=", ENDITEM,
		"Name=emailConfiguration._noEmailOnNoData", "Value=", ENDITEM,
		"Name=noEmailOnNoDataValue", "Value=", ENDITEM,
		"Name=emailConfiguration.pageOrientation", "Value=PORTRAIT", ENDITEM,
		"Name=pageOrientationValue", "Value=PORTRAIT", ENDITEM,
		"Name=emailConfiguration.paperSize", "Value=LETTER", ENDITEM,
		"Name=paperSizeValue", "Value=LETTER", ENDITEM,
		"Name=emailConfiguration.sensitivityLabel", "Value=SENSITIVE", ENDITEM,
		"Name=sensitivityLabelValue", "Value=SENSITIVE", ENDITEM,
		"Name=emailConfiguration._showPageNumbering", "Value=", ENDITEM,
		"Name=emailConfiguration.showPageNumbering", "Value=on", ENDITEM,
		"Name=showPageNumberingValue", "Value=true", ENDITEM,
		"Name=emailConfiguration._showCompanyLogo", "Value=", ENDITEM,
		"Name=emailConfiguration.showCompanyLogo", "Value=on", ENDITEM,
		"Name=showCompanyLogoValue", "Value=true", ENDITEM,
		"Name=emailConfiguration._excludeCriteriaSheet", "Value=", ENDITEM,
		"Name=excludeCriteriaSheetValue", "Value=false", ENDITEM,
		"Name=emailConfiguration._excludeAppendix", "Value=", ENDITEM,
		"Name=excludeAppendixValue", "Value=false", ENDITEM,
		"Name=emailConfiguration._excludeComments", "Value=", ENDITEM,
		"Name=excludeCommentsValue", "Value=false", ENDITEM,
		"Name=emailConfiguration._excludeLegend", "Value=", ENDITEM,
		"Name=excludeLegendValue", "Value=false", ENDITEM,
		"Name=emailTemplateName", "Value=", ENDITEM,
		"Name=emailTemplateDescription", "Value=", ENDITEM,
		"Name=templateBlanks", "Value=false", ENDITEM,
		"Name=queryBlanks", "Value=false", ENDITEM,
		"Name=schedulerFrom", "Value=createPage", ENDITEM,
		"Name=editable", "Value=true", ENDITEM,
		"Name=blankValuesJSON", "Value=", ENDITEM,
		"Name=_csrf", "Value={Csrf_TokenId}", ENDITEM,
		LAST);

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL={URL}/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t169.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=executionStatus-0291e27b037d335048c8c802b3bd133c.css;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"URL={URL}/reports/assets/executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t171.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"URL={URL}/reports/assets/app/utils/pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t172.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"URL={URL}/reports/assets/app/utils/pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t173.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=executionStatus-abc243051811af7ce55db349117755f2.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("executionStatus-abc243051811af7ce55db349117755f2.js", 
		"URL={URL}/reports/assets/app/configuration/executionStatus-abc243051811af7ce55db349117755f2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t174.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL={URL}/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t175.inf", 
		LAST);

	

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("If-None-Match", 
//		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=If-None-Match;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("en.json_3", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t170.inf", 
		LAST);

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("If-None-Match", 
//		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");
//
//	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=If-None-Match;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("dataTables_en.json_3", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t176.inf", 
		LAST);
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=X-Requested-With;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("datepicker.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t177.inf", 
		LAST);

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=filter_panel.hbs;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("filter_panel.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t178.inf", 
		LAST);

//	web_add_header("X-Goog-Encode-Response-If-Executable", 
//		"base64");
//
//	web_add_header("X-Goog-Api-Key", 
//		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");
//
//
//	web_concurrent_end(NULL);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC={User_Id}_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("{User_Id}_3", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591009657183", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);

//	web_add_auto_header("Accept", 
//		"*/*");addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=info_3;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	
////
//	web_url("info_3", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/executionStatus/list", 
//		"Snapshot=t181.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S02_T10_SaveAndRun;PC=executionStatus;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("executionStatus", 
		"URL={URL}/reports/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=reportName&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=periodicReportType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=version&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=executionStatus&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=false&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=runDate&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionTime&columns%5B6%5D%5Bname%5D=&"
		"columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=frequency&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=sharedWith&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D="
		"false&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=deliveryMedia&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=false&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=runDate&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=5&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&searchString=&direction=desc&sort=runDate&status=GENERATING&_=1591009657184", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("X-Goog-Encode-Response-If-Executable", 
//		"base64");
//
//	web_add_header("X-Goog-Api-Key", 
//		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");
//
//	web_concurrent_start(NULL);
//
//	
//	web_concurrent_end(NULL);

//	web_add_auto_header("Accept", 
//		"*/*");

//	web_custom_request("xhr_streaming", 
//		"URL={URL}/reports/stomp/149/y8hplyja/xhr_streaming", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/executionStatus/list", 
//		"Snapshot=t185.inf", 
//		"Mode=HTTP", 
//		"EncType=", 
//		LAST);

	lr_end_transaction("S02_T10_SaveAndRun",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T11_Logout");

//	web_add_auto_header("Accept", 
//		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"document");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_header("Sec-Fetch-User", 
//		"?1");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	addDynatraceHeaderTest("TSN=S02_T11_Logout;PC=logout;SI=LoadRunner;LSN=S02_AdhocReportNewReport;");
	web_url("logout", 
		"URL={URL}/reports/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S02_T11_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}