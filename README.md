# Contador de Peças Industrial com ESP32 e Sensor IR

Este projeto consiste em um sistema automatizado e de baixo custo para controle de fluxo de estoque e chão de fábrica. Utilizando o microcontrolador ESP32, o sistema detecta a passagem de objetos por meio de uma barreira óptica infravermelha, contabiliza a produção e oferece feedback visual/sonoro em tempo real.

## 🚀 Funcionalidades

- **Detecção Automática:** Contagem de peças sem contato físico através de sensores IR.
- **Feedback Sonoro:** Sinais sonoros emitidos por um buzzer para validação de contagem e alertas.
- **Reset Manual:** Botão físico dedicado para zerar o contador do lote atual.
- **Monitoramento Serial:** Exibição da contagem em tempo real a 115200 bps.

## 🛠️ Componentes Utilizados

- 1x ESP32 NodeMCU
- 1x Emissor Infravermelho (LED IR) + Resistor adequado
- 1x Receptor Infravermelho (Sensor IR)
- 1x Buzzer Sonoro (Ativo/Passivo)
- 1x Botão Push-Button (Configurado com resistor interno Pull-Down)

## 📌 Pinagem e Conexões

| Componente | Pino no ESP32 | Tipo | Descrição |
| :--- | :--- | :--- | :--- |
| `infrapulse` | GPIO 13 | Saída | Controle do Emissor IR |
| `receptoron` | GPIO 12 | Saída | Alimentação/Ativação do receptor |
| `receptorsig` | GPIO 14 | Entrada | Sinal lógico do Receptor IR |
| `buzzer` | GPIO 27 | Saída | Sinal de áudio para bips |
| `btout` | GPIO 25 | Entrada | Botão de reset (Pull-Down) |
| `btin` | GPIO 26 | Saída | Pino auxiliar de controle do botão |

## 💻 Como replicar o projeto

1. Monte o circuito seguindo a tabela de pinagem acima.
2. Abra a IDE do Arduino.
3. Certifique-se de ter as placas da família ESP32 instaladas na sua IDE.
4. Copie o código contido no arquivo `Sketch_Controle_Estoque.ino` deste repositório e faça o upload para o seu ESP32.
5. Abra o Monitor Serial na velocidade `115200` para acompanhar a contagem.

## 📈 Próximos Passos (Roadmap)
- [ ] Implementar conexão Wi-Fi.
- [ ] Enviar os dados de contagem em tempo real para um banco de dados.
- [ ] Conectar o banco de dados ao **Power BI** para criação de um dashboard de produtividade e indicadores de desempenho (OEE).
