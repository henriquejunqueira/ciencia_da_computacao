public class UtilizarTV {
    public static void main(String[] args){
        Televisao t1 = new Televisao();
        Televisao t2 = new Televisao();
        t1.defineMarca("Samsung");
        t1.defineCanal(3);
        t1.local("SALA");
        t1.ligar();
        t1.defineCanal(3);
        t1.aumentarVolume();
        t1.aumentarVolume();

        t2.defineMarca("LG");
        t2.local("COZINHA");
        t2.ligar();
        t2.aumentarVolume();
        t1.aumentarVolume();

        t2.aumentarVolume();
        t2.aumentarVolume();
        t2.aumentarVolume();
        t2.aumentarVolume();
        t2.aumentarVolume();
        t2.aumentarVolume();

        t1.desligar();
        t2.desligar();

    }
}
