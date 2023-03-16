document.getElementById("boton").onmouseover = function arriba() {
    var btn = document.getElementById("boton");

    if (btn.className === "boton1") {
        btn.className == "boton2"
    } ;

    document.getElementById("boton").onmouseleave = function leave() {
        if (btn.className === "boton2") {
            btn.className == "boton1"
        } ;
    } ;


} ;