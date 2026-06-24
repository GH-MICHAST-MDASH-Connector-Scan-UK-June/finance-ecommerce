use std::collections::HashMap;

fn main() {
    println!("finance-ecommerce - Rust Application");
    process_data();
}

fn process_data() {
    let mut data: HashMap<&str, &str> = HashMap::new();
    data.insert("app", "finance-ecommerce");
    data.insert("status", "running");
    
    for (key, value) in &data {
        println!("{}: {}", key, value);
    }
}
