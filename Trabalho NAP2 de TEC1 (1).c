#include <stdio.h>
#include <locale.h>
//Prototipo das fun��es.
//fun��es do inicio.
void inicio();
void continuar_morto();
void acordar_novo_mundo();
//fun��es caminho da espada.
void entrar_sozinho();
void dungeon();
void luta_boss();
void sem_estrategia();
void estrategia_espada();
void vender_item();
void usar_item();
void terminar_dungeon();
//fun��es caminho do arco.
void escolha_caca();
void nao_participar();
void cacada_selva();
void juntar_batalha();
void ajudar();
void usar_habilidade();
void flecha_normal();
void criar_escola();
void continuar_cacada();
//fun��es caminho do cajado.
void mago();
//fun��es de mago celeste.
void caminho_celeste();
//fun��es da escuridão.
void magia_escuridao();
void caminho_escuridao();
void nao_ler_escuridao();
void ler_escuridao();
//fun��es magia armamento.
void magia_armamento();
void caminho_armamento();
void desistir_arma();
void persistir_arma();
void caminho_armamento2();
void cacar_monstros2();
void torneio();
void desistir_torneio();
void continuar_torneio();


//FUN��O PRINCIPAL DO CODIGO.
int main(){
    setlocale(LC_ALL, "Portuguese");
    inicio();
}


