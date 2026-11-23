
import java.util.ArrayList;

public class CatalogoMusical {
    private ArrayList<Musica> musicas;

    public CatalogoMusical() {
        musicas = new ArrayList<>();
    }

    public void adicionarMusica(Musica musica) {
        musicas.add(musica);
    }

    public ArrayList<Musica> getMusicas() {
        return new ArrayList<>(musicas);
    }
}
  