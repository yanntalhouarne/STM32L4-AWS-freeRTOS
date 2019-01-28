/*
 * Amazon FreeRTOS V1.4.6
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWTCCAkGgAwIBAgIUZ0782x5RCdkVuF+MMF0ndrLtH/swDQYJKoZIhvcNAQEL\n"\
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTE5MDEyNzIxNDA0\n"\
"OFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAK96brWRCADD1cDQlZET\n"\
"lD6pFuYh0s4BPNZEg0iCOnDmuMwTQ1Hm3xXeQ8AKQ5xyTaoMI/vwKuaevSjZHrwK\n"\
"jfF6h8ndqNtsPwRzrULeZ2ZDFEruvjD5ApVMBvIdn4w+bHK/vx0B9SqPY7uMEV9l\n"\
"eIp3+SNzRXXZ3ZoXEI0dY6s4/e6GuzKFVpqP1/blGXWH4eHDHyMQH0FCmBrRrlhL\n"\
"9vz36Hp7dWIjSLtx2eEDIWgafA5Sjz+kpncCf/1G7/TjBpY6EZb7RXetKVLmZag4\n"\
"V5giBiX+M/zhQDuIGxXw5f+dNolqbTE+b8CC2Y6CugtFl71fikqK3AUTJnWfN8Wd\n"\
"nB8CAwEAAaNgMF4wHwYDVR0jBBgwFoAUbKRZR0IFNnQBSDBEH4oouV0JqbowHQYD\n"\
"VR0OBBYEFDppCTKzby8u6dx5F52bT5M89nMUMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQCaRN+hYjK2pbXu8WdJzRDFLU52\n"\
"4GE53AMq6CzQhzqFryhzzjeisY15R44wPmSF56AKihHvg6bbMiRX2feh7FTdmw+3\n"\
"MgYiXdry4S9sVD5qsspGPGJxtpayC2c5dYMn3CT7EcLQki7dWYKEOsaUU2XtRGMj\n"\
"0cBStfcpaCgtvTgOxpgHmTT06Y6Etoi6NYiy6CPm/YyeYjrvtDhE3dbqmgvhSoaF\n"\
"UYNaQJuK8tdLZ+3+Y5L5tQ042/oKmR+LrJiZMjmLjZBAHbhWtSMA2IUkaeJH7gJl\n"\
"LssYAonff7mK2HFNmsj/oZUYVX2wIkILeRkVnnN2xEZZ1XVUb7l6mj6mYzS8\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate 
 * Authority) of the client certificate is used by the server for routing the 
 * device's initial request. (The device client certificate must always be 
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html, 
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 * 
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEAr3putZEIAMPVwNCVkROUPqkW5iHSzgE81kSDSII6cOa4zBND\n"\
"UebfFd5DwApDnHJNqgwj+/Aq5p69KNkevAqN8XqHyd2o22w/BHOtQt5nZkMUSu6+\n"\
"MPkClUwG8h2fjD5scr+/HQH1Ko9ju4wRX2V4inf5I3NFddndmhcQjR1jqzj97oa7\n"\
"MoVWmo/X9uUZdYfh4cMfIxAfQUKYGtGuWEv2/Pfoent1YiNIu3HZ4QMhaBp8DlKP\n"\
"P6SmdwJ//Ubv9OMGljoRlvtFd60pUuZlqDhXmCIGJf4z/OFAO4gbFfDl/502iWpt\n"\
"MT5vwILZjoK6C0WXvV+KSorcBRMmdZ83xZ2cHwIDAQABAoIBAQCZtFdW6NOmv+Ly\n"\
"woHQEuNOQ5QQPl5FHeZpFJgeIhwImsAR2WmlSuHraMXVZ+gzGBgZNAss+gDKAw9T\n"\
"wWLfeSs98oMQef0XPeixAJYqNV9Cvsz+mcK0aNkvZunKl9IR6PfbR0Oip/1Uq0bD\n"\
"l3v8IIiGWXI78BNOmGg4Oa3AvZZ4+b59IfOXxaekOqNGqWi0NT8qrLeqVE1YXU5c\n"\
"pgYHPGF6vIpOVomSUxxpD2Vjqx0v0M3BUHn6F+ucT7VDTzCu7+GI1sllI+FOmH7m\n"\
"T5St0AyRxjQQGy6Gm9r7FtTW8SrUQHGL2045+sZmKiH8CLFfObeJKkozIRisAVwE\n"\
"BnCNPKbRAoGBANRLDg/Bga6Nts2V6PwD5rSXqllUXGSpWBVh7g4EWkjUXDcKi3Lm\n"\
"RdGo9jiVojDKN8cjuAUD+bwgqjZ0MIxxFJ7tL8cAnYmX3yXdpNGNJoGMz3AWc0aH\n"\
"D8wgH6OJIe9NGkcUiUvWptPjVsjGAmYpVXy7neMvGPg5sEZ6gQ+FI2wZAoGBANOb\n"\
"CnZWpftfbs2W6Tfi3dMz3KykW95R/xe3OVp+qiaI1gmAGFwrmWZ7YG3nA7Isr0JG\n"\
"QnVQtnHSU9/Lk8Oqnp5rlzrL5I6l3N/82dGELqpUADJlwgbgR3RxGDRYguliOsWf\n"\
"7ZOVcd21mIVdIoGKK1VvsaDEsS0SvkOkHDAg/ND3AoGBAKlm2umnuBvZ6a1Tmn6/\n"\
"fjFNdRmjP7bzit5FLvjwcDr9ejhRqcUeC0iqUxAEF1BnjOrTjdwyt+1vA2RAgx0O\n"\
"fy3yhtV9oDhTgDVvED5HLBrkigMfZw04aVqxp42PuAyEshtWP9jMiIM8PdwoZXGw\n"\
"Og82h17qDjrFjewvhR0lWIbBAoGAFpx7mreZlunUsj1NAH7Ki1YAX6ZUdsY2Rvd6\n"\
"NnRQhDuc+3jnoXm7M5s9a6EC4RgrRh6x3U1ZoYIDGmfriz4BIxaGG29MJf4NQxYG\n"\
"xH+maOb++mOrPwbaO9QV7QoEOyIW+6UiQuH2P+W2vZF9LXBxPvjndzFtaU6WbC3u\n"\
"ISp1OXMCgYBgwF2DvL/4KNko3Mb/b2rqaOdAQqyXVwLskRUIXuZVsHm6vR0ylu7B\n"\
"kv+49s5/Q2751cB+pzUHEUDk9UUdrpMVqLIuXJUM3oU8xbM0MyRrOyzDPvgEzHkB\n"\
"cOasuj5MXF1sqWSsnXRkjho1PRUXkrLdgexAyo56ay0MwGcRm4YuWA==\n"\
"-----END RSA PRIVATE KEY-----\n"

/* The constants above are set to const char * pointers defined in aws_demo_runner.c,
 * and externed here for use in C files.  NOTE!  THIS IS DONE FOR CONVENIENCE
 * DURING AN EVALUATION PHASE AND IS NOT GOOD PRACTICE FOR PRODUCTION SYSTEMS 
 * WHICH MUST STORE KEYS SECURELY. */
extern const char clientcredentialCLIENT_CERTIFICATE_PEM[];
extern const char* clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM;
extern const char clientcredentialCLIENT_PRIVATE_KEY_PEM[];
extern const uint32_t clientcredentialCLIENT_CERTIFICATE_LENGTH;
extern const uint32_t clientcredentialCLIENT_PRIVATE_KEY_LENGTH;

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
