public static void main(String[] args) {
  IODevice device = new FirmataDevice("COM3");
  // Faz a subscrição a eventos com
  device.addEventListener(...);
  // e/ou device.getPin(n).addEventListener(...);
  device.addEventListener(new IODeviceEventListener()
  {
    @Override public void onStart(IOEvent event) {
      /*...*/
    }
    @Override public void onStop(IOEvent event) {
      /*...*/
    }

    @Override public void onPinChange(IOEvent
                                      event) {
      // Aqui é indicada a mudança de valor da
      porta
      Pin pin = event.getPin();
      System.out.println( String.format(
                            "Porta %d tem valor %d",
                            pin.getIndex(),
                            pin.getValue())
                        );
    }

    @Override public void onMessageReceive(IOEvent
                                           event, String message) {
      //Aqui são processadas as mensagens vindas
      do dispositivo
        System.out.println(message);
    }
  }
  device.start(); // inicializa a comunicação com o
  device
  device.ensureInitializationIsDone(); // espera
  pela total inicialização
  // loop de processamento do programa
  while (...) {
  /*...*/
}
device.stop(); // Finaliza a comunicação com o
dispositivo
