# Exercícios LAB 2:

## Exercício 1: Rode o programa anterior para valores grandes de n. As mensagens sempre estarão ordenadas pelo valor de i?

As mensagens sempre estarao ordenadas em funcao de _i_, no teste que relizamos com i= 1000 as mensagens estavam ordenadas no valor de i

## Exercício 2: O que acontece se o programa anterior escreve-se as mensagens para sys.stdout, usando print, ao inv ́es de para sys.stderr? 

Não houve alteração aparente na apresentação das mensagens, tendo o programa imprimido o mesmo padrão de mensagem para stderr e stdout.

## Nome do arquivo Ex1

criacao_de_processos-lab2a-4N.c


### Como compilar o programa

Para compilar o programa "criacao_de_processos-lab2a-4N.c" devemos utilizar o compilador C GCC e o seguinte comando no terminal: gcc criacao_de_processos-lab2a-4N.c -o criacao_de_processos-lab2a-4N.out

### Como executar o programa

Para executar o programa "criacao_de_processos-lab2a-4N.c" devemos utilizar o seguinte comando o terminal: ./criacao_de_processos-lab2a-4N.out

### Como comprovar que pos resultados propostos foram alcançados

Ao executarmos o comando acima no terminal o programa deverá exibir no terminal essa mensagem:
os processos foram contados de 0 ate 1000 com seus respectivos IDs

i:1 process ID:11131 parent ID:4339 child ID:11132
i:2 process ID:11132 parent ID:996 child ID:11133
i:3 process ID:11133 parent ID:11132 child ID:11134
i:4 process ID:11134 parent ID:11133 child ID:11135
i:5 process ID:11135 parent ID:11134 child ID:11136
i:6 process ID:11136 parent ID:11135 child ID:11137
i:7 process ID:11137 parent ID:11136 child ID:11138
i:8 process ID:11138 parent ID:11137 child ID:11139
i:9 process ID:11139 parent ID:996 child ID:11140
i:10 process ID:11140 parent ID:11139 child ID:11141
i:11 process ID:11141 parent ID:11140 child ID:11142
i:12 process ID:11142 parent ID:996 child ID:11143
i:13 process ID:11143 parent ID:11142 child ID:11144
i:14 process ID:11144 parent ID:11143 child ID:11145
i:15 process ID:11145 parent ID:11144 child ID:11146
i:16 process ID:11146 parent ID:996 child ID:11147
i:17 process ID:11147 parent ID:996 child ID:11148
i:18 process ID:11148 parent ID:11147 child ID:11149
i:19 process ID:11149 parent ID:11148 child ID:11150
i:20 process ID:11150 parent ID:996 child ID:11151
i:21 process ID:11151 parent ID:11150 child ID:11152
i:22 process ID:11152 parent ID:11151 child ID:11153
i:23 process ID:11153 parent ID:11152 child ID:11154
i:24 process ID:11154 parent ID:11153 child ID:11155
i:25 process ID:11155 parent ID:11154 child ID:11156
i:26 process ID:11156 parent ID:11155 child ID:11157
i:27 process ID:11157 parent ID:11156 child ID:11158
i:28 process ID:11158 parent ID:11157 child ID:11159
i:29 process ID:11159 parent ID:996 child ID:11160
i:30 process ID:11160 parent ID:11159 child ID:11161
i:31 process ID:11161 parent ID:11160 child ID:11162
i:32 process ID:11162 parent ID:11161 child ID:11163
i:33 process ID:11163 parent ID:11162 child ID:11164
i:34 process ID:11164 parent ID:11163 child ID:11165
i:35 process ID:11165 parent ID:11164 child ID:11166
i:36 process ID:11166 parent ID:11165 child ID:11167
i:37 process ID:11167 parent ID:11166 child ID:11168
i:38 process ID:11168 parent ID:11167 child ID:11169
i:39 process ID:11169 parent ID:11168 child ID:11170
i:40 process ID:11170 parent ID:11169 child ID:11171
i:41 process ID:11171 parent ID:11170 child ID:11172
i:42 process ID:11172 parent ID:11171 child ID:11173
i:43 process ID:11173 parent ID:11172 child ID:11174
i:44 process ID:11174 parent ID:11173 child ID:11175
i:45 process ID:11175 parent ID:11174 child ID:11176
i:46 process ID:11176 parent ID:11175 child ID:11177
i:47 process ID:11177 parent ID:11176 child ID:11178
i:48 process ID:11178 parent ID:11177 child ID:11179
i:49 process ID:11179 parent ID:11178 child ID:11180
i:50 process ID:11180 parent ID:11179 child ID:0

### Nome do arquivo Ex2

criacao_de_processos-lab2a-4N.c

### Como compilar o programa

Para compilar o programa "criacao_de_processos-lab2a-4N.c" devemos utilizar o compilador C GCC e o seguinte comando no terminal: gcc criacao_de_processos-lab2a-4N.c -o criacao_de_processos-lab2a-4N.out

### Como executar o programa

Para executar o programa "criacao_de_processos-lab2a-4N.c" devemos utilizar o seguinte comando o terminal: ./criacao_de_processos-lab2a-4N.out

### Como comprovar que pos resultados propostos foram alcançados

Ao executarmos o comando acima no terminal o programa deverá exibir no terminal essa mensagem:
os processos foram contados de 0 ate 1000 com seus respectivos IDs

i:1 process ID:10872 parent ID:10517 child ID:10873
i:2 process ID:10873 parent ID:997 child ID:10874
i:3 process ID:10874 parent ID:997 child ID:10875
i:4 process ID:10875 parent ID:10874 child ID:10876
i:5 process ID:10876 parent ID:10875 child ID:10877
i:6 process ID:10877 parent ID:10876 child ID:10878
i:7 process ID:10878 parent ID:10877 child ID:10879
i:8 process ID:10879 parent ID:10878 child ID:10880
i:9 process ID:10880 parent ID:10879 child ID:10881
i:10 process ID:10881 parent ID:10880 child ID:0

