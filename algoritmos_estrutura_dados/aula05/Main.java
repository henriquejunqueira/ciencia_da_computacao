package algoritmos_estrutura_dados.aula05;

public class Main {
    
    public static void main(String[] args){
        ListaLigada lista = new ListaLigada();

        lista.adicionarContato(new Contato("Anderson", "123-456-7890", "Rua A"));
        lista.adicionarContato(new Contato("Macedo", "987-654-32-10", "Rua B"));

        System.out.println("\nBuscando contato 'Anderson':");
        
        Contato c = lista.buscarContato("Anderson");
        System.out.println(c != null ? c : "Contato não encontrado!");

        System.out.println("\nRemovendo contato 'Macedo':");
        lista.removerContato("Macedo");
        lista.exibir();
    }

}
