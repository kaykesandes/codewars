<h1>Servidor</h1>

<ol>
    <li>
        <p>Inicialize o servidor:</p>
        <ol>
            <li>Crie um socket do tipo <code>SOCK_STREAM</code> usando a função <code>socket()</code>.</li>
            <li>Configure o endereço e a porta do servidor usando a estrutura <code>sockaddr_in</code>.</li>
            <li>Vincule o socket ao endereço e à porta usando a função <code>bind()</code>.</li>
            <li>Aguarde conexões de clientes usando a função <code>listen()</code>.</li>
            <li>Imprima uma mensagem indicando que o servidor está aguardando conexões.</li>
        </ol>
    </li>
    <li>
        <p>Aguardar conexões:</p>
        <ol>
            <li>Aguarde uma conexão de cliente usando a função <code>accept()</code>.</li>
            <li>Imprima uma mensagem indicando que um cliente se conectou.</li>
        </ol>
    </li>
    <li>
        <p>Comunicação com o cliente:</p>
        <ol>
            <li>
                <p>Dentro de um loop infinito:</p>
                <ol>
                    <li>Receba uma mensagem do cliente usando a função <code>recv()</code>.</li>
                    <li>Imprima a mensagem recebida.</li>
                    <li>Solicite uma mensagem para enviar ao cliente.</li>
                    <li>Envie a mensagem para o cliente usando a função <code>send()</code>.</li>
                </ol>
            </li>
        </ol>
    </li>
    <li>Feche o socket do servidor quando a comunicação for encerrada.</li>
</ol>
<h1>Cliente</h1>
<ol>
    <li>
        <p>Inicialize o cliente:</p>
        <ol>
            <li>Crie um socket do tipo <code>SOCK_STREAM</code> usando a função <code>socket()</code>.</li>
            <li>Configure o endereço e a porta do servidor usando a estrutura <code>sockaddr_in</code>.</li>
            <li>Conecte-se ao servidor usando a função <code>connect()</code>.</li>
            <li>Imprima uma mensagem indicando que o cliente está conectado ao servidor.</li>
        </ol>
    </li>
    <li>
        <p>Comunicação com o servidor:</p>
        <ol>
            <li>
                <p>Dentro de um loop infinito:</p>
                <ol>
                    <li>Solicite uma mensagem para enviar ao servidor.</li>
                    <li>Envie a mensagem para o servidor usando a função <code>send()</code>.</li>
                    <li>Receba uma mensagem do servidor usando a função <code>recv()</code>.</li>
                    <li>Imprima a mensagem recebida.</li>
                </ol>
            </li>
        </ol>
    </li>
    <li>Feche o socket do cliente quando a comunicação for encerrada.</li>
</ol>