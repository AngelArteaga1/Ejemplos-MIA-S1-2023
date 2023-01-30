#include "./color.cpp"

typedef struct{
    int width;
    int height;
}Resolution;

Resolution getResolucionInvaders(){
    Resolution size;
    size.width = 11;
    size.height = 8;
    return size;
}
Color * getSpaceInvaders(){
    //Creamos la imagen
    Resolution size = getResolucionInvaders();
    Color * imagen = new Color[size.width * size.height];
    
    //Primera fila
    imagen[0] = getColor(255, 255, 255);
    imagen[1] = getColor(255, 255, 255);
    imagen[2] = getColor(0, 0, 0);
    imagen[3] = getColor(255, 255, 255);
    imagen[4] = getColor(255, 255, 255);
    imagen[5] = getColor(255, 255, 255);
    imagen[6] = getColor(255, 255, 255);
    imagen[7] = getColor(255, 255, 255);
    imagen[8] = getColor(0, 0, 0);
    imagen[9] = getColor(255, 255, 255);
    imagen[10] = getColor(255, 255, 255);
    
    //Segunda fila
    imagen[11] = getColor(255, 255, 255);
    imagen[12] = getColor(255, 255, 255);
    imagen[13] = getColor(255, 255, 255);
    imagen[14] = getColor(0, 0, 0);
    imagen[15] = getColor(255, 255, 255);
    imagen[16] = getColor(255, 255, 255);
    imagen[17] = getColor(255, 255, 255);
    imagen[18] = getColor(0, 0, 0);
    imagen[19] = getColor(255, 255, 255);
    imagen[20] = getColor(255, 255, 255);
    imagen[21] = getColor(255, 255, 255);

    //Tercera fila
    imagen[22] = getColor(255, 255, 255);
    imagen[23] = getColor(255, 255, 255);
    imagen[24] = getColor(0, 0, 0);
    imagen[25] = getColor(0, 0, 0);
    imagen[26] = getColor(0, 0, 0);
    imagen[27] = getColor(0, 0, 0);
    imagen[28] = getColor(0, 0, 0);
    imagen[29] = getColor(0, 0, 0);
    imagen[30] = getColor(0, 0, 0);
    imagen[31] = getColor(255, 255, 255);
    imagen[32] = getColor(255, 255, 255);

    //Cuarta fila
    imagen[33] = getColor(255, 255, 255);
    imagen[34] = getColor(0, 0, 0);
    imagen[35] = getColor(0, 0, 0);
    imagen[36] = getColor(255, 255, 255);
    imagen[37] = getColor(0, 0, 0);
    imagen[38] = getColor(0, 0, 0);
    imagen[39] = getColor(0, 0, 0);
    imagen[40] = getColor(255, 255, 255);
    imagen[41] = getColor(0, 0, 0);
    imagen[42] = getColor(0, 0, 0);
    imagen[43] = getColor(255, 255, 255);

    //Quinta fila
    imagen[44] = getColor(0, 0, 0);
    imagen[45] = getColor(0, 0, 0);
    imagen[46] = getColor(0, 0, 0);
    imagen[47] = getColor(0, 0, 0);
    imagen[48] = getColor(0, 0, 0);
    imagen[49] = getColor(0, 0, 0);
    imagen[50] = getColor(0, 0, 0);
    imagen[51] = getColor(0, 0, 0);
    imagen[52] = getColor(0, 0, 0);
    imagen[53] = getColor(0, 0, 0);
    imagen[54] = getColor(0, 0, 0);

    //Sexta fila
    imagen[55] = getColor(0, 0, 0);
    imagen[56] = getColor(255, 255, 255);
    imagen[57] = getColor(0, 0, 0);
    imagen[58] = getColor(0, 0, 0);
    imagen[59] = getColor(0, 0, 0);
    imagen[60] = getColor(0, 0, 0);
    imagen[61] = getColor(0, 0, 0);
    imagen[62] = getColor(0, 0, 0);
    imagen[63] = getColor(0, 0, 0);
    imagen[64] = getColor(255, 255, 255);
    imagen[65] = getColor(0, 0, 0);

    //Septima fila
    imagen[66] = getColor(0, 0, 0);
    imagen[67] = getColor(255, 255, 255);
    imagen[68] = getColor(0, 0, 0);
    imagen[69] = getColor(255, 255, 255);
    imagen[70] = getColor(255, 255, 255);
    imagen[71] = getColor(255, 255, 255);
    imagen[72] = getColor(255, 255, 255);
    imagen[73] = getColor(255, 255, 255);
    imagen[74] = getColor(0, 0, 0);
    imagen[75] = getColor(255, 255, 255);
    imagen[76] = getColor(0, 0, 0);

    //Octava fila
    imagen[77] = getColor(255, 255, 255);
    imagen[78] = getColor(255, 255, 255);
    imagen[79] = getColor(255, 255, 255);
    imagen[80] = getColor(0, 0, 0);
    imagen[81] = getColor(0, 0, 0);
    imagen[82] = getColor(255, 255, 255);
    imagen[83] = getColor(0, 0, 0);
    imagen[84] = getColor(0, 0, 0);
    imagen[85] = getColor(255, 255, 255);
    imagen[86] = getColor(255, 255, 255);
    imagen[87] = getColor(255, 255, 255);
    return imagen;
}

