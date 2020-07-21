Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_cleanup_auto_headers();
	
	web_cleanup_cookies();
	
	web_set_max_html_param_len("99999999");
	
	lr_start_transaction("S09_T01_OpenApplication");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

//	web_add_header("Origin", 
//		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Safari/537.36");


	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='0a16ed2f-fdca-4689-be9f-de9cce545cf9' Name ='CsrfTokenId_1' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=CsrfTokenId_1",
		"LB=name=\"_csrf\" value=\"",
		"RB=\"/>\n                        ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	web_url("auth", 
		"URL={URL}/reports/login/auth", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("Accept-Language");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("A-IM", 
//		"x-bm,gzip");
//
//
//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Accept-Language", 
//		"en-US,en;q=0.9");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");

	web_concurrent_start(NULL);
	
	web_url("login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"URL={URL}/reports/assets/login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"URL={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t5.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");

	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL={URL}/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t6.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");

	web_url("cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"URL={URL}/reports/assets/cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t7.inf", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");

	web_url("jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"URL={URL}/reports/assets/jquery/jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"URL={URL}/reports/assets/jquery/customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t9.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/reports/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t10.inf", 
		LAST);


	web_concurrent_end(NULL);

	

	lr_end_transaction("S09_T01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T02_Login");

	web_revert_auto_header("Accept");

	
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

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

/*Correlation comment - Do not change!  Original value='31a9bd9e-3a6b-4a04-907e-bef7bdcd62e1' Name ='CsfrTokenId_2' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=CsfrTokenId_2",
		"RegExp=\\ content=\"(.*?)\"/>\\\n\\ \\ \\ \\ \\ \\ \\ \\ ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/index*",
		LAST);
		
	//userId="32180"
	web_reg_save_param_ex(
		"ParamName=User_Id",
		"LB=userId=\"",
		"RB=\">",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);

	
	web_reg_find("Search=Body",
		"Text=Dashboard",
		LAST);

	web_submit_data("authenticate",
		"Action={URL}/reports/login/authenticate",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer={URL}/reports/login/auth",
		"Snapshot=t17.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=username", "Value={UserName}", ENDITEM,
		"Name=password", "Value={Password}", ENDITEM,
		"Name=_csrf", "Value={CsrfTokenId_1}", ENDITEM,
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"URL={URL}/reports/assets/theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t18.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL={URL}/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t19.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t20.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL={URL}/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t21.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL={URL}/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t22.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL={URL}/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"URL={URL}/reports/assets/app/rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"URL={URL}/reports/assets/app/dashboard/addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"URL={URL}/reports/assets/app/dashboard/dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t26.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"URL={URL}/reports/assets/app/actionItem/actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t27.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"URL={URL}/reports/assets/app/calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t29.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t30.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL={URL}/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"URL={URL}/reports/assets/fuelux/fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t32.inf", 
		LAST);

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

	web_url("en.json", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t33.inf", 
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

	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL={URL}/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL={URL}/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"URL={URL}/reports/assets/app/pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"URL={URL}/reports/assets/app/deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL={URL}/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"URL={URL}/reports/assets/app/jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"URL={URL}/reports/assets/store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL={URL}/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t46.inf", 
		LAST);

	
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("latestAdhocReport", 
		"URL={URL}/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		LAST);

//	web_url("info", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/dashboard/index", 
//		"Snapshot=t49.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("index", 
		"URL={URL}/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("{User_Id}", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591180540692", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");

	web_url("fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"URL={URL}/reports/assets/fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t52.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("Accept");
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("latestPeriodicReport", 
		"URL={URL}/reports/periodicReportConfigurationRest/latestPeriodicReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("If-None-Match", 
//		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");
//
//	web_concurrent_start(NULL);

	web_url("dataTables_en.json_2", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t56.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t57.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket", 
//		"URL={URL}/reports/stomp/359/zter7jhj/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t58.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("S09_T02_Login",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Accept-Language");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");



	lr_start_transaction("S09_T03_NavigateQueries_QueryLibrary");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_2", 
		"URL={URL}/reports/query/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"URL={URL}/reports/assets/shorten/jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t61.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL={URL}/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t62.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL={URL}/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/query/index", 
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

	web_url("pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"URL={URL}/reports/assets/app/utils/pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/query/index", 
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

	web_url("query-37508e1ff5b1a1900d3443bf34160bfa.js", 
		"URL={URL}/reports/assets/app/query/query-37508e1ff5b1a1900d3443bf34160bfa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/query/index", 
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

	web_url("pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"URL={URL}/reports/assets/app/utils/pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t67.inf", 
		LAST);

//	web_concurrent_end(NULL);
//
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

	web_url("en.json_2", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t64.inf", 
		LAST);

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
//		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_url("dataTables_en.json_3", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t68.inf", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");

	web_url("tag", 
		"URL={URL}/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t69.inf", 
		"Mode=HTTP", 
		LAST);

//	web_concurrent_start(NULL);

	web_url("datepicker.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("filter_panel.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t71.inf", 
		LAST);

	

//	web_concurrent_end(NULL);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("{User_Id}_2", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591180574448", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t73.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);

//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");

//	web_url("info_2", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t74.inf", 
//		"Mode=HTTP", 
//		LAST);



//	web_revert_auto_header("Accept");
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("queries", 
		"URL={URL}/reports/api/queries?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=name&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=description&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=qualityChecked&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=checkUsage&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=owner.fullName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
		"=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=tags&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&advancedFilter=false&tableFilter=%7B%7D&direction=desc&sharedwith=&sort=isFavorite&_=1591180574449", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t76.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t77.inf", 
		LAST);

	

	web_concurrent_end(NULL);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket_2", 
//		"URL={URL}/reports/stomp/266/4b4sgnyr/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t79.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("S09_T03_NavigateQueries_QueryLibrary",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T04_Search_Query");

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

	// Query_Id=32662
//	web_reg_save_param_ex(
//		"ParamName=Query_Id",
//		"LB=[{\"id\":",
//		"RB=,\"name\":\"{Search_Query}",
//		SEARCH_FILTERS,
//		"Scope=ALL",
//		LAST);
	
	web_reg_save_param_ex(
		"ParamName=Query_Id",
		"LB=id\":",
		"RB=,\"name\":\"{Search_Query}\"",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);

	
	web_url("queries_2", 
		"URL={URL}/reports/api/queries?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=name&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=description&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=qualityChecked&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=checkUsage&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=owner.fullName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
		"=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=tags&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D={Search_Query}&search%5Bregex%5D=false&searchString={Search_Query}&advancedFilter=false&tableFilter=%7B%7D&direction=desc&sharedwith=&sort=isFavorite&_=1591180574450", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_T04_Search_Query",LR_AUTO);

	lr_think_time(3);

//	lr_start_transaction("S09_T05_Click_Preview1");

//	web_add_header("Accept", 
//		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
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

//	web_url("preview", 
//		"URL={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t81.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_concurrent_start(NULL);
//
//	web_url("caseSeries-9f3b2732d9239856825345c6f8702b19.js", 
//		"URL={URL}/reports/assets/app/caseSeries-9f3b2732d9239856825345c6f8702b19.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t82.inf", 
//		LAST);
//
////	web_add_header("Accept", 
////		"*/*");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"no-cors");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"script");
//
//	web_url("tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
//		"URL={URL}/reports/assets/app/tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t83.inf", 
//		LAST);
//
////	web_add_header("Accept", 
////		"*/*");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"no-cors");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"script");
//
//	web_url("configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
//		"URL={URL}/reports/assets/app/configuration/configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t84.inf", 
//		LAST);
//
////	web_add_header("Accept", 
////		"*/*");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"no-cors");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"script");
//
//	web_url("copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
//		"URL={URL}/reports/assets/app/configuration/copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t85.inf", 
//		LAST);
//
////	web_add_header("Accept", 
////		"*/*");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"no-cors");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"script");
//
//	web_url("dateRange-114c7d1894185a1583d21cb5f436038a.js", 
//		"URL={URL}/reports/assets/app/configuration/dateRange-114c7d1894185a1583d21cb5f436038a.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t86.inf", 
//		LAST);
//
////	web_add_header("Accept", 
////		"*/*");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"no-cors");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"script");
//
//	web_url("expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
//		"URL={URL}/reports/assets/app/expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t87.inf", 
//		LAST);
//
////	web_add_header("Accept", 
////		"*/*");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"no-cors");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"script");
//
//	web_url("blankParameters-cef91892ccdf31d55934699882b389d5.js", 
//		"URL={URL}/reports/assets/app/configuration/blankParameters-cef91892ccdf31d55934699882b389d5.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t88.inf", 
//		LAST);
//
////	web_add_header("Accept", 
////		"text/css,*/*;q=0.1");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"no-cors");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"style");
//
//	web_url("configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
//		"URL={URL}/reports/assets/configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
//		"Resource=1", 
//		"RecContentType=text/css", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t90.inf", 
//		LAST);
//
////	web_add_header("Accept", 
////		"text/css,*/*;q=0.1");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"no-cors");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"style");
//
//	web_url("copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
//		"URL={URL}/reports/assets/copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
//		"Resource=1", 
//		"RecContentType=text/css", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t91.inf", 
//		LAST);
//
////	web_add_header("Accept", 
////		"text/css,*/*;q=0.1");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"no-cors");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"style");
//
//	web_url("expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
//		"URL={URL}/reports/assets/expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
//		"Resource=1", 
//		"RecContentType=text/css", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t92.inf", 
//		LAST);
//
////	web_add_header("Accept", 
////		"*/*");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"no-cors");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"script");
//
//	web_url("disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
//		"URL={URL}/reports/assets/app/disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t93.inf", 
//		LAST);
//
////	web_add_header("Accept", 
////		"*/*");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"cors");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"empty");
//
//	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
//		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t94.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_concurrent_end(NULL);
//
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
//
//	web_url("en.json_3", 
//		"URL={URL}/reports/assets/i18n/en.json", 
//		"Resource=1", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t89.inf", 
//		LAST);
//
//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_url("dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
//		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
//		"Resource=1", 
//		"RecContentType=text/css", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t95.inf", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");
//	
//	web_concurrent_start(NULL);
//
//	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
//		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t96.inf", 
//		LAST);
//
//	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
//		"URL={URL}/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t97.inf", 
//		LAST);
//
//	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
//		"URL={URL}/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t98.inf", 
//		LAST);
//
//	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
//		"URL={URL}/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t99.inf", 
//		LAST);
//
//	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
//		"URL={URL}/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t100.inf", 
//		LAST);
//	
//	web_concurrent_end(NULL);
//
//	web_add_header("X-HTTP-Method-Override", 
//		"POST");
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
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("getNumOperators", 
//		"URL={URL}/reports/query/getNumOperators", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t103.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("getDateOperators", 
//		"URL={URL}/reports/query/getDateOperators", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t104.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");
//
//	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
//		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
//		"Resource=0", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t105.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("getStringOperators", 
//		"URL={URL}/reports/query/getStringOperators", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t106.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("getQueryNameDescription", 
//		"URL={URL}/reports/queryRest/getQueryNameDescription?id={Query_Id}", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t107.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("getValuelessOperators", 
//		"URL={URL}/reports/query/getValuelessOperators", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t108.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("{User_Id}_3", 
//		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591180618070", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t109.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
////	web_url("info_3", 
////		"URL={URL}/reports/stomp/info", 
////		"Resource=0", 
////		"RecContentType=application/json", 
////		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
////		"Snapshot=t110.inf", 
////		"Mode=HTTP", 
////		LAST);
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("getQueryNameDescription_2", 
//		"URL={URL}/reports/queryRest/getQueryNameDescription?id={Query_Id}&_=1591180618071", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t111.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("queryExpressionValuesForQuerySet", 
//		"URL={URL}/reports/query/queryExpressionValuesForQuerySet?queryId={Query_Id}&_=1591180618074", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t112.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("queryExpressionValuesForQuery", 
//		"URL={URL}/reports/query/queryExpressionValuesForQuery?queryId={Query_Id}&_=1591180618072", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t113.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("customSQLValuesForQuery", 
//		"URL={URL}/reports/query/customSQLValuesForQuery?queryId={Query_Id}&_=1591180618073", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t114.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("polymer.html", 
//		"URL={URL}/reports/assets/plugin/dictionary/polymer.html", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t115.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("reportFieldsForQueryValue", 
//		"URL={URL}/reports/queryRest/reportFieldsForQueryValue?name=caseRoutingPvrFollowupNum&_=1591180618075", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t116.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("reportFieldsForQueryValue_2", 
//		"URL={URL}/reports/queryRest/reportFieldsForQueryValue?name=prodDrugsAbuse&_=1591180618077", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t117.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("reportFieldsForQueryValue_3", 
//		"URL={URL}/reports/queryRest/reportFieldsForQueryValue?name=patInfoPostalCode&_=1591180618076", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t118.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("polymer-mini.html", 
//		"URL={URL}/reports/assets/plugin/dictionary/polymer-mini.html", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t119.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_revert_auto_header("Accept");
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("possibleValues", 
//		"URL={URL}/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1591180618078", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t121.inf", 
//		"Mode=HTTP", 
//		LAST);
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
//
////	web_add_header("Upgrade", 
////		"websocket");
////
////	web_url("websocket_3", 
////		"URL={URL}/reports/stomp/902/ft44zi1z/websocket", 
////		"Resource=0", 
////		"Referer=", 
////		"Snapshot=t122.inf", 
////		"Mode=HTTP", 
////		LAST);
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
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//	
//	web_concurrent_start(NULL);
//
//	web_url("possibleValues_2", 
//		"URL={URL}/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1591180618079", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t123.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("possibleValues_3", 
//		"URL={URL}/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1591180618080", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t124.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("possibleValues_4", 
//		"URL={URL}/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1591180618081", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t125.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("possibleValues_5", 
//		"URL={URL}/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1591180618082", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t126.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("possibleValues_6", 
//		"URL={URL}/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1591180618083", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t127.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_concurrent_end(NULL);
//	
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("polymer-micro.html", 
//		"URL={URL}/reports/assets/plugin/dictionary/polymer-micro.html", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
//		"Snapshot=t129.inf", 
//		"Mode=HTTP", 
//		LAST);
//
////	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
////		"URL={URL}/reports/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
////		"Resource=1", 
////		"RecContentType=application/javascript", 
////		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
////		"Snapshot=t130.inf", 
////		LAST);
////
////	web_custom_request("xhr_streaming", 
////		"URL={URL}/reports/stomp/902/sq7bda4u/xhr_streaming", 
////		"Method=POST", 
////		"Resource=0", 
////		"RecContentType=text/html", 
////		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}", 
////		"Snapshot=t131.inf", 
////		"Mode=HTTP", 
////		"EncType=", 
////		LAST);
//
//	lr_end_transaction("S09_T05_Click_Preview1",LR_AUTO);

	lr_think_time(3);

//	lr_start_transaction("S09_T06_Click_Preview2");
//
////	web_add_auto_header("Accept", 
////		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
////
////	web_add_auto_header("Sec-Fetch-Mode", 
////		"navigate");
////
////	web_add_auto_header("Sec-Fetch-Dest", 
////		"document");
////
////	web_add_header("Cache-Control", 
////		"max-age=0");
////
////	web_add_header("Sec-Fetch-User", 
////		"?1");
////
////	web_add_header("Upgrade-Insecure-Requests", 
////		"1");
////
////	web_reg_find("Search=Body",
////		"Text=Preview of Query",
////		LAST);
//
//	web_submit_data("updatePreview",
//		"Action={URL}/reports/caseSeries/updatePreview",
//		"Method=POST",
//		"RecContentType=text/html",
//		"Referer={URL}/reports/caseSeries/preview?selectedQuery={Query_Id}",
//		"Snapshot=t133.inf",
//		"Mode=HTTP",
//		ITEMDATA,
//		"Name=owner", "Value={User_Id}", ENDITEM,
//		"Name=productSelection", "Value=", ENDITEM,
//		"Name=studySelection", "Value=", ENDITEM,
//		"Name=_suspectProduct", "Value=", ENDITEM,
//		"Name=JSONExpressionValues", "Value=", ENDITEM,
//		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", ENDITEM,
//		"Name=evaluateDateAsSu" 
//		"bmissionDate", "Value=LATEST_VERSION", ENDITEM,
//		"Name=evaluateDateAs", "Value=LATEST_VERSION", ENDITEM,
//		"Name=asOfVersionDate", "Value=", ENDITEM,
//		"Name=globalQueryBlanks", "Value=true", ENDITEM,
//		"Name=globalQuery", "Value={Query_Id}", ENDITEM,
//		"Name=dateRangeType.id", "Value=1", ENDITEM,
//		"Name=caseSeriesDateRangeInformation.dateRangeEnum", "Value=CUMULATIVE", ENDITEM,
//		"Name=seriesInstance.caseSeriesDateRangeInformation.id", "Value=", ENDITEM,
//		"Name=caseSeriesDateRangeInformation.relativeDateRangeValue", "Value=1", ENDITEM,
//		"Name=caseSeriesDateRangeInformation.dateRangeStartAbsolute", "Value=", ENDITEM,
//		"Name=caseSeriesDateRangeInformation.dateRangeEndAbsolute", "Value=", ENDITEM,
//		"Name=_excludeFollowUp", "Value=", ENDITEM,
//		"Name=_includeLockedVersion", "Value=", ENDITEM,
//		"Name=includeLockedVersion", "Value=on", ENDITEM,
//		"Name=_includeAllStudyDrugsCases", "Value=", ENDITEM,
//		"Name=_excludeNonValidCases", "Value=", ENDITEM,
//		"Name=excludeNonValidCases", "Value=on", ENDITEM,
//		"Name=qev[0].field", "Value=caseRoutingPvrFollowupNum", ENDITEM,
//		"Name=qev[0].operator", "Value=EQUALS", ENDITEM,
//		"Name=qev[0].value", "Value=", ENDITEM,
//		"Name=selectSelectAuto", "Value=", ENDITEM,
//		"Name=selectDate", "Value=03-Jun-2020", ENDITEM,
//		"Name=qev[0].key", "Value=1", ENDITEM,
//		"Name=qev[0].specialKeyValue", "Value=", ENDITEM,
//		"Name=qev[0].isFromCopyPaste", "Value=", ENDITEM,
//		"Name=qev[1].field", "Value=patInfoPostalCode", ENDITEM,
//		"Name=qev[1].operator", "Value=EQUALS", ENDITEM,
//		"Name=qev[1].value", "Value=", ENDITEM,
//		"Name=selectSelectAuto", "Value=", ENDITEM,
//		"Name=selectDate", "Value=03-Jun-2020", ENDITEM,
//		"Name=selectSelect", "Value=", ENDITEM,
//		"Name=qev[1].key", "Value=2", ENDITEM,
//		"Name=qev[1].specialKeyValue", "Value=", ENDITEM,
//		"Name=qev[1].isFromCopyPaste", "Value=", ENDITEM,
//		"Name=qev[2].field", "Value=prodDrugsAbuse", ENDITEM,
//		"Name=qev[2].operator", "Value=EQUALS", ENDITEM,
//		"Name=qev[2].copyPasteValue", "Value=", ENDITEM,
//		"Name=selectSelectAuto", "Value=", ENDITEM,
//		"Name=selectDate", "Value=03-Jun-2020", ENDITEM,
//		"Name=delimiterqev2", "Value=none", ENDITEM,
//		"Name=qev[2].value", "Value=", ENDITEM,
//		"Name=qev[2].key", "Value=3", ENDITEM,
//		"Name=qev[2].specialKeyValue", "Value=", ENDITEM,
//		"Name=qev[2].isFromCopyPaste", "Value=", ENDITEM,
//		"Name=validQueries", "Value={Query_Id}", ENDITEM,
//		"Name=_event_exactSearch", "Value=", ENDITEM,
//		"Name=_product_exactSearch", "Value=", ENDITEM,
//		"Name=_study_exactSearch", "Value=", ENDITEM,
//		"Name=studyDrugs", "Value=", ENDITEM,
//		"Name=_study_imp", "Value=", ENDITEM,
//		"Name=studyCompounds", "Value=", ENDITEM,
//		"Name=editable", "Value=true", ENDITEM,
//		"Name=seriesId", "Value=", ENDITEM,
//		"Name=version", "Value=", ENDITEM,
//		"Name=save", "Value=", ENDITEM,
//		"Name=_csrf", "Value={CsfrTokenId_2}", ENDITEM,
//		LAST);
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("If-None-Match", 
//		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");
//
//	web_concurrent_start(NULL);
//
//	web_url("en.json_4", 
//		"URL={URL}/reports/assets/i18n/en.json", 
//		"Resource=1", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t134.inf", 
//		LAST);
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("If-None-Match", 
//		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");
//
//	web_url("dataTables_en.json_4", 
//		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
//		"Resource=1", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t135.inf", 
//		LAST);
//
//	web_concurrent_end(NULL);
//
////	web_revert_auto_header("Origin");
////
////	web_add_auto_header("X-Requested-With", 
////		"XMLHttpRequest");
////
////	web_add_auto_header("Accept", 
////		"*/*");
////
////	web_add_auto_header("Sec-Fetch-Dest", 
////		"empty");
////
////	web_add_auto_header("Sec-Fetch-Mode", 
////		"cors");
//
//	web_url("tag_2", 
//		"URL={URL}/reports/tag", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t136.inf", 
//		"Mode=HTTP", 
//		LAST);
//
////	web_add_header("If-None-Match", 
////		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");
//
//	web_concurrent_start(NULL);
//
//	web_url("datepicker.hbs_2", 
//		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
//		"Resource=1", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t137.inf", 
//		LAST);
//
////	web_add_header("If-None-Match", 
////		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");
//
//	web_url("filter_panel.hbs_2", 
//		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
//		"Resource=1", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t138.inf", 
//		LAST);
//
//	web_concurrent_end(NULL);
//
////	web_add_auto_header("Accept", 
////		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("{User_Id}_4", 
//		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591180642131", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t139.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("queries_3", 
//		"URL={URL}/reports/api/queries?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
//		"columns%5B2%5D%5Bdata%5D=name&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=description&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=qualityChecked&columns%5B4%5D%5Bname%5D=&"
//		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=checkUsage&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=owner.fullName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
//		"=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
//		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=tags&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
//		"columns%5B11%5D%5Bdata%5D=&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D={Search_Query}&search%5Bregex%5D=false&searchString={Search_Query}&advancedFilter=false&tableFilter=%7B%7D&direction=desc&sharedwith=&sort=isFavorite&_=1591180642132", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t140.inf", 
//		"Mode=HTTP", 
//		LAST);
//
////	web_revert_auto_header("X-Requested-With");
////
////	web_revert_auto_header("Accept");
////
////	web_add_header("Accept", 
////		"*/*");
////
////	web_url("info_4", 
////		"URL={URL}/reports/stomp/info", 
////		"Resource=0", 
////		"RecContentType=application/json", 
////		"Referer={URL}/reports/query/index", 
////		"Snapshot=t141.inf", 
////		"Mode=HTTP", 
////		LAST);
//
////	web_revert_auto_header("Sec-Fetch-Dest");
////
////	web_revert_auto_header("Sec-Fetch-Mode");
////
////	web_revert_auto_header("Sec-Fetch-Site");
////
////	web_add_header("Cache-Control", 
////		"no-cache");
////
////	web_add_header("Pragma", 
////		"no-cache");
//
////	web_add_header("Upgrade", 
////		"websocket");
////
////	web_url("websocket_4", 
////		"URL={URL}/reports/stomp/376/1uj4ewt4/websocket", 
////		"Resource=0", 
////		"Referer=", 
////		"Snapshot=t142.inf", 
////		"Mode=HTTP", 
////		LAST);
//
//	lr_end_transaction("S09_T06_Click_Preview2",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T07_Edit");

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
		"ParamName=VersionId",
		"LB=name=\"version\" value=\"",
		"RB=\" id=\"version\" />",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);

	web_url("{Query_Id}", 
		"URL={URL}/reports/query/edit/{Query_Id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("underscore-268f41aa82f0dc5a22db29498cf82e98.js", 
		"URL={URL}/reports/assets/backbone/underscore-268f41aa82f0dc5a22db29498cf82e98.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t144.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("backbone-83afc07e6e9896174666287b5b17e98d.js", 
		"URL={URL}/reports/assets/backbone/backbone-83afc07e6e9896174666287b5b17e98d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t145.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("queryBuilder-4017c4701c53826b2919e00b908a338e.js", 
		"URL={URL}/reports/assets/app/query/queryBuilder-4017c4701c53826b2919e00b908a338e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t146.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	web_url("select2-treeview-a19d774562c3ce40252e5c9866e9029b.css", 
		"URL={URL}/reports/assets/select2-treeview-a19d774562c3ce40252e5c9866e9029b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t147.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	web_url("query-32b32fe1008b70e0042a67dec4a7793b.css", 
		"URL={URL}/reports/assets/query-32b32fe1008b70e0042a67dec4a7793b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t148.inf", 
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

	web_url("select2-treeview-a36da271e6071724e73d966828e9bc72.js", 
		"URL={URL}/reports/assets/select2/select2-treeview-a36da271e6071724e73d966828e9bc72.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t149.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_3", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		LAST);



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

	web_url("en.json_5", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t150.inf", 
		LAST);

//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("copyPasteValues-91485a8858562f9b9c987f8ed40139e6.js", 
		"URL={URL}/reports/assets/app/query/copyPasteValues-91485a8858562f9b9c987f8ed40139e6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t152.inf", 
		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_4", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("{User_Id}_5", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591180665599", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("sharedWithValues", 
		"URL={URL}/reports/userRest/sharedWithValues?ids=User_{User_Id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("X-Requested-With");

//	web_url("info_5", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/query/edit/{Query_Id}", 
//		"Snapshot=t157.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-dd87a5cf24b5937b70d0c3c0464d82e3.html\"");

	web_url("polymer.html_2", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("userDefaultReportFieldsOpts", 
		"URL={URL}/reports/query/userDefaultReportFieldsOpts?username=Shiva.Prasad&amp;lastModified=1591180531111en&sourceId=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-mini-3de02a513e44b348d07f3c57a6277c70.html\"");

	web_url("polymer-mini.html_2", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-micro-0c3678e50857ddb532ff7c8ce13cf1be.html\"");

	web_url("polymer-micro.html_2", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("getNumOperators_2", 
		"URL={URL}/reports/query/getNumOperators?_=1591180665601", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators_2", 
		"URL={URL}/reports/query/getValuelessOperators?_=1591180665603", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators_2", 
		"URL={URL}/reports/query/getStringOperators?_=1591180665602", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getAllKeywords", 
		"URL={URL}/reports/query/getAllKeywords?_=1591180665604", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators_2", 
		"URL={URL}/reports/query/getDateOperators?_=1591180665600", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("extraValues", 
		"URL={URL}/reports/query/extraValues?lang=en&_=1591180665605", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		LAST);

	
//	web_revert_auto_header("Accept");
//
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

//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket_5", 
//		"URL={URL}/reports/stomp/323/86obsr_h/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t169.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("possibleValues_7", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1591180665606", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_8", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1591180665607", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_9", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1591180665608", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/edit/{Query_Id}", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");

//	web_custom_request("xhr", 
//		"URL={URL}/reports/stomp/902/z_r2jful/xhr", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/query/edit/{Query_Id}", 
//		"Snapshot=t173.inf", 
//		"Mode=HTTP", 
//		"EncType=", 
//		LAST);
//
//	web_custom_request("xhr_2", 
//		"URL={URL}/reports/stomp/902/z_r2jful/xhr", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/query/edit/{Query_Id}", 
//		"Snapshot=t174.inf", 
//		"Mode=HTTP", 
//		"EncType=", 
//		LAST);
	
	web_concurrent_end(NULL);

	lr_end_transaction("S09_T07_Edit",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T08_Update");

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
		"Text=Query {Search_Query} updated",
		LAST);

	web_submit_data("update",
		"Action={URL}/reports/query/update?_csrf={CsfrTokenId_2}",
		"Method=POST",
		"EncType=multipart/form-data",
		"RecContentType=text/html",
		"Referer={URL}/reports/query/edit/{Query_Id}",
		"Snapshot=t176.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=owner", "Value={User_Id}", ENDITEM,
		"Name=name", "Value={Search_Query}", ENDITEM,
		"Name=description", "Value={Description}", ENDITEM,
		"Name=tags", "Value=Regulatory Needs", ENDITEM,
		"Name=sharedWith", "Value=User_{User_Id}", ENDITEM,
		"Name=_qualityChecked", "Value=", ENDITEM,
		"Name=_nonValidCases", "Value=", ENDITEM,
		"Name=nonValidCases", "Value=false", ENDITEM,
		"Name=_icsrPadderAgencyCases", "Value=", ENDITEM,
		"Name=icsrPadderAgencyCases", "Value=false", ENDITEM,
		"Name=relatedListednessDSSelect", "Value=< Unspecified >", ENDITEM,
		"Name=selectField", "Value=", ENDITEM,
		"Name=selectOperator", "Value=", ENDITEM,
		"Name=selectValue", "Value=", ENDITEM,
		"Name=selectSelectAuto", "Value=", ENDITEM,
		"Name=selectDate", "Value=03-Jun-2020", ENDITEM,
		"Name=selectRptField", "Value=", ENDITEM,
		"Name=_isPOIInput", "Value=", ENDITEM,
		"Name=_isRptField", "Value=", ENDITEM,
		"Name=delimiter", "Value=none", ENDITEM,
		"Name=JSONQuery", "Value={\"all\":{\"containerGroups\":[ {\"expressions\":[ {\"index\":\"0\",\"field\":\"caseRoutingPvrFollowupNum\",\"op\":\"EQUALS\",\"value\":\"\",\"key\":\"1\"}, {\"index\":\"1\",\"field\":\"patInfoPostalCode\",\"op\":\"EQUALS\",\"value\":\"\",\"key\":\"2\"}, {\"index\":\"2\",\"field\":\"prodDrugsAbuse\",\"op\":\"EQUALS\",\"value\":\"\",\"key\":\"3\"}],\"keyword\":\"and\"} ] } ,\"blankParameters\":[{\"key\":1,\"field\":\"caseRoutingPvrFollowupNum\",\"op\":\"EQUALS\",\"value\":\"\"},{\"key\":2,\"field\":\"patInfoPostalCode\",\"op\":\"EQUALS\",\"value\":\"\"},{\"key\":3,\"field\":\"prodDrugsAbuse\",\"op\":\"EQUALS\",\"value\":\"\"}]}", ENDITEM,
		"Name=hasBlanks", "Value=true", ENDITEM,
		"Name=selectField", "Value=caseRoutingPvrFollowupNum", ENDITEM,
		"Name=selectOperator", "Value=EQUALS", ENDITEM,
		"Name=selectValue", "Value=", ENDITEM,
		"Name=selectSelectAuto", "Value=", ENDITEM,
		"Name=selectDate", "Value=03-Jun-2020", ENDITEM,
		"Name=selectRptField", "Value=", ENDITEM,
		"Name=_isPOIInput", "Value=", ENDITEM,
		"Name=_isRptField", "Value=", ENDITEM,
		"Name=selectField", "Value=patInfoPostalCode", ENDITEM,
		"Name=selectOperator", "Value=EQUALS", ENDITEM,
		"Name=selectValue", "Value=", ENDITEM,
		"Name=selectSelectAuto", "Value=", ENDITEM,
		"Name=selectDate", "Value=03-Jun-2020", ENDITEM,
		"Name=selectRptField", "Value=", ENDITEM,
		"Name=_isPOIInput", "Value=", ENDITEM,
		"Name=_isRptField", "Value=", ENDITEM,
		"Name=selectField", "Value=prodDrugsAbuse", ENDITEM,
		"Name=selectOperator", "Value=EQUALS", ENDITEM,
		"Name=selectValue", "Value=", ENDITEM,
		"Name=selectSelect", "Value=", ENDITEM,
		"Name=selectSelectAuto", "Value=", ENDITEM,
		"Name=selectDate", "Value=03-Jun-2020", ENDITEM,
		"Name=selectRptField", "Value=", ENDITEM,
		"Name=_isPOIInput", "Value=", ENDITEM,
		"Name=_isRptField", "Value=", ENDITEM,
		"Name=_reassessForProduct", "Value=", ENDITEM,
		"Name=_event_exactSearch", "Value=", ENDITEM,
		"Name=_product_exactSearch", "Value=", ENDITEM,
		"Name=_study_exactSearch", "Value=", ENDITEM,
		"Name=studyDrugs", "Value=", ENDITEM,
		"Name=_study_imp", "Value=", ENDITEM,
		"Name=studyCompounds", "Value=", ENDITEM,
		"Name=selectQuery", "Value=", ENDITEM,
		"Name=customSQLQuery", "Value=", ENDITEM,
		"Name=queryType", "Value=QUERY_BUILDER", ENDITEM,
		"Name=version", "Value={VersionId}", ENDITEM,
		"Name=id", "Value={Query_Id}", ENDITEM,
		"Name=edit", "Value=true", ENDITEM,
		"Name=_csrf", "Value={CsfrTokenId_2}", ENDITEM,
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_concurrent_start(NULL);

	web_url("en.json_6", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t177.inf", 
		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

//	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_5", 
//		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
//		"Resource=0", 
//		"Referer={URL}/reports/query/view/{Query_Id}", 
//		"Snapshot=t178.inf", 
//		"Mode=HTTP", 
//		LAST);




//
//	web_revert_auto_header("Origin");
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

	web_url("{User_Id}_6", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591180698285", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

//	web_url("info_6", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/query/view/{Query_Id}", 
//		"Snapshot=t181.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_6", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("getNumOperators_3", 
		"URL={URL}/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators_3", 
		"URL={URL}/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators_3", 
		"URL={URL}/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators_3", 
		"URL={URL}/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getAllKeywords_2", 
		"URL={URL}/reports/query/getAllKeywords", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-dd87a5cf24b5937b70d0c3c0464d82e3.html\"");

	web_url("polymer.html_3", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("extraValues_2", 
		"URL={URL}/reports/query/extraValues?lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_10", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1591180698286", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_11", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1591180698287", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_12", 
		"URL={URL}/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1591180698288", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("Accept");
//
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

//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket_6", 
//		"URL={URL}/reports/stomp/965/mf49b2w_/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t194.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-mini-3de02a513e44b348d07f3c57a6277c70.html\"");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");

	web_url("polymer-mini.html_3", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-micro-0c3678e50857ddb532ff7c8ce13cf1be.html\"");

	web_url("polymer-micro.html_3", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);
	web_concurrent_end(NULL);

	lr_end_transaction("S09_T08_Update",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T09_Copy");

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

/*Correlation comment - Do not change!  Original value='37402' Name ='Query_Id_2' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=Query_Id_2",
		"LB={'selectedQuery': ",
		"RB=}",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
	//	"RequestUrl=*/{Query_Id_2}*",
		LAST);

	web_reg_find("Search=Body",
		"Text=Copy of",
		LAST);

	web_url("{Query_Id}_2", 
		"URL={URL}/reports/query/copy/{Query_Id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/query/view/{Query_Id}", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_concurrent_start(NULL);

	web_url("en.json_7",
		"URL={URL}/reports/assets/i18n/en.json",
		"Resource=1",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t198.inf",
		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");
////
//	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_7",
//		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html",
//		"Resource=0",
//		"Referer={URL}/reports/query/view/{Query_Id_2}",
//		"Snapshot=t199.inf",
//		"Mode=HTTP",
//		LAST);

//	
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

	web_url("{User_Id}_7",
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591180724932",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t200.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

//	web_url("info_7",
//		"URL={URL}/reports/stomp/info",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/query/view/{Query_Id_2}",
//		"Snapshot=t201.inf",
//		"Mode=HTTP",
//		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_8",
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html",
		"Resource=0",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t202.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("getStringOperators_4",
		"URL={URL}/reports/query/getStringOperators",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t203.inf",
		"Mode=HTTP",
		LAST);

	web_url("getNumOperators_4",
		"URL={URL}/reports/query/getNumOperators",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t204.inf",
		"Mode=HTTP",
		LAST);

	web_url("getDateOperators_4",
		"URL={URL}/reports/query/getDateOperators",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t205.inf",
		"Mode=HTTP",
		LAST);

	web_url("getValuelessOperators_4",
		"URL={URL}/reports/query/getValuelessOperators",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t206.inf",
		"Mode=HTTP",
		LAST);

	web_url("getAllKeywords_3",
		"URL={URL}/reports/query/getAllKeywords",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t207.inf",
		"Mode=HTTP",
		LAST);

//	web_revert_auto_header("X-Requested-With");
//
//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-dd87a5cf24b5937b70d0c3c0464d82e3.html\"");
//
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("polymer.html_4",
		"URL={URL}/reports/assets/plugin/dictionary/polymer.html",
		"Resource=0",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t208.inf",
		"Mode=HTTP",
		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-mini-3de02a513e44b348d07f3c57a6277c70.html\"");

	web_url("polymer-mini.html_4",
		"URL={URL}/reports/assets/plugin/dictionary/polymer-mini.html",
		"Resource=0",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t209.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("extraValues_3",
		"URL={URL}/reports/query/extraValues?lang=en",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t210.inf",
		"Mode=HTTP",
		LAST);

	web_url("possibleValues_13",
		"URL={URL}/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1591180724933",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t211.inf",
		"Mode=HTTP",
		LAST);

	web_url("possibleValues_14",
		"URL={URL}/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1591180724934",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t212.inf",
		"Mode=HTTP",
		LAST);

	web_url("possibleValues_15",
		"URL={URL}/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1591180724935",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t213.inf",
		"Mode=HTTP",
		LAST);

//	web_revert_auto_header("Accept");
//
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
//		"websocket");

//	web_url("websocket_7", 
//		"URL={URL}/reports/stomp/206/no984m2v/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t214.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-micro-0c3678e50857ddb532ff7c8ce13cf1be.html\"");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");

	web_url("polymer-micro.html_4",
		"URL={URL}/reports/assets/plugin/dictionary/polymer-micro.html",
		"Resource=0",
		"Referer={URL}/reports/query/view/{Query_Id_2}",
		"Snapshot=t215.inf",
		"Mode=HTTP",
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("S09_T09_Copy",LR_AUTO);

	lr_think_time(3);

//	lr_start_transaction("S09_T10_Run_Query");
//
////	web_add_header("Accept", 
////		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
////
////	web_add_header("Sec-Fetch-Mode", 
////		"navigate");
////
////	web_add_header("Sec-Fetch-Dest", 
////		"document");
////
////	web_add_header("Sec-Fetch-User", 
////		"?1");
////
////	web_add_header("Upgrade-Insecure-Requests", 
////		"1");
//
//	web_url("create",
//		"URL={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Resource=0",
//		"RecContentType=text/html",
//		"Referer={URL}/reports/query/view/{Query_Id_2}",
//		"Snapshot=t216.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_concurrent_start(NULL);
//
//	web_url("scheduler-293bc77ad497c01ec53bcb2f97095e6b.js",
//		"URL={URL}/reports/assets/app/scheduler-293bc77ad497c01ec53bcb2f97095e6b.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t217.inf",
//		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_url("emailConfiguration-59c065e4239f87a883e747de81101001.js",
//		"URL={URL}/reports/assets/app/configuration/emailConfiguration-59c065e4239f87a883e747de81101001.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t218.inf",
//		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_url("templateQueries-b30e257e7bf112701696b0edaac3908d.js",
//		"URL={URL}/reports/assets/app/configuration/templateQueries-b30e257e7bf112701696b0edaac3908d.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t220.inf",
//		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_url("deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js",
//		"URL={URL}/reports/assets/app/configuration/deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t221.inf",
//		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");
//
//	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_9",
//		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html",
//		"Resource=0",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t222.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_concurrent_end(NULL);
//
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
//
//	web_url("en.json_8",
//		"URL={URL}/reports/assets/i18n/en.json",
//		"Resource=1",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t219.inf",
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_url("emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js",
//		"URL={URL}/reports/assets/app/emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t223.inf",
//		LAST);
//
//	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js",
//		"URL={URL}/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t224.inf",
//		LAST);
//
//	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js",
//		"URL={URL}/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t225.inf",
//		LAST);
//
//	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js",
//		"URL={URL}/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t226.inf",
//		LAST);
//
//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_10",
//		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html",
//		"Resource=0",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t227.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("getQueryNameDescription_3",
//		"URL={URL}/reports/queryRest/getQueryNameDescription?id={Query_Id_2}",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t228.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("allEmails",
//		"URL={URL}/reports/email/allEmails",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t229.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("allEmailsForCC",
//		"URL={URL}/reports/email/allEmailsForCC?emails=",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t230.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("fetchDateRangeTypesForDatasource",
//		"URL={URL}/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t231.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("fetchEvaluateCaseDatesForDatasource",
//		"URL={URL}/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=true&dataSourceId=6594",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t232.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("fetchEvaluateCaseDateSubmissionForDatasource",
//		"URL={URL}/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t233.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("getDateOperators_5",
//		"URL={URL}/reports/query/getDateOperators",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t234.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("getStringOperators_5",
//		"URL={URL}/reports/query/getStringOperators",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t235.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("getNumOperators_5",
//		"URL={URL}/reports/query/getNumOperators",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t236.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("getValuelessOperators_5",
//		"URL={URL}/reports/query/getValuelessOperators",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t237.inf",
//		"Mode=HTTP",
//		LAST);
//
//	
//
//	web_url("{User_Id}_8",
//		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591180760450",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t239.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");
////
////	web_url("info_8",
////		"URL={URL}/reports/stomp/info",
////		"Resource=0",
////		"RecContentType=application/json",
////		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
////		"Snapshot=t240.inf",
////		"Mode=HTTP",
////		LAST);
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("sharedWithValues_2",
//		"URL={URL}/reports/userRest/sharedWithValues?ids=User_{User_Id}",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t241.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-dd87a5cf24b5937b70d0c3c0464d82e3.html\"");
//
//	web_url("polymer.html_5",
//		"URL={URL}/reports/assets/plugin/dictionary/polymer.html",
//		"Resource=0",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t242.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("getQueryNameDescription_4",
//		"URL={URL}/reports/queryRest/getQueryNameDescription?id={Query_Id_2}",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t243.inf",
//		"Mode=HTTP",
//		LAST);
//
//
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("queryExpressionValuesForQuery_2",
//		"URL={URL}/reports/query/queryExpressionValuesForQuery?queryId={Query_Id_2}",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t245.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("customSQLValuesForQuery_2",
//		"URL={URL}/reports/query/customSQLValuesForQuery?queryId={Query_Id_2}",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t246.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("queryExpressionValuesForQuerySet_2",
//		"URL={URL}/reports/query/queryExpressionValuesForQuerySet?queryId={Query_Id_2}",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t247.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-mini-3de02a513e44b348d07f3c57a6277c70.html\"");
//
//	web_url("polymer-mini.html_5",
//		"URL={URL}/reports/assets/plugin/dictionary/polymer-mini.html",
//		"Resource=0",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t248.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("reportFieldsForQueryValue_4",
//		"URL={URL}/reports/queryRest/reportFieldsForQueryValue?name=patInfoPostalCode",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t249.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("reportFieldsForQueryValue_5",
//		"URL={URL}/reports/queryRest/reportFieldsForQueryValue?name=caseRoutingPvrFollowupNum",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t250.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("reportFieldsForQueryValue_6",
//		"URL={URL}/reports/queryRest/reportFieldsForQueryValue?name=prodDrugsAbuse",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t251.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/polymer-micro-0c3678e50857ddb532ff7c8ce13cf1be.html\"");
//
//	web_url("polymer-micro.html_5",
//		"URL={URL}/reports/assets/plugin/dictionary/polymer-micro.html",
//		"Resource=0",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t252.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("possibleValues_16",
//		"URL={URL}/reports/query/possibleValues?lang=en&field=patInfoPostalCode",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t253.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("theme.min.js",
//		"URL={URL}/reports/assets/tinymce/themes/modern/theme.min.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t254.inf",
//		LAST);
//
//	web_url("possibleValues_17",
//		"URL={URL}/reports/query/possibleValues?lang=en&field=patInfoPostalCode",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t255.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_revert_auto_header("Accept");
//
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
//		"websocket");
////
////	web_url("websocket_8", 
////		"URL={URL}/reports/stomp/130/ju6milf5/websocket", 
////		"Resource=0", 
////		"Referer=", 
////		"Snapshot=t256.inf", 
////		"Mode=HTTP", 
////		LAST);
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
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("possibleValues_18",
//		"URL={URL}/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t257.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("possibleValues_19",
//		"URL={URL}/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t258.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("possibleValues_20",
//		"URL={URL}/reports/query/possibleValues?lang=en&field=prodDrugsAbuse",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t259.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("possibleValues_21",
//		"URL={URL}/reports/query/possibleValues?lang=en&field=prodDrugsAbuse",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t260.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_concurrent_start(NULL);
//
//	web_url("plugin.min.js",
//		"URL={URL}/reports/assets/tinymce/plugins/image/plugin.min.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t261.inf",
//		LAST);
//
//	web_url("plugin.min.js_2",
//		"URL={URL}/reports/assets/tinymce/plugins/table/plugin.min.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t262.inf",
//		LAST);
//
//	web_url("plugin.min.js_3",
//		"URL={URL}/reports/assets/tinymce/plugins/link/plugin.min.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t263.inf",
//		LAST);
//
//	web_url("plugin.min.js_4",
//		"URL={URL}/reports/assets/tinymce/plugins/imagetools/plugin.min.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t264.inf",
//		LAST);
//
//	web_url("plugin.min.js_5",
//		"URL={URL}/reports/assets/tinymce/plugins/code/plugin.min.js",
//		"Resource=1",
//		"RecContentType=application/javascript",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t265.inf",
//		LAST);
//
//	web_url("skin.min.css",
//		"URL={URL}/reports/assets/tinymce/skins/lightgray/skin.min.css",
//		"Resource=1",
//		"RecContentType=text/css",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t266.inf",
//		LAST);
//
//	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css",
//		"URL={URL}/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css",
//		"Resource=1",
//		"RecContentType=text/css",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t267.inf",
//		LAST);
//
//	web_url("content.min.css",
//		"URL={URL}/reports/assets/tinymce/skins/lightgray/content.min.css",
//		"Resource=1",
//		"RecContentType=text/css",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t268.inf",
//		LAST);
//
//
//	web_concurrent_end(NULL);
//
//	lr_end_transaction("S09_T10_Run_Query",LR_AUTO);

	lr_think_time(3);

//	lr_start_transaction("S09_T11_Save_Run");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("keep-alive",
//		"URL={URL}/reports/keep-alive?_=1591180760451",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t270.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("getTemplateList",
//		"URL={URL}/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1591180760452",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t271.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("customSQLValuesForTemplate",
//		"URL={URL}/reports/template/customSQLValuesForTemplate?templateId=24615&_=1591180760453",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t272.inf",
//		"Mode=HTTP",
//		LAST);
//
//	web_url("poiInputsForTemplate",
//		"URL={URL}/reports/template/poiInputsForTemplate?templateId=24615&_=1591180760454",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/reports/configuration/create?selectedQuery={Query_Id_2}",
//		"Snapshot=t273.inf",
//		"Mode=HTTP",
//		LAST);
//
////	web_revert_auto_header("X-Requested-With");
////
////	web_add_auto_header("Accept", 
////		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
////
////	web_add_auto_header("Sec-Fetch-Mode", 
////		"navigate");
////
////	web_add_auto_header("Sec-Fetch-Dest", 
////		"document");
////
////	web_add_header("Cache-Control", 
////		"max-age=0");
////
////	web_add_header("Sec-Fetch-User", 
////		"?1");
////
////	web_add_header("Upgrade-Insecure-Requests", 
////		"1");
//
//	web_reg_find("Search=Body",
//		"Text=report has been scheduled and will be delivered",
//		LAST);
//
//	web_submit_data("run",
//		"Action={URL}/reports/configuration/run",
//		"Method=POST",
//		"RecContentType=text/html",
//		"Referer={URL}/reports/configuration/create?selectedQuery=37402",
//		"Snapshot=t274.inf",
//		"Mode=HTTP",
//		ITEMDATA,
//		"Name=owner", "Value={User_Id}", ENDITEM,
//		"Name=productSelection", "Value=", ENDITEM,
//		"Name=_suspectProduct", "Value=", ENDITEM,
//		"Name=studySelection", "Value=", ENDITEM,
//		"Name=eventSelection", "Value=", ENDITEM,
//		"Name=_limitPrimaryPath", "Value=", ENDITEM,
//		"Name=JSONExpressionValues", "Value=", ENDITEM,
//		"Name=dateRangeType.id", "Value=1", ENDITEM,
//		"Name=sourceProfile.id", "Value=6594", ENDITEM,
//		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", ENDITEM,
//		"Name=evaluateDateAsSubmissionDate", "Value=LATEST_VERSION", ENDITEM,
//		"Name=evaluateDateAs", "Value=LATEST_VERSION", ENDITEM,
//		"Name=asOfVersionDate", "Value=", ENDITEM,
//		"Name=useCaseSeries", "Value=", ENDITEM,
//		"Name=_excludeFollowUp", "Value=", ENDITEM,
//		"Name=_includeLockedVersion", "Value=", ENDITEM,
//		"Name=includeLockedVersion", "Value=on", ENDITEM,
//		"Name=_includeAllStudyDrugsCases", "Value=", ENDITEM,
//		"Name=_excludeNonValidCases", "Value=", ENDITEM,
//		"Name=excludeNonValidCases", "Value=on", ENDITEM,
//		"Name=_includeMedicallyConfirmedCases", "Value=", ENDITEM,
//		"Name=_includeNonSignificantFollowUp", "Value=", ENDITEM,
//		"Name=_event_exactSearch", "Value=", ENDITEM,
//		"Name=_product_exactSearch", "Value=", ENDITEM,
//		"Name=_study_exactSearch", "Value=", ENDITEM,
//		"Name=studyDrugs", "Value=", ENDITEM,
//		"Name=_study_imp", "Value=", ENDITEM,
//		"Name=studyCompounds", "Value=", ENDITEM,
//		"Name=templateQueries[0].version", "Value=", ENDITEM,
//		"Name=templateQueries[0].id", "Value=", ENDITEM,
//		"Name=templateQueries[0].dynamicFormEntryDeleted", "Value=false", ENDITEM,
//		"Name=templateQueries[0].new", "Value=true", ENDITEM,
//		"Name=templateQueries[0].template", "Value=24615", ENDITEM,
//		"Name=templateQueries[0].header", "Value=", ENDITEM,
//		"Name=templateQueries[0].title", "Value=", ENDITEM,
//		"Name=templateQueries[0].footer", "Value=", ENDITEM,
//		"Name=templateQueries[0]._headerProductSelection", "Value=", ENDITEM,
//		"Name=templateQueries[0]._headerDateRange", "Value=", ENDITEM,
//		"Name=templateQueries[0]._displayMedDraVersionNumber", "Value=", ENDITEM,
//		"Name=templateQueries[0]._privacyProtected", "Value=", ENDITEM,
//		"Name=templateQueries[0]._blindProtected", "Value=", ENDITEM,
//		"Name=templateQueries[0].query", "Value=37402", ENDITEM,
//		"Name=templateQueries[0].queryLevel", "Value=CASE", ENDITEM,
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUMULATIVE", ENDITEM,
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM,
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM,
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM,
//		"Name=templateQuery0.qev[0].field", "Value=caseRoutingPvrFollowupNum", ENDITEM,
//		"Name=templateQuery0.qev[0].operator", "Value=EQUALS", ENDITEM,
//		"Name=templateQuery0.qev[0].value", "Value=", ENDITEM,
//		"Name=selectSelectAuto", "Value=", ENDITEM,
//		"Name=selectDate", "Value=03-Jun-2020", ENDITEM,
//		"Name=templateQuery0.qev[0].key", "Value=1", ENDITEM,
//		"Name=templateQuery0.qev[0].specialKeyValue", "Value=", ENDITEM,
//		"Name=templateQuery0.qev[0].isFromCopyPaste", "Value=", ENDITEM,
//		"Name=templateQuery0.qev[1].field", "Value=patInfoPostalCode", ENDITEM,
//		"Name=templateQuery0.qev[1].operator", "Value=EQUALS", ENDITEM,
//		"Name=templateQuery0.qev[1].value", "Value=", ENDITEM,
//		"Name=selectSelectAuto", "Value=", ENDITEM,
//		"Name=selectDate", "Value=03-Jun-2020", ENDITEM,
//		"Name=selectSelect", "Value=", ENDITEM,
//		"Name=templateQuery0.qev[1].key", "Value=2", ENDITEM,
//		"Name=templateQuery0.qev[1].specialKeyValue", "Value=", ENDITEM,
//		"Name=templateQuery0.qev[1].isFromCopyPaste", "Value=", ENDITEM,
//		"Name=templateQuery0.qev[2].field", "Value=prodDrugsAbuse", ENDITEM,
//		"Name=templateQuery0.qev[2].operator", "Value=EQUALS", ENDITEM,
//		"Name=templateQuery0.qev[2].copyPasteValue", "Value=", ENDITEM,
//		"Name=selectSelectAuto", "Value=", ENDITEM,
//		"Name=selectDate", "Value=03-Jun-2020", ENDITEM,
//		"Name=delimitertemplateQuery0qev2", "Value=none", ENDITEM,
//		"Name=templateQuery0.qev[2].value", "Value=", ENDITEM,
//		"Name=templateQuery0.qev[2].key", "Value=3", ENDITEM,
//		"Name=templateQuery0.qev[2].specialKeyValue", "Value=", ENDITEM,
//		"Name=templateQuery0.qev[2].isFromCopyPaste", "Value=", ENDITEM,
//		"Name=templateQueries[0].validQueries", "Value=37402", ENDITEM,
//		"Name=reportName", "Value={Copy_ReportName}", ENDITEM,
//		"Name=description", "Value={Copy_ReportName}", ENDITEM,
//		"Name=_qualityChecked", "Value=", ENDITEM,
//		"Name=_isTemplate", "Value=", ENDITEM,
//		"Name=sharedWith", "Value=User_{User_Id}", ENDITEM,
//		"Name=TimeZoneSelectlist", "Value=", ENDITEM,
//		"Name=intervalSelectlist", "Value=none", ENDITEM,
//		"Name=monthlySelectlist", "Value=1", ENDITEM,
//		"Name=repeat-monthly", "Value=bysetpos", ENDITEM,
//		"Name=monthlySelectlist", "Value=1", ENDITEM,
//		"Name=monthlySelectlist", "Value=SU", ENDITEM,
//		"Name=repeat-yearly", "Value=bymonthday", ENDITEM,
//		"Name=monthlySelectlist", "Value=1", ENDITEM,
//		"Name=monthlySelectlist", "Value=1", ENDITEM,
//		"Name=yearlyDateSelectlist", "Value=1", ENDITEM,
//		"Name=yearlyDaySelectlist", "Value=SU", ENDITEM,
//		"Name=yearlyDaySelectlist", "Value=1", ENDITEM,
//		"Name=EndSelectlist", "Value=never", ENDITEM,
//		"Name=isEnabled", "Value=true", ENDITEM,
//		"Name=schedulerTime", "Value={SchDate} {SchTime1}", ENDITEM,
//		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"{SchDate}T{SchTime2}Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n"
//		"                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM,
//		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM,
//		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM,
//		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
//		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
//		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
//		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
//		"Name=deliveryOption.additionalAttachments", "Value=", ENDITEM,
//		"Name=ccValue", "Value=", ENDITEM,
//		"Name=subjectValue", "Value=", ENDITEM,
//		"Name=emailConfiguration.subject", "Value=", ENDITEM,
//		"Name=bodyValue", "Value=", ENDITEM,
//		"Name=emailConfiguration.body", "Value=", ENDITEM,
//		"Name=emailConfiguration._noEmailOnNoData", "Value=", ENDITEM,
//		"Name=noEmailOnNoDataValue", "Value=", ENDITEM,
//		"Name=emailConfiguration.pageOrientation", "Value=PORTRAIT", ENDITEM,
//		"Name=pageOrientationValue", "Value=PORTRAIT", ENDITEM,
//		"Name=emailConfiguration.paperSize", "Value=LETTER", ENDITEM,
//		"Name=paperSizeValue", "Value=LETTER", ENDITEM,
//		"Name=emailConfiguration.sensitivityLabel", "Value=SENSITIVE", ENDITEM,
//		"Name=sensitivityLabelValue", "Value=SENSITIVE", ENDITEM,
//		"Name=emailConfiguration._showPageNumbering", "Value=", ENDITEM,
//		"Name=emailConfiguration.showPageNumbering", "Value=on", ENDITEM,
//		"Name=showPageNumberingValue", "Value=true", ENDITEM,
//		"Name=emailConfiguration._showCompanyLogo", "Value=", ENDITEM,
//		"Name=emailConfiguration.showCompanyLogo", "Value=on", ENDITEM,
//		"Name=showCompanyLogoValue", "Value=true", ENDITEM,
//		"Name=emailConfiguration._excludeCriteriaSheet", "Value=", ENDITEM,
//		"Name=excludeCriteriaSheetValue", "Value=false", ENDITEM,
//		"Name=emailConfiguration._excludeAppendix", "Value=", ENDITEM,
//		"Name=excludeAppendixValue", "Value=false", ENDITEM,
//		"Name=emailConfiguration._excludeComments", "Value=", ENDITEM,
//		"Name=excludeCommentsValue", "Value=false", ENDITEM,
//		"Name=emailConfiguration._excludeLegend", "Value=", ENDITEM,
//		"Name=excludeLegendValue", "Value=false", ENDITEM,
//		"Name=emailTemplateName", "Value=", ENDITEM,
//		"Name=emailTemplateDescription", "Value=", ENDITEM,
//		"Name=templateBlanks", "Value=false", ENDITEM,
//		"Name=queryBlanks", "Value=true", ENDITEM,
//		"Name=schedulerFrom", "Value=createPage", ENDITEM,
//		"Name=editable", "Value=true", ENDITEM,
//		"Name=blankValuesJSON", "Value=", ENDITEM,
//		"Name=_csrf", "Value={CsfrTokenId_2}", ENDITEM,
//		LAST);
//
//	web_concurrent_start(NULL);
//
//	web_url("executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
//		"URL={URL}/reports/assets/executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
//		"Resource=1", 
//		"RecContentType=text/css", 
//		"Referer={URL}/reports/executionStatus/list", 
//		"Snapshot=t275.inf", 
//		LAST);
//
//	web_url("executionStatus-abc243051811af7ce55db349117755f2.js", 
//		"URL={URL}/reports/assets/app/configuration/executionStatus-abc243051811af7ce55db349117755f2.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/reports/executionStatus/list", 
//		"Snapshot=t276.inf", 
//		LAST);
//
//	web_concurrent_end(NULL);
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("If-None-Match", 
//		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");
//
//	web_concurrent_start(NULL);
//
//	web_url("en.json_9", 
//		"URL={URL}/reports/assets/i18n/en.json", 
//		"Resource=1", 
//		"Referer={URL}/reports/executionStatus/list", 
//		"Snapshot=t277.inf", 
//		LAST);
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("If-None-Match", 
//		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");
//
//	web_url("dataTables_en.json_5", 
//		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
//		"Resource=1", 
//		"Referer={URL}/reports/executionStatus/list", 
//		"Snapshot=t278.inf", 
//		LAST);
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("If-None-Match", 
//		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");
//
//	web_url("datepicker.hbs_3", 
//		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
//		"Resource=1", 
//		"Referer={URL}/reports/executionStatus/list", 
//		"Snapshot=t279.inf", 
//		LAST);
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("If-None-Match", 
//		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");
//
//	web_url("filter_panel.hbs_3", 
//		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
//		"Resource=1", 
//		"Referer={URL}/reports/executionStatus/list", 
//		"Snapshot=t280.inf", 
//		LAST);
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
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("{User_Id}_9", 
//		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591180852281", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/executionStatus/list", 
//		"Snapshot=t282.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("executionStatus", 
//		"URL={URL}/reports/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=reportName&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=periodicReportType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
//		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=version&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=executionStatus&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=false&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
//		"columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=runDate&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionTime&columns%5B6%5D%5Bname%5D=&"
//		"columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=frequency&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=sharedWith&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D="
//		"false&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=deliveryMedia&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=false&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=runDate&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
//		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=5&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&searchString=&direction=desc&sort=runDate&status=GENERATING&_=1591180852282", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/executionStatus/list", 
//		"Snapshot=t283.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//
//
//	//web_concurrent_end(NULL);
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_revert_auto_header("Accept");
//
//	web_add_header("Accept", 
//		"*/*");
//
////	web_url("info_9", 
////		"URL={URL}/reports/stomp/info", 
////		"Resource=0", 
////		"RecContentType=application/json", 
////		"Referer={URL}/reports/executionStatus/list", 
////		"Snapshot=t286.inf", 
////		"Mode=HTTP", 
////		LAST);
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
//
//	web_add_header("Upgrade", 
//		"websocket");
//
////	web_url("websocket_9", 
////		"URL={URL}/reports/stomp/760/j_otz9c8/websocket", 
////		"Resource=0", 
////		"Referer=", 
////		"Snapshot=t287.inf", 
////		"Mode=HTTP", 
////		LAST);
//
//	lr_end_transaction("S09_T11_Save_Run",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T11_NavigateQueries_QueryLibrary");

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

	web_url("index_3", 
		"URL={URL}/reports/query/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t288.inf", 
		"Mode=HTTP", 
		LAST);

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

	web_concurrent_start(NULL);

	web_url("en.json_10", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t289.inf", 
		LAST);

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

	web_url("dataTables_en.json_6", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t290.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("tag_3", 
		"URL={URL}/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t291.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");

	web_concurrent_start(NULL);

	web_url("datepicker.hbs_4", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t292.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");

	web_url("filter_panel.hbs_4", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t293.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("{User_Id}_10", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591180880549", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

//	web_url("info_10", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t295.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("queries_4", 
		"URL={URL}/reports/api/queries?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=name&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=description&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=qualityChecked&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=checkUsage&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=owner.fullName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
		"=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=tags&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D={Search_Query}&search%5Bregex%5D=false&searchString={Search_Query}&advancedFilter=false&tableFilter=%7B%7D&direction=desc&sharedwith=&sort=isFavorite&_=1591180880550", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t296.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

//	web_url("websocket_10", 
//		"URL={URL}/reports/stomp/651/o1xct4cs/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t297.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("S09_T11_NavigateQueries_QueryLibrary",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

//	web_custom_request("xhr_3", 
//		"URL={URL}/reports/stomp/902/z_r2jful/xhr", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t298.inf", 
//		"Mode=HTTP", 
//		"EncType=", 
//		LAST);
//
//	web_custom_request("xhr_4", 
//		"URL={URL}/reports/stomp/902/z_r2jful/xhr", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/query/index", 
//		"Snapshot=t299.inf", 
//		"Mode=HTTP", 
//		"EncType=", 
//		LAST);

	lr_start_transaction("S09_T13_ClearFilter");

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("queries_5", 
		"URL={URL}/reports/api/queries?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=name&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=description&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=qualityChecked&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=checkUsage&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=owner.fullName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
		"=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=tags&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&advancedFilter=false&tableFilter=%7B%7D&direction=desc&sharedwith=&sort=isFavorite&_=1591180880551", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t300.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_T13_ClearFilter",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T14_Logout");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	web_url("logout", 
		"URL={URL}/reports/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/query/index", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_T14_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}