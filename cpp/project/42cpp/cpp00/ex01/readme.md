Bem-vindo aos anos 80 e à sua incrível tecnologia! Escreva um incrível
programa que se comporta como um diretório nulo.
Reserve um tempo para dar ao seu executável um nome relevante. Quando o programa
inicia, ele pede a entrada do usuário: você deve aceitar o comando ADD, o
comando SEARCH ou o comando EXIT. Quaisquer outras entradas serão excluídas.
O programa inicia vazio (sem contatos), não usa alocação dinâmica
e não pode armazenar mais de 8 contatos. Se um nono contato for adicionado, por favor
definir comportamento relevante.

http://www.cplusplus.com/reference/string/string/ e claro
http://www.cplusplus.com/reference/iomanip/

5

C++ - Módulo 00
Namespace, classe, funções de membro, fluxo stdio, listas de inicialização, estático, const e
muitas outras coisas básicas

• Se o comando for EXIT:
        ◦ O programa fecha e os contatos são perdidos para sempre
• Caso contrário, se o comando for ADD:
        ◦ O programa solicitará que o usuário insira novas informações de contato,
    um campo por vez, até que cada campo seja preenchido.
        ◦ Um contato contém os seguintes campos: nome, sobrenome, apelido,
    número de telefone, segredo mais obscuro.
        ◦ A Agenda Telefônica deve ser representada como uma instância de uma classe em seu
    código, ele deve conter uma matriz de contatos.
        ◦ Um contato DEVE ser representado como uma instância de uma classe em seu
    codificado. Você é livre para projetar a classe como desejar, mas
    a avaliação verificará a consistência de suas escolhas. Assista aos vídeos novamente
    hoje se você não entende o que quero dizer (e eu não quero
    diga "usar tudo" antes de perguntar).
• Finalmente, se o comando for SEARCH:
        ◦ O programa exibirá uma lista de contatos não vazios disponíveis em 4
    colunas: índice, nome, sobrenome e apelido.
        ◦ Cada coluna deve ter 10 caracteres de largura, o conteúdo deve ser
    alinhado à direita e cada coluna separada pelo caractere '|'. Qualquer saída
    maior que a largura da coluna é truncado e o último caractere
    exibível é substituído por um ponto ('.').
        ◦ Em seguida o programa solicitará novamente o índice da entrada desejada
    e exibirá os detalhes do contato, um campo por linha. Se a entrada não tiver
    não faz sentido, defina o comportamento relevante.
• Caso contrário, a entrada será ignorada.
Quando um comando é executado corretamente, o programa aguarda um novo.
comando ADD ou SEARCH e sai se o comando EXIT for usado.