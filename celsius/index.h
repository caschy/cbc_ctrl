const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
<title>Diesel Heater Controller - Caschy</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
  <link rel='icon' href='data:image/png;base64,Qk1YCgAAAAAAADYAAAAoAAAAGAAAACQAAAABABgAAAAAACIKAAASCwAAEgsAAAAAAAAAAAAAAAAAAAAAAAAAAAAACgoKWVlZPj4+Dw8PAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAExMTExMTAAAAAAAAAAAAAAAAAAAAAAAAAAAABAQELS0tW1tbdHR0KCgoBQUFAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQ0NDZ2dnLCwsAAAAAAAAAAAAAAAAAAAADAwMKysrhoaGzc3NZWVlDg4OAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAS0tLhYWFYWFhNDQ0AgICAAAAAAAAAAAALi4ugYGB29vb/v7+TU1NBwcHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAANjY2kZGRra2tdHR0ISEhBQUFAAAAFRUVZ2dn3Nzc////7OzsVVVVCgoKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQEBNzc3wsLC////jo6OXV1dFxcXAAAAWFhY0NDQ/f39////8PDwbGxsERERAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACgoKR0dHurq6////9vb2mJiYIiIiAAAAdnZ25OTk////////8vLyg4ODExMTAAAAAAAAAAAAAAAAAAAAAAAAAQEBAgICAAAAOTk5rq6u7+/v////////lpaWLS0tEBAQf39/4uLi////////8vLygYGBLCwsCQkJAAAAAAAAAAAAAAAAAAAABgYGCQkJAAAAWFhY3t7e////////////09PTZWVlLCwsf39/4uLi////////9/f3srKyYGBgEhISBQUFEhISAAAAAAAAAAAAEhISKSkpCwsLWFhY09PT////////////////kZGRPz8/fn5+4uLi////////////////ioqKDg4OFRUVUVFRDg4OAgICAAAAHh4eXV1dYGBgeHh41NTU////////////////jIyMQEBAeXl54ODg////////////////g4ODBwcHICAghoaGXl5eEhISAAAAFxcXf39/9/f3+vr6/v7+////////////////hoaGNzc3bW1t6Ojo////////////////gICAOjo6UFBQc3NzdXV1FxcXAAAADw8PcHBw/////////////////////v7+srKyTk5OJiYmTExMlpaW4ODg////////////0NDQwcHByMjIx8fHz8/PR0dHAAAACwsLbm5u/f39/////////////////f39mJiYKioqCwsLHBwcTk5Oy8vL////////////////////////////////ampqAAAAEBAQhISE/f39////////////////////nZ2dISEhAAAAAAAARkZGu7u78/Pz/f394+Pj3Nzc4uLi8/Pz////////XV1dAgICIiIilpaW/f39/////////////Pz86enphYWFHBwcAAAAAAAALCwsXl5etra29fX1UVFRHBwcRkZGs7Oz////////V1dXJCQkUFBQlJSU/f39////////////6enpfn5+Tk5OExMTAAAAAAAABwcHOjo6urq69fX1Tk5OAAAALy8vsrKy////////4ODg2NjY4ODg6+vr////////////////6+vre3t7GxsbAwMDAAAAAAAAAAAAKCgotra2////UVFRAAAALy8vtLS0////////////////////////////////////////9fX1bGxsCgoKAAAAAAAAAAAAAAAAHBwciIiIzMzMPT09AAAAMjIytbW1////////////////9vb2yMjIwcHBv7+/7u7u9fX1s7OzQkJCBwcHAAAAAAAAAAAAAAAAERERU1NTfHx8HR0dAAAANjY2t7e3////////////8vLyvLy8VVVVMTExQUFB09PT5eXlV1dXFhYWAgICAAAAAAAAAAAAAAAABgYGS0tLg4ODCAgIAAAAOjo6uLi4////////////tra2Y2NjQEBAAAAAPj4+1dXV5ubmW1tbAAAAAAAAAAAAAAAAAAAAAAAAGRkZTk5OVVVVAwMDEhISRUVFra2t////////////xcXFRUVFCQkJAAAAPT09g4ODl5eXX19fAAAAAAAAAAAAAAAAAAAAAAAAGBgYLCwsFRUVAAAAIyMjk5OT4+Pj////////yMjIcXFxGRkZAAAAAAAAExMTWlpajY2NW1tbAAAAAAAAAAAAAAAAAAAAAAAACQkJCAgIAAAAAAAAMTExxMTE////////////m5ubKCgoAAAAAAAAAAAAAAAAPj4+i4uLaGhoAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAOzs7wcHB/////Pz85ubmfHx8FhYWAAAAAAAAAAAAAAAAGBgYXV1dcHBwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAPz8/w8PD////8PDwhYWFLy8vBAQEAAAAAAAAAAAAAAAAAAAAJCQkTExMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAPj4+w8PD////8PDwgoKCGRkZAAAAAAAAAAAAAAAAAAAAAAAABAQECgoKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAODg4v7+/////7u7uc3NzERERAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAKSkpvb29////6urqXV1dDQ0NAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAExMTk5OT8fHx6+vrTU1NCQkJAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAPDw8v7+/8/PzRkZGBwcHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMzMzvr6++vr6R0dHBgYGAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAExMTb29vsbGxTU1NCwsLAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAKioqdHR0ampqFhYWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADQ0NREREd3d3GxsbAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAwMVlZWFRUVAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=' type='image/x-png' /> <meta charset="utf-8">
 <style type="text/css">
 	@import url('https://fonts.googleapis.com/css?family=Muli:300,400,600,700&display=swap');
 	body{
 		background: #F1F0F0;
 		font-family: 'Muli', sans-serif;
 	}
 	.fa{
 		color: #CCCCCC;
 		text-align: center;
 		padding: 30px;
 		font-size: 46px;
 	}
 	.card{
 		padding: 15px;
 		margin: 10px;
 		 box-shadow: 0 3px 5px 0 rgba(0, 0, 0, 0.01);
    transition: box-shadow 0.3s ease-in-out;
    border:1px solid #ddd;
    cursor: pointer;
    border-radius: 4px;
 	}
 	.card:hover{
 		box-shadow: 0 5px 15px 2px rgba(0, 0, 0, 0.3);
 	}
 	h3{
 		text-align: center;
 		font-size: 22px;
 		color: #839192;
    font-weight: 600;

 	}

  h4{
    padding: 5px;
    text-align: center;
    font-size: 15px;
    line-height: 1.6;
    font-weight: 500;
    padding-top: 5px;
  }
  
 	p{
 		padding: 5px;
 		text-align: center;
 		font-size: 15px;
 		color: #839192;
 		line-height: 1.6;
    font-weight: 500;
    padding-top: 5px;
   
 	}
	.switch {
		position: relative;
		display: inline-block;
		width: 60px;
		height: 34px;
	}

	.switch input { 
		opacity: 0;
		width: 0;
		height: 0;
	}

	.slider {
		position: absolute;
		cursor: pointer;
		top: 0;
		left: 0;
		right: 0;
		bottom: 0;
		background-color: #ccc;
		-webkit-transition: .4s;
		transition: .4s;
	}

	.slider:before {
		position: absolute;
		content: "";
		height: 26px;
		width: 26px;
		left: 4px;
		bottom: 4px;
		background-color: white;
		-webkit-transition: .4s;
		transition: .4s;
	}

	input:checked + .slider {
		background-color: #2196F3;
	}

	input:focus + .slider {
		box-shadow: 0 0 1px #2196F3;
	}

	input:checked + .slider:before {
		-webkit-transform: translateX(26px);
		-ms-transform: translateX(26px);
		transform: translateX(26px);
		}

	/* Rounded sliders */
	.slider.round {
		border-radius: 34px;
	}

	.slider.round:before {
		border-radius: 50%;
	}
	
	/*fade text*/
	@keyframes flickerAnimation {
		0%   { opacity:1; }
		50%  { opacity:0; }
		100% { opacity:1; }
	}
	
	@-o-keyframes flickerAnimation{
		0%   { opacity:1; }
		50%  { opacity:0; }
		100% { opacity:1; }
	}

	@-moz-keyframes flickerAnimation{
		0%   { opacity:1; }
		50%  { opacity:0; }
		100% { opacity:1; }
	}

	@-webkit-keyframes flickerAnimation{
		0%   { opacity:1; }
		50%  { opacity:0; }
		100% { opacity:1; }
	}

	.animate-flicker {
		-webkit-animation: flickerAnimation 1s infinite;
		-moz-animation: flickerAnimation 1s infinite;
		-o-animation: flickerAnimation 1s infinite;
		animation: flickerAnimation 1s infinite;
	}
 </style>
