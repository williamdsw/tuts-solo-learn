//funções do localStorage

function adicionar()
{
	//verificando se não é nulo ou empty
	if(txtChave.value != "" || txtChave.value != null)
	{
		if(txtValor.value != "" || txtValor.value != null)
		{
			//setItem(key, value) = Adiciona um valor numa determinada chave
			localStorage.setItem(txtChave.value, txtValor.value);
			alert("Item adicionado!");
			txtChave.value = txtValor.value = "";
		}
		else
			alert("Informe o valor da chave!");
	}
	else
		alert("Informe a chave e o valor!");
}
			
function ler()
{
	//verificando se não é nulo ou empty
	if(txtChave.value != "" || txtChave.value != null)
	{
		//getItem(key) = Pega um valor de uma determinada chave
		var obj = localStorage.getItem(txtChave.value);
		
		if(obj != null)
			txtValor.value = obj;
		else
			alert("Nenhum item encontrado ou chave inválida");
	}
	else
		alert("Informe a chave!");
}
			
function remover()
{
	//verificando se não é nulo ou empty
	if(txtChave.value != null)
	{
		var obj = localStorage.getItem(txtChave.value);
		
		if(obj != null)
		{
			//removeItem(key) = Remove um valor de uma determinada chave
			localStorage.removeItem(txtChave.value);
			alert("Item " + txtChave.value + " foi removido!");
		}
		else
			alert("Item inexistente");
	}
	else
		alert("Informe a chave!");
}
			
function limpar()
{
	//clear() = limpa todos valores de todas chaves
	localStorage.clear();
	alert("Todos itens foram removidos");
	txtChave.value = txtValor.value = "";
}