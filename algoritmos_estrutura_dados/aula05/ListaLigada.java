package algoritmos_estrutura_dados.aula05;

public class ListaLigada {
    private No primeiro;

    public ListaLigada(){
        this.primeiro = null;
    }

    public void adicionarContato(Contato contato){
        No novoNo = new No(contato);

        if(primeiro == null){
            primeiro = novoNo;
        }else{
            No atual = primeiro;
            while (atual.proximo != null) {
                atual = atual.proximo;
            }
            atual.proximo = novoNo;
        }
    }

    public Contato buscarContato(String nome){
        No atual = primeiro;

        while(atual != null){
            if(atual.contato.getNome().equalsIgnoreCase(nome)){
                return atual.contato;
            }

            atual = atual.proximo;
        }

        return null;
    }

    public boolean removerContato(String nome){
        if(primeiro == null) return false;

        if(primeiro.contato.getNome().equalsIgnoreCase(nome)){
            primeiro = primeiro.proximo;
            return true;
        }

        No atual = primeiro;
        while(atual.proximo != null){
            if(atual.proximo.contato.getNome().equalsIgnoreCase(nome)){
                atual.proximo = atual.proximo.proximo;
                return true;
            }
            atual = atual.proximo;
        }

        return false;
    }

    public void exibir(){
        No atual = primeiro;
        while(atual != null){
            System.out.println(atual.contato);
            atual = atual.proximo;
        }
    }
}
