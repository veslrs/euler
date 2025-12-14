fn main() {
    let lim = 1000;
    let mut sum = 0;
    for i in 0..lim {
        if i % 3 == 0 || i % 5 == 0 {
            sum += i
        };
    }
    println!("sum of all the multiples of 3 or 5 below 1000 = {sum}");
}