</head>
<body>

<div class="container mt-4" >
  <h1 class="text-center pb-3">Diesel Heater Remote Controller</h1>
  <div class="row">
  	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
	<div class="col-lg-3 col-md-6 col-xs-12 pl-1 pr-1">
  		<div class="card">
  		<i class="fa fa-cog"></i>
  		<h3>Ctrlr Setup</h3>
  		<a onClick="getReq('/heaterReboot');" class="btn btn-secondary">Reboot Ctrlr</a>
		  <br>
		  <a onClick="getReq('/heaterConfigWifi');" class="btn btn-light">Config Wifi</a>
		  <br>
      <a onclick="window.dialog.showModal();" class="btn btn-info">Set Clock</a>
      <br>
		  <a onclick="window.dialogg.showModal(); getPins();" class="btn btn-primary">Config Remote</a>
      <br>
      <a href="/firm" class="btn btn-warning">Firmware</a>
		  </div>
  	</div>
	<dialog id="dialog">
		<h6>Set Time(24hr):</h6>
		<form action="/heaterSetClock" method="get">
	    <p>Hour:
		<input type="number" id="hr" name="hr" min="0" max="23" value="0">
		&nbsp;Minutes:
		<input type="number" id="min" name="min" min="0" max="59" value="0">
		</p>
		<h6>Set Date:</h6>
		<p>Month:
		<input type="number" id="mon" name="mon" min="1" max="12" value="1">
		&nbsp;Day:
		<input type="number" id="day" name="day" min="1" max="31" value="1">
		&nbsp;Year:
		<input type="number" id="yr" name="yr" min="2023" max="2042" value="2023">
		</p>
		
		<input type="submit" value="Save">
		</form>
		<br>
		<form method="dialog">
			<button>Cancel</button>
		</form>
	</dialog>
   <dialog id="dialogg">
    <h6>Set Buttons:</h6>
    <form action="/remoteSetPins" method="get">
      <p>Power ON:
      <input type="number" id="PowerOnPValue" name="pon" value="" maxlength="2" size="2" disabled>
      &nbsp;Power OFF:
      <input type="number" id="PowerOffPValue" name="poff" value="" maxlength="2" size="2" disabled>
      </p>
      <p>LOW:
      <input type="number" id="HzLowPValue" name="plow" value="" maxlength="2" size="2" disabled>
      &nbsp;HIGH:
      <input type="number" id="HzHighPValue" name="phigh" value="" maxlength="2" size="2" disabled>
      </p>
      <input type="submit" value="Save">
    </form>
    <br>
    <form method="dialog">
      <button>Cancel</button>
    </form>
   </dialog>
   <dialog id="dialoggg">
    <h6>Set Timer Off in:</h6>
    <form action="/setTimerOff" method="get" id="timeoffx">
	   <select name="timeoff" id="timeoff" form="timeoffx">
		  <option value="0">Reset</option>
		  <option value="5">5 mins</option>
		  <option value="20" selected>20 mins</option>
		  <option value="40">40 mins</option>
		  <option value="60">1 hour</option>
		  <option value="120">2 hours</option>
	   </select>
      <input type="submit" value="Set">
    </form>
    <br>
    <form method="dialog">
      <button>Cancel</button>
    </form>
   </dialog>
   <dialog id="dialogggg">
		<h6>Set Temperature(°C):</h6>
		<form action="/setTemperature" method="get">
	    <input type="number" id="settemp" name="t" min="4" max="26" value="4">
		<input type="submit" value="Set">
		</form>
    <br>
		<form action="/setTemperature" method="get">
	    <input type="hidden" id="settemp" name="t" value="0">
		<input type="submit" value="Reset">
		</form>
		<br>
		<form method="dialog">
			<button>Cancel</button>
		</form>
	</dialog>
	<dialog id="dialoggggg">
		<h6>Toggle Frost Mode:</h6>
		<form action="/setFrost" method="get" id="frostmode">
	    <label class="switch">
		 <input type="hidden" name="f" value="0"><input type="checkbox" onclick="this.previousSibling.value=1-this.previousSibling.value">
		 <span class="slider round"></span>
		</label>
		<input type="submit" value="Set">
		</form>
		<br>
		<form method="dialog">
			<button>Cancel</button>
		</form>
	</dialog>
	<div class="col-lg-5 col-md-6 col-xs-11 pl-1 pr-1">
  		<div class="card">
  		<i class="fa fa-stack-overflow"></i>
  		<h3>Heater Stats</h3>
  		<h5>Time: <span id="TIMEValue"></span>&nbsp;&nbsp;Temp: <span id="TEMPFValue"></span>&deg;C&nbsp;Bat: <span id="BATValue"></span>V&nbsp;&nbsp;Hum: <span id="HUMValue"></span>%</h5>
		<span id="MOREValue" style="color:red;"></span>
		<select name="history" id="history">
			<option value="history">History</option>
		</select>
		<p>polling every <input type="number" id="intv" value="10" min="10"/> seconds</p>
  	</div>
  	</div>
  	
  	<div class="col-lg-3 col-md-6 col-xs-12 pl-1 pr-1">
  		<div class="card">
  		<i class="fa fa-puzzle-piece"></i>
  		<h3>Heater Control</h3>
		<a onClick="getReq('/heaterOFF');" class="btn btn-danger">HEATER OFF</a>
		<a onClick="getReq('/heaterON');" class="btn btn-success">HEATER ON</a>
		<br>
		<a onClick="getReq('/heaterLOW');" class="btn btn-primary">HEATER LOW</a>
		<a onClick="getReq('/heaterHIGH');" class="btn btn-warning">HEATER HIGH</a>
		<br>
		<a onclick="window.dialogggg.showModal();" class="btn btn-secondary">Set Targ Temperature</a>
		<a onclick="window.dialoggg.showModal();" class="btn btn-info">Set Off in X Minutes</a>
    <br>
    <a onclick="window.dialoggggg.showModal();" class="btn btn-light">Frost Mode</a>
  	</div>
  	</div>

  </div>    