//fun��o inicio
void inicio(){
    int opcao;
    int cont = 0;
while(cont == 0){

    printf("Ao acordar voc� se depara com uma pessoa, ela explica rapidamente a situa��o na qual voc� se encontra, dizendo:\n'Voc� morreu e tem a op��o de reencarnar num mundo de fantasia, onde voc� podera� ser um aventureiro e entre outras coisas ou pode apenas continuar dormindo no vazio''.\n");
    printf("1-Reencarnar\n");
    printf("2-Continuar dormindo\n");
    scanf("%d",&opcao);
    if (opcao == 1)
    {
    acordar_novo_mundo();
        cont = 1;
    }
    else if(opcao == 2){
        continuar_morto();
	cont = 1;
    }else{
	printf("Op��o n�o disponivel, Por favor escolhar uma das op��es disponiveis!\n");
	}
}
}
//fun��o caso deseje continuar morto.
void continuar_morto(){
    printf("voc� permanece dormindo o vazio at� o fim dos tempos.\n");
}
//fun��o caso deseje reencarnar no novo mundo
void acordar_novo_mundo()
{
    int opcao;
    int cont = 0;
    system("cls");
    while(cont == 0){
    printf("Ao acordar no seu novo mundo, voc� procura por informa��es de como iniciar sua vida de aventureiro e quais caminhos voc� podera seguir.\n");
    printf("Depois de pedir informa��es, voc� chega na guilda dos aventureiros onde a recepcionista explica um pouco da vida de um aventureiro, ca�adores ou especialistas em magia por�m � comum que grande parte deles se aventuram nas dungeons do Mundo de Orario, ela oferece 3 tipos de armas para auxiliar no come�o da sua aventura.\n");
    printf("1 - espada\n");
    printf("2 - arco\n");
    printf("3 - cajado\n");
    scanf("%d",&opcao);
    
    if (opcao == 1){
        printf("De posse da espada sua aventura come�a, recolhendo miss�es e acumulando dinheiro para que voc� possa melhorar seus equipamentos e aprender novas habilidades, numa das miss�es voc� precisa explorar uma dungeon por�m � recomendado que voc� fa�a isso em grupo devido a quantidade de monstros no local.\n");
        int escolha_dungeon;
        printf("1-Tentar a sorte e entrar sozinho\n");
        printf("2-Montar uma expedi��o\n");
        scanf("%d",&escolha_dungeon);

        if(escolha_dungeon == 1){
            entrar_sozinho();
        }
        else if (escolha_dungeon == 2){
            dungeon();
        }
    cont =1;
	}
    else if (opcao == 2){
        escolha_caca();
        cont = 1;
    }
    else if (opcao == 3){
        mago();
        cont = 1;
    }else{
    	printf("Op��o n�o disponivel por favor escolha uma op��o ofertada\n");
	}
}
}
//fun��o para caso escolha entrar solo na dg.
void entrar_sozinho(){
	system("cls");
    printf("Ao adentrar sozinho dentro da dungeon, devido a quantidade de monstro seu personagem acaba sendo encurralado, dessa forma sendo morto ao n�o conseguir lidar com a grande quantidade de monstros dentro da caverna.\n");
    printf("Voc� morreu novamente \n");
}
//fun��o que continua a historia.
void dungeon(){
    int drop_item;
    int cont = 0;
    system("cls");
    do{
    printf("Faz-se um an�ncio na guilda de aventureiros para que a expedi��o seja iniciada o quanto antes. Logo de cara um grupo que estava com interesse de fazer a mesma expedi��o aparece para se juntar com voc�.\n");
    printf("reunindo-se na entrada da caverna voc� rapidamente checa se todos est�o com os equipamentos certos e com po��es para caso seja necess�rios, uma vez que ao morrer nesse mundo voc� morre de fato e pela sua experi�ncia ao reencarnar de um mundo onde esses tipos de jogos�com dungeons e monstros � normal, voc� se mostra confiante, por�m antes de entrar voc�s acertam como ser� caso encontrem um equipamento ou itens raros.\n");
    printf("1 -Voc� so quer terminar a dungeon\n");
    printf("2 -Quem der o last hit fica com o item.\n");
    scanf("%d",&drop_item);
	
    if (drop_item == 1){
        terminar_dungeon();
    cont = 1;
	}
    else if (drop_item == 2){
        
        luta_boss();
        cont = 1;
    }else{
    	printf("op��o n�o encontrada, escolha uma op��o disponivel\n");
	}
}while(cont == 0);
}
//fun��o luta_boss(espada)
void luta_boss(){
    int escolha_estrategia;
    system("cls");
    printf("Dentro da dungeons sua equipe vai limpando os monstros com facilidade devido a grande quantidade de dano que seu grupo possui, avan�ando de modo fren�tico. Chegando numa sala onde um Minotauro aguarda, ele possui duas espadas e 3 metros de alrura.\n");
    printf("1-voc� decide repassar uma estrat�gia para o time e avan�ar em grupo.\n");
    printf("2-	voc� rapidamente avan�a sozinho para tentar matar e ficar com o item do boss.\n");
    scanf("%d",&escolha_estrategia);

    if (escolha_estrategia == 1){
        estrategia_espada();
    } 
    else if (escolha_estrategia == 2){
        sem_estrategia();
    }
    
}
//fun��o decidiu ir sozinho(espada)
void sem_estrategia(){
    printf("voc� avan�a sozinho e toma uma lapada seca e morre.\n");
    printf("****FIM*****");
}
//fun��o estrategia(espada)
void estrategia_espada(){
    int decisao_item;
    system("cls");
    printf("Ao observar que o boss e grande logo percebe-se que seus movimentos podem ser lentos, ent�o decide que ir�o cerc�-lo e deixar que os magos iniciem o ataque para que distraia o chefe, ap�s isso voc�s iram avan�ar desviando dos ataques e contra-atacando sempre que uma brecha aparecer.\n");
    printf("voc� consegue desferir um golpe na cabe�a do boss, fazendo com quem ele recue rapidamente, nesse momento voc� grita para sua equipe continuar atacando visto que ele est� mais vulner�vel, ap�s um tempo atacando, voc� derrota o boss com um ataque elemental na sua espada, finalizando assim o boss. Com isso um equipamento raro e dropado e voc� decide o que far� com ele.\n");
    printf("1 - vender na cidade para aumentar sua riqueza\n");
    printf("2- utilizar o item\n");
    scanf("%d",&decisao_item);

    if (decisao_item == 1){
        vender_item();
    }
    else if (decisao_item == 2){
        usar_item();
    }

}
// fun��o caso venda o item
void vender_item(){
	system("cls");
    printf("Ao chegar na cidade voc�, anuncia o item no market e devido a sua raridade v�rias guildas de aventureiros procuram para comprar e voc� consegue vender por um valor bem alto, fazendo que seus dias naquele mundo tornem-se mais tranquilos.\n");
    printf("***FIM****");
}
//fun��o usar o item
void usar_item(){
    printf("Ao utilizar o equipamento, voc� sente um poder diferente fluindo atrav�s de voc� e percebe que as suas aventuras naquele mundo estavam apenas come�ando e daquele momento em diante, voc� iria atras de concluir todas as dungeons ali existentes no Mundo de Orario\n");
    printf("***FIM****");
}
//fun��o caso escolha so terminar a dungeon
void terminar_dungeon() {
    printf("Dentro da dungeon, sua equipe vai limpando os monstros com facilidade devido � grande quantidade de dano que seu grupo possui, avan�ando freneticamente. Chegando em uma sala onde um Minotauro aguarda, ele possui duas espadas e mede cerca de 3 metros.\n");
    printf("1 - voc� decide repassar uma estrat�gia para o time e avan�ar em grupo.\n");
    printf("2 - voc� rapidamente avan�a sozinho para tentar matar e ficar com o item do boss.\n");

    int escolha_estrategia;
    scanf("%d", &escolha_estrategia);

    if (escolha_estrategia == 1) {
        printf("Ao observar que o boss � grande, logo percebe-se que seus movimentos podem ser lentos. voc� decide que ir�o cerc�-lo e deixar que os magos iniciem o ataque para distrair o chefe. Após isso, voc�s ir�o avan�ar desviando dos ataques e contra-atacando sempre que uma brecha aparecer.\n");
        printf("voc� consegue desferir um golpe na cabe�a do boss, fazendo com que ele recue rapidamente. Nesse momento, voc� grita para sua equipe continuar atacando, visto que ele est� mais vulner�vel. Após um tempo atacando, voc� derrota o boss com um ataque elemental na sua espada, finalizando assim o boss.\n ");
        printf("Retornando � cidade, voc� decide viver uma vida tranquila depois de toda a experi�ncia adquirida na dungeon e percebendo que precisa conhecer e treinar mais para que não sofra no futuro.\n");
        
    } else if (escolha_estrategia == 2) {
        sem_estrategia();
    }
}//



