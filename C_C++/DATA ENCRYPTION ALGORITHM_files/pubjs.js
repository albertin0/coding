if(typeof WXSystem=="undefined"&&typeof WXSystem2=="undefined"){WXSystem="FP19";var PMOStartTime=new Date().getTime();var PMCONF={adSrc:"//static.cmptch.com/v/swf/tldynamicjsp.swf?43",helpUrl:"",website:"",dispEngineVer:"",transHelp:"http://www.rapidreaderapp.com/about-this-ad",transHelpHTML:"This ad is brought to you by <b>RapidReader</b>. Please take a moment to view it.",transHelpWin:"",transHome:"",transHelpAdInfo:"",brandingBarUrl:"//fp119.digitaloptout.com/bar/barjsp.php?u=http%3A%2F%2Fwww.rapidreaderapp.com%2Fabout-this-ad",brandingBarWidth:"215",supportedEngines:"^$",customDisplayEvent:"",customClassid:"",appName:"RapidReader",params:"YTMwMjA0Mzg5MTiSLohaEcULokEXGcbvuO1xH2BTuQidWm95%2F7DX13MF3PhSRj9o4eKFz4F6UilLHs6cNOGk7ZNM0Ct%2B9%2BcbPmETgxEjjaZBK%2BDwpuGbyQf9OFajmi6ALF3pLrnWMJVHguYiFobzQQkRnBAvcQnh2L9LdH8kIVHgAdRAMMxQ6tNInQ%3D%3D",jsdomain:"fp119.digitaloptout.com",adsType:"tl:bn:ta:pp:ns".split(":"),cb:"43",checkAdsFlash:"//partners.cmptch.com/flash/ga.swf?43",customTLUnit:"no",bnUseAppName:"yes",testMode:"",gamesXml:"",abDet:1,executionStatus:"idle",trackingTimer:500,trIntervalID:null,staticBnTimeout:40000,taTimer:"180",ntaTimer:"360",utFlash:"//partners.cmptch.com/flash/ut.swf?43",loadTime:Math.round(new Date().getTime()/1000),spFlag:"0",lpStorageParams:null,attributed:false,postParamsSent:false};(function(){var b=document.createElement("script");b.src="//static.cmptch.com/v/lib/abchk.js?p=1&banner_id=23";b.type="text/javascript";document.getElementsByTagName("head")[0].appendChild(b);if(window==window.top&&typeof JSON=="undefined"){var a=document.createElement("script");a.src="//partners.cmptch.com/ac/json3.min.js";a.type="text/javascript";document.getElementsByTagName("head")[0].appendChild(a)}}());function WXIsAdWindow(){var a=window.name.toString().split("|");if(a.length>=3&&a[0].substr(0,3)=="FA_"&&a[2].match(new RegExp("^[tda]$","g"))!=null){if(Math.round((new Date()).getTime()/1000)-a[1]>600){window.name="";return false}}return window.name.toString().match(new RegExp("^FA[-_]","g"))!=null||window.location.href.match(new RegExp("lll[a-zA-Z0-9]{11}00","g"))!=null}if(WXIsAdWindow()){try{}catch(ex){}}function WXLog(){if(arguments.length==0){return}var a=WXSystem;for(var d=0;d<arguments.length;d++){a+="_:_"+arguments[d]}var c="//fp119.digitaloptout.com/acttr?p=YTMwMjA0Mzg5MTiSLohaEcULokEXGcbvuO1xH2BTuQidWm95%2F7DX13MF3PhSRj9o4eKFz4F6UilLHs6cNOGk7ZNM0Ct%2B9%2BcbPmETgxEjjaZBK%2BDwpuGbyQf9OFajmi6ALF3pLrnWMJVHguYiFobzQQkRnBAvcQnh2L9LdH8kIVHgAdRAMMxQ6tNInQ%3D%3D&m="+encodeURIComponent(a)+"&t="+(new Date()).getTime();var b=document.createElement("img");b.src=c;b.width=1;b.height=1;b.style.width="1px";b.style.height="1px";if(document.body.nodeName=="FRAMESET"){document.documentElement.insertBefore(b,document.body)}else{document.body.appendChild(b)}}function WXLogFlash(){if(arguments.length==0){return}var a=WXSystem+"\t"+location.href;for(var d=0;d<arguments.length;d++){a+="\t"+encodeURIComponent(arguments[d])}var e=(WXIEVersion>0&&(WXIEVersion<11||document.documentMode!=11));var b=(e)?document.getElementById("utFl"):document.utFl;try{b.logUrl(a)}catch(c){WXLog("de-tran-ex4",PX.getExceptionInfo(c))}}function WXGetPageInfo(){var a={};if(window.innerWidth){a.pageYOffset=window.pageYOffset;a.pageXOffset=window.pageXOffset;a.innerWidth=Math.min(window.innerWidth,document.documentElement.clientWidth);a.innerHeight=Math.min(window.innerHeight,document.documentElement.clientHeight)}else{if(document.documentElement&&document.documentElement.clientWidth){a.pageYOffset=document.documentElement.scrollTop;a.pageXOffset=document.documentElement.scrollLeft;a.innerWidth=document.documentElement.clientWidth;a.innerHeight=document.documentElement.clientHeight}else{if(document.body){a.pageYOffset=document.body.scrollTop;a.pageXOffset=document.body.scrollLeft;a.innerWidth=document.body.clientWidth;a.innerHeight=document.body.clientHeight}}}return a}function WXGetAdInfo(){WXAdInfo={};var b="",e=window.name.toString().split("|"),d=(document.body.nodeName=="FRAMESET");if(window.name.toString().substr(0,2)=="FA"){WXAdInfo.timeElapsed=Math.round((new Date()).getTime()/1000)-e[1];WXLog("lptt",WXAdInfo.timeElapsed)}var a=(new RegExp("lll[a-zA-Z0-9]{11}00","g")).exec(window.location.href);if(a!=null){b=a[0];WXAdInfo.timeElapsed=0}var c=WXGetPageInfo();WXAdInfo.redirect=(document.domain.match(new RegExp("(totult|smrgfn|drsqhm|mbwdnr|trmpkc)\\.com","ig"))!=null);WXAdInfo.brandingRequired=(!WXAdInfo.redirect&&((window.name.toString().substr(0,3)=="FA_"&&WXAdInfo.timeElapsed<25&&e.length>=3&&e[2].match(new RegExp("^[tda]$","g"))!=null)||b.match(new RegExp("[12]00$"))!=null));WXAdInfo.isTA=(e.length>=3&&e[2]=="t")||b.substr(13,1)==2;WXAdInfo.isDA=WXAdInfo.isTA||(WXAdInfo.brandingRequired&&window.name.toString().substr(0,3)!="FA-");WXAdInfo.adType=e.length>=3?e[2]:"";WXAdInfo.debugStr=WXAdInfo.timeElapsed+"|"+(typeof window.onbeforeunload=="function")+"|"+c.innerWidth+"x"+c.innerHeight+"|"+(typeof document.body.onclick=="function"||typeof document.onclick=="function")+"|"+window.name.toString()+"|"+screen.width+"x"+screen.height+"|"+b+"|"+WXAdInfo.redirect+"|"+WXAdInfo.brandingRequired+"|"+(document.body?document.body.innerHTML.length:0);WXAdInfo.params=e;WXAdInfo.lpDebugStr=WXAdInfo.timeElapsed+"|"+(typeof window.onbeforeunload=="function")+"|"+c.innerWidth+"x"+c.innerHeight+"|"+(typeof document.body.onclick=="function"||typeof document.onclick=="function")+"|"+screen.width+"x"+screen.height+"|"+b+"|"+WXAdInfo.redirect+"|"+WXAdInfo.brandingRequired+"|"+(document.body?document.body.innerHTML.length:0)+"|"+(d?1:0)+"|"+window.name.toString();return WXAdInfo}WXIEVersion=function(){var c=0,a=navigator.userAgent,b=null;if(navigator.appName=="Microsoft Internet Explorer"){b=new RegExp("MSIE ([0-9]{1,}[.0-9]{0,})");if(b.exec(a)!=null){c=parseFloat(RegExp.$1)}}else{if(navigator.appName=="Netscape"){b=new RegExp("Trident/.*rv:([0-9]{1,}[.0-9]{0,})");if(b.exec(a)!=null){c=parseFloat(RegExp.$1)}}}return c}();WXBackComp=WXIEVersion>0&&(WXIEVersion<8||(WXIEVersion<10&&document.compatMode&&document.compatMode=="BackCompat"));var WXLPWorker=(function(){var a=false;var d=function(){var h="//partners.cmptch.com/lpl",g="//partners.cmptch.com/flash/lpa.swf",i=(WXIEVersion>0&&(WXIEVersion<11||document.documentMode!=11));var f=document.createElement("DIV");f.id="lpWorkerDiv";if(i){f.innerHTML="<object id='lpWorker' name='lpWorker' classid='clsid:D27CDB6E-AE6D-11cf-96B8-444553540000' codebase='"+document.location.protocol+"//download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,0,0' width='1' height='1'><param name='movie' value='"+g+"'/><param name='quality' value='high' /><param name='wmode' value='transparent'><param name='allowScriptAccess' value='always'><param name='flashVars' value='lpDest="+encodeURIComponent(h)+"'></object>"}else{f.innerHTML="<object id='lpWorker' name='lpWorker' data='"+g+"' width='1' height='1' type='application/x-shockwave-flash'><param name='quality' value='high' /><param name='wmode' value='transparent'><param name='allowScriptAccess' value='always'><param name='flashVars' value='lpDest="+encodeURIComponent(h)+"'></object>"}if(document.body.nodeName=="FRAMESET"){document.documentElement.insertBefore(f,document.body)}else{document.body.appendChild(f)}};var c=function(f){if(typeof f=="string"){return encodeURIComponent(f).replace(/\~/g,"%7E").replace(/\!/g,"%21").replace(/\*/g,"%2A").replace(/\(/g,"%28").replace(/\)/g,"%29").replace(/\'/g,"%27")}return f};var e=function(){var g=document.getElementsByTagName("title");var j="";for(var h=0,f=g.length;h<f;h+=1){if("textContent" in g[h]){j+=""+g[h].textContent}else{j+=""+g[h].innerText}}return j};var b=function(){var f={network:WXSystem,cc:(typeof WXAdInfo!="undefined"?WXAdInfo.lpDebugStr:""),uri:location.href,referrer:document.referrer,page_title:e(),content:(document.location.protocol=="http:"?document.getElementsByTagName("html")[0].innerHTML:""),storage_params:PMCONF.lpStorageParams};return WXJSON.stringify(f)};return{init:d,getParams:b}})();var WXJSON=(function(){var rx_one=/^[\],:{}\s]*$/,rx_two=/\\(?:["\\\/bfnrt]|u[0-9a-fA-F]{4})/g,rx_three=/"[^"\\\n\r]*"|true|false|null|-?\d+(?:\.\d*)?(?:[eE][+\-]?\d+)?/g,rx_four=/(?:^|:|,)(?:\s*\[)+/g,rx_escapable=/[\\\"\u0000-\u001f\u007f-\u009f\u00ad\u0600-\u0604\u070f\u17b4\u17b5\u200c-\u200f\u2028-\u202f\u2060-\u206f\ufeff\ufff0-\uffff]/g,rx_dangerous=/[\u0000\u00ad\u0600-\u0604\u070f\u17b4\u17b5\u200c-\u200f\u2028-\u202f\u2060-\u206f\ufeff\ufff0-\uffff]/g;function f(n){return n<10?"0"+n:n}function this_value(){return this.valueOf()}if(typeof Date.prototype.toJSON!=="function"){Date.prototype.toJSON=function(){return isFinite(this.valueOf())?this.getUTCFullYear()+"-"+f(this.getUTCMonth()+1)+"-"+f(this.getUTCDate())+"T"+f(this.getUTCHours())+":"+f(this.getUTCMinutes())+":"+f(this.getUTCSeconds())+"Z":null};Boolean.prototype.toJSON=this_value;Number.prototype.toJSON=this_value;String.prototype.toJSON=this_value}var gap,indent,rep,meta={"\b":"\\b","\t":"\\t","\n":"\\n","\f":"\\f","\r":"\\r",'"':'\\"',"\\":"\\\\"};function quote(string){rx_escapable.lastIndex=0;return rx_escapable.test(string)?'"'+string.replace(rx_escapable,function(a){var c=meta[a];return typeof c==="string"?c:"\\u"+("0000"+a.charCodeAt(0).toString(16)).slice(-4)})+'"':'"'+string+'"'}function str(key,holder){var i,k,v,length,mind=gap,partial,value=holder[key];if(value&&typeof value==="object"&&typeof value.toJSON==="function"){value=value.toJSON(key)}if(typeof rep==="function"){value=rep.call(holder,key,value)}switch(typeof value){case"string":return quote(value);case"number":return isFinite(value)?String(value):"null";case"boolean":case"null":return String(value);case"object":if(!value){return"null"}gap+=indent;partial=[];if(Object.prototype.toString.apply(value)==="[object Array]"){length=value.length;for(i=0;i<length;i+=1){partial[i]=str(i,value)||"null"}v=partial.length===0?"[]":gap?"[\n"+gap+partial.join(",\n"+gap)+"\n"+mind+"]":"["+partial.join(",")+"]";gap=mind;return v}if(rep&&typeof rep==="object"){length=rep.length;for(i=0;i<length;i+=1){if(typeof rep[i]==="string"){k=rep[i];v=str(k,value);if(v){partial.push(quote(k)+(gap?": ":":")+v)}}}}else{for(k in value){if(Object.prototype.hasOwnProperty.call(value,k)){v=str(k,value);if(v){partial.push(quote(k)+(gap?": ":":")+v)}}}}v=partial.length===0?"{}":gap?"{\n"+gap+partial.join(",\n"+gap)+"\n"+mind+"}":"{"+partial.join(",")+"}";gap=mind;return v}}function WXStringify(value,replacer,space){if(typeof value.toJSON!="undefined"){value.toJSON=undefined}var i;gap="";indent="";if(typeof space==="number"){for(i=0;i<space;i+=1){indent+=" "}}else{if(typeof space==="string"){indent=space}}rep=replacer;if(replacer&&typeof replacer!=="function"&&(typeof replacer!=="object"||typeof replacer.length!=="number")){throw new Error("JSON.stringify")}return str("",{"":value})}function WXParse(text,reviver){var j;function walk(holder,key){var k,v,value=holder[key];if(value&&typeof value==="object"){for(k in value){if(Object.prototype.hasOwnProperty.call(value,k)){v=walk(value,k);if(v!==undefined){value[k]=v}else{delete value[k]}}}}return reviver.call(holder,key,value)}text=String(text);rx_dangerous.lastIndex=0;if(rx_dangerous.test(text)){text=text.replace(rx_dangerous,function(a){return"\\u"+("0000"+a.charCodeAt(0).toString(16)).slice(-4)})}if(rx_one.test(text.replace(rx_two,"@").replace(rx_three,"]").replace(rx_four,""))){j=eval("("+text+")");return typeof reviver==="function"?walk({"":j},""):j}throw new SyntaxError("JSON.parse")}return{stringify:WXStringify,parse:WXParse}})();function WXIsBrandingRequired(){if(WXIsAdWindow()){WXGetAdInfo();if(document.body.nodeName=="FRAMESET"){WXAdInfo.debugStr+="|FRAMESET|0"}if(!WXAdInfo.redirect&&!WXLPWorker.executed){WXLPWorker.executed=true;WXLPWorker.init()}if(WXAdInfo.brandingRequired){return true}WXLog("bbnn",WXAdInfo.debugStr,WXAdInfo.brandingRequired)}return false}function WXStatusLog(){if(typeof FA!="undefined"&&FA&&typeof FA.executionStatus!="undefined"){if(FA.trackingTimer<=3000&&FA.executionStatus!="init-complete"){FA.trackingTimer+=500}else{WXLog("final-"+FA.executionStatus);clearInterval(PMCONF.trIntervalID)}}else{if(PMCONF.trackingTimer<=3000){PMCONF.trackingTimer+=500}else{WXLog("final-"+PMCONF.executionStatus);clearInterval(PMCONF.trIntervalID)}}}function WXAdUtilObj(){var a=document.createElement("DIV"),b=document.location.protocol+"//partners.cmptch.com/ca?p="+PMCONF.params+"&ver=7&d="+PMCONF.dispEngineVer+"&ie="+WXIEVersion+(WXIEVersion==11?"&ie11=1":"");a.id="utilDiv";if(WXIEVersion>0&&(WXIEVersion<11||document.documentMode!=11)){a.innerHTML="<object id='utFl' classid='clsid:D27CDB6E-AE6D-11cf-96B8-444553540000' codebase='"+document.location.protocol+"//download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,0,0' width='1' height='1'><param name='movie' value='"+PMCONF.utFlash+"' /><param name='quality' value='high' /><param name='wmode' value='transparent'><param name='allowScriptAccess' value='always'><param name='flashVars' value='keywordsURL="+escape(b)+"&ntaTimer="+PMCONF.ntaTimer+"'></object>"}else{a.innerHTML="<object id='utFl' data='"+PMCONF.utFlash+"' width='1' height='1' type='application/x-shockwave-flash'><param name='quality' value='high' /><param name='wmode' value='transparent'><param name='allowScriptAccess' value='always'><param name='flashVars' value='keywordsURL="+escape(b)+"&ntaTimer="+PMCONF.ntaTimer+"'></object>"}if(document.body.nodeName=="FRAMESET"){document.documentElement.insertBefore(a,document.body)}else{document.body.appendChild(a)}}function WXinitD(){if(document.body.nodeName=="FRAMESET"){setTimeout(WXinitDTime,3000)}else{if(document.addEventListener){document.addEventListener("click",handleGlobalClick,true)}else{document.attachEvent("onclick",handleGlobalClick);setTimeout(WXinitDTime,3000)}}}function WXinitDTime(){if(document.body.nodeName=="FRAMESET"){var a=window.frames.length;if(typeof(document.attachEvent)!="undefined"){for(var c=0;c<a;c++){try{window.frames[c].document.attachEvent("onclick",handleGlobalClick)}catch(b){}}}else{for(var c=0;c<a;c++){try{window.frames[c].document.addEventListener("click",handleGlobalClick,true)}catch(b){}}}}else{if(!document.addEventListener){var e=document.getElementsByTagName("a");var d=e.length;for(var c=0;c<d;c++){e[c].attachEvent("onclick",handleGlobalClick)}}}}function WXTriggerJSCallback(hasDisplayResponse){try{eval("")}catch(e){}}function handleGlobalClick(a){if(typeof PX!="undefined"){PX.dispMng(a)}else{}}function WXFlashVer(){var a=0;try{if(navigator.plugins&&navigator.mimeTypes.length){var d=navigator.plugins["Shockwave Flash"];if(d!=null&&navigator.mimeTypes["application/x-shockwave-flash"].enabledPlugin!=null){a=(d.description.replace(/([a-zA-Z]|\s)+/,"").replace(/(\s+r|\s+b[0-9]+)/,".").split(".")[0]<9?1:2)}}else{if(window.ActiveXObject){try{var c=new ActiveXObject("ShockwaveFlash.ShockwaveFlash.7")}catch(b){try{var c=new ActiveXObject("ShockwaveFlash.ShockwaveFlash")}catch(b){}}if(c!=null){a=(c.GetVariable("$version").split(" ")[1].split(",")[0]<9?1:2)}}}}catch(b){}if(a<2){WXLog("no-flash",a)}}var PMSSR=(function(){var b=function(g){var d=(document.domain.match(new RegExp("(totult|smrgfn|drsqhm|mbwdnr|trmpkc)\\.com","ig"))!=null),e=null,f=null;if(!d){if(g!=="EMPTY"){if(PMCONF.postParamsSent){WXLog("spraft")}e=WXJSON.parse(g);f="FA_"+e.creativeId+"|"+e.timestamp+"|"+e.adType+"|"+e.param+"|"+e.optParams+"|"+e.requestId;if(f===window.name){}else{}if(a(e.timestamp)){PMCONF.lpStorageParams=f;if(window.name!==f){window.name=f}if(!PMCONF.attributed&&WXIsBrandingRequired()){PMCONF.attributed=true;setTimeout(function(){var h=document.createElement("script");h.src="//fp119.digitaloptout.com/bar/brandingbar.js?43";h.type="text/javascript";h.id="WXBrandingID";document.getElementsByTagName("head")[0].appendChild(h);PMCONF.executionStatus="brand-loaded"},3000)}if(!WXLPWorker.executed){WXLPWorker.executed=true;WXLPWorker.init()}}}}};var a=function(e){var d=document.getElementById("pmssr");if(typeof e!=="undefined"&&e&&(Math.round((new Date()).getTime()/1000)-parseInt(e)<600)){return true}else{d.contentWindow.postMessage("CLEARPMSSCRPRM","*");return false}};window.PMMsgHandler=function(d){var g=d.data.toString(),e=g.split("#"),h,f;if(g!==null){h=e[0];f=e[1];if(h==="PMSSCRPRM01"){if(typeof window.addEventListener!=="undefined"){window.removeEventListener("message",PMMsgHandler,false)}else{window.detachEvent("onmessage",PMMsgHandler)}b(f)}}};var c=function(){if(typeof sessionStorage!=="undefined"&&window.postMessage!=="undefined"){if(typeof window.addEventListener!=="undefined"){window.addEventListener("message",PMMsgHandler,false)}else{window.attachEvent("onmessage",PMMsgHandler)}var d=document.createElement("IFRAME");d.setAttribute("src","//static.cmptch.com/v/lib/str.html");d.setAttribute("id","pmssr");d.setAttribute("frameborder","0");d.setAttribute("scrolling","no");d.setAttribute("marginwidth","0");d.setAttribute("marginheight","0");d.setAttribute("allowtransparency","true");d.width="1px";d.height="1px";if(document.body.nodeName=="FRAMESET"){document.documentElement.insertBefore(d,document.body)}else{document.body.appendChild(d)}}};return{init:c}}());function WXLoad(){if(window==window.top){PMCONF.executionStatus="load-start";WXinitD();WXAdUtilObj();WXFlashVer();if(WXIsBrandingRequired()&&!PMCONF.attributed){PMCONF.attributed=true;setTimeout(function(){var d=document.createElement("script");d.src="//fp119.digitaloptout.com/bar/brandingbar.js?43";d.type="text/javascript";d.id="WXBrandingID";document.getElementsByTagName("head")[0].appendChild(d);PMCONF.executionStatus="brand-loaded"},3000)}if(document.location.protocol=="http:"||(typeof PMCONF.spFlag!=="undefined"&&parseInt(PMCONF.spFlag)>0)){if(parseInt(PMCONF.spFlag)!==2||(location.hash.length===0&&location.pathname.length<=1)){var b=document.createElement("link");b.type="text/css";b.rel="stylesheet";b.href="//static.cmptch.com/v/lib/style.css?43";b.media="screen";document.getElementsByTagName("head")[0].appendChild(b);PMCONF.executionStatus="style-loaded";var a=document.createElement("script");a.src="//static.cmptch.com/v/lib/facommon3b.js?43";a.type="text/javascript";a.id="FACommonScript";document.getElementsByTagName("head")[0].appendChild(a);PMCONF.executionStatus="fc-loaded"}}else{PMCONF.executionStatus="load-stop-not-http"}if(document.location.protocol=="https:"){var c=document.createElement("img");c.src="//partners.cmptch.com/scttr?p="+PMCONF.params;c.width=1;c.height=1;c.style.width="1px";c.style.height="1px";document.body.appendChild(c)}}else{PMCONF.executionStatus="load-stop-not-top"}}(function run(){if(typeof document.body!=="undefined"&&document.body){PMSSR.init();WXLoad()}else{if(typeof run.tracked==="undefined"){var a=new Image();a.src="//partners.cmptch.com/jsbtr?p=YTMwMjA0Mzg5MTiSLohaEcULokEXGcbvuO1xH2BTuQidWm95%2F7DX13MF3PhSRj9o4eKFz4F6UilLHs6cNOGk7ZNM0Ct%2B9%2BcbPmETgxEjjaZBK%2BDwpuGbyQf9OFajmi6ALF3pLrnWMJVHguYiFobzQQkRnBAvcQnh2L9LdH8kIVHgAdRAMMxQ6tNInQ%3D%3D&"+new Date().getTime();run.tracked=true}window.setTimeout(run,50)}}())}else{if(typeof WXSystem!="undefined"){WXLog("already-injected","FP19",WXSystem)}};