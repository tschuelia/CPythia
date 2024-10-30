
#include "prediction.h"

void predict_unit12(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3146902490233077776) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0711364934725852438) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1612811956950306047) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.924550000000000094) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.920300000000000118) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09453843892841291841) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.901900000000000146) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)39.02970297029703772) ) ) {
                    result[0] += -0.0011628402808729333;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.0011190985501769422;
                }
              } else {
                result[0] += -0.0026806944747203997;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11657.82777714064287) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.0064516129032306) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6526275000000001381) ) ) {
                      result[0] += -0.0022016073408961537;
                    } else {
                      result[0] += 0.000609084906604619;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
                      result[0] += 0.003405785630062436;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += -0.0028472803542950826;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24053.73781696207516) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.004680681771354243;
                }
              }
            }
          } else {
            result[0] += 0.0035744432234534706;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03931893328124715786) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9050000000000001377) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1450000000000000455) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0021595385935104135;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                result[0] += 0.0037772948629832604;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02622543668122271146) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0016831741876475554;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4290.319098872139875) ) ) {
                    result[0] += 8.756712709268208e-05;
                  } else {
                    result[0] += -0.0012565838594726956;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
                result[0] += 0.00222203849466977;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02255000000000000407) ) ) {
                  result[0] += -0.0022767090414740313;
                } else {
                  result[0] += 0.0005576922728403908;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04618346993186531885) ) ) {
                result[0] += -0.005712571780616989;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11994.21414222725798) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3781.451601085575476) ) ) {
                      result[0] += -0.0032538912089719826;
                    } else {
                      result[0] += 0.0007290798443429576;
                    }
                  } else {
                    result[0] += -0.00439200264626462;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                    result[0] += 0.003735303833840956;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78888888888889497) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.875961538461539568) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0553124705129175373) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0031606858501615495;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3686.786422307056) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2139.565893084248728) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0019009403012944029;
                }
              } else {
                result[0] += -0.0013841552769581326;
              }
            }
          } else {
            result[0] += 0.002451939831732303;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05367276199100708828) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)12670.19278798460982) ) ) {
              result[0] += 0.00034237317907007386;
            } else {
              result[0] += -0.0023915063485514545;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22862.06187916693671) ) ) {
              result[0] += -0.00026946764312377566;
            } else {
              result[0] += -0.006975957942138028;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07519656588417543419) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.088194444444444908) ) ) {
          result[0] += 0;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.33974358974359831) ) ) {
            result[0] += 0.004253103559216283;
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1735709706884873416) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03705000000000000654) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01875000000000000278) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.60681818181819125) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.18253968253969077) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.71032126588348277) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
                      result[0] += 0.0023366339960294124;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.002861561399777542;
                  }
                } else {
                  result[0] += 0.004305024429406901;
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1123872490207054042) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08188154061328727085) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0016464492122039763;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7875500000000000833) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0011414311828630492;
                    }
                  }
                } else {
                  result[0] += -0.004338573315740126;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.004387797686673898;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)96.63122171945703087) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7450000000000001066) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.860555555555555962) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8116500000000000936) ) ) {
                    result[0] += -0.001129130626569626;
                  } else {
                    result[0] += -0.005603575931927394;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1612811956950306047) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
                    result[0] += -0.0025079718067241453;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.001353510829336657;
                  }
                }
              } else {
                result[0] += 0.0016999103493514963;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0313500000000000098) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6770500000000000407) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7650000000000001243) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3064.437254561459213) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 7.042742406630885e-05;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.236694677871149395) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.221246000000000026) ) ) {
                    result[0] += 0.00015068287871722606;
                  } else {
                    result[0] += 0.005624000690849536;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5639.254044705900924) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7092500000000001581) ) ) {
                      result[0] += 0.002224031240047534;
                    } else {
                      result[0] += -0.0006028602790381067;
                    }
                  } else {
                    result[0] += 0.003936143114837059;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3742.494223235453774) ) ) {
                    result[0] += -0.003967708563021238;
                  } else {
                    result[0] += 0.0007376841167661993;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.006183197385763318;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2082316587659429064) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.78759398496241317) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1247124030991497295) ) ) {
                  result[0] += -0.00075404514870978;
                } else {
                  result[0] += 0.0015767986027633736;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3350000000000000755) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5973.486975242797598) ) ) {
                      result[0] += 0.0010094076248881886;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.004708511876220326;
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1359000000000000485) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1766435000000000366) ) ) {
                      result[0] += -0.0006281468191203201;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.8232142857142879) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0037466943056229897;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3533.336699232966112) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6850000000000001643) ) ) {
                      result[0] += 0.0005972140768117788;
                    } else {
                      result[0] += -0.0007545531529476575;
                    }
                  } else {
                    result[0] += 0.003783457964378109;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)118.3581481481481603) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45141065830721239) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2577865146990329093) ) ) {
                      result[0] += 0.0013883398765277206;
                    } else {
                      result[0] += -0.00020576576961990655;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1183000000000000163) ) ) {
                      result[0] += 0.006404497888339386;
                    } else {
                      result[0] += 0.001056450394022984;
                    }
                  }
                } else {
                  result[0] += -0.0019660473169508964;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1446500000000000286) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5776500000000001078) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4496507448607858781) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.69385026737968047) ) ) {
              result[0] += -0.0008032101723562586;
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
              result[0] += 0.0039373967414725606;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1839.943830114362981) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0028229566946720167;
                }
              } else {
                result[0] += -0.0002602959661093459;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2257766530001369121) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1238.018760986395819) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0011308299289146573;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0048726132128967545;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2655.127693887397527) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24053.73781696207516) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.118717000000000017) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0012912049859230632;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9250000000000001554) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8050000000000001599) ) ) {
                      result[0] += -0.00046761706542700824;
                    } else {
                      result[0] += 0.0005223747383161907;
                    }
                  } else {
                    result[0] += -0.0015946808386418834;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.485097903309652079) ) ) {
                  result[0] += -0.0010550857116226728;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1155050000000000104) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.029850000000000005) ) ) {
                      result[0] += 6.484537890389152e-05;
                    } else {
                      result[0] += 0.002937174190008627;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.14908063427800311) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.742610837438423932) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.219437893081761315) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
                      result[0] += -0.00039317381105110786;
                    } else {
                      result[0] += 0.00047721670316695157;
                    }
                  } else {
                    result[0] += -0.002235467367309661;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
                    result[0] += 0.004309899449155456;
                  } else {
                    result[0] += 0.0005412962904090899;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.31475748194014663) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1682.526551393980526) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)829.040359399005979) ) ) {
                      result[0] += -0.0010756713981016715;
                    } else {
                      result[0] += -0.004105262602826193;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2668.597659326529538) ) ) {
                      result[0] += 0.002954596372769728;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6298699906795736103) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3689500000000000557) ) ) {
                      result[0] += 0.0038399916186967202;
                    } else {
                      result[0] += -0.00014062781347554877;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
                      result[0] += -0.0030176049016170546;
                    } else {
                      result[0] += -8.26750502663621e-05;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.638450000000000184) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.433327285921625727) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4420656524973072266) ) ) {
                result[0] += 0.0043400938554822065;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1172.762349355894003) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355947963695212921) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.00048678479557534603;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0953500000000000042) ) ) {
                  result[0] += -0.003031746669710321;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              result[0] += 0.0016904499015693566;
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8150000000000000577) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03385000000000000508) ) ) {
              result[0] += 0.0017374721794910352;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1344370000000000287) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0004232143048773185;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2818837338874919385) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6339500000000001245) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
                    result[0] += -0.002036469238819627;
                  } else {
                    result[0] += -0.009238489477520881;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6614500000000002045) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
                      result[0] += -0.0009592346110436852;
                    } else {
                      result[0] += 0.004695257966063337;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1052900224917293903) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.002672345010181194;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3344.138681686334621) ) ) {
                    result[0] += -0.002341967225726366;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4148169003269751576) ) ) {
                    result[0] += 0.006915092991031569;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2964813357014444151) ) ) {
                result[0] += -0.008898252665307008;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
                  result[0] += -0.003525614309401921;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1201.367728319936987) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2534500000000000641) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)144.5092417440413044) ) ) {
                    result[0] += 0.00030774785955844735;
                  } else {
                    result[0] += 0.008777884528669172;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)599.5344662300684604) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0034612116936553468;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0045751210797668656;
                    }
                  }
                }
              } else {
                result[0] += -1.4531386494350638e-05;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4568.919520521660161) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0013636470669777891;
                  }
                } else {
                  result[0] += -0.0004910243797958191;
                }
              } else {
                result[0] += -0.0014542472124307341;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3571.445901236788359) ) ) {
                result[0] += -0.004535784406806462;
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.758730158730161364) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1458.29730909354339) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.004563772411967665;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
                      result[0] += -0.0024581145670142268;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2566500000000001003) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.005458474154034774;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4122825000000000517) ) ) {
                  result[0] += 0.007508543895720627;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
                    result[0] += -0.0013718344215586722;
                  } else {
                    result[0] += 0.0018823692810872176;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.940712851405623773) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1928899549823784032) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0008879230759479696;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.31844888366627622) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2777090000000000392) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.006199393870649572;
              }
            } else {
              result[0] += -0.0008924146247862111;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7166500000000001203) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3533.336699232966112) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.382039592976585296) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2304500000000000159) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.71008403361344818) ) ) {
                  result[0] += 0.0019216018561037144;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2782500000000000528) ) ) {
                  result[0] += -0.006718597056770591;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3368947088135722523) ) ) {
                    result[0] += -0.003552634487408524;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3578754866530491907) ) ) {
                      result[0] += 0.00044627742314402267;
                    } else {
                      result[0] += -0.0008874810237293947;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6969500000000000695) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6069337742791702794) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.473050000000000026) ) ) {
                      result[0] += 0.0022427625776809228;
                    } else {
                      result[0] += -0.0001080870620055212;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
                      result[0] += -0.003180200197401021;
                    } else {
                      result[0] += -0.00013437271428209447;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.005113694557225076;
                  }
                }
              } else {
                result[0] += 0.0027303529216184262;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1366.16280735785358) ) ) {
              result[0] += -0.006952887011883198;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
            result[0] += -0.0015555751820414488;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3577.178536742065262) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2087.634986269159981) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.006572590484842596;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7451.581543301115744) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1297121988736138765) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.005311326090019555;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1078956535486476492) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.005010440842062931;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)829.040359399005979) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)786.2947641301196882) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2149.529036211334187) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07895000000000000628) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4698276866784543149) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3970620000000000815) ) ) {
              result[0] += 0.005861662260288321;
            } else {
              result[0] += 0;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2690.993343004484359) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
                result[0] += 0.0006040635887961997;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3213010000000000588) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.002970719221911946;
                }
              }
            } else {
              result[0] += 0.0017802768711314431;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2391000000000000347) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.563301282051282826) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)260.2258709753264725) ) ) {
                result[0] += 0.0005414737736586588;
              } else {
                result[0] += -9.08046633157115e-05;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                      result[0] += -0.006802759518888568;
                    } else {
                      result[0] += -0.0016175973213084414;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2596500000000001029) ) ) {
                      result[0] += -0.0017383980167322065;
                    } else {
                      result[0] += 0.0004065332149217898;
                    }
                  }
                } else {
                  result[0] += 0.0008358246633250016;
                }
              } else {
                result[0] += -0.007372749740973755;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
              result[0] += 0.004915608339676247;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6903684837426190546) ) ) {
                result[0] += 0.002404774497670272;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11531.82324522852832) ) ) {
                      result[0] += 0.00015888657649254585;
                    } else {
                      result[0] += -0.00038282016287319895;
                    }
                  } else {
                    result[0] += 0.0034400176821132015;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3431500000000000661) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)118.0299834287672098) ) ) {
                      result[0] += -0.002075283655692981;
                    } else {
                      result[0] += 0.0001861311936911105;
                    }
                  } else {
                    result[0] += -0.0032305009077226512;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.746743020758769305) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.535781628804885113) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4026600000000000734) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.328559547571523947) ) ) {
                result[0] += -0.0037297489117392303;
              } else {
                result[0] += 0.0006910253349085392;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-952.9475905187154012) ) ) {
                    result[0] += 0.00031822784788248864;
                  } else {
                    result[0] += 0.003541211008456187;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                    result[0] += 0.0016061495334458089;
                  } else {
                    result[0] += -0.0016454402203977723;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7319235000000000602) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8079557428872498059) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0017277047062841668;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-427.1704539211891074) ) ) {
                      result[0] += 3.954487292379753e-05;
                    } else {
                      result[0] += -0.0012561855868122218;
                    }
                  }
                } else {
                  result[0] += -0.0014538388968748648;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                result[0] += 0.00022216693490084295;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += -0.0033956492482127656;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1264500000000000346) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7552793108361041119) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4625500000000000722) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.004731210460784989;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.002899908817827326;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
                      result[0] += 0.00421988113733338;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.0001847567467889729;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044849653237345022) ) ) {
                result[0] += -0.0020438891889033904;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6450000000000001288) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5229930000000001522) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
                  result[0] += 0.002018333079605639;
                } else {
                  result[0] += 0.008257839560523925;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6133040000000001823) ) ) {
                  result[0] += -0.0019768802110679573;
                } else {
                  result[0] += 0.0030072844394413174;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.440904500000000088) ) ) {
        result[0] += 0.004854600176068938;
      } else {
        result[0] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)983.5309309347018143) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
            result[0] += 0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5751000000000000556) ) ) {
              result[0] += -0.004368505753449989;
            } else {
              result[0] += 0;
            }
          }
        } else {
          result[0] += -0.007020748186204172;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1793500000000000372) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5606243401883367339) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0015178871948582956;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.004994010878941789;
            }
          }
        } else {
          result[0] += -0.0025274439576926937;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3755158646863254179) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3634578871420977575) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1222.028157201931208) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01255000000000000213) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.002431533518562524;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1366.16280735785358) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015000000000001013) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2951822687085968178) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0015936056896280022;
                }
              } else {
                result[0] += -0.0037987495562535364;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5454500000000001014) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7957.086656945748473) ) ) {
                    result[0] += -0.00523926893996905;
                  } else {
                    result[0] += -0.0004923563581741198;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.638450000000000184) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19559.23761677038419) ) ) {
                    result[0] += -0.0007585116390514528;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4450000000000000622) ) ) {
                      result[0] += -0.00024088476765166526;
                    } else {
                      result[0] += 0.002865703037608069;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6497500000000001608) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2624768466104180908) ) ) {
                      result[0] += 0.000757235067821229;
                    } else {
                      result[0] += -0.0049700262142907455;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.656050000000000133) ) ) {
                      result[0] += 0.0042187946762897695;
                    } else {
                      result[0] += -5.667143383056466e-05;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2818837338874919385) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4059235000000000482) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
                result[0] += 0.007221444664335339;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5142890000000001072) ) ) {
                result[0] += -0.0006749826834937892;
              } else {
                result[0] += 0.002220779742925374;
              }
            }
          } else {
            result[0] += -0.0005333126233947585;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.405609901914840254) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934555000000000302) ) ) {
            result[0] += 0.0005437472791840661;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.351912500000000017) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87146226415094574) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6339500000000001245) ) ) {
                  result[0] += -0.0015780459782598745;
                } else {
                  result[0] += -0.006133664810258726;
                }
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3819320000000000492) ) ) {
                result[0] += 0.0020684972441226477;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.401298701298702376) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107150000000000023) ) ) {
                      result[0] += -0.0020751299384121464;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0016493698779527937;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
                    result[0] += -0.005266732500747199;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4103386442176324422) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221000000000000141) ) ) {
              result[0] += 0.0004650367527028774;
            } else {
              result[0] += 0.0062610347192860825;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4369219652904519635) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1201.367728319936987) ) ) {
                  result[0] += 0.00036122338494690853;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13395.22104316800687) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
                      result[0] += -0.0009023154480035777;
                    } else {
                      result[0] += -0.004361997423630059;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.60681818181819125) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1546000000000000429) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0035316829343457565;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3700350016849980883) ) ) {
                    result[0] += -0.001508417998350692;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2020500000000000351) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1667500000000000371) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13833.51142176279791) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5801.456541730448407) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0017882103227979164;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08235000000000002041) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0031517745261095834;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1201.367728319936987) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.197938500000000045) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004289150135493289;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3819500000000000672) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.647150000000000003) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0029593287231206625;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.62645348837209447) ) ) {
                      result[0] += 0.00031651345381302723;
                    } else {
                      result[0] += 0.004602747251914882;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2997.79619999661054) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7034.526718448786596) ) ) {
                      result[0] += -0.0029629530841614057;
                    } else {
                      result[0] += 0.0007020055423831776;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
                      result[0] += -0.00045888901131456954;
                    } else {
                      result[0] += 0.0014264778823978184;
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
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1925500000000000267) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1784550515539286286) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
            result[0] += -0.0018124327332743728;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09126037187329660849) ) ) {
              result[0] += -0.00035446543019401256;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.08712121212122526) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.71832579185520729) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
                    result[0] += 0.001755500777604106;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.0008266228455237688;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6350000000000001199) ) ) {
                    result[0] += 0.00011777356037600561;
                  } else {
                    result[0] += 0.004942457212490883;
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)18183.16014768836976) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0953500000000000042) ) ) {
                result[0] += -7.873456149401648e-05;
              } else {
                result[0] += -0.003747286832222577;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.849423500000000109) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.414688759516345984) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8924000000000001931) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04272266684492439376) ) ) {
                      result[0] += 0.00021141340355123968;
                    } else {
                      result[0] += -0.0007549502453200838;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5567.746532477868641) ) ) {
                      result[0] += 0.002011175223938479;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001450000000000000334) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.86800573888092458) ) ) {
                      result[0] += -0.003229221063808592;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                      result[0] += -0.0005782340520198118;
                    } else {
                      result[0] += 0.0002880624034627462;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08580896800492683607) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9632500000000000506) ) ) {
                    result[0] += 0.0007763344122071823;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.005577417012869811432) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.002096217638621346;
                    }
                  }
                } else {
                  result[0] += -0.003949408057386025;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)101.5672514619883202) ) ) {
                result[0] += -4.855893647278535e-05;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4368015000000000092) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2164415000000000366) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.005220133180996329;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
                result[0] += -0.0008751553430522696;
              } else {
                result[0] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5885500000000001286) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1316846325177797872) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.003902331427758362;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.647150000000000003) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
              result[0] += -0.005152200490445754;
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6722500000000001252) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
                result[0] += 0.003383234450240836;
              } else {
                result[0] += -0.00022016757658527414;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.86905594405594577) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.45767090620031858) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2268.305050740483694) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3064.401422747675497) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0016180344807543122;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.002364066193854875) ) ) {
                      result[0] += 0.0004060640639835156;
                    } else {
                      result[0] += -0.0005092619480841495;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08706594241544672597) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1219665183460445085) ) ) {
                      result[0] += 0.002044096650061169;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06175000000000000627) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8116500000000000936) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004771889455007302;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.09333333333334792) ) ) {
                      result[0] += 0.0020244064473417026;
                    } else {
                      result[0] += -0.0011688184146552807;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1036061969132185817) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
                      result[0] += -0.0004504834941637233;
                    } else {
                      result[0] += -0.005664629467404427;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2552661953259802718) ) ) {
                      result[0] += -0.0001915976819214617;
                    } else {
                      result[0] += -0.002682957509566009;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4800849858356940891) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5623500000000001275) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7650000000000001243) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1450000000000000455) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
                  result[0] += -3.872647309682863e-05;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.0013425995517930423;
              }
            } else {
              result[0] += -0.0012297530371323368;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6296205000000001384) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4917.478106812183796) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
                    result[0] += 0.0017348901855906908;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5159500000000001307) ) ) {
                      result[0] += 0.01012233525878951;
                    } else {
                      result[0] += 0.0036525526983787206;
                    }
                  }
                }
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4681341459817245365) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.18541666666667567) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2928.425989978642974) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1851412897798530577) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09385000000000003062) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4368015000000000092) ) ) {
                      result[0] += 0.0043078986293803405;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.007472435375810464;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2257766530001369121) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3616.651907341595233) ) ) {
                      result[0] += -0.0033081084384765608;
                    } else {
                      result[0] += 0.0019957880823258324;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5706.165657108974301) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0031570647255523905;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3488086661974699187) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2139.565893084248728) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0023630391279797565;
                    }
                  } else {
                    result[0] += -0.0026846938807606954;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1510.595905575025881) ) ) {
                      result[0] += 0.001141944913423545;
                    } else {
                      result[0] += -0.0030133872606083593;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                      result[0] += -0.00035617379612107314;
                    } else {
                      result[0] += -0.006536207498825818;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2367240667710305002) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2019559617197731194) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1850000000000000255) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0016567073869510306;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.115000000000000005) ) ) {
                      result[0] += -0.0002748937724855624;
                    } else {
                      result[0] += 0.0031894452632116083;
                    }
                  }
                } else {
                  result[0] += 0.004699593899712922;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2924659694118884601) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2276.637434844240943) ) ) {
                    result[0] += 0.000517664137283107;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4650000000000000244) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0036503649713068467;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
                      result[0] += -0.00021962577239342668;
                    } else {
                      result[0] += -0.0030524295787925262;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1729500000000000204) ) ) {
                      result[0] += 0.0027334290912605272;
                    } else {
                      result[0] += -0.001252003637016004;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1407.682258252089468) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.004141819640239647;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.25500000000000006) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6327627825323679511) ) ) {
                result[0] += -0.00018423369015808932;
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7371304289733293658) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.98611111111112137) ) ) {
                  result[0] += 0.001793412988032795;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03635000000000000731) ) ) {
                result[0] += -0.001667421413943265;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)983.5309309347018143) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5089500000000001245) ) ) {
                    result[0] += -0.0007766178765546527;
                  } else {
                    result[0] += 0.00038792701474271214;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1407.682258252089468) ) ) {
                    result[0] += 0.00502925056840609;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5257804178184334321) ) ) {
                      result[0] += -0.000981280119178245;
                    } else {
                      result[0] += 0.00136070910095615;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5776500000000001078) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5556500000000000883) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4929000000000000603) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6497217366336467403) ) ) {
                      result[0] += 0.0003316108232065917;
                    } else {
                      result[0] += -0.0012743248519584993;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441180000000000294) ) ) {
                      result[0] += 0.0013002399993368306;
                    } else {
                      result[0] += -0.0031647667044574068;
                    }
                  }
                } else {
                  result[0] += 0.002665148853530822;
                }
              } else {
                result[0] += -0.004646737468315036;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9379530110910064833) ) ) {
            result[0] += 0.0038403868987781993;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0022780313420312608;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9999263622974964294) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0012438634058197693;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1395500000000000351) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9930683563748080589) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.808257918552036436) ) ) {
                    result[0] += 0.00015755087928407858;
                  } else {
                    result[0] += 0.005303256195183159;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09065000000000002223) ) ) {
                    result[0] += 0.0003094817488879488;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                result[0] += -0.00028083475890587417;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2086500000000000299) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.73128342245989408) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3339271889634866652) ) ) {
          result[0] += -0.0006135332786767714;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5001000000000001) ) ) {
            result[0] += 0.0010720461369615626;
          } else {
            result[0] += 0.007551145464050533;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6659500000000001529) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            result[0] += 0;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20716.01340554505077) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0059290948365584946;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7759500000000000286) ) ) {
            result[0] += 0.006001186217507498;
          } else {
            result[0] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.457966404524975057) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6988000000000001988) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7158.326501222521074) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6722500000000001252) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5882.835930520358488) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3686.786422307056) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
                      result[0] += 0.00042962174470619443;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005279668598962314;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3191980000000000373) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0020885038106556353;
                  }
                }
              } else {
                result[0] += 0.0027877313194997473;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11458.24876613496417) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2361862430022099446) ) ) {
                  result[0] += -0.006201027493899791;
                } else {
                  result[0] += -0.002009834008204422;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)17604.53908125846283) ) ) {
                    result[0] += -0.0025835721919537542;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-49080.05530822202854) ) ) {
                    result[0] += -0.0002173914795768063;
                  } else {
                    result[0] += 0.0027147783512996362;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
              result[0] += -0.006213722480725545;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3368947088135722523) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7661500000000001087) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2879000000000001003) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0032199220315634928;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2227500000000000313) ) ) {
                result[0] += -0.0027723457368161205;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2566500000000001003) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.376459500000000058) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.004865151100545254;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1316846325177797872) ) ) {
                      result[0] += 0.00018434011652302873;
                    } else {
                      result[0] += -0.0038276810204632737;
                    }
                  } else {
                    result[0] += 0.002312774313899483;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2696500000000000563) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
                result[0] += -0.0010022449201329575;
              } else {
                result[0] += 0.0010022434614275252;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4478500000000000258) ) ) {
                  result[0] += 0.001710643700381056;
                } else {
                  result[0] += 0.0058839981019222064;
                }
              } else {
                result[0] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3557370000000000254) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2384160000000000446) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2144260000000000332) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3002000000000000779) ) ) {
                    result[0] += -0.0006663331740574402;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0029264026020289773;
                    }
                  }
                } else {
                  result[0] += -0.0024617045613024428;
                }
              } else {
                result[0] += 0.0026777521090873935;
              }
            } else {
              result[0] += -0.002251422295281246;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8957715509494285078) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4029797040248608853) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.7610275038920733) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5159500000000001307) ) ) {
                    result[0] += -0.00016223672908983962;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32109164420485392) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.004602941136600406;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.14277939042090537) ) ) {
                    result[0] += -0.0036746591907685085;
                  } else {
                    result[0] += 0.00013349089698376732;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.0592625109745395) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.003539259424991499;
                    }
                  } else {
                    result[0] += -0.001246788558106525;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.02631578947369206) ) ) {
                    result[0] += 0.00572842730358283;
                  } else {
                    result[0] += 0.0009476334607104628;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)690.7475206421901248) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6768.866270911575157) ) ) {
                  result[0] += 0.005070437848527483;
                } else {
                  result[0] += -0.0005726334843053365;
                }
              } else {
                result[0] += -0.0014673596245243614;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.87026925953627732) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.004436067414844977;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6589500000000001467) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869734242044373551) ) ) {
                result[0] += 0.003336127087935921;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2342500000000000415) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4580000000000000182) ) ) {
                    result[0] += -0.0025810934864850675;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.536038961038963535) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.007794142246101574;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4082770000000000565) ) ) {
                      result[0] += 0.0012270629159561038;
                    } else {
                      result[0] += -0.0003237262243326969;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.0026282773481540824;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5159500000000001307) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5797500000000000986) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.92861142217245352) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4472500000000000364) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4103386442176324422) ) ) {
            result[0] += -0.003055832048589712;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1250500000000000222) ) ) {
                result[0] += 0.005316485726220681;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.294700000000000073) ) ) {
                  result[0] += -0.0016645870143861135;
                } else {
                  result[0] += 0.001991392449531855;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)901.8913219877068741) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)572.059826422058336) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2330500000000000071) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)361.7598371524995287) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.005367768503621853;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3284500000000000752) ) ) {
                      result[0] += -0.0026754883503219157;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3991483633491397787) ) ) {
                    result[0] += -0.0004941203478080533;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
                      result[0] += 0.004808536268084317;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
                  result[0] += 0.0006978556371404866;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.120050465838510867) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4257500000000000173) ) ) {
                      result[0] += -0.00400498732529889;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)760.1404084372057923) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77179878048780548) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1723.432309542571375) ) ) {
                result[0] += 0.00031892088703424075;
              } else {
                result[0] += -0.0013004510763556373;
              }
            } else {
              result[0] += -0.005551640434630274;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6112.637109564428101) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11745.44574006947005) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.487050000000000094) ) ) {
                  result[0] += 0.002517560264281095;
                } else {
                  result[0] += -0.0004178708437787335;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2779054249029654367) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
                    result[0] += -0.006996805538285883;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.351912500000000017) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
                    result[0] += 0.0002598268758330857;
                  } else {
                    result[0] += -0.0008601102427597994;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.144153487166192917) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5568739105774286324) ) ) {
                      result[0] += 0.004152798735331576;
                    } else {
                      result[0] += 0.0002319969512242839;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4901500000000000301) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.003335111156038197;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9439.28927156883401) ) ) {
            result[0] += -0.0009258629500201923;
          } else {
            result[0] += 0.005577241918837437;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.487050000000000094) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
              result[0] += -0.0018087679452630072;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9139.728134485791088) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.04232804232805165) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-35445.64132608562795) ) ) {
                      result[0] += 0.0034668579429381935;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04145000000000000767) ) ) {
                      result[0] += -0.0015711340866785732;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6650000000000001465) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0017479954187628458;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5350000000000001421) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1254.980453496960536) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2655.127693887397527) ) ) {
                      result[0] += -0.0010157937442231949;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0004557255140433321;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6282926336678872348) ) ) {
                    result[0] += -0.0003628503192858852;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.13486978090120516) ) ) {
                      result[0] += 0.0003875147277335971;
                    } else {
                      result[0] += 0.005433623494764386;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
              result[0] += 0.00457671886634144;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7451.581543301115744) ) ) {
                result[0] += -0.0005587554227343434;
              } else {
                result[0] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
        result[0] += 0.0007716035209392271;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
          result[0] += 0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.69385026737968047) ) ) {
            result[0] += -0.0036347518233673624;
          } else {
            result[0] += -1.1397098160575379e-05;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5184500000000001885) ) ) {
      result[0] += 0.0027931060419622397;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.92861142217245352) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73508771929824768) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5482000000000001316) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05255000000000000643) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1750.811071603854316) ) ) {
                result[0] += -0.0023130322659245446;
              } else {
                result[0] += 0.0007922707816046996;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5528205492927561471) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.48596938775510345) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.006039464604549135;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3576884733354243617) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2841076982928243955) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.003660540755598273;
                  }
                } else {
                  result[0] += -0.00011095533062862276;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3060106677825033539) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3002208421277365313) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2552661953259802718) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7985500000000000931) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
                      result[0] += -0.0004744058952640474;
                    } else {
                      result[0] += 0.0015623377049235876;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1259607501907395177) ) ) {
                      result[0] += 0.0002526117851857331;
                    } else {
                      result[0] += -0.0017369342814810812;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                      result[0] += 0.0003617742158267909;
                    } else {
                      result[0] += -0.002592807271783923;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.656050000000000133) ) ) {
                      result[0] += -0.0017242132924438834;
                    } else {
                      result[0] += 0.0035161795179187764;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1002500000000000197) ) ) {
                  result[0] += 0.00021824847493840332;
                } else {
                  result[0] += 0.006619679855482666;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)530.0555639917105282) ) ) {
                result[0] += 0.0024257400137195724;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)786.2947641301196882) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5095115945175783256) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.005958695158495827;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6010500000000000842) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3604310129059999368) ) ) {
                      result[0] += 0.004828316831758376;
                    } else {
                      result[0] += 0.00019438571851565018;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                      result[0] += -0.00023491856565231953;
                    } else {
                      result[0] += -0.001690379674558239;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += 0.006054360637465359;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14091.15150991420705) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4662.809440025213917) ) ) {
            result[0] += 0.003899185316401768;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.106606960732522002) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)101.5672514619883202) ) ) {
                result[0] += -0.0028895706960809036;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)131.6369047619047876) ) ) {
                  result[0] += 0.004114672604345517;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-40295.74630962839001) ) ) {
                      result[0] += 0.0010205220966016965;
                    } else {
                      result[0] += -0.0007882709190330575;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0044039360748602254;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.405609901914840254) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.79864864864865481) ) ) {
                  result[0] += 0.003692277282799455;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02895000000000000351) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4150000000000000355) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0030078909231594842;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)14358.85907140550808) ) ) {
                      result[0] += 0.000956127555242883;
                    } else {
                      result[0] += -0.0004116120699420414;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6181500000000000883) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3095740000000000713) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114255000000000162) ) ) {
                      result[0] += -0.0007254710352001009;
                    } else {
                      result[0] += 0.0006846123402762064;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3112500000000000822) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003363724029643643;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4496507448607858781) ) ) {
                      result[0] += -0.002305018178275908;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.005072836039177074;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2384160000000000446) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7866.211076535222674) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2511183070799432038) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1974103251759973532) ) ) {
                    result[0] += 1.7102817349632854e-05;
                  } else {
                    result[0] += -0.0004156674691830688;
                  }
                } else {
                  result[0] += 0.0034540311024950825;
                }
              } else {
                result[0] += -0.00018580395601303724;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.34234234234234506) ) ) {
                result[0] += -0.0005198932750904719;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6941500000000001558) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.30306122448979878) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9013.430510330945253) ) ) {
                    result[0] += -0.004614294273987151;
                  } else {
                    result[0] += -0.0014368701768130243;
                  }
                } else {
                  result[0] += -0.00041098401145695207;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.79864864864865481) ) ) {
                result[0] += -0.0014157025337727168;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)99.07708333333334849) ) ) {
                  result[0] += 0.0027267787817220656;
                } else {
                  result[0] += -0.0011484785835921727;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3546921061251228635) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.264116657309969971) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02815000000000000488) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02459183207930617718) ) ) {
                result[0] += -0.0023848068363826655;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1909226976060683645) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.60681818181819125) ) ) {
                      result[0] += -0.0030171569838729835;
                    } else {
                      result[0] += 0.0001237841173907166;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.06168384879725863) ) ) {
                      result[0] += 0.004787798032799643;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5250000000000001332) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.002528398043331326;
                  }
                }
              }
            } else {
              result[0] += 0.002821610616330844;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.736068111455108642) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.27991452991453158) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9836000000000001409) ) ) {
                      result[0] += 0.0011232808142814129;
                    } else {
                      result[0] += -6.032122636050406e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                      result[0] += -0.003597920676821304;
                    } else {
                      result[0] += 0.0005629112684281984;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8237500000000000933) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.78019323671498242) ) ) {
                      result[0] += -0.0006358582984674624;
                    } else {
                      result[0] += 0.0018325373751701133;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.138110787595931539) ) ) {
                      result[0] += -0.0004458594239121518;
                    } else {
                      result[0] += -0.0035760989415667935;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007250000000000000368) ) ) {
                    result[0] += -0.0024413094724801457;
                  } else {
                    result[0] += 0.0004256516581661023;
                  }
                } else {
                  result[0] += -0.004672633193724673;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2624768466104180908) ) ) {
                result[0] += 0.004234237002461552;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3254789019904610892) ) ) {
                  result[0] += -0.0005787595331396721;
                } else {
                  result[0] += 0.0016055476807760192;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03705000000000000654) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2223713548084257641) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7250000000000000888) ) ) {
                result[0] += -9.074315394273061e-05;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08388546939293617388) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
                    result[0] += 0.0020241658264194486;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.005922964967020399;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0313500000000000098) ) ) {
                result[0] += -0.0019205095958694661;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.432034895516332895) ) ) {
                  result[0] += 0.0009613097997597106;
                } else {
                  result[0] += -0.0001319928709391122;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36696.22831575417513) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2508523744426000568) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)269.9002463054187615) ) ) {
                  result[0] += 0.001234892747362047;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1110915000000000236) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0013876975733482955;
                  }
                }
              } else {
                result[0] += -0.004106943743093962;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5639.254044705900924) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3107.181136317587516) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.808257918552036436) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
                      result[0] += 0.00029282197114719057;
                    } else {
                      result[0] += -0.0030320092462572854;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.154992760675902036) ) ) {
                      result[0] += 6.616600353724401e-05;
                    } else {
                      result[0] += 0.002380873393815665;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.44068627450981523) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0024713935272845616;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3016800000000000592) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00285213610944319;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4033000000000000473) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13067.72038594807418) ) ) {
                      result[0] += -0.0024333266955668975;
                    } else {
                      result[0] += 0.0019718047298980627;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)12670.19278798460982) ) ) {
                      result[0] += 0.0014794404136202115;
                    } else {
                      result[0] += -5.167655413937963e-06;
                    }
                  }
                } else {
                  result[0] += -0.00232241359434945;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3450000000000000289) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17639.05176736719659) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0011838617364938594;
            }
          } else {
            result[0] += 0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6796000000000000929) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.03240740740741188) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1264500000000000346) ) ) {
                result[0] += 0.004161688138477789;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0.00897818416837163;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
              result[0] += -0.0002019807825092903;
            } else {
              result[0] += 0.0016753135223894161;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3634578871420977575) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
          result[0] += 0.0003735569412802465;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2280500000000000305) ) ) {
            result[0] += -0.005925078099875585;
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3688321311376249745) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4566350000000000686) ) ) {
            result[0] += 0.0035726117515295416;
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.405609901914840254) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2086500000000000299) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1427500000000000158) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2793.363867362420478) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11144.16520893778397) ) ) {
                      result[0] += -0.00265636715278382;
                    } else {
                      result[0] += 0.0009704884420292976;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                      result[0] += -0.002308229021532695;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2703.500010395392565) ) ) {
                    result[0] += 0.00441845909619736;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2807000000000000051) ) ) {
                  result[0] += -0.004859118884795845;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30909090909091042) ) ) {
                    result[0] += 0.0013269720597183074;
                  } else {
                    result[0] += -0.0007490778491574094;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3833.159599586038439) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.17517875383044057) ) ) {
                  result[0] += -0.0005652989175951741;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += -0.006789990362348453;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4103386442176324422) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.17517875383044057) ) ) {
                result[0] += 0.00386818227382574;
              } else {
                result[0] += -0.0009550994164031573;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2412.226788823968036) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2793.363867362420478) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6133040000000001823) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
                      result[0] += -0.00020075394235409807;
                    } else {
                      result[0] += 0.002613072801614995;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7607063765522581456) ) ) {
                      result[0] += -0.002267570958676978;
                    } else {
                      result[0] += 0.0005330664184710561;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5261960000000001081) ) ) {
                      result[0] += -0.0013486760312363094;
                    } else {
                      result[0] += -0.0059867841278849945;
                    }
                  } else {
                    result[0] += 0.0003845964310684615;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001450000000000000334) ) ) {
                    result[0] += -0.0012208808830537871;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1663.13767962321208) ) ) {
                      result[0] += 3.411666965124902e-05;
                    } else {
                      result[0] += 0.0018122816554707467;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.094202898550724834) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-200.3606350077996296) ) ) {
                      result[0] += -0.00048056756657772375;
                    } else {
                      result[0] += 0.0015154002238192362;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8150000000000000577) ) ) {
                      result[0] += 0.0002455062423352435;
                    } else {
                      result[0] += -0.0020659992632792883;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4976500000000000923) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3028.043267225880754) ) ) {
        result[0] += -0.00045310072122773195;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.405609901914840254) ) ) {
          result[0] += 0.0015916973597766043;
        } else {
          result[0] += 0.007520602817365021;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.540750000000000175) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11222.22816428306942) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.43665158371041102) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.650443786982250138) ) ) {
              result[0] += -0.0013938669677304718;
            } else {
              result[0] += 0.0014522175751074185;
            }
          } else {
            result[0] += -0.003466237072907031;
          }
        } else {
          result[0] += 0.0004891436987646883;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-40295.74630962839001) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3449485957867410302) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0036678354467938436;
            }
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.43376557335367671) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.120050465838510867) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6871.194738991899612) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0010248539794125155;
              }
            } else {
              result[0] += -0.0017010825965071484;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3083306738637045519) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.169986979704803115) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1572954101779138469) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0036747218223939994;
                }
              } else {
                result[0] += -0.0019415137219973345;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.080932372247844) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.25978407557355609) ) ) {
                    result[0] += 0.004938992150510659;
                  } else {
                    result[0] += 0.0013867641373215812;
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
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5349.110830475206967) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.442099999999999993) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.397650000000000059) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.294700000000000073) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6298699906795736103) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3700350016849980883) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2868203899923389977) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.496478873239436957) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
                      result[0] += 0.00044869064045225445;
                    } else {
                      result[0] += -0.0011940645699822418;
                    }
                  } else {
                    result[0] += 0.003150003681787954;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1595.83134361526254) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.49507021931512174) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004625322288087587;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4049500000000000877) ) ) {
                      result[0] += -0.00015627228647424252;
                    } else {
                      result[0] += 0.0010739660601079982;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3829700104266255956) ) ) {
                  result[0] += 0.005104913624628365;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6549412391405855516) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1332.377372163365635) ) ) {
                      result[0] += 0.0033785666011118057;
                    } else {
                      result[0] += -0.000319227397854192;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
                      result[0] += -0.0007465865987139682;
                    } else {
                      result[0] += 0.0017181157462520587;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.901809780515980819) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.872261072261072634) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.246168224299066374) ) ) {
                      result[0] += -0.0007445042766568711;
                    } else {
                      result[0] += 0.0037630025023910234;
                    }
                  } else {
                    result[0] += -0.0034233216970114898;
                  }
                } else {
                  result[0] += 0.003103281322480114;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.76388888888889284) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                    result[0] += -0.0002710199652017151;
                  } else {
                    result[0] += -0.005107754290869331;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600160000000000582) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1810395000000000199) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 2.332226216774362e-05;
                    }
                  } else {
                    result[0] += -0.0004961123778022358;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8021437310018827427) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)939.1508267619991557) ) ) {
                  result[0] += -0.003262639298137503;
                } else {
                  result[0] += 0.0004352647299243658;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
                  result[0] += 9.706545682790978e-05;
                } else {
                  result[0] += 0.0034622550388595102;
                }
              }
            } else {
              result[0] += 0.004757646591320775;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.3862943611200651) ) ) {
              result[0] += -0.0001207597150912478;
            } else {
              result[0] += -0.004042555005008517;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.07626592109350838) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4043265000000000886) ) ) {
                result[0] += 0.0015177986288535136;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5001330000000000497) ) ) {
                  result[0] += -0.0010364136868441518;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              result[0] += -0.0020427437043307687;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2552661953259802718) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8677000000000001378) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8607500000000000151) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7985500000000000931) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8550000000000000933) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4750000000000000333) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0033939866260492843;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
                      result[0] += 0.0014250097236621628;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.907008495145631422) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8503000000000001668) ) ) {
                      result[0] += 1.5194031516597973e-05;
                    } else {
                      result[0] += -0.0015913618472489103;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.96040372670807628) ) ) {
                      result[0] += -0.006334658166264608;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0.002376257102173685;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.57417582417583191) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3557370000000000254) ) ) {
                  result[0] += -0.00021377029403884368;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.825750000000000095) ) ) {
                      result[0] += -7.090919212707047e-05;
                    } else {
                      result[0] += 0.00248096099864463;
                    }
                  } else {
                    result[0] += 0.004491430779176314;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.875000000000000111) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2019559617197731194) ) ) {
                      result[0] += -0.0010074804475362284;
                    } else {
                      result[0] += 0.0003244757944344318;
                    }
                  } else {
                    result[0] += 0.0025830831639978634;
                  }
                } else {
                  result[0] += -0.0020849695180892146;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1037995575841958729) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6526275000000001381) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.53708791208791595) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06524444126709380565) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8650000000000001021) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0035737349324575273;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2251.557754300879878) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-355.2188524626326966) ) ) {
                    result[0] += -0.0025393990749450644;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2556.820004021212753) ) ) {
                    result[0] += 0.0026487984812514844;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9632500000000000506) ) ) {
                      result[0] += 9.651744710621488e-05;
                    } else {
                      result[0] += -0.003099037187943042;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7446860000000000701) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.130274200633482079) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1533.824223339392574) ) ) {
                    result[0] += -0.005937608296221959;
                  } else {
                    result[0] += -0.0007756301848716367;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1735709706884873416) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05693937631927865894) ) ) {
                      result[0] += -0.00044647595825551557;
                    } else {
                      result[0] += 0.0009715617619624474;
                    }
                  } else {
                    result[0] += -0.003053352997348318;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0261500000000000031) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0014774898941660314;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2624768466104180908) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.19793814432989798) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.004823387924261736;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.803600000000000203) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3060106677825033539) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2772.548050562498702) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8650000000000001021) ) ) {
                      result[0] += -0.00011122336929865161;
                    } else {
                      result[0] += 0.002613168783956418;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                      result[0] += 8.817263718043973e-06;
                    } else {
                      result[0] += -0.0030536241288046983;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3634578871420977575) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3312.681485277902539) ) ) {
                      result[0] += -0.00042501706846813977;
                    } else {
                      result[0] += -0.00367199019148421;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.647150000000000003) ) ) {
                      result[0] += -0.0005697434816422361;
                    } else {
                      result[0] += 0.0005227382561794566;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3018.749278514522757) ) ) {
                  result[0] += -0.004904724666784807;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7375415000000001831) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0010829015882291915;
                }
              } else {
                result[0] += 0.006525692914962628;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.45361298224128177) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5567.746532477868641) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.47150997150997398) ) ) {
              result[0] += 0.0002816613807411354;
            } else {
              result[0] += 0.004391513093518898;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5801.456541730448407) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3578754866530491907) ) ) {
                result[0] += 0.00020782715299975013;
              } else {
                result[0] += -0.004825765765613364;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-61889.65780747836834) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.005186321875496497;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6441500000000001114) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114255000000000162) ) ) {
                      result[0] += -0.0007147888068417404;
                    } else {
                      result[0] += 0.0041077552558970816;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
                      result[0] += -0.001425089397420346;
                    } else {
                      result[0] += 0.0012693648945177544;
                    }
                  }
                } else {
                  result[0] += -0.001492236101749515;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
                result[0] += -0.003767540376222276;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.920300000000000118) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441180000000000294) ) ) {
                      result[0] += -0.002325296722711674;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.10905271199389688) ) ) {
                      result[0] += 0.00135606749004735;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5650000000000000577) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03580261074118568781) ) ) {
                      result[0] += -0.0002213355664738389;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.006452311783174531;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1851412897798530577) ) ) {
                result[0] += -0.004146963613222426;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.69615384615386233) ) ) {
                  result[0] += -0.0016200027241176013;
                } else {
                  result[0] += 0.00045189622847759456;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-26216.36240703851217) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)43.5582844574780168) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1297121988736138765) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.004808661200441436;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.5392857142857395) ) ) {
                    result[0] += -0.0004950883028565496;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                result[0] += -0.0027072217213025534;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11657.82777714064287) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                  result[0] += 0.0005093260333018731;
                } else {
                  result[0] += 0.00789396178898229;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04145000000000000767) ) ) {
                  result[0] += 0.0006865521899338778;
                } else {
                  result[0] += -0.0017749480617162193;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2040413945387017647) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07370217330381030607) ) ) {
              result[0] += -0.0016372482134847605;
            } else {
              result[0] += -0.007678608041762302;
            }
          } else {
            result[0] += 0.0005803934372655109;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
            result[0] += -0.0027148124507017013;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4524659535674726007) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34049.72333320909092) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2552661953259802718) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0032586048652628544;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.07742257742258118) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                      result[0] += -6.619039502527137e-05;
                    } else {
                      result[0] += 0.0020088617151055982;
                    }
                  } else {
                    result[0] += -0.0026192644598497144;
                  }
                }
              } else {
                result[0] += -0.002644746112742224;
              }
            } else {
              result[0] += 0.0032975360450895742;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)43.5582844574780168) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.32484954126279364) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.005709663094063438;
          }
        } else {
          result[0] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.221202854230377888) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.0024874360861946577;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.471890500000000046) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.964433291539125603) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.005202604584758514;
            }
          } else {
            result[0] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)187.8653910326616767) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2696500000000000563) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1925500000000000267) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04505000000000000671) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0012000835098186502;
            }
          } else {
            result[0] += 0.001680798273930683;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
            result[0] += -0.004401929768811234;
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
            result[0] += 0.001737020384936451;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5182500000000002105) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
                result[0] += -0.0014576138807180425;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.509500000000000175) ) ) {
            result[0] += 0.005094861565563719;
          } else {
            result[0] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009850000000000001116) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3010418023613812832) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4126257761330971996) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6450000000000001288) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1350000000000000366) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)207.2392290249433415) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1006120000000000209) ) ) {
                  result[0] += -0.0008199567460240141;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1390121841946631853) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
                  result[0] += 0.002778318187805245;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
              result[0] += -0.0032761107572024466;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518295403837575108) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002450000000000000355) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1154034132138477414) ) ) {
                      result[0] += 0.0016369448812324427;
                    } else {
                      result[0] += -0.00209277776617265;
                    }
                  } else {
                    result[0] += 0.0037531144664484;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4006080000000000751) ) ) {
                      result[0] += -0.00027341136542396235;
                    } else {
                      result[0] += -0.004886471066513806;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                      result[0] += 0.0017187846081895613;
                    } else {
                      result[0] += -0.0005293184482424983;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869734242044373551) ) ) {
                  result[0] += -0.003740348155330724;
                } else {
                  result[0] += -0.0001703930423269011;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2429488264872171899) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.0022464872805843137;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
          result[0] += -0.006896377164615058;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5324000000000000954) ) ) {
            result[0] += -0.0013954337820200847;
          } else {
            result[0] += 0.00034221114288589515;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.580400000000000138) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2190499999999999947) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77179878048780548) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09695000000000000839) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4648510000000000697) ) ) {
                  result[0] += 0.0027682513611187744;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6014500000000001512) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.00031644734443001064;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.638401428543058258) ) ) {
                  result[0] += 0.0006820806321661421;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1412000000000000199) ) ) {
                    result[0] += -0.0022352642777033445;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2757311940914686788) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5702500000000001457) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6290.027305551750032) ) ) {
                    result[0] += 0.0019139775201372751;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
                      result[0] += -0.0014845609294773278;
                    } else {
                      result[0] += 0.0007593111762090942;
                    }
                  }
                } else {
                  result[0] += -0.0028189056281760884;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08685000000000001052) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)878.7882229141167727) ) ) {
                    result[0] += -0.0003230675048054288;
                  } else {
                    result[0] += -0.006943437958261658;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.02444841979725787) ) ) {
                    result[0] += -0.004559821579296191;
                  } else {
                    result[0] += 0.0011129079744944014;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
              result[0] += 0.005524136446220728;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5677500000000000879) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3851.015235517284509) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3028.043267225880754) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                      result[0] += 0.0003453121923054267;
                    } else {
                      result[0] += -0.0012899579329089276;
                    }
                  } else {
                    result[0] += 0.003166870613615006;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2964813357014444151) ) ) {
                      result[0] += -0.0007389946207383468;
                    } else {
                      result[0] += -0.004834520914827484;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
                  result[0] += 0.004240019291474655;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.79864864864865481) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.05625327053898665) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6903684837426190546) ) ) {
                  result[0] += -0.0013512567814868185;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.0016574399334113954;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4290.319098872139875) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3183000000000000829) ) ) {
                  result[0] += -0.009645368664613008;
                } else {
                  result[0] += -0.003421743648222061;
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5001000000000001) ) ) {
              result[0] += 0.005224826244161259;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10171.3697502395753) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0028768869742899572;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4348787844478528841) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09712242158187701924) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5626395000000000701) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3060106677825033539) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5706.165657108974301) ) ) {
                    result[0] += -0.0009991663310421682;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4648510000000000697) ) ) {
                      result[0] += 0.0030534347163461606;
                    } else {
                      result[0] += 0.00017159354837653553;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3652.934062563911539) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4856.133881915514394) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0030109682844241975;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3305835000000000856) ) ) {
                      result[0] += 0.0002075583534041133;
                    } else {
                      result[0] += -0.0048991306664241795;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
                    result[0] += 0.0011467622670221099;
                  } else {
                    result[0] += 0.005710774742260395;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2928.425989978642974) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08580896800492683607) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9632500000000000506) ) ) {
                    result[0] += -0.0031574724872208463;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8924000000000001931) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.96040372670807628) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0016905079111987917;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7319235000000000602) ) ) {
                      result[0] += 0.002122928542502566;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3472.845654216908315) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1398177495611052923) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2225.774828494720623) ) ) {
                      result[0] += -0.0017772418039028127;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8237500000000000933) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0012111314177031358;
                    }
                  }
                } else {
                  result[0] += 0.0018948956523904277;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.285918000000000061) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                  result[0] += -0.0016404766073461947;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.7610275038920733) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                      result[0] += 0.002843456489317813;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.602083333333334636) ) ) {
                      result[0] += -0.002807663274037888;
                    } else {
                      result[0] += 0.00022003634034434508;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1946668479876043911) ) ) {
                  result[0] += 0.003424502246045077;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1090413665276023236) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
                    result[0] += 0.0016126852852054229;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.43376557335367671) ) ) {
                      result[0] += 0.0003429394054613268;
                    } else {
                      result[0] += -0.0029383369324252943;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4566350000000000686) ) ) {
                    result[0] += -0.005487208752379996;
                  } else {
                    result[0] += -0.0008088151000687199;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)14710.51606691821326) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10755.47127666017332) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.114147004888090417) ) ) {
                      result[0] += 0.0017944631597702355;
                    } else {
                      result[0] += -0.0005007434064641552;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11994.21414222725798) ) ) {
                      result[0] += 0.0073850910828542;
                    } else {
                      result[0] += 0.0005021661970117266;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5376165000000000527) ) ) {
                    result[0] += -0.0034609512924121746;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
              result[0] += 0.005633227770514292;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289274051889615802) ) ) {
                result[0] += -0.0017608783239759895;
              } else {
                result[0] += 0.002967078456249255;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6087500000000001243) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4549058249040809909) ) ) {
                result[0] += -0.004534893246059862;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36860497623707644) ) ) {
                  result[0] += -0.0006725017499525913;
                } else {
                  result[0] += 0.0007972463258390596;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2332.481509447223289) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1407.682258252089468) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2106500000000000317) ) ) {
                      result[0] += 0.0004968183127100571;
                    } else {
                      result[0] += -0.0014034208036265085;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4626188573480190525) ) ) {
                      result[0] += 0.005793271278267482;
                    } else {
                      result[0] += 0.0008498555550807743;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2741000000000000658) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4524659535674726007) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003705180402037625;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3760500000000000509) ) ) {
                      result[0] += 0.0038179172652784443;
                    } else {
                      result[0] += -0.002142947728571418;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.005842422441627439;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5568739105774286324) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5296500000000000652) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.401298701298702376) ) ) {
            result[0] += -0.0006808301651243644;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5189379155588735859) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2519.658559778325525) ) ) {
                  result[0] += 0.004918616103524752;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.008673302246324597;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1850000000000000255) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0012667487710365563;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5160139698723101853) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0020023717840062794;
              }
            }
          } else {
            result[0] += 0.0018473911298388264;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4231.908399006179934) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01255000000000000213) ) ) {
            result[0] += 0.0010814228622876556;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.88883399209486491) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32109164420485392) ) ) {
                  result[0] += -0.004313970413950744;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0019176361332511403;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.59032258064516796) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.33990778688524692) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.0032799497911977673;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.405609901914840254) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2782500000000000528) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.001552534016356353;
              }
            } else {
              result[0] += -0.0011881255402333036;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3689500000000000557) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4587524074502786764) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09065000000000002223) ) ) {
              result[0] += 0.0012961950492431542;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7845442775498493448) ) ) {
                result[0] += 6.292177057710266e-05;
              } else {
                result[0] += -0.0006815494207804031;
              }
            }
          } else {
            result[0] += 0.0042989492991378836;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7513157894736842701) ) ) {
            result[0] += 0.0024176358724079475;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9930683563748080589) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600160000000000582) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6549412391405855516) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.90667311411992912) ) ) {
                      result[0] += 0.0021283898999007993;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
                      result[0] += -0.0005419165237701226;
                    } else {
                      result[0] += 0.00024293003061196384;
                    }
                  }
                } else {
                  result[0] += -0.004590228367589555;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
                    result[0] += 0.0021080240788251704;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.002392832720354514;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2902500000000000635) ) ) {
                      result[0] += 0.005380844223412655;
                    } else {
                      result[0] += 0.0003483782935841407;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8550000000000000933) ) ) {
                      result[0] += 0.003143665628680203;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
                result[0] += -0.0031596634899100163;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2333.321561901081623) ) ) {
                  result[0] += 0.00045048541507794183;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2879000000000001003) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1055500000000000188) ) ) {
                      result[0] += -0.0003127723451416901;
                    } else {
                      result[0] += -0.0032525141116047512;
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1827500000000000513) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1387.069702312839809) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4302840000000000553) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.8232142857142879) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.144153487166192917) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0056148747046260335;
                  }
                } else {
                  result[0] += -0.0001841522528228662;
                }
              } else {
                result[0] += -0.0014176385621347042;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2997.79619999661054) ) ) {
                result[0] += -0.003884609293586022;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2106500000000000317) ) ) {
              result[0] += -0.005023552135080927;
            } else {
              result[0] += -0.0006097285982623444;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4505095000000000627) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4026600000000000734) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358141500000000057) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.582324042174648393) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.5723809523809571) ) ) {
                    result[0] += 0.0014416093282454097;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.00278911832043542;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3819500000000000672) ) ) {
                    result[0] += 0.004701089679109897;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                result[0] += -0.00307757072815426;
              }
            } else {
              result[0] += 0.0037405206106282556;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.06061224489796402) ) ) {
              result[0] += 0.0003017030233462495;
            } else {
              result[0] += -0.002944032088305934;
            }
          }
        }
      }
    }
  }
}

