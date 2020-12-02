//Funções de drag & drop

function allowDrop(ev)
{
	//prevê o tratamento padrão do elemento
	ev.preventDefault();
}

function drag(ev)
{
	//define o tipo do dado e o valor do objeto arrastado
	ev.dataTransfer.setData("text", ev.target.id);
}

function drop(ev)
{
	ev.preventDefault();
	
	//vai pegar o tipo de dado do objeto arrastado
	var data = ev.dataTransfer.getData("text");
	
	//vai pegar pelo ID o objeto arrastado
	ev.target.appendChild(document.getElementById(data));
}