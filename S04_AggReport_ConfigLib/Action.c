Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_cleanup_auto_headers();
	
	web_cleanup_cookies();
	
	web_set_max_html_param_len("9999999");
	
	lr_start_transaction("S04_T01_OpenApplication");

//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Accept-Encoding", 
//		"gzip, deflate, br");
//
//	web_add_auto_header("Accept-Language", 
//		"en-US,en;q=0.9");
//
////	web_add_header("Origin", 
////		"https://www.google.com");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_header("Sec-Fetch-Dest", 
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

/*Correlation comment - Do not change!  Original value='90186688-c927-4c86-83dd-4a073a9aa840' Name ='CsrfTokenId' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=CsrfTokenId",
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

	web_revert_auto_header("Accept-Language");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	
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

	web_url("cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"URL={URL}/reports/assets/cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t6.inf", 
		LAST);

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
		"Snapshot=t7.inf", 
		LAST);

	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL={URL}/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
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

	//web_add_header("Origin", 
	//	"{URL}");

	

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/reports/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t10.inf", 
		LAST);

	
	web_concurrent_end(NULL);


	lr_end_transaction("S04_T01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S04_T02_Login");

	web_revert_auto_header("Accept-Language");

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

/*Correlation comment - Do not change!  Original value='2a931ffb-4342-4fcd-8cac-4e3e027c36b4' Name ='CsrfTokenId_2' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=CsrfTokenId_2",
		"LB= content=\"",
		"RB=\"/>\n        ",
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
		"Snapshot=t22.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=username", "Value={UserName}", ENDITEM,
		"Name=password", "Value={Password}", ENDITEM,
		"Name=_csrf", "Value={CsrfTokenId}", ENDITEM,
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"URL={URL}/reports/assets/theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL={URL}/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL={URL}/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t26.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL={URL}/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t27.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL={URL}/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"URL={URL}/reports/assets/app/rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t29.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"URL={URL}/reports/assets/app/dashboard/addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t30.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"URL={URL}/reports/assets/app/dashboard/dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"URL={URL}/reports/assets/app/actionItem/actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t32.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t33.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t34.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"URL={URL}/reports/assets/app/calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t35.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL={URL}/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t36.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t37.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t38.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL={URL}/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t40.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"URL={URL}/reports/assets/fuelux/fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t41.inf", 
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
		"Snapshot=t42.inf", 
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

//	web_concurrent_start(NULL);
	
	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL={URL}/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"URL={URL}/reports/assets/app/pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"URL={URL}/reports/assets/app/deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"URL={URL}/reports/assets/store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"URL={URL}/reports/assets/app/jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL={URL}/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL={URL}/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t51.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");
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
	
//	web_concurrent_end(NULL);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");

	web_url("info", 
		"URL={URL}/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("index", 
		"URL={URL}/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("{User_Id}", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591074395394", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("latestAdhocReport", 
		"URL={URL}/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t58.inf", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("dataTables_en.json", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t60.inf", 
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
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("If-None-Match", 
//		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_url("dataTables_en.json_2", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t62.inf", 
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
//		"websocket");

//	web_url("websocket", 
//		"URL={URL}/reports/stomp/178/rjo96z22/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t63.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_header("X-HTTP-Method-Override", 
//		"POST");
//
//	web_add_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");

	
	web_concurrent_end(NULL);

	lr_end_transaction("S04_T02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S04_T03_NavigateAggregateReport_ConfigLib");

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

	web_reg_find("Search=Body",
		"Text=Aggregate Report Configuration Library",
		LAST);

	web_url("index_2", 
		"URL={URL}/reports/periodicReport/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t65.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"URL={URL}/reports/assets/app/utils/pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/index", 
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

	web_url("jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"URL={URL}/reports/assets/shorten/jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t67.inf", 
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
		"Referer={URL}/reports/periodicReport/index", 
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

	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL={URL}/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t69.inf", 
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
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t70.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("periodicConfiguration-d5be0cdc793093f3b5949a2a7ed49b75.js", 
		"URL={URL}/reports/assets/app/configuration/periodicConfiguration-d5be0cdc793093f3b5949a2a7ed49b75.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t71.inf", 
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
//
//	web_concurrent_start(NULL);

	web_url("en.json_2", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t72.inf", 
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
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t73.inf", 
		LAST);

//	web_concurrent_end(NULL);

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

//	web_concurrent_start(NULL);
	
	web_url("tag", 
		"URL={URL}/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t74.inf", 
		"Mode=HTTP", 
		LAST);

	

	web_url("datepicker.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("filter_panel.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t76.inf", 
		LAST);

	

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("{User_Id}_2", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591074457024", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t78.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t79.inf", 
		LAST);

//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("info_2", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/periodicReport/index", 
//		"Snapshot=t80.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_revert_auto_header("Accept");
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_concurrent_end(NULL);
	
	web_url("index_3", 
		"URL={URL}/reports/periodicReportConfigurationRest/index?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=primaryReportingDestination&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=tags&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=qualityChecked&"
		"columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&"
		"columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=createdBy&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=&sharedwith=&direction=asc&sort=isFavorite&_=1591074457025", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		LAST);

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

//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket_2", 
//		"URL={URL}/reports/stomp/180/8cggqj0c/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t84.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("S04_T03_NavigateAggregateReport_ConfigLib",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

//	web_custom_request("xhr_streaming", 
//		"URL={URL}/reports/stomp/180/gfgrn_l2/xhr_streaming", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/periodicReport/index", 
//		"Snapshot=t85.inf", 
//		"Mode=HTTP", 
//		"EncType=", 
//		LAST);
//
//	web_custom_request("xhr", 
//		"URL={URL}/reports/stomp/180/vopymnwx/xhr", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={URL}/reports/periodicReport/index", 
//		"Snapshot=t86.inf", 
//		"Mode=HTTP", 
//		"EncType=", 
//		LAST);

	lr_start_transaction("S04_T04_Search");

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	//ReportEditId=30612
	web_reg_save_param_ex(
		"ParamName=ReportEditId",
		"LB=id\":",
		"RB=,\"reportName\"",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);

	
	web_reg_find("Search=Body",
		"Text/IC={Report_Name}",
		LAST);

	web_url("index_4", 
		"URL={URL}/reports/periodicReportConfigurationRest/index?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=primaryReportingDestination&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=tags&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=qualityChecked&"
		"columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&"
		"columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=createdBy&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D={Report_Name}&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString={Report_Name}&sharedwith=&direction=asc&sort=isFavorite&_=1591074457026", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S04_T04_Search",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S04_T05_Edit_ReportName");

//	web_add_auto_header("Accept", 
//		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"document");
//
//	web_add_header("Sec-Fetch-User", 
//		"?1");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

	//Product Name =MRx0518
	web_reg_save_param_ex(
		"ParamName=Product_Name",
		"LB=quot;name&quot;:&quot;",
		"RB=&quot;,&quot;id",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);
	
	//Product Id=120481
	web_reg_save_param_ex(
		"ParamName=Product_Id",
		"LB=&quot;id&quot;:&quot;",
		"RB=&quot",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);

	//globalDateRangeInformation.id" value="30613" id="configurationInstance
	web_reg_save_param_ex(
		"ParamName=DateRangeId",
		"LB=globalDateRangeInformation.id\" value=\"",
		"RB=\" id=\"configurationInstance",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);
	
	//templateQueries[0].id" value="30615" id="templateQueries[0].id
	web_reg_save_param_ex(
		"ParamName=TempQueryId",
		"LB=templateQueries[0].id\" value=\"",
		"RB=\" id=\"templateQueries[0].id",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);
	
	web_url("{ReportEditId}", 
		"URL={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"URL={URL}/reports/assets/app/tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"URL={URL}/reports/assets/app/configuration/deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"URL={URL}/reports/assets/app/scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t91.inf", 
		LAST);

	web_url("configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
		"URL={URL}/reports/assets/app/configuration/configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t92.inf", 
		LAST);

	web_url("configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"URL={URL}/reports/assets/configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t94.inf", 
		LAST);

	web_url("expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"URL={URL}/reports/assets/expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t95.inf", 
		LAST);

	web_url("templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"URL={URL}/reports/assets/app/configuration/templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t96.inf", 
		LAST);

	web_url("dateRange-114c7d1894185a1583d21cb5f436038a.js", 
		"URL={URL}/reports/assets/app/configuration/dateRange-114c7d1894185a1583d21cb5f436038a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t97.inf", 
		LAST);

	web_url("periodicReport-d7d9353e8fb7cc172ac9a0cf79dc2731.js", 
		"URL={URL}/reports/assets/app/configuration/periodicReport-d7d9353e8fb7cc172ac9a0cf79dc2731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"URL={URL}/reports/assets/copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"URL={URL}/reports/assets/app/configuration/emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"URL={URL}/reports/assets/app/configuration/blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"URL={URL}/reports/assets/app/expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t102.inf", 
		LAST);

	web_url("disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"URL={URL}/reports/assets/app/disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);

	

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("If-None-Match", 
//		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_3", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t93.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");

	web_url("copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"URL={URL}/reports/assets/app/configuration/copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t105.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");

	web_url("dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t106.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL={URL}/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t108.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL={URL}/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL={URL}/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t111.inf", 
		LAST);

	web_url("emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"URL={URL}/reports/assets/app/emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"URL={URL}/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("reportTask-49c4760386c1065c2578b863f8c61900.js", 
		"URL={URL}/reports/assets/app/reportTask-49c4760386c1065c2578b863f8c61900.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"URL={URL}/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"URL={URL}/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t116.inf", 
		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("allEmailsForCC", 
		"URL={URL}/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("fetchEvaluateCaseDateSubmissionForDatasource", 
		"URL={URL}/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchEvaluateCaseDatesForDatasource", 
		"URL={URL}/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=false&dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("{ReportEditId}_2", 
		"URL={URL}/reports/email/allEmails/{ReportEditId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("getTemplateNameDescription", 
		"URL={URL}/reports/reportTemplateRest/getTemplateNameDescription?id=24902", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchDateRangeTypesForDatasource", 
		"URL={URL}/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("getDateOperators", 
		"URL={URL}/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators", 
		"URL={URL}/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators", 
		"URL={URL}/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL={URL}/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("{User_Id}_3", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591074513338", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("polymer.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("sharedWithValues", 
		"URL={URL}/reports/userRest/sharedWithValues?ids=User_{User_Id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

//	web_url("info_3", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
//		"Snapshot=t131.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_url("theme.min.js", 
		"URL={URL}/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t132.inf", 
		LAST);

	web_url("polymer-mini.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		LAST);

//	web_concurrent_start(NULL);

	web_url("plugin.min.js", 
		"URL={URL}/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("plugin.min.js_2", 
		"URL={URL}/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("plugin.min.js_3", 
		"URL={URL}/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("plugin.min.js_4", 
		"URL={URL}/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("plugin.min.js_5", 
		"URL={URL}/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("skin.min.css", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t141.inf", 
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
//
//	web_add_header("Upgrade", 
//		"websocket");
//
////	web_url("websocket_3", 
////		"URL={URL}/reports/stomp/116/55owuv3m/websocket", 
////		"Resource=0", 
////		"Referer=", 
////		"Snapshot=t142.inf", 
////		"Mode=HTTP", 
////		LAST);
//
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
//
//	web_concurrent_start(NULL);

	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"URL={URL}/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t143.inf", 
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

	web_url("content.min.css", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}", 
		"Snapshot=t144.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("S04_T05_Edit_ReportName",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S04_T06_ClickUpdate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Report Configuration {Report_Name} updated",
		LAST);

	web_submit_data("update",
		"Action={URL}/reports/periodicReport/update",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/reports/periodicReport/edit/{ReportEditId}",
		"Snapshot=t145.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=owner", "Value={User_Id}", ENDITEM,
		"Name=productSelection", "Value={\"1\":[{\"name\":\"{Product_Name}\",\"id\":\"{Product_Id}\"}],\"2\":[],\"3\":[],\"4\":[]}", ENDITEM,
		"Name=studySelection", "Value=", ENDITEM,
		"Name=_suspectProduct", "Value=", ENDITEM,
		"Name=JSONExpressionValues", "Value=", ENDITEM,
		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", ENDITEM,
		"Name=evaluateDateAsSubmissionDate", "Value=LATEST_VERSION", ENDITEM,
		"Name=evaluateDateAs", "Value=LATEST_VERSION", ENDITEM,
		"Name=asOfVersionDate", "Value=", ENDITEM,
		"Name=globalQuery", "Value=", ENDITEM,
		"Name=dateRangeType.id", "Value=1", ENDITEM,
		"Name=sourceProfile.id", "Value=6594", ENDITEM,
		"Name=globalDateRangeInformation.dateRangeEnum", "Value=CUMULATIVE", ENDITEM,
		"Name=configurationInstance.globalDateRangeInformation.id", "Value={DateRangeId}", ENDITEM,
		"Name=globalDateRangeInformation.relativeDateRangeValue", "Value=1", ENDITEM,
		"Name=globalDateRangeInformation.dateRangeStartAbsolute", "Value=", ENDITEM,
		"Name=globalDateRangeInformation.dateRangeEndAbsolute", "Value=", ENDITEM,
		"Name=_includePreviousMissingCases", "Value=", ENDITEM,
		"Name=_includeOpenCasesInDraft", "Value=", ENDITEM,
		"Name=_excludeFollowUp", "Value=", ENDITEM,
		"Name=_includeAllStudyDrugsCases", "Value=", ENDITEM,
		"Name=_excludeNonValidCases", "Value=", ENDITEM,
		"Name=excludeNonValidCases", "Value=on", ENDITEM,
		"Name=validQueries", "Value=", ENDITEM,
		"Name=_event_exactSearch", "Value=", ENDITEM,
		"Name=_product_exactSearch", "Value=", ENDITEM,
		"Name=_study_exactSearch", "Value=", ENDITEM,
		"Name=studyDrugs", "Value=", ENDITEM,
		"Name=_study_imp", "Value=", ENDITEM,
		"Name=studyCompounds", "Value=", ENDITEM,
		"Name=templateQueries[0].version", "Value=1", ENDITEM,
		"Name=templateQueries[0].id", "Value={TempQueryId}", ENDITEM,
		"Name=templateQueries[0].dynamicFormEntryDeleted", "Value=false", ENDITEM,
		"Name=templateQueries[0].new", "Value=false", ENDITEM,
		"Name=templateQueries[0].template", "Value=24902", ENDITEM,
		"Name=templateQueries[0]._draftOnly", "Value=", ENDITEM,
		"Name=templateQueries[0].header", "Value=", ENDITEM,
		"Name=templateQueries[0].title", "Value=", ENDITEM,
		"Name=templateQueries[0].footer", "Value=", ENDITEM,
		"Name=templateQueries[0]._headerProductSelection", "Value=", ENDITEM,
		"Name=templateQueries[0]._headerDateRange", "Value=", ENDITEM,
		"Name=templateQueries[0]._displayMedDraVersionNumber", "Value=", ENDITEM,
		"Name=templateQueries[0]._privacyProtected", "Value=", ENDITEM,
		"Name=templateQueries[0]._blindProtected", "Value=", ENDITEM,
		"Name=templateQueries[0].query", "Value=", ENDITEM,
		"Name=templateQueries[0].queryLevel", "Value=CASE", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=PR_DATE_RANGE", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM,
		"Name=templateQueries[0].validQueries", "Value=", ENDITEM,
		"Name=reportName", "Value={Report_Name}", ENDITEM,
		"Name=periodicReportType", "Value=PBRER", ENDITEM,
		"Name=description", "Value={Description}", ENDITEM,
		"Name=_generateCaseSeries", "Value=", ENDITEM,
		"Name=_generateDraft", "Value=", ENDITEM,
		"Name=_qualityChecked", "Value=", ENDITEM,
		"Name=_isTemplate", "Value=", ENDITEM,
		"Name=sharedWith", "Value=User_{User_Id}", ENDITEM,
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
		"Name=EndSelectlist", "Value=after", ENDITEM,
		"Name=isEnabled", "Value=false", ENDITEM,
		"Name=schedulerTime", "Value=2020-06-02 05:08:31", ENDITEM,
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-06-02T05:08Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n"
		"                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM,
		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM,
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM,
		"Name=dueInDays", "Value=", ENDITEM,
		"Name=primaryReportingDestination", "Value=ARIES MANUAL", ENDITEM,
		"Name=reportingDestinations", "Value=ARIES MANUAL", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption.additionalAttachments", "Value=", ENDITEM,
		"Name=aiDescription", "Value=", ENDITEM,
		"Name=aiPriority", "Value=HIGH", ENDITEM,
		"Name=aiAssignedTo", "Value=", ENDITEM,
		"Name=aiDueDateShift", "Value=1", ENDITEM,
		"Name=aiCreateDateShift", "Value=", ENDITEM,
		"Name=aiBeforeAfter", "Value=AFTER", ENDITEM,
		"Name=tasks", "Value=[]", ENDITEM,
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
		"Name=delimiter", "Value=none", ENDITEM,
		"Name=editable", "Value=true", ENDITEM,
		"Name=id", "Value={ReportEditId}", ENDITEM,
		"Name=schedulerFrom", "Value=editPage", ENDITEM,
		"Name=blankValuesJSON", "Value=", ENDITEM,
		"Name=_csrf", "Value={CsrfTokenId_2}", ENDITEM,
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_concurrent_start(NULL);
		
	web_url("viewScheduler-221e178123a64cdd79df6ccdf5072ff3.js", 
		"URL={URL}/reports/assets/app/configuration/viewScheduler-221e178123a64cdd79df6ccdf5072ff3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/periodicReport/view/{ReportEditId}", 
		"Snapshot=t146.inf", 
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



	web_url("en.json_4", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/periodicReport/view/{ReportEditId}", 
		"Snapshot=t147.inf", 
		LAST);

	


//	web_revert_auto_header("Origin");
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");

//	web_url("info_4", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/periodicReport/view/{ReportEditId}", 
//		"Snapshot=t149.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("{User_Id}_4", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591074562118", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/view/{ReportEditId}", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);

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

//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket_4", 
//		"URL={URL}/reports/stomp/833/b970a_u5/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t151.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("S04_T06_ClickUpdate",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S04_T07_NavigateAggregateReport_ConfigLib");

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

	web_reg_find("Search=Body",
		"Text=Aggregate Report Configuration Library",
		LAST);

	web_url("index_5", 
		"URL={URL}/reports/periodicReport/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/periodicReport/view/{ReportEditId}", 
		"Snapshot=t152.inf", 
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

	web_concurrent_start(NULL);

	web_url("en.json_5", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t153.inf", 
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

	web_url("dataTables_en.json_4", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t154.inf", 
		LAST);

//	web_concurrent_end(NULL);
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

	web_url("tag_2", 
		"URL={URL}/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("If-None-Match", 
//		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");
//
//	web_concurrent_start(NULL);

	web_url("datepicker.hbs_2", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t156.inf", 
		LAST);

//	web_add_header("If-None-Match", 
//		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");

	web_url("filter_panel.hbs_2", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t157.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("{User_Id}_5", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1591074604678", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("index_6", 
		"URL={URL}/reports/periodicReportConfigurationRest/index?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=primaryReportingDestination&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=tags&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=qualityChecked&"
		"columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&"
		"columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=createdBy&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D={Product_Name}_test_aggr_2&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString={Product_Name}_test_aggr_2&sharedwith=&direction=asc&sort=isFavorite&_=1591074604679", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

//	web_url("info_5", 
//		"URL={URL}/reports/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/periodicReport/index", 
//		"Snapshot=t160.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("S04_T07_NavigateAggregateReport_ConfigLib",LR_AUTO);

	lr_think_time(3);

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
//	web_url("websocket_5", 
//		"URL={URL}/reports/stomp/294/nwutm7hk/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t161.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_start_transaction("S04_T08_RemoveFilter");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("index_7", 
		"URL={URL}/reports/periodicReportConfigurationRest/index?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=primaryReportingDestination&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=tags&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=qualityChecked&"
		"columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&"
		"columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=createdBy&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=&sharedwith=&direction=asc&sort=isFavorite&_=1591074604680", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S04_T08_RemoveFilter",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S04_T09_Logout");

	
	web_revert_auto_header("X-Requested-With");

	web_add_header("Accept", 
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
		"Referer={URL}/reports/periodicReport/index", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S04_T09_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}