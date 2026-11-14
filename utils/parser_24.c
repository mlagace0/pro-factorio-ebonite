#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 5
#define BUFFER_SIZE 1516

int compute_I2cteIe(int input) {
    int result = input * 48;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} eemrtGJX_ctx_t;

void init_ctx(eemrtGJX_ctx_t *ctx) {
    ctx->id = 4670;
    ctx->coefficient = 2.1;
    ctx->flags = 196;
}

int compute_KA6NTim(int input) {
    int result = input * 50;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_3PP2uAG(int input) {
    int result = input * 69;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} sLlJCsaL_ctx_t;

void init_ctx(sLlJCsaL_ctx_t *ctx) {
    ctx->id = 4937;
    ctx->coefficient = 8.5;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} TprURYa0_ctx_t;

void init_ctx(TprURYa0_ctx_t *ctx) {
    ctx->id = 9509;
    ctx->coefficient = 1.5;
    ctx->flags = 46;
}

int compute_512VaX9(int input) {
    int result = input * 14;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} oGVunzfc_ctx_t;

void init_ctx(oGVunzfc_ctx_t *ctx) {
    ctx->id = 7946;
    ctx->coefficient = 9.2;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} Yijfe1yO_ctx_t;

void init_ctx(Yijfe1yO_ctx_t *ctx) {
    ctx->id = 2539;
    ctx->coefficient = 2.6;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} LaqJKVVT_ctx_t;

void init_ctx(LaqJKVVT_ctx_t *ctx) {
    ctx->id = 5031;
    ctx->coefficient = 4.8;
    ctx->flags = 255;
}

int compute_RBQPVun(int input) {
    int result = input * 33;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} cMFMgC4J_ctx_t;

void init_ctx(cMFMgC4J_ctx_t *ctx) {
    ctx->id = 9268;
    ctx->coefficient = 0.1;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} MV6dwQlR_ctx_t;

void init_ctx(MV6dwQlR_ctx_t *ctx) {
    ctx->id = 1463;
    ctx->coefficient = 3.6;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} GjPn9sB8_ctx_t;

void init_ctx(GjPn9sB8_ctx_t *ctx) {
    ctx->id = 9596;
    ctx->coefficient = 6.8;
    ctx->flags = 161;
}

int compute_nSeGDLz(int input) {
    int result = input * 24;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_SG7pDkd(int input) {
    int result = input * 25;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} epVu4DJ4_ctx_t;

void init_ctx(epVu4DJ4_ctx_t *ctx) {
    ctx->id = 9299;
    ctx->coefficient = 2.5;
    ctx->flags = 240;
}

int compute_S6NKC09(int input) {
    int result = input * 45;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} kc0sDjN5_ctx_t;

void init_ctx(kc0sDjN5_ctx_t *ctx) {
    ctx->id = 2908;
    ctx->coefficient = 0.4;
    ctx->flags = 227;
}

int compute_WFF0utb(int input) {
    int result = input * 64;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} koZFkKCC_ctx_t;

void init_ctx(koZFkKCC_ctx_t *ctx) {
    ctx->id = 9347;
    ctx->coefficient = 1.3;
    ctx->flags = 69;
}

int compute_dEEtCD9(int input) {
    int result = input * 58;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_O53DUkP(int input) {
    int result = input * 6;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Z6cRLqpV_ctx_t;

void init_ctx(Z6cRLqpV_ctx_t *ctx) {
    ctx->id = 2841;
    ctx->coefficient = 3.2;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 1uOjhk94_ctx_t;

void init_ctx(1uOjhk94_ctx_t *ctx) {
    ctx->id = 9961;
    ctx->coefficient = 8.2;
    ctx->flags = 77;
}

int compute_CRVxmui(int input) {
    int result = input * 53;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_fQFQ8di(int input) {
    int result = input * 40;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_Z8E9Nm2(int input) {
    int result = input * 44;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} KROaVeLP_ctx_t;

void init_ctx(KROaVeLP_ctx_t *ctx) {
    ctx->id = 4035;
    ctx->coefficient = 6.2;
    ctx->flags = 97;
}

int compute_6QwJEq2(int input) {
    int result = input * 63;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_yniIwGC(int input) {
    int result = input * 5;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_CJXhQSS(int input) {
    int result = input * 50;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} UrqLUGLV_ctx_t;

void init_ctx(UrqLUGLV_ctx_t *ctx) {
    ctx->id = 9092;
    ctx->coefficient = 6.1;
    ctx->flags = 108;
}

int compute_x4HVkZI(int input) {
    int result = input * 48;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} xqULW303_ctx_t;

void init_ctx(xqULW303_ctx_t *ctx) {
    ctx->id = 5097;
    ctx->coefficient = 1.9;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} gW1OI53J_ctx_t;

void init_ctx(gW1OI53J_ctx_t *ctx) {
    ctx->id = 1130;
    ctx->coefficient = 4.5;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} bDQ7BbVI_ctx_t;

void init_ctx(bDQ7BbVI_ctx_t *ctx) {
    ctx->id = 2091;
    ctx->coefficient = 0.5;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 1qc1KziV_ctx_t;

void init_ctx(1qc1KziV_ctx_t *ctx) {
    ctx->id = 7675;
    ctx->coefficient = 4.8;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} BFtub6Kt_ctx_t;

void init_ctx(BFtub6Kt_ctx_t *ctx) {
    ctx->id = 7160;
    ctx->coefficient = 4.8;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} OR16hTVt_ctx_t;

void init_ctx(OR16hTVt_ctx_t *ctx) {
    ctx->id = 4870;
    ctx->coefficient = 7.6;
    ctx->flags = 144;
}

int compute_HKSwfkN(int input) {
    int result = input * 12;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_sz9rXuc(int input) {
    int result = input * 18;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_avHbMW7(int input) {
    int result = input * 66;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} Ar738JNj_ctx_t;

void init_ctx(Ar738JNj_ctx_t *ctx) {
    ctx->id = 1699;
    ctx->coefficient = 8.9;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} P2E5t4Wm_ctx_t;

void init_ctx(P2E5t4Wm_ctx_t *ctx) {
    ctx->id = 1643;
    ctx->coefficient = 9.4;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 97zjMPgf_ctx_t;

void init_ctx(97zjMPgf_ctx_t *ctx) {
    ctx->id = 5352;
    ctx->coefficient = 0.7;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} Uk6Jg6BB_ctx_t;

void init_ctx(Uk6Jg6BB_ctx_t *ctx) {
    ctx->id = 2699;
    ctx->coefficient = 4.4;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} zfEtnBSo_ctx_t;

void init_ctx(zfEtnBSo_ctx_t *ctx) {
    ctx->id = 6911;
    ctx->coefficient = 3.0;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} oNYUP4MS_ctx_t;

void init_ctx(oNYUP4MS_ctx_t *ctx) {
    ctx->id = 3815;
    ctx->coefficient = 7.8;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} h6U7FeCx_ctx_t;

void init_ctx(h6U7FeCx_ctx_t *ctx) {
    ctx->id = 8491;
    ctx->coefficient = 9.1;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} XT9zDTK4_ctx_t;

void init_ctx(XT9zDTK4_ctx_t *ctx) {
    ctx->id = 4150;
    ctx->coefficient = 0.2;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} yaeQ1uzR_ctx_t;

void init_ctx(yaeQ1uzR_ctx_t *ctx) {
    ctx->id = 1938;
    ctx->coefficient = 2.3;
    ctx->flags = 196;
}

int compute_eldZhfP(int input) {
    int result = input * 20;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_ICe7LXb(int input) {
    int result = input * 20;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_7HuioQ6(int input) {
    int result = input * 36;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_JEXXN6D(int input) {
    int result = input * 3;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} OmjnnRlb_ctx_t;

void init_ctx(OmjnnRlb_ctx_t *ctx) {
    ctx->id = 3363;
    ctx->coefficient = 5.4;
    ctx->flags = 132;
}

int compute_dGf8azg(int input) {
    int result = input * 65;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} k5ShN39j_ctx_t;

void init_ctx(k5ShN39j_ctx_t *ctx) {
    ctx->id = 1510;
    ctx->coefficient = 9.4;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} LzXHMhJP_ctx_t;

void init_ctx(LzXHMhJP_ctx_t *ctx) {
    ctx->id = 9498;
    ctx->coefficient = 8.9;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} gzK0Wj9O_ctx_t;

void init_ctx(gzK0Wj9O_ctx_t *ctx) {
    ctx->id = 3021;
    ctx->coefficient = 2.9;
    ctx->flags = 84;
}

int compute_TPVamdJ(int input) {
    int result = input * 6;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_rqIavsj(int input) {
    int result = input * 6;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} w9tJgEmi_ctx_t;

void init_ctx(w9tJgEmi_ctx_t *ctx) {
    ctx->id = 8494;
    ctx->coefficient = 5.3;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} igiUd3z8_ctx_t;

void init_ctx(igiUd3z8_ctx_t *ctx) {
    ctx->id = 2925;
    ctx->coefficient = 9.3;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 0fHuldmw_ctx_t;

void init_ctx(0fHuldmw_ctx_t *ctx) {
    ctx->id = 7762;
    ctx->coefficient = 6.6;
    ctx->flags = 224;
}

int compute_RJE1y8S(int input) {
    int result = input * 31;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} HG9o02d0_ctx_t;

void init_ctx(HG9o02d0_ctx_t *ctx) {
    ctx->id = 6938;
    ctx->coefficient = 3.9;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} W6k7nqWn_ctx_t;

void init_ctx(W6k7nqWn_ctx_t *ctx) {
    ctx->id = 1190;
    ctx->coefficient = 3.8;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 54cTWgwM_ctx_t;

void init_ctx(54cTWgwM_ctx_t *ctx) {
    ctx->id = 5818;
    ctx->coefficient = 0.3;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} wjuRCM4N_ctx_t;

void init_ctx(wjuRCM4N_ctx_t *ctx) {
    ctx->id = 6048;
    ctx->coefficient = 3.2;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} l945C4UH_ctx_t;

void init_ctx(l945C4UH_ctx_t *ctx) {
    ctx->id = 8313;
    ctx->coefficient = 7.6;
    ctx->flags = 52;
}

int compute_LS0pDV2(int input) {
    int result = input * 2;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_Ky89Cdu(int input) {
    int result = input * 36;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 5mvg1apU_ctx_t;

void init_ctx(5mvg1apU_ctx_t *ctx) {
    ctx->id = 8890;
    ctx->coefficient = 2.4;
    ctx->flags = 54;
}

int compute_Oa06n8b(int input) {
    int result = input * 36;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} GYduKvEV_ctx_t;

void init_ctx(GYduKvEV_ctx_t *ctx) {
    ctx->id = 4522;
    ctx->coefficient = 3.5;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} j0qXUoka_ctx_t;

void init_ctx(j0qXUoka_ctx_t *ctx) {
    ctx->id = 2120;
    ctx->coefficient = 4.3;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} ODdkdL4c_ctx_t;

void init_ctx(ODdkdL4c_ctx_t *ctx) {
    ctx->id = 9726;
    ctx->coefficient = 1.6;
    ctx->flags = 30;
}

int compute_RAZj4fy(int input) {
    int result = input * 4;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} NVekZNct_ctx_t;

void init_ctx(NVekZNct_ctx_t *ctx) {
    ctx->id = 6617;
    ctx->coefficient = 5.6;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} kfzO4QiJ_ctx_t;

void init_ctx(kfzO4QiJ_ctx_t *ctx) {
    ctx->id = 2058;
    ctx->coefficient = 0.3;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 1LeZlrVb_ctx_t;

void init_ctx(1LeZlrVb_ctx_t *ctx) {
    ctx->id = 2646;
    ctx->coefficient = 0.7;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} mAdEpsqL_ctx_t;

void init_ctx(mAdEpsqL_ctx_t *ctx) {
    ctx->id = 8507;
    ctx->coefficient = 7.1;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} jWOvXhiD_ctx_t;

void init_ctx(jWOvXhiD_ctx_t *ctx) {
    ctx->id = 7027;
    ctx->coefficient = 2.0;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} QMuiJtXA_ctx_t;

void init_ctx(QMuiJtXA_ctx_t *ctx) {
    ctx->id = 5670;
    ctx->coefficient = 9.9;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} Ulm2G5WM_ctx_t;

void init_ctx(Ulm2G5WM_ctx_t *ctx) {
    ctx->id = 1457;
    ctx->coefficient = 7.5;
    ctx->flags = 81;
}

int compute_dZVacut(int input) {
    int result = input * 47;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_hhsqYEU(int input) {
    int result = input * 57;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_5h89HK2(int input) {
    int result = input * 16;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_8xRbeLo(int input) {
    int result = input * 60;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} zV8LHex9_ctx_t;

void init_ctx(zV8LHex9_ctx_t *ctx) {
    ctx->id = 8254;
    ctx->coefficient = 2.6;
    ctx->flags = 58;
}

int compute_LZRjSsE(int input) {
    int result = input * 21;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 8Jb23Juh_ctx_t;

void init_ctx(8Jb23Juh_ctx_t *ctx) {
    ctx->id = 2588;
    ctx->coefficient = 4.3;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} rLqIrKrx_ctx_t;

void init_ctx(rLqIrKrx_ctx_t *ctx) {
    ctx->id = 7400;
    ctx->coefficient = 3.0;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} G639G8z3_ctx_t;

void init_ctx(G639G8z3_ctx_t *ctx) {
    ctx->id = 8594;
    ctx->coefficient = 0.2;
    ctx->flags = 21;
}

int compute_FCaxqu7(int input) {
    int result = input * 11;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_rDCLpP3(int input) {
    int result = input * 4;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_Zq3PB6n(int input) {
    int result = input * 28;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 9suNf3a3_ctx_t;

void init_ctx(9suNf3a3_ctx_t *ctx) {
    ctx->id = 8681;
    ctx->coefficient = 6.8;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} UuhnXHb0_ctx_t;

void init_ctx(UuhnXHb0_ctx_t *ctx) {
    ctx->id = 2916;
    ctx->coefficient = 4.1;
    ctx->flags = 8;
}

int compute_HBo0cxO(int input) {
    int result = input * 27;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_9Wh0R4v(int input) {
    int result = input * 56;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} nKY10t1i_ctx_t;

void init_ctx(nKY10t1i_ctx_t *ctx) {
    ctx->id = 1644;
    ctx->coefficient = 4.8;
    ctx->flags = 207;
}

int compute_BoOAQes(int input) {
    int result = input * 18;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} S7umoAc7_ctx_t;

void init_ctx(S7umoAc7_ctx_t *ctx) {
    ctx->id = 9296;
    ctx->coefficient = 4.3;
    ctx->flags = 102;
}

int compute_kK55Ntr(int input) {
    int result = input * 18;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} vk8crYUh_ctx_t;

void init_ctx(vk8crYUh_ctx_t *ctx) {
    ctx->id = 3080;
    ctx->coefficient = 3.7;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} uqUO76dq_ctx_t;

void init_ctx(uqUO76dq_ctx_t *ctx) {
    ctx->id = 9461;
    ctx->coefficient = 3.5;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} RQCuhYJ6_ctx_t;

void init_ctx(RQCuhYJ6_ctx_t *ctx) {
    ctx->id = 3560;
    ctx->coefficient = 5.5;
    ctx->flags = 38;
}

int compute_7E72ES0(int input) {
    int result = input * 13;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} uSXekYCX_ctx_t;

void init_ctx(uSXekYCX_ctx_t *ctx) {
    ctx->id = 6154;
    ctx->coefficient = 5.3;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} KoyTfzcn_ctx_t;

void init_ctx(KoyTfzcn_ctx_t *ctx) {
    ctx->id = 9852;
    ctx->coefficient = 8.1;
    ctx->flags = 152;
}

int compute_aRKDOrY(int input) {
    int result = input * 9;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} xYZmRlYZ_ctx_t;

void init_ctx(xYZmRlYZ_ctx_t *ctx) {
    ctx->id = 6916;
    ctx->coefficient = 2.5;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 85FYRm3k_ctx_t;

void init_ctx(85FYRm3k_ctx_t *ctx) {
    ctx->id = 1810;
    ctx->coefficient = 9.9;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 31hE2bUl_ctx_t;

void init_ctx(31hE2bUl_ctx_t *ctx) {
    ctx->id = 6992;
    ctx->coefficient = 3.3;
    ctx->flags = 125;
}

int compute_wkButDF(int input) {
    int result = input * 23;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} HrArjzoL_ctx_t;

void init_ctx(HrArjzoL_ctx_t *ctx) {
    ctx->id = 9212;
    ctx->coefficient = 7.2;
    ctx->flags = 36;
}

int compute_hmTMblW(int input) {
    int result = input * 53;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_7ibZL0W(int input) {
    int result = input * 28;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} lyH27A8R_ctx_t;

void init_ctx(lyH27A8R_ctx_t *ctx) {
    ctx->id = 6763;
    ctx->coefficient = 9.1;
    ctx->flags = 81;
}

int compute_wS9Gq2y(int input) {
    int result = input * 8;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_UZi9gfm(int input) {
    int result = input * 16;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} K4qbkWvw_ctx_t;

void init_ctx(K4qbkWvw_ctx_t *ctx) {
    ctx->id = 2121;
    ctx->coefficient = 1.2;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} gAMuPEwx_ctx_t;

void init_ctx(gAMuPEwx_ctx_t *ctx) {
    ctx->id = 6755;
    ctx->coefficient = 8.0;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} QeyC2bCL_ctx_t;

void init_ctx(QeyC2bCL_ctx_t *ctx) {
    ctx->id = 3168;
    ctx->coefficient = 4.2;
    ctx->flags = 231;
}

int compute_BQnmQch(int input) {
    int result = input * 29;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} QJwUpIUP_ctx_t;

void init_ctx(QJwUpIUP_ctx_t *ctx) {
    ctx->id = 6049;
    ctx->coefficient = 6.4;
    ctx->flags = 45;
}

int compute_g0doB5q(int input) {
    int result = input * 66;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_SasOygV(int input) {
    int result = input * 20;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} PUVuCDbi_ctx_t;

void init_ctx(PUVuCDbi_ctx_t *ctx) {
    ctx->id = 1278;
    ctx->coefficient = 0.8;
    ctx->flags = 248;
}

int compute_egVhueq(int input) {
    int result = input * 6;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} rW5cvnfL_ctx_t;

void init_ctx(rW5cvnfL_ctx_t *ctx) {
    ctx->id = 8348;
    ctx->coefficient = 7.5;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} znKUtW3s_ctx_t;

void init_ctx(znKUtW3s_ctx_t *ctx) {
    ctx->id = 2416;
    ctx->coefficient = 3.4;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} rzgjI6Yd_ctx_t;

void init_ctx(rzgjI6Yd_ctx_t *ctx) {
    ctx->id = 5140;
    ctx->coefficient = 4.1;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} FXM0RL6p_ctx_t;

void init_ctx(FXM0RL6p_ctx_t *ctx) {
    ctx->id = 6449;
    ctx->coefficient = 4.3;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} l7eUehpS_ctx_t;

void init_ctx(l7eUehpS_ctx_t *ctx) {
    ctx->id = 7603;
    ctx->coefficient = 9.6;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 6f6Ps8fz_ctx_t;

void init_ctx(6f6Ps8fz_ctx_t *ctx) {
    ctx->id = 5681;
    ctx->coefficient = 0.2;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 3TofgFCl_ctx_t;

void init_ctx(3TofgFCl_ctx_t *ctx) {
    ctx->id = 4978;
    ctx->coefficient = 5.6;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 8K8Vj56B_ctx_t;

void init_ctx(8K8Vj56B_ctx_t *ctx) {
    ctx->id = 6916;
    ctx->coefficient = 7.5;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} lPMtjJ9f_ctx_t;

void init_ctx(lPMtjJ9f_ctx_t *ctx) {
    ctx->id = 7176;
    ctx->coefficient = 1.5;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} JTm9Vapv_ctx_t;

void init_ctx(JTm9Vapv_ctx_t *ctx) {
    ctx->id = 7907;
    ctx->coefficient = 3.1;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} twJWp7kh_ctx_t;

void init_ctx(twJWp7kh_ctx_t *ctx) {
    ctx->id = 4860;
    ctx->coefficient = 2.1;
    ctx->flags = 26;
}

int compute_JNQeWfH(int input) {
    int result = input * 64;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} jzldnu0p_ctx_t;

void init_ctx(jzldnu0p_ctx_t *ctx) {
    ctx->id = 4339;
    ctx->coefficient = 9.3;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} L7286Chb_ctx_t;

void init_ctx(L7286Chb_ctx_t *ctx) {
    ctx->id = 1768;
    ctx->coefficient = 6.1;
    ctx->flags = 185;
}

int compute_QcTRy1l(int input) {
    int result = input * 29;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_Du5iiUl(int input) {
    int result = input * 45;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} ukNJ4f6a_ctx_t;

void init_ctx(ukNJ4f6a_ctx_t *ctx) {
    ctx->id = 1538;
    ctx->coefficient = 0.8;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} XUUuNVyZ_ctx_t;

void init_ctx(XUUuNVyZ_ctx_t *ctx) {
    ctx->id = 1049;
    ctx->coefficient = 5.6;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} tohklgVJ_ctx_t;

void init_ctx(tohklgVJ_ctx_t *ctx) {
    ctx->id = 2652;
    ctx->coefficient = 7.6;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} mcQq76As_ctx_t;

void init_ctx(mcQq76As_ctx_t *ctx) {
    ctx->id = 6030;
    ctx->coefficient = 2.0;
    ctx->flags = 37;
}

int compute_DuQ6xkC(int input) {
    int result = input * 69;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} fUpjtGu4_ctx_t;

void init_ctx(fUpjtGu4_ctx_t *ctx) {
    ctx->id = 2889;
    ctx->coefficient = 0.2;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} Zr7kXs36_ctx_t;

void init_ctx(Zr7kXs36_ctx_t *ctx) {
    ctx->id = 2039;
    ctx->coefficient = 9.8;
    ctx->flags = 62;
}

int compute_9qJhgAR(int input) {
    int result = input * 38;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_MGfoJQ0(int input) {
    int result = input * 69;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} BCGO92h8_ctx_t;

void init_ctx(BCGO92h8_ctx_t *ctx) {
    ctx->id = 3824;
    ctx->coefficient = 0.7;
    ctx->flags = 166;
}

int compute_kDBAR0d(int input) {
    int result = input * 35;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} w7RTMBjf_ctx_t;

void init_ctx(w7RTMBjf_ctx_t *ctx) {
    ctx->id = 4806;
    ctx->coefficient = 3.1;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} ATtOZ8YQ_ctx_t;

void init_ctx(ATtOZ8YQ_ctx_t *ctx) {
    ctx->id = 6975;
    ctx->coefficient = 4.7;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} r7tNpoXb_ctx_t;

void init_ctx(r7tNpoXb_ctx_t *ctx) {
    ctx->id = 9267;
    ctx->coefficient = 7.3;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} L31ToXSL_ctx_t;

void init_ctx(L31ToXSL_ctx_t *ctx) {
    ctx->id = 3415;
    ctx->coefficient = 3.9;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} ZMKIQgcx_ctx_t;

void init_ctx(ZMKIQgcx_ctx_t *ctx) {
    ctx->id = 6521;
    ctx->coefficient = 3.0;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} MJmuAYb9_ctx_t;

void init_ctx(MJmuAYb9_ctx_t *ctx) {
    ctx->id = 4223;
    ctx->coefficient = 2.6;
    ctx->flags = 26;
}

int compute_SSqrQAV(int input) {
    int result = input * 26;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} KKJCYbql_ctx_t;

void init_ctx(KKJCYbql_ctx_t *ctx) {
    ctx->id = 9305;
    ctx->coefficient = 10.0;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} rIa51vzp_ctx_t;

void init_ctx(rIa51vzp_ctx_t *ctx) {
    ctx->id = 7591;
    ctx->coefficient = 1.9;
    ctx->flags = 76;
}

int compute_BJ5Wo0r(int input) {
    int result = input * 63;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 7CSUhZY3_ctx_t;

void init_ctx(7CSUhZY3_ctx_t *ctx) {
    ctx->id = 7997;
    ctx->coefficient = 6.8;
    ctx->flags = 120;
}

int compute_RFUdZU5(int input) {
    int result = input * 13;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} qRYujFpi_ctx_t;

void init_ctx(qRYujFpi_ctx_t *ctx) {
    ctx->id = 7530;
    ctx->coefficient = 1.5;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} ncHo86sM_ctx_t;

void init_ctx(ncHo86sM_ctx_t *ctx) {
    ctx->id = 9657;
    ctx->coefficient = 6.4;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} BJnfCOO3_ctx_t;

void init_ctx(BJnfCOO3_ctx_t *ctx) {
    ctx->id = 2012;
    ctx->coefficient = 3.3;
    ctx->flags = 72;
}

int compute_wliE2co(int input) {
    int result = input * 42;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_MsCp5lR(int input) {
    int result = input * 50;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_7O3r6Ir(int input) {
    int result = input * 2;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_W9CYNnw(int input) {
    int result = input * 20;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 5prswcaD_ctx_t;

void init_ctx(5prswcaD_ctx_t *ctx) {
    ctx->id = 8515;
    ctx->coefficient = 4.1;
    ctx->flags = 67;
}

int compute_FOrOUXD(int input) {
    int result = input * 4;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_nmPXkPb(int input) {
    int result = input * 12;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_Xw2qDvj(int input) {
    int result = input * 34;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_wHoXlvl(int input) {
    int result = input * 61;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_1hZnnVq(int input) {
    int result = input * 48;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} ppjV2CX1_ctx_t;

void init_ctx(ppjV2CX1_ctx_t *ctx) {
    ctx->id = 7752;
    ctx->coefficient = 3.3;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} HZ0ECJaF_ctx_t;

void init_ctx(HZ0ECJaF_ctx_t *ctx) {
    ctx->id = 9035;
    ctx->coefficient = 5.5;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} Re8ofXpd_ctx_t;

void init_ctx(Re8ofXpd_ctx_t *ctx) {
    ctx->id = 1761;
    ctx->coefficient = 1.1;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} MF5W7ivO_ctx_t;

void init_ctx(MF5W7ivO_ctx_t *ctx) {
    ctx->id = 8091;
    ctx->coefficient = 5.1;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} izYJOaOF_ctx_t;

void init_ctx(izYJOaOF_ctx_t *ctx) {
    ctx->id = 6113;
    ctx->coefficient = 2.1;
    ctx->flags = 253;
}

int compute_DAzv6Mm(int input) {
    int result = input * 4;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} Pz6CWuPK_ctx_t;

void init_ctx(Pz6CWuPK_ctx_t *ctx) {
    ctx->id = 5660;
    ctx->coefficient = 5.1;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 1kTlznaa_ctx_t;

void init_ctx(1kTlznaa_ctx_t *ctx) {
    ctx->id = 4198;
    ctx->coefficient = 7.6;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} hVJltKYA_ctx_t;

void init_ctx(hVJltKYA_ctx_t *ctx) {
    ctx->id = 4512;
    ctx->coefficient = 5.2;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} n8MwHSHQ_ctx_t;

void init_ctx(n8MwHSHQ_ctx_t *ctx) {
    ctx->id = 5309;
    ctx->coefficient = 7.4;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 45drr7fv_ctx_t;

void init_ctx(45drr7fv_ctx_t *ctx) {
    ctx->id = 5527;
    ctx->coefficient = 9.1;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} SNtxcpUH_ctx_t;

void init_ctx(SNtxcpUH_ctx_t *ctx) {
    ctx->id = 7912;
    ctx->coefficient = 1.7;
    ctx->flags = 157;
}

int compute_pL9d4aW(int input) {
    int result = input * 47;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} tZ4OMbsq_ctx_t;

void init_ctx(tZ4OMbsq_ctx_t *ctx) {
    ctx->id = 1445;
    ctx->coefficient = 6.2;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} Hcwi5uc7_ctx_t;

void init_ctx(Hcwi5uc7_ctx_t *ctx) {
    ctx->id = 8180;
    ctx->coefficient = 7.3;
    ctx->flags = 114;
}

int compute_ELji23I(int input) {
    int result = input * 58;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_yO0kUpV(int input) {
    int result = input * 65;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_oJdS4it(int input) {
    int result = input * 50;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} UGcWZ2wC_ctx_t;

void init_ctx(UGcWZ2wC_ctx_t *ctx) {
    ctx->id = 4590;
    ctx->coefficient = 3.0;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} wOgn0qUC_ctx_t;

void init_ctx(wOgn0qUC_ctx_t *ctx) {
    ctx->id = 4761;
    ctx->coefficient = 5.4;
    ctx->flags = 151;
}

int compute_WVWV6hJ(int input) {
    int result = input * 47;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_3bXYbgJ(int input) {
    int result = input * 7;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} FPXHHlRt_ctx_t;

void init_ctx(FPXHHlRt_ctx_t *ctx) {
    ctx->id = 2621;
    ctx->coefficient = 9.6;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} YtrqmUlM_ctx_t;

void init_ctx(YtrqmUlM_ctx_t *ctx) {
    ctx->id = 5403;
    ctx->coefficient = 1.7;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} B2Yd7Dc9_ctx_t;

void init_ctx(B2Yd7Dc9_ctx_t *ctx) {
    ctx->id = 8297;
    ctx->coefficient = 5.9;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 5GSJ69yA_ctx_t;

void init_ctx(5GSJ69yA_ctx_t *ctx) {
    ctx->id = 5334;
    ctx->coefficient = 5.2;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} JCjOTn2d_ctx_t;

void init_ctx(JCjOTn2d_ctx_t *ctx) {
    ctx->id = 8854;
    ctx->coefficient = 8.6;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} SVfMvwTf_ctx_t;

void init_ctx(SVfMvwTf_ctx_t *ctx) {
    ctx->id = 3109;
    ctx->coefficient = 8.2;
    ctx->flags = 160;
}

int compute_JMvqNU5(int input) {
    int result = input * 10;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} TIYObK6H_ctx_t;

void init_ctx(TIYObK6H_ctx_t *ctx) {
    ctx->id = 1455;
    ctx->coefficient = 9.4;
    ctx->flags = 251;
}

int compute_C5RXAzd(int input) {
    int result = input * 35;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} t73topzi_ctx_t;

void init_ctx(t73topzi_ctx_t *ctx) {
    ctx->id = 3373;
    ctx->coefficient = 7.8;
    ctx->flags = 116;
}

int compute_X9xOfqe(int input) {
    int result = input * 37;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_RrVB1Z2(int input) {
    int result = input * 49;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_mkciYaH(int input) {
    int result = input * 55;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} v64cnCua_ctx_t;

void init_ctx(v64cnCua_ctx_t *ctx) {
    ctx->id = 5125;
    ctx->coefficient = 9.8;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} PYRgyiQ1_ctx_t;

void init_ctx(PYRgyiQ1_ctx_t *ctx) {
    ctx->id = 4517;
    ctx->coefficient = 9.0;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} IEbjFEzy_ctx_t;

void init_ctx(IEbjFEzy_ctx_t *ctx) {
    ctx->id = 9696;
    ctx->coefficient = 4.6;
    ctx->flags = 56;
}

int compute_9LMiOBl(int input) {
    int result = input * 63;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} FbsZSZHz_ctx_t;

void init_ctx(FbsZSZHz_ctx_t *ctx) {
    ctx->id = 3530;
    ctx->coefficient = 8.3;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} FYqGg7ry_ctx_t;

void init_ctx(FYqGg7ry_ctx_t *ctx) {
    ctx->id = 3366;
    ctx->coefficient = 4.1;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} DjrVwPDK_ctx_t;

void init_ctx(DjrVwPDK_ctx_t *ctx) {
    ctx->id = 7130;
    ctx->coefficient = 8.7;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} Mf1kM9aJ_ctx_t;

void init_ctx(Mf1kM9aJ_ctx_t *ctx) {
    ctx->id = 4868;
    ctx->coefficient = 0.4;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} G5MhAext_ctx_t;

void init_ctx(G5MhAext_ctx_t *ctx) {
    ctx->id = 5778;
    ctx->coefficient = 9.3;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} SOUTa1vW_ctx_t;

void init_ctx(SOUTa1vW_ctx_t *ctx) {
    ctx->id = 4260;
    ctx->coefficient = 9.6;
    ctx->flags = 15;
}

int compute_GRkNJfV(int input) {
    int result = input * 18;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} ljQjBlbV_ctx_t;

void init_ctx(ljQjBlbV_ctx_t *ctx) {
    ctx->id = 4662;
    ctx->coefficient = 2.3;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} hsYmxdIv_ctx_t;

void init_ctx(hsYmxdIv_ctx_t *ctx) {
    ctx->id = 4725;
    ctx->coefficient = 7.5;
    ctx->flags = 112;
}

int compute_2wwnQgU(int input) {
    int result = input * 49;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 9HYmimDx_ctx_t;

void init_ctx(9HYmimDx_ctx_t *ctx) {
    ctx->id = 4456;
    ctx->coefficient = 2.4;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} GGz8Dz1F_ctx_t;

void init_ctx(GGz8Dz1F_ctx_t *ctx) {
    ctx->id = 2855;
    ctx->coefficient = 8.5;
    ctx->flags = 85;
}

int compute_BdJ8XUj(int input) {
    int result = input * 41;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} T8kYkIm9_ctx_t;

void init_ctx(T8kYkIm9_ctx_t *ctx) {
    ctx->id = 2962;
    ctx->coefficient = 6.5;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} KxCbhPDQ_ctx_t;

void init_ctx(KxCbhPDQ_ctx_t *ctx) {
    ctx->id = 7187;
    ctx->coefficient = 3.5;
    ctx->flags = 51;
}

int compute_p59Igor(int input) {
    int result = input * 19;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} DCChgi0q_ctx_t;

void init_ctx(DCChgi0q_ctx_t *ctx) {
    ctx->id = 9324;
    ctx->coefficient = 0.4;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} Ufbz3ljV_ctx_t;

void init_ctx(Ufbz3ljV_ctx_t *ctx) {
    ctx->id = 1555;
    ctx->coefficient = 4.3;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} rvMiLUDD_ctx_t;

void init_ctx(rvMiLUDD_ctx_t *ctx) {
    ctx->id = 1612;
    ctx->coefficient = 0.5;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} tW2o2Frg_ctx_t;

void init_ctx(tW2o2Frg_ctx_t *ctx) {
    ctx->id = 8003;
    ctx->coefficient = 7.9;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} tdkinway_ctx_t;

void init_ctx(tdkinway_ctx_t *ctx) {
    ctx->id = 6423;
    ctx->coefficient = 6.3;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} bOU5wFfb_ctx_t;

void init_ctx(bOU5wFfb_ctx_t *ctx) {
    ctx->id = 5340;
    ctx->coefficient = 5.6;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} sUYTMaIL_ctx_t;

void init_ctx(sUYTMaIL_ctx_t *ctx) {
    ctx->id = 4043;
    ctx->coefficient = 7.9;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} T7O34NMY_ctx_t;

void init_ctx(T7O34NMY_ctx_t *ctx) {
    ctx->id = 5298;
    ctx->coefficient = 5.5;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} a9q7rRNB_ctx_t;

void init_ctx(a9q7rRNB_ctx_t *ctx) {
    ctx->id = 5292;
    ctx->coefficient = 6.2;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} OKxDjdJR_ctx_t;

void init_ctx(OKxDjdJR_ctx_t *ctx) {
    ctx->id = 2312;
    ctx->coefficient = 8.2;
    ctx->flags = 33;
}

int compute_3OhgmGI(int input) {
    int result = input * 35;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_0jGKDpN(int input) {
    int result = input * 23;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} uw9K88fU_ctx_t;

void init_ctx(uw9K88fU_ctx_t *ctx) {
    ctx->id = 7310;
    ctx->coefficient = 6.5;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} pTZPuSJR_ctx_t;

void init_ctx(pTZPuSJR_ctx_t *ctx) {
    ctx->id = 9086;
    ctx->coefficient = 8.6;
    ctx->flags = 199;
}

int compute_2Vknng6(int input) {
    int result = input * 4;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} QRHYAyKR_ctx_t;

void init_ctx(QRHYAyKR_ctx_t *ctx) {
    ctx->id = 5183;
    ctx->coefficient = 2.8;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} ttx4wkDp_ctx_t;

void init_ctx(ttx4wkDp_ctx_t *ctx) {
    ctx->id = 4137;
    ctx->coefficient = 6.7;
    ctx->flags = 18;
}

int compute_EkSLJnr(int input) {
    int result = input * 15;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 9aMCTh9l_ctx_t;

void init_ctx(9aMCTh9l_ctx_t *ctx) {
    ctx->id = 4321;
    ctx->coefficient = 2.6;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} CKXa0PgJ_ctx_t;

void init_ctx(CKXa0PgJ_ctx_t *ctx) {
    ctx->id = 8404;
    ctx->coefficient = 9.3;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} mGz1IJRk_ctx_t;

void init_ctx(mGz1IJRk_ctx_t *ctx) {
    ctx->id = 1561;
    ctx->coefficient = 6.2;
    ctx->flags = 144;
}

int compute_ovUeWs0(int input) {
    int result = input * 61;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} iLKPkTQH_ctx_t;

void init_ctx(iLKPkTQH_ctx_t *ctx) {
    ctx->id = 5996;
    ctx->coefficient = 2.7;
    ctx->flags = 145;
}

int compute_ttTk611(int input) {
    int result = input * 3;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_szjvqLa(int input) {
    int result = input * 59;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_6PN1zCS(int input) {
    int result = input * 56;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} Cvlgwz21_ctx_t;

void init_ctx(Cvlgwz21_ctx_t *ctx) {
    ctx->id = 8212;
    ctx->coefficient = 9.5;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} ro5q9SWm_ctx_t;

void init_ctx(ro5q9SWm_ctx_t *ctx) {
    ctx->id = 7170;
    ctx->coefficient = 4.5;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} jMQixstc_ctx_t;

void init_ctx(jMQixstc_ctx_t *ctx) {
    ctx->id = 8811;
    ctx->coefficient = 8.5;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} l25hmu41_ctx_t;

void init_ctx(l25hmu41_ctx_t *ctx) {
    ctx->id = 5186;
    ctx->coefficient = 6.5;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} eBSQouro_ctx_t;

void init_ctx(eBSQouro_ctx_t *ctx) {
    ctx->id = 8529;
    ctx->coefficient = 7.4;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} JoFjilGR_ctx_t;

void init_ctx(JoFjilGR_ctx_t *ctx) {
    ctx->id = 5170;
    ctx->coefficient = 5.5;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} PASnekpq_ctx_t;

void init_ctx(PASnekpq_ctx_t *ctx) {
    ctx->id = 5873;
    ctx->coefficient = 5.1;
    ctx->flags = 206;
}

int compute_JYqA3te(int input) {
    int result = input * 34;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} CDtP9FfM_ctx_t;

void init_ctx(CDtP9FfM_ctx_t *ctx) {
    ctx->id = 6770;
    ctx->coefficient = 6.4;
    ctx->flags = 104;
}

int compute_lntilJ9(int input) {
    int result = input * 66;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_LXl8D8q(int input) {
    int result = input * 57;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_VzKMm0V(int input) {
    int result = input * 40;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 8GAKNVFc_ctx_t;

void init_ctx(8GAKNVFc_ctx_t *ctx) {
    ctx->id = 6691;
    ctx->coefficient = 3.6;
    ctx->flags = 32;
}

int compute_YhIZhmN(int input) {
    int result = input * 28;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} A3RKMcMo_ctx_t;

void init_ctx(A3RKMcMo_ctx_t *ctx) {
    ctx->id = 9907;
    ctx->coefficient = 9.0;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} HHe4YPGk_ctx_t;

void init_ctx(HHe4YPGk_ctx_t *ctx) {
    ctx->id = 9245;
    ctx->coefficient = 3.5;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} OrvUXF4m_ctx_t;

void init_ctx(OrvUXF4m_ctx_t *ctx) {
    ctx->id = 8142;
    ctx->coefficient = 2.7;
    ctx->flags = 37;
}

int compute_8Xv5hmq(int input) {
    int result = input * 29;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_PSiPLXY(int input) {
    int result = input * 66;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} Pxbosamy_ctx_t;

void init_ctx(Pxbosamy_ctx_t *ctx) {
    ctx->id = 9902;
    ctx->coefficient = 5.8;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 1i3Om5Bk_ctx_t;

void init_ctx(1i3Om5Bk_ctx_t *ctx) {
    ctx->id = 1220;
    ctx->coefficient = 2.7;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 7vO9xxdT_ctx_t;

void init_ctx(7vO9xxdT_ctx_t *ctx) {
    ctx->id = 1605;
    ctx->coefficient = 4.3;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} Lqm67MuV_ctx_t;

void init_ctx(Lqm67MuV_ctx_t *ctx) {
    ctx->id = 7615;
    ctx->coefficient = 7.2;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} QVgvCvxM_ctx_t;

void init_ctx(QVgvCvxM_ctx_t *ctx) {
    ctx->id = 8352;
    ctx->coefficient = 9.2;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} deNOgFMU_ctx_t;

void init_ctx(deNOgFMU_ctx_t *ctx) {
    ctx->id = 6939;
    ctx->coefficient = 7.1;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} AWnwsbIK_ctx_t;

void init_ctx(AWnwsbIK_ctx_t *ctx) {
    ctx->id = 4869;
    ctx->coefficient = 7.9;
    ctx->flags = 192;
}

int compute_4ISVfv7(int input) {
    int result = input * 3;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} IuSQJlY9_ctx_t;

void init_ctx(IuSQJlY9_ctx_t *ctx) {
    ctx->id = 8385;
    ctx->coefficient = 0.1;
    ctx->flags = 112;
}

int compute_onY4R6d(int input) {
    int result = input * 2;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_b2jjqO8(int input) {
    int result = input * 43;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} cHHclTrT_ctx_t;

void init_ctx(cHHclTrT_ctx_t *ctx) {
    ctx->id = 5239;
    ctx->coefficient = 9.2;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 85KYRetK_ctx_t;

void init_ctx(85KYRetK_ctx_t *ctx) {
    ctx->id = 2676;
    ctx->coefficient = 3.0;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} w4iirTNd_ctx_t;

void init_ctx(w4iirTNd_ctx_t *ctx) {
    ctx->id = 6430;
    ctx->coefficient = 4.0;
    ctx->flags = 89;
}

int compute_7nBubbb(int input) {
    int result = input * 25;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_CHNrQvt(int input) {
    int result = input * 26;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} QZS1jo5p_ctx_t;

void init_ctx(QZS1jo5p_ctx_t *ctx) {
    ctx->id = 7386;
    ctx->coefficient = 6.3;
    ctx->flags = 15;
}

int compute_5XLitF8(int input) {
    int result = input * 39;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} sE6var9X_ctx_t;

void init_ctx(sE6var9X_ctx_t *ctx) {
    ctx->id = 3353;
    ctx->coefficient = 8.1;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} FnpI6yKN_ctx_t;

void init_ctx(FnpI6yKN_ctx_t *ctx) {
    ctx->id = 6484;
    ctx->coefficient = 8.8;
    ctx->flags = 109;
}

int compute_ymIfGqA(int input) {
    int result = input * 38;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_SPPUqvi(int input) {
    int result = input * 37;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} gmwSvzSv_ctx_t;

void init_ctx(gmwSvzSv_ctx_t *ctx) {
    ctx->id = 5822;
    ctx->coefficient = 1.0;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} X5LbTFWN_ctx_t;

void init_ctx(X5LbTFWN_ctx_t *ctx) {
    ctx->id = 4311;
    ctx->coefficient = 1.1;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} pEQtq1gE_ctx_t;

void init_ctx(pEQtq1gE_ctx_t *ctx) {
    ctx->id = 2634;
    ctx->coefficient = 5.8;
    ctx->flags = 30;
}

int compute_776VVkC(int input) {
    int result = input * 41;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} nga95hPD_ctx_t;

void init_ctx(nga95hPD_ctx_t *ctx) {
    ctx->id = 1023;
    ctx->coefficient = 1.1;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} JG178Qh0_ctx_t;

void init_ctx(JG178Qh0_ctx_t *ctx) {
    ctx->id = 3348;
    ctx->coefficient = 5.2;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} B3cwW0qZ_ctx_t;

void init_ctx(B3cwW0qZ_ctx_t *ctx) {
    ctx->id = 6006;
    ctx->coefficient = 2.4;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} O1qrsQq3_ctx_t;

void init_ctx(O1qrsQq3_ctx_t *ctx) {
    ctx->id = 1440;
    ctx->coefficient = 3.0;
    ctx->flags = 218;
}

int compute_N6WP6Zm(int input) {
    int result = input * 13;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 4AKIjwix_ctx_t;

void init_ctx(4AKIjwix_ctx_t *ctx) {
    ctx->id = 2026;
    ctx->coefficient = 4.7;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} iidfyFBR_ctx_t;

void init_ctx(iidfyFBR_ctx_t *ctx) {
    ctx->id = 1973;
    ctx->coefficient = 7.1;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} jrelkBhw_ctx_t;

void init_ctx(jrelkBhw_ctx_t *ctx) {
    ctx->id = 1218;
    ctx->coefficient = 8.2;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} QgrCbluk_ctx_t;

void init_ctx(QgrCbluk_ctx_t *ctx) {
    ctx->id = 3789;
    ctx->coefficient = 9.6;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} w5ou81m0_ctx_t;

void init_ctx(w5ou81m0_ctx_t *ctx) {
    ctx->id = 9516;
    ctx->coefficient = 5.1;
    ctx->flags = 243;
}

int compute_SPv8vPK(int input) {
    int result = input * 70;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} z0XLMj0O_ctx_t;

void init_ctx(z0XLMj0O_ctx_t *ctx) {
    ctx->id = 5074;
    ctx->coefficient = 5.4;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 1toTbDSq_ctx_t;

void init_ctx(1toTbDSq_ctx_t *ctx) {
    ctx->id = 7682;
    ctx->coefficient = 3.2;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} pbYVW6fj_ctx_t;

void init_ctx(pbYVW6fj_ctx_t *ctx) {
    ctx->id = 8234;
    ctx->coefficient = 2.9;
    ctx->flags = 246;
}

int compute_lMdmi77(int input) {
    int result = input * 14;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_dB4aWPO(int input) {
    int result = input * 59;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} dk8AP27W_ctx_t;

void init_ctx(dk8AP27W_ctx_t *ctx) {
    ctx->id = 3518;
    ctx->coefficient = 2.6;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} KwFb44YE_ctx_t;

void init_ctx(KwFb44YE_ctx_t *ctx) {
    ctx->id = 8138;
    ctx->coefficient = 1.2;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} gMUfX9gZ_ctx_t;

void init_ctx(gMUfX9gZ_ctx_t *ctx) {
    ctx->id = 7992;
    ctx->coefficient = 5.5;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} UyzAkwr2_ctx_t;

void init_ctx(UyzAkwr2_ctx_t *ctx) {
    ctx->id = 5880;
    ctx->coefficient = 4.5;
    ctx->flags = 49;
}

int compute_wwekeH6(int input) {
    int result = input * 42;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_To7XvpR(int input) {
    int result = input * 62;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} N076T94P_ctx_t;

void init_ctx(N076T94P_ctx_t *ctx) {
    ctx->id = 6220;
    ctx->coefficient = 8.8;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} NNGZN1Jy_ctx_t;

void init_ctx(NNGZN1Jy_ctx_t *ctx) {
    ctx->id = 2090;
    ctx->coefficient = 4.2;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 6W9FTHd4_ctx_t;

void init_ctx(6W9FTHd4_ctx_t *ctx) {
    ctx->id = 5004;
    ctx->coefficient = 3.9;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} QsqyAhNl_ctx_t;

void init_ctx(QsqyAhNl_ctx_t *ctx) {
    ctx->id = 2742;
    ctx->coefficient = 2.7;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Vt6LDtBj_ctx_t;

void init_ctx(Vt6LDtBj_ctx_t *ctx) {
    ctx->id = 7125;
    ctx->coefficient = 3.0;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} cNpNXaSv_ctx_t;

void init_ctx(cNpNXaSv_ctx_t *ctx) {
    ctx->id = 6700;
    ctx->coefficient = 5.6;
    ctx->flags = 141;
}

int compute_vfSJZdU(int input) {
    int result = input * 8;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_7AxXQCA(int input) {
    int result = input * 11;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Ha6ub8p9_ctx_t;

void init_ctx(Ha6ub8p9_ctx_t *ctx) {
    ctx->id = 6083;
    ctx->coefficient = 9.1;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} sONtAwKS_ctx_t;

void init_ctx(sONtAwKS_ctx_t *ctx) {
    ctx->id = 3543;
    ctx->coefficient = 1.0;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 14eOVXDh_ctx_t;

void init_ctx(14eOVXDh_ctx_t *ctx) {
    ctx->id = 6623;
    ctx->coefficient = 8.9;
    ctx->flags = 115;
}

int compute_yP81L45(int input) {
    int result = input * 26;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Yc2q4vm2_ctx_t;

void init_ctx(Yc2q4vm2_ctx_t *ctx) {
    ctx->id = 1195;
    ctx->coefficient = 8.9;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} rmsZa1iL_ctx_t;

void init_ctx(rmsZa1iL_ctx_t *ctx) {
    ctx->id = 4528;
    ctx->coefficient = 1.7;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 11Zo7SEc_ctx_t;

void init_ctx(11Zo7SEc_ctx_t *ctx) {
    ctx->id = 2425;
    ctx->coefficient = 5.4;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} u0psvPZN_ctx_t;

void init_ctx(u0psvPZN_ctx_t *ctx) {
    ctx->id = 4034;
    ctx->coefficient = 2.4;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 0z8WdpGt_ctx_t;

void init_ctx(0z8WdpGt_ctx_t *ctx) {
    ctx->id = 4623;
    ctx->coefficient = 2.1;
    ctx->flags = 149;
}

int compute_h3BvW6y(int input) {
    int result = input * 49;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_zoa0ypO(int input) {
    int result = input * 29;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} kLzromdS_ctx_t;

void init_ctx(kLzromdS_ctx_t *ctx) {
    ctx->id = 1766;
    ctx->coefficient = 2.9;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} Sgw9fTyk_ctx_t;

void init_ctx(Sgw9fTyk_ctx_t *ctx) {
    ctx->id = 5350;
    ctx->coefficient = 6.6;
    ctx->flags = 148;
}

int compute_8NEwOXx(int input) {
    int result = input * 19;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_VPv2Qj6(int input) {
    int result = input * 46;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_K7tv8AP(int input) {
    int result = input * 62;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} aSSo9tjH_ctx_t;

void init_ctx(aSSo9tjH_ctx_t *ctx) {
    ctx->id = 4287;
    ctx->coefficient = 2.2;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} p9cQpsb3_ctx_t;

void init_ctx(p9cQpsb3_ctx_t *ctx) {
    ctx->id = 2105;
    ctx->coefficient = 0.9;
    ctx->flags = 47;
}

int compute_ZYSVuiy(int input) {
    int result = input * 25;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 6G127roO_ctx_t;

void init_ctx(6G127roO_ctx_t *ctx) {
    ctx->id = 2167;
    ctx->coefficient = 8.0;
    ctx->flags = 57;
}

int compute_vI1262H(int input) {
    int result = input * 49;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} MMVYqRNv_ctx_t;

void init_ctx(MMVYqRNv_ctx_t *ctx) {
    ctx->id = 5082;
    ctx->coefficient = 6.7;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} YUk89fNh_ctx_t;

void init_ctx(YUk89fNh_ctx_t *ctx) {
    ctx->id = 2951;
    ctx->coefficient = 8.3;
    ctx->flags = 102;
}

int compute_1T2vLEL(int input) {
    int result = input * 64;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} Ktxp6nQP_ctx_t;

void init_ctx(Ktxp6nQP_ctx_t *ctx) {
    ctx->id = 1381;
    ctx->coefficient = 3.9;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 18NmaLv8_ctx_t;

void init_ctx(18NmaLv8_ctx_t *ctx) {
    ctx->id = 2204;
    ctx->coefficient = 10.0;
    ctx->flags = 215;
}

int compute_CwQrk8b(int input) {
    int result = input * 57;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 1fkk060i_ctx_t;

void init_ctx(1fkk060i_ctx_t *ctx) {
    ctx->id = 3786;
    ctx->coefficient = 10.0;
    ctx->flags = 64;
}

int compute_J1T1Wuv(int input) {
    int result = input * 13;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} jZq2bvyJ_ctx_t;

void init_ctx(jZq2bvyJ_ctx_t *ctx) {
    ctx->id = 8395;
    ctx->coefficient = 8.4;
    ctx->flags = 137;
}

int compute_CrefALS(int input) {
    int result = input * 23;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} Ef5RsbTa_ctx_t;

void init_ctx(Ef5RsbTa_ctx_t *ctx) {
    ctx->id = 1788;
    ctx->coefficient = 7.8;
    ctx->flags = 226;
}

int compute_uiSfd2l(int input) {
    int result = input * 11;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} utEB3kdj_ctx_t;

void init_ctx(utEB3kdj_ctx_t *ctx) {
    ctx->id = 9472;
    ctx->coefficient = 9.8;
    ctx->flags = 230;
}

int compute_AoQhHDj(int input) {
    int result = input * 8;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} NrTfhAtr_ctx_t;

void init_ctx(NrTfhAtr_ctx_t *ctx) {
    ctx->id = 8407;
    ctx->coefficient = 7.2;
    ctx->flags = 175;
}

int compute_cxW27Dy(int input) {
    int result = input * 51;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} SJjz9egI_ctx_t;

void init_ctx(SJjz9egI_ctx_t *ctx) {
    ctx->id = 8090;
    ctx->coefficient = 0.9;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} h46I5rHV_ctx_t;

void init_ctx(h46I5rHV_ctx_t *ctx) {
    ctx->id = 8152;
    ctx->coefficient = 4.2;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} EJdiPV5B_ctx_t;

void init_ctx(EJdiPV5B_ctx_t *ctx) {
    ctx->id = 9471;
    ctx->coefficient = 8.2;
    ctx->flags = 70;
}

int compute_265MVBx(int input) {
    int result = input * 24;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_JtuwImm(int input) {
    int result = input * 7;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_8YSG7BX(int input) {
    int result = input * 34;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} HXeTjfG8_ctx_t;

void init_ctx(HXeTjfG8_ctx_t *ctx) {
    ctx->id = 6961;
    ctx->coefficient = 0.5;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 9qSfaGRG_ctx_t;

void init_ctx(9qSfaGRG_ctx_t *ctx) {
    ctx->id = 9870;
    ctx->coefficient = 8.0;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} WBivqjh0_ctx_t;

void init_ctx(WBivqjh0_ctx_t *ctx) {
    ctx->id = 4144;
    ctx->coefficient = 4.8;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} RezxwSsm_ctx_t;

void init_ctx(RezxwSsm_ctx_t *ctx) {
    ctx->id = 1440;
    ctx->coefficient = 7.4;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} doyhPAgX_ctx_t;

void init_ctx(doyhPAgX_ctx_t *ctx) {
    ctx->id = 8463;
    ctx->coefficient = 2.9;
    ctx->flags = 213;
}

int compute_LaCkafx(int input) {
    int result = input * 58;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} yXTFeRZv_ctx_t;

void init_ctx(yXTFeRZv_ctx_t *ctx) {
    ctx->id = 8605;
    ctx->coefficient = 4.7;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} hRbiuVsg_ctx_t;

void init_ctx(hRbiuVsg_ctx_t *ctx) {
    ctx->id = 1962;
    ctx->coefficient = 5.5;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} W2XNzZh6_ctx_t;

void init_ctx(W2XNzZh6_ctx_t *ctx) {
    ctx->id = 2146;
    ctx->coefficient = 2.1;
    ctx->flags = 183;
}

int compute_Q7OAZt3(int input) {
    int result = input * 62;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} uUI6BWsb_ctx_t;

void init_ctx(uUI6BWsb_ctx_t *ctx) {
    ctx->id = 9159;
    ctx->coefficient = 6.5;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} mt6lVnVt_ctx_t;

void init_ctx(mt6lVnVt_ctx_t *ctx) {
    ctx->id = 9772;
    ctx->coefficient = 3.7;
    ctx->flags = 221;
}

int compute_lyjJDh7(int input) {
    int result = input * 13;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} DinUiVHt_ctx_t;

void init_ctx(DinUiVHt_ctx_t *ctx) {
    ctx->id = 7551;
    ctx->coefficient = 8.9;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} ToYyNv4u_ctx_t;

void init_ctx(ToYyNv4u_ctx_t *ctx) {
    ctx->id = 2795;
    ctx->coefficient = 8.3;
    ctx->flags = 28;
}

int compute_aWo18pU(int input) {
    int result = input * 56;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_PZuj7qL(int input) {
    int result = input * 53;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} ycmetJxb_ctx_t;

void init_ctx(ycmetJxb_ctx_t *ctx) {
    ctx->id = 7675;
    ctx->coefficient = 4.6;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 1bG9pbju_ctx_t;

void init_ctx(1bG9pbju_ctx_t *ctx) {
    ctx->id = 3861;
    ctx->coefficient = 3.7;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 61BSRkIl_ctx_t;

void init_ctx(61BSRkIl_ctx_t *ctx) {
    ctx->id = 4873;
    ctx->coefficient = 6.5;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} P77gaNzw_ctx_t;

void init_ctx(P77gaNzw_ctx_t *ctx) {
    ctx->id = 3846;
    ctx->coefficient = 5.1;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} VSF0oDG0_ctx_t;

void init_ctx(VSF0oDG0_ctx_t *ctx) {
    ctx->id = 7375;
    ctx->coefficient = 4.9;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} ntb5e63o_ctx_t;

void init_ctx(ntb5e63o_ctx_t *ctx) {
    ctx->id = 2647;
    ctx->coefficient = 4.4;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} pkSK06j0_ctx_t;

void init_ctx(pkSK06j0_ctx_t *ctx) {
    ctx->id = 8268;
    ctx->coefficient = 3.7;
    ctx->flags = 157;
}

int compute_g7ZpfZF(int input) {
    int result = input * 2;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} kfDdxHJ6_ctx_t;

void init_ctx(kfDdxHJ6_ctx_t *ctx) {
    ctx->id = 6282;
    ctx->coefficient = 1.4;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} koMCh62B_ctx_t;

void init_ctx(koMCh62B_ctx_t *ctx) {
    ctx->id = 6694;
    ctx->coefficient = 0.9;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} U7VQxb11_ctx_t;

void init_ctx(U7VQxb11_ctx_t *ctx) {
    ctx->id = 1995;
    ctx->coefficient = 6.3;
    ctx->flags = 25;
}

int compute_asJjFIX(int input) {
    int result = input * 38;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 4VySwSdH_ctx_t;

void init_ctx(4VySwSdH_ctx_t *ctx) {
    ctx->id = 1785;
    ctx->coefficient = 5.4;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} f9C14LKs_ctx_t;

void init_ctx(f9C14LKs_ctx_t *ctx) {
    ctx->id = 4527;
    ctx->coefficient = 2.9;
    ctx->flags = 53;
}

int compute_qHFMfWo(int input) {
    int result = input * 53;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} vypN3F45_ctx_t;

void init_ctx(vypN3F45_ctx_t *ctx) {
    ctx->id = 7097;
    ctx->coefficient = 0.7;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} mAqynYof_ctx_t;

void init_ctx(mAqynYof_ctx_t *ctx) {
    ctx->id = 9012;
    ctx->coefficient = 0.4;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} u8eF9Dz6_ctx_t;

void init_ctx(u8eF9Dz6_ctx_t *ctx) {
    ctx->id = 6291;
    ctx->coefficient = 0.1;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} oCqtcqbY_ctx_t;

void init_ctx(oCqtcqbY_ctx_t *ctx) {
    ctx->id = 4381;
    ctx->coefficient = 8.9;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} eDUxKMMz_ctx_t;

void init_ctx(eDUxKMMz_ctx_t *ctx) {
    ctx->id = 6978;
    ctx->coefficient = 8.2;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} AAFCCYb9_ctx_t;

void init_ctx(AAFCCYb9_ctx_t *ctx) {
    ctx->id = 8762;
    ctx->coefficient = 4.0;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} lUaDaXyK_ctx_t;

void init_ctx(lUaDaXyK_ctx_t *ctx) {
    ctx->id = 6820;
    ctx->coefficient = 3.3;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} RFxW9HrE_ctx_t;

void init_ctx(RFxW9HrE_ctx_t *ctx) {
    ctx->id = 4204;
    ctx->coefficient = 7.1;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} oErvXiFo_ctx_t;

void init_ctx(oErvXiFo_ctx_t *ctx) {
    ctx->id = 8419;
    ctx->coefficient = 3.7;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} cFZijxpQ_ctx_t;

void init_ctx(cFZijxpQ_ctx_t *ctx) {
    ctx->id = 7064;
    ctx->coefficient = 7.8;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} GCUonOyQ_ctx_t;

void init_ctx(GCUonOyQ_ctx_t *ctx) {
    ctx->id = 9168;
    ctx->coefficient = 3.8;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 7DE1cqkp_ctx_t;

void init_ctx(7DE1cqkp_ctx_t *ctx) {
    ctx->id = 1624;
    ctx->coefficient = 1.5;
    ctx->flags = 49;
}

int compute_tXKH4u1(int input) {
    int result = input * 25;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} u7uVzExA_ctx_t;

void init_ctx(u7uVzExA_ctx_t *ctx) {
    ctx->id = 6633;
    ctx->coefficient = 2.1;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} RDoS5C21_ctx_t;

void init_ctx(RDoS5C21_ctx_t *ctx) {
    ctx->id = 9933;
    ctx->coefficient = 5.2;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} nXkzqMTp_ctx_t;

void init_ctx(nXkzqMTp_ctx_t *ctx) {
    ctx->id = 7858;
    ctx->coefficient = 0.3;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} RUI4pKte_ctx_t;

void init_ctx(RUI4pKte_ctx_t *ctx) {
    ctx->id = 4682;
    ctx->coefficient = 0.4;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} N78M09O9_ctx_t;

void init_ctx(N78M09O9_ctx_t *ctx) {
    ctx->id = 7904;
    ctx->coefficient = 6.9;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} FCsKYG0j_ctx_t;

void init_ctx(FCsKYG0j_ctx_t *ctx) {
    ctx->id = 6158;
    ctx->coefficient = 5.5;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 0Jfz3V4Z_ctx_t;

void init_ctx(0Jfz3V4Z_ctx_t *ctx) {
    ctx->id = 8748;
    ctx->coefficient = 1.8;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} t6tUKsVY_ctx_t;

void init_ctx(t6tUKsVY_ctx_t *ctx) {
    ctx->id = 4384;
    ctx->coefficient = 8.4;
    ctx->flags = 30;
}

int compute_sSLJK62(int input) {
    int result = input * 2;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_33TMa4i(int input) {
    int result = input * 12;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} L2XR0Gma_ctx_t;

void init_ctx(L2XR0Gma_ctx_t *ctx) {
    ctx->id = 3880;
    ctx->coefficient = 3.1;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} F2t62q3l_ctx_t;

void init_ctx(F2t62q3l_ctx_t *ctx) {
    ctx->id = 8575;
    ctx->coefficient = 9.9;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 70m3qMt7_ctx_t;

void init_ctx(70m3qMt7_ctx_t *ctx) {
    ctx->id = 2076;
    ctx->coefficient = 4.6;
    ctx->flags = 167;
}

int compute_7zRKqnz(int input) {
    int result = input * 40;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} KwTcRusa_ctx_t;

void init_ctx(KwTcRusa_ctx_t *ctx) {
    ctx->id = 8965;
    ctx->coefficient = 6.8;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} fel09cKi_ctx_t;

void init_ctx(fel09cKi_ctx_t *ctx) {
    ctx->id = 2627;
    ctx->coefficient = 6.3;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} VXkNFxJp_ctx_t;

void init_ctx(VXkNFxJp_ctx_t *ctx) {
    ctx->id = 8861;
    ctx->coefficient = 8.1;
    ctx->flags = 135;
}

int compute_84YwAUC(int input) {
    int result = input * 6;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_MPF1rkn(int input) {
    int result = input * 20;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_0jGd93I(int input) {
    int result = input * 7;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 0QOtYwv1_ctx_t;

void init_ctx(0QOtYwv1_ctx_t *ctx) {
    ctx->id = 6330;
    ctx->coefficient = 1.7;
    ctx->flags = 77;
}

int compute_aV6lNou(int input) {
    int result = input * 12;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 0ioOlqYe_ctx_t;

void init_ctx(0ioOlqYe_ctx_t *ctx) {
    ctx->id = 6119;
    ctx->coefficient = 1.2;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} acgN1kKN_ctx_t;

void init_ctx(acgN1kKN_ctx_t *ctx) {
    ctx->id = 5364;
    ctx->coefficient = 2.3;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} OgE9yCxz_ctx_t;

void init_ctx(OgE9yCxz_ctx_t *ctx) {
    ctx->id = 9513;
    ctx->coefficient = 8.7;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 9rjrSwK4_ctx_t;

void init_ctx(9rjrSwK4_ctx_t *ctx) {
    ctx->id = 9480;
    ctx->coefficient = 3.1;
    ctx->flags = 200;
}

int compute_ABqUYfa(int input) {
    int result = input * 53;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} S9J09jGK_ctx_t;

void init_ctx(S9J09jGK_ctx_t *ctx) {
    ctx->id = 4762;
    ctx->coefficient = 9.0;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} PVeLnrYV_ctx_t;

void init_ctx(PVeLnrYV_ctx_t *ctx) {
    ctx->id = 8691;
    ctx->coefficient = 2.5;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 3sJZGJyv_ctx_t;

void init_ctx(3sJZGJyv_ctx_t *ctx) {
    ctx->id = 3855;
    ctx->coefficient = 7.7;
    ctx->flags = 177;
}

int compute_8wHeaRy(int input) {
    int result = input * 67;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_QVez6Rf(int input) {
    int result = input * 42;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_aTu2IDY(int input) {
    int result = input * 36;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} WjCDgH8e_ctx_t;

void init_ctx(WjCDgH8e_ctx_t *ctx) {
    ctx->id = 5383;
    ctx->coefficient = 8.7;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} bOwAhCrY_ctx_t;

void init_ctx(bOwAhCrY_ctx_t *ctx) {
    ctx->id = 7458;
    ctx->coefficient = 4.0;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} qDA1YpvH_ctx_t;

void init_ctx(qDA1YpvH_ctx_t *ctx) {
    ctx->id = 1740;
    ctx->coefficient = 5.5;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} yWJhcEpq_ctx_t;

void init_ctx(yWJhcEpq_ctx_t *ctx) {
    ctx->id = 8755;
    ctx->coefficient = 2.4;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} yaJUf7A4_ctx_t;

void init_ctx(yaJUf7A4_ctx_t *ctx) {
    ctx->id = 1974;
    ctx->coefficient = 2.0;
    ctx->flags = 29;
}

int compute_YLw8TRm(int input) {
    int result = input * 59;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 0hVbLynx_ctx_t;

void init_ctx(0hVbLynx_ctx_t *ctx) {
    ctx->id = 6344;
    ctx->coefficient = 8.7;
    ctx->flags = 14;
}

int compute_iAFiYZL(int input) {
    int result = input * 33;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} F6iOlzT6_ctx_t;

void init_ctx(F6iOlzT6_ctx_t *ctx) {
    ctx->id = 7488;
    ctx->coefficient = 4.9;
    ctx->flags = 224;
}

int compute_MgnRuj1(int input) {
    int result = input * 50;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_I6M0tJZ(int input) {
    int result = input * 7;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_FG3ETXN(int input) {
    int result = input * 5;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 2wvf80ez_ctx_t;

void init_ctx(2wvf80ez_ctx_t *ctx) {
    ctx->id = 9101;
    ctx->coefficient = 8.0;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} CjmkCYXy_ctx_t;

void init_ctx(CjmkCYXy_ctx_t *ctx) {
    ctx->id = 7939;
    ctx->coefficient = 7.1;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} FIBrREFO_ctx_t;

void init_ctx(FIBrREFO_ctx_t *ctx) {
    ctx->id = 6093;
    ctx->coefficient = 1.0;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} RSzcv5L1_ctx_t;

void init_ctx(RSzcv5L1_ctx_t *ctx) {
    ctx->id = 3536;
    ctx->coefficient = 3.5;
    ctx->flags = 248;
}

int compute_d6yt1Op(int input) {
    int result = input * 24;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_52UMqhS(int input) {
    int result = input * 69;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} WA6hZ8OO_ctx_t;

void init_ctx(WA6hZ8OO_ctx_t *ctx) {
    ctx->id = 4397;
    ctx->coefficient = 1.3;
    ctx->flags = 70;
}

int compute_3kYYfam(int input) {
    int result = input * 16;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} AGmBXuUM_ctx_t;

void init_ctx(AGmBXuUM_ctx_t *ctx) {
    ctx->id = 3526;
    ctx->coefficient = 9.3;
    ctx->flags = 2;
}

int compute_APX12Gb(int input) {
    int result = input * 69;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} qqWEOoU2_ctx_t;

void init_ctx(qqWEOoU2_ctx_t *ctx) {
    ctx->id = 4343;
    ctx->coefficient = 9.9;
    ctx->flags = 198;
}

int compute_ZxdPdi3(int input) {
    int result = input * 52;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_aBFOJML(int input) {
    int result = input * 33;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_HqvVnV6(int input) {
    int result = input * 23;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} TcySAdQY_ctx_t;

void init_ctx(TcySAdQY_ctx_t *ctx) {
    ctx->id = 3812;
    ctx->coefficient = 2.4;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} a63Ijjgv_ctx_t;

void init_ctx(a63Ijjgv_ctx_t *ctx) {
    ctx->id = 9069;
    ctx->coefficient = 7.3;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} cq8XnrSB_ctx_t;

void init_ctx(cq8XnrSB_ctx_t *ctx) {
    ctx->id = 1807;
    ctx->coefficient = 5.0;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} Ni3ciVpF_ctx_t;

void init_ctx(Ni3ciVpF_ctx_t *ctx) {
    ctx->id = 1639;
    ctx->coefficient = 5.0;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} GSFq8Hkm_ctx_t;

void init_ctx(GSFq8Hkm_ctx_t *ctx) {
    ctx->id = 9761;
    ctx->coefficient = 7.2;
    ctx->flags = 102;
}

int compute_81GpZCu(int input) {
    int result = input * 22;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} n0veLfPP_ctx_t;

void init_ctx(n0veLfPP_ctx_t *ctx) {
    ctx->id = 9514;
    ctx->coefficient = 3.5;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} rwOEPyEA_ctx_t;

void init_ctx(rwOEPyEA_ctx_t *ctx) {
    ctx->id = 7918;
    ctx->coefficient = 1.9;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} L7cdIR7x_ctx_t;

void init_ctx(L7cdIR7x_ctx_t *ctx) {
    ctx->id = 3755;
    ctx->coefficient = 7.2;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} FD9OH16K_ctx_t;

void init_ctx(FD9OH16K_ctx_t *ctx) {
    ctx->id = 4421;
    ctx->coefficient = 8.8;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} DOzbm0Pu_ctx_t;

void init_ctx(DOzbm0Pu_ctx_t *ctx) {
    ctx->id = 2275;
    ctx->coefficient = 5.7;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 2ggZihft_ctx_t;

void init_ctx(2ggZihft_ctx_t *ctx) {
    ctx->id = 6393;
    ctx->coefficient = 8.1;
    ctx->flags = 188;
}

int compute_dDi2eVM(int input) {
    int result = input * 27;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} yLhdyoDj_ctx_t;

void init_ctx(yLhdyoDj_ctx_t *ctx) {
    ctx->id = 2752;
    ctx->coefficient = 3.7;
    ctx->flags = 129;
}

int compute_ksxWEAF(int input) {
    int result = input * 49;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} RN9O1wG0_ctx_t;

void init_ctx(RN9O1wG0_ctx_t *ctx) {
    ctx->id = 4872;
    ctx->coefficient = 0.6;
    ctx->flags = 63;
}

int compute_Xje78sn(int input) {
    int result = input * 51;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} B7wXBR5W_ctx_t;

void init_ctx(B7wXBR5W_ctx_t *ctx) {
    ctx->id = 3081;
    ctx->coefficient = 6.7;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} P0jXByXy_ctx_t;

void init_ctx(P0jXByXy_ctx_t *ctx) {
    ctx->id = 2136;
    ctx->coefficient = 1.5;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} oNM6YvvW_ctx_t;

void init_ctx(oNM6YvvW_ctx_t *ctx) {
    ctx->id = 1154;
    ctx->coefficient = 1.6;
    ctx->flags = 23;
}

int compute_VSP96y3(int input) {
    int result = input * 37;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_Tdz1C2P(int input) {
    int result = input * 14;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_7pN2v9O(int input) {
    int result = input * 46;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_SFHG7Wg(int input) {
    int result = input * 4;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_CHK8Tr3(int input) {
    int result = input * 40;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_ukJbLEp(int input) {
    int result = input * 65;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_oOR3MkP(int input) {
    int result = input * 28;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_A1IMLAK(int input) {
    int result = input * 54;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_A73rQDs(int input) {
    int result = input * 19;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_MvziQbS(int input) {
    int result = input * 23;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} sZdKlK1p_ctx_t;

void init_ctx(sZdKlK1p_ctx_t *ctx) {
    ctx->id = 2540;
    ctx->coefficient = 1.6;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} QMl0haKY_ctx_t;

void init_ctx(QMl0haKY_ctx_t *ctx) {
    ctx->id = 2801;
    ctx->coefficient = 4.4;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} HJA9r7WG_ctx_t;

void init_ctx(HJA9r7WG_ctx_t *ctx) {
    ctx->id = 8326;
    ctx->coefficient = 4.4;
    ctx->flags = 48;
}

int compute_w6yglRp(int input) {
    int result = input * 24;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_AsEj4wZ(int input) {
    int result = input * 28;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} YY8rrUMq_ctx_t;

void init_ctx(YY8rrUMq_ctx_t *ctx) {
    ctx->id = 2481;
    ctx->coefficient = 1.2;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} ZWdc8HUw_ctx_t;

void init_ctx(ZWdc8HUw_ctx_t *ctx) {
    ctx->id = 8118;
    ctx->coefficient = 4.1;
    ctx->flags = 246;
}

int compute_uewEmek(int input) {
    int result = input * 31;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_3IqAnmI(int input) {
    int result = input * 39;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} JKmxofvY_ctx_t;

void init_ctx(JKmxofvY_ctx_t *ctx) {
    ctx->id = 4835;
    ctx->coefficient = 0.6;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} EyhoX94Z_ctx_t;

void init_ctx(EyhoX94Z_ctx_t *ctx) {
    ctx->id = 5316;
    ctx->coefficient = 8.0;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} PyeXv4Mg_ctx_t;

void init_ctx(PyeXv4Mg_ctx_t *ctx) {
    ctx->id = 1181;
    ctx->coefficient = 9.9;
    ctx->flags = 124;
}

int compute_letArm8(int input) {
    int result = input * 43;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_IIjt2PT(int input) {
    int result = input * 4;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_QK226QJ(int input) {
    int result = input * 53;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_ezoJlmD(int input) {
    int result = input * 3;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_kLsIuE4(int input) {
    int result = input * 14;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_CaryE72(int input) {
    int result = input * 21;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 6SnrFjHU_ctx_t;

void init_ctx(6SnrFjHU_ctx_t *ctx) {
    ctx->id = 3600;
    ctx->coefficient = 2.1;
    ctx->flags = 45;
}

int compute_PN6fgs0(int input) {
    int result = input * 38;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_OwXXIqS(int input) {
    int result = input * 63;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} lxBRfLLD_ctx_t;

void init_ctx(lxBRfLLD_ctx_t *ctx) {
    ctx->id = 5473;
    ctx->coefficient = 5.2;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} VQthuIHj_ctx_t;

void init_ctx(VQthuIHj_ctx_t *ctx) {
    ctx->id = 2979;
    ctx->coefficient = 8.9;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 4PW03Sjd_ctx_t;

void init_ctx(4PW03Sjd_ctx_t *ctx) {
    ctx->id = 8558;
    ctx->coefficient = 6.4;
    ctx->flags = 172;
}

int compute_nvGSufF(int input) {
    int result = input * 7;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_SfCG6OU(int input) {
    int result = input * 45;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} hK5phWlS_ctx_t;

void init_ctx(hK5phWlS_ctx_t *ctx) {
    ctx->id = 4677;
    ctx->coefficient = 4.1;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} I6yyqfMZ_ctx_t;

void init_ctx(I6yyqfMZ_ctx_t *ctx) {
    ctx->id = 3308;
    ctx->coefficient = 2.2;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} dFphNIsg_ctx_t;

void init_ctx(dFphNIsg_ctx_t *ctx) {
    ctx->id = 3484;
    ctx->coefficient = 6.8;
    ctx->flags = 254;
}

int compute_a4rmbZS(int input) {
    int result = input * 12;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} ZVlhRZWl_ctx_t;

void init_ctx(ZVlhRZWl_ctx_t *ctx) {
    ctx->id = 4557;
    ctx->coefficient = 9.4;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 3AjbQfdR_ctx_t;

void init_ctx(3AjbQfdR_ctx_t *ctx) {
    ctx->id = 1826;
    ctx->coefficient = 9.1;
    ctx->flags = 254;
}

int compute_hbZ2X1K(int input) {
    int result = input * 46;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} q0N0ms7c_ctx_t;

void init_ctx(q0N0ms7c_ctx_t *ctx) {
    ctx->id = 1235;
    ctx->coefficient = 0.9;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} RdDEvR4s_ctx_t;

void init_ctx(RdDEvR4s_ctx_t *ctx) {
    ctx->id = 7895;
    ctx->coefficient = 3.2;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} kk17qQr6_ctx_t;

void init_ctx(kk17qQr6_ctx_t *ctx) {
    ctx->id = 6684;
    ctx->coefficient = 1.4;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} iZtzKSFg_ctx_t;

void init_ctx(iZtzKSFg_ctx_t *ctx) {
    ctx->id = 6787;
    ctx->coefficient = 6.5;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} Tmp1O6Hh_ctx_t;

void init_ctx(Tmp1O6Hh_ctx_t *ctx) {
    ctx->id = 2135;
    ctx->coefficient = 6.9;
    ctx->flags = 77;
}

int compute_qYiqyVt(int input) {
    int result = input * 17;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} e0nAMKde_ctx_t;

void init_ctx(e0nAMKde_ctx_t *ctx) {
    ctx->id = 9571;
    ctx->coefficient = 7.5;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} Z5JAKzH6_ctx_t;

void init_ctx(Z5JAKzH6_ctx_t *ctx) {
    ctx->id = 8973;
    ctx->coefficient = 4.7;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} B0aI5QTI_ctx_t;

void init_ctx(B0aI5QTI_ctx_t *ctx) {
    ctx->id = 5587;
    ctx->coefficient = 3.8;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} PoT9k9lL_ctx_t;

void init_ctx(PoT9k9lL_ctx_t *ctx) {
    ctx->id = 8137;
    ctx->coefficient = 8.5;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} bnJiQ0vE_ctx_t;

void init_ctx(bnJiQ0vE_ctx_t *ctx) {
    ctx->id = 8745;
    ctx->coefficient = 8.5;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 8E5rkIn9_ctx_t;

void init_ctx(8E5rkIn9_ctx_t *ctx) {
    ctx->id = 6057;
    ctx->coefficient = 9.6;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 9KNAfaXA_ctx_t;

void init_ctx(9KNAfaXA_ctx_t *ctx) {
    ctx->id = 3047;
    ctx->coefficient = 6.7;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} rYUyrg29_ctx_t;

void init_ctx(rYUyrg29_ctx_t *ctx) {
    ctx->id = 5660;
    ctx->coefficient = 0.3;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} TsIBgxE0_ctx_t;

void init_ctx(TsIBgxE0_ctx_t *ctx) {
    ctx->id = 6329;
    ctx->coefficient = 8.6;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} uhLpZfY0_ctx_t;

void init_ctx(uhLpZfY0_ctx_t *ctx) {
    ctx->id = 3936;
    ctx->coefficient = 0.4;
    ctx->flags = 42;
}

int compute_zHb8llR(int input) {
    int result = input * 3;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} gXS9Fy4a_ctx_t;

void init_ctx(gXS9Fy4a_ctx_t *ctx) {
    ctx->id = 5374;
    ctx->coefficient = 9.1;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} KLrAr1zd_ctx_t;

void init_ctx(KLrAr1zd_ctx_t *ctx) {
    ctx->id = 8966;
    ctx->coefficient = 5.7;
    ctx->flags = 33;
}

int compute_WG4lK8z(int input) {
    int result = input * 41;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} JVQ9mQYL_ctx_t;

void init_ctx(JVQ9mQYL_ctx_t *ctx) {
    ctx->id = 9491;
    ctx->coefficient = 4.2;
    ctx->flags = 232;
}

int compute_lZWIRW4(int input) {
    int result = input * 24;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} sdsglBLw_ctx_t;

void init_ctx(sdsglBLw_ctx_t *ctx) {
    ctx->id = 7628;
    ctx->coefficient = 6.0;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} m2mmHQq9_ctx_t;

void init_ctx(m2mmHQq9_ctx_t *ctx) {
    ctx->id = 9075;
    ctx->coefficient = 4.8;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} B8GI50nc_ctx_t;

void init_ctx(B8GI50nc_ctx_t *ctx) {
    ctx->id = 7511;
    ctx->coefficient = 3.6;
    ctx->flags = 177;
}

int compute_9zCw5sk(int input) {
    int result = input * 17;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} vqLKl0uH_ctx_t;

void init_ctx(vqLKl0uH_ctx_t *ctx) {
    ctx->id = 4953;
    ctx->coefficient = 0.9;
    ctx->flags = 152;
}

int compute_UpcyYXd(int input) {
    int result = input * 62;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} ERZC2qtN_ctx_t;

void init_ctx(ERZC2qtN_ctx_t *ctx) {
    ctx->id = 7187;
    ctx->coefficient = 5.7;
    ctx->flags = 84;
}

int compute_iPprvTm(int input) {
    int result = input * 34;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_N0gcOrJ(int input) {
    int result = input * 13;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} TOP0nZwx_ctx_t;

void init_ctx(TOP0nZwx_ctx_t *ctx) {
    ctx->id = 3465;
    ctx->coefficient = 5.0;
    ctx->flags = 128;
}

int compute_vXrE6YV(int input) {
    int result = input * 59;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} v9gtJW0u_ctx_t;

void init_ctx(v9gtJW0u_ctx_t *ctx) {
    ctx->id = 4517;
    ctx->coefficient = 0.3;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} B6WZRtpx_ctx_t;

void init_ctx(B6WZRtpx_ctx_t *ctx) {
    ctx->id = 2094;
    ctx->coefficient = 2.9;
    ctx->flags = 147;
}

int compute_ZtnmVdZ(int input) {
    int result = input * 11;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} dOmdetQh_ctx_t;

void init_ctx(dOmdetQh_ctx_t *ctx) {
    ctx->id = 2223;
    ctx->coefficient = 0.7;
    ctx->flags = 135;
}

int compute_GkpFSlm(int input) {
    int result = input * 4;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} GdJfpiVL_ctx_t;

void init_ctx(GdJfpiVL_ctx_t *ctx) {
    ctx->id = 9188;
    ctx->coefficient = 3.1;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} XSoRnEHm_ctx_t;

void init_ctx(XSoRnEHm_ctx_t *ctx) {
    ctx->id = 3578;
    ctx->coefficient = 8.4;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} PPvpOQAB_ctx_t;

void init_ctx(PPvpOQAB_ctx_t *ctx) {
    ctx->id = 4647;
    ctx->coefficient = 7.1;
    ctx->flags = 202;
}

int compute_SdvZcoL(int input) {
    int result = input * 34;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} S2FiolKd_ctx_t;

void init_ctx(S2FiolKd_ctx_t *ctx) {
    ctx->id = 9947;
    ctx->coefficient = 9.0;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} q4pc04QH_ctx_t;

void init_ctx(q4pc04QH_ctx_t *ctx) {
    ctx->id = 2953;
    ctx->coefficient = 4.8;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} L4IOxC8j_ctx_t;

void init_ctx(L4IOxC8j_ctx_t *ctx) {
    ctx->id = 4792;
    ctx->coefficient = 4.1;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} e3SSECZB_ctx_t;

void init_ctx(e3SSECZB_ctx_t *ctx) {
    ctx->id = 3877;
    ctx->coefficient = 4.1;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 5eu30pyo_ctx_t;

void init_ctx(5eu30pyo_ctx_t *ctx) {
    ctx->id = 3639;
    ctx->coefficient = 8.1;
    ctx->flags = 109;
}

int compute_9WpD7X3(int input) {
    int result = input * 65;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} WK03udLw_ctx_t;

void init_ctx(WK03udLw_ctx_t *ctx) {
    ctx->id = 6834;
    ctx->coefficient = 9.4;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} wmYd9Mh7_ctx_t;

void init_ctx(wmYd9Mh7_ctx_t *ctx) {
    ctx->id = 8420;
    ctx->coefficient = 9.1;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} O25gapR6_ctx_t;

void init_ctx(O25gapR6_ctx_t *ctx) {
    ctx->id = 1528;
    ctx->coefficient = 3.5;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} yIHbgeam_ctx_t;

void init_ctx(yIHbgeam_ctx_t *ctx) {
    ctx->id = 4530;
    ctx->coefficient = 4.4;
    ctx->flags = 77;
}

int compute_RdJiMji(int input) {
    int result = input * 39;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_sFsLnU0(int input) {
    int result = input * 51;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 6EwmG51h_ctx_t;

void init_ctx(6EwmG51h_ctx_t *ctx) {
    ctx->id = 9864;
    ctx->coefficient = 8.3;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} wWcLP46Z_ctx_t;

void init_ctx(wWcLP46Z_ctx_t *ctx) {
    ctx->id = 5892;
    ctx->coefficient = 8.5;
    ctx->flags = 4;
}

int compute_NmRfHXw(int input) {
    int result = input * 44;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} k4qoRxUN_ctx_t;

void init_ctx(k4qoRxUN_ctx_t *ctx) {
    ctx->id = 4490;
    ctx->coefficient = 1.0;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} x3KQkz9K_ctx_t;

void init_ctx(x3KQkz9K_ctx_t *ctx) {
    ctx->id = 9019;
    ctx->coefficient = 2.7;
    ctx->flags = 11;
}

int compute_pP3ynIU(int input) {
    int result = input * 35;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_OKULDUi(int input) {
    int result = input * 46;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} WwutYOge_ctx_t;

void init_ctx(WwutYOge_ctx_t *ctx) {
    ctx->id = 6473;
    ctx->coefficient = 8.2;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} xd8RVXht_ctx_t;

void init_ctx(xd8RVXht_ctx_t *ctx) {
    ctx->id = 1392;
    ctx->coefficient = 5.4;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} lFje5iIP_ctx_t;

void init_ctx(lFje5iIP_ctx_t *ctx) {
    ctx->id = 4174;
    ctx->coefficient = 2.5;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} RyHYKn0A_ctx_t;

void init_ctx(RyHYKn0A_ctx_t *ctx) {
    ctx->id = 4512;
    ctx->coefficient = 3.3;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} t48AczQz_ctx_t;

void init_ctx(t48AczQz_ctx_t *ctx) {
    ctx->id = 4309;
    ctx->coefficient = 9.1;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} GLvknU2g_ctx_t;

void init_ctx(GLvknU2g_ctx_t *ctx) {
    ctx->id = 3464;
    ctx->coefficient = 0.1;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 0eBpPiPJ_ctx_t;

void init_ctx(0eBpPiPJ_ctx_t *ctx) {
    ctx->id = 9316;
    ctx->coefficient = 4.5;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 9TKct2lt_ctx_t;

void init_ctx(9TKct2lt_ctx_t *ctx) {
    ctx->id = 3106;
    ctx->coefficient = 0.1;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} gCiIoSGc_ctx_t;

void init_ctx(gCiIoSGc_ctx_t *ctx) {
    ctx->id = 8400;
    ctx->coefficient = 9.6;
    ctx->flags = 245;
}

int compute_gaLXgQZ(int input) {
    int result = input * 37;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} XM5mn80l_ctx_t;

void init_ctx(XM5mn80l_ctx_t *ctx) {
    ctx->id = 9254;
    ctx->coefficient = 7.0;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} rf3njAnK_ctx_t;

void init_ctx(rf3njAnK_ctx_t *ctx) {
    ctx->id = 6202;
    ctx->coefficient = 7.2;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} UHiLXFLq_ctx_t;

void init_ctx(UHiLXFLq_ctx_t *ctx) {
    ctx->id = 4908;
    ctx->coefficient = 6.0;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} WcNMrFnw_ctx_t;

void init_ctx(WcNMrFnw_ctx_t *ctx) {
    ctx->id = 6439;
    ctx->coefficient = 5.1;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} U8AfbVAA_ctx_t;

void init_ctx(U8AfbVAA_ctx_t *ctx) {
    ctx->id = 9389;
    ctx->coefficient = 6.1;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} MHZYIN6m_ctx_t;

void init_ctx(MHZYIN6m_ctx_t *ctx) {
    ctx->id = 9507;
    ctx->coefficient = 1.1;
    ctx->flags = 53;
}

int compute_DtZWzgR(int input) {
    int result = input * 21;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} QjbaTe6a_ctx_t;

void init_ctx(QjbaTe6a_ctx_t *ctx) {
    ctx->id = 4698;
    ctx->coefficient = 2.1;
    ctx->flags = 127;
}

int compute_vQToNv0(int input) {
    int result = input * 28;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_Q6mhnDZ(int input) {
    int result = input * 43;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_DPL0sWX(int input) {
    int result = input * 61;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 0w7AA6K4_ctx_t;

void init_ctx(0w7AA6K4_ctx_t *ctx) {
    ctx->id = 8624;
    ctx->coefficient = 9.9;
    ctx->flags = 92;
}

int compute_YTOHZb9(int input) {
    int result = input * 58;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 2qti8Qpg_ctx_t;

void init_ctx(2qti8Qpg_ctx_t *ctx) {
    ctx->id = 9810;
    ctx->coefficient = 1.5;
    ctx->flags = 125;
}

int compute_ej48KR1(int input) {
    int result = input * 38;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} qXsWaBqh_ctx_t;

void init_ctx(qXsWaBqh_ctx_t *ctx) {
    ctx->id = 1684;
    ctx->coefficient = 8.5;
    ctx->flags = 193;
}

int compute_qrKqH2x(int input) {
    int result = input * 51;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} r2Xbbe18_ctx_t;

void init_ctx(r2Xbbe18_ctx_t *ctx) {
    ctx->id = 4032;
    ctx->coefficient = 1.9;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} R91DM6Mq_ctx_t;

void init_ctx(R91DM6Mq_ctx_t *ctx) {
    ctx->id = 1843;
    ctx->coefficient = 1.8;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} HEN7HXFU_ctx_t;

void init_ctx(HEN7HXFU_ctx_t *ctx) {
    ctx->id = 9477;
    ctx->coefficient = 1.5;
    ctx->flags = 203;
}

int compute_W1USJHW(int input) {
    int result = input * 2;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} y0JISSCY_ctx_t;

void init_ctx(y0JISSCY_ctx_t *ctx) {
    ctx->id = 5906;
    ctx->coefficient = 2.0;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} q79bWYIk_ctx_t;

void init_ctx(q79bWYIk_ctx_t *ctx) {
    ctx->id = 3403;
    ctx->coefficient = 1.5;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} kZVs8D5h_ctx_t;

void init_ctx(kZVs8D5h_ctx_t *ctx) {
    ctx->id = 6961;
    ctx->coefficient = 2.0;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 2pU9Z7NE_ctx_t;

void init_ctx(2pU9Z7NE_ctx_t *ctx) {
    ctx->id = 8070;
    ctx->coefficient = 0.4;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} NkFTjPUi_ctx_t;

void init_ctx(NkFTjPUi_ctx_t *ctx) {
    ctx->id = 1497;
    ctx->coefficient = 9.1;
    ctx->flags = 98;
}

int compute_PypFPZc(int input) {
    int result = input * 50;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_VnmMG8S(int input) {
    int result = input * 52;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_PEuQZiP(int input) {
    int result = input * 33;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} luYK07jC_ctx_t;

void init_ctx(luYK07jC_ctx_t *ctx) {
    ctx->id = 1669;
    ctx->coefficient = 3.5;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} LgMaLCjk_ctx_t;

void init_ctx(LgMaLCjk_ctx_t *ctx) {
    ctx->id = 6200;
    ctx->coefficient = 8.7;
    ctx->flags = 44;
}

int compute_U1i6pof(int input) {
    int result = input * 30;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_WDW0RSp(int input) {
    int result = input * 66;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} stcnYPgq_ctx_t;

void init_ctx(stcnYPgq_ctx_t *ctx) {
    ctx->id = 1820;
    ctx->coefficient = 2.2;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} PeyLTWgu_ctx_t;

void init_ctx(PeyLTWgu_ctx_t *ctx) {
    ctx->id = 9306;
    ctx->coefficient = 2.1;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 1g74u7SU_ctx_t;

void init_ctx(1g74u7SU_ctx_t *ctx) {
    ctx->id = 8447;
    ctx->coefficient = 8.6;
    ctx->flags = 227;
}

int compute_8zqCMN6(int input) {
    int result = input * 54;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} HvIIHRRG_ctx_t;

void init_ctx(HvIIHRRG_ctx_t *ctx) {
    ctx->id = 9112;
    ctx->coefficient = 5.9;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} k6ZMQR8i_ctx_t;

void init_ctx(k6ZMQR8i_ctx_t *ctx) {
    ctx->id = 3610;
    ctx->coefficient = 1.3;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 5QLmlNhn_ctx_t;

void init_ctx(5QLmlNhn_ctx_t *ctx) {
    ctx->id = 9003;
    ctx->coefficient = 9.2;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} MnC2CvuY_ctx_t;

void init_ctx(MnC2CvuY_ctx_t *ctx) {
    ctx->id = 9361;
    ctx->coefficient = 8.2;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 4zIwICv2_ctx_t;

void init_ctx(4zIwICv2_ctx_t *ctx) {
    ctx->id = 8914;
    ctx->coefficient = 1.3;
    ctx->flags = 197;
}

int compute_EvPUydc(int input) {
    int result = input * 26;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_PVE9tZG(int input) {
    int result = input * 59;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} rvfgauWf_ctx_t;

void init_ctx(rvfgauWf_ctx_t *ctx) {
    ctx->id = 9831;
    ctx->coefficient = 3.4;
    ctx->flags = 84;
}

int compute_1nXXx6y(int input) {
    int result = input * 27;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} WR0uX3bb_ctx_t;

void init_ctx(WR0uX3bb_ctx_t *ctx) {
    ctx->id = 7512;
    ctx->coefficient = 0.2;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 3GdHXmyx_ctx_t;

void init_ctx(3GdHXmyx_ctx_t *ctx) {
    ctx->id = 8927;
    ctx->coefficient = 3.3;
    ctx->flags = 159;
}

int compute_1Ftl0Yh(int input) {
    int result = input * 60;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} pIAo1JJO_ctx_t;

void init_ctx(pIAo1JJO_ctx_t *ctx) {
    ctx->id = 8988;
    ctx->coefficient = 5.7;
    ctx->flags = 154;
}

int compute_z6xY2im(int input) {
    int result = input * 6;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} bpD8c24U_ctx_t;

void init_ctx(bpD8c24U_ctx_t *ctx) {
    ctx->id = 9622;
    ctx->coefficient = 1.3;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} An76TgiZ_ctx_t;

void init_ctx(An76TgiZ_ctx_t *ctx) {
    ctx->id = 4824;
    ctx->coefficient = 3.0;
    ctx->flags = 32;
}

int compute_fvVZIfs(int input) {
    int result = input * 3;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_IaDgch8(int input) {
    int result = input * 66;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} ixbUtrIr_ctx_t;

void init_ctx(ixbUtrIr_ctx_t *ctx) {
    ctx->id = 6122;
    ctx->coefficient = 1.0;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} iImKNqux_ctx_t;

void init_ctx(iImKNqux_ctx_t *ctx) {
    ctx->id = 2202;
    ctx->coefficient = 7.2;
    ctx->flags = 235;
}

int compute_j6l5LdJ(int input) {
    int result = input * 16;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_KxFcbwG(int input) {
    int result = input * 39;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} UsC9QIGi_ctx_t;

void init_ctx(UsC9QIGi_ctx_t *ctx) {
    ctx->id = 2756;
    ctx->coefficient = 2.4;
    ctx->flags = 254;
}

int compute_liL9swQ(int input) {
    int result = input * 54;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_XUo1HTj(int input) {
    int result = input * 61;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 6OdXtzfY_ctx_t;

void init_ctx(6OdXtzfY_ctx_t *ctx) {
    ctx->id = 9284;
    ctx->coefficient = 8.2;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 7fFd5S3P_ctx_t;

void init_ctx(7fFd5S3P_ctx_t *ctx) {
    ctx->id = 2321;
    ctx->coefficient = 5.9;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} d9fMnEYB_ctx_t;

void init_ctx(d9fMnEYB_ctx_t *ctx) {
    ctx->id = 1424;
    ctx->coefficient = 0.5;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} vqrT1aHK_ctx_t;

void init_ctx(vqrT1aHK_ctx_t *ctx) {
    ctx->id = 5691;
    ctx->coefficient = 3.8;
    ctx->flags = 248;
}

int compute_AosBBPK(int input) {
    int result = input * 22;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_E334ppl(int input) {
    int result = input * 30;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_A08lSwX(int input) {
    int result = input * 19;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} X5unIrOT_ctx_t;

void init_ctx(X5unIrOT_ctx_t *ctx) {
    ctx->id = 2275;
    ctx->coefficient = 9.2;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} qzaBqA30_ctx_t;

void init_ctx(qzaBqA30_ctx_t *ctx) {
    ctx->id = 8452;
    ctx->coefficient = 3.2;
    ctx->flags = 252;
}

int compute_wXJwbAT(int input) {
    int result = input * 46;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} wM8n2dMf_ctx_t;

void init_ctx(wM8n2dMf_ctx_t *ctx) {
    ctx->id = 6719;
    ctx->coefficient = 8.0;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} VUByz5Bk_ctx_t;

void init_ctx(VUByz5Bk_ctx_t *ctx) {
    ctx->id = 2679;
    ctx->coefficient = 4.5;
    ctx->flags = 172;
}

int compute_cywQfgf(int input) {
    int result = input * 31;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} OitAlOup_ctx_t;

void init_ctx(OitAlOup_ctx_t *ctx) {
    ctx->id = 9916;
    ctx->coefficient = 0.5;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} pY5lTdrI_ctx_t;

void init_ctx(pY5lTdrI_ctx_t *ctx) {
    ctx->id = 4523;
    ctx->coefficient = 5.8;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} d1ECBBv3_ctx_t;

void init_ctx(d1ECBBv3_ctx_t *ctx) {
    ctx->id = 8116;
    ctx->coefficient = 6.8;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} GRUPdqH4_ctx_t;

void init_ctx(GRUPdqH4_ctx_t *ctx) {
    ctx->id = 8237;
    ctx->coefficient = 3.1;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} evk9XsCQ_ctx_t;

void init_ctx(evk9XsCQ_ctx_t *ctx) {
    ctx->id = 4414;
    ctx->coefficient = 7.7;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} Ucu28P7q_ctx_t;

void init_ctx(Ucu28P7q_ctx_t *ctx) {
    ctx->id = 4555;
    ctx->coefficient = 3.7;
    ctx->flags = 24;
}

int compute_nSJGZug(int input) {
    int result = input * 53;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} b8MbQxGw_ctx_t;

void init_ctx(b8MbQxGw_ctx_t *ctx) {
    ctx->id = 7049;
    ctx->coefficient = 9.5;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} pBdQkPk1_ctx_t;

void init_ctx(pBdQkPk1_ctx_t *ctx) {
    ctx->id = 1544;
    ctx->coefficient = 7.0;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} e4aLLwvs_ctx_t;

void init_ctx(e4aLLwvs_ctx_t *ctx) {
    ctx->id = 1108;
    ctx->coefficient = 3.8;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} BeKO1yDO_ctx_t;

void init_ctx(BeKO1yDO_ctx_t *ctx) {
    ctx->id = 8144;
    ctx->coefficient = 2.7;
    ctx->flags = 86;
}

int compute_UDletYZ(int input) {
    int result = input * 61;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Xo2AXUyO_ctx_t;

void init_ctx(Xo2AXUyO_ctx_t *ctx) {
    ctx->id = 4204;
    ctx->coefficient = 9.7;
    ctx->flags = 186;
}

int compute_wq2oLzN(int input) {
    int result = input * 63;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} dy6KCiuV_ctx_t;

void init_ctx(dy6KCiuV_ctx_t *ctx) {
    ctx->id = 6984;
    ctx->coefficient = 0.8;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} FpRqIcUD_ctx_t;

void init_ctx(FpRqIcUD_ctx_t *ctx) {
    ctx->id = 2352;
    ctx->coefficient = 6.9;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} DM49Kowa_ctx_t;

void init_ctx(DM49Kowa_ctx_t *ctx) {
    ctx->id = 8864;
    ctx->coefficient = 8.6;
    ctx->flags = 219;
}

int compute_HvF3RCm(int input) {
    int result = input * 34;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} BYhgYP0h_ctx_t;

void init_ctx(BYhgYP0h_ctx_t *ctx) {
    ctx->id = 3353;
    ctx->coefficient = 4.8;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} cKXfgCbj_ctx_t;

void init_ctx(cKXfgCbj_ctx_t *ctx) {
    ctx->id = 2919;
    ctx->coefficient = 1.3;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} AFIkdPbi_ctx_t;

void init_ctx(AFIkdPbi_ctx_t *ctx) {
    ctx->id = 9713;
    ctx->coefficient = 10.0;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} Ax10fOc9_ctx_t;

void init_ctx(Ax10fOc9_ctx_t *ctx) {
    ctx->id = 3610;
    ctx->coefficient = 1.8;
    ctx->flags = 117;
}

int compute_tNnCiIs(int input) {
    int result = input * 40;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} JSQvy1a0_ctx_t;

void init_ctx(JSQvy1a0_ctx_t *ctx) {
    ctx->id = 4094;
    ctx->coefficient = 0.9;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} WhU89xdP_ctx_t;

void init_ctx(WhU89xdP_ctx_t *ctx) {
    ctx->id = 8701;
    ctx->coefficient = 6.2;
    ctx->flags = 131;
}

int compute_ummvfTw(int input) {
    int result = input * 30;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} TwAyiEmT_ctx_t;

void init_ctx(TwAyiEmT_ctx_t *ctx) {
    ctx->id = 5790;
    ctx->coefficient = 0.7;
    ctx->flags = 228;
}

int compute_Q9XV7Ps(int input) {
    int result = input * 41;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} ks20kR0t_ctx_t;

void init_ctx(ks20kR0t_ctx_t *ctx) {
    ctx->id = 7965;
    ctx->coefficient = 6.6;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} rgRlC8V5_ctx_t;

void init_ctx(rgRlC8V5_ctx_t *ctx) {
    ctx->id = 7387;
    ctx->coefficient = 1.3;
    ctx->flags = 71;
}

int compute_sAj4QIV(int input) {
    int result = input * 58;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_mAK9Cw0(int input) {
    int result = input * 63;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 6MUaLeBv_ctx_t;

void init_ctx(6MUaLeBv_ctx_t *ctx) {
    ctx->id = 3263;
    ctx->coefficient = 1.9;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} KVjZHPpb_ctx_t;

void init_ctx(KVjZHPpb_ctx_t *ctx) {
    ctx->id = 4161;
    ctx->coefficient = 0.9;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} pzm7q6eA_ctx_t;

void init_ctx(pzm7q6eA_ctx_t *ctx) {
    ctx->id = 3872;
    ctx->coefficient = 1.8;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Mi4zOeNm_ctx_t;

void init_ctx(Mi4zOeNm_ctx_t *ctx) {
    ctx->id = 3076;
    ctx->coefficient = 7.0;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} EH2cPEic_ctx_t;

void init_ctx(EH2cPEic_ctx_t *ctx) {
    ctx->id = 3280;
    ctx->coefficient = 1.8;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} oTAs03lt_ctx_t;

void init_ctx(oTAs03lt_ctx_t *ctx) {
    ctx->id = 6449;
    ctx->coefficient = 10.0;
    ctx->flags = 63;
}

int compute_MKLH8kf(int input) {
    int result = input * 47;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_QZVk0i2(int input) {
    int result = input * 53;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 9ouKF3sW_ctx_t;

void init_ctx(9ouKF3sW_ctx_t *ctx) {
    ctx->id = 6643;
    ctx->coefficient = 1.0;
    ctx->flags = 107;
}

int compute_FsS5zXY(int input) {
    int result = input * 63;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_yzqqzUh(int input) {
    int result = input * 68;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} OroxSOpP_ctx_t;

void init_ctx(OroxSOpP_ctx_t *ctx) {
    ctx->id = 6363;
    ctx->coefficient = 1.9;
    ctx->flags = 223;
}

int compute_FA2robz(int input) {
    int result = input * 41;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} CNk01Kiz_ctx_t;

void init_ctx(CNk01Kiz_ctx_t *ctx) {
    ctx->id = 1794;
    ctx->coefficient = 2.0;
    ctx->flags = 207;
}

int compute_V91fR74(int input) {
    int result = input * 19;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_zp9aAcs(int input) {
    int result = input * 50;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_ISvjFXi(int input) {
    int result = input * 57;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} iIE3dbr8_ctx_t;

void init_ctx(iIE3dbr8_ctx_t *ctx) {
    ctx->id = 7036;
    ctx->coefficient = 9.3;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} lO1AVPmE_ctx_t;

void init_ctx(lO1AVPmE_ctx_t *ctx) {
    ctx->id = 9798;
    ctx->coefficient = 4.5;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} wQ5wuSx6_ctx_t;

void init_ctx(wQ5wuSx6_ctx_t *ctx) {
    ctx->id = 3417;
    ctx->coefficient = 4.5;
    ctx->flags = 211;
}

int compute_iCXdzz0(int input) {
    int result = input * 41;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 5RYOCx2U_ctx_t;

void init_ctx(5RYOCx2U_ctx_t *ctx) {
    ctx->id = 6595;
    ctx->coefficient = 5.0;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 8VgrqQA7_ctx_t;

void init_ctx(8VgrqQA7_ctx_t *ctx) {
    ctx->id = 4668;
    ctx->coefficient = 5.3;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} APDlF6R5_ctx_t;

void init_ctx(APDlF6R5_ctx_t *ctx) {
    ctx->id = 8516;
    ctx->coefficient = 6.6;
    ctx->flags = 157;
}

int compute_6ItKtv4(int input) {
    int result = input * 58;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_T7ADYFT(int input) {
    int result = input * 40;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_Q2bxD3y(int input) {
    int result = input * 39;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} FWSWlqNs_ctx_t;

void init_ctx(FWSWlqNs_ctx_t *ctx) {
    ctx->id = 4666;
    ctx->coefficient = 6.7;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} Z96xjE74_ctx_t;

void init_ctx(Z96xjE74_ctx_t *ctx) {
    ctx->id = 8156;
    ctx->coefficient = 0.1;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} oSnCNAE5_ctx_t;

void init_ctx(oSnCNAE5_ctx_t *ctx) {
    ctx->id = 3581;
    ctx->coefficient = 5.1;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} tHLUX1XQ_ctx_t;

void init_ctx(tHLUX1XQ_ctx_t *ctx) {
    ctx->id = 9871;
    ctx->coefficient = 2.5;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} MiCHLXPJ_ctx_t;

void init_ctx(MiCHLXPJ_ctx_t *ctx) {
    ctx->id = 8976;
    ctx->coefficient = 5.7;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} TnrtdMq8_ctx_t;

void init_ctx(TnrtdMq8_ctx_t *ctx) {
    ctx->id = 4893;
    ctx->coefficient = 4.3;
    ctx->flags = 20;
}

int compute_whbWQI1(int input) {
    int result = input * 58;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_tiMph2t(int input) {
    int result = input * 14;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} HNXATapb_ctx_t;

void init_ctx(HNXATapb_ctx_t *ctx) {
    ctx->id = 3079;
    ctx->coefficient = 6.3;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} nRFGzdTo_ctx_t;

void init_ctx(nRFGzdTo_ctx_t *ctx) {
    ctx->id = 7648;
    ctx->coefficient = 0.2;
    ctx->flags = 20;
}

int compute_f43wgrD(int input) {
    int result = input * 51;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 7UCWDlwK_ctx_t;

void init_ctx(7UCWDlwK_ctx_t *ctx) {
    ctx->id = 6692;
    ctx->coefficient = 1.9;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} uO7NZ6X9_ctx_t;

void init_ctx(uO7NZ6X9_ctx_t *ctx) {
    ctx->id = 2269;
    ctx->coefficient = 4.4;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 49d5BG2Z_ctx_t;

void init_ctx(49d5BG2Z_ctx_t *ctx) {
    ctx->id = 1295;
    ctx->coefficient = 7.0;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} NBNVaNhh_ctx_t;

void init_ctx(NBNVaNhh_ctx_t *ctx) {
    ctx->id = 8330;
    ctx->coefficient = 2.5;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} E7mCR9J9_ctx_t;

void init_ctx(E7mCR9J9_ctx_t *ctx) {
    ctx->id = 2378;
    ctx->coefficient = 8.6;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} aWLndFP1_ctx_t;

void init_ctx(aWLndFP1_ctx_t *ctx) {
    ctx->id = 1601;
    ctx->coefficient = 6.1;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} ak3UXCNM_ctx_t;

void init_ctx(ak3UXCNM_ctx_t *ctx) {
    ctx->id = 5165;
    ctx->coefficient = 2.8;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} XJ57EiOb_ctx_t;

void init_ctx(XJ57EiOb_ctx_t *ctx) {
    ctx->id = 1579;
    ctx->coefficient = 0.9;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} sGdo5yxI_ctx_t;

void init_ctx(sGdo5yxI_ctx_t *ctx) {
    ctx->id = 3053;
    ctx->coefficient = 4.3;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} DmC4uUTg_ctx_t;

void init_ctx(DmC4uUTg_ctx_t *ctx) {
    ctx->id = 8992;
    ctx->coefficient = 5.3;
    ctx->flags = 34;
}

int compute_tyLNy9J(int input) {
    int result = input * 34;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} OI5zcr3H_ctx_t;

void init_ctx(OI5zcr3H_ctx_t *ctx) {
    ctx->id = 1727;
    ctx->coefficient = 8.3;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} MHGiIjy1_ctx_t;

void init_ctx(MHGiIjy1_ctx_t *ctx) {
    ctx->id = 8530;
    ctx->coefficient = 0.3;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} RQGV75si_ctx_t;

void init_ctx(RQGV75si_ctx_t *ctx) {
    ctx->id = 2342;
    ctx->coefficient = 2.9;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 3fQ6Hzoj_ctx_t;

void init_ctx(3fQ6Hzoj_ctx_t *ctx) {
    ctx->id = 6545;
    ctx->coefficient = 7.9;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} gjg3GrfH_ctx_t;

void init_ctx(gjg3GrfH_ctx_t *ctx) {
    ctx->id = 2765;
    ctx->coefficient = 4.8;
    ctx->flags = 19;
}

int compute_IYTMQhG(int input) {
    int result = input * 44;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} o3CI5hmo_ctx_t;

void init_ctx(o3CI5hmo_ctx_t *ctx) {
    ctx->id = 8130;
    ctx->coefficient = 8.0;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} oIUnlS9m_ctx_t;

void init_ctx(oIUnlS9m_ctx_t *ctx) {
    ctx->id = 8508;
    ctx->coefficient = 2.9;
    ctx->flags = 1;
}

int compute_8ZvfbRH(int input) {
    int result = input * 30;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} WoI6wwJP_ctx_t;

void init_ctx(WoI6wwJP_ctx_t *ctx) {
    ctx->id = 2055;
    ctx->coefficient = 3.7;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} ctARtARx_ctx_t;

void init_ctx(ctARtARx_ctx_t *ctx) {
    ctx->id = 5839;
    ctx->coefficient = 2.5;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} sG5jWNA8_ctx_t;

void init_ctx(sG5jWNA8_ctx_t *ctx) {
    ctx->id = 4920;
    ctx->coefficient = 2.6;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} Tp4WCA2J_ctx_t;

void init_ctx(Tp4WCA2J_ctx_t *ctx) {
    ctx->id = 9356;
    ctx->coefficient = 7.2;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} gejfdZIQ_ctx_t;

void init_ctx(gejfdZIQ_ctx_t *ctx) {
    ctx->id = 2858;
    ctx->coefficient = 3.1;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} xzIEZnYe_ctx_t;

void init_ctx(xzIEZnYe_ctx_t *ctx) {
    ctx->id = 3435;
    ctx->coefficient = 9.0;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} bONkQIsy_ctx_t;

void init_ctx(bONkQIsy_ctx_t *ctx) {
    ctx->id = 9099;
    ctx->coefficient = 8.6;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 7ACor0dD_ctx_t;

void init_ctx(7ACor0dD_ctx_t *ctx) {
    ctx->id = 1735;
    ctx->coefficient = 2.1;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} hNSdeBCF_ctx_t;

void init_ctx(hNSdeBCF_ctx_t *ctx) {
    ctx->id = 7525;
    ctx->coefficient = 9.0;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} G4EzqSCk_ctx_t;

void init_ctx(G4EzqSCk_ctx_t *ctx) {
    ctx->id = 8977;
    ctx->coefficient = 6.0;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} yYtgfO5q_ctx_t;

void init_ctx(yYtgfO5q_ctx_t *ctx) {
    ctx->id = 4833;
    ctx->coefficient = 1.7;
    ctx->flags = 205;
}

int compute_Ek7dWtA(int input) {
    int result = input * 8;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} a5lLZRW0_ctx_t;

void init_ctx(a5lLZRW0_ctx_t *ctx) {
    ctx->id = 4169;
    ctx->coefficient = 2.8;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} S1b5OoEY_ctx_t;

void init_ctx(S1b5OoEY_ctx_t *ctx) {
    ctx->id = 9593;
    ctx->coefficient = 5.7;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} BbCV8brH_ctx_t;

void init_ctx(BbCV8brH_ctx_t *ctx) {
    ctx->id = 4817;
    ctx->coefficient = 4.1;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 65XYJx9U_ctx_t;

void init_ctx(65XYJx9U_ctx_t *ctx) {
    ctx->id = 1708;
    ctx->coefficient = 2.7;
    ctx->flags = 110;
}

int compute_jqN5qKm(int input) {
    int result = input * 47;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} ELu8qfIw_ctx_t;

void init_ctx(ELu8qfIw_ctx_t *ctx) {
    ctx->id = 4253;
    ctx->coefficient = 1.9;
    ctx->flags = 78;
}

int compute_2el5XCY(int input) {
    int result = input * 13;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 022PCHOr_ctx_t;

void init_ctx(022PCHOr_ctx_t *ctx) {
    ctx->id = 4335;
    ctx->coefficient = 9.8;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 9a6poeKI_ctx_t;

void init_ctx(9a6poeKI_ctx_t *ctx) {
    ctx->id = 2698;
    ctx->coefficient = 9.9;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} VZ6BGp1n_ctx_t;

void init_ctx(VZ6BGp1n_ctx_t *ctx) {
    ctx->id = 7821;
    ctx->coefficient = 1.9;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} lBRoiATY_ctx_t;

void init_ctx(lBRoiATY_ctx_t *ctx) {
    ctx->id = 8092;
    ctx->coefficient = 9.0;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} qPD5ubQj_ctx_t;

void init_ctx(qPD5ubQj_ctx_t *ctx) {
    ctx->id = 1977;
    ctx->coefficient = 6.7;
    ctx->flags = 39;
}

int compute_YdgvSLa(int input) {
    int result = input * 17;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} YIDOF8ZR_ctx_t;

void init_ctx(YIDOF8ZR_ctx_t *ctx) {
    ctx->id = 4754;
    ctx->coefficient = 0.4;
    ctx->flags = 229;
}

int compute_vr5SGth(int input) {
    int result = input * 20;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} hBINW2Mx_ctx_t;

void init_ctx(hBINW2Mx_ctx_t *ctx) {
    ctx->id = 4023;
    ctx->coefficient = 1.1;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} gPO6Nwot_ctx_t;

void init_ctx(gPO6Nwot_ctx_t *ctx) {
    ctx->id = 2244;
    ctx->coefficient = 2.7;
    ctx->flags = 252;
}

int compute_I287sB5(int input) {
    int result = input * 37;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 3ST0rvK1_ctx_t;

void init_ctx(3ST0rvK1_ctx_t *ctx) {
    ctx->id = 6964;
    ctx->coefficient = 2.6;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} YjWdwTOG_ctx_t;

void init_ctx(YjWdwTOG_ctx_t *ctx) {
    ctx->id = 3869;
    ctx->coefficient = 1.0;
    ctx->flags = 52;
}

int compute_4vKbthY(int input) {
    int result = input * 40;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} rPAe7SVt_ctx_t;

void init_ctx(rPAe7SVt_ctx_t *ctx) {
    ctx->id = 2383;
    ctx->coefficient = 7.4;
    ctx->flags = 141;
}

int compute_mmK3DEL(int input) {
    int result = input * 30;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} siyGpAGn_ctx_t;

void init_ctx(siyGpAGn_ctx_t *ctx) {
    ctx->id = 5888;
    ctx->coefficient = 5.0;
    ctx->flags = 152;
}

int compute_2FUbROj(int input) {
    int result = input * 20;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_WXo7n8x(int input) {
    int result = input * 38;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} ZHAr9YVK_ctx_t;

void init_ctx(ZHAr9YVK_ctx_t *ctx) {
    ctx->id = 8984;
    ctx->coefficient = 3.8;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} I6mdx5Nk_ctx_t;

void init_ctx(I6mdx5Nk_ctx_t *ctx) {
    ctx->id = 4949;
    ctx->coefficient = 0.4;
    ctx->flags = 209;
}

int compute_dspFg1D(int input) {
    int result = input * 59;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 3EIhXhgf_ctx_t;

void init_ctx(3EIhXhgf_ctx_t *ctx) {
    ctx->id = 9767;
    ctx->coefficient = 4.1;
    ctx->flags = 116;
}

int compute_4tCmq3S(int input) {
    int result = input * 4;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} bbbLlnbg_ctx_t;

void init_ctx(bbbLlnbg_ctx_t *ctx) {
    ctx->id = 9181;
    ctx->coefficient = 1.1;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} mUISZOFY_ctx_t;

void init_ctx(mUISZOFY_ctx_t *ctx) {
    ctx->id = 2291;
    ctx->coefficient = 5.0;
    ctx->flags = 249;
}

int compute_4HBZJpH(int input) {
    int result = input * 4;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_wikXtFt(int input) {
    int result = input * 24;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_Kf95mB9(int input) {
    int result = input * 67;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} apCNV8s5_ctx_t;

void init_ctx(apCNV8s5_ctx_t *ctx) {
    ctx->id = 5484;
    ctx->coefficient = 4.1;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} GgfeIvbV_ctx_t;

void init_ctx(GgfeIvbV_ctx_t *ctx) {
    ctx->id = 7439;
    ctx->coefficient = 9.4;
    ctx->flags = 225;
}

int compute_IipCCkg(int input) {
    int result = input * 13;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 0S1OWFKl_ctx_t;

void init_ctx(0S1OWFKl_ctx_t *ctx) {
    ctx->id = 2872;
    ctx->coefficient = 1.8;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} rSYAkzJW_ctx_t;

void init_ctx(rSYAkzJW_ctx_t *ctx) {
    ctx->id = 7401;
    ctx->coefficient = 9.1;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} WjFxT8rD_ctx_t;

void init_ctx(WjFxT8rD_ctx_t *ctx) {
    ctx->id = 8773;
    ctx->coefficient = 8.2;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} sD9JafWh_ctx_t;

void init_ctx(sD9JafWh_ctx_t *ctx) {
    ctx->id = 2862;
    ctx->coefficient = 7.8;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} gz6NGGLA_ctx_t;

void init_ctx(gz6NGGLA_ctx_t *ctx) {
    ctx->id = 3516;
    ctx->coefficient = 4.8;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 6Gzw5xOF_ctx_t;

void init_ctx(6Gzw5xOF_ctx_t *ctx) {
    ctx->id = 2214;
    ctx->coefficient = 5.3;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} XNJUeiVO_ctx_t;

void init_ctx(XNJUeiVO_ctx_t *ctx) {
    ctx->id = 7094;
    ctx->coefficient = 5.5;
    ctx->flags = 5;
}

int compute_xYjUqD9(int input) {
    int result = input * 24;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 3a4iHUO2_ctx_t;

void init_ctx(3a4iHUO2_ctx_t *ctx) {
    ctx->id = 3317;
    ctx->coefficient = 9.3;
    ctx->flags = 129;
}

int compute_IcRuJfE(int input) {
    int result = input * 12;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_lfewa69(int input) {
    int result = input * 36;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} o81mLXpj_ctx_t;

void init_ctx(o81mLXpj_ctx_t *ctx) {
    ctx->id = 4961;
    ctx->coefficient = 1.7;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} EWV5PH4X_ctx_t;

void init_ctx(EWV5PH4X_ctx_t *ctx) {
    ctx->id = 3708;
    ctx->coefficient = 2.0;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} Tm3H1hAK_ctx_t;

void init_ctx(Tm3H1hAK_ctx_t *ctx) {
    ctx->id = 4409;
    ctx->coefficient = 9.3;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} NKdRqTxw_ctx_t;

void init_ctx(NKdRqTxw_ctx_t *ctx) {
    ctx->id = 6307;
    ctx->coefficient = 7.6;
    ctx->flags = 194;
}

int compute_LXimXtK(int input) {
    int result = input * 26;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} VzGTI3D8_ctx_t;

void init_ctx(VzGTI3D8_ctx_t *ctx) {
    ctx->id = 2522;
    ctx->coefficient = 9.0;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} B7qighnh_ctx_t;

void init_ctx(B7qighnh_ctx_t *ctx) {
    ctx->id = 3241;
    ctx->coefficient = 1.2;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} yPxIPlbn_ctx_t;

void init_ctx(yPxIPlbn_ctx_t *ctx) {
    ctx->id = 3647;
    ctx->coefficient = 10.0;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 0z1vmG9Q_ctx_t;

void init_ctx(0z1vmG9Q_ctx_t *ctx) {
    ctx->id = 5575;
    ctx->coefficient = 3.7;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} TvsFEtTB_ctx_t;

void init_ctx(TvsFEtTB_ctx_t *ctx) {
    ctx->id = 7191;
    ctx->coefficient = 9.8;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} q2BFCQcT_ctx_t;

void init_ctx(q2BFCQcT_ctx_t *ctx) {
    ctx->id = 7327;
    ctx->coefficient = 5.9;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} aG23DQMZ_ctx_t;

void init_ctx(aG23DQMZ_ctx_t *ctx) {
    ctx->id = 8574;
    ctx->coefficient = 3.5;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} KGL82SIA_ctx_t;

void init_ctx(KGL82SIA_ctx_t *ctx) {
    ctx->id = 3671;
    ctx->coefficient = 7.8;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} SA1xvtjV_ctx_t;

void init_ctx(SA1xvtjV_ctx_t *ctx) {
    ctx->id = 4514;
    ctx->coefficient = 6.3;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} SD3E8B1P_ctx_t;

void init_ctx(SD3E8B1P_ctx_t *ctx) {
    ctx->id = 9216;
    ctx->coefficient = 8.8;
    ctx->flags = 209;
}

