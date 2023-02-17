	.data
intro_str:	.asciiz	"Vous devez trouver le nombre secret. "
saisir_str	.asciiz "Saisissez un nombre : "
trouve		.asciiz "Nombre secret trouvé !"
pastrouve	.asciiz "Nombre secret non trouvé :/"

	.text
	.globl __start
	
__start:
	jal main ##jump and link
	li $v0, 0
	syscall

main: