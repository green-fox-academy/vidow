int main(){

    for (int = 1; i <= 100; i++) {
        h=i%15;

        switch(h){

        case 0:
            printf("FizzBuzz\n");
            break;
        case 3:
        case 6:
        case 9:
		case 12:
            printf("Fizz\n");
            break;
        case 5:
        case 10:
            printf("Buzz\n");
            break;
        default:
            printf("%d\n", i);
        }
}
    return 0;
}
