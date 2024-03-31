# CP1 - O Caso da Vinheria Agnello: Luminosidade

## Índice
  * [Descrição do Projeto](#descrição-do-projeto)
  * [Acesso ao projeto](#acesso-ao-projeto)
  * [Ferramenta utilizada](#ferramenta-utilizada)
  * [Componentes necessários](#componentes-necessários)
  * [Montagem](#montagem)
     * [Cuidados durante a montagem](#cuidados-durante-a-montagem)
  * [Reprodução](#reprodução)
  * [Pessoas Desenvolvedoras do Projeto](#pessoas-desenvolvedoras-do-projeto)

## Descrição do projeto
<p>
Nós, L.A.N.E., fomos contratados pela Vinheria Agnello com a finalidade de ajudá-los a gerenciar a luminosidade no local onde armazenam os vinhos. Em nossas conversas com a empresa, falaram que a iluminação na adega é vital para manter a qualidade do vinho. Isso acontece, pois quanto mais tempo a bebida é exposta a luz, mais a integridade do vinho é comprometida, especialmente, os vinhos brancos e espumantes que são mais vulneráveis a luz.
</p>
<p>
Por essas razões, propomos esse projeto, no qual um sensor captura os índices de luminosidade da adega , além de indicar se o ambiente está bom, em níveis de alerta ou com algum problema. Além disso, se a luminosidade do ambiente estiver em um nível crítico, soará um alarme por 3 segundos. Se a situação persistir, o alarme tocará novamente.
</p>
<p>
Na construção deste projeto, nós utilizamos um Arduino que faz a captura dos dados necessários por meio do LDR, que é um sensor de luminosidade. Ademais, usamos os seguintes LED’ s:
</p>

* Verde: para representar que há pouca ou nenhuma luminosidade no ambiente;
* Amarelo:  para representar que há um nível médio de luminosidade; e
* Vermelho: para representar que a luminosidade está em um nível crítico.
<p>
Por fim, para soar o alarme, ou seja, quando o LED vermelho está aceso, utilizamos uma buzina (Buzzer) que emite o som para alertar que o ambiente está iluminado e é necessário tomar providências, como por exemplo desligar a luz do ambiente.
</p>

## Acesso ao projeto

Você pode acessar o [código do projeto](CP1.c) ou a [simulação feita no Tinkercad](https://www.tinkercad.com/things/aIxQMSG1Vik-cp1-o-caso-da-vinheira-agnello)

## Ferramenta utilizada

- ``Arduino IDEA``

## Componentes necessários

|   Componente   | Quantidade |
|:--------------:|:----------:|
| Arduino Uno R3 |      1     |
| 220 Ω Resistor |      4     |
|    LED verde   |      1     |
|   LED amarelo  |      1     |
|  LED vermelho  |      1     |
| Buzzer (Piezo) |      1     |
|       LDR      |      1     |
|      Cabo      |     14     |
|    Cabo USB    |      1     |

*OBS: Caso o Arduino esteja longe da fonte de energia, será necessário um adaptador USB.*


## Montagem


![arduino](https://github.com/AliceSBulhoes/CP1-Edge-1SEM/assets/101829188/f1a9199e-5e93-4e18-a07d-5b6091818208)

### Cuidados durante a montagem

- ``1.`` Na hora de conectar os LED’ s e o Buzzer precisamos ter mais cuidado, pois eles têm polaridade. Certificamos de conectá-los corretamente;
   - ``1.1`` O LED possui um terminal maior, que tem polaridade positiva, e o lado do terminal menor tem polaridade negativa. Portanto, conectamos a conexão do Arduino no terminal positivo (Ânodo) e o GND no terminal negativo (Catodo);
   - ``1.2.`` O Buzzer possui uma indicação se o lado é positivo ou negativo;
- ``2.`` Outro cuidado necessário para a reprodução do projeto foi conectar o LDR, o sensor de luz, como um divisor de tensão e conectá-lo ao pin analógico (A0), como demonstrado na imagem anterior;

## Reprodução

- ``1.`` Após a montagem do projeto, é necessário inserir o código por meio de um computador que possui o programa Arduino IDE instalado;
- ``2.`` Transferir o código do computador para  o Arduino por meio do Cabo USB;
-  ``3.`` Testar para ver se está funcionando;
-  ``4.`` Com tudo montado e pronto, é necessário levá-lo para o ambiente em que será implementado e ligá-lo á uma fonte;
  
*OBS: Para uma maior eficiência do projeto, é necessário botar o sensor de luminosidade próximo a fonte de luz do ambiente.*

## Pessoas Desenvolvedoras do Projeto

| [<img src="https://avatars.githubusercontent.com/u/101829188?v=4" width=115><br><sub>Alice Santos Bulhões</sub>](https://github.com/AliceSBulhoes) |  [<img src="https://avatars.githubusercontent.com/u/163866552?v=4" width=115><br><sub>Eduardo Oliveira Cardoso Madid</sub>](https://github.com/EduardoMadid) |  [<img src="https://media.licdn.com/dms/image/D5603AQF59776BVSUSg/profile-displayphoto-shrink_800_800/0/1697337839569?e=1717632000&v=beta&t=4spOdaBAcH7gOmyEpgpyF6hk1TM14MvCJ5DI-CNdCsI" width=115><br><sub>Lucas Henzo Ide Yuki</sub>](https://github.com/LucasYuki1) | [<img src="https://avatars.githubusercontent.com/u/153787379?v=4" width=115><br><sub>Nicolas Haubricht Hainfellner</sub>](https://github.com/NicolasHaubricht) |
| :---: | :---: | :---: | :---: |




