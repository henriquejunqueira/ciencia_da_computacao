package algoritmos_estrutura_dados.aula05;

public class Contato{
    private String nome;
    private String telefone;
    private String endereco;

    public Contato(String nome, String telefone, String endereco){
        this.nome = nome;
        this.telefone = telefone;
        this.endereco = endereco;
    }

    public String getNome(){
        return nome;
    }

    public String getTelefone(){
        return telefone;
    }

    public String getEndereco(){
        return endereco;
    }

    @Override
    public String toString(){
        return "Nome: " + nome + ", Telefone: " + telefone + ", Endereço: " + endereco;
    }
}