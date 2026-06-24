package com.sample;

public class Application {
    private String appName;
    
    public Application(String name) {
        this.appName = name;
    }
    
    public void run() {
        System.out.println("finance-ecommerce - Java Application");
        processData();
    }
    
    private void processData() {
        String data = "Processing data for " + appName;
        System.out.println(data);
    }
    
    public static void main(String[] args) {
        Application app = new Application("finance-ecommerce");
        app.run();
    }
}
