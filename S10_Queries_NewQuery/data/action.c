Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

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

	web_url("auth", 
		"URL=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
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

	web_url("login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t2.inf", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"d63ac05234bb78874b91793dc6394a3444e5f271");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=81", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Dest", 
		"style");

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

	web_url("customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
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

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_concurrent_start(NULL);

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCaqJjitNkEYsEgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCaqJjitNkEYsEgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t12.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_start_transaction("S02_T01_OpenApplication");

	lr_end_transaction("S02_T01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T02_Login");

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
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_add_cookie("ANID=AHWqTUkqyVdWgghjimMr32z7kYBtZFSasCXMzBtuRmpQ2gep2-pogoQzrFhDF9mE; DOMAIN=accounts.google.com");

	web_add_cookie("CONSENT=YES+IN.en+202003; DOMAIN=accounts.google.com");

	web_add_cookie("SID=xAfeCisteLgrTfHyidXG5mED13o_vYC7Ifq2gBrdZ-5Ge3CLndWzAGLEhCytk0xbBQ4V6w.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=xAfeCisteLgrTfHyidXG5mED13o_vYC7Ifq2gBrdZ-5Ge3CLJYdaZAu5tpUrGiTXklvbPQ.; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=o.mail.google.com|s.IN|s.youtube:xAfeCkeJlLucDLipNEriBjGUr3wa4ETiINxtJXyuQhiiH5MqTvSYjj3MHiDzl4WWJ4Otlg.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=o.mail.google.com|s.IN|s.youtube:xAfeCkeJlLucDLipNEriBjGUr3wa4ETiINxtJXyuQhiiH5MqUWNdF-WJ7K4uvBF2hfypHA.; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=AtcQvVbj_lWNu8akw; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=Acd9cKKEfc1AEFd14; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=MfZfhKW9tY_A72Z0/ATuvjloeY4U9dqfj5; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=vNlbU9XKNyTbZqpT/AkC04soKVFjsjtH1t; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-HSID=AtcQvVbj_lWNu8akw; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-SSID=Acd9cKKEfc1AEFd14; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-APISID=MfZfhKW9tY_A72Z0/ATuvjloeY4U9dqfj5; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=vNlbU9XKNyTbZqpT/AkC04soKVFjsjtH1t; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI7VPrQwAn0wTOAq6KkPKs3TvtJPC3hg23WaQufvf8APLAfbQGctLo6EhbroAQ1wWLJMNIq-2HhFV3PaDBjtc-Kf5z99P012QfOurZk77mz2u7ELJazXhXj5BJElT_LTTPozvlMmsOZexfEl9OSjs4pWKGj7sg; DOMAIN=accounts.google.com");

	web_add_cookie("GAPS=1:0xl9AxOSGYD9ETgFkVw9IWqURV5iXORbwfLb8FB5lnLQ2EROzjUb4313Yr_4nNziOA9cHc6kgHrLn3KVnYW9q0PEZbrR7Q:N0RdW6OVt7AiCtTv; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:0xl9AxOSGYD9ETgFkVw9IWqURV5iXORbwfLb8FB5lnLQ2EROzjUb4313Yr_4nNziOA9cHc6kgHrLn3KVnYW9q0PEZbrR7Q:N0RdW6OVt7AiCtTv; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQI448B; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2020-05-21-11; DOMAIN=accounts.google.com");

	web_add_cookie("NID=204=shXsS1Wqn3s7qE1XjAThQA-l6VxizZMvJZS4eoL-LnZBLL3bX8gmp-dBKLXDqcH0sitYXuOpNbkep67GSaCzVECWmNWzJMVPK7tguIxQHQl1R1Zur-LpiX8X-YT2NHOVn9VWr8lmnnuItkoIJuAYlE93fL9AYg6Wj7i60sNDvT1WDBVO-je3ZpbCxzsGh7TtIZJAwM_hawYQgNEiV3AA-jPl_aqjZO53FOlj; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AJi4QfEiPiIEqkcihsA-4mPOhQRjtaENJ2X_LALGtgS4GwMn0ltMKcYhgzL599SoQGGm3H0YFg; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc&scope=https://www.googleapis.com/auth/firebase.messaging", 
		LAST);

	web_custom_request("token_3", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,llkgjffcdpffmhiakmfcdcblohccpfmo,hnimpnehoodheedghdeeijklkeaacbdc,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,hfnkpimlhhgieaddgfemjhofmfblmnib,aemomkdncapdnfajjbbcbdebjljbpmpj,mimojjlkmoijpicakmndhoigimigcmbb,ehgidpndbllacpjalkiimkbadgjfnnmc,gkmgaooipdjhmangpemjhigmamcehddo,ggkkehgbnfjpeggfpleeakpidbkibbmn,bklopemakmnopmghhmccadeonafabnal,jflookgnkcckhobaglndicnbbgbonegd,gcmjkmgdlgnkkcocmoeiminaijmmjnii,"
		"copjbmjbojbakpaedmpkhmiplmmehfck");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-81.0.4044.138");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:824009228&cup2hreq=02b6dddbaab026241974b9e40f3bb668da8ac589ed0ca936f55202d4f98c99e1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{ae00a484-8927-48a9-aebb-4e5367d7825d}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{042be108-1dc6-453a-aecf-7be6fe9c177e}\",\"rd\":4889},\"updatecheck\":{},\""
		"version\":\"4.10.1610.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{c011ca99-d41b-4ae3-98d1-825eff60c080}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{bffff2a4-e768-4b78-91fc-c0112b409866}"
		"\",\"rd\":4889},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{64aaaaff-67d7-4d27-a6d4-cb6a33e5d2d5}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{e14b49d9-febd-4263-b0d4-f3093fa69f89}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\""
		":{\"package\":[{\"fp\":\"1.345c030f9df340be11011917f5f9cf94950b2c6c572d903d540f55c06d7a04c1\"}]},\"ping\":{\"ping_freshness\":\"{d0adc90f-7901-4c3d-878d-35578ac1aeb9}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"5885\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{47d40eff-4e7a-44e1-9a2b-c33acdb95c4f}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\""
		",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e03bbdaab3b8f98164302f2b1d5a623bd5f6f393cc5279cf553329eed3d7b993\"}]},\"ping\":{\"ping_freshness\":\"{d81c0e9a-3eec-4729-88af-bfc7b1da4b44}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"32.0.0.371\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled"
		"\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{c5117989-1e98-483b-80dc-8ead54574b83}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.e1aca3e8ebc06fe8b3b386fbdf5ad3ed7f76af9651106fba33276ad48d28ae23\"}]},\"ping\":{\"ping_freshness\":\"{ba9b3080-bea4-47fe-b796-ea895fac042f}\",\"rd\":4889},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"81.235.200\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9:vf9@0.01\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.960902dc8f4d2cbad2d2137664ed122c041d795ba30a19c5a9e06cd0e2a2c65a\""
		"}]},\"ping\":{\"ping_freshness\":\"{687b923f-d1d4-42ff-820a-5d15c4ca2014}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"2020.5.11.1142\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GGLS\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{429e6754-30d6-4682-9dd2-f434390f86f0}\",\"rd\":4889},\"updatecheck"
		"\":{},\"version\":\"3\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ab7e2df9a8e054c87392ce0e745e046a18da9695f55b21ac624960ce8406ca0d\"}]},\"ping\":{\"ping_freshness\":\"{5ec8a2e1-b10f-451d-96ce-fe52741d844e}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"1150\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\""
		",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962\"}]},\"ping\":{\"ping_freshness\":\"{2ed71cd6-917f-4e38-a8ed-bd560e04f7f5}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"9.12.0\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GGLS\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\"{6120465f-0950-4095-b29f-b41f5761316f}\",\"rd\":4889},\"updatecheck\":{},\"version\":\"2018.9.6.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"81.0.4044.138\",\"protocol\":\"3.1\",\"requestid\":\""
		"{8ebb4d07-0c46-463a-a356-6576e194b5f5}\",\"sessionid\":\"{6616a8f2-83c7-44f2-9d9a-77801ca868e1}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"81.0.4044.138\"}}", 
		LAST);

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
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=Shiva.Prasad", ENDITEM, 
		"Name=password", "Value=Shiva@12345", ENDITEM, 
		"Name=_csrf", "Value=c74a79cd-5826-46bc-a33f-72b3f39964ea", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t26.inf", 
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
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/actionItem/actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
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

	web_url("highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
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

	web_url("deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
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

	web_url("jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t46.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
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

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t49.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("32180", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1590064542563", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("index", 
		"URL=https://pvr-perf.rxlogix.com/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("latestAdhocReport", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t54.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("dataTables_en.json", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("latestPeriodicReport", 
		"URL=https://pvr-perf.rxlogix.com/reports/periodicReportConfigurationRest/latestPeriodicReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_url("dataTables_en.json_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t57.inf", 
		LAST);

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
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/308/fcbx7yxr/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S02_T02_Login",LR_AUTO);

	lr_think_time(3);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEs4BCWbPMLGRU9eNEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3QcSOwEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw3JlP8vEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEs4BCWbPMLGRU9eNEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3QcSOwEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw3JlP8vEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAiABILDSITCW4SABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiABILDSeO13kSABoAIgASCw09LLzYEgAaACIAGgASPwmScaNDN_x9xRILDYoEHBMSABoAIgASCw10Sp6FEgAaACIAEgsNdEqehRIAGgAiABILDT0svNgSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t59.inf", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"event\":[{\"download_time_ms\":28129,\"downloaded\":10980,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"1151\",\"previousversion\":\"1150\",\"total\":10980,\"url\":\"http://redirector.gvt1.com/edgedl/release2/AKzTSIvgx6qgfFup7O7sO60_1151/Y1b6FXLtgE_oczQLjukxYw\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\""
		"1.094a904c3f9ebd0820927a69eb11471ffc8bf6530ee93cf562fb05e179d52b72\",\"nextversion\":\"1151\",\"previousfp\":\"1.ab7e2df9a8e054c87392ce0e745e046a18da9695f55b21ac624960ce8406ca0d\",\"previousversion\":\"1150\"}],\"version\":\"1151\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"81.0.4044.138\",\"protocol\":\"3.1\",\"requestid\":\""
		"{8ab53c9e-0d71-4e2a-a336-b7099c28b186}\",\"sessionid\":\"{6616a8f2-83c7-44f2-9d9a-77801ca868e1}\",\"updaterversion\":\"81.0.4044.138\"}}", 
		LAST);

	lr_start_transaction("S02_T03_NavigateQueries");

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
		"URL=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t61.inf", 
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
		"URL=https://pvr-perf.rxlogix.com/reports/assets/backbone/underscore-268f41aa82f0dc5a22db29498cf82e98.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t62.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t63.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("backbone-83afc07e6e9896174666287b5b17e98d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/backbone/backbone-83afc07e6e9896174666287b5b17e98d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t64.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t65.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("queryBuilder-4017c4701c53826b2919e00b908a338e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/query/queryBuilder-4017c4701c53826b2919e00b908a338e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t67.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("query-32b32fe1008b70e0042a67dec4a7793b.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/query-32b32fe1008b70e0042a67dec4a7793b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t69.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t70.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("select2-treeview-a19d774562c3ce40252e5c9866e9029b.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/select2-treeview-a19d774562c3ce40252e5c9866e9029b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t71.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t72.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("select2-treeview-a36da271e6071724e73d966828e9bc72.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/select2/select2-treeview-a36da271e6071724e73d966828e9bc72.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t73.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t74.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t68.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t75.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("copyPasteValues-91485a8858562f9b9c987f8ed40139e6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/query/copyPasteValues-91485a8858562f9b9c987f8ed40139e6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t82.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t83.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("32180_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1590064583061", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t84.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sharedWithValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithValues?ids=User_32180", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t85.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t86.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("userDefaultReportFieldsOpts", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/userDefaultReportFieldsOpts?username=Shiva.Prasad&amp;lastModified=1590064525440en&sourceId=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-mini.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t89.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t90.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getNumOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators?_=1590064583063", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators?_=1590064583064", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators?_=1590064583062", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getAllKeywords", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getAllKeywords?_=1590064583066", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators?_=1590064583065", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("extraValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/extraValues?lang=en&_=1590064583067", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

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

	web_url("websocket_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/896/2gexifx1/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t98.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("xhr_streaming", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/896/uqcwh6u3/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("xhr", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/896/qpge2978/xhr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	lr_end_transaction("S02_T03_NavigateQueries",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T04_AddTag");

	web_revert_auto_header("Origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("keep-alive", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1590064583068", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S02_T04_AddTag",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T05_Add_Criteria_1");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("possibleValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1590064583069", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S02_T05_Add_Criteria_1",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T06_Add_Criteria_2");

	web_url("possibleValues_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1590064583070", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S02_T06_Add_Criteria_2",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T07_Add_Criteria_3");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1590064583071", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("possibleValues_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1590064583072", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S02_T07_Add_Criteria_3",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T08_Click_Save");

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

	web_submit_data("save", 
		"Action=https://pvr-perf.rxlogix.com/reports/query/save?_csrf=36ff6843-40d7-44fb-98d5-763319bc718e", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/create", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value=32180", ENDITEM, 
		"Name=name", "Value=Q2_PT02", ENDITEM, 
		"Name=description", "Value=Q2_PT02", ENDITEM, 
		"Name=tags", "Value=Regulatory Needs", ENDITEM, 
		"Name=sharedWith", "Value=User_32180", ENDITEM, 
		"Name=_qualityChecked", "Value=", ENDITEM, 
		"Name=_nonValidCases", "Value=", ENDITEM, 
		"Name=nonValidCases", "Value=false", ENDITEM, 
		"Name=_icsrPadderAgencyCases", "Value=", ENDITEM, 
		"Name=icsrPadderAgencyCases", "Value=false", ENDITEM, 
		"Name=relatedListednessDSSelect", "Value=< Unspecified >", ENDITEM, 
		"Name=selectField", "Value=prodDrugsAbuse", ENDITEM, 
		"Name=selectOperator", "Value=EQUALS", ENDITEM, 
		"Name=selectValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=21-May-2020", ENDITEM, 
		"Name=selectRptField", "Value=", ENDITEM, 
		"Name=_isPOIInput", "Value=", ENDITEM, 
		"Name=_isRptField", "Value=", ENDITEM, 
		"Name=delimiter", "Value=none", ENDITEM, 
		"Name=JSONQuery", "Value={\"all\":{\"containerGroups\":[ {\"expressions\":[ {\"index\":\"0\",\"field\":\"caseRoutingPvrFollowupNum\",\"op\":\"EQUALS\",\"value\":\"\",\"key\":\"1\"}, {\"index\":\"1\",\"field\":\"patInfoPostalCode\",\"op\":\"EQUALS\",\"value\":\"\",\"key\":\"2\"}, {\"index\":\"2\",\"field\":\"prodDrugsAbuse\",\"op\":\"EQUALS\",\"value\":\"\",\"key\":\"3\"}],\"keyword\":\"and\"} ] } ,\"blankParameters\":[{\"key\":1,\"field\":\"caseRoutingPvrFollowupNum\",\"op\":\"EQUALS\",\"value\":\""
		"\"},{\"key\":2,\"field\":\"patInfoPostalCode\",\"op\":\"EQUALS\",\"value\":\"\"},{\"key\":3,\"field\":\"prodDrugsAbuse\",\"op\":\"EQUALS\",\"value\":\"\"}]}", ENDITEM, 
		"Name=hasBlanks", "Value=true", ENDITEM, 
		"Name=selectField", "Value=caseRoutingPvrFollowupNum", ENDITEM, 
		"Name=selectOperator", "Value=EQUALS", ENDITEM, 
		"Name=selectValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=", ENDITEM, 
		"Name=selectRptField", "Value=", ENDITEM, 
		"Name=_isPOIInput", "Value=", ENDITEM, 
		"Name=_isRptField", "Value=", ENDITEM, 
		"Name=selectField", "Value=patInfoPostalCode", ENDITEM, 
		"Name=selectOperator", "Value=EQUALS", ENDITEM, 
		"Name=selectValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=", ENDITEM, 
		"Name=selectRptField", "Value=", ENDITEM, 
		"Name=_isPOIInput", "Value=", ENDITEM, 
		"Name=_isRptField", "Value=", ENDITEM, 
		"Name=selectField", "Value=prodDrugsAbuse", ENDITEM, 
		"Name=selectOperator", "Value=EQUALS", ENDITEM, 
		"Name=selectValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=", ENDITEM, 
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
		"Name=edit", "Value=", ENDITEM, 
		"Name=Save", "Value=Save", ENDITEM, 
		"Name=_csrf", "Value=36ff6843-40d7-44fb-98d5-763319bc718e", ENDITEM, 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t108.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("32180_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1590064730040", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getDateOperators_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators?_=1590064730041", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators?_=1590064730042", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators?_=1590064730043", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators?_=1590064730044", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getAllKeywords_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getAllKeywords?_=1590064730045", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S02_T08_Click_Save",LR_AUTO);

	lr_think_time(3);

	web_url("extraValues_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/extraValues?lang=en&_=1590064730046", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-dd87a5cf24b5937b70d0c3c0464d82e3.html\"");

	web_url("polymer.html_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("possibleValues_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1590064730047", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1590064730048", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1590064730049", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-mini-3de02a513e44b348d07f3c57a6277c70.html\"");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("polymer-mini.html_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-micro-0c3678e50857ddb532ff7c8ce13cf1be.html\"");

	web_url("polymer-micro.html_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("xhr_streaming_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/680/gr5ks9tp/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("xhr_streaming_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/680/gr5ks9tp/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	lr_start_transaction("S02_T09_Click_Run");

	web_revert_auto_header("Origin");

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

	web_url("create_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32764", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_concurrent_start(NULL);

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINODEuMC40MDQ0LjEzOBopCAUQARobCg0IBRAGGAEiAzAwMTABEO7NCBoCGAeWDERrIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCLtAcaAhgHZOa2JCIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQo7oHGgIYBykP3v8iBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABENu4BxoCGAewZWd3IgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgiBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEJsaGgIYB5cEr7EiBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_tyIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ2ioaAhgHrSA9iSIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBRoCGAeqCEgXIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAbGgIYB8zcBVwiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEOkIGgIYB9_uRZYiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEIN0GgIYB7c816MiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEKbSAxoCGAcFHrlEIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCYAxoCGAcejDqxIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t130.inf", 
		LAST);

	web_url("configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t131.inf", 
		LAST);

	web_url("dateRange-114c7d1894185a1583d21cb5f436038a.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/dateRange-114c7d1894185a1583d21cb5f436038a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t132.inf", 
		LAST);

	web_url("deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t134.inf", 
		LAST);

	web_url("blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t137.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t133.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t142.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getQueryNameDescription", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryNameDescription?id=32764", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchEvaluateCaseDateSubmissionForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("allEmailsForCC", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fetchEvaluateCaseDatesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=true&dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchDateRangeTypesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("allEmails", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("32180_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1590064767386", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sharedWithValues_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithValues?ids=User_32180", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-dd87a5cf24b5937b70d0c3c0464d82e3.html\"");

	web_url("polymer.html_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getValuelessOperators_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("theme.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t158.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("getQueryNameDescription_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryNameDescription?id=32764", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-mini-3de02a513e44b348d07f3c57a6277c70.html\"");

	web_url("polymer-mini.html_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("customSQLValuesForQuery", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/customSQLValuesForQuery?queryId=32764", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuery", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuery?queryId=32764", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuerySet", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuerySet?queryId=32764", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=patInfoPostalCode", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-micro-0c3678e50857ddb532ff7c8ce13cf1be.html\"");

	web_url("polymer-micro.html_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("reportFieldsForQueryValue_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=prodDrugsAbuse", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=caseRoutingPvrFollowupNum", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("plugin.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t168.inf", 
		LAST);

	web_url("plugin.min.js_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t169.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("possibleValues_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("plugin.min.js_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t171.inf", 
		LAST);

	web_url("plugin.min.js_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t172.inf", 
		LAST);

	web_url("plugin.min.js_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t173.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Accept");

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

	web_url("websocket_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/273/8ri_5zlh/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("possibleValues_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_10", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_11", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_12", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("skin.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t180.inf", 
		LAST);

	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t181.inf", 
		LAST);

	web_url("content.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t182.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("S02_T09_Click_Run",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T10_Click_PrdlookUp");

	web_add_auto_header("X-CSRF-TOKEN", 
		"36ff6843-40d7-44fb-98d5-763319bc718e");

	web_submit_data("searchViews", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=para%", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={}", ENDITEM, 
		LAST);

	lr_end_transaction("S02_T10_Click_PrdlookUp",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T11_Search_Prd");

	lr_end_transaction("S02_T11_Search_Prd",LR_AUTO);

	lr_think_time(3);

	web_custom_request("getSelectedItem", 
		"URL=https://pvr-perf.rxlogix.com/reports/productDictionary/getSelectedItem?productId=105684&dataSource=pva&dictionaryLevel=3&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=105684", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_2", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=2", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=102542", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1590064767387", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S02_T12_SelectTemplate");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getTemplateList", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1590064767388", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateList_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateList?term=perftest&page=1&max=30&oldSelectedValue=&_=1590064767394", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForTemplate", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/customSQLValuesForTemplate?templateId=30908&_=1590064767395", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("poiInputsForTemplate", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/poiInputsForTemplate?templateId=30908&_=1590064767396", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S02_T12_SelectTemplate",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T13_Enter_ReportName_Tag_SaveAndRun");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1590064767397", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t192.inf", 
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
		"Action=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=32764", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value=32180", ENDITEM, 
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[{\"name\":\"PARACETAMOL\",\"id\":\"105684\"}],\"4\":[]}", ENDITEM, 
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
		"Name=templateQueries[0].template", "Value=30908", ENDITEM, 
		"Name=templateQueries[0].header", "Value=", ENDITEM, 
		"Name=templateQueries[0].title", "Value=", ENDITEM, 
		"Name=templateQueries[0].footer", "Value=", ENDITEM, 
		"Name=templateQueries[0]._headerProductSelection", "Value=", ENDITEM, 
		"Name=templateQueries[0]._headerDateRange", "Value=", ENDITEM, 
		"Name=templateQueries[0]._displayMedDraVersionNumber", "Value=", ENDITEM, 
		"Name=templateQueries[0]._privacyProtected", "Value=", ENDITEM, 
		"Name=templateQueries[0]._blindProtected", "Value=", ENDITEM, 
		"Name=templateQueries[0].query", "Value=32764", ENDITEM, 
		"Name=templateQueries[0].queryLevel", "Value=CASE", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUMULATIVE", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[0].field", "Value=caseRoutingPvrFollowupNum", ENDITEM, 
		"Name=templateQuery0.qev[0].operator", "Value=EQUALS", ENDITEM, 
		"Name=templateQuery0.qev[0].value", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=21-May-2020", ENDITEM, 
		"Name=templateQuery0.qev[0].key", "Value=1", ENDITEM, 
		"Name=templateQuery0.qev[0].specialKeyValue", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[0].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[1].field", "Value=patInfoPostalCode", ENDITEM, 
		"Name=templateQuery0.qev[1].operator", "Value=EQUALS", ENDITEM, 
		"Name=templateQuery0.qev[1].value", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=21-May-2020", ENDITEM, 
		"Name=selectSelect", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[1].key", "Value=2", ENDITEM, 
		"Name=templateQuery0.qev[1].specialKeyValue", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[1].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[2].field", "Value=prodDrugsAbuse", ENDITEM, 
		"Name=templateQuery0.qev[2].operator", "Value=EQUALS", ENDITEM, 
		"Name=templateQuery0.qev[2].copyPasteValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=21-May-2020", ENDITEM, 
		"Name=delimitertemplateQuery0qev2", "Value=none", ENDITEM, 
		"Name=templateQuery0.qev[2].value", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[2].key", "Value=3", ENDITEM, 
		"Name=templateQuery0.qev[2].specialKeyValue", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[2].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=templateQueries[0].validQueries", "Value=32764", ENDITEM, 
		"Name=reportName", "Value=QRN_01", ENDITEM, 
		"Name=tags", "Value=Regulatory Needs", ENDITEM, 
		"Name=description", "Value=QRN_01", ENDITEM, 
		"Name=_qualityChecked", "Value=", ENDITEM, 
		"Name=_isTemplate", "Value=", ENDITEM, 
		"Name=sharedWith", "Value=User_32180", ENDITEM, 
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
		"Name=schedulerTime", "Value=2020-05-21 12:39:17", ENDITEM, 
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-05-21T12:39Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
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
		"Name=queryBlanks", "Value=true", ENDITEM, 
		"Name=schedulerFrom", "Value=createPage", ENDITEM, 
		"Name=editable", "Value=true", ENDITEM, 
		"Name=blankValuesJSON", "Value=", ENDITEM, 
		"Name=_csrf", "Value=36ff6843-40d7-44fb-98d5-763319bc718e", ENDITEM, 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t195.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getTemplateNameDescription", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=30908", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getQueryNameDescription_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryNameDescription?id=32764", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("allEmails_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("allEmailsForCC_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fetchDateRangeTypesForDatasource_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchEvaluateCaseDatesForDatasource_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=true&dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchEvaluateCaseDateSubmissionForDatasource_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t203.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getDateOperators_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t206.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t207.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("32180_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1590064924511", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t208.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sharedWithValues_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithValues?ids=User_32180", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t209.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-dd87a5cf24b5937b70d0c3c0464d82e3.html\"");

	web_url("polymer.html_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t211.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("reportFieldsForQueryValue_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=patInfoPostalCode", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=caseRoutingPvrFollowupNum", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t213.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=prodDrugsAbuse", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t214.inf", 
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

	web_submit_data("run_2", 
		"Action=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value=32180", ENDITEM, 
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[{\"name\":\"PARACETAMOL\",\"id\":\"105684\"}],\"4\":[]}", ENDITEM, 
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
		"Name=templateQueries[0].template", "Value=30908", ENDITEM, 
		"Name=templateQueries[0].header", "Value=", ENDITEM, 
		"Name=templateQueries[0].title", "Value=", ENDITEM, 
		"Name=templateQueries[0].footer", "Value=", ENDITEM, 
		"Name=templateQueries[0]._headerProductSelection", "Value=", ENDITEM, 
		"Name=templateQueries[0]._headerDateRange", "Value=", ENDITEM, 
		"Name=templateQueries[0]._displayMedDraVersionNumber", "Value=", ENDITEM, 
		"Name=templateQueries[0]._privacyProtected", "Value=", ENDITEM, 
		"Name=templateQueries[0]._blindProtected", "Value=", ENDITEM, 
		"Name=templateQueries[0].query", "Value=32764", ENDITEM, 
		"Name=templateQueries[0].queryLevel", "Value=CASE", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUMULATIVE", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=selectOperator", "Value=", ENDITEM, 
		"Name=selectValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=", ENDITEM, 
		"Name=selectOperator", "Value=", ENDITEM, 
		"Name=selectValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=", ENDITEM, 
		"Name=selectOperator", "Value=", ENDITEM, 
		"Name=selectValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=", ENDITEM, 
		"Name=templateQueries[0].validQueries", "Value=32764", ENDITEM, 
		"Name=reportName", "Value=QRN_02", ENDITEM, 
		"Name=tags", "Value=Regulatory Needs", ENDITEM, 
		"Name=description", "Value=QRN_01", ENDITEM, 
		"Name=_qualityChecked", "Value=", ENDITEM, 
		"Name=_isTemplate", "Value=", ENDITEM, 
		"Name=sharedWith", "Value=User_32180", ENDITEM, 
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
		"Name=schedulerTime", "Value=2020-05-21 12:42:02", ENDITEM, 
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-05-21T12:39Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
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
		"Name=delimiter", "Value=none", ENDITEM, 
		"Name=templateBlanks", "Value=", ENDITEM, 
		"Name=queryBlanks", "Value=", ENDITEM, 
		"Name=schedulerFrom", "Value=createPage", ENDITEM, 
		"Name=editable", "Value=true", ENDITEM, 
		"Name=blankValuesJSON", "Value=", ENDITEM, 
		"Name=_csrf", "Value=36ff6843-40d7-44fb-98d5-763319bc718e", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-mini-3de02a513e44b348d07f3c57a6277c70.html\"");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("polymer-mini.html_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t216.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("possibleValues_13", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t217.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"icons/email-d49eb96cdb0b54cab7135919c7d9e551.png\"");

	web_concurrent_start(NULL);

	web_url("email.png", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/icons/email.png", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t218.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"tinymce/themes/modern/theme.min-98730a64991f004de9a37595e4889bfa.js\"");

	web_url("theme.min.js_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t219.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("possibleValues_14", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t220.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_15", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t221.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_16", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t222.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_17", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t223.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_18", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Snapshot=t224.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t225.inf", 
		LAST);

	web_url("pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t226.inf", 
		LAST);

	web_url("pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t227.inf", 
		LAST);

	web_url("executionStatus-abc243051811af7ce55db349117755f2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/executionStatus-abc243051811af7ce55db349117755f2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t228.inf", 
		LAST);

	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t229.inf", 
		LAST);

	web_url("executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t230.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t231.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_url("dataTables_en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t232.inf", 
		LAST);

	web_url("datepicker.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t233.inf", 
		LAST);

	web_url("filter_panel.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t234.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("32180_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1590064944169", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t235.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t236.inf", 
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
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=5&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&searchString=&direction=desc&sort=runDate&status=GENERATING&_=1590064944170", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t237.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_custom_request("xhr_streaming_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/973/nid1zv6p/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t238.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	lr_end_transaction("S02_T13_Enter_ReportName_Tag_SaveAndRun",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S02_T14_Logout");

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
		"Snapshot=t239.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S02_T14_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}