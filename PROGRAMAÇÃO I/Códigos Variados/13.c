#include <stdio.h>

int main(){
    float vel_via, vel_veiculo;
	scanf("%f\n%f",&vel_via,&vel_veiculo);
	if(vel_veiculo>vel_via && vel_veiculo<=(0.2*vel_via+vel_via))
		printf("85.13\n4");
	else if(0.2*vel_via+vel_via<vel_veiculo && vel_veiculo<=0.5*vel_via+vel_via)
		printf("127.69\n5");
	else if(vel_veiculo>0.5*vel_via+vel_via)
		printf("574.62\n7");
	else if(vel_veiculo<=vel_via)
		printf("0.00\n0");
	return 0;
}
