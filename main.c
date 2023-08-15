#include <stdio.h>
#include <stdlib.h>

//LUCAS CARVALHO DA SILVEIRA 
//UC22200038


/*Faça um programa que receba como dados de entrada,
2 notas de uma turma de 10 alunos e mostre como resultado: 
a)Qual a media do aluno com a maior media;
b)A lista dos alunos que tiveram media maior ou igual a 7
c)A media da turma.*/ 





void main() {
	
    float notas[10][2], mediat = 0;
    float mmedia = 0;
    int i, alunosms[10], num_apv = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite as duas notas do aluno %d: ", i+1);
        scanf("%f %f", &notas[i][0], &notas[i][1]);
        float media = (notas[i][0] + notas[i][1]) / 2;
        if (media > mmedia) {
            mmedia = media;
        }
        if (media >= 7) {
            alunosms[num_apv] = i+1;
            num_apv++;
        }
        mediat += media;
    }

    mediat /= 10;

    printf("A maior media foi: %.2f\n", mmedia);
    printf("O alunos aprovados (media maior ou igual a 7) foram o: \n ");
    for (i = 0; i < num_apv; i++) {
        printf(" numero %d\n ", alunosms[i]);
    }
    printf("\nA media da turma e %.2f\n", mediat);

	system("PAUSE");
	
}

