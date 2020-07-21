Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Safari/537.36");

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

	web_url("auth", 
		"URL=https://pvr-perf.rxlogix.com/reports/login/auth", 
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

	web_add_header("If-None-Match", 
		"52a0fba2dc1c9fec37ce65845fb7ad8e09c960fb");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=83", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t9.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_concurrent_start(NULL);

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t11.inf", 
		LAST);

	web_concurrent_end(NULL);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Accept");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_concurrent_start(NULL);

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCaqJjitNkEYsEgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCaqJjitNkEYsEgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t15.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("issuetoken", 
		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"Body=force=false&response_type=token&scope=https://www.googleapis.com/auth/calendar.readonly+https://www.googleapis.com/auth/cast-edu-messaging+https://www.googleapis.com/auth/clouddevices+https://www.googleapis.com/auth/hangouts+https://www.googleapis.com/auth/hangouts.readonly+https://www.googleapis.com/auth/meetings+https://www.googleapis.com/auth/plus.peopleapi.readwrite+https://www.googleapis.com/auth/userinfo.email&client_id="
		"919648714761-55j965o0km033psv3i9qls5mo3qtdrb0.apps.googleusercontent.com&origin=pkedcjkdefgpdelpbcmbmeomcjbeemfm&lib_ver=83.0.4103.61&release_channel=stable&device_id=e06c8409-4e65-402e-823f-f31b85a1565a&device_type=chrome", 
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

	lr_start_transaction("S07_T01_OpenApplication");

	lr_end_transaction("S07_T01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S07_T02_Login");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Safari/537.36");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-83.0.4103.61");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:582826108&cup2hreq=b47214f1d0b5db20116d863488f4543d73222d558b0da95ec99ee335c3fc371d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{98b3caf5-6116-4243-87c4-1d7116192a0a}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{02a23380-4c4f-418e-a7db-ebc8e8b90d79}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{7d54334d-c54e-45f7-960d-1832a7b3b10c}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{1aaf734b-bcd6-4b7d-b2a3-01a964174af6}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\""
		"{7c62b647-64a8-440b-ae8a-6752f07b6f7e}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.693458e8d61b08ad38d9dceec8d6204a74cfc0952a39dca6d1e6d4828a5cbcf4\"}]},\"ping\":{\"ping_freshness\":\"{6caf6007-8b57-4874-ab82-b997a02144e9}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"1.11.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\""
		":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{05035f49-cfe9-466c-8623-e937b89936f8}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{c6118692-b206-4912-83e1-e1ea29075e9e}\",\"rd\":4901},\"updatecheck\":{},\""
		"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.2ab2be7a7c283b0e4ec01de815baab251360d04ad22206876428ad1cbedc446f\"}]},\"ping\":{\"ping_freshness\":\"{f9f62a77-fae8-4de4-9468-59c2487a929b}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"8320.407.0.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\","
		"\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"83.0.4103.61\",\"protocol\":\"3.1\",\"requestid\":\"{a73d3d70-7a07-4da9-b7eb-992de5c210fc}\",\"sessionid\":\"{74021e20-5700-4b5f-a76a-b3467d69f327}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.61\"}}", 
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
		"Name=_csrf", "Value=9047c1a1-03d0-4f63-985f-d0883635a2ec", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

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

	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fuelux/fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack/gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t43.inf", 
		LAST);

	web_revert_auto_header("Accept");

	web_revert_auto_header("Accept-Language");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,llkgjffcdpffmhiakmfcdcblohccpfmo,mimojjlkmoijpicakmndhoigimigcmbb,hnimpnehoodheedghdeeijklkeaacbdc,aemomkdncapdnfajjbbcbdebjljbpmpj,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,gkmgaooipdjhmangpemjhigmamcehddo,gcmjkmgdlgnkkcocmoeiminaijmmjnii,ehgidpndbllacpjalkiimkbadgjfnnmc,copjbmjbojbakpaedmpkhmiplmmehfck,ggkkehgbnfjpeggfpleeakpidbkibbmn,jflookgnkcckhobaglndicnbbgbonegd,bklopemakmnopmghhmccadeonafabnal,"
		"hfnkpimlhhgieaddgfemjhofmfblmnib");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-83.0.4103.61");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:780928199&cup2hreq=17a2a21864b6add6fb9e8e890f645abebeddb239f95b11c3f58a01b9b97906b1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{6dfdb0fc-0856-413d-8bbe-a770ee6b3bbd}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{66d07b2b-b9d7-4493-9c92-242d364e6160}\",\"rd\":4901},\"updatecheck\":{},\""
		"version\":\"4.10.1679.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{6e59ac53-4e22-47ad-aa91-1f00f94a7c47}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GCEU\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.e03bbdaab3b8f98164302f2b1d5a623bd5f6f393cc5279cf553329eed3d7b993\"}]},\"ping\":{\"ping_freshness\":\"{1adc9422-2a0b-4c93-b6ed-5e37780544ab}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"32.0.0.371\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{02a0d42a-5e0d-41db-a93d-98f9459b8786}\",\"rd\":4901},\"updatecheck\":{},"
		"\"version\":\"0.57.44.2492\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{377bb22e-902b-432f-afb4-d73fcdfc786a}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\""
		"}]},\"ping\":{\"ping_freshness\":\"{e0cbc766-520d-4014-b134-d17899413834}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{7b3e49b1-47a4-4d81-b9fa-88fd2a8e8802}\",\"rd\":4901},\"updatecheck\":{},\""
		"version\":\"42\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a94e96f52af7838519aac1ae4ef68686817be9661165e20964f81c2b5bec7740\"}]},\"ping\":{\"ping_freshness\":\"{f2ed99ea-d047-4bc8-b652-add421a591a2}\",\"rd\":4901},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"83.236.200\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\""
		"GCEU\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962\"}]},\"ping\":{\"ping_freshness\":\"{4980315b-23b0-4e6d-bd61-2c230b4c10dd}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"9.12.0\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,"
		"\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{6a878825-1a97-4224-93fa-f38d7c117fcc}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GCEU\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]"
		"},\"ping\":{\"ping_freshness\":\"{1304c5bc-d98b-4071-927b-e65512b36104}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.59f80dfc20335b1b6c4562bf68e07f7eeb1ac8b6f5d3099beefa6e130a1ab368\"}]},\"ping\":{\"ping_freshness\":\"{8e623631-0385-4e87-95d1-c33396cb0342}\",\"rd\":4901},\""
		"updatecheck\":{},\"version\":\"2020.5.17.1142\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b67e7c612f515bc4d4e1974255207d791f1a3f3c66293669b00c50dc6476bbba\"}]},\"ping\":{\"ping_freshness\":\"{3378bd7a-b085-4a25-b692-bb42a7ba8140}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"1260\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\""
		"GCEU\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{ae5339a3-335e-40d7-a2d6-1e8bdd42af96}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.9b90195d524573e136506ec60ed90404a1c0f7a9e9a0ba8a75f778f2bd510d32\"}]},\"ping\":{\"ping_freshness\":\"{923c93a9-e08c-402f-9173-65b745abeeca}\",\"rd\":4901},\"updatecheck\":{},\"version\":\"5909\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"83.0.4103.61\",\"protocol\":\"3.1\",\"requestid\""
		":\"{04e3f415-e25d-4c7d-a5db-5eae5df1f6b5}\",\"sessionid\":\"{88f80156-9fd3-44d0-8fb9-55ece37341dc}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.61\"}}", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t49.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEs4BCWbPMLGRU9eNEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3QcSOwEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw3JlP8vEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEs4BCWbPMLGRU9eNEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3QcSOwEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw3JlP8vEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAiABILDSITCW4SABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiABILDSeO13kSABoAIgASCw09LLzYEgAaACIAGgASPwmScaNDN_x9xRILDYoEHBMSABoAIgASCw2qMWopEgAaACIAEgsNqjFqKRIAGgAiABILDT0svNgSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t50.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("index", 
		"URL=https://pvr-perf.rxlogix.com/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("latestAdhocReport", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t54.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("latestPeriodicReport", 
		"URL=https://pvr-perf.rxlogix.com/reports/periodicReportConfigurationRest/latestPeriodicReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("32180", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591089585625", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_concurrent_start(NULL);

	web_url("dataTables_en.json_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t58.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t59.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t60.inf", 
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

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/173/npxjgxf9/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"event\":[{\"download_time_ms\":10938,\"downloaded\":14108,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"1261\",\"previousversion\":\"1260\",\"total\":14108,\"url\":\"http://redirector.gvt1.com/edgedl/release2/NEJ8A8-CetctcG-c-N8Okg_1261/e8oTilh7zAYz0wQNK5LAjg\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\""
		"1.71021353775e54037eee623d49c2cd340a185da260bb6c351ee4b58ccc912c74\",\"nextversion\":\"1261\",\"previousfp\":\"1.b67e7c612f515bc4d4e1974255207d791f1a3f3c66293669b00c50dc6476bbba\",\"previousversion\":\"1260\"}],\"version\":\"1261\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"83.0.4103.61\",\"protocol\":\"3.1\",\"requestid\":\""
		"{be69aeed-f5c9-4dec-8468-c2c54feabff8}\",\"sessionid\":\"{88f80156-9fd3-44d0-8fb9-55ece37341dc}\",\"updaterversion\":\"83.0.4103.61\"}}", 
		LAST);

	lr_end_transaction("S07_T02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S07_T03_NavigateAggregateReport_NewReport");

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

	web_url("create", 
		"URL=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t63.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t64.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t65.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("dateRange-114c7d1894185a1583d21cb5f436038a.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/dateRange-114c7d1894185a1583d21cb5f436038a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t67.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t68.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t69.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t70.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t72.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t73.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("periodicReport-d7d9353e8fb7cc172ac9a0cf79dc2731.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/periodicReport-d7d9353e8fb7cc172ac9a0cf79dc2731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t74.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t75.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t76.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t77.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t78.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t79.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
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

	web_url("en.json_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t71.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t81.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t85.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t86.inf", 
		LAST);

	web_url("emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t87.inf", 
		LAST);

	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("reportTask-49c4760386c1065c2578b863f8c61900.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/reportTask-49c4760386c1065c2578b863f8c61900.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t91.inf", 
		LAST);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t92.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("allEmails", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fetchDateRangeTypesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchEvaluateCaseDatesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=false&dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchEvaluateCaseDateSubmissionForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("allEmailsForCC", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("32180_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591089625231", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sharedWithValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithValues?ids=User_32180", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("polymer.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("theme.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("polymer-mini.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("plugin.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("plugin.min.js_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("plugin.min.js_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t111.inf", 
		LAST);

	web_url("plugin.min.js_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("plugin.min.js_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("polymer-micro.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

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

	web_url("websocket_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/889/5gqgig28/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_concurrent_start(NULL);

	web_url("skin.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t116.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("content.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t117.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t118.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t119.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("S07_T03_NavigateAggregateReport_NewReport",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S07_T04_ClickProdLookUp");

	lr_end_transaction("S07_T04_ClickProdLookUp",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S07_T05_SearchProduct");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-CSRF-TOKEN", 
		"63048780-eb9a-4336-81db-52c77236fa70");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("searchViews", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=MRx0518", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={}", ENDITEM, 
		LAST);

	lr_end_transaction("S07_T05_SearchProduct",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S07_T06_SelectProduct");

	web_custom_request("getSelectedItem", 
		"URL=https://pvr-perf.rxlogix.com/reports/productDictionary/getSelectedItem?productId=105732&dataSource=pva&dictionaryLevel=3&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=105732", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1591089625232", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-CSRF-TOKEN", 
		"63048780-eb9a-4336-81db-52c77236fa70");

	web_submit_data("getPreLevelProductParents_2", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=2", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=102566", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_3", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=120481", ENDITEM, 
		LAST);

	lr_end_transaction("S07_T06_SelectProduct",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S07_T07_AddSection1_ChooseReportTemplate");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_url("getTemplateList", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1591089625233", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForTemplate", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/customSQLValuesForTemplate?templateId=24615&_=1591089625234", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("poiInputsForTemplate", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/poiInputsForTemplate?templateId=24615&_=1591089625235", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S07_T07_AddSection1_ChooseReportTemplate",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S07_T08_AddSection1_ChooseQuery");

	web_url("getQueryList", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryList?isQueryTargetReports=true&term=&page=1&max=30&oldSelectedValue=&_=1591089625236", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuery", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuery?queryId=29556&_=1591089625237", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForQuery", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/customSQLValuesForQuery?queryId=29556&_=1591089625238", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=masterCloseDate&_=1591089625240", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuerySet", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuerySet?queryId=29556&_=1591089625239", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKEAwnvDmSWh7dT-hILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKEAwnvDmSWh7dT-hILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDRKF8zMSABoAIgASCw2RYZVOEgAaACIAEgsNqki0AxIAGgAiABILDdB1GPwSABoAIgASCw2RYZVOEgAaACIAEg"
		"sN3s2S-BIAGgAiABILDVAOKOsSABoAIgASCw1zq_AfEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t134.inf", 
		LAST);

	web_url("reportFieldsForQueryValue_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=masterCloseDate&_=1591089625241", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S07_T08_AddSection1_ChooseQuery",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S07_T09_AddSection2_ChooseReportTemplate");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKRAwmS67ZS5vJduRILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKRAwmS67ZS5vJduRILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDRKF8zMSABoAIgASCw2RYZVOEgAaACIAEgsNqki0AxIAGgAiABILDdB1GPwSABoAIgASCw2RYZVOEgAaACIAEg"
		"sN3s2S-BIAGgAiABILDVAOKOsSABoAIgASCw1zq_AfEgAaACIAEgsN04T2TBIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t136.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1591089625242", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getTemplateList_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1591089625243", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForTemplate_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/customSQLValuesForTemplate?templateId=24798&_=1591089625244", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("poiInputsForTemplate_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/poiInputsForTemplate?templateId=24798&_=1591089625245", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t140.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S07_T09_AddSection2_ChooseReportTemplate",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S07_T10_AddSection2_ChooseQuery");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKeAwnMIqNXpIT0wBILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKeAwnMIqNXpIT0wBILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDRKF8zMSABoAIgASCw2RYZVOEgAaACIAEgsNqki0AxIAGgAiABILDdB1GPwSABoAIgASCw2RYZVOEgAaACIAEg"
		"sN3s2S-BIAGgAiABILDVAOKOsSABoAIgASCw1zq_AfEgAaACIAEgsN04T2TBIAGgAiABILDaVj9BgSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("getQueryList_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryList?isQueryTargetReports=true&term=&page=1&max=30&oldSelectedValue=&_=1591089625246", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuery_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuery?queryId=29531&_=1591089625247", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForQuery_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/customSQLValuesForQuery?queryId=29531&_=1591089625248", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuerySet_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuerySet?queryId=29531&_=1591089625249", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=doseRegimensPackageId&_=1591089625250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=doseRegimensLotNo&_=1591089625251", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=doseRegimensPackageId&_=1591089625252", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=doseRegimensPackageId&_=1591089625253", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=doseRegimensLotNo&_=1591089625254", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=doseRegimensLotNo&_=1591089625255", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S07_T10_AddSection2_ChooseQuery",LR_AUTO);

	lr_think_time(3);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_concurrent_start(NULL);

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMODMuMC40MTAzLjYxGikIBRABGhsKDQgFEAYYASIDMDAxMAEQ3dYIGgIYB35JcxoiBCABIAIoARopCAEQARobCg0IARAGGAEiAzAwMTABEPK6BxoCGAe8uNnmIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARCrwgcaAhgHe0zlgSIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQy8EHGgIYB_MVFqMiBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgHMbHJSCIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQphoaAhgHB9CctyIEIAEgAigEGicICRABGhkKDQgJEAYYASIDMDAxMAYQAxoCGAd8Zz-3IgQgASACKAYaKAgPEAEaGgoNCA8QBhgBIgMwMDEwARCCLRoCGAcfvoSdIgQgASACKAEaJwgKEAgaGQ"
		"oNCAoQCBgBIgMwMDEwARAFGgIYB6oISBciBCABIAIoARonCAkQARoZCg0ICRAGGAEiAzAwMTABEBsaAhgHzNwFXCIEIAEgAigBGigICBABGhoKDQgIEAYYASIDMDAxMAEQ9ggaAhgHn8D8HyIEIAEgAigBGigIDRABGhoKDQgNEAYYASIDMDAxMAEQn3QaAhgHbGCkfSIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQ2toDGgIYB1-09M0iBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABELsDGgIYBzjOgowiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t152.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKrAwkZ1x2jWKz9VxILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKrAwkZ1x2jWKz9VxILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDRKF8zMSABoAIgASCw2RYZVOEgAaACIAEgsNqki0AxIAGgAiABILDdB1GPwSABoAIgASCw2RYZVOEgAaACIAEg"
		"sN3s2S-BIAGgAiABILDVAOKOsSABoAIgASCw1zq_AfEgAaACIAEgsN04T2TBIAGgAiABILDaVj9BgSABoAIgASCw3cSDAfEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t153.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_start_transaction("S07_T11_AddSection3_ChooseReportTemplate");

	web_url("getTemplateList_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1591089625256", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForTemplate_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/customSQLValuesForTemplate?templateId=24902&_=1591089625257", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("poiInputsForTemplate_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/poiInputsForTemplate?templateId=24902&_=1591089625258", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S07_T11_AddSection3_ChooseReportTemplate",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1591089625259", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S07_T12_AddSection3_ChooseQuery");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRK4Awlfb-eT-sJ2WxILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRK4Awlfb-eT-sJ2WxILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDRKF8zMSABoAIgASCw2RYZVOEgAaACIAEgsNqki0AxIAGgAiABILDdB1GPwSABoAIgASCw2RYZVOEgAaACIAEg"
		"sN3s2S-BIAGgAiABILDVAOKOsSABoAIgASCw1zq_AfEgAaACIAEgsN04T2TBIAGgAiABILDaVj9BgSABoAIgASCw3cSDAfEgAaACIAEgsNS0JBfhIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t158.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getQueryList_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryList?isQueryTargetReports=true&term=&page=1&max=30&oldSelectedValue=&_=1591089625260", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuery_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuery?queryId=30099&_=1591089625261", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForQuery_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/customSQLValuesForQuery?queryId=30099&_=1591089625262", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuerySet_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuerySet?queryId=30099&_=1591089625263", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=masterPbrerBucket&_=1591089625264", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=masterPbrerBucket&_=1591089625265", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=masterPbrerBucket&_=1591089625266", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S07_T12_AddSection3_ChooseQuery",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S07_T13_Select_ReportDestinations");

	web_url("getReportingDestinations", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getReportingDestinations?term=&page=1&max=30&_=1591089625267", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getReportingDestinations_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getReportingDestinations?term=&page=1&max=30&_=1591089625268", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1591089625269", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S07_T13_Select_ReportDestinations",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S07_T14_SaveRun");

	web_url("keep-alive_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1591089625270", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
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

	web_submit_data("run", 
		"Action=https://pvr-perf.rxlogix.com/reports/periodicReport/run", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/periodicReport/create", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value=32180", ENDITEM, 
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[{\"name\":\"MRX0518 (3475 SOLUTION FOR INJECTION STUDY) Capsule\",\"id\":\"105732\"}],\"4\":[]}", ENDITEM, 
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
		"Name=configurationInstance.globalDateRangeInformation.id", "Value=", ENDITEM, 
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
		"Name=templateQueries[0].version", "Value=", ENDITEM, 
		"Name=templateQueries[0].id", "Value=", ENDITEM, 
		"Name=templateQueries[0].dynamicFormEntryDeleted", "Value=false", ENDITEM, 
		"Name=templateQueries[0].new", "Value=true", ENDITEM, 
		"Name=templateQueries[0].template", "Value=24615", ENDITEM, 
		"Name=templateQueries[_clone]._draftOnly", "Value=", ENDITEM, 
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
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUMULATIVE", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[0].field", "Value=masterCloseDate", ENDITEM, 
		"Name=templateQuery0.qev[0].operator", "Value=GREATER_THAN_OR_EQUAL", ENDITEM, 
		"Name=selectValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[0].value", "Value=02-Jun-2020", ENDITEM, 
		"Name=templateQuery0.qev[0].key", "Value=1", ENDITEM, 
		"Name=templateQuery0.qev[0].specialKeyValue", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[0].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[1].field", "Value=masterCloseDate", ENDITEM, 
		"Name=templateQuery0.qev[1].operator", "Value=LESS_THAN_OR_EQUAL", ENDITEM, 
		"Name=selectValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[1].value", "Value=02-Jun-2020", ENDITEM, 
		"Name=templateQuery0.qev[1].key", "Value=2", ENDITEM, 
		"Name=templateQuery0.qev[1].specialKeyValue", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[1].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=templateQueries[0].validQueries", "Value=29556", ENDITEM, 
		"Name=templateQueries[1].version", "Value=", ENDITEM, 
		"Name=templateQueries[1].id", "Value=", ENDITEM, 
		"Name=templateQueries[1].dynamicFormEntryDeleted", "Value=false", ENDITEM, 
		"Name=templateQueries[1].new", "Value=true", ENDITEM, 
		"Name=templateQueries[1].template", "Value=24798", ENDITEM, 
		"Name=templateQueries[_clone]._draftOnly", "Value=", ENDITEM, 
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
		"Name=templateQueries[1].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUMULATIVE", ENDITEM, 
		"Name=templateQueries[1].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=templateQueries[1].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[1].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=templateQuery1.qev[0].field", "Value=doseRegimensPackageId", ENDITEM, 
		"Name=templateQuery1.qev[0].operator", "Value=EQUALS", ENDITEM, 
		"Name=templateQuery1.qev[0].value", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=02-Jun-2020", ENDITEM, 
		"Name=selectSelect", "Value=", ENDITEM, 
		"Name=templateQuery1.qev[0].key", "Value=1", ENDITEM, 
		"Name=templateQuery1.qev[0].specialKeyValue", "Value=", ENDITEM, 
		"Name=templateQuery1.qev[0].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=templateQuery1.qev[1].field", "Value=doseRegimensLotNo", ENDITEM, 
		"Name=templateQuery1.qev[1].operator", "Value=EQUALS", ENDITEM, 
		"Name=templateQuery1.qev[1].value", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=02-Jun-2020", ENDITEM, 
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
		"Name=templateQueries[2].template", "Value=24902", ENDITEM, 
		"Name=templateQueries[_clone]._draftOnly", "Value=", ENDITEM, 
		"Name=templateQueries[2].header", "Value=", ENDITEM, 
		"Name=templateQueries[2].title", "Value=", ENDITEM, 
		"Name=templateQueries[2].footer", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._headerProductSelection", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._headerDateRange", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._displayMedDraVersionNumber", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._privacyProtected", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._blindProtected", "Value=", ENDITEM, 
		"Name=templateQueries[2].query", "Value=30099", ENDITEM, 
		"Name=templateQueries[2].queryLevel", "Value=CASE", ENDITEM, 
		"Name=templateQueries[2].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUMULATIVE", ENDITEM, 
		"Name=templateQueries[2].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=templateQueries[2].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[2].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=templateQuery2.qev[0].field", "Value=masterPbrerBucket", ENDITEM, 
		"Name=templateQuery2.qev[0].operator", "Value=EQUALS", ENDITEM, 
		"Name=templateQuery2.qev[0].copyPasteValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=02-Jun-2020", ENDITEM, 
		"Name=delimitertemplateQuery2qev0", "Value=none", ENDITEM, 
		"Name=templateQuery2.qev[0].value", "Value=", ENDITEM, 
		"Name=templateQuery2.qev[0].key", "Value=1", ENDITEM, 
		"Name=templateQuery2.qev[0].specialKeyValue", "Value=", ENDITEM, 
		"Name=templateQuery2.qev[0].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=templateQueries[2].validQueries", "Value=30099", ENDITEM, 
		"Name=reportName", "Value=PBRER MRX0518 (3475 SOLUTION FOR INJECTION STUDY) Capsule_PerfTest", ENDITEM, 
		"Name=periodicReportType", "Value=PBRER", ENDITEM, 
		"Name=description", "Value=PBRER MRX0518 (3475 SOLUTION FOR INJECTION STUDY) Capsule_PerfTest", ENDITEM, 
		"Name=_generateCaseSeries", "Value=", ENDITEM, 
		"Name=_generateDraft", "Value=", ENDITEM, 
		"Name=_qualityChecked", "Value=", ENDITEM, 
		"Name=_isTemplate", "Value=", ENDITEM, 
		"Name=sharedWith", "Value=User_32180", ENDITEM, 
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
		"Name=schedulerTime", "Value=2020-06-02 09:20:21", ENDITEM, 
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-06-02T09:20Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM, 
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM, 
		"Name=dueInDays", "Value=", ENDITEM, 
		"Name=primaryReportingDestination", "Value=ARIES AUTO", ENDITEM, 
		"Name=reportingDestinations", "Value=ARIES AUTO", ENDITEM, 
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
		"Name=tasks", "Value=", ENDITEM, 
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
		"Name=blankValuesJSON", "Value=", ENDITEM, 
		"Name=_csrf", "Value=63048780-eb9a-4336-81db-52c77236fa70", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t171.inf", 
		LAST);

	web_url("executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t173.inf", 
		LAST);

	web_url("pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t174.inf", 
		LAST);

	web_url("pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t175.inf", 
		LAST);

	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t176.inf", 
		LAST);

	web_url("executionStatus-abc243051811af7ce55db349117755f2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/executionStatus-abc243051811af7ce55db349117755f2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t177.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t172.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_concurrent_start(NULL);

	web_url("dataTables_en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t178.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("datepicker.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t179.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("filter_panel.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t180.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLoAQllYL_QY_F4qhILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN46PAYhIAGgAiABILDQzy6RMSABoAIgASCw2RYZVOEgAaACIAEgsNgZDxfBIAGgAiABILDarbt4wSABoAIgASCw2ccuK3EgAaACIAEgsNkWGVThIAGgAiABILDfGsS9ESABoAIgASCw1zq_AfEgAaACIAEgsNlJCS-hIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLoAQllYL_QY_F4qhILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN46PAYhIAGgAiABILDQzy6RMSABoAIgASCw2RYZVOEgAaACIAEgsNgZDxfBIAGgAiABILDarbt4wSABoAIgASCw2ccuK3EgAaACIAEgsNkWGVThIAGgAiABILDfGsS9ESABoAIgASCw1zq_AfEgAaACIAEgsNlJCS-hIAGgAiABILDZFhlU4SABoAIgASCw0GTls8EgAaACIAEgsNBk5bPBIAGgAiABILDYGQ8XwSABoAIgASCw2BkPF8EgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t181.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("32180_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591089932451", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("executionStatus", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=reportName&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=periodicReportType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=version&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=executionStatus&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=false&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=runDate&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionTime&columns%5B6%5D%5Bname%5D=&"
		"columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=frequency&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=sharedWith&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D="
		"false&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=deliveryMedia&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=false&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=runDate&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=5&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&searchString=&direction=desc&sort=runDate&status=GENERATING&_=1591089932452", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_concurrent_start(NULL);

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAglUdIEOo1MWhxILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN4hsEvhIAGgAiABILDb2Fgw8SABoAIgASCw3jo8BiEgAaACIAEgsNDPLpExIAGgAiABILDZFhlU4SABoAIgASCw2BkPF8EgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw2RYZVOEgAaACIAEgsN8axL0RIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAglUdIEOo1MWhxILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN4hsEvhIAGgAiABILDb2Fgw8SABoAIgASCw3jo8BiEgAaACIAEgsNDPLpExIAGgAiABILDZFhlU4SABoAIgASCw2BkPF8EgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw2RYZVOEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw2UkJL6EgAaACIAEgsNkWGVThIAGgAiABILDQZOWzwSABoAIgASCw0GTls8EgAaACIAEgsNgZDxfBIAGgAiABILDYGQ8XwSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t185.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKpAgnX6zQ3zjIUpxILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN4hsEvhIAGgAiABILDeNr0NgSABoAIgASCw0LYtQYEgAaACIAEgsNDPLpExIAGgAiABILDbxTUjESABoAIgASCw3jo8BiEgAaACIAEgsNvYWDDxIAGgAiABILDZFhlU4SABoAIgASCw2BkPF8EgAaACIAEgsNqtu3jBIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKpAgnX6zQ3zjIUpxILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN4hsEvhIAGgAiABILDeNr0NgSABoAIgASCw0LYtQYEgAaACIAEgsNDPLpExIAGgAiABILDbxTUjESABoAIgASCw3jo8BiEgAaACIAEgsNvYWDDxIAGgAiABILDZFhlU4SABoAIgASCw2BkPF8EgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw2RYZVOEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw2UkJL6EgAaACIAEgsNkWGVThIAGgAiABILDQZOWzwSABoAIgASCw0GTls8EgAaACIAEgsNgZDxfBIAGgAiABILDYGQ8XwSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t186.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("S07_T14_SaveRun",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_custom_request("xhr_streaming", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/249/2_qi3txy/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("xhr", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/249/mvcmiu8e/xhr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	lr_start_transaction("S07_T15_Logout");

	web_revert_auto_header("Origin");

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

	web_url("logout", 
		"URL=https://pvr-perf.rxlogix.com/reports/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S07_T15_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}