//Fun��es da historia de caçador.

//fun��o para escolha do destino do caçador.
void escolha_caca(){
    int escolha_cacada;
    system("cls");
    printf("Ao escolher seu arco, voc� recebe um guia de ca�a e das esp�cies que habitam as regi�es do mundo de orario e seus n�veis de raridade, por�m para que voc� cace novas esp�cies precisa aprender t�cnicas melhores ent�o decide come�ar com criaturas mais f�ceis.\n");
    printf("Ap�s passar umas semanas surge uma possibilidade de ca�ar uma criatura gigante ao qual seu couro e capaz de produzir armaduras e vestimentas do mais alto n�vel, sendo essa criatura o sonho de qualquer ca�ador que existe nas regi�es de Orario.\n");
    printf("1-Participar da ca�ada.\n");
    printf("2-N�o participar");
    scanf("%d",&escolha_cacada);

    if(escolha_cacada == 1){
        cacada_selva();
    }
    else if (escolha_cacada == 2){
        nao_participar();
        }
}
// n�o participar da ca�ada no momento.
void nao_participar(){
    int escolha;
    printf("voc� decide n�o participar devido aos seus n�veis estarem baixos demais para uma ca�ada t�o dif�cil, continua explorando as regi�es e aumentando suas habilidades, com os achados de sua ca�ada voc� pode vender no market ou criar equipamentos para aprimorar os seus pr�prios.\n");
    printf("1-	Vender os itens\n");
    printf("2-	Aprimorar os seus equipamentos\n");
    scanf("%d",&escolha);

    if (escolha == 1){
        printf("voc� decide vender seus itens e acumular uma riqueza para que possa ter uma vida tranquila na cidade e construir a fazendo que tantos sonhou.\n");
        printf("\n");
        printf("***FIM***");
    }
    else if(escolha == 2){
        printf("voc� aprimora seus equipamentos e decide retornar para verificar se a proposta das ca�adas ainda est� de p�.");
        cacada_selva();
    }
}
//ca�ada em andamento.
void cacada_selva(){
    int escolha;
    system("cls");
    printf("Indo atr�s do grupo, voc� usa suas habilidades de rastreamento para que voc� possa achar o caminho at� a zona que monstro se encontra, pois voc� acabou se atrasando e o grupo partiu sem voc�.\n");
    printf("Ao chegar no local, se depara com o time enfrentando uma besta gigante de presas e garras extremamente afiadas, ao dar uma olhada ao redor percebe que tem algumas pessoas abatidas e fica a d�vida se ajuda os ca�dos ou parte para a batalha na esperan�a de derrotar a besta e ficar com o couro.\n");
    printf("1-	Ajudar os ca�dos\n");
    printf("2-	Se juntar a linha de frente.\n");
    scanf("%d",&escolha);

    if(escolha == 1){
        ajudar();

    }
    else if(escolha == 2){
        juntar_batalha();
    }
}
//fun��o se juntar a linha de frente.
void juntar_batalha(){
    int skill;
    printf("voc� se junta a linha de frente, por�m devido ao seu tamanho ela abate as pessoas ao seu lado, dificultando muito para que voc�s consigam abater...no entanto um dos magos acaba utilizando uma habilidade de vento ao qual a besta e fraca. E nesse momento os que sobraram de p� partem para o ataque, e voc� pensa se era a hora de mostrar sua habilidade ou apenas continuar disparando flechas normais no animal.\n");
    printf("1 - usar a habilidade elemental cutlass wind\n");
    printf("2 - usar flechas normais\n");
    scanf("%d",&skill);

    if (skill == 1){
        usar_habilidade();

    }
    else if (skill == 2){
        flecha_normal();
    }
}
//fun��o caso decida ajudar os caidos
void ajudar(){
    int skill;
    printf("Ap�s ajudar os ca�dos voc� se junta a batalha disparando flechas encantadas que aprendeu durantes suas ca�adas e acabam penetrando a pele da besta deixando ela um pouco mais vulner�vel aos ataques do grupo.\n");
    printf("Por�m devido ao seu tamanho ela continua abatendo as pessoas ao seu lado, dificultando muito para que voc�s consigam abater...no entanto um dos magos acaba utilizando uma habilidade de vento ao qual a besta e fraca. E nesse momento os que sobraram de p� partem para o ataque, e voc� pensa se era a hora de mostrar sua habilidade ou apenas continuar disparando flechas normais no animal.\n");
    printf("1 - usar a habilidade elemental cutlass wind\n");
    printf("2 - usar flechas normais\n");
    scanf("%d",&skill);

    if (skill == 1){
        usar_habilidade();

    }
    else if (skill == 2){
        flecha_normal();
    }

}
//fun��o habilidade elemental
void usar_habilidade(){
    int escolha_final;
    printf("utilizando a habilidade Cutlass Wind, cria um tornado gigante ao redor do monstro com ventos cortantes que rasgam o couro da besta finalizando ela. Depois de algumas horas ap�s a batalha o grupo agradece sua ajuda e que sem sua ajuda as coisas poderiam ser muito dif�ceis e d�o a parte do couro devido a sua colabora��o.\n");
    printf("1-	oferecer no market\n");
    printf("2-	Craftar e guardar para voc� mesmo.\n");
    scanf("%d",&escolha_final);

    if (escolha_final == 1){
        criar_escola();
    }
    else if (escolha_final == 2){
        continuar_cacada();
    }
}
//final alternativo flecha normais
void flecha_normal(){
    printf("Usa flechas normais acabam n�o fazendo efeito na besta, fazendo que com que ela foque em voc�, deferindo um golpe muito forte na sua cabe�a acabando com sua vida ali mesmo.\n");
    printf("\n");
    printf("****FIM****");
}
//final alternativo, centro de treinamento.
void criar_escola(){
    printf("ao vender o couro no market, voc� consegue muito dinheiro, investindo assim num campo de treinamento para aqueles que desejam aprender habilidades de ca�a e se torna um grande ca�ador no mundo de orario.\n")/
    printf("\n");
    printf("****FIM****");

}
//final canonico, continuar ca�ando
void continuar_cacada(){
    printf("Ao usar o couro para beneficio pr�prio de seus equipamentos, voc� se torna cada vez mais forte e realizando muitas ca�adas e aumentando ainda mais sua reputa��o no mundo, uma vez que o numero de monstros raros abatidos por voc� segue aumentando...tornando de voc� um dos ca�adores mais famosos do mundo\n");
    printf("\n");
    printf("****FIM****");

}
//fun��o caso decida ir para a linha de frente.