</div>


<hr>
<center>
<div id="chart-temperature" class="container" style="display: inline-block; width: 50%;"></div><div id="chart-hum" class="container" style="display: inline-block; width: 50%;" ></div>

</div>
</center>

<script src="https://code.highcharts.com/highcharts.js"></script>
<script src="http://code.jquery.com/jquery-1.9.1.min.js"></script>

<script>
var chartT = new Highcharts.Chart({
  chart:{ renderTo : 'chart-temperature' },
  title: { text: 'Ambient Temperature' },
  series: [{
    showInLegend: false,
    data: []
  }],
  plotOptions: {
    line: { animation: false,
      dataLabels: { enabled: true }
    },
    series: { color: '#059e8a' }
  },
  //xAxis: { type: 'string'
    //dateTimeLabelFormats: { second: '%b/%D %H:%M' }
  //},
  yAxis: {
    title: { text: 'Temperature (Celsius)' }
    //title: { text: 'Temperature (Fahrenheit)' }
  },
  credits: { enabled: false }
});

var chartH = new Highcharts.Chart({
  chart:{ renderTo : 'chart-hum' },
  title: { text: 'Humidity' },
  series: [{
    showInLegend: false,
    data: []
  }],
  plotOptions: {
    line: { animation: false,
      dataLabels: { enabled: true }
    },
    series: { color: '#079e8a' }
  },
  //xAxis: { type: 'string'
    //dateTimeLabelFormats: { second: '%b/%D %H:%M' }
  //},
  yAxis: {
    //title: { text: 'Temperature (Celsius)' }
    title: { text: 'Humidity (%)' }
  },
  credits: { enabled: false }
});

