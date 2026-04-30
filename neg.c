void mul() {
    float num, neg;

    printf("\n");
    printf("Input 1st Number: ");
    scanf("%f", &num);
    printf("Input 2nd Number: ");
    scanf("%f", &neg);
    
    num -= neg;

    printf("\nResult: %.2f\n\n", num);
}