//fun��es do mago.
void mago(){
    int escolha;
    printf("Ao receber seu cajado, uma pessoa se aproxima e explica um pouco da vida dos magos, dentro do mundo de Orario, onde alguns segue o rumo da pesquisa estudando magias e aperfei�oando suas t�cnicas \n");
    printf("voc� escolhe ent�o ser um pesquisador da magia, indo at� a biblioteca na parte de runas antigas, voc� v� de relance um livro sobre uma magia chamada sobre magia de corpos celestes.\n");
    printf("1-	Magia da escurid�o.\n");
    printf("2-	Magia armamento.\n");
    scanf("%d",&escolha);

    if (escolha == 1){
        magia_escuridao();

    }
    else if (escolha == 2){
        magia_armamento();
    }
}
//trilha celeste
void caminho_celeste(){
    int destino;
    system("cls");
    printf("Devido ao fluxo grande de magia no local, algumas magias mais poderosas s�o f�ceis de executar e voc� decide come�ar pela Sema, aquela magia que lhe chamou mais aten��o no livro...sendo assim os selos s�o feitos.\n");
    printf("curvando e apontando as m�os para baixo, com todos os dedos fechados, exceto o dedo indicador e m�dio. voc� move lentamente a m�o direita at� que ela aponte para cima, fazendo com que as nuvens acima andem em c�rculos, criando o que parece ser um ciclone. A partir do centro da forma��o, uma esfera brilhante come�a a se formar, e voc� observa o que aparenta ser um meteorito gigante vindo acima de voc�, rapidamente no desespero voc� procura direcionar o meteoro para que ele caia numa zona ao qual voc� n�o seja afetado pela colis�o.\n");
    printf("ap�s alguns segundos, voc� sente o impacto e corre para ver e anotar os resultados ap�s o teste da magia e percebe o tamanho do estrago que fez dizimando boa parte da vegeta��o ao redor das ruinas.\n");
    printf("Ao retornar para a biblioteca, voc� comenta com os estudiosos e conta sobre sua experi�ncia com a magia mais forte de corpos celestes e a dificuldade em realizar, por�m por ser tratar de uma magia de alto n�vel, s� foi poss�vel ser feita devido ao fluxo gigante que as ruinas proporcionaram para voc�, ent�o voc� decide o que fazer ap�s toda a pesquisa.\n");
    printf("1-	Refazer o livro com as devidas anota��es e sua experi�ncia com a magia.\n");
    printf("2-	Usar essa magia para vencer torneios uma vez que ela n�o � de conhecimento do público.\n");
    scanf("%d",&destino);

    if (destino == 1){
        printf("voc� reescreve o livro com todas as anota��es e faz a publica��o para que as pessoas estejam cientes do n�vel de perigo ao executar certas magias e o qu�o forte elas podem ser se n�o forem usadas com cuidado.\n");
        printf("\n");
        printf("**FIM**");
    }
    else if(destino == 2){
        printf("voc� adentra um torneio de combate e come�a a vencer um ap�s o outro usando as magias de grand chariot, Altairis...conseguindo dinheiro e fama nas arenas das cidades de Orario como um dos melhores magos de corpos celestes que existe.\n");
        printf("\n");
        printf("**FIM**");
    }

}
//trilha escuridao
void magia_escuridao(){
    int magia;
    printf("S�o poucos os conhecimentos das magias negras, sendo elas comumente utilizadas para controle de objetos, bloquear ataques e algumas vezes podendo ser ofensivas...no entanto voc� descobre algumas ruinas abandonadas onde o fluxo de magia e grande e decidir ir para testar algumas magias aos quais voc� tem lido nesses últimos dias.\n");
    printf("testar quais magias?\n");
    printf("1-Magia da escurid�o\n");
    printf("2-magia dos corpos celestes.\n");
    scanf("%d",&magia);

    if (magia == 1){
        caminho_escuridao();
    }
    else if(magia == 2){
        caminho_celeste();
    }

}