Resolution getResolucionMarioBros(){
    Resolution size;
    size.width = 12;
    size.height = 16;
    return size;
}
Color * getMarioBros(){
    //Creamos la imagen
    Resolution size = getResolucionMarioBros();
    Color * imagen = new Color[size.width * size.height];
    
    //Primera fila
    imagen[0] = getColor(255, 255, 255);
    imagen[1] = getColor(255, 255, 255);
    imagen[2] = getColor(255, 255, 255);
    imagen[3] = getColor(255, 0, 0);
    imagen[4] = getColor(255, 0, 0);
    imagen[5] = getColor(255, 0, 0);
    imagen[6] = getColor(255, 0, 0);
    imagen[7] = getColor(255, 0, 0);
    imagen[8] = getColor(255, 255, 255);
    imagen[9] = getColor(255, 255, 255);
    imagen[10] = getColor(255, 255, 255);
    imagen[11] = getColor(255, 255, 255);

    //Segunda fila
    imagen[12] = getColor(255, 255, 255);
    imagen[13] = getColor(255, 255, 255);
    imagen[14] = getColor(255, 0, 0);
    imagen[15] = getColor(255, 0, 0);
    imagen[16] = getColor(255, 0, 0);
    imagen[17] = getColor(255, 0, 0);
    imagen[18] = getColor(255, 0, 0);
    imagen[19] = getColor(255, 0, 0);
    imagen[20] = getColor(255, 0, 0);
    imagen[21] = getColor(255, 0, 0);
    imagen[22] = getColor(255, 0, 0);
    imagen[23] = getColor(255, 255, 255);


    //Tercera fila
    imagen[24] = getColor(255, 255, 255);
    imagen[25] = getColor(255, 255, 255);
    imagen[26] = getColor(143, 70, 1);
    imagen[27] = getColor(143, 70, 1);
    imagen[28] = getColor(143, 70, 1);
    imagen[29] = getColor(252, 193, 87);
    imagen[30] = getColor(252, 193, 87);
    imagen[31] = getColor(143, 70, 1);
    imagen[32] = getColor(252, 193, 87);
    imagen[33] = getColor(255, 255, 255);
    imagen[34] = getColor(255, 255, 255);
    imagen[35] = getColor(255, 255, 255);

    //Cuarta fila
    imagen[36] = getColor(255, 255, 255);
    imagen[37] = getColor(143, 70, 1);
    imagen[38] = getColor(252, 193, 87);
    imagen[39] = getColor(143, 70, 1);
    imagen[40] = getColor(252, 193, 87);
    imagen[41] = getColor(252, 193, 87);
    imagen[42] = getColor(252, 193, 87);
    imagen[43] = getColor(143, 70, 1);
    imagen[44] = getColor(252, 193, 87);
    imagen[45] = getColor(252, 193, 87);
    imagen[46] = getColor(252, 193, 87);
    imagen[47] = getColor(255, 255, 255);

    //Quinta fila
    imagen[48] = getColor(255, 255, 255);
    imagen[49] = getColor(143, 70, 1);
    imagen[50] = getColor(252, 193, 87);
    imagen[51] = getColor(143, 70, 1);
    imagen[52] = getColor(143, 70, 1);
    imagen[53] = getColor(252, 193, 87);
    imagen[54] = getColor(252, 193, 87);
    imagen[55] = getColor(252, 193, 87);
    imagen[56] = getColor(143, 70, 1);
    imagen[57] = getColor(252, 193, 87);
    imagen[58] = getColor(252, 193, 87);
    imagen[59] = getColor(252, 193, 87);

    //Sexta fila
    imagen[60] = getColor(255, 255, 255);
    imagen[61] = getColor(143, 70, 1);
    imagen[62] = getColor(143, 70, 1);
    imagen[63] = getColor(252, 193, 87);
    imagen[64] = getColor(252, 193, 87);
    imagen[65] = getColor(252, 193, 87);
    imagen[66] = getColor(252, 193, 87);
    imagen[67] = getColor(143, 70, 1);
    imagen[68] = getColor(143, 70, 1);
    imagen[69] = getColor(143, 70, 1);
    imagen[70] = getColor(143, 70, 1);
    imagen[71] = getColor(255, 255, 255);

    //Septima fila
    imagen[72] = getColor(255, 255, 255);
    imagen[73] = getColor(255, 255, 255);
    imagen[74] = getColor(255, 255, 255);
    imagen[75] = getColor(252, 193, 87);
    imagen[76] = getColor(252, 193, 87);
    imagen[77] = getColor(252, 193, 87);
    imagen[78] = getColor(252, 193, 87);
    imagen[79] = getColor(252, 193, 87);
    imagen[80] = getColor(252, 193, 87);
    imagen[81] = getColor(252, 193, 87);
    imagen[82] = getColor(255, 255, 255);
    imagen[83] = getColor(255, 255, 255);

    //Octava fila
    imagen[84] = getColor(255, 255, 255);
    imagen[85] = getColor(255, 255, 255);
    imagen[86] = getColor(143, 70, 1);
    imagen[87] = getColor(143, 70, 1);
    imagen[88] = getColor(255, 0, 0);
    imagen[89] = getColor(143, 70, 1);
    imagen[90] = getColor(143, 70, 1);
    imagen[91] = getColor(143, 70, 1);
    imagen[92] = getColor(255, 255, 255);
    imagen[93] = getColor(255, 255, 255);
    imagen[94] = getColor(255, 255, 255);
    imagen[95] = getColor(255, 255, 255);

    //Novena fila
    imagen[96] = getColor(255, 255, 255);
    imagen[97] = getColor(143, 70, 1);
    imagen[98] = getColor(143, 70, 1);
    imagen[99] = getColor(143, 70, 1);
    imagen[100] = getColor(255, 0, 0);
    imagen[101] = getColor(143, 70, 1);
    imagen[102] = getColor(143, 70, 1);
    imagen[103] = getColor(255, 0, 0);
    imagen[104] = getColor(143, 70, 1);
    imagen[105] = getColor(143, 70, 1);
    imagen[106] = getColor(143, 70, 1);
    imagen[107] = getColor(255, 255, 255);

    //Decima fila
    imagen[108] = getColor(143, 70, 1);
    imagen[109] = getColor(143, 70, 1);
    imagen[110] = getColor(143, 70, 1);
    imagen[111] = getColor(143, 70, 1);
    imagen[112] = getColor(255, 0, 0);
    imagen[113] = getColor(255, 0, 0);
    imagen[114] = getColor(255, 0, 0);
    imagen[115] = getColor(255, 0, 0);
    imagen[116] = getColor(143, 70, 1);
    imagen[117] = getColor(143, 70, 1);
    imagen[118] = getColor(143, 70, 1);
    imagen[119] = getColor(143, 70, 1);

    //Onceava fila
    imagen[120] = getColor(252, 193, 87);
    imagen[121] = getColor(252, 193, 87);
    imagen[122] = getColor(143, 70, 1);
    imagen[123] = getColor(255, 0, 0);
    imagen[124] = getColor(252, 193, 87);
    imagen[125] = getColor(255, 0, 0);
    imagen[126] = getColor(255, 0, 0);
    imagen[127] = getColor(252, 193, 87);
    imagen[128] = getColor(255, 0, 0);
    imagen[129] = getColor(143, 70, 1);
    imagen[130] = getColor(252, 193, 87);
    imagen[131] = getColor(252, 193, 87);

    //Doceava fila
    imagen[132] = getColor(252, 193, 87);
    imagen[133] = getColor(252, 193, 87);
    imagen[134] = getColor(252, 193, 87);
    imagen[135] = getColor(255, 0, 0);
    imagen[136] = getColor(255, 0, 0);
    imagen[137] = getColor(255, 0, 0);
    imagen[138] = getColor(255, 0, 0);
    imagen[139] = getColor(255, 0, 0);
    imagen[140] = getColor(255, 0, 0);
    imagen[141] = getColor(252, 193, 87);
    imagen[142] = getColor(252, 193, 87);
    imagen[143] = getColor(252, 193, 87);

    //Treceava fila
    imagen[144] = getColor(252, 193, 87);
    imagen[145] = getColor(252, 193, 87);
    imagen[146] = getColor(255, 0, 0);
    imagen[147] = getColor(255, 0, 0);
    imagen[148] = getColor(255, 0, 0);
    imagen[149] = getColor(255, 0, 0);
    imagen[150] = getColor(255, 0, 0);
    imagen[151] = getColor(255, 0, 0);
    imagen[152] = getColor(255, 0, 0);
    imagen[153] = getColor(255, 0, 0);
    imagen[154] = getColor(252, 193, 87);
    imagen[155] = getColor(252, 193, 87);

    //Catorceava fila
    imagen[156] = getColor(255, 255, 255);
    imagen[157] = getColor(255, 255, 255);
    imagen[158] = getColor(255, 0, 0);
    imagen[159] = getColor(255, 0, 0);
    imagen[160] = getColor(255, 0, 0);
    imagen[161] = getColor(255, 255, 255);
    imagen[162] = getColor(255, 255, 255);
    imagen[163] = getColor(255, 0, 0);
    imagen[164] = getColor(255, 0, 0);
    imagen[165] = getColor(255, 0, 0);
    imagen[166] = getColor(255, 255, 255);
    imagen[167] = getColor(255, 255, 255);

    //Quinceava fila
    imagen[168] = getColor(255, 255, 255);
    imagen[169] = getColor(143, 70, 1);
    imagen[170] = getColor(143, 70, 1);
    imagen[171] = getColor(143, 70, 1);
    imagen[172] = getColor(255, 255, 255);
    imagen[173] = getColor(255, 255, 255);
    imagen[174] = getColor(255, 255, 255);
    imagen[175] = getColor(255, 255, 255);
    imagen[176] = getColor(143, 70, 1);
    imagen[177] = getColor(143, 70, 1);
    imagen[178] = getColor(143, 70, 1);
    imagen[179] = getColor(255, 255, 255);

    //Ultima fila
    imagen[180] = getColor(143, 70, 1);
    imagen[181] = getColor(143, 70, 1);
    imagen[182] = getColor(143, 70, 1);
    imagen[183] = getColor(143, 70, 1);
    imagen[184] = getColor(255, 255, 255);
    imagen[185] = getColor(255, 255, 255);
    imagen[186] = getColor(255, 255, 255);
    imagen[187] = getColor(255, 255, 255);
    imagen[188] = getColor(143, 70, 1);
    imagen[189] = getColor(143, 70, 1);
    imagen[190] = getColor(143, 70, 1);
    imagen[191] = getColor(143, 70, 1);

    return imagen;
}

Resolution getResolucionZelda(){
    Resolution size;
    size.width = 17;
    size.height = 18;
    return size;
}
Color * getZelda(){
    //Creamos la imagen
    Resolution size = getResolucionZelda();
    Color * imagen = new Color[size.width * size.height];
    int index = 0;

    Color white = getColor(255,255,255);
    Color green = getColor(70, 255, 0);
    Color brown = getColor(210, 46, 45);
    Color yellow = getColor(255, 249, 173);

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = yellow;
    imagen[index++] = white;
    imagen[index++] = green;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = green;
    imagen[index++] = white;
    imagen[index++] = yellow;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = yellow;
    imagen[index++] = white;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = white;
    imagen[index++] = yellow;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = green;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = green;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = brown;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = green;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = yellow;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = yellow;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = green;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = yellow;
    imagen[index++] = brown;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = brown;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;

    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    imagen[index++] = white;
    
    return imagen;
}