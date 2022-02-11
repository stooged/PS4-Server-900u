#if USBCONTROL
static const char indexData[] PROGMEM = R"==(
<!DOCTYPE html><html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>ESP Server</title>
<style>
.btn {
    background-color: DodgerBlue;
    border: none;
    color: white;
    padding: 12px 16px;
    font-size: 16px;
    cursor: pointer;
  font-weight: bold;
}
.btn:hover {
    background-color: RoyalBlue;
}

body {
  background-color: #1451AE;
  color: #ffffff;
  font-size: 14px;
  font-weight: bold;
  margin: 0 0 0 0.0;
  overflow-y:hidden;
  text-shadow: 3px 2px DodgerBlue;
} 

.main {
  padding: 0px 0px;
  position: absolute; 
  top: 0; 
  right: 0;
  bottom: 0; 
  left: 0;
  overflow-y:hidden;
}
</style>
</head>
<body>
<div class="main">
<iframe src="payloads.html" height="100%" width="100%" frameborder="0"></iframe>
</div>
</body>
</html>
)==";

#else

static const char indexData[] PROGMEM = R"==(
<!DOCTYPE html>
<html manifest="cache.manifest">
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>ESP Server</title>
<style>
.btn {
    background-color: DodgerBlue;
    border: none;
    color: white;
    padding: 12px 16px;
    font-size: 16px;
    cursor: pointer;
  font-weight: bold;
}
.btn:hover {
    background-color: RoyalBlue;
}

body {
  background-color: #1451AE;
  color: #ffffff;
  font-size: 14px;
  font-weight: bold;
  margin: 0 0 0 0.0;
  overflow-y:hidden;
  text-shadow: 3px 2px DodgerBlue;
} 

.main {
  padding: 0px 0px;
  position: absolute; 
  top: 0; 
  right: 0;
  bottom: 0; 
  left: 0;
  overflow-y:hidden;
}

#prog {
  -webkit-background-clip: padding-box;
  background-clip: padding-box;
  -webkit-pointer-events: none;
  pointer-events: none;
  -webkit-user-select: none;
  user-select: none;
  z-index: 2000;
  position: fixed;
  margin: auto;
  top: 12px;
  left: 0;
  right: 0;
  bottom: 0;
  width: 870px;
  height: 60px;
  border: 3px solid #fff;
  
}
  
#prog span {
  background-color: 1451AE;
  position: absolute;
  width: 100%;
  display: block;
  text-align: center;
  font-size: 25px;
  color: #ffffff;
  font-weight: bold;
  line-height: 60px;
  
}

#prog span#progper {
  bottom: 100%;
}

#prog span.proglbl {
  top: 100%;
  text-transform: uppercase;
}

#prog #progani {
  -webkit-background-clip: padding-box;
  background-clip: padding-box;
  -webkit-transition-property: width;
  transition-property: width;
  -webkit-transition-duration: 0.125s;
  transition-duration: 0.125s;
  width: 0;
  min-width: 5px;
  max-width: 864px;
  z-index: 2000;
  display: block;
  position: absolute;
  left: 0;
  top: 0;
  height: 60px;
  -webkit-background-size: 54px 54px;
  background-size: 54px 54px;
  background-image: 
  -webkit-linear-gradient(45deg, transparent 33%, rgba(0, 0, 0, .1) 33%,  rgba(0,0, 0, .1) 66%, transparent 66%),
  -webkit-linear-gradient(top, rgba(30, 144, 255, 0.9),  rgba(30, 144, 255, 0.9)),
  -webkit-linear-gradient(left,rgba(30, 144, 255, 0.9), rgba(30, 144, 255, 0.9));
  border-radius: 2px; 
  background-size: 5px 2px, 100% 100%, 100% 100%;
  -webkit-animation: animate-stripes 10s linear infinite;
  animation: animate-stripes 10s linear infinite;
  color: DodgerBlue;
}