void caminho_escuridao(){
int destino_escuridao;
    printf("Ao chegar nas ruinas voc� come�a a folhear o livro sobre magia da escurid�o e se depara com um selo estranho e devido a sua experi�ncia com alguns tipos de selo, decide tentar desfazer o mesmo...ap�s algumas tentativas voc� consegue e uma escrita antiga aparece.\n");
    printf("1-	Ler a escrita\n");
    printf("2-	N�o ler vai que � uma maldi��o n�...\n");
    scanf("%d",&destino_escuridao);

    if (destino_escuridao == 1){
        ler_escuridao();
    }
    else if(destino_escuridao ==  2){
        nao_ler_escuridao();
    }

}

void nao_ler_escuridao(){
    printf("voc� decide n�o ler e somente praticar magias b�sicas como controle de sombras e algumas defensivas para que voc� aprimore suas habilidades e possa auxiliar os aventureiros em outras aventuras e masmorras.\n");
    printf("\n");
    printf("**FIM**");
}

void ler_escuridao(){
    printf("ao ler voc� sente uma enorme press�o e uma pessoa aparece diante de voc� e fala que voc� libertou uma magia a muito tempo selada e que como castigo voc� receberia uma maldi��o chamada anksheram e com isso a pessoa misteriosa desaparece e voc� n�o sente nada de diferente.\n");
    printf("ao ir embora voc� come�a a nota que no caminho de volta para casa a vegeta��o ao seu lado e os animais come�am a cair mortos ao seu redor e preocupado com o que a pessoa misteriosa disse, voc� abre o livro rapidamente e procura pela palavra mencionada.\n");
    printf("encontrando quase no final sobre e ela explica que anksheram e uma maldi��o ao qual toda vida ao redor daquele que est� amaldi�oado e subtra�da e n�o existe uma forma de quebra a maldi��o e s� resta o usu�rio conviver eternamente com aquilo.\n");
    printf("Com isso ele obrigado a isolar num lugar longe de toda civiliza��o para que n�o afete as pessoas e viver eternamente num exilio por conta da sua curiosidade em rela��o a magia negra.\n");
    printf("\n");
    printf("**FIM**");
}

