Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Safari/537.36");

	addDynatraceHeaderTest("PC=ListAccounts;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"904358d84b03f1ad55be2f040c975757befd78a0");

	addDynatraceHeaderTest("PC=seed;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=83", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

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

	addDynatraceHeaderTest("PC=auth;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("auth", 
		"URL=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	addDynatraceHeaderTest("PC=token;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	addDynatraceHeaderTest("PC=login-56e6216b7dfd4b175b930dda2cfcea23.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t5.inf", 
		LAST);

	addDynatraceHeaderTest("PC=application-3d100486bb60d4ee3003d4ee9f8d893e.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t6.inf", 
		LAST);

	addDynatraceHeaderTest("PC=cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("PC=application-f8ff3189b5e73f6aa63ba16652634041.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t8.inf", 
		LAST);

	addDynatraceHeaderTest("PC=jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t9.inf", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	addDynatraceHeaderTest("PC=token_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("PC=customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("PC=OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t12.inf", 
		LAST);

	addDynatraceHeaderTest("PC=client_model_v5_variation_0.pb;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t13.inf", 
		LAST);

	addDynatraceHeaderTest("PC=client_model_v5_ext_variation_0.pb;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t14.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Accept");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	addDynatraceHeaderTest("PC=issuetoken;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_custom_request("issuetoken", 
		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		"Body=force=false&response_type=token&scope=https://www.googleapis.com/auth/calendar.readonly+https://www.googleapis.com/auth/cast-edu-messaging+https://www.googleapis.com/auth/clouddevices+https://www.googleapis.com/auth/hangouts+https://www.googleapis.com/auth/hangouts.readonly+https://www.googleapis.com/auth/meetings+https://www.googleapis.com/auth/plus.peopleapi.readwrite+https://www.googleapis.com/auth/userinfo.email&client_id="
		"919648714761-55j965o0km033psv3i9qls5mo3qtdrb0.apps.googleusercontent.com&origin=pkedcjkdefgpdelpbcmbmeomcjbeemfm&lib_ver=83.0.4103.61&release_channel=stable&device_id=e06c8409-4e65-402e-823f-f31b85a1565a&device_type=chrome", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	addDynatraceHeaderTest("PC=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCaqJjitNkEYsEgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCaqJjitNkEYsEgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCaqJjitNkEYsEgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		LAST);

	web_add_auto_header("User-Agent", 
		"Chrome WIN 83.0.4103.61 (94f915a8d7c408b09cc7352161ad592299f384d2-refs/branch-heads/4103@{#561}) channel(stable)");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Content-Encoding", 
		"gzip");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("X-Client-Data", 
		"CIi2yQEIo7bJAQjEtskBCKmdygEYm77KARi+vsoB");

	web_add_header("X-Omnibox-On-Device-Suggestions", 
		"Control");

	addDynatraceHeaderTest("PC=command;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=tN2ml82IrGouScOnqCwshg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"Body=\nshivaprasaadkm@gmail.com4*8\b", 
		LAST);

	lr_start_transaction("S05_T01_OpenApplication");

	lr_end_transaction("S05_T01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T02_Login");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Safari/537.36");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-83.0.4103.61");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=json;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:489937326&cup2hreq=abad37ecc66bbdaae0a9af61f85ed8dc01350a9b31d7b39d834554d681d1a49c", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{6667e209-361f-4126-8d2b-de68e1e26fa9}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{9bdf05d9-ad20-43ac-b463-37d31bb80051}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{fbdccb21-d40c-4c18-965d-1f9801d0b7b6}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{8d63decd-bb47-40b1-8c60-1cee92bac714}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\""
		"{9caae094-8b89-4833-aab1-b23b7e0d7daa}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.693458e8d61b08ad38d9dceec8d6204a74cfc0952a39dca6d1e6d4828a5cbcf4\"}]},\"ping\":{\"ping_freshness\":\"{db11e907-4158-41d3-a97d-994944fd1523}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"1.11.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\""
		":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{5ec2e6b1-48a5-47c9-af02-ede539e537bc}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{1307ab76-a51a-4668-be96-02304787ebff}\",\"rd\":4900},\"updatecheck\":{},\""
		"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.2ab2be7a7c283b0e4ec01de815baab251360d04ad22206876428ad1cbedc446f\"}]},\"ping\":{\"ping_freshness\":\"{0cfa187c-7141-481c-a44c-57c2f3910418}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"8320.407.0.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\","
		"\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"83.0.4103.61\",\"protocol\":\"3.1\",\"requestid\":\"{7ed4610c-8604-4ace-b442-1a6a4b5daffd}\",\"sessionid\":\"{aa3331e8-9b87-4d1a-bfdb-ce805c037603}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.61\"}}", 
		LAST);

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
		"https://pvr-perf.rxlogix.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=authenticate;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_submit_data("authenticate", 
		"Action=https://pvr-perf.rxlogix.com/reports/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=Shiva.Prasad", ENDITEM, 
		"Name=password", "Value=Shiva@12345", ENDITEM, 
		"Name=_csrf", "Value=9b97c770-3597-4ddc-b175-eb072577939a", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=rxapplication-eebebbeb632a82e8608209da3ab42ef2.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=fuelux-b7cf5c5c681fcdbd63156284516c90e9.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=gridstack.min-82a5fabd01f65ac4b5e87078091be104.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=dashboard-8dee5417b984f9891cddc783e9314ce6.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/actionItem/actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t29.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=en.json;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("en.json", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=fullcalendar-ab21481ecaaf856ac398df2626c214f0.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=calendar-f9ce111f86c4726c1303830d83a16683.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t32.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t33.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=fuelux-58910ec6bd502e7c4aabf85922131616.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fuelux/fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t34.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=workFlow-3b78500b81fd61ce5b59cc202a54e63c.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t35.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t36.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t37.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=highcharts-more-31bca387194b423710d019dfa069474a.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t38.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=highcharts-3d-b0c0c823b44f85cb61361491f4353576.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t40.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=pushNotification-3d08817200dceb0a405d9f7aefa3192f.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t41.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack/gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t42.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=gridstack.min-157675a5f94f1a18234a494030c5d8f0.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t43.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=store.modern.min-ee86dbde67356086e53dffdd31c6867d.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t44.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=jquery.core-2c7cdf128b42d849235dea8cadd879b8.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t46.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=jquery.app-782d8f87ac279a019b37b18a315654b2.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t47.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=deleteModal-68b8e74283c8070801d2afbaf40831a1.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t48.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t49.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t50.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t51.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEs4BCWbPMLGRU9eNEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3QcSOwEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw3JlP8vEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAi;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEs4BCWbPMLGRU9eNEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3QcSOwEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw3JlP8vEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEs4BCWbPMLGRU9eNEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3QcSOwEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw3JlP8vEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAiABILDSITCW4SABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiABILDSeO13kSABoAIgASCw09LLzYEgAaACIAGgASPwmScaNDN_x9xRILDYoEHBMSABoAIgASCw1xOJcMEgAaACIAEgsNcTiXDBIAGgAiABILDT0svNgSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t52.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=32180;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("32180", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591018020978", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=index;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index", 
		"URL=https://pvr-perf.rxlogix.com/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=info;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("info", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=latestAdhocReport;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("latestAdhocReport", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=dataTables_en.json;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTables_en.json", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json?_=1591018020979", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=latestPeriodicReport;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("latestPeriodicReport", 
		"URL=https://pvr-perf.rxlogix.com/reports/periodicReportConfigurationRest/latestPeriodicReport?length=4&start=0&_=1591018020980", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=dataTables_en.json_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTables_en.json_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json?_=1591018020981", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,mimojjlkmoijpicakmndhoigimigcmbb,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,khaoiebndkojlmppeemjhbpbandiljpe,hnimpnehoodheedghdeeijklkeaacbdc,aemomkdncapdnfajjbbcbdebjljbpmpj,giekcmmlnklenlaomppkphknjmnnpneh,gkmgaooipdjhmangpemjhigmamcehddo,ehgidpndbllacpjalkiimkbadgjfnnmc,copjbmjbojbakpaedmpkhmiplmmehfck,jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,"
		"bklopemakmnopmghhmccadeonafabnal");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-83.0.4103.61");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=json_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:2194367342&cup2hreq=c03936a7ff9a374e1c950d21bdabd52a0fe576d3c9c590568ea17ce609c60c6b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{c9c2856e-076e-4b6a-bc42-9a11c7cbf633}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GCEU\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.e03bbdaab3b8f98164302f2b1d5a623bd5f6f393cc5279cf553329eed3d7b993\"}]},\"ping\":{\"ping_freshness\":\"{e69dd1f4-b569-405b-b0c0-8997b2a6f9c8}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"32.0.0.371\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{5b5ff7c4-d066-48e2-a510-e38ece369535}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"4.10.1679.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\""
		"GCEU\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962\"}]},\"ping\":{\"ping_freshness\":\"{757242c1-b7a7-460b-b193-d87e82b148c9}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"9.12.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"packages\":{\"package\":[{\"fp\":\"1.380ca56231a722347183c83aa34689f22eb2d3fd58488e2304644e3d9aafda81\"}]},\"ping\":{\"ping_freshness\":\"{b8178db3-8c70-4251-a43f-bc2cbbcd7d39}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"5907\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{5750ef50-dd37-4faa-aab5-a1b0affcc439}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand"
		"\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{8e000eac-7ad9-4b35-8ab6-da92a7275a6d}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{052eedb7-25da-42e1-9f91-9378a05a7f45}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{b3e929f8-72aa-4331-84e8-f0ca25a23c5c}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU\",\"cohort\":\"1"
		":j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{5641ea82-d0f3-429a-bc0c-757f5520cce3}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.a94e96f52af7838519aac1ae4ef68686817be9661165e20964f81c2b5bec7740\"}]},\"ping\":{\"ping_freshness\":\"{a0a0ee5f-8fff-4dd0-9d69-9bc6b00c43ea}\",\"rd\":4900},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"83.236.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\""
		"ping\":{\"ping_freshness\":\"{deb53093-f7d6-428d-bb8a-af6d910a13cb}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GCEU\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\"{2c7a7211-8c16-4195-bd49-69f44f0dc63b}\",\"rd\":4900},\"updatecheck\":{},\""
		"version\":\"2018.9.6.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3a89ae4842d7f96539d2c4edfee833c9e24ab61f3b930f29886a8d78e07933cd\"}]},\"ping\":{\"ping_freshness\":\"{7fdf1a67-ff76-4d0f-bbe4-c1831bc2c4be}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"1256\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:"
		"\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.59f80dfc20335b1b6c4562bf68e07f7eeb1ac8b6f5d3099beefa6e130a1ab368\"}]},\"ping\":{\"ping_freshness\":\"{27a77096-bec7-4921-b20f-564d2f85f0e2}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"2020.5.17.1142\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GCEU\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":["
		"{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{17f7c687-c566-4f08-8100-542748b59eee}\",\"rd\":4900},\"updatecheck\":{},\"version\":\"3\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"83.0.4103.61\",\"protocol\":\"3.1\",\"requestid\":\""
		"{c3e0ca9d-5500-4b61-adf0-4ba844d116d6}\",\"sessionid\":\"{a9ffd674-9790-4adb-855b-ab53222c78ab}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.61\"}}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	addDynatraceHeaderTest("TSN=S05_T02_Login;PC=websocket;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("websocket", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/520/r_pqbh5r/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S05_T02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T03_NavigateAdhocReport_GeneratedReports");

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

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=index_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
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

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t63.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=jquery.shorten-748253da78c6257aced45caa5931b43b.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/shorten/jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t64.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=commonGeneratedReportsActions-92cd7ea27c1fa611ab72257ef28bd4a1.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("commonGeneratedReportsActions-92cd7ea27c1fa611ab72257ef28bd4a1.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/commonGeneratedReportsActions-92cd7ea27c1fa611ab72257ef28bd4a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t65.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=report-642940a44e4a2866cc88c5756e005b4b.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("report-642940a44e4a2866cc88c5756e005b4b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/report/report-642940a44e4a2866cc88c5756e005b4b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t67.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t69.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t70.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t71.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t72.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=emailModal-c328f6452c15ee5b9612d5799369da83.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t73.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=tinymce.min-8913ae2d8b5e63961b59cb681291410b.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t74.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t75.inf", 
		LAST);

	web_concurrent_end(NULL);

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

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=en.json_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("en.json_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t68.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"font");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t76.inf", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=dataTables_en.json_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTables_en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t77.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=tag;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("tag", 
		"URL=https://pvr-perf.rxlogix.com/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t78.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=allEmailsForCC;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmailsForCC", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t79.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=allEmails;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmails", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=list;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("list", 
		"URL=https://pvr-perf.rxlogix.com/reports/workflowState/list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=datepicker.hbs;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("datepicker.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t82.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=filter_panel.hbs;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("filter_panel.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t83.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=32180_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("32180_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591018053187", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t84.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLoAQlCmAtdSo1ZdxILDc2o5qkSABoAIgASCw2zlw1ZEgAaACIAEgsN46PAYhIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2BkPF8EgAaACIAEgsN8axL0RIAGgAiABILDeNr0NgSABoAIgASCw0LYtQYEgAaACIAEgsNkWGVThIAGgAi;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLoAQlCmAtdSo1ZdxILDc2o5qkSABoAIgASCw2zlw1ZEgAaACIAEgsN46PAYhIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2BkPF8EgAaACIAEgsN8axL0RIAGgAiABILDeNr0NgSABoAIgASCw0LYtQYEgAaACIAEgsNkWGVThIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLoAQlCmAtdSo1ZdxILDc2o5qkSABoAIgASCw2zlw1ZEgAaACIAEgsN46PAYhIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2BkPF8EgAaACIAEgsN8axL0RIAGgAiABILDeNr0NgSABoAIgASCw0LYtQYEgAaACIAEgsNkWGVThIAGgAiABILDarbt4wSABoAIgASCw2ccuK3EgAaACIAEgsNlJCS-hIAGgAiABILDQZOWzwSABoAIgASCw0GTls8EgAaACIAGgASGAlT4UnX05dDhRILDY8PH4sSABoAIgAaABLOAQmqZdY0R3xDpRILDbqntSISABoAIgASCw2I3km5EgAaACIAEgsN0HEjsBIAGgAiABILDc6fswsSABoAIgASCw3ingucEgAaACIAEgsNyZT_LxIAGgAiAB"
		"ILDSQU2yMSABoAIgASCw0qHI6nEgAaACIAEgsNUgLjChIAGgAiABILDZHJ8-kSABoAIgASCw0iEwluEgAaACIAEgsN13dP4BIAGgAiABILDeTEBMcSABoAIgASCw0njtd5EgAaACIAEgsNPSy82BIAGgAiABoAEj8JknGjQzf8fcUSCw2KBBwTEgAaACIAEgsNnyYIsRIAGgAiABILDYInJRISABoAIgASCw09LLzYEgAaACIAGgASjQEJTfwxD32pttQSCw2Bl-O4EgAaACIAEgsNWR4s-BIAGgAiABILDcZ8LBUSABoAIgASCw05EawNEgAaACIAEgsN9f7ojBIAGgAiABILDbbzYAcSABoAIgASCw1ZjMuyEgAaACIAEgsNBJXdkxIAGgAiABILDYrTNyoSABoAIgASCw3cNz2aEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t85.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=theme.min.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("theme.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t86.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=info_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("info_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=reports;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/reports?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018053188", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAgn1c-GmAtbbRhILDfbJ0UoSABoAIgASCw29hYMPEgAaACIAEgsNzajmqRIAGgAiABILDbOXDVkSABoAIgASCw3jo8BiEgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDYGQ8XwSABoAIgASCw3xrEvREgAaACIAEgsN42vQ2BIAGgAi;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAgn1c-GmAtbbRhILDfbJ0UoSABoAIgASCw29hYMPEgAaACIAEgsNzajmqRIAGgAiABILDbOXDVkSABoAIgASCw3jo8BiEgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDYGQ8XwSABoAIgASCw3xrEvREgAaACIAEgsN42vQ2BIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAgn1c-GmAtbbRhILDfbJ0UoSABoAIgASCw29hYMPEgAaACIAEgsNzajmqRIAGgAiABILDbOXDVkSABoAIgASCw3jo8BiEgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDYGQ8XwSABoAIgASCw3xrEvREgAaACIAEgsN42vQ2BIAGgAiABILDQti1BgSABoAIgASCw2RYZVOEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw2UkJL6EgAaACIAEgsNBk5bPBIAGgAiABILDQZOWzwSABoAIgAaABLbAQlO1ZCDuAv8jRILDYGX47gSABoAIgASCw1ZHiz4EgAaACIAEgsNxnwsFRIAGgAiABILDWBghqUSABoAIgASCw269TEaEgAaACIAEgsNU9kIURIAGgAiAB"
		"ILDTRmE80SABoAIgASCw37BR-4EgAaACIAEgsNxZIvERIAGgAiABILDTkRrA0SABoAIgASCw31_uiMEgAaACIAEgsNtvNgBxIAGgAiABILDVmMy7ISABoAIgASCw0Eld2TEgAaACIAEgsNitM3KhIAGgAiABILDdw3PZoSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t89.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=plugin.min.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t90.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=plugin.min.js_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t91.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=plugin.min.js_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t92.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=plugin.min.js_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t93.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRL1AQl19swUb5F5GRILDfbJ0UoSABoAIgASCw2BzliPEgAaACIAEgsN46PAYhIAGgAiABILDb2Fgw8SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNgZDxfBIAGgAiABILDfGsS9ESABoAIgASCw3ja9DYEgAaACIAEgsNC2LUGBIAGgAi;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRL1AQl19swUb5F5GRILDfbJ0UoSABoAIgASCw2BzliPEgAaACIAEgsN46PAYhIAGgAiABILDb2Fgw8SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNgZDxfBIAGgAiABILDfGsS9ESABoAIgASCw3ja9DYEgAaACIAEgsNC2LUGBIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRL1AQl19swUb5F5GRILDfbJ0UoSABoAIgASCw2BzliPEgAaACIAEgsN46PAYhIAGgAiABILDb2Fgw8SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNgZDxfBIAGgAiABILDfGsS9ESABoAIgASCw3ja9DYEgAaACIAEgsNC2LUGBIAGgAiABILDZFhlU4SABoAIgASCw2q27eMEgAaACIAEgsNnHLitxIAGgAiABILDZSQkvoSABoAIgASCw0GTls8EgAaACIAEgsNBk5bPBIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t94.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=plugin.min.js_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t95.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=skin.min.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("skin.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t96.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=content.min.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("content.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t97.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=editor-687e49e2901f89d1e65cc77026ec0a3e.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t98.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	addDynatraceHeaderTest("TSN=S05_T03_NavigateAdhocReport_GeneratedReports;PC=websocket_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("websocket_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/211/axja6d0_/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S05_T03_NavigateAdhocReport_GeneratedReports",LR_AUTO);

	lr_think_time(3);

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

	addDynatraceHeaderTest("PC=reports_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/reports?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=Report01_003&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=Report01_003&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018053189", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S05_T04_SearchReports");

	lr_end_transaction("S05_T04_SearchReports",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T05_ViewReports");

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=threatListUpdates_fetch;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMODMuMC40MTAzLjYxGikIBRABGhsKDQgFEAYYASIDMDAxMAEQjdYIGgIYB0kS8s4iBCABIAIoARopCAEQARobCg0IARAGGAEiAzAwMTABELW6BxoCGAfxB7tSIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARDpwQcaAhgH_fQT-yIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ-8AHGgIYByVPRZwiBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgHMbHJSCIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQpRoaAhgHLTGbCiIEIAEgAigEGicICRABGhkKDQgJEAYYASIDMDAxMAYQAxoCGAd8Zz-3IgQgASACKAYaKAgPEAEaGgoNCA8QBhgBIgMwMDEwARDeLBoCGAezV5aVIgQgASACKAEaJwgKEAgaGQ"
		"oNCAoQCBgBIgMwMDEwARAFGgIYB6oISBciBCABIAIoARonCAkQARoZCg0ICRAGGAEiAzAwMTABEBsaAhgHzNwFXCIEIAEgAigBGigICBABGhoKDQgIEAYYASIDMDAxMAEQ9QgaAhgHNDKTHSIEIAEgAigBGigIDRABGhoKDQgNEAYYASIDMDAxMAEQnnQaAhgHw0FACSIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQj9oDGgIYB7W5IqEiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABELkDGgIYBxyFW1oiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t101.inf", 
		LAST);

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

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=34591;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("34591", 
		"URL=https://pvr-perf.rxlogix.com/reports/report/showFirstSection/34591", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=caseSeries-2b3162da7d0ee39f0d14d35afd619ae8.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("caseSeries-2b3162da7d0ee39f0d14d35afd619ae8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/report/caseSeries-2b3162da7d0ee39f0d14d35afd619ae8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t103.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t104.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=configuration-11b5b002dec2c8f1f643a1db6b80c6db.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t105.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=solid-gauge-dea4ed491a81514f163d664d2d9b4135.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("solid-gauge-dea4ed491a81514f163d664d2d9b4135.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/modules/solid-gauge-dea4ed491a81514f163d664d2d9b4135.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t106.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=addSection-9123c19b5cc5be0ec58f58d57e123c1f.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("addSection-9123c19b5cc5be0ec58f58d57e123c1f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/addSection-9123c19b5cc5be0ec58f58d57e123c1f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t107.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t109.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t110.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=blankParameters-cef91892ccdf31d55934699882b389d5.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t111.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=column-view-64c0085c608464f4a6f66e33d985ae27.html;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=en.json_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t108.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=studyDrugs-9650caca7b2eaad47de57af7bbefe066.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t113.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t114.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=comment-b85750cd7841837e8523d04d9fda7ad1.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("comment-b85750cd7841837e8523d04d9fda7ad1.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/comment-b85750cd7841837e8523d04d9fda7ad1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t115.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t116.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t117.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=studyCompounds-d1264ac301b89c2be214faf502830ceb.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t118.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t119.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKTBAlr-5QntCglGRILDeanSuQSABoAIgASCw0ShfMzEgAaACIAEgsNkWGVThIAGgAiABILDapItAMSABoAIgASCw3QdRj8EgAaACIAEgsNkWGVThIAGgAiABILDd7NkvgSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgASCw1M1eR_EgAaACIAEgsNkWGVThIAGgAi;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKTBAlr-5QntCglGRILDeanSuQSABoAIgASCw0ShfMzEgAaACIAEgsNkWGVThIAGgAiABILDapItAMSABoAIgASCw3QdRj8EgAaACIAEgsNkWGVThIAGgAiABILDd7NkvgSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgASCw1M1eR_EgAaACIAEgsNkWGVThIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKTBAlr-5QntCglGRILDeanSuQSABoAIgASCw0ShfMzEgAaACIAEgsNkWGVThIAGgAiABILDapItAMSABoAIgASCw3QdRj8EgAaACIAEgsNkWGVThIAGgAiABILDd7NkvgSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgASCw1M1eR_EgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsN8axL0RIAGgAiABILDX7xs8gSABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEg"
		"sNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNBJw1hxIAGgAiABILDQMUaFcSABoAIgASCw2ZjYJsEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw3pRDKOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgAaABIYCRo3WZYRTHEbEgsNPTTVrhIAGgAiABoAEjIJLHBAD-kuq9wSCw0OK08rEgAaACIAEgsNUqJ1-xIAGgAiABILDd4_k74SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t120.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=column-view-64c0085c608464f4a6f66e33d985ae27.html_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=getNumOperators;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("getNumOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=getDateOperators;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("getDateOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=getStringOperators;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("getStringOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=getValuelessOperators;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("getValuelessOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=32180_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("32180_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591018102066", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"58c3770a-7df3-43ab-bca5-4ff678cff015");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=getReportAsHTMLString;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_submit_data("getReportAsHTMLString", 
		"Action=https://pvr-perf.rxlogix.com/reports/report/getReportAsHTMLString", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=filename", "Value=R34594_en", ENDITEM, 
		"Name=id", "Value=34594", ENDITEM, 
		"Name=isInDraftMode", "Value=false", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=info_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("info_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=polymer.html;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("polymer.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=polymer-mini.html;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("polymer-mini.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=polymer-micro.html;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("polymer-micro.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t132.inf", 
		LAST);

	web_revert_auto_header("Accept");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	addDynatraceHeaderTest("TSN=S05_T05_ViewReports;PC=websocket_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("websocket_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/299/vsxhjxy_/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S05_T05_ViewReports",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T06_DownloadPDF");

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

	addDynatraceHeaderTest("TSN=S05_T06_DownloadPDF;PC=34594;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("34594", 
		"URL=https://pvr-perf.rxlogix.com/reports/report/show/34594?outputFormat=PDF&isInDraftMode=false&paperReport=false", 
		"Resource=1", 
		"RecContentType=application/pdf", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t134.inf", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	addDynatraceHeaderTest("TSN=S05_T06_DownloadPDF;PC=download;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_custom_request("download", 
		"URL=https://sb-ssl.google.com/safebrowsing/clientreport/download?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"Body=\nmhttps://pvr-perf.rxlogix.com/reports/report/show/34594?outputFormat=PDF&isInDraftMode=false&paperReport=false\"\n B¯•œËT$†pQBs~??’w­…‘¼Û[µF«@0Ê£„•\r\"·\nmhttps://pvr-perf.rxlogix.com/reports/report/show/34594?outputFormat=PDF&isInDraftMode=false&paperReport=false", 
		LAST);

	lr_end_transaction("S05_T06_DownloadPDF",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T07_DownloadExcel");

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

	addDynatraceHeaderTest("TSN=S05_T07_DownloadExcel;PC=34594_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("34594_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/report/show/34594?outputFormat=XLSX&isInDraftMode=false", 
		"Resource=1", 
		"RecContentType=application/vnd.openxmlformats-officedocument.spreadsheetml.sheet", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/show/34594", 
		"Snapshot=t136.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	addDynatraceHeaderTest("TSN=S05_T07_DownloadExcel;PC=download_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_custom_request("download_2", 
		"URL=https://sb-ssl.google.com/safebrowsing/clientreport/download?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"Body=\n\\https://pvr-perf.rxlogix.com/reports/report/show/34594?outputFormat=XLSX&isInDraftMode=false\"\n û¶u9€Ú>4š»$w?I³RÏTÇÒ?WLÍ‚-ìràw\"¦\n\\https://pvr-perf.rxlogix.com/reports/report/show/34594?outputFormat=XLSX&isInDraftMode=false", 
		LAST);

	lr_end_transaction("S05_T07_DownloadExcel",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T08_ClickBack");

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

	addDynatraceHeaderTest("TSN=S05_T08_ClickBack;PC=index_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S05_T08_ClickBack;PC=32180_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("32180_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591018165480", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T08_ClickBack;PC=reports_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/reports?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=Report01_003&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=Report01_003&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018165481", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t140.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T08_ClickBack;PC=info_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("info_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t141.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/skins/lightgray/content.min-8db73e017a6fd48f80352a66b2be8507.css\"");

	addDynatraceHeaderTest("TSN=S05_T08_ClickBack;PC=content.min.css_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("content.min.css_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t142.inf", 
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

	addDynatraceHeaderTest("TSN=S05_T08_ClickBack;PC=websocket_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("websocket_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/661/6rwxn5vk/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S05_T08_ClickBack",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T09_Click_New(State)");

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

	addDynatraceHeaderTest("TSN=S05_T09_Click_New(State);PC=index_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/workflowJustificationRest/index?initialState=New&executedReportConfiguration=34591&_=1591018165482", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T09_Click_New(State);PC=keep-alive;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("keep-alive", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1591018165483", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S05_T09_Click_New(State)",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T10_Click_Confirm");

	web_add_header("X-CSRF-TOKEN", 
		"58c3770a-7df3-43ab-bca5-4ff678cff015");

	addDynatraceHeaderTest("TSN=S05_T10_Click_Confirm;PC=save;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_submit_data("save", 
		"Action=https://pvr-perf.rxlogix.com/reports/workflowJustificationRest/save", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=toState.id", "Value=23", ENDITEM, 
		"Name=1591018160707", "Value=", ENDITEM, 
		"Name=description", "Value=Test", ENDITEM, 
		"Name=dataLength", "Value=", ENDITEM, 
		"Name=fromState.id", "Value=14", ENDITEM, 
		"Name=executedReportConfiguration.id", "Value=34591", ENDITEM, 
		"Name=reportRequest.id", "Value=", ENDITEM, 
		"Name=workflowRule.id", "Value=6569", ENDITEM, 
		"Name=password", "Value=", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S05_T10_Click_Confirm;PC=reports_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/reports?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=Report01_003&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=Report01_003&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018165484", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	addDynatraceHeaderTest("TSN=S05_T10_Click_Confirm;PC=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CZJxo0M3_H3FEgsNigQcExIAGgAiABILDdpnLscSABoAIgASCw2eBscFEgAaACIAEgsNPSy82BIAGgAiABoA;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CZJxo0M3_H3FEgsNigQcExIAGgAiABILDdpnLscSABoAIgASCw2eBscFEgAaACIAEgsNPSy82BIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CZJxo0M3_H3FEgsNigQcExIAGgAiABILDdpnLscSABoAIgASCw2eBscFEgAaACIAEgsNPSy82BIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t148.inf", 
		LAST);

	lr_end_transaction("S05_T10_Click_Confirm",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T11_Click_UnderReview");

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T11_Click_UnderReview;PC=index_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/workflowJustificationRest/index?initialState=Under+Review&executedReportConfiguration=34591&_=1591018165485", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S05_T11_Click_UnderReview",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T12_Click_Confirm");

	addDynatraceHeaderTest("TSN=S05_T12_Click_Confirm;PC=keep-alive_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("keep-alive_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1591018165486", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-CSRF-TOKEN", 
		"58c3770a-7df3-43ab-bca5-4ff678cff015");

	addDynatraceHeaderTest("TSN=S05_T12_Click_Confirm;PC=save_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_submit_data("save_2", 
		"Action=https://pvr-perf.rxlogix.com/reports/workflowJustificationRest/save", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=toState.id", "Value=24", ENDITEM, 
		"Name=1591018160707", "Value=", ENDITEM, 
		"Name=description", "Value=Test", ENDITEM, 
		"Name=dataLength", "Value=", ENDITEM, 
		"Name=fromState.id", "Value=23", ENDITEM, 
		"Name=executedReportConfiguration.id", "Value=34591", ENDITEM, 
		"Name=reportRequest.id", "Value=", ENDITEM, 
		"Name=workflowRule.id", "Value=6570", ENDITEM, 
		"Name=password", "Value=", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S05_T12_Click_Confirm;PC=reports_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/reports?draw=3&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=Report01_003&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=Report01_003&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018165487", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S05_T12_Click_Confirm",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T13_CreationActionItem");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLOAQmqZdY0R3xDpRILDbqntSISABoAIgASCw2I3km5EgAaACIAEgsN0HEjsBIAGgAiABILDc6fswsSABoAIgASCw3ingucEgAaACIAEgsNyZT_LxIAGgAiABILDSQU2yMSABoAIgASCw0qHI6nEgAaACIAEgsNUgLjChIAGgAiABILDZHJ8-kSABoAIgASCw0iEwluEgAaACIAEgsN13dP4BIAGgAi;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLOAQmqZdY0R3xDpRILDbqntSISABoAIgASCw2I3km5EgAaACIAEgsN0HEjsBIAGgAiABILDc6fswsSABoAIgASCw3ingucEgAaACIAEgsNyZT_LxIAGgAiABILDSQU2yMSABoAIgASCw0qHI6nEgAaACIAEgsNUgLjChIAGgAiABILDZHJ8-kSABoAIgASCw0iEwluEgAaACIAEgsN13dP4BIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLOAQmqZdY0R3xDpRILDbqntSISABoAIgASCw2I3km5EgAaACIAEgsN0HEjsBIAGgAiABILDc6fswsSABoAIgASCw3ingucEgAaACIAEgsNyZT_LxIAGgAiABILDSQU2yMSABoAIgASCw0qHI6nEgAaACIAEgsNUgLjChIAGgAiABILDZHJ8-kSABoAIgASCw0iEwluEgAaACIAEgsN13dP4BIAGgAiABILDeTEBMcSABoAIgASCw0njtd5EgAaACIAEgsNPSy82BIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t153.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAgmCYIkMuRStNhILDfbJ0UoSABoAIgASCw2BzliPEgAaACIAEgsN46PAYhIAGgAiABILDb2Fgw8SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNgZDxfBIAGgAiABILDfGsS9ESABoAIgASCw3ja9DYEgAaACIAEgsNC2LUGBIAGgAi;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAgmCYIkMuRStNhILDfbJ0UoSABoAIgASCw2BzliPEgAaACIAEgsN46PAYhIAGgAiABILDb2Fgw8SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNgZDxfBIAGgAiABILDfGsS9ESABoAIgASCw3ja9DYEgAaACIAEgsNC2LUGBIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAgmCYIkMuRStNhILDfbJ0UoSABoAIgASCw2BzliPEgAaACIAEgsN46PAYhIAGgAiABILDb2Fgw8SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNgZDxfBIAGgAiABILDfGsS9ESABoAIgASCw3ja9DYEgAaACIAEgsNC2LUGBIAGgAiABILDZFhlU4SABoAIgASCw2q27eMEgAaACIAEgsNnHLitxIAGgAiABILDZSQkvoSABoAIgASCw0GTls8EgAaACIAEgsNBk5bPBIAGgAiABILDeKeC5wSABoAIgAaABLBAQmYtZPsNNQ8WxILDbqntSISABoAIgASCw2I3km5EgAaACIAEgsN0HEjsBIAGgAiABILDc6fswsSABoAIgASCw3JlP8vEgAaACIAEgsNJBTbIxIAGgAiAB"
		"ILDSocjqcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAiABILDSITCW4SABoAIgASCw3Xd0_gEgAaACIAEgsN5MQExxIAGgAiABILDSeO13kSABoAIgASCw09LLzYEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t154.inf", 
		LAST);

	web_concurrent_end(NULL);

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=sharedWithList;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("sharedWithList", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithList?term=&page=1&max=30&_=1591018165488", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRK0AQnSUankD4mGMhILDbqntSISABoAIgASCw2I3km5EgAaACIAEgsN0HEjsBIAGgAiABILDc6fswsSABoAIgASCw3JlP8vEgAaACIAEgsNJBTbIxIAGgAiABILDVIC4woSABoAIgASCw2RyfPpEgAaACIAEgsNIhMJbhIAGgAiABILDdd3T-ASABoAIgASCw3kxATHEgAaACIAEgsNJ47XeRIAGgAi;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRK0AQnSUankD4mGMhILDbqntSISABoAIgASCw2I3km5EgAaACIAEgsN0HEjsBIAGgAiABILDc6fswsSABoAIgASCw3JlP8vEgAaACIAEgsNJBTbIxIAGgAiABILDVIC4woSABoAIgASCw2RyfPpEgAaACIAEgsNIhMJbhIAGgAiABILDdd3T-ASABoAIgASCw3kxATHEgAaACIAEgsNJ47XeRIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRK0AQnSUankD4mGMhILDbqntSISABoAIgASCw2I3km5EgAaACIAEgsN0HEjsBIAGgAiABILDc6fswsSABoAIgASCw3JlP8vEgAaACIAEgsNJBTbIxIAGgAiABILDVIC4woSABoAIgASCw2RyfPpEgAaACIAEgsNIhMJbhIAGgAiABILDdd3T-ASABoAIgASCw3kxATHEgAaACIAEgsNJ47XeRIAGgAiABILDT0svNgSABoAIgAaABKPAgl8FNxPEVSAdRILDfbJ0UoSABoAIgASCw2BzliPEgAaACIAEgsN46PAYhIAGgAiABILDb2Fgw8SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNgZDxfBIAGgAiABILDfGsS9ESABoAIgASCw3ja9DYEgAaACIAEgsNC2LUGBIAGgAiAB"
		"ILDZFhlU4SABoAIgASCw2q27eMEgAaACIAEgsNnHLitxIAGgAiABILDZSQkvoSABoAIgASCw0GTls8EgAaACIAEgsNBk5bPBIAGgAiABILDeKeC5wSABoAIgASCw0qHI6nEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t156.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=keep-alive_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("keep-alive_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1591018165489", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-CSRF-TOKEN", 
		"58c3770a-7df3-43ab-bca5-4ff678cff015");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=save_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_submit_data("save_3", 
		"Action=https://pvr-perf.rxlogix.com/reports/actionItem/save", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=actionCategory", "Value=ADHOC_REPORT", ENDITEM, 
		"Name=priority", "Value=MEDIUM", ENDITEM, 
		"Name=assignedTo", "Value=User_6542", ENDITEM, 
		"Name=dueDate", "Value=30-Jun-2020", ENDITEM, 
		"Name=completionDate", "Value=", ENDITEM, 
		"Name=status", "Value=OPEN", ENDITEM, 
		"Name=description", "Value=Test", ENDITEM, 
		"Name=actionItemId", "Value=", ENDITEM, 
		"Name=appType", "Value=ADHOC_REPORT", ENDITEM, 
		"Name=dateCreated", "Value=01-Jun-2020 01:32:03 PM", ENDITEM, 
		"Name=aiVersion", "Value=", ENDITEM, 
		"Name=executedReportId", "Value=34591", ENDITEM, 
		"Name=assignedToName", "Value=", ENDITEM, 
		"Name=caseNumber", "Value=", ENDITEM, 
		"Name=errorType", "Value=", ENDITEM, 
		"Name=dataType", "Value=", ENDITEM, 
		"Name=caseVersion", "Value=", ENDITEM, 
		"Name=capaId", "Value=", ENDITEM, 
		LAST);

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

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=index_6;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("index_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=en.json_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("en.json_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t160.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=allEmails_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmails_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=tag_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("tag_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=allEmailsForCC_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmailsForCC_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=dataTables_en.json_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTables_en.json_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t164.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=list_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("list_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/workflowState/list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=datepicker.hbs_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("datepicker.hbs_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t166.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=filter_panel.hbs_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("filter_panel.hbs_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t167.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=32180_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("32180_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591018357982", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/themes/modern/theme.min-98730a64991f004de9a37595e4889bfa.js\"");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=theme.min.js_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("theme.min.js_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t169.inf", 
		LAST);

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=reports_6;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/reports?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=Report01_003&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=Report01_003&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018357983", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=info_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("info_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/image/plugin.min-716893a7547aa00912d40eb0b9aa6cac.js\"");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=plugin.min.js_6;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t172.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/table/plugin.min-244eafe366912792b5d06f41158afc6b.js\"");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=plugin.min.js_7;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t173.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/imagetools/plugin.min-10fbab65e4bf5f2bd276971a3c62eeb8.js\"");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=plugin.min.js_8;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t174.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/link/plugin.min-31f50d6cf1aaa8a76265891d4ce96f2f.js\"");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=plugin.min.js_9;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t175.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/code/plugin.min-05b914fba3517b9744bebc5f8aba4918.js\"");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=plugin.min.js_10;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_10", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t176.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/skins/lightgray/skin.min-27829e218ef3e346f33d88127bb326b3.css\"");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=skin.min.css_2;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("skin.min.css_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t177.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/skins/lightgray/content.min-8db73e017a6fd48f80352a66b2be8507.css\"");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=content.min.css_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("content.min.css_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t178.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	addDynatraceHeaderTest("TSN=S05_T13_CreationActionItem;PC=websocket_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("websocket_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/978/pu7q2ep5/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S05_T13_CreationActionItem",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T14_Archive");

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

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=archive;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("archive", 
		"URL=https://pvr-perf.rxlogix.com/reports/report/archive?id=34591", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t180.inf", 
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

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=en.json_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("en.json_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t181.inf", 
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

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=dataTables_en.json_5;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("dataTables_en.json_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t182.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=allEmails_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmails_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=tag_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("tag_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=allEmailsForCC_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("allEmailsForCC_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=list_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("list_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/workflowState/list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=datepicker.hbs_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("datepicker.hbs_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t187.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=filter_panel.hbs_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("filter_panel.hbs_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t188.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=32180_6;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("32180_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591018390465", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/themes/modern/theme.min-98730a64991f004de9a37595e4889bfa.js\"");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=theme.min.js_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("theme.min.js_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t190.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=info_6;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("info_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=reports_7;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/reports?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=Report01_003&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=Report01_003&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018390466", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/image/plugin.min-716893a7547aa00912d40eb0b9aa6cac.js\"");

	web_concurrent_start(NULL);

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=plugin.min.js_11;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_11", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t193.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/imagetools/plugin.min-10fbab65e4bf5f2bd276971a3c62eeb8.js\"");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=plugin.min.js_12;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_12", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t194.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/table/plugin.min-244eafe366912792b5d06f41158afc6b.js\"");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=plugin.min.js_13;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_13", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t195.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/link/plugin.min-31f50d6cf1aaa8a76265891d4ce96f2f.js\"");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=plugin.min.js_14;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_14", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t196.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/plugins/code/plugin.min-05b914fba3517b9744bebc5f8aba4918.js\"");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=plugin.min.js_15;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("plugin.min.js_15", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t197.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/skins/lightgray/skin.min-27829e218ef3e346f33d88127bb326b3.css\"");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=skin.min.css_3;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("skin.min.css_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t198.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/skins/lightgray/content.min-8db73e017a6fd48f80352a66b2be8507.css\"");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=content.min.css_4;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("content.min.css_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t199.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	addDynatraceHeaderTest("TSN=S05_T14_Archive;PC=websocket_6;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("websocket_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/005/kkmujdhx/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S05_T14_Archive",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T15_ClearFilter");

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

	addDynatraceHeaderTest("TSN=S05_T15_ClearFilter;PC=reports_8;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("reports_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/reports?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=reportName&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=numOfExecutions&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=dateCreated&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=tags&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&"
		"columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=state&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&"
		"order%5B0%5D%5Bdir%5D=asc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&searchString=&sharedwith=&includeArchived=false&direction=asc&sort=isFavorite&_=1591018390467", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S05_T15_ClearFilter",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S05_T16_Logout");

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

	addDynatraceHeaderTest("TSN=S05_T16_Logout;PC=logout;SI=LoadRunner;LSN=S03_AdhocReport_GenReport;");
	web_url("logout", 
		"URL=https://pvr-perf.rxlogix.com/reports/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/report/index", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S05_T16_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}