//funções do geolocation

//Pega elemento pelo ID
var elemento = document.getElementById("demo");

function pegarLocalizacao()
{
	//verifica se o navegador suporta Geolocalização
	if(navigator.geolocation)
	{
		navigator.geolocation.getCurrentPosition(mostrarPosicao, mostrarErro);
	}
	else
	{
		elemento.innerHTML = "O seu navegador não suporta Geolocalização";
	}
}

function mostrarPosicao(posicao)
{
	//exibe num label
	elemento.innerHTML = "Latitude: " + posicao.coords.latitude + "<br>" + 
						 "Longitude:" + posicao.coords.longitude;
				
	mostrarImagemEstatica(posicao);
	mostrarImagemDinamica(posicao);
}

function mostrarImagemEstatica(pos)
{
	//pega coordenadas de latitude e longitude
	var coordenadas = pos.coords.latitude + "," +  pos.coords.longitude;
	
	//pega endereço do google maps com as coordenadas
	var imgUrl = "http://maps.googleapis.com/maps/api/staticmap?center=" + coordenadas + "&zoom=14&size=400x300&sensor=false";
	
	//seta nova imagem estática <img> com a url
	document.getElementById("mapaEstatico").innerHTML = "<img src = '" + imgUrl + "'>";
}

function mostrarImagemDinamica(pos)
{
	//passando coordenadas
	lat = pos.coords.latitude;
	lon = pos.coords.longitude;
	
	//criando nova coordenada
	latlon = new google.maps.LatLng(lat, lon);
	
	//definindo tamanho da "imagem"
	mapholder = document.getElementById("mapaDinamico");
	mapholder.style.height = "250px";
	mapholder.style.width = "500px";
	
	//definindo propriedades do mapa
	var opcoes = 
	{
		center: latlon, zoom:14,
		mapTypeId: google.maps.MapTypeId.ROADMAP,
		mapTypeControl: false,
		navigationControlOptions: {style: google.maps.NavigationControlStyle.SMALL}
	};
	
	//criando novo mapa
	var mapa = new google.maps.Map(document.getElementById("mapaDinamico"), opcoes);
	
	//criando novo marcador
	var marker = new google.maps.Marker({position: latlon, map: mapa, title: "Você está aqui!"});	
}

function mostrarErro(erro)
{
	//verifica qual tipo de erro da API, e exibe uma mensagem no HTML
	switch(erro.code)
	{
		case erro.PERMISSION_DENIED:
			elemento.innerHTML = "Usuário rejeitou a solicitação de Geolocalização";
			break;
			
		case erro.POSITION_UNAVAILABLE:
			elemento.innerHTML = "Localização indisponível";
			break;
			
		case erro.TIMEOUT:
			elemento.innerHTML = "A requisição expirou";
			break;
			
		case erro.UNKNOWN_ERROR:
			elemento.innerHTML = "Algum erro desconhecido aconteceu";
			break;
	}
}