//trilha armamento

void magia_armamento(){
    int magia;
    printf("voc� descobre uma magia ao reparar em um dos livros a muito tempo esquecida, capaz de equipar e desequipar armaduras e armas adapt�veis aos mais diversos elementos e situa��es vivenciadas nos tempos da guerra entre ra�as que aconteceram nos prim�rdios do mundo.\n");
    printf("fica mais interessado ao passar do tempo e pensando nas possibilidades caso consiga executar e dominar com perfei��o essa magia antiga sendo poss�vel vencer guerras e torneios com facilidade. Tendo isso em mente voc� decide ir testar nas ruinas onde o fluxo de magia e grande e tentar dominar essa magia.\n");
    printf("testar quais magias?\n");
    printf("1-Magia de armamento\n");
    printf("2-magia dos corpos celestes.\n");
    scanf("%d",&magia);

    if (magia == 1){
        caminho_armamento();
    }
    else if(magia == 2){
        caminho_celeste();
    }

}

void caminho_armamento(){
    int caminho;
    printf("Ap�s chegar nas ruinas voc� logo nota uns detalhes sobre a magia de reequipar e que ela precisa de uma concentra��o e um longo tempo para que seja aprimorada, e voc� n�o tem tanto de ambas as coisas.\n");
    printf("1-	Desistir e ir embora...sabendo s� magia de bola de fogo mesmo\n");
    printf("2-	Tentar pelo menos fazer surgir uma arma.\n");
    scanf("%d",&caminho);

    if (caminho == 1){
        desistir_arma();
    }
    else if (caminho == 2){
        persistir_arma();
    }

}
//desistir da magia
void desistir_arma(){
    printf("voc� vai embora e volta para sua casa, vivendo uma vida simples e tranquila pelo resto dos seus dias.\n");
}
//continuar na trilha do armamento
void persistir_arma(){
    int escolha;
    printf("No livro e dito que voc� precisa mentalizar a arma e se concentrar bastante e logo em seguida gritar Requip para que assim apare�a a arma desejada ou armadura.\n");
    printf("voc� tenta pela primeira vez, por�m nada surge.\n");
    printf("1-	Tentar denovo\n");
    printf("2-	Desistir.\n");
    scanf("%d",&escolha);

    if (escolha == 1){
        caminho_armamento2();
    }
    else if (escolha == 2){
        desistir_arma();
    }

}

