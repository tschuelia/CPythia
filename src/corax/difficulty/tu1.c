
#include "prediction.h"

void predict_unit1(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13833.51142176279791) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1472221264172316191) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05740109609773156457) ) ) {
                result[0] += -0.007375318304993157;
              } else {
                result[0] += -0.015847900763306933;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2508523744426000568) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1708000000000000351) ) ) {
                  result[0] += -0.011026696040062605;
                } else {
                  result[0] += -0.002883855228691234;
                }
              }
            }
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1911254520728568607) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8650000000000001021) ) ) {
              result[0] += -0.006739279864370959;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3557370000000000254) ) ) {
                result[0] += 0.015433781288494649;
              } else {
                result[0] += 0.0005680567309012096;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
              result[0] += -0.0011112927686546489;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2924659694118884601) ) ) {
                result[0] += -0.003396809576649418;
              } else {
                result[0] += -0.012685537835080654;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4006.744949928525784) ) ) {
                result[0] += 0.017162145203749306;
              } else {
                result[0] += 0.0023855235037675954;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.243379790940767116) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653589743589744199) ) ) {
                    result[0] += 0.008241934747879535;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
                      result[0] += -0.009071646243690543;
                    } else {
                      result[0] += 0.0021960868705670393;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2053.868197878035971) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3742502868321948561) ) ) {
                      result[0] += 0.0036279457844250696;
                    } else {
                      result[0] += 0.008314494300151921;
                    }
                  } else {
                    result[0] += -0.0008877860144234354;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7795.802699447695886) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6988000000000001988) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.008338843890010198;
                    }
                  } else {
                    result[0] += 0.006647586452105512;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6319000000000001283) ) ) {
                      result[0] += -0.015175220846576793;
                    } else {
                      result[0] += -0.005440561089180841;
                    }
                  } else {
                    result[0] += -0.0014918005232828584;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4768620372057117418) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
                  result[0] += 0.001897430440007098;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5599500000000001698) ) ) {
                    result[0] += 0.019968612734085414;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7759500000000000286) ) ) {
                      result[0] += 0.011081185110563765;
                    } else {
                      result[0] += 0.005039838914665991;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3833.159599586038439) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09695000000000000839) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1861530472994430141) ) ) {
                      result[0] += 0.01481963323381121;
                    } else {
                      result[0] += 0.006346604805308213;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7034.526718448786596) ) ) {
                      result[0] += 0.00706091443401999;
                    } else {
                      result[0] += -0.0005037193862053669;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711180124223603105) ) ) {
                    result[0] += 0.007309520640260795;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                      result[0] += -0.012792842121478288;
                    } else {
                      result[0] += 0.0005683715825473099;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.956944444444444819) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
                  result[0] += 0.008177505302455883;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08235000000000002041) ) ) {
                  result[0] += -0.00969535076304648;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7371304289733293658) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1499.104419668594574) ) ) {
                      result[0] += 0.009387984414775218;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.005765020300741987;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3216.282614078772895) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
              result[0] += -0.00849166408409083;
            } else {
              result[0] += 0.007753512341870846;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.80442341124203276) ) ) {
              result[0] += -0.003959784060199719;
            } else {
              result[0] += -0.01617574658485795;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.221246000000000026) ) ) {
          result[0] += -0.016190550456612728;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9983.220168266934706) ) ) {
            result[0] += -0.015144580764277625;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.080932372247844) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5995.730546760533798) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
                    result[0] += -0.009994338414340357;
                  } else {
                    result[0] += -0.002719899365588753;
                  }
                } else {
                  result[0] += -0.013266614789779965;
                }
              } else {
                result[0] += -0.0033330981544164983;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9013.430510330945253) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6988000000000001988) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2118493325926607274) ) ) {
                  result[0] += -0.005589970266307671;
                } else {
                  result[0] += -0.014349793244952122;
                }
              } else {
                result[0] += -0.0031387783707458616;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)16180.09325483776956) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.13563218390804721) ) ) {
                    result[0] += 0.005475205600446118;
                  } else {
                    result[0] += -0.0009836601736536185;
                  }
                } else {
                  result[0] += 0.009499723272392933;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30909090909091042) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228310000000000346) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1940000000000000335) ) ) {
                      result[0] += -0.009390019476329177;
                    } else {
                      result[0] += 0.0006357557161117484;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7759500000000000286) ) ) {
                      result[0] += 0.006231736623243644;
                    } else {
                      result[0] += -0.0028324624600558007;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73508771929824768) ) ) {
                    result[0] += -0.012408354070346876;
                  } else {
                    result[0] += -0.0008422770219681355;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4461.556953086569592) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1546000000000000429) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7957.086656945748473) ) ) {
                  result[0] += -0.0050751314395977715;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
                      result[0] += -0.010197086739262362;
                    } else {
                      result[0] += -0.01984236084194653;
                    }
                  } else {
                    result[0] += -0.008999607236753675;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6656.245527964973007) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
                    result[0] += -0.007665038122596121;
                  } else {
                    result[0] += -0.015492495927020695;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5261.246056081498864) ) ) {
                    result[0] += 0.000197319839394694;
                  } else {
                    result[0] += -0.008975515728183621;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3833.159599586038439) ) ) {
                result[0] += 0.0027554148034742002;
              } else {
                result[0] += -0.010137716406240583;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3283310000000000395) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2190711269459436339) ) ) {
              result[0] += -0.0006186599248943384;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.30731523378582892) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-27390.08921065179311) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.014983739584328857;
                }
              } else {
                result[0] += -0.015302407799689399;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3368947088135722523) ) ) {
                result[0] += -0.001544502081514987;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11745.44574006947005) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.008767306308084704;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29069.44581527830451) ) ) {
                    result[0] += -0.0096869182759758;
                  } else {
                    result[0] += -0.015587786705417436;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3368947088135722523) ) ) {
                result[0] += -0.012249846078427301;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.457966404524975057) ) ) {
                  result[0] += 0.005801056344502011;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5289000000000001478) ) ) {
                    result[0] += 0.0017250504615989692;
                  } else {
                    result[0] += -0.007727150650687278;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6829935000000001422) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
          result[0] += -0.004412720146482376;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6835161312401194511) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5376165000000000527) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
                result[0] += 0.01302175430826399;
              } else {
                result[0] += 0.005499411872602744;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2602911804898560555) ) ) {
                result[0] += 0.01852032804936582;
              } else {
                result[0] += 0.014733674577098593;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.927625836485307165) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8220058538128890424) ) ) {
                result[0] += 0.015951027837854657;
              } else {
                result[0] += 0.00939689910726824;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7747129114313702214) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7845442775498493448) ) ) {
                  result[0] += 0.0030488444719675555;
                } else {
                  result[0] += 0.01049654133844403;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044849653237345022) ) ) {
                  result[0] += -0.0021067385374171728;
                } else {
                  result[0] += 0.0015883830895313674;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.756425009589567043) ) ) {
              result[0] += 0.02210388382263859;
            } else {
              result[0] += 0.01625399795121309;
            }
          } else {
            result[0] += 0.008199827615088027;
          }
        } else {
          result[0] += 0.025166156687403744;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07449922958397615) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2593.773207383128465) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5396.80911722399378) ) ) {
                result[0] += 0.006171369007401142;
              } else {
                result[0] += -0.007012340241947852;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.154992760675902036) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5791.073405282010754) ) ) {
                  result[0] += 0.008441553621394924;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4843951266831568181) ) ) {
                  result[0] += 0.010730933701182636;
                } else {
                  result[0] += 0.003498101158799496;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08188154061328727085) ) ) {
                result[0] += 0.0031246250145598193;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2624768466104180908) ) ) {
                  result[0] += 0.017014543808529806;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3146902490233077776) ) ) {
                    result[0] += 0.0029322422027297994;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4173837132183961796) ) ) {
                      result[0] += 0.01662744083786166;
                    } else {
                      result[0] += 0.009857489503866267;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07370217330381030607) ) ) {
                result[0] += 0.011295288441240113;
              } else {
                result[0] += 0.02554829773375943;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6181500000000000883) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.940712851405623773) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4033000000000000473) ) ) {
                  result[0] += -0.011059333503444563;
                } else {
                  result[0] += -0.0014013590724243142;
                }
              } else {
                result[0] += 0.009764728848491768;
              }
            } else {
              result[0] += -0.013937985430800076;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7803500000000002101) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08115000000000001379) ) ) {
                result[0] += 0.0062973579890953976;
              } else {
                result[0] += 0.016466173832180516;
              }
            } else {
              result[0] += -0.0014202359987812048;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17051.15547769272598) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7396500000000000297) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5984500000000001485) ) ) {
                result[0] += 0.008647914130760445;
              } else {
                result[0] += 4.758675204478218e-05;
              }
            } else {
              result[0] += 0.014408715913928118;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7049118465821219148) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)58.19230769230770051) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9581.734211346893062) ) ) {
                  result[0] += -0.010150712941397457;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
                    result[0] += 0.00634124112889956;
                  } else {
                    result[0] += -0.0011798965892466115;
                  }
                }
              } else {
                result[0] += -0.015898263937341624;
              }
            } else {
              result[0] += 0.013041783800753833;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93867243867244454) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
              result[0] += -0.016007329304216552;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
                result[0] += 0.006874340440131607;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2063.329983498031197) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5727811426840619946) ) ) {
                    result[0] += -0.004611596291489421;
                  } else {
                    result[0] += -0.014429639859988384;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2067000000000000226) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
                      result[0] += -0.0006213485219623238;
                    } else {
                      result[0] += 0.010063135877390772;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4061.155400297998767) ) ) {
                      result[0] += 0.00042223488363254155;
                    } else {
                      result[0] += -0.012020826613849556;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += -0.01351816197002538;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347230000000001704) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.956944444444444819) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
              result[0] += -0.014867511021434044;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1337.280669109357859) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06446597211275277572) ) ) {
                  result[0] += -0.0011958761132691885;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8433000000000000496) ) ) {
                    result[0] += -0.008284916511064966;
                  } else {
                    result[0] += -0.016654862366078514;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6550000000000001377) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
                    result[0] += -0.0017161641857703375;
                  } else {
                    result[0] += -0.007833185955891801;
                  }
                } else {
                  result[0] += 0.003333931306337113;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-985.1868867154022382) ) ) {
                result[0] += 3.426747901417384e-05;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1607000000000000095) ) ) {
                  result[0] += -0.0004631318183023208;
                } else {
                  result[0] += -0.015449292747085355;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
                result[0] += 0.008420519611117689;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
                  result[0] += -0.0036390346360188172;
                } else {
                  result[0] += 0.004596903964575909;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3571.445901236788359) ) ) {
            result[0] += -0.0016609412859223557;
          } else {
            result[0] += -0.013561074415262338;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.169986979704803115) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
                  result[0] += 0.010447069166301904;
                } else {
                  result[0] += 0.015244797836741127;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1369.851320094411903) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5995.730546760533798) ) ) {
                    result[0] += 0.005217765307900855;
                  } else {
                    result[0] += 0.009701958223033935;
                  }
                } else {
                  result[0] += 0.0037127725207639893;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036930000000000462) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4006.744949928525784) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01125000000000000132) ) ) {
                  result[0] += 0.011911520169141227;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
                    result[0] += -0.0038244713773136897;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1137500000000000178) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.008873342714473556;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2487665370563404699) ) ) {
                  result[0] += -0.011972880364856959;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3010418023613812832) ) ) {
                    result[0] += 0.0014323925532655282;
                  } else {
                    result[0] += -0.0036228976893355087;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)642.537947836085209) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)187.8653910326616767) ) ) {
                  result[0] += -0.006185182678222154;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.086028323821603081) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7246031178489703573) ) ) {
                      result[0] += 0.007185775744191686;
                    } else {
                      result[0] += -5.3435347217122004e-05;
                    }
                  } else {
                    result[0] += -0.00407220949238099;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.692450000000000121) ) ) {
                      result[0] += 0.01309931419954273;
                    } else {
                      result[0] += 0.005340655888283526;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
                      result[0] += 0.0062602597112608425;
                    } else {
                      result[0] += -0.0011831883368400122;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2025.244583427236194) ) ) {
                    result[0] += 0.011197790674637961;
                  } else {
                    result[0] += 0.0007084875620605165;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2743.202382171203226) ) ) {
            result[0] += 0.0024243965961063033;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.777330508474576742) ) ) {
              result[0] += 0.00015108639529574154;
            } else {
              result[0] += -0.014021699432097806;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7602760000000000629) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7552793108361041119) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1018.758829443079094) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.606377583365031558) ) ) {
                result[0] += 0.01449156330622168;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
                  result[0] += 0.011050540450923916;
                } else {
                  result[0] += 0.005368155775429031;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
                result[0] += 0.006630420101391368;
              } else {
                result[0] += 0.0009310322442121644;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8557.692406390551696) ) ) {
              result[0] += 0.010948588526439667;
            } else {
              result[0] += 0.016776306729238386;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.219437893081761315) ) ) {
            result[0] += 0.01293314815215568;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8426833958685702175) ) ) {
              result[0] += -0.003846047861409754;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
                result[0] += 0.009104153791966774;
              } else {
                result[0] += -0.0024715647985271093;
              }
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-355.2188524626326966) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4671500000000000652) ) ) {
            result[0] += 0.022333537760115964;
          } else {
            result[0] += 0.013578773242866079;
          }
        } else {
          result[0] += 0.015085394893312629;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
          result[0] += -0.002551033584098885;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3450000000000000289) ) ) {
            result[0] += -0.014823911173125376;
          } else {
            result[0] += -0.012524056775222295;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2461167842040226927) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506000000000000449) ) ) {
            result[0] += 0.00879539015379964;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3016800000000000592) ) ) {
              result[0] += -0.012738480800637183;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904340000000000588) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.007201916442913527;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
            result[0] += -0.0018403793621425924;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075923801982495709) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1426.377837264146592) ) ) {
                  result[0] += -0.001972122415365945;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2660001773777408984) ) ) {
                    result[0] += -0.01449785764581903;
                  } else {
                    result[0] += -0.009295893526027313;
                  }
                }
              } else {
                result[0] += -0.017289939395137698;
              }
            } else {
              result[0] += -0.0021917518112035106;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87146226415094574) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.440904500000000088) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7689.919473708750047) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
                result[0] += 0.006971948199088867;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.438750000000000639) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03385000000000000508) ) ) {
                  result[0] += -0.009498855477761204;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)572.059826422058336) ) ) {
                    result[0] += -0.00879751683512977;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
                      result[0] += -0.0020760198840324246;
                    } else {
                      result[0] += 0.004838368436608434;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
                  result[0] += 0.0039091256265025316;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2063695000000000113) ) ) {
                    result[0] += -0.019078833150727108;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
                      result[0] += -0.011112954221906068;
                    } else {
                      result[0] += -0.006092743096819332;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934555000000000302) ) ) {
              result[0] += -0.012153175759430323;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05365000000000001018) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01875000000000000278) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.015054801196792247;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.06168384879725863) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10534.50099646399576) ) ) {
                      result[0] += -0.004201556897853737;
                    } else {
                      result[0] += 0.0019081150086648299;
                    }
                  } else {
                    result[0] += 0.010949352084520771;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                    result[0] += 0.0022630389159558114;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2391000000000000347) ) ) {
                      result[0] += -0.009999516025777592;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7517.831857566079634) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500000000000136) ) ) {
                result[0] += 0.015741033357057926;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18253968253969077) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6678500000000000547) ) ) {
                      result[0] += 0.002008542038615014;
                    } else {
                      result[0] += 0.009106604961602075;
                    }
                  } else {
                    result[0] += 0.011837074687382928;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16362.01564670949665) ) ) {
                    result[0] += 0.007704264701817862;
                  } else {
                    result[0] += -0.006570287061786233;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3986990764490913053) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.746250000000000191) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2237958198855495573) ) ) {
                    result[0] += 0.012014762665115473;
                  } else {
                    result[0] += 0.0016199954386313022;
                  }
                } else {
                  result[0] += -0.0032874829744551424;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.59687500000000426) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5065000000000000613) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2566500000000001003) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.012926990069435684;
                    }
                  } else {
                    result[0] += 0.004704716026229477;
                  }
                } else {
                  result[0] += -0.01252490952433413;
                }
              }
            }
          } else {
            result[0] += 0.014637008857765785;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3436155000000000181) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1010493287512936184) ) ) {
            result[0] += -0.018724105931390456;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2523846967694989285) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1390121841946631853) ) ) {
                result[0] += -0.0042349286637680065;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.7610275038920733) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
                    result[0] += -0.0011757684736081978;
                  } else {
                    result[0] += -0.011211996581852396;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5049000000000000155) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3423668233450842813) ) ) {
                      result[0] += -0.0036996985978906957;
                    } else {
                      result[0] += -0.014506831370149182;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4524659535674726007) ) ) {
                      result[0] += -0.013057260010154758;
                    } else {
                      result[0] += -0.0022590465592417313;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
              result[0] += 0.00391378598269126;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08132629836300046822) ) ) {
                result[0] += 0.0016829124012747694;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3029155602761551269) ) ) {
                  result[0] += 0.00041158917046514403;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6903684837426190546) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4681341459817245365) ) ) {
                      result[0] += -0.008395840692477115;
                    } else {
                      result[0] += -0.013941875767123642;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
                      result[0] += 0.0022349212649502835;
                    } else {
                      result[0] += -0.013234411576699731;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)148.927747252747281) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13827.99262003128206) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.74189814814816657) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.90667311411992912) ) ) {
                      result[0] += 0.0069934165328039985;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.003661698290161525;
                  }
                } else {
                  result[0] += 0.010177691983281258;
                }
              } else {
                result[0] += -0.007963386249390067;
              }
            } else {
              result[0] += -0.00976370655919694;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5741900000000000892) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
          result[0] += -0.01486505851895565;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.956944444444444819) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04505000000000000671) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.535781628804885113) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000000000000369) ) ) {
                  result[0] += 0.0015753632989319822;
                } else {
                  result[0] += -0.006413071846029648;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2333.321561901081623) ) ) {
                      result[0] += -0.0020899329290165213;
                    } else {
                      result[0] += -0.0115899914998409;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09712242158187701924) ) ) {
                      result[0] += -0.0026278211929426413;
                    } else {
                      result[0] += 0.0014425247306180612;
                    }
                  }
                } else {
                  result[0] += -0.010481208828257432;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                result[0] += -0.0068126163621798795;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9.965684599721443604) ) ) {
                  result[0] += -0.0020617877071465473;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                    result[0] += 0.00747530292771049;
                  } else {
                    result[0] += -0.00025584003490918743;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.106606960732522002) ) ) {
              result[0] += -0.013759469780099213;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1533.824223339392574) ) ) {
                  result[0] += -0.0067709321517057065;
                } else {
                  result[0] += -0.01469660891434259;
                }
              } else {
                result[0] += 0.0057527632632795155;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2986.391455690082239) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9983.220168266934706) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.007625033859531164;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1595.83134361526254) ) ) {
                      result[0] += 0.009546646363151617;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.004169121345483578;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.65331664580726034) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057365000000000221) ) ) {
                      result[0] += -0.013166333867441052;
                    } else {
                      result[0] += -0.0018610543810514235;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3137585000000000512) ) ) {
                      result[0] += -0.001821254192590792;
                    } else {
                      result[0] += 0.004973914026203764;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                      result[0] += 0.0008236686616733624;
                    } else {
                      result[0] += 0.010412184357376345;
                    }
                  } else {
                    result[0] += -0.0005881926885481579;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.481489856570616936) ) ) {
                result[0] += 0.0046884350795694035;
              } else {
                result[0] += 0.013148960728463645;
              }
            }
          } else {
            result[0] += -0.011131554276775497;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.484296965040338367) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4507.9565926974592) ) ) {
                  result[0] += 0.005891114829283733;
                } else {
                  result[0] += 0.011135435472087537;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.927625836485307165) ) ) {
                  result[0] += 0.007951149977710655;
                } else {
                  result[0] += -0.004440008786724333;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2508.19119374671709) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.72873563218391979) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.650443786982250138) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04272266684492439376) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.008720616241071897;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6189.910138631900736) ) ) {
                      result[0] += 0.008914303471906212;
                    } else {
                      result[0] += -0.0010192361425445705;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                    result[0] += 0.008261680943703005;
                  } else {
                    result[0] += 0.01693907396415221;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8433000000000000496) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5732000000000001538) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.086028323821603081) ) ) {
                      result[0] += 0.002088712331724824;
                    } else {
                      result[0] += -0.005885436987123342;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2021.296333301971345) ) ) {
                      result[0] += 0.010102781743171108;
                    } else {
                      result[0] += -0.00044641401388610745;
                    }
                  }
                } else {
                  result[0] += -0.009803076326257305;
                }
              }
            }
          } else {
            result[0] += -0.0036380237108327583;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
          result[0] += 0.0033112774734327163;
        } else {
          result[0] += -0.008309999513880307;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7602760000000000629) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7552793108361041119) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
              result[0] += 0.015428163268799155;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
                result[0] += 0.00938206576586683;
              } else {
                result[0] += 0.013143604758971382;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.15450928381962914) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
                result[0] += 0.009804867544684683;
              } else {
                result[0] += 0.0016993098923052733;
              }
            } else {
              result[0] += -0.00402387469852776;
            }
          }
        } else {
          result[0] += 0.019452557982153323;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3502855000000000829) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1636390000000000067) ) ) {
            result[0] += -0.012510776974126708;
          } else {
            result[0] += -0.009124983770368298;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
            result[0] += 0.007568842661107568;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22332.50306697345877) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.285918000000000061) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.006004380291229372;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2484845401189077485) ) ) {
                  result[0] += -0.0010085192665873083;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.438750000000000639) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.432034895516332895) ) ) {
                      result[0] += -0.007927535888822461;
                    } else {
                      result[0] += -0.001607263253156416;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.07626592109350838) ) ) {
                      result[0] += -0.014272217347916531;
                    } else {
                      result[0] += -0.006913305512592638;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10362.98456196805637) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2777090000000000392) ) ) {
                      result[0] += -0.0025346342311469198;
                    } else {
                      result[0] += -0.01102523579762161;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6264500000000000624) ) ) {
                      result[0] += -0.004902048082676528;
                    } else {
                      result[0] += 0.011666525558360702;
                    }
                  }
                } else {
                  result[0] += 0.00340887354151346;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
          result[0] += -0.013046907628909796;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.16869918699187636) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.90814019219898512) ) ) {
              result[0] += -0.009145424919506708;
            } else {
              result[0] += -0.003097995067770532;
            }
          } else {
            result[0] += -0.012699138085830744;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4825269858769296039) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0711364934725852438) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8775500000000001632) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.005872221594312044;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08235000000000002041) ) ) {
                result[0] += 0.01884630699956354;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1940000000000000335) ) ) {
                  result[0] += 0.004896369656304528;
                } else {
                  result[0] += 0.011975356218525341;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14660.96176939566249) ) ) {
                result[0] += 0.00437444578630168;
              } else {
                result[0] += 0.010393497447538718;
              }
            } else {
              result[0] += -0.005605731725198254;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7371304289733293658) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.81858974358974734) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
                  result[0] += 0.00020167069257352957;
                } else {
                  result[0] += 0.012081814909410873;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4311851251853566769) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1090413665276023236) ) ) {
                    result[0] += -0.010149812292409159;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2870.605387001201507) ) ) {
                      result[0] += -0.0029060522809651215;
                    } else {
                      result[0] += 0.008156487680925658;
                    }
                  }
                } else {
                  result[0] += -0.011874564134987097;
                }
              }
            } else {
              result[0] += -0.013747035476022964;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.536038961038963535) ) ) {
              result[0] += -0.0011236038118129059;
            } else {
              result[0] += 0.009106314645045119;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.01676598306314231;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13827.99262003128206) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4200500000000000345) ) ) {
                result[0] += -0.009080942147677584;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-45582.08751746388589) ) ) {
                    result[0] += 0.009891370394540695;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
                      result[0] += 0.0020440669760738604;
                    } else {
                      result[0] += -0.004606094555313256;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5678500000000000769) ) ) {
                    result[0] += 0.01145632434913323;
                  } else {
                    result[0] += 0.0042701821726001685;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0756500000000000089) ) ) {
                result[0] += 0.00017264773908993097;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6682000000000001272) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1684877502298116336) ) ) {
                    result[0] += -0.004527396735063924;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.31041666666667567) ) ) {
                      result[0] += -0.0040761122888777436;
                    } else {
                      result[0] += -0.01446793266165994;
                    }
                  }
                } else {
                  result[0] += -0.0013391564908796752;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
                result[0] += -0.013991612708249012;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2287316404723389318) ) ) {
                  result[0] += 0.008739237138486143;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3829700104266255956) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6189.910138631900736) ) ) {
                      result[0] += -0.001662784325515027;
                    } else {
                      result[0] += -0.01176638135565355;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4487310000000000465) ) ) {
                      result[0] += -4.558465879386811e-05;
                    } else {
                      result[0] += 0.006892725192524683;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1291.853035939608844) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                  result[0] += -0.016241675386053527;
                } else {
                  result[0] += -0.006813351502227723;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4257500000000000173) ) ) {
                  result[0] += 0.0069121670680562216;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
                    result[0] += -0.0035655737701602353;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7034.526718448786596) ) ) {
                      result[0] += -0.013667326630504063;
                    } else {
                      result[0] += -0.00686359310657966;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4283830000000000693) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1137.968895395498521) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.179108910891089934) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                  result[0] += -0.009485963322047371;
                } else {
                  result[0] += 9.37335281976877e-06;
                }
              } else {
                result[0] += 0.00273902839103555;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.011244504722230866;
              }
            }
          } else {
            result[0] += 0.0025440617638431725;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7450000000000001066) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2104742577805706616) ) ) {
              result[0] += -0.012693645262196573;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04715000000000000441) ) ) {
                result[0] += -0.010623301466473027;
              } else {
                result[0] += -0.0015499754949427063;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
              result[0] += 0.005233755118896569;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.875000000000000111) ) ) {
                  result[0] += -0.005302660318518373;
                } else {
                  result[0] += -0.013140411615837467;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1155500000000000277) ) ) {
                  result[0] += 0.0018361059401771542;
                } else {
                  result[0] += -0.006245187532731927;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.362024000000000068) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
                result[0] += -0.0014296095450405273;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09065000000000002223) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4928625677951861683) ) ) {
                    result[0] += 0.013393586578405628;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4444724744926561999) ) ) {
                    result[0] += -0.002712344734774403;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057365000000000221) ) ) {
                      result[0] += 0.009227189329468642;
                    } else {
                      result[0] += 0.0019878602636712334;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.736068111455108642) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2461167842040226927) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.71032126588348277) ) ) {
                    result[0] += 0.010773639492440317;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6081.744581517318693) ) ) {
                      result[0] += -0.00637496066242386;
                    } else {
                      result[0] += 0.008694933238050177;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.548804922219870317) ) ) {
                      result[0] += -0.0001810007214939999;
                    } else {
                      result[0] += -0.010748736572043326;
                    }
                  } else {
                    result[0] += 0.006676537017045876;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518295403837575108) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3010418023613812832) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.656050000000000133) ) ) {
                      result[0] += -0.019572049283511823;
                    } else {
                      result[0] += -0.00817248549020075;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4029797040248608853) ) ) {
                      result[0] += 0.0006475199856278415;
                    } else {
                      result[0] += -0.007780519916171126;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04590766326201999731) ) ) {
              result[0] += -0.002199394078308653;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.545995454461449814) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03785000000000000864) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3211.649567834616846) ) ) {
                    result[0] += 0.0059512368480650205;
                  } else {
                    result[0] += 0.014232180565081414;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1490519239829231901) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279338682318470199) ) ) {
                      result[0] += 0.0030558404869938547;
                    } else {
                      result[0] += -0.006335639538769389;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
                      result[0] += 0.0029456158410429943;
                    } else {
                      result[0] += 0.009660632022519532;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
                      result[0] += 0.003765398038187356;
                    } else {
                      result[0] += -0.0011598807738609114;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.045180722891566383) ) ) {
                      result[0] += 0.0020792713834391512;
                    } else {
                      result[0] += 0.010607648528360443;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
                    result[0] += 0.0023459005206650607;
                  } else {
                    result[0] += -0.005949333811234429;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
            result[0] += -0.0013550683574088894;
          } else {
            result[0] += -0.012997370577148873;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.118717000000000017) ) ) {
          result[0] += -0.012039482989143205;
        } else {
          result[0] += -0.01005966205980725;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2344066382699040996) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506000000000000449) ) ) {
            result[0] += 0.010917224568432533;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87146226415094574) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
                result[0] += 0.006695895805159675;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09947290620547651063) ) ) {
                  result[0] += -0.009216373174337234;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1678605806223842645) ) ) {
                result[0] += -0.0011143187509783218;
              } else {
                result[0] += -0.012348377905684587;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.32834040296925338) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36696.22831575417513) ) ) {
                result[0] += 0.00946585293428128;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
                  result[0] += 0.0028408899005560187;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.0281746031746124) ) ) {
                      result[0] += -0.01296837281774767;
                    } else {
                      result[0] += -0.005246491718786645;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6969500000000000695) ) ) {
                      result[0] += -0.008365259964875783;
                    } else {
                      result[0] += -0.0013579267721016682;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.012232229277418778;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04214999999999999997) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
                result[0] += -0.015793381458419718;
              } else {
                result[0] += -0.004786495916543491;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7236.996653052084184) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3427.976752410164409) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.60851063829787932) ) ) {
                    result[0] += -0.011714556947492882;
                  } else {
                    result[0] += -0.004536654755994865;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.77003205128205821) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1940000000000000335) ) ) {
                      result[0] += -0.0020392811365908888;
                    } else {
                      result[0] += 0.007548381154219557;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4472500000000000364) ) ) {
                      result[0] += 0.001413069819831496;
                    } else {
                      result[0] += -0.0068618336472700825;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)739.2431776973787692) ) ) {
                  result[0] += -0.006616435860167084;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5984500000000001485) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.50897851045040099) ) ) {
                      result[0] += 0.00205450091858803;
                    } else {
                      result[0] += 0.01880195648158117;
                    }
                  } else {
                    result[0] += -0.0036696347176197984;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)15.77248611608338713) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.147407407407407653) ) ) {
            result[0] += 0.00932613184598689;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1427500000000000158) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.01173305768126733;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[0] += -0.003312874210517671;
              } else {
                result[0] += 0.0042324659734101705;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
              result[0] += -0.004694702472860356;
            } else {
              result[0] += 0.004809609568574724;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4148169003269751576) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4368015000000000092) ) ) {
                result[0] += 0.0023001337362072603;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04715000000000000441) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5001330000000000497) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                      result[0] += 0.010285305633967535;
                    } else {
                      result[0] += 0.004601785370692551;
                    }
                  } else {
                    result[0] += 0.013041992094501527;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7310500000000000886) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2391000000000000347) ) ) {
                      result[0] += 0.012608330053223003;
                    } else {
                      result[0] += 0.005069147466985996;
                    }
                  } else {
                    result[0] += 0.00746756778002517;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4257500000000000173) ) ) {
                result[0] += 0.009461145098839848;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2025.244583427236194) ) ) {
                  result[0] += 0.007223884474948356;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2704678552648275836) ) ) {
                    result[0] += 0.005674538351713072;
                  } else {
                    result[0] += -0.004908870608381316;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6399918775570295759) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.43665158371041102) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3819500000000000672) ) ) {
                result[0] += 0.015452405779435277;
              } else {
                result[0] += 0.0056146421764737935;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
                result[0] += 0.01306004228037649;
              } else {
                result[0] += 0.0005830433037418068;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-200.3606350077996296) ) ) {
              result[0] += 0.008953241164783866;
            } else {
              result[0] += 0.0017936782608044142;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.155357142857144304) ) ) {
            result[0] += 0.019890346138813606;
          } else {
            result[0] += 0.0157135327929153;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08115000000000001379) ) ) {
            result[0] += -0.012525719119718627;
          } else {
            result[0] += -0.0033351117898162822;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8461.096702489729068) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9003.644477627831293) ) ) {
                  result[0] += 0.012727638063982909;
                } else {
                  result[0] += 0.0015276739411159911;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
                  result[0] += 0.0073880566062188525;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4033000000000000473) ) ) {
                    result[0] += -0.002740688706990363;
                  } else {
                    result[0] += 0.0053025506679567685;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07449922958397615) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.796551724137932737) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7680500000000001215) ) ) {
                      result[0] += 0.003335965731326603;
                    } else {
                      result[0] += -0.004230385336424872;
                    }
                  } else {
                    result[0] += -0.00744982078479757;
                  }
                } else {
                  result[0] += 0.008383919599174576;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.65838375108038605) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
                    result[0] += -0.0038928220904641654;
                  } else {
                    result[0] += -0.013121373499584685;
                  }
                } else {
                  result[0] += 0.0005309074315970031;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7602760000000000629) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.086028323821603081) ) ) {
                result[0] += -0.0009057455289026721;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17778753292362026) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                    result[0] += 0.0012806523150721242;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5095115945175783256) ) ) {
                      result[0] += 0.013592078079040846;
                    } else {
                      result[0] += 0.008077188423663086;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2745899061051987888) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.74189814814816657) ) ) {
                      result[0] += 0.008487800592641963;
                    } else {
                      result[0] += 0.0012773252242910752;
                    }
                  } else {
                    result[0] += -0.003612906278799192;
                  }
                }
              }
            } else {
              result[0] += 0.01938045377586097;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22332.50306697345877) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)67.25628626692457601) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)12670.19278798460982) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.32834040296925338) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.011564911644393237;
                }
              } else {
                result[0] += 0.0036215523389320535;
              }
            } else {
              result[0] += -0.01470720667744836;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5924805000000000765) ) ) {
                result[0] += 0.009630256805887602;
              } else {
                result[0] += -0.0015862400864645595;
              }
            } else {
              result[0] += 0.015092329326938918;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
            result[0] += -0.0019376109118252516;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.471890500000000046) ) ) {
              result[0] += -0.014120360727862161;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4901430000000000509) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
                  result[0] += -0.0007081513946906422;
                } else {
                  result[0] += -0.010335914699297453;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.252450980392159963) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.471890500000000046) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
          result[0] += -0.0119567722761563;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
              result[0] += -0.0013228636578708432;
            } else {
              result[0] += 0.00497730776431944;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3002208421277365313) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1472221264172316191) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06344288914682723324) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04988135003030733788) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0091400042952799;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1572954101779138469) ) ) {
                      result[0] += 0.008752904533134253;
                    } else {
                      result[0] += -0.00292925210839103;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5567.746532477868641) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
                      result[0] += -0.0135935517073241;
                    } else {
                      result[0] += -0.0008860979771798733;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005296501665142819;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8050000000000001599) ) ) {
                  result[0] += -0.00031666832176236874;
                } else {
                  result[0] += 0.00829672128018673;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1116.565576061355387) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2004.58624898434573) ) ) {
                  result[0] += 0.00225159566249309;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.67902930402930473) ) ) {
                    result[0] += -0.011348397021459096;
                  } else {
                    result[0] += -0.0029448217062526564;
                  }
                }
              } else {
                result[0] += -0.01388986482154208;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.315748500000000043) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4960.940101036608212) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5706.165657108974301) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                    result[0] += -0.001456183592137249;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
                      result[0] += 0.00034103000529939035;
                    } else {
                      result[0] += 0.008802966281240509;
                    }
                  }
                } else {
                  result[0] += -0.0043811345230819546;
                }
              } else {
                result[0] += 0.00925978278198033;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07895000000000000628) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.536235053951590324) ) ) {
                  result[0] += -0.0008820704572653333;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2511183070799432038) ) ) {
                    result[0] += -0.014397200936126236;
                  } else {
                    result[0] += -0.0017174233105733757;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2928.425989978642974) ) ) {
                  result[0] += -0.001895870562432912;
                } else {
                  result[0] += 0.006447283189943115;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9163500000000001089) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2429488264872171899) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)878.7882229141167727) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1618.91458251395693) ) ) {
                      result[0] += 0.00836119406378217;
                    } else {
                      result[0] += 0.004785708375823247;
                    }
                  }
                } else {
                  result[0] += 0.011294763761778216;
                }
              } else {
                result[0] += -0.0004521697499142306;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04214999999999999997) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.985999416642361126) ) ) {
                    result[0] += 0.0072362566781543815;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1426.377837264146592) ) ) {
                      result[0] += -0.0063363640253118105;
                    } else {
                      result[0] += 0.0023023191577962654;
                    }
                  }
                } else {
                  result[0] += -0.012086238843430124;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5776500000000001078) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)739.2431776973787692) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3002000000000000779) ) ) {
                      result[0] += 0.005396914344602663;
                    } else {
                      result[0] += -0.0002833761277593126;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
                      result[0] += 0.004194598858043154;
                    } else {
                      result[0] += 0.008576639187399274;
                    }
                  }
                } else {
                  result[0] += -7.254754786555095e-06;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.11363240676324482) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
              result[0] += -0.00212606094269157;
            } else {
              result[0] += -0.013866973593850501;
            }
          } else {
            result[0] += 0.0021639689000432366;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.695248500000000047) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.130274200633482079) ) ) {
              result[0] += 0.006180410308077517;
            } else {
              result[0] += -0.007127659931266046;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2552661953259802718) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1264500000000000346) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
                  result[0] += 0.015324079191156801;
                } else {
                  result[0] += 0.011162110516768976;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04108592410728736238) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.00867442882814404;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.363139534883722526) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
                  result[0] += 0.007503398359386566;
                } else {
                  result[0] += 0.009927366150480359;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5536370000000000458) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
                    result[0] += -0.0024851386168352253;
                  } else {
                    result[0] += 0.0031179870446766287;
                  }
                } else {
                  result[0] += 0.009181344212276924;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.219437893081761315) ) ) {
            result[0] += 0.009337066656315623;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1396.779958297000576) ) ) {
              result[0] += 0.0038580077755199205;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.37349033816425159) ) ) {
                  result[0] += -0.0035973218978601097;
                } else {
                  result[0] += 0.004210850343889484;
                }
              } else {
                result[0] += -0.009822567714599113;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3701000000000000401) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8840870000000001783) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9379530110910064833) ) ) {
              result[0] += 0.01409185801404369;
            } else {
              result[0] += 0.0044331219320914595;
            }
          } else {
            result[0] += 0.017604562155200166;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4900.274382293213421) ) ) {
            result[0] += 0.008666074956898303;
          } else {
            result[0] += 0.0022702871848454486;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5150000000000001243) ) ) {
        result[0] += -0.010338888797402626;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04185000000000000525) ) ) {
          result[0] += 0.000629191215207973;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2082316587659429064) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5133.306374476119345) ) ) {
              result[0] += 0.00654853005188455;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04214999999999999997) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7034.526718448786596) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.00523219640496826;
                }
              } else {
                result[0] += -0.008031002841905012;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3184.283198592457211) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6441500000000001114) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6221500000000000918) ) ) {
                  result[0] += -0.009037813156452981;
                } else {
                  result[0] += -0.0030632113044824073;
                }
              } else {
                result[0] += -0.01111326681988308;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3083306738637045519) ) ) {
                result[0] += 0.0028414112256593318;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.243300000000000044) ) ) {
                    result[0] += -0.013936030948256274;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
                      result[0] += -0.009778067291251753;
                    } else {
                      result[0] += -0.00125754958684265;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.31844888366627622) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3502855000000000829) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.580400000000000138) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6497217366336467403) ) ) {
                result[0] += 0.008386432123012382;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                result[0] += 0.0029253969902825624;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                  result[0] += -0.009331384375749688;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02255000000000000407) ) ) {
                result[0] += 0.005892825104366369;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6264500000000000624) ) ) {
                    result[0] += 0.005323410118527668;
                  } else {
                    result[0] += -0.005582677745574354;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.901809780515980819) ) ) {
                      result[0] += -0.00660169606502903;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2982875000000000387) ) ) {
                      result[0] += -0.014204831433392157;
                    } else {
                      result[0] += -0.004931354643308523;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.015403895786479972;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2928.425989978642974) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6871.194738991899612) ) ) {
                result[0] += 0.009287422463421364;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01815000000000000294) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.012359800834463393;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3749.11546473725457) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4698276866784543149) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2613055141501312573) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                      result[0] += 0.0066460835124757655;
                    } else {
                      result[0] += -0.0015076555707824026;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.27991452991453158) ) ) {
                      result[0] += -0.00473863875202612;
                    } else {
                      result[0] += 0.00675818934861135;
                    }
                  }
                } else {
                  result[0] += 0.010521705091716045;
                }
              } else {
                result[0] += 0.013430460645110888;
              }
            }
          } else {
            result[0] += -0.006876051015088278;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
            result[0] += 0.0009693113546505799;
          } else {
            result[0] += 0.015181417997779377;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4659489670146004237) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5732000000000001538) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34049.72333320909092) ) ) {
                result[0] += -0.0039909536531674535;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                  result[0] += 0.020151860824948787;
                } else {
                  result[0] += 0.001671848273891471;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14660.96176939566249) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.16869918699187636) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2344066382699040996) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4026600000000000734) ) ) {
                      result[0] += 0.0036201395770998268;
                    } else {
                      result[0] += 0.011874041177508633;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4268500000000000627) ) ) {
                      result[0] += -0.003790272622137595;
                    } else {
                      result[0] += 0.0024225102348643317;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                    result[0] += 0.0003382973594322417;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                      result[0] += -0.012461212434459744;
                    } else {
                      result[0] += -0.004128338507163651;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.8806779661016968) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2399659671015315077) ) ) {
                    result[0] += 0.0036594573560155426;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
                      result[0] += -0.010456717200718044;
                    } else {
                      result[0] += -0.002173142600757728;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2632500000000000395) ) ) {
                    result[0] += -0.014095804325356757;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                      result[0] += -0.0026085219946814873;
                    } else {
                      result[0] += -0.008830616948349305;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2304500000000000159) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.856934660369398804) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3965.158948031867112) ) ) {
                    result[0] += -0.001986387793629743;
                  } else {
                    result[0] += 0.004347957130239604;
                  }
                } else {
                  result[0] += -0.011074951273772487;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5206.745974317551372) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2144260000000000332) ) ) {
                    result[0] += -0.003785679425605225;
                  } else {
                    result[0] += -0.012558441736134273;
                  }
                } else {
                  result[0] += -0.0030649604373243224;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.2970588235294187) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-31827.96148275736414) ) ) {
                    result[0] += 0.0027006638841934353;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.59010642135642144) ) ) {
                      result[0] += -0.0032514064350108243;
                    } else {
                      result[0] += -0.010235084548918045;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.94680249009621065) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.487126000000000059) ) ) {
                      result[0] += 0.007689573189518434;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.003318187243318639;
                  }
                }
              } else {
                result[0] += -0.010827180871521298;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9150000000000001465) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7650000000000001243) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1486176851638061902) ) ) {
                result[0] += -0.0010896732045394969;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08685000000000001052) ) ) {
                  result[0] += -0.01085143859487338;
                } else {
                  result[0] += -0.0036525170735277348;
                }
              }
            } else {
              result[0] += -0.0003261450005245879;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.310715078210065665) ) ) {
              result[0] += 0.0035052998733888477;
            } else {
              result[0] += -0.003172153908446505;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11458.24876613496417) ) ) {
            result[0] += -0.012480642152646704;
          } else {
            result[0] += -0.004951964983625514;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1037995575841958729) ) ) {
          result[0] += 0.008709099169655302;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1829182123299770424) ) ) {
              result[0] += 0.002526869347770116;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.634978565635500036) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)549.5415402223362662) ) ) {
                  result[0] += -0.013933617204963031;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.007117137647867968;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.401298701298702376) ) ) {
              result[0] += 0.004182752026071326;
            } else {
              result[0] += -0.002430484260239844;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6014500000000001512) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.265050167224081257) ) ) {
                result[0] += 0.006376311590252929;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                    result[0] += -0.0020705055617755742;
                  } else {
                    result[0] += -0.012664045934747977;
                  }
                } else {
                  result[0] += 0.0026411095870295057;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009850000000000001116) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3211.649567834616846) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                      result[0] += 0.002158110152304366;
                    } else {
                      result[0] += -0.007279066970896591;
                    }
                  } else {
                    result[0] += 0.007951148487451702;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)856.1902646574352502) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.606377583365031558) ) ) {
                      result[0] += 0.0060587197666390384;
                    } else {
                      result[0] += -0.00023776043585271031;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2593.773207383128465) ) ) {
                      result[0] += 0.005584256497326707;
                    } else {
                      result[0] += 0.00993530370520736;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                      result[0] += 0.0020148651793985726;
                    } else {
                      result[0] += -0.0032060266216893743;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
                      result[0] += 0.00685398999351869;
                    } else {
                      result[0] += 0.0009379937032202095;
                    }
                  }
                } else {
                  result[0] += 0.007512445716928432;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)983.5309309347018143) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)530.0555639917105282) ) ) {
                    result[0] += -0.0007951310032393645;
                  } else {
                    result[0] += 0.005916574142502611;
                  }
                } else {
                  result[0] += -0.006227082565596215;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9678488682944218491) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.646068859198356105) ) ) {
                    result[0] += 0.009295545236958918;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.985999416642361126) ) ) {
                      result[0] += 0.0016832295893717823;
                    } else {
                      result[0] += 0.005888262794765203;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03785000000000000864) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3458099438652766922) ) ) {
                  result[0] += 0.010215020140938941;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4126257761330971996) ) ) {
                    result[0] += 0.0014489370329084247;
                  } else {
                    result[0] += 0.006136090080607243;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03442655001000935466) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4881500000000000838) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
                      result[0] += 0.005876403377821633;
                    } else {
                      result[0] += 0.008986240609067695;
                    }
                  } else {
                    result[0] += 0.0013938369251091775;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1369.851320094411903) ) ) {
              result[0] += 0.00859638671678576;
            } else {
              result[0] += -0.0037037657770056013;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
              result[0] += -0.013731866053108202;
            } else {
              result[0] += -0.002889783927348283;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.041494490358127578) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
              result[0] += 0.0040104742768480445;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2924659694118884601) ) ) {
                result[0] += 0.01246446942881379;
              } else {
                result[0] += 0.009087595737423107;
              }
            }
          } else {
            result[0] += 0.01376574956701138;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7747129114313702214) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4473314962819884832) ) ) {
                result[0] += 0.012889814228802261;
              } else {
                result[0] += 0.00545565361200859;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8090500000000001579) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.45361298224128177) ) ) {
                  result[0] += 0.008201885140990224;
                } else {
                  result[0] += 0.0006845239556338854;
                }
              }
            }
          } else {
            result[0] += -0.002843199312466673;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3191980000000000373) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4542.943917304383831) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6069337742791702794) ) ) {
                  result[0] += -0.009004772941704752;
                } else {
                  result[0] += 0.0011178811877833933;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.796551724137932737) ) ) {
                  result[0] += 0.007121121888141898;
                } else {
                  result[0] += -0.0013691601577259466;
                }
              }
            } else {
              result[0] += 0.007256118313085354;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
              result[0] += 0.0006131886412473245;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1185548504618808702) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
                  result[0] += -0.01193872662695052;
                } else {
                  result[0] += -0.003776380972526957;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8550000000000000933) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)760.1404084372057923) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)237.3704492435913664) ) ) {
                result[0] += -0.008114960182600078;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5791.073405282010754) ) ) {
                result[0] += -0.003200373726702193;
              } else {
                result[0] += -0.009227471503781191;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
              result[0] += 0.004570176388461619;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.06168384879725863) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7148500000000000965) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5160139698723101853) ) ) {
                      result[0] += -0.002625257972183697;
                    } else {
                      result[0] += -0.01048829536518782;
                    }
                  } else {
                    result[0] += -0.01363659152265619;
                  }
                } else {
                  result[0] += 0.0008527991675358353;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.8232142857142879) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.048809523809525857) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2428.189675971083943) ) ) {
                      result[0] += 0.004409966396068368;
                    } else {
                      result[0] += -0.0031565762369728766;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.009450816868334218;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5089500000000001245) ) ) {
                    result[0] += -0.0019516377787972617;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6656.245527964973007) ) ) {
                      result[0] += -0.0009444662539754567;
                    } else {
                      result[0] += 0.01294565392906368;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)43.5582844574780168) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3339271889634866652) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4290.319098872139875) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2924659694118884601) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2997.79619999661054) ) ) {
                    result[0] += -0.007116999691656111;
                  } else {
                    result[0] += -0.002043805354532501;
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += -0.007672426210477565;
              }
            } else {
              result[0] += -0.009139810266404228;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7158.326501222521074) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.473050000000000026) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.442099999999999993) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2627.9895310241468) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.56214887640449618) ) ) {
                      result[0] += -0.0024352304043536934;
                    } else {
                      result[0] += -0.010493809567720478;
                    }
                  } else {
                    result[0] += -0.0027698597933798665;
                  }
                } else {
                  result[0] += 0.0013858559938084581;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4917.478106812183796) ) ) {
                  result[0] += -0.00734511457356489;
                } else {
                  result[0] += -0.011697099644597721;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.02631578947369206) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                  result[0] += -0.00020629236510217257;
                } else {
                  result[0] += 0.007481484546009168;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01975000000000000019) ) ) {
                  result[0] += -0.012235069966790591;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1055500000000000188) ) ) {
                    result[0] += 0.003457029430923838;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
                      result[0] += -0.008040609523081858;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
            result[0] += -0.001009097065365741;
          } else {
            result[0] += -0.010057177738169864;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4825269858769296039) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5915500000000001313) ) ) {
              result[0] += 0.018460697996736965;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4629760000000000542) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                    result[0] += 0.008311337772266288;
                  } else {
                    result[0] += 0.0021878457059444365;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518295403837575108) ) ) {
                    result[0] += 0.005949506488401747;
                  } else {
                    result[0] += 0.013338220082254023;
                  }
                }
              } else {
                result[0] += 0.0027677816154016775;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3371000000000000663) ) ) {
                result[0] += 0.007885451011718628;
              } else {
                result[0] += 0.0015515844404649674;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3371000000000000663) ) ) {
                result[0] += -0.008658294899161567;
              } else {
                result[0] += 0.001977178150320979;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1937.925932230502212) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2986.391455690082239) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4006.744949928525784) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.010651994982674402;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4283830000000000693) ) ) {
                result[0] += -0.009602707958202884;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
                  result[0] += 0.0032279282914569963;
                } else {
                  result[0] += -0.005717747535063906;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3177.479148390085811) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.13486978090120516) ) ) {
                result[0] += -0.01321307702968322;
              } else {
                result[0] += -0.0026299956905251275;
              }
            } else {
              result[0] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
          result[0] += 0.010788815483367976;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11222.22816428306942) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.2322677322677329) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11144.16520893778397) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                    result[0] += -0.005557973750802623;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6221500000000000918) ) ) {
                      result[0] += 0.003888306224290222;
                    } else {
                      result[0] += -0.002803242380883412;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2523846967694989285) ) ) {
                    result[0] += 0.0031803085908699825;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
                      result[0] += -0.012335875340388196;
                    } else {
                      result[0] += -0.004600339670762447;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
                  result[0] += 0.0005690315365145991;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1854500000000000315) ) ) {
                    result[0] += -0.0017461858578285995;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.21666666666667567) ) ) {
                      result[0] += -0.005669319003535251;
                    } else {
                      result[0] += -0.0121655056204278;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)23070.06005165050738) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)142.2522321428571672) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2484845401189077485) ) ) {
                    result[0] += 0.006061329305622291;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4599500000000000255) ) ) {
                      result[0] += -0.004114178681303739;
                    } else {
                      result[0] += 0.005064666992275411;
                    }
                  }
                } else {
                  result[0] += -0.0071427735353160274;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)99.07708333333334849) ) ) {
                  result[0] += 0.0022898073749428242;
                } else {
                  result[0] += 0.00828645331453891;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
              result[0] += -0.004180737721644221;
            } else {
              result[0] += -0.013492536938811566;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-569.3023343863511627) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
              result[0] += -0.008626549653335234;
            } else {
              result[0] += -0.001919413581442029;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
              result[0] += -0.007827577730835825;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3095740000000000713) ) ) {
                result[0] += 0.003821200906215574;
              } else {
                result[0] += -0.0035340034765816543;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2850000000000000866) ) ) {
            result[0] += -0.006001383184562564;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.179108910891089934) ) ) {
              result[0] += -0.0016372323533441473;
            } else {
              result[0] += 0.006246259123165903;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3016800000000000592) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5029.288454347889456) ) ) {
                  result[0] += 0.0027941392611511447;
                } else {
                  result[0] += 0.015344508042396997;
                }
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02465000000000000524) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4496507448607858781) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7424500000000001654) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.007775870043888472;
                  }
                } else {
                  result[0] += -0.012025723282143628;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.75486037469071476) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08115000000000001379) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06815000000000000224) ) ) {
                      result[0] += 0.0013971316627382079;
                    } else {
                      result[0] += -0.007880760344445256;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3028.043267225880754) ) ) {
                      result[0] += 0.003549207159534952;
                    } else {
                      result[0] += -9.533894799014807e-05;
                    }
                  }
                } else {
                  result[0] += -0.0064013277320234966;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7158.326501222521074) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5995.730546760533798) ) ) {
                      result[0] += 0.0007336370656143014;
                    } else {
                      result[0] += 0.007548722470465976;
                    }
                  } else {
                    result[0] += -0.0008936689091210376;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.96040372670807628) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
                      result[0] += 0.002597516058489654;
                    } else {
                      result[0] += -0.0033084066798207993;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                      result[0] += 0.0015904882068747846;
                    } else {
                      result[0] += 0.011114871485175695;
                    }
                  }
                }
              } else {
                result[0] += -0.0037974971947982317;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1643500000000000238) ) ) {
                result[0] += 0.00907733987938433;
              } else {
                result[0] += 0.002153723737191362;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)82.64618349518126195) ) ) {
              result[0] += 0.00670472711058322;
            } else {
              result[0] += -0.005198577254948522;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
              result[0] += -0.004435665283771289;
            } else {
              result[0] += -0.011791441502644722;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5150000000000001243) ) ) {
          result[0] += -0.008278156211495517;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2082316587659429064) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1435407080639670985) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
                result[0] += -0.0010860946676041184;
              } else {
                result[0] += -0.007536599241121162;
              }
            } else {
              result[0] += 0.008796666097984693;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.545000000000000151) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
                result[0] += -0.01268011696954557;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1720691644993862512) ) ) {
                  result[0] += -0.010863981789782031;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1928899549823784032) ) ) {
                    result[0] += -0.001570712498224613;
                  } else {
                    result[0] += -0.006723733578768528;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10362.98456196805637) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.007979185953128272;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5936032516797165037) ) ) {
                      result[0] += 0.004619937690655346;
                    } else {
                      result[0] += -0.0032386845488110317;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6988000000000001988) ) ) {
                      result[0] += -0.010330594060519033;
                    } else {
                      result[0] += -0.0017588932575382716;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.18303571428572241) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.31844888366627622) ) ) {
                      result[0] += 0.0033337485240626887;
                    } else {
                      result[0] += -0.00865590978594446;
                    }
                  } else {
                    result[0] += 0.006525001150620379;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6055500000000001437) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78888888888889497) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5189379155588735859) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08905000000000001803) ) ) {
                      result[0] += -0.002558581097635387;
                    } else {
                      result[0] += 0.004469707699611868;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.006945614986027347;
                    }
                  }
                } else {
                  result[0] += 0.010465306595131178;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.21666666666667567) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.158598193308449209) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09215000000000002356) ) ) {
                      result[0] += -0.01806438309854175;
                    } else {
                      result[0] += -0.00971256854336254;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6339500000000001245) ) ) {
                      result[0] += -0.014909307059256341;
                    } else {
                      result[0] += -0.0029265722008532005;
                    }
                  }
                } else {
                  result[0] += 0.000332010102978105;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2668555000000000788) ) ) {
              result[0] += -0.0024272429715118168;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2855158726759733923) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1381000000000000283) ) ) {
                  result[0] += 0.013704833850008542;
                } else {
                  result[0] += 0.003072552928884347;
                }
              } else {
                result[0] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2782500000000000528) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)31299.3757595375755) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.53708791208791595) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15287.97369123098179) ) ) {
                  result[0] += 0.00023624995120900399;
                } else {
                  result[0] += -0.006240431038338489;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14402.23152588333323) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
                      result[0] += -0.008757481109238683;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.011529278161022335;
                  }
                } else {
                  result[0] += -0.0016315792824513065;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04715000000000000441) ) ) {
                result[0] += 0.006162589800964993;
              } else {
                result[0] += -0.009853010012273648;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.32834040296925338) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
                result[0] += -0.01024307121207579;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
                  result[0] += 0.010142602380164867;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
                    result[0] += -0.005352122744390711;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3787509271869893279) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.007256281930421053;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11458.24876613496417) ) ) {
                result[0] += -0.010557827758929831;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3083306738637045519) ) ) {
                  result[0] += -0.007867271133459452;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)21962.47439012520408) ) ) {
                    result[0] += 0.001643649618466927;
                  } else {
                    result[0] += -0.004485922143447193;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)118.0299834287672098) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.927625836485307165) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9301791105069795451) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.006740384527759859;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
              result[0] += -0.010555902646610823;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9631328576282706111) ) ) {
                result[0] += 0.0066436695349467185;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1369.851320094411903) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.007633017705427601;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
            result[0] += -0.005319218443966911;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2602911804898560555) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8728500000000001258) ) ) {
                  result[0] += 0.01001331359986088;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8891500000000001069) ) ) {
                    result[0] += 0.0023294891813821017;
                  } else {
                    result[0] += 0.0073076347588724;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3913.927573521703835) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)983.5309309347018143) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4706500000000000683) ) ) {
                      result[0] += 0.006261866935417226;
                    } else {
                      result[0] += 0.0006958391928398418;
                    }
                  } else {
                    result[0] += 0.006863899798315821;
                  }
                } else {
                  result[0] += 0.00123106920938704;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7821500000000000119) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2689713774233481458) ) ) {
                  result[0] += 0.013003311376524183;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1395500000000000351) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
                      result[0] += 0.004473552289101521;
                    } else {
                      result[0] += -0.0033945738452898903;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4881500000000000838) ) ) {
                      result[0] += 0.008278008158230809;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3249.949450539746977) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)14358.85907140550808) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1861530472994430141) ) ) {
                      result[0] += 0.0038584902733285477;
                    } else {
                      result[0] += -0.0013217203029898706;
                    }
                  } else {
                    result[0] += 0.012794867199885878;
                  }
                } else {
                  result[0] += -0.010490757200335663;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
          result[0] += -0.006487874311601986;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8066835000000001088) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3029155602761551269) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.975304878048781188) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7236.996653052084184) ) ) {
                  result[0] += 0.004355041131543097;
                } else {
                  result[0] += 0.01114604723069846;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                  result[0] += 0.010112453967179602;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4045.520025272053772) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.006655194373318594;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3701000000000000401) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1472221264172316191) ) ) {
                    result[0] += 0.0050002099186552094;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7513157894736842701) ) ) {
                      result[0] += 0.011890947750103832;
                    } else {
                      result[0] += 0.007292771350562787;
                    }
                  }
                } else {
                  result[0] += 0.014342944880843997;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9965277359150260805) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6614500000000002045) ) ) {
                    result[0] += 0.006338915773562443;
                  } else {
                    result[0] += 0.001512508173435896;
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9632500000000000506) ) ) {
              result[0] += 0.01353655388100512;
            } else {
              result[0] += 0.009775340165672176;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17051.15547769272598) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13476.57528643532896) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.674650000000000083) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4800849858356940891) ) ) {
                  result[0] += 0.009349789767844547;
                } else {
                  result[0] += 0.0013796890717092379;
                }
              } else {
                result[0] += -0.0008893798265762189;
              }
            } else {
              result[0] += 0.007569087882755705;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00378787878788067) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.00714285714286333) ) ) {
                  result[0] += -0.007964473193872449;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07449922958397615) ) ) {
                    result[0] += 0.006989847078200048;
                  } else {
                    result[0] += -0.0025336539339146395;
                  }
                }
              } else {
                result[0] += 0.008876684688120848;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0779500000000000054) ) ) {
                result[0] += -0.010240480211417767;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1860.099431670796776) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2596500000000001029) ) ) {
                    result[0] += -0.0019398135640504896;
                  } else {
                    result[0] += 0.006411622765380258;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.487126000000000059) ) ) {
                    result[0] += 0.0002589924350284925;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2782500000000000528) ) ) {
                      result[0] += -0.0017952097174834425;
                    } else {
                      result[0] += -0.009667419027505175;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)122.8416666666666828) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29069.44581527830451) ) ) {
                result[0] += 0.0037967363734810215;
              } else {
                result[0] += -0.007728669923322288;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-53428.13244237575418) ) ) {
                result[0] += -0.007561951655838604;
              } else {
                result[0] += -0.01677424612426813;
              }
            }
          }
        }
      } else {
        result[0] += 0.013790770765108868;
      }
    }
  }
}