@-webkit-keyframes animate-stripes {
   100% { background-position: 100px 0px; }
}

@keyframes animate-stripes {
   100% { background-position: 100px 0px; }
}
</style>
</head>
<body>
<div id="progpanel"></div>
</body>
<script>

  function loadMenu(e) {
    window.location.href = 'menu.html';
  }
  
  function loadProg(e) {
    var htmstr = ['<div id=\"prog\" class=\"progbar\"><span id=\"progper\">0%</span><div id=\"progani\"></div><span class=\"proglbl\">Caching Exploit Files...</span></div>'];
  var progPanel = document.getElementById('progpanel');
  progPanel.innerHTML = htmstr;
  }
  
    function progEvent(e) {
  var progWidth = Math.round(Number(e.loaded + 1) / Number(e.total + 1) * 100);
  document.getElementById('progper').innerHTML = progWidth - 1 +'%';
  document.getElementById('progani').style.width = progWidth - 1 +'%';
  }
  
   window.applicationCache.addEventListener('downloading', loadProg, false);
   window.applicationCache.addEventListener('cached',  loadMenu, false);
   window.applicationCache.addEventListener('noupdate',  loadMenu, false);
   window.applicationCache.addEventListener('error',  loadMenu, false);
   window.applicationCache.addEventListener('progress', progEvent, false);
</script>
</html>
)==";

#endif

static const char menuData[] PROGMEM = R"==(
<!DOCTYPE html><html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>ESP Server</title>
<style>
.btn {
    background-color: DodgerBlue;
    border: none;
    color: white;
    padding: 12px 16px;
    font-size: 16px;
    cursor: pointer;
  font-weight: bold;
}
.btn:hover {
    background-color: RoyalBlue;
}

body {
  background-color: #1451AE;
  color: #ffffff;
  font-size: 14px;
  font-weight: bold;
  margin: 0 0 0 0.0;
  overflow-y:hidden;
  text-shadow: 3px 2px DodgerBlue;
} 

.main {
  padding: 0px 0px;
  position: absolute; 
  top: 0; 
  right: 0;
  bottom: 0; 
  left: 0;
  overflow-y:hidden;
}
</style>
<script>
if (window.location.pathname.startsWith("/document/"))
{
  var docpath = window.location.pathname.replace("menu.html","index.html");
  window.addEventListener('popstate', (event) => {
  alert("Close Browser");
  history.pushState({}, '', docpath);
  },false);
  history.pushState({}, '', docpath);
}else{
  window.addEventListener('popstate', (event) => {
  alert("Close Browser");
  history.pushState({}, '', '/');
  },false);
  history.pushState({}, '', '/');
}
</script>
</head>
<body>
<div class="main">
<iframe src="payloads.html" height="100%" width="100%" frameborder="0"></iframe>
</div>
</body>
</html>
)==";


static const char autohenData[] PROGMEM = R"==(
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>ESP Server</title>
<script>
function setpayload(payload,title,waittime)
{
   sessionStorage.setItem('payload', payload);
   sessionStorage.setItem('title', title);
   sessionStorage.setItem('waittime', waittime);
   window.open("loader.html", "_self");
}
</script>
<style>
.btn {
    background-color: DodgerBlue;
    border: none;
    color: white;
    padding: 12px 16px;
    font-size: 16px;
    cursor: pointer;
  font-weight: bold;
}
.btn:hover {
    background-color: RoyalBlue;
}

body {
  background-color: #1451AE;
  color: #ffffff;
  font-size: 14px;
  font-weight: bold;
  margin: 0 0 0 0.0;
  overflow-y:hidden;
  text-shadow: 3px 2px DodgerBlue;
} 

.main {
  padding: 0px 0px;
  position: absolute; 
  top: 0; 
  right: 0;
  bottom: 0; 
  left: 0;
  overflow-y:hidden;
}
</style>
</head>
<body onload="setpayload('gldhen.bin','GoldHEN','12000');">
</body>
</html>
)==";
