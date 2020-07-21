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
		"2207bcf529e4be995bdf88cf2f0ca0daad1f970e");

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

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

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

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t12.inf", 
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
		"Snapshot=t13.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_start_transaction("S09_T01_OpenApplication");

	lr_end_transaction("S09_T01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T02_Login");

	web_revert_auto_header("Accept");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-83.0.4103.61");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:3763509292&cup2hreq=5153435b66cf5003e0c6c16a4001743aea9f8d01590c94e4048037aea69ae85b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{97f63400-d478-477f-b656-7413dbea54ea}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{8277f6c4-94b1-45a9-86f4-a4e319dc7c84}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{a9cfbd00-5654-4e2a-9539-7e0210d02143}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{da6a03bd-9ca2-4f3b-8389-1f2f9e408e6e}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\""
		"{304b516e-2871-4615-8582-2764181f45d1}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.693458e8d61b08ad38d9dceec8d6204a74cfc0952a39dca6d1e6d4828a5cbcf4\"}]},\"ping\":{\"ping_freshness\":\"{78065740-4ab4-4a35-a018-07300ed14c5d}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"1.11.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\""
		":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{7f4af6b0-c2cd-4f64-9304-f2fa1e7395dd}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{639b151a-dd8c-4575-b6cd-ce7ee3ae1e53}\",\"rd\":4902},\"updatecheck\":{},\""
		"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.2ab2be7a7c283b0e4ec01de815baab251360d04ad22206876428ad1cbedc446f\"}]},\"ping\":{\"ping_freshness\":\"{55abf3e1-4559-49f8-a27b-d50f9c9f61f7}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"8320.407.0.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\","
		"\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"83.0.4103.61\",\"protocol\":\"3.1\",\"requestid\":\"{c6e0f468-93b1-4ac4-b93d-721185621bc0}\",\"sessionid\":\"{328654a6-4e14-4733-9656-f4e3c1a92399}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.61\"}}", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,llkgjffcdpffmhiakmfcdcblohccpfmo,gcmjkmgdlgnkkcocmoeiminaijmmjnii,mimojjlkmoijpicakmndhoigimigcmbb,hfnkpimlhhgieaddgfemjhofmfblmnib,khaoiebndkojlmppeemjhbpbandiljpe,aemomkdncapdnfajjbbcbdebjljbpmpj,giekcmmlnklenlaomppkphknjmnnpneh,copjbmjbojbakpaedmpkhmiplmmehfck,gkmgaooipdjhmangpemjhigmamcehddo,ggkkehgbnfjpeggfpleeakpidbkibbmn,jflookgnkcckhobaglndicnbbgbonegd,ehgidpndbllacpjalkiimkbadgjfnnmc,hnimpnehoodheedghdeeijklkeaacbdc,"
		"bklopemakmnopmghhmccadeonafabnal");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-83.0.4103.61");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:985040623&cup2hreq=f9fd6bc156ba8f71e345de37a547116a56171169e2b9f6f03e4b2827206b7292", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{b98d2e83-e28d-4890-99d1-f7d91c5d5b9a}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{6a817fd8-d629-42c2-8327-c3ee96e3822f}\",\"rd\":4902},\"updatecheck\":{},\""
		"version\":\"4.10.1679.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{84860f80-5f16-4846-ae7d-37aca7b34799}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEU\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962\"}]},\"ping\":{\"ping_freshness\":\"{298dd1af-5a99-42c2-933d-d3c4809e0a1e}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"9.12.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GCEU\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e03bbdaab3b8f98164302f2b1d5a623bd5f6f393cc5279cf553329eed3d7b993\"}]},\"ping\":{\""
		"ping_freshness\":\"{97639701-a7ac-49e9-abee-c5dcae911b81}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"32.0.0.371\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3d87cb6ae1d39cd6e5f0e404028d39e3b290f163f267c711ed5193ccce093e13\"}]},\"ping\":{\"ping_freshness\":\"{4902bbb0-4ec7-4dbc-95b5-a55bd2d34300}\",\"rd\":4902},\"updatecheck\":{},\"version\":\""
		"5910\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{58a2340d-e57f-4d67-85d3-d3f0ad8eeb35}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\""
		"ping_freshness\":\"{17a5c04b-9d14-4e50-bb72-a7aa2ee65f4d}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{4768206e-d17f-40ea-aec2-0d6a40d4dbfe}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"7\"}"
		",{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GCEU\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\"{813948b3-7d32-4c9e-877d-5d3359d5ad30}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\""
		"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a94e96f52af7838519aac1ae4ef68686817be9661165e20964f81c2b5bec7740\"}]},\"ping\":{\"ping_freshness\":\"{2e053b5f-8d0e-41c2-bc7e-4d5da09643f6}\",\"rd\":4902},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"83.236.200\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM83\",\"cohortname\":\"M80ToM83\",\"enabled\":true,\"packages\":{\"package"
		"\":[{\"fp\":\"1.59f80dfc20335b1b6c4562bf68e07f7eeb1ac8b6f5d3099beefa6e130a1ab368\"}]},\"ping\":{\"ping_freshness\":\"{35133b68-a8dd-4661-ac09-d46df0d90946}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"2020.5.17.1142\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c44933efe4b312676241eee59caa71afa77248649677776993a6395a14247132\"}]},\"ping\":{\""
		"ping_freshness\":\"{7eee5649-7b76-40d4-925a-4c6c2d86d61f}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"1269\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{c0dd025d-8527-4b50-9b58-fe9a4d81159f}\",\"rd\":4902},\"updatecheck\":{},\"version\":"
		"\"2018.8.8.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{5e5f34c4-8208-4b42-b89a-51ff289306af}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GCEU\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{7da770cf-2fe2-4ae3-8e46-12bf7c2633b4}\",\"rd\":4902},\"updatecheck\":{},\"version\":\"3\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"83.0.4103.61\",\"protocol\":\"3.1\",\""
		"requestid\":\"{f0cef20b-24e1-4eaa-ae62-24d05d2e8723}\",\"sessionid\":\"{99f855e5-c9c3-4fc9-a04d-e5dc9609d269}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.61\"}}", 
		LAST);

	web_revert_auto_header("X-Goog-Update-Interactivity");

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"event\":[{\"download_time_ms\":11043,\"downloaded\":4664,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"5911\",\"previousversion\":\"5910\",\"total\":4664,\"url\":\"http://storage.googleapis.com/update-delta/hfnkpimlhhgieaddgfemjhofmfblmnib/5911/5910/72fc0da78e5e8a4944f5bc91c22113718f0c06b9f3394adc743c8a8bd6223045.crxd\"}"
		",{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.bd4f1e51c31e76c205e533babc399dcd6ea841e4f3da2ba0baa2fc72c2b26fb8\",\"nextversion\":\"5911\",\"previousfp\":\"1.3d87cb6ae1d39cd6e5f0e404028d39e3b290f163f267c711ed5193ccce093e13\",\"previousversion\":\"5910\"}],\"version\":\"5911\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\""
		"prodversion\":\"83.0.4103.61\",\"protocol\":\"3.1\",\"requestid\":\"{e6e07b06-051b-4a9c-bbd7-e7f653f01db7}\",\"sessionid\":\"{99f855e5-c9c3-4fc9-a04d-e5dc9609d269}\",\"updaterversion\":\"83.0.4103.61\"}}", 
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
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=Shiva.Prasad", ENDITEM, 
		"Name=password", "Value=Shiva@12345", ENDITEM, 
		"Name=_csrf", "Value=0a16ed2f-fdca-4689-be9f-de9cce545cf9", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t18.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/actionItem/actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t29.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t30.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fuelux/fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t32.inf", 
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
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
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

	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
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

	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack/gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
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

	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
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

	web_url("store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t46.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEs4BCWbPMLGRU9eNEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3QcSOwEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw3JlP8vEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEs4BCWbPMLGRU9eNEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3QcSOwEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw3JlP8vEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAiABILDSITCW4SABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiABILDSeO13kSABoAIgASCw09LLzYEgAaACIAGgASPwmScaNDN_x9xRILDYoEHBMSABoAIgASCw1VTtOpEgAaACIAEgsNVU7TqRIAGgAiABILDT0svNgSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t47.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("latestAdhocReport", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("index", 
		"URL=https://pvr-perf.rxlogix.com/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("32180", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591180540692", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

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
		"Snapshot=t52.inf", 
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
		"Snapshot=t53.inf", 
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
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_concurrent_start(NULL);

	web_url("dataTables_en.json_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t56.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
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

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/359/zter7jhj/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_T02_Login",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Accept-Language");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("json_4", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"event\":[{\"download_time_ms\":28067,\"downloaded\":14924,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"1271\",\"previousversion\":\"1269\",\"total\":14924,\"url\":\"http://redirector.gvt1.com/edgedl/release2/NqgA2g68IqXqM6cf8aJciw_1271/PMdLSFxhKfMwDDgezcf54g\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\""
		"1.6aabe7249db7159490a544d8e4325ef6bd3e539bbb921a4b41c74e6919046778\",\"nextversion\":\"1271\",\"previousfp\":\"1.c44933efe4b312676241eee59caa71afa77248649677776993a6395a14247132\",\"previousversion\":\"1269\"}],\"version\":\"1271\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"83.0.4103.61\",\"protocol\":\"3.1\",\"requestid\":\""
		"{fcb28f2d-7dfa-44f5-8c30-7e4e8f9b251b}\",\"sessionid\":\"{99f855e5-c9c3-4fc9-a04d-e5dc9609d269}\",\"updaterversion\":\"83.0.4103.61\"}}", 
		LAST);

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
		"URL=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
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
		"URL=https://pvr-perf.rxlogix.com/reports/assets/shorten/jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t61.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t62.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t63.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t65.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("query-37508e1ff5b1a1900d3443bf34160bfa.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/query/query-37508e1ff5b1a1900d3443bf34160bfa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t67.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t64.inf", 
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

	web_url("dataTables_en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t68.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("tag", 
		"URL=https://pvr-perf.rxlogix.com/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t69.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("datepicker.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("filter_panel.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t71.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAgkK3VAcMKjcdxILDeOjwGISABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDZSQkvoSABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDarbt4wSABoAIgASCw28U1IxEgAaACIAEgsNdUahLxIAGgAiABILDaUAn1ISABoAIgASCw26p7UiEgAaACIAEgsNiN5JuRIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAgkK3VAcMKjcdxILDeOjwGISABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDZSQkvoSABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDarbt4wSABoAIgASCw28U1IxEgAaACIAEgsNdUahLxIAGgAiABILDaUAn1ISABoAIgASCw26p7UiEgAaACIAEgsNiN5JuRIAGgAiABILDZFhlU4SABoAIgASCw0GTls8EgAaACIAEgsNBk5bPBIAGgAiABILDQZOWzwSABoAIgASCw0GTls8EgAaACIAEgsNBk5bPBIAGgAiABILDQZOWzwSABoAIgAaABIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t72.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("32180_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591180574448", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t73.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t74.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKcAgkpTX4ICItPfhILDREsZZQSABoAIgASCw29hYMPEgAaACIAEgsN46PAYhIAGgAiABILDfGsS9ESABoAIgASCw1zq_AfEgAaACIAEgsNlJCS-hIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNqtu3jBIAGgAiABILDbxTUjESABoAIgASCw11RqEvEgAaACIAEgsNpQCfUhIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKcAgkpTX4ICItPfhILDREsZZQSABoAIgASCw29hYMPEgAaACIAEgsN46PAYhIAGgAiABILDfGsS9ESABoAIgASCw1zq_AfEgAaACIAEgsNlJCS-hIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNqtu3jBIAGgAiABILDbxTUjESABoAIgASCw11RqEvEgAaACIAEgsNpQCfUhIAGgAiABILDbqntSISABoAIgASCw2I3km5EgAaACIAEgsNkWGVThIAGgAiABILDQZOWzwSABoAIgASCw0GTls8EgAaACIAEgsNBk5bPBIAGgAiABILDQZOWzwSABoAIgASCw0GTls8EgAaACIAEgsNBk5bPBIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t75.inf", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("queries", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/queries?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=name&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=description&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=qualityChecked&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=checkUsage&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=owner.fullName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
		"=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=tags&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&advancedFilter=false&tableFilter=%7B%7D&direction=desc&sharedwith=&sort=isFavorite&_=1591180574449", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t76.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t77.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKpAglrKiJ-UBGFgxILDREsZZQSABoAIgASCw3On7MLEgAaACIAEgsN46PAYhIAGgAiABILDb2Fgw8SABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDZSQkvoSABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDarbt4wSABoAIgASCw28U1IxEgAaACIAEgsNdUahLxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKpAglrKiJ-UBGFgxILDREsZZQSABoAIgASCw3On7MLEgAaACIAEgsN46PAYhIAGgAiABILDb2Fgw8SABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDZSQkvoSABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDarbt4wSABoAIgASCw28U1IxEgAaACIAEgsNdUahLxIAGgAiABILDaUAn1ISABoAIgASCw26p7UiEgAaACIAEgsNiN5JuRIAGgAiABILDZFhlU4SABoAIgASCw0GTls8EgAaACIAEgsNBk5bPBIAGgAiABILDQZOWzwSABoAIgASCw0GTls8EgAaACIAEgsNBk5bPBIAGgAiABILDQZOWzwSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t78.inf", 
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

	web_url("websocket_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/266/4b4sgnyr/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t79.inf", 
		"Mode=HTTP", 
		LAST);

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

	web_url("queries_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/queries?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=name&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=description&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=qualityChecked&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=checkUsage&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=owner.fullName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
		"=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=tags&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=Q2_PT01&search%5Bregex%5D=false&searchString=Q2_PT01&advancedFilter=false&tableFilter=%7B%7D&direction=desc&sharedwith=&sort=isFavorite&_=1591180574450", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_T04_Search_Query",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T05_Click_Preview1");

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

	web_url("preview", 
		"URL=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("caseSeries-9f3b2732d9239856825345c6f8702b19.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/caseSeries-9f3b2732d9239856825345c6f8702b19.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t82.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t83.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t84.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t85.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t86.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t87.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t88.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t90.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t91.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t92.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t93.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t94.inf", 
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

	web_url("en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t89.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t95.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t96.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t97.inf", 
		LAST);

	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t100.inf", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_concurrent_start(NULL);

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMODMuMC40MTAzLjYxGikIBRABGhsKDQgFEAYYASIDMDAxMAEQvNcIGgIYB3sIQ8oiBCABIAIoARopCAEQARobCg0IARAGGAEiAzAwMTABELq7BxoCGAcowT98IgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARDuwgcaAhgHgvTG7iIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQqcIHGgIYB7yGOSsiBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgHMbHJSCIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQpxoaAhgHTzJiDSIEIAEgAigEGicICRABGhkKDQgJEAYYASIDMDAxMAYQAxoCGAd8Zz-3IgQgASACKAYaKAgPEAEaGgoNCA8QBhgBIgMwMDEwARDDLRoCGAfgLKYgIgQgASACKAEaJwgKEAgaGQ"
		"oNCAoQCBgBIgMwMDEwARAFGgIYB6oISBciBCABIAIoARonCAkQARoZCg0ICRAGGAEiAzAwMTABEBsaAhgHzNwFXCIEIAEgAigBGigICBABGhoKDQgIEAYYASIDMDAxMAEQ-AgaAhgHqHnjASIEIAEgAigBGigIDRABGhoKDQgNEAYYASIDMDAxMAEQo3QaAhgH07CFRyIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQudsDGgIYB-5cWmkiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEL4DGgIYB23_RZEiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t101.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAglElHMMcusxlBILDTnKzi0SABoAIgASCw27yv1VEgAaACIAEgsNQTBfTxIAGgAiABILDUzV5H8SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAglElHMMcusxlBILDTnKzi0SABoAIgASCw27yv1VEgAaACIAEgsNQTBfTxIAGgAiABILDUzV5H8SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw0ShfMzEgAaACIAEgsNkWGVThIAGgAiABILDapItAMSABoAIgASCw3QdRj8EgAaACIAEgsNkWGVThIAGgAiABILDd7NkvgSABoAIgAaABKtBAmqZUH2QIVvuBILDbXVvRMSABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDRJhQQQSABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiAB"
		"ILDffKZOkSABoAIgASCw3VBiOZEgAaACIAEgsNz2ln0hIAGgAiABILDbxTUjESABoAIgASCw11RqEvEgAaACIAEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw2d1N0CEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw0tV0wdEgAaACIAEgsN4am2KBIAGgAiABILDW9ari0SABoAIgASCw0Jyec4EgAaACIAEgsN42vQ2BIAGgAiABILDX7xs8gSABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNuqe1IhIAGgAiABILDYjeSbkSABoAIgASCw2ZjYJsEgAaACIA"
		"EgsNzp-zCxIAGgAiABILDeKeC5wSABoAIgASCw3pRDKOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t102.inf", 
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

	web_url("getNumOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getStringOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("getQueryNameDescription", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryNameDescription?id=32662", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getValuelessOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("32180_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591180618070", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getQueryNameDescription_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryNameDescription?id=32662&_=1591180618071", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("queryExpressionValuesForQuerySet", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuerySet?queryId=32662&_=1591180618074", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuery", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuery?queryId=32662&_=1591180618072", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForQuery", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/customSQLValuesForQuery?queryId=32662&_=1591180618073", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("polymer.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("reportFieldsForQueryValue", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=caseRoutingPvrFollowupNum&_=1591180618075", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=prodDrugsAbuse&_=1591180618077", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=patInfoPostalCode&_=1591180618076", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("polymer-mini.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRL2CAmSC7H6yH78hxILDbXVvRMSABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDRJhQQQSABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiABILDffKZOkSABoAIgASCw3VBiOZEgAaACIAEgsNz2ln0hIAGgAiABILDbxTUjESABoAIgASCw11RqEvEgAaACIAEgsN3j-TvhIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRL2CAmSC7H6yH78hxILDbXVvRMSABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDRJhQQQSABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiABILDffKZOkSABoAIgASCw3VBiOZEgAaACIAEgsNz2ln0hIAGgAiABILDbxTUjESABoAIgASCw11RqEvEgAaACIAEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw2d1N0CEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw0tV0wdEgAaACIAEgsN4am2KBIAGgAiABILDW9ari0SABoAIgASCw0Jyec4EgAaACIAEgsNrJKx9BIAGgAiABILDdpU3ZgSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgASCw1M1eR_EgAaACIAEg"
		"sNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNVchnJBIAGgAiABILDTnFunwSABoAIgASCw2RYZVOEgAaACIAEgsNg8DFqRIAGgAiABILDUlgK3QSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgASCw1M1eR_EgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNT5d3pBIAGgAiABILDfxUqYkSABoAIgASCw2RYZVOEgAaACIAEgsNgZfjuBIAGgAiABILDVkeLPgSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgAS"
		"Cw1M1eR_EgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsN_N2dZRIAGgAiABILDeJlEWsSABoAIgASCw2RYZVOEgAaACIAEgsN42vQ2BIAGgAiABILDX7xs8gSABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNuqe1IhIAGgAiABILDYjeSbkSABoAIgASCw2ZjYJsEgAaACIAEgsNzp-zCxIAGgAiABILDeKeC5wSABoAIgASCw3pRDKOEgAaACIAEgsNkWGVThIAGgAiAB"
		"ILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t120.inf", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("possibleValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1591180618078", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t121.inf", 
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

	web_url("websocket_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/902/ft44zi1z/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t122.inf", 
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

	web_url("possibleValues_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1591180618079", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1591180618080", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1591180618081", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1591180618082", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1591180618083", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKSCglnQ5qsz5i9VhILDbXVvRMSABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDRJhQQQSABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiABILDffKZOkSABoAIgASCw3VBiOZEgAaACIAEgsNz2ln0hIAGgAiABILDbxTUjESABoAIgASCw11RqEvEgAaACIAEgsN3j-TvhIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKSCglnQ5qsz5i9VhILDbXVvRMSABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDRJhQQQSABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiABILDffKZOkSABoAIgASCw3VBiOZEgAaACIAEgsNz2ln0hIAGgAiABILDbxTUjESABoAIgASCw11RqEvEgAaACIAEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw2d1N0CEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw0tV0wdEgAaACIAEgsN4am2KBIAGgAiABILDW9ari0SABoAIgASCw0Jyec4EgAaACIAEgsNrJKx9BIAGgAiABILDdpU3ZgSABoAIgASCw0egsB_EgAaACIAEgsNWjZWbRIAGgAiABILDQU15ScSABoAIgASCw3xmUm8EgAaACIAEg"
		"sNfr8e4RIAGgAiABILDc2o5qkSABoAIgASCw0kFNsjEgAaACIAEgsNTNXkfxIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDVXIZyQSABoAIgASCw05xbp8EgAaACIAEgsNmkL4eBIAGgAiABILDYPAxakSABoAIgASCw1JYCt0EgAaACIAEgsN-0epORIAGgAiABILDceS1foSABoAIgASCw1AR6R0EgAaACIAEgsNu4oOARIAGgAiABILDYXvlnASABoAIgASCw0uOqheEgAaACIAEgsNys2vChIAGgAiABILDUzV5H8SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgAS"
		"Cw1Pl3ekEgAaACIAEgsN_FSpiRIAGgAiABILDa5Kt_ISABoAIgASCw2Bl-O4EgAaACIAEgsNWR4s-BIAGgAiABILDUZTX8ESABoAIgASCw1gYIalEgAaACIAEgsNCJiwiRIAGgAiABILDYu4YMgSABoAIgASCw0dI63qEgAaACIAEgsNNGYTzRIAGgAiABILDUoasOISABoAIgASCw1M1eR_EgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsN_N2dZRIAGgAiABILDeJlEWsSABoAIgASCw3FFoyUEgAaACIAEgsN42vQ2BIAGgAiABILDX7xs8gSABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiAB"
		"ILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNuqe1IhIAGgAiABILDYjeSbkSABoAIgASCw2ZjYJsEgAaACIAEgsNzp-zCxIAGgAiABILDeKeC5wSABoAIgASCw3pRDKOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t128.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("polymer-micro.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t130.inf", 
		LAST);

	web_custom_request("xhr_streaming", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/902/sq7bda4u/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	lr_end_transaction("S09_T05_Click_Preview1",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T06_Click_Preview2");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKSCgldx3mlUdRL7BILDbXVvRMSABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDRJhQQQSABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiABILDffKZOkSABoAIgASCw3VBiOZEgAaACIAEgsNz2ln0hIAGgAiABILDbxTUjESABoAIgASCw11RqEvEgAaACIAEgsN3j-TvhIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKSCgldx3mlUdRL7BILDbXVvRMSABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDRJhQQQSABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiABILDffKZOkSABoAIgASCw3VBiOZEgAaACIAEgsNz2ln0hIAGgAiABILDbxTUjESABoAIgASCw11RqEvEgAaACIAEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw2d1N0CEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw0tV0wdEgAaACIAEgsN4am2KBIAGgAiABILDW9ari0SABoAIgASCw0Jyec4EgAaACIAEgsNrJKx9BIAGgAiABILDdpU3ZgSABoAIgASCw0egsB_EgAaACIAEgsNWjZWbRIAGgAiABILDQU15ScSABoAIgASCw3xmUm8EgAaACIAEg"
		"sNfr8e4RIAGgAiABILDc2o5qkSABoAIgASCw0kFNsjEgAaACIAEgsNTNXkfxIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDVXIZyQSABoAIgASCw05xbp8EgAaACIAEgsNmkL4eBIAGgAiABILDYPAxakSABoAIgASCw1JYCt0EgAaACIAEgsN-0epORIAGgAiABILDceS1foSABoAIgASCw1AR6R0EgAaACIAEgsNu4oOARIAGgAiABILDYXvlnASABoAIgASCw0uOqheEgAaACIAEgsNys2vChIAGgAiABILDUzV5H8SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDSu_a0QSABoAIgAS"
		"Cw1Pl3ekEgAaACIAEgsN_FSpiRIAGgAiABILDa5Kt_ISABoAIgASCw2Bl-O4EgAaACIAEgsNWR4s-BIAGgAiABILDUZTX8ESABoAIgASCw1gYIalEgAaACIAEgsNCJiwiRIAGgAiABILDYu4YMgSABoAIgASCw0dI63qEgAaACIAEgsNNGYTzRIAGgAiABILDUoasOISABoAIgASCw1M1eR_EgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2XC6NUEgAaACIAEgsN_N2dZRIAGgAiABILDeJlEWsSABoAIgASCw3FFoyUEgAaACIAEgsN42vQ2BIAGgAiABILDX7xs8gSABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiAB"
		"ILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNuqe1IhIAGgAiABILDYjeSbkSABoAIgASCw2ZjYJsEgAaACIAEgsNzp-zCxIAGgAiABILDeKeC5wSABoAIgASCw3pRDKOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t132.inf", 
		LAST);

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

	web_submit_data("updatePreview", 
		"Action=https://pvr-perf.rxlogix.com/reports/caseSeries/updatePreview", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/caseSeries/preview?selectedQuery=32662", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value=32180", ENDITEM, 
		"Name=productSelection", "Value=", ENDITEM, 
		"Name=studySelection", "Value=", ENDITEM, 
		"Name=_suspectProduct", "Value=", ENDITEM, 
		"Name=JSONExpressionValues", "Value=", ENDITEM, 
		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", ENDITEM, 
		"Name=evaluateDateAsSubmissionDate", "Value=LATEST_VERSION", ENDITEM, 
		"Name=evaluateDateAs", "Value=LATEST_VERSION", ENDITEM, 
		"Name=asOfVersionDate", "Value=", ENDITEM, 
		"Name=globalQueryBlanks", "Value=true", ENDITEM, 
		"Name=globalQuery", "Value=32662", ENDITEM, 
		"Name=dateRangeType.id", "Value=1", ENDITEM, 
		"Name=caseSeriesDateRangeInformation.dateRangeEnum", "Value=CUMULATIVE", ENDITEM, 
		"Name=seriesInstance.caseSeriesDateRangeInformation.id", "Value=", ENDITEM, 
		"Name=caseSeriesDateRangeInformation.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=caseSeriesDateRangeInformation.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=caseSeriesDateRangeInformation.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=_excludeFollowUp", "Value=", ENDITEM, 
		"Name=_includeLockedVersion", "Value=", ENDITEM, 
		"Name=includeLockedVersion", "Value=on", ENDITEM, 
		"Name=_includeAllStudyDrugsCases", "Value=", ENDITEM, 
		"Name=_excludeNonValidCases", "Value=", ENDITEM, 
		"Name=excludeNonValidCases", "Value=on", ENDITEM, 
		"Name=qev[0].field", "Value=caseRoutingPvrFollowupNum", ENDITEM, 
		"Name=qev[0].operator", "Value=EQUALS", ENDITEM, 
		"Name=qev[0].value", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=03-Jun-2020", ENDITEM, 
		"Name=qev[0].key", "Value=1", ENDITEM, 
		"Name=qev[0].specialKeyValue", "Value=", ENDITEM, 
		"Name=qev[0].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=qev[1].field", "Value=patInfoPostalCode", ENDITEM, 
		"Name=qev[1].operator", "Value=EQUALS", ENDITEM, 
		"Name=qev[1].value", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=03-Jun-2020", ENDITEM, 
		"Name=selectSelect", "Value=", ENDITEM, 
		"Name=qev[1].key", "Value=2", ENDITEM, 
		"Name=qev[1].specialKeyValue", "Value=", ENDITEM, 
		"Name=qev[1].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=qev[2].field", "Value=prodDrugsAbuse", ENDITEM, 
		"Name=qev[2].operator", "Value=EQUALS", ENDITEM, 
		"Name=qev[2].copyPasteValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=03-Jun-2020", ENDITEM, 
		"Name=delimiterqev2", "Value=none", ENDITEM, 
		"Name=qev[2].value", "Value=", ENDITEM, 
		"Name=qev[2].key", "Value=3", ENDITEM, 
		"Name=qev[2].specialKeyValue", "Value=", ENDITEM, 
		"Name=qev[2].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=validQueries", "Value=32662", ENDITEM, 
		"Name=_event_exactSearch", "Value=", ENDITEM, 
		"Name=_product_exactSearch", "Value=", ENDITEM, 
		"Name=_study_exactSearch", "Value=", ENDITEM, 
		"Name=studyDrugs", "Value=", ENDITEM, 
		"Name=_study_imp", "Value=", ENDITEM, 
		"Name=studyCompounds", "Value=", ENDITEM, 
		"Name=editable", "Value=true", ENDITEM, 
		"Name=seriesId", "Value=", ENDITEM, 
		"Name=version", "Value=", ENDITEM, 
		"Name=save", "Value=", ENDITEM, 
		"Name=_csrf", "Value=31a9bd9e-3a6b-4a04-907e-bef7bdcd62e1", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_concurrent_start(NULL);

	web_url("en.json_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t134.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_url("dataTables_en.json_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t135.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("tag_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");

	web_concurrent_start(NULL);

	web_url("datepicker.hbs_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t137.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");

	web_url("filter_panel.hbs_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t138.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("32180_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591180642131", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queries_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/queries?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=name&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=description&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=qualityChecked&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=checkUsage&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=owner.fullName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
		"=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=tags&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=Q2_PT01&search%5Bregex%5D=false&searchString=Q2_PT01&advancedFilter=false&tableFilter=%7B%7D&direction=desc&sharedwith=&sort=isFavorite&_=1591180642132", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t140.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("info_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t141.inf", 
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

	web_url("websocket_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/376/1uj4ewt4/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_T06_Click_Preview2",LR_AUTO);

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

	web_url("32662", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
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
		"URL=https://pvr-perf.rxlogix.com/reports/assets/backbone/underscore-268f41aa82f0dc5a22db29498cf82e98.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t144.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t145.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t146.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t147.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t148.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t149.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t151.inf", 
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

	web_url("en.json_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t150.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("copyPasteValues-91485a8858562f9b9c987f8ed40139e6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/query/copyPasteValues-91485a8858562f9b9c987f8ed40139e6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t152.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("32180_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591180665599", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLHBAlQ017rGeKJKxILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsN8axL0RIAGgAiABILDW0-sX8SABoAIgASCw0EnDWHEgAaACIAEgsNxnwsFRIAGgAiABILDQAY90oSABoAIgASCw1owejmEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLHBAlQ017rGeKJKxILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsN8axL0RIAGgAiABILDW0-sX8SABoAIgASCw0EnDWHEgAaACIAEgsNxnwsFRIAGgAiABILDQAY90oSABoAIgASCw1owejmEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAiABILDRtM99sSABoAIgASCw2RYZVOEgAaACIAEgsNBu27_xIAGgAiABILDZFhlU4SABoAIgASCw2g6uREEgAaACIAEgsNMhLYCRIAGgAiABILDd4_k74SABoAIgASCw1QDijrEgAaACIAEgsNRcTqGhIAGgAiABILDarbt4wSABoAIgASCw1-8bPIEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEg"
		"sNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDbxTUjESABoAIgASCw11RqEvEgAaACIAEgsNmY2CbBIAGgAiABILDeNr0NgSABoAIgASCw0LYtQYEgAaACIAEgsN6UQyjhIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNoOrkRBIAGgAiABILDQ9diQoSABoAIgASCw1n1IyXEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t155.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sharedWithValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithValues?ids=User_32180", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-dd87a5cf24b5937b70d0c3c0464d82e3.html\"");

	web_url("polymer.html_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("userDefaultReportFieldsOpts", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/userDefaultReportFieldsOpts?username=Shiva.Prasad&amp;lastModified=1591180531111en&sourceId=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-mini-3de02a513e44b348d07f3c57a6277c70.html\"");

	web_url("polymer-mini.html_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-micro-0c3678e50857ddb532ff7c8ce13cf1be.html\"");

	web_url("polymer-micro.html_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getNumOperators_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators?_=1591180665601", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators?_=1591180665603", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators?_=1591180665602", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getAllKeywords", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getAllKeywords?_=1591180665604", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators?_=1591180665600", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("extraValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/extraValues?lang=en&_=1591180665605", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKQCQkX29ZcW069RhILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsN8axL0RIAGgAiABILDW0-sX8SABoAIgASCw0EnDWHEgAaACIAEgsNxnwsFRIAGgAiABILDQAY90oSABoAIgASCw3HktX6EgAaACIAEgsNQEekdBIAGgAiABILDWjB6OYSABoAIgASCw1gYIalEgAaACIAEgsNCJiwiRIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKQCQkX29ZcW069RhILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsN8axL0RIAGgAiABILDW0-sX8SABoAIgASCw0EnDWHEgAaACIAEgsNxnwsFRIAGgAiABILDQAY90oSABoAIgASCw3HktX6EgAaACIAEgsNQEekdBIAGgAiABILDWjB6OYSABoAIgASCw1gYIalEgAaACIAEgsNCJiwiRIAGgAiABILDTnKzi0SABoAIgASCw27yv1VEgAaACIAEgsNQTBfTxIAGgAiABILDYHOWI8SABoAIgASCw1KGrDiEgAaACIAEgsNTNXkfxIAGgAiABILDTRmE80SABoAIgASCw2gkbqYEgAaACIAEgsNG0z32xIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDaDq5EQSABoAIgASCw0yEtgJEgAaACIAEg"
		"sNuqe1IhIAGgAiABILDYjeSbkSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgASCw3On7MLEgAaACIAEgsNrJKx9BIAGgAiABILDUzV5H8SABoAIgASCw3Xd0_gEgAaACIAEgsN5MQExxIAGgAiABILDRtM99sSABoAIgASCw2UkJL6EgAaACIAEgsN_ejTjxIAGgAiABILDcXtgQUSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgASCw2DwMWpEgAaACIAEgsNgZfjuBIAGgAiABILDUzV5H8SABoAIgASCw2j1FFmEgAaACIAEgsNEmQ5IRIAGgAiABILDRtM99sSABoAIgASCw2UkJL6EgAaACIAEgsNWjZWbRIAGgAiABILDQU15ScSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgAS"
		"Cw3NqOapEgAaACIAEgsNJBTbIxIAGgAiABILDUzV5H8SABoAIgASCw3KDD2MEgAaACIAEgsNYy-B8BIAGgAiABILDRtM99sSABoAIgASCw3eP5O-EgAaACIAEgsNUA4o6xIAGgAiABILDUXE6hoSABoAIgASCw2q27eMEgAaACIAEgsNfvGzyBIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw28U1IxEgAaACIAEgsNdUahLxIAGgAiABILDZmNgmwSABoAIgASCw3ja9DYEgAaACIAEgsNC2LUGBIAGgAiABILDelEMo4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiAB"
		"ILDS46qF4SABoAIgASCw05rKSsEgAaACIAEgsNoOrkRBIAGgAiABILDQ9diQoSABoAIgASCw1n1IyXEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t168.inf", 
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

	web_url("websocket_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/323/86obsr_h/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t169.inf", 
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

	web_url("possibleValues_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1591180665606", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1591180665607", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1591180665608", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_custom_request("xhr", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/902/z_r2jful/xhr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("xhr_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/902/z_r2jful/xhr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	lr_end_transaction("S09_T07_Edit",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T08_Update");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKQCQn6UyTaABhZNxILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsN8axL0RIAGgAiABILDW0-sX8SABoAIgASCw0EnDWHEgAaACIAEgsNxnwsFRIAGgAiABILDQAY90oSABoAIgASCw3HktX6EgAaACIAEgsNQEekdBIAGgAiABILDWjB6OYSABoAIgASCw1gYIalEgAaACIAEgsNCJiwiRIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKQCQn6UyTaABhZNxILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsN8axL0RIAGgAiABILDW0-sX8SABoAIgASCw0EnDWHEgAaACIAEgsNxnwsFRIAGgAiABILDQAY90oSABoAIgASCw3HktX6EgAaACIAEgsNQEekdBIAGgAiABILDWjB6OYSABoAIgASCw1gYIalEgAaACIAEgsNCJiwiRIAGgAiABILDTnKzi0SABoAIgASCw27yv1VEgAaACIAEgsNQTBfTxIAGgAiABILDYHOWI8SABoAIgASCw1KGrDiEgAaACIAEgsNTNXkfxIAGgAiABILDTRmE80SABoAIgASCw2gkbqYEgAaACIAEgsNG0z32xIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDaDq5EQSABoAIgASCw0yEtgJEgAaACIAEg"
		"sNuqe1IhIAGgAiABILDYjeSbkSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgASCw3On7MLEgAaACIAEgsNrJKx9BIAGgAiABILDUzV5H8SABoAIgASCw3Xd0_gEgAaACIAEgsN5MQExxIAGgAiABILDRtM99sSABoAIgASCw2UkJL6EgAaACIAEgsN_ejTjxIAGgAiABILDcXtgQUSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgASCw2DwMWpEgAaACIAEgsNgZfjuBIAGgAiABILDUzV5H8SABoAIgASCw2j1FFmEgAaACIAEgsNEmQ5IRIAGgAiABILDRtM99sSABoAIgASCw2UkJL6EgAaACIAEgsNWjZWbRIAGgAiABILDQU15ScSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgAS"
		"Cw3NqOapEgAaACIAEgsNJBTbIxIAGgAiABILDUzV5H8SABoAIgASCw3KDD2MEgAaACIAEgsNYy-B8BIAGgAiABILDRtM99sSABoAIgASCw3eP5O-EgAaACIAEgsNUA4o6xIAGgAiABILDUXE6hoSABoAIgASCw2q27eMEgAaACIAEgsNfvGzyBIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw28U1IxEgAaACIAEgsNdUahLxIAGgAiABILDZmNgmwSABoAIgASCw3ja9DYEgAaACIAEgsNC2LUGBIAGgAiABILDelEMo4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiAB"
		"ILDS46qF4SABoAIgASCw05rKSsEgAaACIAEgsNzu2ckxIAGgAiABILDQ9diQoSABoAIgASCw1n1IyXEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t175.inf", 
		LAST);

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

	web_submit_data("update", 
		"Action=https://pvr-perf.rxlogix.com/reports/query/update?_csrf=31a9bd9e-3a6b-4a04-907e-bef7bdcd62e1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/edit/32662", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value=32180", ENDITEM, 
		"Name=name", "Value=Q2_PT01", ENDITEM, 
		"Name=description", "Value=Q2_PT01_test", ENDITEM, 
		"Name=tags", "Value=Regulatory Needs", ENDITEM, 
		"Name=sharedWith", "Value=User_32180", ENDITEM, 
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
		"Name=JSONQuery", "Value={\"all\":{\"containerGroups\":[ {\"expressions\":[ {\"index\":\"0\",\"field\":\"caseRoutingPvrFollowupNum\",\"op\":\"EQUALS\",\"value\":\"\",\"key\":\"1\"}, {\"index\":\"1\",\"field\":\"patInfoPostalCode\",\"op\":\"EQUALS\",\"value\":\"\",\"key\":\"2\"}, {\"index\":\"2\",\"field\":\"prodDrugsAbuse\",\"op\":\"EQUALS\",\"value\":\"\",\"key\":\"3\"}],\"keyword\":\"and\"} ] } ,\"blankParameters\":[{\"key\":1,\"field\":\"caseRoutingPvrFollowupNum\",\"op\":\"EQUALS\",\"value\":\""
		"\"},{\"key\":2,\"field\":\"patInfoPostalCode\",\"op\":\"EQUALS\",\"value\":\"\"},{\"key\":3,\"field\":\"prodDrugsAbuse\",\"op\":\"EQUALS\",\"value\":\"\"}]}", ENDITEM, 
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
		"Name=version", "Value=0", ENDITEM, 
		"Name=id", "Value=32662", ENDITEM, 
		"Name=edit", "Value=true", ENDITEM, 
		"Name=_csrf", "Value=31a9bd9e-3a6b-4a04-907e-bef7bdcd62e1", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_concurrent_start(NULL);

	web_url("en.json_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t177.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEsUDCcAQS3P1rp75EgsNaMHo5hIAGgAiABILDTnKzi0SABoAIgASCw27yv1VEgAaACIAEgsNQTBfTxIAGgAiABILDUzV5H8SABoAIgASCw0bTPfbEgAaACIAEgsNoOrkRBIAGgAiABILDTIS2AkSABoAIgASCw3eP5O-EgAaACIAEgsNUA4o6xIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEsUDCcAQS3P1rp75EgsNaMHo5hIAGgAiABILDTnKzi0SABoAIgASCw27yv1VEgAaACIAEgsNQTBfTxIAGgAiABILDUzV5H8SABoAIgASCw0bTPfbEgAaACIAEgsNoOrkRBIAGgAiABILDTIS2AkSABoAIgASCw3eP5O-EgAaACIAEgsNUA4o6xIAGgAiABILDUXE6hoSABoAIgASCw3xrEvREgAaACIAEgsNfvGzyBIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw0EnDWHEgAaACIAEg"
		"sNAxRoVxIAGgAiABILDZmNgmwSABoAIgASCw2q27eMEgAaACIAEgsNnHLitxIAGgAiABILDelEMo4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDaDq5EQSABoAIgASCw1n1IyXEgAaACIAEgsN22cjQhIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t179.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("32180_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591180698285", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getNumOperators_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getAllKeywords_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getAllKeywords", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKOCAnu6pjyu8HYzRILDYHOWI8SABoAIgASCw1zmr1YEgAaACIAEgsNaMHo5hIAGgAiABILDcoMPYwSABoAIgASCw1jL4HwEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNYGCGpRIAGgAiABILDTRmE80SABoAIgASCw1M1eR_EgAaACIAEgsNJBTbIxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKOCAnu6pjyu8HYzRILDYHOWI8SABoAIgASCw1zmr1YEgAaACIAEgsNaMHo5hIAGgAiABILDcoMPYwSABoAIgASCw1jL4HwEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNYGCGpRIAGgAiABILDTRmE80SABoAIgASCw1M1eR_EgAaACIAEgsNJBTbIxIAGgAiABILDSocjqcSABoAIgASCw0bTPfbEgAaACIAEgsNoOrkRBIAGgAiABILDTIS2AkSABoAIgASCw28U1IxEgAaACIAEgsNdUahLxIAGgAiABILDTnKzi0SABoAIgASCw27yv1VEgAaACIAEgsNQTBfTxIAGgAiABILDeNr0NgSABoAIgASCw3On7MLEgAaACIAEgsNTNXkfxIAGgAiABILDbqntSISABoAIgASCw2I3km5EgAaACIAEg"
		"sNG0z32xIAGgAiABILDZSQkvoSABoAIgASCw3Xd0_gEgAaACIAEgsN5MQExxIAGgAiABILDTnKzi0SABoAIgASCw27yv1VEgAaACIAEgsNQTBfTxIAGgAiABILDaySsfQSABoAIgASCw2DwMWpEgAaACIAEgsNTNXkfxIAGgAiABILDf3o048SABoAIgASCw3F7YEFEgAaACIAEgsNG0z32xIAGgAiABILDZSQkvoSABoAIgASCw2j1FFmEgAaACIAEgsNEmQ5IRIAGgAiABILDTnKzi0SABoAIgASCw27yv1VEgAaACIAEgsNQTBfTxIAGgAiABILDYGX47gSABoAIgASCw3NqOapEgAaACIAEgsNTNXkfxIAGgAiABILDVo2Vm0SABoAIgASCw0FNeUnEgAaACIAEgsNG0z32xIAGgAiABILDd4_k74SABoAIgASCw1QDijrEgAaACIAEgsNRcTqGhIAGgAiABILDfGsS9ESABoAIgAS"
		"Cw1-8bPIEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDQScNYcSABoAIgASCw0DFGhXEgAaACIAEgsNmY2CbBIAGgAiABILDarbt4wSABoAIgASCw2ccuK3EgAaACIAEgsN6UQyjhIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNShqw4hIAGgAiABILDbemXcMSABoAIgASCw2g6uREEgAaACIAEgsNZ9SMlxIAGgAiABILDdtnI0ISABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t188.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-dd87a5cf24b5937b70d0c3c0464d82e3.html\"");

	web_url("polymer.html_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("extraValues_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/extraValues?lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_10", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1591180698286", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_11", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1591180698287", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_12", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1591180698288", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t193.inf", 
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

	web_url("websocket_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/965/mf49b2w_/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-mini-3de02a513e44b348d07f3c57a6277c70.html\"");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("polymer-mini.html_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-micro-0c3678e50857ddb532ff7c8ce13cf1be.html\"");

	web_url("polymer-micro.html_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

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

	web_url("32662_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/copy/32662", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/32662", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_concurrent_start(NULL);

	web_url("en.json_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t198.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
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

	web_url("32180_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591180724932", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getStringOperators_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t203.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t206.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getAllKeywords_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getAllKeywords", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t207.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-dd87a5cf24b5937b70d0c3c0464d82e3.html\"");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("polymer.html_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t208.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-mini-3de02a513e44b348d07f3c57a6277c70.html\"");

	web_url("polymer-mini.html_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t209.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("extraValues_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/extraValues?lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_13", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum&_=1591180724933", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t211.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_14", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode&_=1591180724934", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_15", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse&_=1591180724935", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t213.inf", 
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

	web_url("websocket_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/206/no984m2v/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t214.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-micro-0c3678e50857ddb532ff7c8ce13cf1be.html\"");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("polymer-micro.html_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_T09_Copy",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T10_Run_Query");

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
		"URL=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/view/37402", 
		"Snapshot=t216.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t217.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t218.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t220.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t221.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t222.inf", 
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

	web_url("en.json_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t219.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t223.inf", 
		LAST);

	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t224.inf", 
		LAST);

	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t225.inf", 
		LAST);

	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t226.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_10", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t227.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getQueryNameDescription_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryNameDescription?id=37402", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t228.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("allEmails", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("allEmailsForCC", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t230.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fetchDateRangeTypesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t231.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchEvaluateCaseDatesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=true&dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t232.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchEvaluateCaseDateSubmissionForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t233.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getDateOperators_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t234.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t235.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t236.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t237.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRK3CQkp7ZiuY_Tg5xILDczXnOUSABoAIgASCw211b0TEgAaACIAEgsNzajmqRIAGgAiABILDbOXDVkSABoAIgASCw2d1N0CEgAaACIAEgsNygw9jBIAGgAiABILDWMvgfASABoAIgASCw0SYUEEEgAaACIAEgsNuqe1IhIAGgAiABILDYjeSbkSABoAIgASCw33ymTpEgAaACIAEgsN1QYjmRIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRK3CQkp7ZiuY_Tg5xILDczXnOUSABoAIgASCw211b0TEgAaACIAEgsNzajmqRIAGgAiABILDbOXDVkSABoAIgASCw2d1N0CEgAaACIAEgsNygw9jBIAGgAiABILDWMvgfASABoAIgASCw0SYUEEEgAaACIAEgsNuqe1IhIAGgAiABILDYjeSbkSABoAIgASCw33ymTpEgAaACIAEgsN1QYjmRIAGgAiABILDc9pZ9ISABoAIgASCw3On7MLEgAaACIAEgsN4p4LnBIAGgAiABILDTEG0LgSABoAIgASCw3Xd0_gEgAaACIAEgsNfvGzyBIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEg"
		"sNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2skrH0EgAaACIAEgsN2lTdmBIAGgAiABILDZmNgmwSABoAIgASCw396NOPEgAaACIAEgsNxe2BBRIAGgAiABILDelEMo4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3yHtuNEgAaACIAEgsNWWF3nBIAGgAiABILDabSosASABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDQScNYcSABoAIgASCw0DFGhXEgAaACIAEgsNE3wgqhIAGgAiABILDarbt4wSABoAIgASCw2ccuK3EgAaACIAEgsNKqQ1BBIAGgAiABILDQ_XIIQSABoAIgASCw0EC1hbEgAaACIAEgsNJcUlQBIAGgAiABILDS9GjnISABoAIgAS"
		"Cw2DwMWpEgAaACIAEgsNbT6xfxIAGgAiABILDT0svNgSABoAIgASCw2j1FFmEgAaACIAEgsNxnwsFRIAGgAiABILDYGX47gSABoAIgASCw269TEaEgAaACIAEgsNU9kIURIAGgAiABILDX1Nc4YSABoAIgASCw1XXt0oEgAaACIAEgsNHc-rrhIAGgAiABILDZ-hqZYSABoAIgASCw2RYZVOEgAaACIAEgsN3M6LDhIAGgAiABILDdzOiw4SABoAIgASCw3czosOEgAaACIAEgsN3M6LDhIAGgAiABILDdzOiw4SABoAIgASCw0462PLEgAaACIAEgsNJY8Z5RIAGgAiABILDSWPGeUSABoAIgASCw0HzP3tEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw1aNlZtEgAaACIAEgsN-wUfuBIAGgAiABILDcWSLxESABoAIgASCw05EawNEgAaACIAEgsN9f7ojBIAGgAiAB"
		"ILDbbzYAcSABoAIgASCw1ZjMuyEgAaACIAEgsNBJXdkxIAGgAiABILDYrTNyoSABoAIgASCw3cNz2aEgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2eKNBTEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t238.inf", 
		LAST);

	web_url("32180_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591180760450", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t239.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t240.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("sharedWithValues_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithValues?ids=User_32180", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t241.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-dd87a5cf24b5937b70d0c3c0464d82e3.html\"");

	web_url("polymer.html_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t242.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getQueryNameDescription_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryNameDescription?id=37402", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t243.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRK3CQkhr50vpPufwBILDczXnOUSABoAIgASCw211b0TEgAaACIAEgsNzajmqRIAGgAiABILDbOXDVkSABoAIgASCw2d1N0CEgAaACIAEgsNygw9jBIAGgAiABILDWMvgfASABoAIgASCw0SYUEEEgAaACIAEgsNJBTbIxIAGgAiABILDSocjqcSABoAIgASCw33ymTpEgAaACIAEgsN1QYjmRIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRK3CQkhr50vpPufwBILDczXnOUSABoAIgASCw211b0TEgAaACIAEgsNzajmqRIAGgAiABILDbOXDVkSABoAIgASCw2d1N0CEgAaACIAEgsNygw9jBIAGgAiABILDWMvgfASABoAIgASCw0SYUEEEgAaACIAEgsNJBTbIxIAGgAiABILDSocjqcSABoAIgASCw33ymTpEgAaACIAEgsN1QYjmRIAGgAiABILDc9pZ9ISABoAIgASCw3On7MLEgAaACIAEgsN4p4LnBIAGgAiABILDTEG0LgSABoAIgASCw3Xd0_gEgAaACIAEgsNfvGzyBIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEg"
		"sNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2skrH0EgAaACIAEgsN2lTdmBIAGgAiABILDZmNgmwSABoAIgASCw396NOPEgAaACIAEgsNxe2BBRIAGgAiABILDelEMo4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3yHtuNEgAaACIAEgsNWWF3nBIAGgAiABILDabSosASABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDQScNYcSABoAIgASCw0DFGhXEgAaACIAEgsNE3wgqhIAGgAiABILDarbt4wSABoAIgASCw2ccuK3EgAaACIAEgsNKqQ1BBIAGgAiABILDQ_XIIQSABoAIgASCw0EC1hbEgAaACIAEgsNJcUlQBIAGgAiABILDS9GjnISABoAIgAS"
		"Cw2DwMWpEgAaACIAEgsNbT6xfxIAGgAiABILDT0svNgSABoAIgASCw2j1FFmEgAaACIAEgsNxnwsFRIAGgAiABILDYGX47gSABoAIgASCw269TEaEgAaACIAEgsNU9kIURIAGgAiABILDX1Nc4YSABoAIgASCw1XXt0oEgAaACIAEgsNHc-rrhIAGgAiABILDZ-hqZYSABoAIgASCw2RYZVOEgAaACIAEgsN3M6LDhIAGgAiABILDdzOiw4SABoAIgASCw3czosOEgAaACIAEgsN3M6LDhIAGgAiABILDdzOiw4SABoAIgASCw0462PLEgAaACIAEgsNJY8Z5RIAGgAiABILDSWPGeUSABoAIgASCw0HzP3tEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw1aNlZtEgAaACIAEgsN-wUfuBIAGgAiABILDcWSLxESABoAIgASCw05EawNEgAaACIAEgsN9f7ojBIAGgAiAB"
		"ILDbbzYAcSABoAIgASCw1ZjMuyEgAaACIAEgsNBJXdkxIAGgAiABILDYrTNyoSABoAIgASCw3cNz2aEgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2eKNBTEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t244.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("queryExpressionValuesForQuery_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuery?queryId=37402", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t245.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForQuery_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/customSQLValuesForQuery?queryId=37402", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t246.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuerySet_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuerySet?queryId=37402", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t247.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-mini-3de02a513e44b348d07f3c57a6277c70.html\"");

	web_url("polymer-mini.html_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t248.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t249.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=caseRoutingPvrFollowupNum", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t250.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=prodDrugsAbuse", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t251.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/polymer-micro-0c3678e50857ddb532ff7c8ce13cf1be.html\"");

	web_url("polymer-micro.html_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t252.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("possibleValues_16", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t253.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("theme.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t254.inf", 
		LAST);

	web_url("possibleValues_17", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=patInfoPostalCode", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t255.inf", 
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

	web_url("websocket_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/130/ju6milf5/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t256.inf", 
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

	web_url("possibleValues_18", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t257.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_19", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=caseRoutingPvrFollowupNum", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t258.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_20", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t259.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_21", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=prodDrugsAbuse", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t260.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("plugin.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t261.inf", 
		LAST);

	web_url("plugin.min.js_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t262.inf", 
		LAST);

	web_url("plugin.min.js_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t263.inf", 
		LAST);

	web_url("plugin.min.js_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t264.inf", 
		LAST);

	web_url("plugin.min.js_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t265.inf", 
		LAST);

	web_url("skin.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t266.inf", 
		LAST);

	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t267.inf", 
		LAST);

	web_url("content.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t268.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRL3Agln4twH0lMRiBILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRL3Agln4twH0lMRiBILDec3odUSABoAIgASCw0qrWztEgAaACIAEgsNVjCi9RIAGgAiABILDavVhxsSABoAIgASCw3n_skkEgAaACIAEgsNpqu3lRIAGgAiABILDWLfcwYSABoAIgASCw0T88WpEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDRKF8zMSABoAIgASCw2RYZVOEgAaACIAEgsNqki0AxIAGgAiABILDdB1GPwSABoAIgASCw2RYZVOEgAaACIAEg"
		"sN3s2S-BIAGgAiABILDVAOKOsSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t269.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("S09_T10_Run_Query",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_T11_Save_Run");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1591180760451", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t270.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getTemplateList", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1591180760452", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t271.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForTemplate", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/customSQLValuesForTemplate?templateId=24615&_=1591180760453", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t272.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("poiInputsForTemplate", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/poiInputsForTemplate?templateId=24615&_=1591180760454", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t273.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedQuery=37402", 
		"Snapshot=t274.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value=32180", ENDITEM, 
		"Name=productSelection", "Value=", ENDITEM, 
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
		"Name=templateQueries[0].template", "Value=24615", ENDITEM, 
		"Name=templateQueries[0].header", "Value=", ENDITEM, 
		"Name=templateQueries[0].title", "Value=", ENDITEM, 
		"Name=templateQueries[0].footer", "Value=", ENDITEM, 
		"Name=templateQueries[0]._headerProductSelection", "Value=", ENDITEM, 
		"Name=templateQueries[0]._headerDateRange", "Value=", ENDITEM, 
		"Name=templateQueries[0]._displayMedDraVersionNumber", "Value=", ENDITEM, 
		"Name=templateQueries[0]._privacyProtected", "Value=", ENDITEM, 
		"Name=templateQueries[0]._blindProtected", "Value=", ENDITEM, 
		"Name=templateQueries[0].query", "Value=37402", ENDITEM, 
		"Name=templateQueries[0].queryLevel", "Value=CASE", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUMULATIVE", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[0].field", "Value=caseRoutingPvrFollowupNum", ENDITEM, 
		"Name=templateQuery0.qev[0].operator", "Value=EQUALS", ENDITEM, 
		"Name=templateQuery0.qev[0].value", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=03-Jun-2020", ENDITEM, 
		"Name=templateQuery0.qev[0].key", "Value=1", ENDITEM, 
		"Name=templateQuery0.qev[0].specialKeyValue", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[0].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[1].field", "Value=patInfoPostalCode", ENDITEM, 
		"Name=templateQuery0.qev[1].operator", "Value=EQUALS", ENDITEM, 
		"Name=templateQuery0.qev[1].value", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=03-Jun-2020", ENDITEM, 
		"Name=selectSelect", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[1].key", "Value=2", ENDITEM, 
		"Name=templateQuery0.qev[1].specialKeyValue", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[1].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[2].field", "Value=prodDrugsAbuse", ENDITEM, 
		"Name=templateQuery0.qev[2].operator", "Value=EQUALS", ENDITEM, 
		"Name=templateQuery0.qev[2].copyPasteValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=03-Jun-2020", ENDITEM, 
		"Name=delimitertemplateQuery0qev2", "Value=none", ENDITEM, 
		"Name=templateQuery0.qev[2].value", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[2].key", "Value=3", ENDITEM, 
		"Name=templateQuery0.qev[2].specialKeyValue", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[2].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=templateQueries[0].validQueries", "Value=37402", ENDITEM, 
		"Name=reportName", "Value=S09_T11_Pt01", ENDITEM, 
		"Name=description", "Value=S09_T11_Pt01", ENDITEM, 
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
		"Name=schedulerTime", "Value=2020-06-03 10:39:18", ENDITEM, 
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-06-03T10:39Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
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
		"Name=_csrf", "Value=31a9bd9e-3a6b-4a04-907e-bef7bdcd62e1", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t275.inf", 
		LAST);

	web_url("executionStatus-abc243051811af7ce55db349117755f2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/executionStatus-abc243051811af7ce55db349117755f2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t276.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_concurrent_start(NULL);

	web_url("en.json_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t277.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_url("dataTables_en.json_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t278.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");

	web_url("datepicker.hbs_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t279.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");

	web_url("filter_panel.hbs_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t280.inf", 
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
		"Snapshot=t281.inf", 
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

	web_url("32180_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591180852281", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=reportName&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=periodicReportType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=version&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=executionStatus&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=false&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=runDate&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionTime&columns%5B6%5D%5Bname%5D=&"
		"columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=frequency&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=sharedWith&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D="
		"false&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=deliveryMedia&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=false&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=runDate&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=5&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&searchString=&direction=desc&sort=runDate&status=GENERATING&_=1591180852282", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t283.inf", 
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
		"Snapshot=t284.inf", 
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
		"Snapshot=t285.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("info_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t286.inf", 
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

	web_url("websocket_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/760/j_otz9c8/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t287.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_T11_Save_Run",LR_AUTO);

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
		"URL=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
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
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
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
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
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
		"URL=https://pvr-perf.rxlogix.com/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t291.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");

	web_concurrent_start(NULL);

	web_url("datepicker.hbs_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t292.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");

	web_url("filter_panel.hbs_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t293.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("32180_10", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1591180880549", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_10", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t295.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("queries_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/queries?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=name&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=description&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=qualityChecked&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=checkUsage&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=owner.fullName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
		"=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=tags&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=Q2_PT01&search%5Bregex%5D=false&searchString=Q2_PT01&advancedFilter=false&tableFilter=%7B%7D&direction=desc&sharedwith=&sort=isFavorite&_=1591180880550", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
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

	web_url("websocket_10", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/651/o1xct4cs/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t297.inf", 
		"Mode=HTTP", 
		LAST);

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

	web_custom_request("xhr_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/902/z_r2jful/xhr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t298.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("xhr_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/902/z_r2jful/xhr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t299.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	lr_start_transaction("S09_T13_ClearFilter");

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("queries_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/queries?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=name&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=description&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=qualityChecked&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=checkUsage&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=owner.fullName&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
		"=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateCreated&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastUpdated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=tags&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&advancedFilter=false&tableFilter=%7B%7D&direction=desc&sharedwith=&sort=isFavorite&_=1591180880551", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
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

	web_url("logout", 
		"URL=https://pvr-perf.rxlogix.com/reports/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/query/index", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_T14_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}