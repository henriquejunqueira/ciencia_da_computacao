public class Principal {
    
    public static void main(String[] args) {
        Pilha p = new Pilha();

        p.push(1);
        p.push(2);
        p.push(3);
        p.push(4);
        p.push(5);

        while(!p.isEmpty()){
            int elemento = p.pop();
            System.out.println("Elemento retirado: " + elemento);
        }

        int e = p.pop();
    }

}
