#include "gtest/gtest.h"
#include "../src/model/Carta.h"
#include "../src/model/Mazo.h"
#include "../src/model/Mano.h"
#include "../src/model/Jugador.h"
#include "../src/model/Crupier.h"
#include "../src/model/Juego.h"

// --> CARTA 
TEST(CartaTest, ValoresCorrectos) {
    Carta c(11, "A", "Corazones" );
    EXPECT_EQ(c.obtenerPalo(), "Corazones");
    EXPECT_EQ(c.obtenerNombre(), "A");
    EXPECT_EQ(c.obtenerValor(), 11);
}

// --> MAZO
TEST(MazoTest, CantidadInicial) {
    Mazo mazo;
    EXPECT_EQ(mazo.cartasRestantes(), 52);
}

TEST(MazoTest, SacarCartaReduceCantidad) {
    Mazo mazo;
    int antes = mazo.cartasRestantes();
    Carta c = mazo.repartirCarta();
    EXPECT_EQ(mazo.cartasRestantes(), antes - 1);
}

// --> MANO 
TEST(ManoTest, AgregarCartaYCalcularValor) {
    Mano mano;
    Carta c1(10, "A", "Corazones");
    Carta c2(11, "A", "Picas");

    mano.agregarCarta(c1);
    mano.agregarCarta(c2);

    EXPECT_EQ(mano.valorTotal(), 21);
    EXPECT_EQ(mano.size(), 2);
}

// --> JUGADOR 
TEST(JugadorTest, Inicializacion) {
    Jugador j("Juan", 100);
    EXPECT_EQ(j.obtenerNombre(), "Juan");
    EXPECT_EQ(j.obtenerApuesta(), 100);
}

TEST(JugadorTest, RecibirCarta) {
    Jugador j("Ana", 50);
    Carta c(10, "K", "Diamantes");
    j.agregarCarta(c);

    EXPECT_EQ(j.getMano().size(), 1);
    EXPECT_EQ(j.getMano().valorTotal(), 10);
}

// --> CRUPIER 
TEST(CrupierTest, RecibirCarta) {
    Crupier c;
    Carta carta(7, "7", "Treboles");
    c.agregarCarta(carta);

    EXPECT_EQ(c.getMano().size(), 1);
    EXPECT_EQ(c.getMano().valorTotal(), 7);
}

// --> JUEGO 
TEST(JuegoTest, IniciarJuego) {
    Juego juego;
    juego.SetJugador("Luis", 50);
    juego.limpiarManos();
    juego.BarajarMazo();

    juego.agregarCartaJugador();
    juego.agregarCartaCrupier();

    EXPECT_EQ(juego.CantidadCartasJugador(), 1);
    EXPECT_EQ(juego.CantidadCartasCrupier(), 1);
}

