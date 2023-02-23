const char UP_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="en">
<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js'></script>
<h5>Move the controller near your router to ensure solid WiFi connection</h5>
<h5 style="color: red;">DO NOT POWER OFF THE DEVICE</h5>
<h5>If the update is SUCCESSFULL, you will be redirected to the controller main webpage</h5>
<form method='POST' action='#' enctype='multipart/form-data' id='upload_form'>
   <input type='file' name='update'>
   <input type='submit' value='Update'>
</form>
<div id='prg'>progress: 0%</div>
<script>
$('form').submit(function(e){
  e.preventDefault();
  var form = $('#upload_form')[0];
  var data = new FormData(form);
   $.ajax({
    url: '/update',
    type: 'POST',
    data: data,
    contentType: false,
    processData:false,
    xhr: function() {
     var xhr = new window.XMLHttpRequest();
     xhr.upload.addEventListener('progress', function(evt) {
     if (evt.lengthComputable) {
      var per = evt.loaded / evt.total;
     $('#prg').html('progress: ' + Math.round(per*100) + '%');
  }
  }, false);
  return xhr;
  },
  success:function(d, s) {
  console.log('success!')
  window.setTimeout(function(){
   // Move to a new location or you can do something else
   window.location.href = "/";
  }, 10000);
 },
 error: function (a, b, c) {
 }
 });
 });
 </script>
</html>
)=====";