function getReq(theUrl) {
    var xchttp = new XMLHttpRequest();
    xchttp.open( "GET", theUrl, false ); // false for synchronous request
    xchttp.send(null);
}

function getData() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      var respon = this.responseText.split("|");
      document.getElementById("TEMPFValue").innerHTML = respon[0];
      document.getElementById("TIMEValue").innerHTML = respon[1];
      document.getElementById("BATValue").innerHTML = respon[2];
      document.getElementById("HUMValue").innerHTML = respon[3];
      let isnum = /^\d+$/.test(respon[4]);
      if (isnum) {
       document.getElementById("MOREValue").innerHTML = "<h4 class=\"animate-flicker\">"+respon[4]+"&deg;C target set</h4>";
      }
       else if (respon[4] == " ") {
        document.getElementById("MOREValue").innerHTML = "";
      }
       else {
        document.getElementById("MOREValue").innerHTML = "<h4 class=\"animate-flicker\">"+respon[4]+" target time set</h4>";
       }
      var select = document.getElementById("history");
      var option = document.createElement('option');
      option.text = option.value = respon[1] + " -- " + respon[0] + " -- " + respon[2] + " -- " + respon[3];
      select.add(option, 0);

      var d = new Date();
      var dd = d.toJSON().substring(0,10);
      var x = dd + " " + respon[1];
      var y = parseFloat(respon[0]);
      //console.log(this.responseText);
      if(chartT.series[0].data.length > 40) {
        chartT.series[0].addPoint([x, y], true, true, true);
      } else {
        chartT.series[0].addPoint([x, y], true, false, true);
      }
      var x = dd + " " + respon[1];
      var y = parseInt(respon[3]);
      if(chartH.series[0].data.length > 40) {
        chartH.series[0].addPoint([x, y], true, true, true);
      } else {
        chartH.series[0].addPoint([x, y], true, false, true);
      }
    }
  };
  xhttp.open("GET", "readDATA", true);
  xhttp.send();
}

function getPins() {
 $("#PowerOnPValue").prop("disabled", false);
 $("#PowerOffPValue").prop("disabled", false);
 $("#HzLowPValue").prop("disabled", false);
 $("#HzHighPValue").prop("disabled", false);
 var xhttp = new XMLHttpRequest();
  xhttp.onload = function() {
    if (this.readyState == 4 && this.status == 200) {
      var respon = this.responseText.split("|");
      document.getElementById("PowerOnPValue").value = respon[0];
      document.getElementById("PowerOffPValue").value = respon[1];
      document.getElementById("HzLowPValue").value = respon[2];
      document.getElementById("HzHighPValue").value = respon[3];
    }
  };
  xhttp.open("GET", "readPins", true);
  xhttp.send();
}

 
var interval;
var t;

f1();

function f1() {
 t = document.getElementById("intv").value;
 t = t * 1000;
 clearInterval(interval);
 getData();
 interval = setInterval(f1, t);
}

</script>
<br>
</body>
</html>
)=====";
