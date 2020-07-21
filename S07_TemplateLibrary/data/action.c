Action()
{

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
		"URL=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t71.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t72.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t73.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/shorten/jquery.shorten-748253da78c6257aced45caa5931b43b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t75.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t76.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t77.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("template-4449dd937496140ccf5c770e8e904088.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/template/template-4449dd937496140ccf5c770e8e904088.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t79.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t78.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t80.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("lookup", 
		"URL=https://pvr-perf.rxlogix.com/reports/lookup?name=category", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("tag", 
		"URL=https://pvr-perf.rxlogix.com/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t82.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("datepicker.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("filter_panel.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t84.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("6542_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/6542?_=1589965752675", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t85.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t86.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("templates", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/templates?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=category&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=name&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=description&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=qualityChecked&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=checkUsage&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=owner.fullName&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastUpdated&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=lastExecuted&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=tags&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=false&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&"
		"search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&direction=desc&sort=isFavorite&_=1589965752676", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t89.inf", 
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

	web_url("websocket_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/302/lnijnpgp/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t90.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINODEuMC40MDQ0LjEzOBopCAUQARobCg0IBRAGGAEiAzAwMTABEIXNCBoCGAcSx2sEIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCvswcaAhgHjqADQyIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ1LkHGgIYB1_UBXkiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEO-3BxoCGAcri-qBIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgiBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEJsaGgIYB5cEr7EiBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_tyIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQzioaAhgHd9xP9yIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBRoCGAeqCEgXIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAbGgIYB8zcBVwiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEOgIGgIYBz6t8v8iBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEP1zGgIYBxdQdqAiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABELzRAxoCGAdHD9bpIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCVAxoCGAfD9Tr8IgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t91.inf", 
		LAST);

	lr_end_transaction("S01_T03_NavigateTemplates_TemplateLibrary",LR_AUTO);

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

	web_url("templates_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/templates?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=category&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=name&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=description&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=qualityChecked&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=checkUsage&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=owner.fullName&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastUpdated&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=lastExecuted&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=tags&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=false&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&"
		"search%5Bvalue%5D=Perftest1_CaseFormTemplate&search%5Bregex%5D=false&searchString=Perftest1_CaseFormTemplate&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&direction=desc&sort=isFavorite&_=1589965752677", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S01_T04_SearchTemplate",LR_AUTO);

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

	web_url("30908", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("category-b0ba00263a1e3916a858e6a7c54c56a9.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/category-b0ba00263a1e3916a858e6a7c54c56a9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t94.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("solid-gauge-dea4ed491a81514f163d664d2d9b4135.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/modules/solid-gauge-dea4ed491a81514f163d664d2d9b4135.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t95.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("underscore-observe-abc51dad2eaec79d8704301ae539bd96.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/underscore/underscore-observe-abc51dad2eaec79d8704301ae539bd96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t96.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t97.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("ec.min-159a716b40399743119ee2fb91783197.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/easychart/ec.min-159a716b40399743119ee2fb91783197.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t98.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("template-8e43d0b89c5a9e5b3eb583f7e626cde1.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/template-8e43d0b89c5a9e5b3eb583f7e626cde1.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t100.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t101.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t102.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("editColumns-eb41040416b5d15abf12fa1f75a4dad4.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/template/editColumns-eb41040416b5d15abf12fa1f75a4dad4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t103.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("editTemplate-61b6a7e8dad095487edf261b8c9e5f40.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/template/editTemplate-61b6a7e8dad095487edf261b8c9e5f40.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t104.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("editMeasures-bdb9a7a04f8123cadc0579982d0417ab.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/template/editMeasures-bdb9a7a04f8123cadc0579982d0417ab.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t105.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("editColumnMeasure-9e39378fc671a73c6529cb92dd722996.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/template/editColumnMeasure-9e39378fc671a73c6529cb92dd722996.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t106.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("editTemplateSet-9bd78227726dd0d43f2d662701e10609.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/template/editTemplateSet-9bd78227726dd0d43f2d662701e10609.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t107.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t108.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("editChartTemplate-8ffb6a79fc1c7af7bf486a336924c4e4.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/template/editChartTemplate-8ffb6a79fc1c7af7bf486a336924c4e4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t109.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t110.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t111.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t99.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getTemplateNameDescription", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23934", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23998", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24026", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24055", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24192", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24083", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23690", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24113", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24139", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_10", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24224", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_11", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23785", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_12", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23757", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_13", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24166", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_14", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24248", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("6542_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/6542?_=1589965794013", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sharedWithValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithValues?ids=User_6542", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S01_T05_EditTemplate",LR_AUTO);

	lr_think_time(3);

	web_custom_request("xhr_streaming", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	lr_start_transaction("S01_T06_Add_CaseLineListingTemplate_Tag_And_Update");

	web_custom_request("xhr_streaming_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("xhr_streaming_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("xhr_streaming_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("xhr_streaming_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("xhr_streaming_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getTemplateSetCLL", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateSetCLL?term=&page=1&max=30&oldSelectedValue=&_=1589965794014", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
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
		"Action=https://pvr-perf.rxlogix.com/reports/template/update?_csrf=ba39333f-d902-4776-97b4-c0c2f5287426", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=id", "Value=30908", ENDITEM, 
		"Name=owner", "Value=6542", ENDITEM, 
		"Name=name", "Value=Perftest1_CaseFormTemplate", ENDITEM, 
		"Name=description", "Value=Standard Template for Case Form Report", ENDITEM, 
		"Name=category.id", "Value=", ENDITEM, 
		"Name=tags", "Value=Data entry", ENDITEM, 
		"Name=sharedWith", "Value=User_6542", ENDITEM, 
		"Name=_qualityChecked", "Value=", ENDITEM, 
		"Name=fixedTemplateName", "Value=", ENDITEM, 
		"Name=fixedTemplateFile", "Value=", "File=Yes", ENDITEM, 
		"Name=_useFixedTemplate", "Value=", ENDITEM, 
		"Name=selectCLL_0", "Value=23934", ENDITEM, 
		"Name=selectCLL_1", "Value=23998", ENDITEM, 
		"Name=selectCLL_2", "Value=24026", ENDITEM, 
		"Name=selectCLL_3", "Value=24055", ENDITEM, 
		"Name=selectCLL_4", "Value=24192", ENDITEM, 
		"Name=selectCLL_5", "Value=24083", ENDITEM, 
		"Name=selectCLL_6", "Value=24224", ENDITEM, 
		"Name=selectCLL_7", "Value=23690", ENDITEM, 
		"Name=selectCLL_8", "Value=24113", ENDITEM, 
		"Name=selectCLL_9", "Value=24139", ENDITEM, 
		"Name=selectCLL_10", "Value=23785", ENDITEM, 
		"Name=selectCLL_11", "Value=24166", ENDITEM, 
		"Name=selectCLL_12", "Value=23757", ENDITEM, 
		"Name=selectCLL_13", "Value=24248", ENDITEM, 
		"Name=selectCLL_", "Value=23856", ENDITEM, 
		"Name=selectCLL_", "Value=", ENDITEM, 
		"Name=templateSetCLLIds", "Value=23934,23998,24026,24055,24192,24083,24224,23690,24113,24139,23785,24166,23757,24248,23856", ENDITEM, 
		"Name=_excludeEmptySections", "Value=", ENDITEM, 
		"Name=excludeEmptySections", "Value=on", ENDITEM, 
		"Name=templateType", "Value=TEMPLATE_SET", ENDITEM, 
		"Name=edit", "Value=true", ENDITEM, 
		"Name=templateId", "Value=30908", ENDITEM, 
		"Name=version", "Value=4", ENDITEM, 
		"Name=Update", "Value=Update", ENDITEM, 
		"Name=_csrf", "Value=ba39333f-d902-4776-97b4-c0c2f5287426", ENDITEM, 
		LAST);

	web_url("ec.render.min-f6d1f2204b8afac135ad5f0e158f00e8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/easychart/ec.render.min-f6d1f2204b8afac135ad5f0e158f00e8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t139.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t140.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getTemplateNameDescription_15", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23934", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t141.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_16", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24026", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_17", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23998", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_18", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24055", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_19", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24192", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_20", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24083", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_21", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24224", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_22", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23690", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_23", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24113", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_24", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24166", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_25", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24139", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_26", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23785", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_27", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23856", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_28", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24248", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("6542_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/6542?_=1589965842864", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getTemplateNameDescription_29", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23757", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
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

	web_url("websocket_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/060/9tecwbzn/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S01_T06_Add_CaseLineListingTemplate_Tag_And_Update",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S01_T07_Remove_CaseLineListingTemplate_And_ClickUpdate");

	lr_end_transaction("S01_T07_Remove_CaseLineListingTemplate_And_ClickUpdate",LR_AUTO);

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

	web_url("30908_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t160.inf", 
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

	web_url("en.json_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t161.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getTemplateNameDescription_30", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23934", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_31", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24026", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_32", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23998", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_33", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24192", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_34", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24055", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_35", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24113", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_36", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24139", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_37", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24224", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_38", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23690", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_39", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24083", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_40", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24166", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_41", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23785", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_42", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23757", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_43", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24248", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_44", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23856", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("sharedWithValues_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithValues?ids=User_6542", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("6542_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/6542?_=1589965896039", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S01_T07_EditTemplate",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S01_T08_Remove_CaseLineListingTemplate_And_ClickUpdate");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_custom_request("xhr_streaming_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		"EncType=", 
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

	web_submit_data("update_2", 
		"Action=https://pvr-perf.rxlogix.com/reports/template/update?_csrf=ba39333f-d902-4776-97b4-c0c2f5287426", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/edit/30908", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=id", "Value=30908", ENDITEM, 
		"Name=owner", "Value=6542", ENDITEM, 
		"Name=name", "Value=Perftest1_CaseFormTemplate", ENDITEM, 
		"Name=description", "Value=Standard Template for Case Form Report", ENDITEM, 
		"Name=category.id", "Value=", ENDITEM, 
		"Name=tags", "Value=Data entry", ENDITEM, 
		"Name=sharedWith", "Value=User_6542", ENDITEM, 
		"Name=_qualityChecked", "Value=", ENDITEM, 
		"Name=fixedTemplateName", "Value=", ENDITEM, 
		"Name=fixedTemplateFile", "Value=", "File=Yes", ENDITEM, 
		"Name=_useFixedTemplate", "Value=", ENDITEM, 
		"Name=selectCLL_0", "Value=23934", ENDITEM, 
		"Name=selectCLL_1", "Value=23998", ENDITEM, 
		"Name=selectCLL_2", "Value=24026", ENDITEM, 
		"Name=selectCLL_3", "Value=24055", ENDITEM, 
		"Name=selectCLL_4", "Value=24192", ENDITEM, 
		"Name=selectCLL_5", "Value=24083", ENDITEM, 
		"Name=selectCLL_6", "Value=24224", ENDITEM, 
		"Name=selectCLL_7", "Value=23690", ENDITEM, 
		"Name=selectCLL_8", "Value=24113", ENDITEM, 
		"Name=selectCLL_9", "Value=24139", ENDITEM, 
		"Name=selectCLL_10", "Value=23785", ENDITEM, 
		"Name=selectCLL_11", "Value=24166", ENDITEM, 
		"Name=selectCLL_12", "Value=23757", ENDITEM, 
		"Name=selectCLL_13", "Value=24248", ENDITEM, 
		"Name=selectCLL_", "Value=", ENDITEM, 
		"Name=templateSetCLLIds", "Value=23934,23998,24026,24055,24192,24083,24224,23690,24113,24139,23785,24166,23757,24248", ENDITEM, 
		"Name=_excludeEmptySections", "Value=", ENDITEM, 
		"Name=excludeEmptySections", "Value=on", ENDITEM, 
		"Name=templateType", "Value=TEMPLATE_SET", ENDITEM, 
		"Name=edit", "Value=true", ENDITEM, 
		"Name=templateId", "Value=30908", ENDITEM, 
		"Name=version", "Value=5", ENDITEM, 
		"Name=Update", "Value=Update", ENDITEM, 
		"Name=_csrf", "Value=ba39333f-d902-4776-97b4-c0c2f5287426", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t183.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getTemplateNameDescription_45", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24026", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_46", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23998", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_47", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23934", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_48", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24055", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_49", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24083", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_50", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23690", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_51", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24224", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_52", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24192", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_53", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24113", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_54", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24139", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_55", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23785", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_56", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24166", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_57", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=23757", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateNameDescription_58", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=24248", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("6542_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/6542?_=1589965932442", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("info_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t200.inf", 
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
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/467/hnw5_khu/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S01_T08_Remove_CaseLineListingTemplate_And_ClickUpdate",LR_AUTO);

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
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1589965932443", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		LAST);

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
		"URL=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/view/30908", 
		"Snapshot=t203.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t204.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t206.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t207.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t208.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t211.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t212.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t213.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t214.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t215.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t216.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t217.inf", 
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

	web_url("en.json_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t205.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t218.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t219.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t220.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t221.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t222.inf", 
		LAST);

	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t223.inf", 
		LAST);

	web_url("emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t224.inf", 
		LAST);

	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t225.inf", 
		LAST);

	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t227.inf", 
		LAST);

	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t228.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getTemplateNameDescription_59", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateNameDescription?id=30908", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t230.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("allEmails", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t231.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("allEmailsForCC", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t232.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fetchEvaluateCaseDatesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=true&dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t233.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchEvaluateCaseDateSubmissionForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t234.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchDateRangeTypesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t235.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getNumOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t236.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t237.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t238.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t239.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("6542_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/6542?_=1589965999059", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t240.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_7", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t241.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t242.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("sharedWithValues_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithValues?ids=User_6542", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t243.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("theme.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t244.inf", 
		LAST);

	web_url("polymer-mini.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t245.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t247.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("plugin.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t251.inf", 
		LAST);

	web_url("plugin.min.js_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t252.inf", 
		LAST);

	web_url("plugin.min.js_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t253.inf", 
		LAST);

	web_url("plugin.min.js_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t254.inf", 
		LAST);

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t255.inf", 
		LAST);

	web_url("plugin.min.js_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t256.inf", 
		LAST);

	web_url("skin.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t257.inf", 
		LAST);

	web_url("content.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t260.inf", 
		LAST);

	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t261.inf", 
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

	web_url("websocket_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/592/lkf0fa7f/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t264.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S01_T08_ClickRun",LR_AUTO);

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
		"ba39333f-d902-4776-97b4-c0c2f5287426");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("searchViews", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t265.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=PARACETAMOL", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={}", ENDITEM, 
		LAST);

	web_custom_request("getSelectedItem", 
		"URL=https://pvr-perf.rxlogix.com/reports/productDictionary/getSelectedItem?productId=105684&dataSource=pva&dictionaryLevel=3&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t266.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t267.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t268.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=2", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=102542", ENDITEM, 
		LAST);

	lr_end_transaction("S01_T09_ClickProductSelectionLookUp",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1589965999060", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t269.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S01_T11_AddProduct");

	lr_end_transaction("S01_T11_AddProduct",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S01_T12_Click_Close");

	lr_end_transaction("S01_T12_Click_Close",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S01_T13_EnterReportName_Click_Save&Run");

	web_url("keep-alive_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1589965999061", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t270.inf", 
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
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create?selectedTemplate=30908", 
		"Snapshot=t271.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value=6542", ENDITEM, 
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
		"Name=templateQueries[0].query", "Value=", ENDITEM, 
		"Name=templateQueries[0].queryLevel", "Value=CASE", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUMULATIVE", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[0].validQueries", "Value=", ENDITEM, 
		"Name=reportName", "Value=PT_A001", ENDITEM, 
		"Name=description", "Value=", ENDITEM, 
		"Name=_qualityChecked", "Value=", ENDITEM, 
		"Name=_isTemplate", "Value=", ENDITEM, 
		"Name=sharedWith", "Value=User_6542", ENDITEM, 
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
		"Name=schedulerTime", "Value=2020-05-20 09:13:17", ENDITEM, 
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-05-20T09:13Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
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
		"Name=templateBlanks", "Value=false", ENDITEM, 
		"Name=queryBlanks", "Value=false", ENDITEM, 
		"Name=schedulerFrom", "Value=createPage", ENDITEM, 
		"Name=editable", "Value=true", ENDITEM, 
		"Name=blankValuesJSON", "Value=", ENDITEM, 
		"Name=_csrf", "Value=ba39333f-d902-4776-97b4-c0c2f5287426", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("executionStatus-abc243051811af7ce55db349117755f2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/executionStatus-abc243051811af7ce55db349117755f2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t272.inf", 
		LAST);

	web_url("executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t274.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t273.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_concurrent_start(NULL);

	web_url("dataTables_en.json_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t275.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");

	web_url("datepicker.hbs_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t276.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");

	web_url("filter_panel.hbs_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t277.inf", 
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

	web_url("6542_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/6542?_=1589966153077", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t278.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=reportName&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=periodicReportType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=version&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=executionStatus&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=false&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=runDate&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionTime&columns%5B6%5D%5Bname%5D=&"
		"columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=frequency&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=sharedWith&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D="
		"false&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=deliveryMedia&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=false&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=runDate&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=5&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&searchString=&direction=desc&sort=runDate&status=GENERATING&_=1589966153078", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t279.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t280.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("xhr_streaming_8", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t281.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	lr_end_transaction("S01_T13_EnterReportName_Click_Save&Run",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S01_T14_NavigateTemplates_TemplateLibrary");

	web_custom_request("xhr_streaming_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

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

	web_url("index_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t283.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("xhr_streaming_10", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/379/6qkuem03/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t284.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_concurrent_start(NULL);

	web_url("en.json_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t285.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_url("dataTables_en.json_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t286.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("lookup_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/lookup?name=category", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t287.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("tag_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/tag", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t288.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/datepicker-a99850ac14141b1682f3c603d763f8a2.hbs\"");

	web_concurrent_start(NULL);

	web_url("datepicker.hbs_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t289.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"app/hbs-templates/filter_panel-0995aca0802ddc9992345ce1ecf2e3b9.hbs\"");

	web_url("filter_panel.hbs_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t290.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("6542_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/6542?_=1589966177791", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t291.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_9", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t292.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("templates_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/api/templates?draw=1&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=category&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=name&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=description&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=qualityChecked&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=checkUsage&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=owner.fullName&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastUpdated&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=lastExecuted&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=tags&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=false&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&"
		"search%5Bvalue%5D=Perftest1_CaseFormTemplate&search%5Bregex%5D=false&searchString=Perftest1_CaseFormTemplate&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&direction=desc&sort=isFavorite&_=1589966177792", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t293.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S01_T14_NavigateTemplates_TemplateLibrary",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_6", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/192/17i2genx/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		LAST);

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
		"URL=https://pvr-perf.rxlogix.com/reports/api/templates?draw=2&columns%5B0%5D%5Bdata%5D=isFavorite&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=type&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=category&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=name&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=description&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=qualityChecked&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=checkUsage&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=owner.fullName&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=dateCreated&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastUpdated&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=lastExecuted&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B11%5D%5Bdata%5D=tags&columns%5B11%5D%5Bname%5D=&columns%5B11%5D%5Bsearchable%5D=true&columns%5B11%5D%5Borderable%5D=false&columns%5B11%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B11%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B12%5D%5Bdata%5D=&columns%5B12%5D%5Bname%5D=&columns%5B12%5D%5Bsearchable%5D=true&columns%5B12%5D%5Borderable%5D=false&columns%5B12%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B12%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&"
		"search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&direction=desc&sort=isFavorite&_=1589966177793", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/template/index", 
		"Snapshot=t295.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S01_T15_RemoveFilter",LR_AUTO);

	lr_think_time(3);

	return 0;
}
