#include <Arduino.h>


// WiFi stuff
#include <WiFi.h>
#include <WebServer.h>
#include <WiFiClient.h>
#include <HTTPClient.h>
#include <WiFiClientSecure.h>

// Camera stuff
#include "OV2640.h"
#include "OV2640Streamer.h"
#include "CRtspSession.h"

// Select which of the servers are active
// Select only one or the streaming will be very slow!
// #define ENABLE_WEBSERVER
#define ENABLE_RTSPSERVER

// Camera class
extern OV2640 cam;

// RTSP stuff
void initRTSP(void);
void stopRTSP(void);

// Web server stuff
void initWebStream(void);
void stopWebStream(void);
void handleWebServer(void);