/*

Elabore um programa para cálculo de preços de produtos que solicite o preço  de compra
do produto e o percentual a ser aplicado em cima desse valor para a venda. 
Calcule e exiba o preço de venda do produto. Se o percentual a ser aplicado for inferior a 50%, exiba uma mensagem
informando ao usuário que o  produto será vendido com uma margem muito pequena de lucro. 

*/
// Variáveis para cálculo
float precoCompra = 0.0;
float percentualLucro = 0.0;
float precoVenda = 0.0;

void setup()
{
  Serial.begin(9600);           // Inicializa a comunicação serial
}

void loop()
{
  // Entrada do preço de compra
  Serial.println("Digite o preco de compra do produto:");
  while (!Serial.available()) {}
  precoCompra = Serial.parseFloat();
  Serial.read(); // limpa o buffer

  // Entrada do percentual de lucro
  Serial.println("Digite o percentual de lucro desejado (%):");
  while (!Serial.available()) {}
  percentualLucro = Serial.parseFloat();
  Serial.read();
 
  // Cálculo do preço de venda
  precoVenda = precoCompra + (precoCompra * percentualLucro / 100);

  // Saída de informações
  Serial.println("-------------------------------");
  Serial.print("Preco de compra: R$ ");
  Serial.println(precoCompra, 2);

  Serial.print("Percentual de lucro: ");
  Serial.print(percentualLucro, 2);
  Serial.println(" %");

  Serial.print("Preco de venda: R$ ");
  Serial.println(precoVenda, 2);

  // Verificação da margem de lucro
  if (percentualLucro < 50) {
    Serial.println("ATENCAO: Margem de lucro muito pequena!");
  }

  Serial.println("-------------------------------");
  delay(2000);

}
