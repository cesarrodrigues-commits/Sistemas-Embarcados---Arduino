/*
CÓDIGO EXEMPLO PARA A LEITURA DE SINAL ELÉTRICO DE BOTÕES DE PULSO.

AUTOR: JULIO CESAR PEREIRA RODRIGUES 

DATA: 05/06/2026

Projeto disponível em: https://github.com/cesarrodrigues-commits/Sistemas-Embarcados---Arduino
*/


// DECLARANDO AS VARIÁVEIS DO PROJETO

const int botao_vermelho = 2; //declarando o pino do botão que aciona
							  //o LED Vermelho

const int botao_verde = 3; 	//declarando o pino do botão que aciona
							//o LED Verde

const int LED_VERMELHO = 4; // declarando o pino do LED VERMELHO
const int LED_VERDE = 5;	// declarando o pino do LED VERDE

int estado_botao_vermelho; // variável para armazenar o estado do botão vermelho
int estado_botao_verde;	   // variável para armazenar o estado do botão verde

void setup()
{

  pinMode(botao_vermelho, INPUT);   // definindo o botão vermelho como uma entrada
  pinMode(botao_verde, INPUT);	    // definindo o botão verde como uma entrada
  pinMode(LED_VERMELHO, OUTPUT);	// definindo o LED vermelho como uma saída
  pinMode(LED_VERDE, OUTPUT);		// definindo o LED VERDE como uma saída
  
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_VERDE, LOW);
}

void loop()
{
  estado_botao_vermelho = digitalRead(botao_vermelho);
  estado_botao_verde = digitalRead(botao_verde);
  
  //aciona o LED VERMELHO com nível lógico alto
  if(estado_botao_vermelho == HIGH)
  {
    digitalWrite(LED_VERMELHO,HIGH);
  } else {
    digitalWrite(LED_VERMELHO, LOW);
  }
  
  //aciona o LED VERDE com nível lógico baixo
  if(estado_botao_verde == LOW)
  {
    digitalWrite(LED_VERDE, HIGH);
  } else {
    digitalWrite(LED_VERDE, LOW);
  }
}
