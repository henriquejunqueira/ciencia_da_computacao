public class Televisao{
    String marca;
    boolean ligado;
    int volume;
    int canal;
    String local;

    public Televisao(){
        ligado = false;
    }

    public void ligar(){
        ligado = true;
        System.out.println("TV " + marca + " LIGADA - Local: " + local);
    }

    public void desligar(){
        System.out.println("TV " + marca + " DESLIGADA - Local: " + local);
        ligado = false;
    }

    public void defineMarca(String nomeMarca){
        marca = nomeMarca;
        System.out.println("Marca definida: " + marca);
    }

    public void local(String plocal){
        local = plocal;
        System.out.println("Local definido: " + local);
    }

    public void aumentarVolume(){
        if(ligado){
            volume++;
            System.out.println("Marca: " + marca + ": volume definido para: " + volume);
        }else{
            System.out.println("Ligue a TV " + marca);
        }
    }

    public void defineCanal(int pcanal){
        if(ligado){
            canal = pcanal;
            System.out.println("Marca: " + marca + ": canal definido para: " + canal);
        }else{
            System.out.println("Ligue a TV " + marca);
        }
    }
}