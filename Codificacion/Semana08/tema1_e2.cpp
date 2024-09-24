#include <iostream>

using namespace std;

int main()
{

    int sucursal, anterior, dia, envio, medioPago;
    float importe;

    /// PTO A
    int max1, max2, maxDia1, maxDia2;

    /// PTO B
    bool bandera = false;
    float recaudacionAcumulada, menorRecaudacion;
    int menorRecaudacionSucursal;

    /// PTO C
    float efectivo, debito, credito, total, porcEfectivo, porcDebito, porcCred;

    /// PTO D
    float recaudacion2daQuincenaConEnvio = 0;

    cout << "Ingrese sucursal: ";
    cin >> sucursal;

    while (sucursal != 0)
    {
        anterior = sucursal;

        /// PTO A
        max1 = max2 = 0;

        /// PTO B
        recaudacionAcumulada = 0;

        /// PTO C
        efectivo = debito = credito = 0;

        while(sucursal == anterior)
        {
            cout << "Ingrese dia: ";
            cin >> dia;

            cout << "Ingrese importe: ";
            cin >> importe;

            cout << "Ingrese envio 1-Si 2-NO:";
            cin >> envio;

            cout << "Ingrese medio pago: ";
            cin >> medioPago;

            /// PROCESO REGISTROS DE VENTAS

            /// PTO A
            if(importe > max1){
                max2 = max1;
                maxDia2 = maxDia1;
                max1 = importe;
                maxDia1 = dia;
            }
            else if(importe > max2){
                max2 = importe;
                maxDia2 = dia;
            }

            /// PTO B
            recaudacionAcumulada += importe;

            /// PTO C
            if (medioPago == 1){
                efectivo += importe;
            }
            else if(medioPago == 2){
                debito += importe;
            }
            else{
                credito += importe;
            }

            /// PTO D
            if( (envio == 1) && (dia < 16)){
                recaudacion2daQuincenaConEnvio += importe;
            }

            cout << "Ingrese sucursal: ";
            cin >> sucursal;

        }

        /// PTO A
        cout << endl;
        cout << "PTO A) MAX 1: " << max1 << " dia: " << maxDia1 << endl;
        cout << "PTO A) MAX 2: " << max2 << " dia: " << maxDia2 << endl;

        /// PTO B
        if(bandera==false){
            menorRecaudacion = recaudacionAcumulada;
            menorRecaudacionSucursal = anterior;
        }
        else if(recaudacionAcumulada < menorRecaudacion){
            menorRecaudacion = recaudacionAcumulada;
            menorRecaudacionSucursal = anterior;
        }

        /// PTO C
        total = efectivo + debito + credito;
        porcEfectivo = efectivo*100/total;
        porcDebito = debito*100/total;
        porcCred = credito*100/total;

        cout << endl;
        cout << "PTO C) Recaudacion Efectivo $: " << porcEfectivo << "%" << endl;
        cout << "PTO C) Recaudacion Debito $: " << porcDebito << "%" << endl;
        cout << "PTO C) Recaudacion Credito $: " << porcCred << "%" << endl;
    }

    /// PTO B
    cout << endl;
    cout << "PTO B) La sucursal menor recaudacion fue: " << menorRecaudacionSucursal << endl;

    /// PTO D
    cout << endl;
    cout << "Recaudacion total 2da quincena con envio $: " << recaudacion2daQuincenaConEnvio << endl;

    return 0;
}
