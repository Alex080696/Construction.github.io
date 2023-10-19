* {
    margin: 0;
    padding: 0;
}

body{
    font-family: sans-serif;
    line-height: 1.6;
}

nav{
    background-color: #fad02c;
    height: 80px;
    width: 100%;
    position: fixed;
    top: 0;
    z-index: 999;
    
    
}



.logo{
    color: #4D4848;
    font-size: 33px;
    line-height: 80px;
    padding: 0 100px;
    font-weight: 700;
    text-transform: uppercase;
}

nav ul{
    float: right;
    margin-right: 20px;
    z-index: 999;
}

nav ul li{
    list-style: none;
    display: inline-block;
    line-height: 80px;
    margin: 0 5px;
}

nav ul li a{
    color: #4D4848;
    text-decoration: none;
    font-size: 17px;
    text-transform: uppercase;
    padding: 10px 15px;

    transition:  all 0.3s;
}



nav ul li a:hover{
    color: white;
}


.checkbtn #bars,
.checkbtn #cancle{
    color: #4D4848;
    font-size: 30px;
    float: right;
    margin: 25px;
    cursor: pointer;
    display: none;
}

#check{
    display: none;
}

@media only screen and (max-width:980px){
    
    .logo{
        padding: 40px;
    }
    
    .checkbtn #bars{
        display: block;
    }
    
    nav ul{
        background-color: #fad02c;
        position: fixed;
        text-align: center;
        width: 100%;
        height: 100vh;

        right: -100%;
        margin-right: 0;

        transition: all 0.3s;
    }

    nav ul li{
        display: block;
        margin: 40px 0;
    }

    nav ul li a{
        font-size: 20px;
    }

    #check:checked ~ ul{
        right: 0;
    }

    #check:checked ~ label #bars{
        display: none;
    }

    #check:checked ~ label #cancle{
        display: block;
    }

}

.hero{
    background-image: linear-gradient(rgba(0,0,0,0.4),rgba(0,0,0,0.4)), url(./a.jpg);
    height: calc(100vh - -10px);
    background-size: cover;
    background-position: center;
    background-repeat: no-repeat;
}

.inner_content{
    width: 800px;
    color: white;
    position: absolute;
    top: 50%;
    left: 50%;
    transform: translate(-50%, -50%);
}

.inner_content h1{
    font-size: 60px;
    text-transform: uppercase;
    text-align: left;
    margin-top: -6%;
    letter-spacing: -1px;
    margin-bottom: 20px;
    margin-left: -40px;
}

.inner_content span{
    color: #fad02c;
    
}

.inner_content p{
    font-size: 16px;
    margin-bottom: 50px;
    text-indent: 2px;
}

.button{
    text-align: left;
    margin-left: -40px;
    margin-bottom: -150px;
}

.btn{
    display: inline-block;
    color: white;
    text-decoration: none;
    font-weight: 700;
    font-size: 22px;
    padding: 10px 20px;
    text-transform: uppercase;
    border-radius: 3px;
}

.btn-contact-us{
    background-color: #fad02c;

    transition: all 0.3s;
}

.btn-contact-us:hover{
    background-color: transparent;
    border: 2px solid #fad02c;
}





@media only screen and (max-width:980px){
    .inner_content{
        width: 200px;
        padding: 0 20px;
    }

    .inner_content h1{
        font-size: 30px;
    }
}