void caminho_armamento2(){
    int opcao;
    printf("voc� tenta novamente, por�m dessa vez mentaliza apenas uma faca simples e com a ajuda de alguns selos de magia, sua primeira arma surge nas suas m�os.\n");
    printf("feliz com o sucesso, voc� vem todos os dias treinar a magia e ap�s uns 4 meses aproximadamente...voc� invoca sua primeira armadura, nada muito complexo, por�m nota-se que � uma das armaduras catalogadas no livro.\n");
    printf("rapidamente voc� l� e percebe que ela e �tima para combates contra inimigos de fogo e raio devido a sua resist�ncia a esses elementos...ent�o com o passar do tempo voc� foi dominando ainda mais a magia e tendo controle tanto pelo tempo de usa das armaduras como tamb�m qual armadura surgir de acordo com a necessidade. ent�o voc� precisa testar.\n");
    printf("1-	Entrar num torneio.\n");
    printf("2-	Ca�ar monstros.\n");
    scanf("%d",&opcao);

    if (opcao == 1){
        torneio();
    }
    else if(opcao == 2){
        cacar_monstros2();
    }

}
//ca�ar monstro com a magia nova
void cacar_monstros2(){
    printf("voc� sai em ca�adas junto de outras pessoas, para que suas habilidades sejam testadas e ver o quanto as armaduras resistem aos danos elementais causados pelos mais diversos monstros, complementando assim o livro que uma vez serviu para que voc� dominasse essa magia antiga e t�o poderosa em situa��es de combate.\n");
}
//torneio com magia de armamento
void torneio(){
    int opcao;
    printf("voc� se inscreve num torneio de lutas para testar seu controle sobre a magia e a for�a do seu novo poder. ent�o na primeira luta voc� derrota rapidamente seu oponente usando uma armadura leve que d� a voc� agilidade e for�a.\n");
    printf("1-	Continuar o torneio\n");
    printf("2-	Parar e ir embora.\n");
    scanf("%d",&opcao);

    if (opcao == 1){
        continuar_torneio();
    }
    else if(opcao == 2){
        desistir_torneio();
    }
}

void desistir_torneio(){
    printf("voc� sai da arena e decide que seu poder n�o deve ser usado para esses tipos de situa��es e decide focar em domin�-lo e usar apenas quando realmente for necess�rio.\n");
    printf("\n");
    printf("**FIM**");

}

void continuar_torneio(){
    printf("ent�o voc� continua o torneio derrotando oponente por oponente e a plateia come�a a ficar intrigada com o tipo de magia que nunca foi visto antes e com seu dom�nio em equipar e reequipar as armaduras.\n");
    printf("Ap�s vencer o torneio, voc� pega o gosto pelas lutas e decide viver nas arenas do mundo de orario sempre procurando testar mais e mais sua magia e ver at� onde esse novo poder pode alcan�ar.\n");
    printf("\n");
    printf("**FIM**");
}
























