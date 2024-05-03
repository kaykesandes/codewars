<h1>Crack the PIN</h1>

É fornecido um hash md5 de um PIN de cinco dígitos. É fornecido como string. Md5 é uma função para fazer hash de sua senha: "password123" ===> "482c811da5d5b4bc6d497ffa98491e38"

Por que isso é útil? Funções hash como md5 podem criar um hash a partir de uma string em um curto espaço de tempo e é impossível descobrir a senha, se você tiver apenas o hash. A única maneira é quebrá-lo, significa tentar todas as combinações, fazer hash e comparar com o hash que você deseja quebrar. (Existem também outras maneiras de atacar o MD5, mas isso é outra história) Cada site e sistema operacional armazena suas senhas como hashes, portanto, se um hacker obtiver acesso ao banco de dados, ele não poderá fazer nada, desde que a senha seja segura o suficiente.

O que é um hash?

O que é md5?

Nota: Muitas linguagens possuem ferramentas integradas para hash md5. Caso contrário, você pode escrever sua própria função md5 ou pesquisar no Google, por exemplo.

Aqui está outro kata sobre como gerar hashes MD5!

Sua tarefa é retornar o PIN quebrado como string.

Este é um kata um pouco divertido, para mostrar como os PINs são fracos e como é importante uma proteção de força bruta, se você criar seu próprio login.

Se você gostou deste kata, aqui está uma extensão com senhas curtas!

Alguns dos meus outros katas:
Correção de erro nº 1 – Código de Hamming
Hackear a NSA
Decodifique o QR-Code
