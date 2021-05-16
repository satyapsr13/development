function login() {
    var us = document.getElementById('user').value;
    var ps = document.getElementById('pass').value;
    if (us == 's' && ps == 's') {
        location.assign("http://127.0.0.1:5500/jstutorial/app1/tut2.html");
    }
    else {
        window.alert('fool');
    }
}