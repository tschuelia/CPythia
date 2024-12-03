
#include "prediction.h"

void predict_unit7(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.725601914823043037) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3897500000000000409) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6339019286269085285) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6289617284540625075) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.87210884353741847) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.59605263157894939) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3697500000000000231) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3162745180867091999) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1112.565730584552057) ) ) {
                    result[0] += -0.005516907900444396;
                  } else {
                    result[0] += -0.0011282523236927863;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)110.2386992295352286) ) ) {
                    result[0] += -0.0012627403854569834;
                  } else {
                    result[0] += 0.004164284608157116;
                  }
                }
              } else {
                result[0] += 0.00877021572152995;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3558790000000000564) ) ) {
                result[0] += 0.0041522601200371986;
              } else {
                result[0] += 0.01905260064796766;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)39.76851851851852615) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7708333333333333703) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4375000000000000555) ) ) {
                  result[0] += 0.0016231968328215916;
                } else {
                  result[0] += -0.0010015515580259308;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3752770000000000272) ) ) {
                  result[0] += -0.007332826426080567;
                } else {
                  result[0] += -0.0007308096378536478;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)50.56746031746032344) ) ) {
                result[0] += 0.005854921449993029;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19423.731309531835) ) ) {
                  result[0] += -0.003861397335670884;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)199.8552803129074675) ) ) {
                    result[0] += 0.005891085807536909;
                  } else {
                    result[0] += -0.00035969309572639156;
                  }
                }
              }
            }
          }
        } else {
          result[0] += 0.011213726756579187;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6791288143489402351) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3118835000000000357) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2037825000000000331) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8117010151197184831) ) ) {
                result[0] += -0.0014106315357354736;
              } else {
                result[0] += 0.0028675348355464906;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3511500000000000177) ) ) {
                result[0] += -0.0038026647931734925;
              } else {
                result[0] += -0.01106922739703134;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.75378787878788067) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3449290000000000411) ) ) {
                result[0] += -0.003999092600253004;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.332482993197279697) ) ) {
                  result[0] += 0.0013466029369860336;
                } else {
                  result[0] += 0.00871357160996914;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3455500000000000793) ) ) {
                result[0] += 0.003001358299165214;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4375050000000000883) ) ) {
                  result[0] += -0.0026332006461690298;
                } else {
                  result[0] += -0.00775520665120697;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3777078305615261811) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2777390000000000692) ) ) {
              result[0] += 0.006838503696451877;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3697500000000000231) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2932.390892308531875) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)868.0972492193021708) ) ) {
                    result[0] += 0.0009168519006899115;
                  } else {
                    result[0] += -0.004355912506530764;
                  }
                } else {
                  result[0] += 0.005184422446845464;
                }
              } else {
                result[0] += 0.006378348209520156;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3973737470478960754) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3238000000000000322) ) ) {
                result[0] += 0.0004995598337864568;
              } else {
                result[0] += -0.010744866332859636;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4156551824015537466) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.897750673214003925) ) ) {
                  result[0] += 0.001195677095949197;
                } else {
                  result[0] += 0.008291531288231192;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4812889397749424147) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.941722972972973693) ) ) {
                    result[0] += 8.394052518118574e-05;
                  } else {
                    result[0] += -0.004096265620978017;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1112.565730584552057) ) ) {
                    result[0] += 0.0005108541682282001;
                  } else {
                    result[0] += -0.0009599918673554832;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7430457737088246306) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.552093295775335946) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5320500000000001339) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5158500000000001418) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2093.23039061359168) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3841.491407470849936) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3688.285112543364903) ) ) {
                    result[0] += 0.0020713514485298985;
                  } else {
                    result[0] += 0.016288025745302807;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3127769248817890424) ) ) {
                    result[0] += -0.006983058619393174;
                  } else {
                    result[0] += -5.6076391352517324e-05;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1195.496933691951881) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4899000000000000576) ) ) {
                    result[0] += -0.003112604060327605;
                  } else {
                    result[0] += -0.012932425011156164;
                  }
                } else {
                  result[0] += 0.0031281996001938954;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4530575595150208579) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8551.001968962680621) ) ) {
                  result[0] += -0.006416504892932982;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4273892915217033517) ) ) {
                    result[0] += 0.002237514200618032;
                  } else {
                    result[0] += -0.0037267782365289297;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.59508740204942789) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3752770000000000272) ) ) {
                    result[0] += 0.015515293927527459;
                  } else {
                    result[0] += 0.00352047662077874;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5181500000000001105) ) ) {
                    result[0] += 0.012745214257544631;
                  } else {
                    result[0] += -0.0006994487343957107;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4131013443293440335) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4058348495350315166) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4019577872618069758) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
                    result[0] += 0.0019529797500514735;
                  } else {
                    result[0] += -3.6927984403612635e-05;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2666.433655949607328) ) ) {
                    result[0] += -0.011557816082280395;
                  } else {
                    result[0] += 0.0020770320146440333;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2473743189393666497) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6267500000000001403) ) ) {
                    result[0] += -0.005899543201426319;
                  } else {
                    result[0] += 0.004475098548200668;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2965509996887087385) ) ) {
                    result[0] += 0.01690007825853065;
                  } else {
                    result[0] += 0.0037841202531990743;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4010.052697610588893) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13669.55583063214181) ) ) {
                  result[0] += -0.015122928643517513;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4273892915217033517) ) ) {
                    result[0] += -0.00423336632711714;
                  } else {
                    result[0] += -0.0004501814010641298;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.24542300000000003) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14549731182795789) ) ) {
                    result[0] += -0.011036317760198977;
                  } else {
                    result[0] += -0.0016771921898077907;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9804.779554419621491) ) ) {
                    result[0] += 0.0006319407021895538;
                  } else {
                    result[0] += 0.008011501382163945;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5743939393939395677) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4643995000000000206) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.758828417116743648) ) ) {
                result[0] += 0.006726301560841392;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1072.091074890846585) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3710845000000000948) ) ) {
                    result[0] += -0.0020414947732899117;
                  } else {
                    result[0] += -0.019848069937903615;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5710214034532944405) ) ) {
                    result[0] += -0.0019238192377860571;
                  } else {
                    result[0] += -0.007552258232845856;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4886700000000000488) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.356381612068028597) ) ) {
                  result[0] += 0.012951048401509119;
                } else {
                  result[0] += 0.003084176317416228;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5309975000000001222) ) ) {
                  result[0] += -0.012928742311394242;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869560366706151944) ) ) {
                    result[0] += -0.003300857325219545;
                  } else {
                    result[0] += 0.005436164543744177;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4598785000000000234) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4249400000000000399) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.44097222222222499) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2966.685986956896613) ) ) {
                    result[0] += -0.0011846201599430965;
                  } else {
                    result[0] += 0.002814278761888898;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7224.572194877482616) ) ) {
                    result[0] += 0.0006923677420771359;
                  } else {
                    result[0] += 0.014768667060175005;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6979477615268391277) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)753.7197460358141825) ) ) {
                    result[0] += -0.0029939377092922277;
                  } else {
                    result[0] += 0.0054671766668759865;
                  }
                } else {
                  result[0] += -0.0044251162436977996;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)913.4768302542491938) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6216068849656636308) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.194335169158143639) ) ) {
                    result[0] += 0.0003300969516972877;
                  } else {
                    result[0] += 0.010453683731160108;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4780.79918261664443) ) ) {
                    result[0] += 0.004007912881441082;
                  } else {
                    result[0] += -0.0028592310010189686;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5908139956411030402) ) ) {
                    result[0] += 0.008231232320666167;
                  } else {
                    result[0] += -0.0023364249415683707;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46256684491978817) ) ) {
                    result[0] += -0.0028291230606026316;
                  } else {
                    result[0] += -0.02251938154967626;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4348000000000000198) ) ) {
          result[0] += -0.001760648923366732;
        } else {
          result[0] += -0.009889753517610348;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2360000000000000153) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1762000000000000233) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13238.69636896185511) ) ) {
          result[0] += -0.005033037233107947;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3396.060442531631452) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4005.782514566183636) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.4281725597490329) ) ) {
                result[0] += -0.004302535522263689;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2692985000000000517) ) ) {
                  result[0] += -0.003063595543049684;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7976.948351077033294) ) ) {
                    result[0] += 0.0048253666962602935;
                  } else {
                    result[0] += 0.002115528216523184;
                  }
                }
              }
            } else {
              result[0] += 0.0077266518239582;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)14.95855265161754488) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9884056996908187065) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1736.121756519464043) ) ) {
                  result[0] += 0.005480204121494048;
                } else {
                  result[0] += 0.00020539485484856503;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.95912400047738622) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.129733520336606567) ) ) {
                    result[0] += -0.0014569951728051443;
                  } else {
                    result[0] += 0.0026515507421084644;
                  }
                } else {
                  result[0] += -0.006766895182987381;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.079059829059831443) ) ) {
                result[0] += -0.009745907571196076;
              } else {
                result[0] += -0.0012761130116548608;
              }
            }
          }
        }
      } else {
        result[0] += -0.006121166955781252;
      }
    } else {
      result[0] += 0.0037661026412877385;
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.953361000000000125) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0453100156961256037) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03446328318850828271) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1526.154173473093351) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9508000000000000895) ) ) {
              result[0] += 0.004381712993023134;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5564040000000001207) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1163.375000000000227) ) ) {
                  result[0] += -0.0029469591181707443;
                } else {
                  result[0] += 0.0007500209535051114;
                }
              } else {
                result[0] += 0.0024802658321462956;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.13339920948616779) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3128156565656566301) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1273.44963587212419) ) ) {
                  result[0] += -0.0003036030568010459;
                } else {
                  result[0] += -0.004438512452987049;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.023612328920421536) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9826500000000001345) ) ) {
                    result[0] += 0.005408180385230802;
                  } else {
                    result[0] += -0.0008612243797718311;
                  }
                } else {
                  result[0] += -0.001104487561887912;
                }
              }
            } else {
              result[0] += -0.00984546702791701;
            }
          }
        } else {
          result[0] += -0.007336213846834596;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9003500000000000947) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8903500000000000858) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7862500000000001155) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1903887996092470669) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14109.36047608618719) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1525564339979418871) ) ) {
                    result[0] += -0.0009113342745446412;
                  } else {
                    result[0] += 0.003759299981191245;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6279.125985810902421) ) ) {
                    result[0] += -0.0027027161054261175;
                  } else {
                    result[0] += -0.009785869038381743;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2022010309504783943) ) ) {
                  result[0] += 0.008152172525275789;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7069310000000000871) ) ) {
                    result[0] += -9.513203119196897e-05;
                  } else {
                    result[0] += -0.0053274049918168205;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2437.218419692248972) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.335416666666668029) ) ) {
                  result[0] += 0.012237758386327912;
                } else {
                  result[0] += 0.0006301117319675713;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)932.260226151358097) ) ) {
                  result[0] += 0.006957715262059608;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06334929332387927159) ) ) {
                    result[0] += -0.004503014879949754;
                  } else {
                    result[0] += 0.0004626712437135181;
                  }
                }
              }
            }
          } else {
            result[0] += -0.0053608371221544535;
          }
        } else {
          result[0] += 0.006039177356998229;
        }
      }
    } else {
      result[0] += 0.0036208174044040017;
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)196.1990881458966953) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-64209.50517865573784) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2305220000000000324) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.171550000000000008) ) ) {
            result[0] += 0.0188907488572986;
          } else {
            result[0] += -0.002302304730676011;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2076236950652520508) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.44097222222222499) ) ) {
              result[0] += -0.002877968703138881;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7064500000000001334) ) ) {
                result[0] += 0.012010190316955919;
              } else {
                result[0] += 0.0005125661065661578;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.301826392972169788) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4729000000000000425) ) ) {
                result[0] += -0.007850181563996066;
              } else {
                result[0] += -0.0023461881110006712;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.95875420875421469) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5647000000000000908) ) ) {
                  result[0] += 0.009280189474709533;
                } else {
                  result[0] += -0.00044288216439551035;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3777078305615261811) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5290000000000001368) ) ) {
                    result[0] += 0.005548484068004157;
                  } else {
                    result[0] += 3.051805783261269e-05;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9613228062833077958) ) ) {
                    result[0] += -0.0032312869403739964;
                  } else {
                    result[0] += 0.0018219005257483292;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-55797.14682103950327) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.64946018893387958) ) ) {
            result[0] += 0.0017014270060295821;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6038500000000001089) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2795335000000000458) ) ) {
                result[0] += -0.0013784773668130722;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2626500000000001056) ) ) {
                  result[0] += -0.005515657355595132;
                } else {
                  result[0] += -0.011661769294026248;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)120.7983164983165096) ) ) {
                result[0] += -0.0038402592064510173;
              } else {
                result[0] += 0.00023654806233472836;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.641839080459782) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9640.380337645368854) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.90736842105263804) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2692985000000000517) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5203.159600494148435) ) ) {
                    result[0] += -0.0010739805688577413;
                  } else {
                    result[0] += 0.0020668359392184425;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2795335000000000458) ) ) {
                    result[0] += 0.002629473823748706;
                  } else {
                    result[0] += 0.00011102915744969;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7171.422813562979172) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004950000000000000407) ) ) {
                    result[0] += 0.00791056347790779;
                  } else {
                    result[0] += -0.0026404049823319556;
                  }
                } else {
                  result[0] += 0.007063724174695051;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.801734104046245122) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1637025017206097666) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3752770000000000272) ) ) {
                    result[0] += 0.003126277944372435;
                  } else {
                    result[0] += -0.00233783900111524;
                  }
                } else {
                  result[0] += 0.004096334468160298;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3651455000000000672) ) ) {
                  result[0] += -0.01386851050043053;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2215265655616065754) ) ) {
                    result[0] += -0.004934539367192752;
                  } else {
                    result[0] += 0.001720893463916548;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.10978638847492306) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4559570000000000567) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3430250000000000798) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37025703794369846) ) ) {
                    result[0] += -0.002400003107417367;
                  } else {
                    result[0] += 0.005325785171557198;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                    result[0] += 0.0035389499792290464;
                  } else {
                    result[0] += 0.015914469271228093;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05405589284754743623) ) ) {
                  result[0] += -9.757346351485732e-05;
                } else {
                  result[0] += -0.007068804255567031;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.79217479674796998) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.728150000000000075) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.33573141486810876) ) ) {
                    result[0] += 0.002195003171886396;
                  } else {
                    result[0] += 0.01859782599006873;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.67543859649123306) ) ) {
                    result[0] += 0.004479161277690755;
                  } else {
                    result[0] += 4.8736680775227216e-05;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.67543859649123306) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3012500000000000733) ) ) {
                    result[0] += -0.006023056902916886;
                  } else {
                    result[0] += 0.0038151398066042963;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6445500000000000673) ) ) {
                    result[0] += 0.0006907381712712244;
                  } else {
                    result[0] += -0.0006561675442825325;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)207.7083333333333428) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08291002809803414697) ) ) {
          result[0] += -0.008635073848915471;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7972500000000001252) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17224.94728213532289) ) ) {
              result[0] += -0.0020005605450749563;
            } else {
              result[0] += -0.0047204227579448095;
            }
          } else {
            result[0] += 0.002552444634238643;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.80322580645161779) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.34495192307692513) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
              result[0] += 0.0016297763155700502;
            } else {
              result[0] += -0.003051884509552655;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9464500000000001245) ) ) {
              result[0] += 0.008816395358094661;
            } else {
              result[0] += -0.0004107544379778871;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-303065.7934048865573) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-412329.7902925448143) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)170.3440978838632134) ) ) {
                result[0] += -0.004927994148293199;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1163.375000000000227) ) ) {
                  result[0] += 0.0029547626497333397;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1801140000000000241) ) ) {
                    result[0] += -0.0002073084755514768;
                  } else {
                    result[0] += -0.0024214083335756392;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1705100000000000227) ) ) {
                result[0] += -0.0007336041531595035;
              } else {
                result[0] += 0.013872501710921381;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1953360000000000374) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)61615.68427007270657) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1840640000000000331) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18243.8051103931939) ) ) {
                    result[0] += 0.0010352427599588708;
                  } else {
                    result[0] += -0.0006982897397401737;
                  }
                } else {
                  result[0] += 0.004143101359075694;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1495215000000000294) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
                    result[0] += 0.001494967179991419;
                  } else {
                    result[0] += -0.0017681378669027344;
                  }
                } else {
                  result[0] += -0.0050969398240060665;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21389.24849911775891) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-51447.8227685276288) ) ) {
                    result[0] += -0.0024301199622225322;
                  } else {
                    result[0] += -0.006506637984023617;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)275.2226890756302851) ) ) {
                    result[0] += 0.00181505761337966;
                  } else {
                    result[0] += -0.0015270840486056752;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7907500000000000639) ) ) {
                  result[0] += -0.004312100013609295;
                } else {
                  result[0] += -0.007730014556811278;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.700000000000001066) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1381500000000000228) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04770000000000000628) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3526540000000000785) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2663275000000000503) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
              result[0] += -0.0026481052649916324;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1495215000000000294) ) ) {
                result[0] += 0.0021121237821429017;
              } else {
                result[0] += 0.004823857428193428;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.879297427786564834) ) ) {
              result[0] += 0.0005075551769821219;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)14.95855265161754488) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9605980159284618347) ) ) {
                  result[0] += -0.012085700800104656;
                } else {
                  result[0] += -0.006030484319597541;
                }
              } else {
                result[0] += -0.002834549249269447;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3752770000000000272) ) ) {
            result[0] += 0.008156560792967837;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4011795000000000777) ) ) {
              result[0] += -0.005341245812058194;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2.079441541679836192) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.063751731724852823) ) ) {
                    result[0] += -0.0009052063872814962;
                  } else {
                    result[0] += 0.0028510594973343625;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-929.333568598457191) ) ) {
                    result[0] += -0.00040851687905783975;
                  } else {
                    result[0] += -0.008363624368936987;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5309975000000001222) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4801450000000000995) ) ) {
                    result[0] += 0.0007261127253666489;
                  } else {
                    result[0] += 0.008544004551808449;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02505000000000000282) ) ) {
                    result[0] += -3.3584351123007916e-05;
                  } else {
                    result[0] += 0.00533370290678903;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.232638888888890172) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.690700657578043109) ) ) {
            result[0] += -0.004911979140826623;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.4281725597490329) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.526463216865693751) ) ) {
                result[0] += 0.0056899124507744136;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.579390238601620311) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.048500881834215637) ) ) {
                    result[0] += 0.0034696916048945767;
                  } else {
                    result[0] += -0.001522710718429853;
                  }
                } else {
                  result[0] += -0.006957898387473149;
                }
              }
            } else {
              result[0] += 0.0058894170481874255;
            }
          }
        } else {
          result[0] += 0.01043644359527496;
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)110.2386992295352286) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.526463216865693751) ) ) {
          result[0] += 0.0031428181233567817;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6731225466545354141) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-836.0042144475063424) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5896685000000000398) ) ) {
                result[0] += 0.006400589185734175;
              } else {
                result[0] += -0.0022915185297775354;
              }
            } else {
              result[0] += -0.006325298115683939;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4094415000000000693) ) ) {
              result[0] += -0.0016026020038323225;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)31.97649534084436596) ) ) {
                result[0] += -0.013766565020712813;
              } else {
                result[0] += -0.007619351626866825;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.522532894736842835) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1556.733319173369409) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6533511457093607033) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3086990000000000567) ) ) {
                result[0] += -0.008450992461454513;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3838015000000000732) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5451099740723436282) ) ) {
                    result[0] += -0.002350622155141866;
                  } else {
                    result[0] += 0.004840957548943835;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.553444000000000158) ) ) {
                    result[0] += -0.0022147507079179475;
                  } else {
                    result[0] += -5.354661406857733e-06;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.02251840727203791) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5556.93894018442279) ) ) {
                  result[0] += -3.284114388798165e-05;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2646500000000000519) ) ) {
                    result[0] += 0.004467779470877052;
                  } else {
                    result[0] += 0.007404120858216458;
                  }
                }
              } else {
                result[0] += -0.004766395524774429;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.075647075647077067) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08390237751272640321) ) ) {
                result[0] += 0.0038456346387280454;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4869500000000000495) ) ) {
                  result[0] += 0.0030419295639013645;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.72834600000000016) ) ) {
                    result[0] += -0.004029322340552296;
                  } else {
                    result[0] += -8.525462761929435e-05;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-889.5839568061797991) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1276.198284932604565) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7258500000000001062) ) ) {
                    result[0] += 0.00397085622749866;
                  } else {
                    result[0] += 0.0014152831910581312;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1080.464987976296243) ) ) {
                    result[0] += 0.00455339278829417;
                  } else {
                    result[0] += 0.006955656254188328;
                  }
                }
              } else {
                result[0] += -0.001531076122178202;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3896731296988180104) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1827.40614998019123) ) ) {
              result[0] += -0.009061346764370962;
            } else {
              result[0] += -0.0013827765356229282;
            }
          } else {
            result[0] += 0.0011803238780471858;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.15064935064935181) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3048330000000000761) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4683879798511265125) ) ) {
          result[0] += 0.010654212749449343;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2093.23039061359168) ) ) {
            result[0] += -0.004336403312153894;
          } else {
            result[0] += 0.004256059942750476;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1360.735594309118596) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)540.2594105796734993) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.883974358974360719) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4189740000000000686) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8968663066601212375) ) ) {
                    result[0] += -0.012311137642147417;
                  } else {
                    result[0] += -0.006030105137498784;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.076190476190476808) ) ) {
                    result[0] += 0.0061189005743788995;
                  } else {
                    result[0] += -0.0037591088444005973;
                  }
                }
              } else {
                result[0] += 0.007893218617620686;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5665124163251650247) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1035.301558117577088) ) ) {
                  result[0] += 0.0073295629014634035;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2724.737518907181311) ) ) {
                    result[0] += 0.004610598483794201;
                  } else {
                    result[0] += -0.00037758326627054676;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4183000000000000607) ) ) {
                  result[0] += 0.005361365047033759;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4151215000000000876) ) ) {
                    result[0] += 0.004225356342145849;
                  } else {
                    result[0] += -0.0014341854650972916;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.881080907396698088) ) ) {
              result[0] += -0.00721907751597081;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2770.103028186206302) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6960285000000000499) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3868846981858549694) ) ) {
                    result[0] += 0.0007402147010813476;
                  } else {
                    result[0] += -0.0031370431022307967;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08183313046454290807) ) ) {
                    result[0] += -0.00013012280370637206;
                  } else {
                    result[0] += 0.00480079205496378;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.731009615384616396) ) ) {
                  result[0] += 0.0006377368984460471;
                } else {
                  result[0] += -0.00618950829835599;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1168.062366236748858) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.26352339181286677) ) ) {
              result[0] += 0.008279771583505985;
            } else {
              result[0] += 0.0027737719152832554;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.076190476190476808) ) ) {
              result[0] += -0.0019526242466737643;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-663.4043224984577591) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-929.333568598457191) ) ) {
                  result[0] += 0.0005359578844789514;
                } else {
                  result[0] += 0.0073753015839412035;
                }
              } else {
                result[0] += -0.0007556057391691812;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.380182360511232664) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.297352577637783666) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9826836581709146312) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9753708898829833718) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9605980159284618347) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9172022279348758245) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)180.3360792364846645) ) ) {
                    result[0] += 0.0014946640310087643;
                  } else {
                    result[0] += -1.2224932173917304e-05;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2247630000000000183) ) ) {
                    result[0] += 0.009315876593566252;
                  } else {
                    result[0] += 0.0008716454177844672;
                  }
                }
              } else {
                result[0] += -0.004479504802519146;
              }
            } else {
              result[0] += 0.008954372873901804;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3963105000000000655) ) ) {
              result[0] += -0.008711812016269407;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6856145000000001266) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.468769816106531678) ) ) {
                  result[0] += 0.003998821521040129;
                } else {
                  result[0] += -0.00037060394753564305;
                }
              } else {
                result[0] += -0.004179058167733966;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
            result[0] += 0.011305006321424406;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
              result[0] += 0.0013432358166479647;
            } else {
              result[0] += -0.003463466796488753;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03320000000000000728) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
            result[0] += 0.007844049658875142;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01205000000000000168) ) ) {
              result[0] += -0.004577958181695945;
            } else {
              result[0] += 0.0025406031770651865;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.54692082111437301) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2888525000000000675) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.0121430674124241) ) ) {
                result[0] += 0.000858418243555999;
              } else {
                result[0] += -0.0033445292825467965;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.86811594202898767) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2139.151577383021959) ) ) {
                  result[0] += -0.005343592932396061;
                } else {
                  result[0] += -0.0014197045846178963;
                }
              } else {
                result[0] += -0.011580178707441213;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4871705000000000618) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.641839080459782) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2996690000000000187) ) ) {
                  result[0] += 0.003673165067751042;
                } else {
                  result[0] += -0.003857282852828402;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                  result[0] += -7.840058710990451e-05;
                } else {
                  result[0] += -0.006071459089450878;
                }
              }
            } else {
              result[0] += 0.005145849319087862;
            }
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3036.173061047864849) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3120.411781551796594) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3190.817953366558413) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3303.87952810574825) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3346.223713336835317) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74737090866123346) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6538500000000001533) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0487500000000000086) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6180500000000000993) ) ) {
                    result[0] += 0.002855775710973516;
                  } else {
                    result[0] += -0.002853429247645645;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0801500000000000129) ) ) {
                    result[0] += 0.004078406231730357;
                  } else {
                    result[0] += -0.0006324055478603676;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5006170000000000897) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5469.088584656095009) ) ) {
                    result[0] += -0.0026977270632666745;
                  } else {
                    result[0] += -0.01125348822854101;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
                    result[0] += -0.0057526073373570215;
                  } else {
                    result[0] += -0.0008460420971378806;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.29760031471282566) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3292335000000000678) ) ) {
                  result[0] += 0.010870166511389999;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5273.494216348623922) ) ) {
                    result[0] += -0.0007583182322670189;
                  } else {
                    result[0] += 0.0047155802005261725;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.52606951871658048) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.189832689832690527) ) ) {
                    result[0] += -0.0008986121430056104;
                  } else {
                    result[0] += -0.01616326559515695;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.0121430674124241) ) ) {
                    result[0] += 0.0014009818174031455;
                  } else {
                    result[0] += 5.83175592614115e-05;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.799613899613900614) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.813466494845362931) ) ) {
                result[0] += 0.0029307890892432496;
              } else {
                result[0] += 2.941429250934214e-05;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4391930000000000556) ) ) {
                result[0] += -0.005121235957996757;
              } else {
                result[0] += -0.01799279791453125;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7344500000000001583) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5544758402383391793) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3292335000000000678) ) ) {
                result[0] += -0.0027176634960108196;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.472136222910218173) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.593650000000000122) ) ) {
                    result[0] += 0.015758479217759372;
                  } else {
                    result[0] += 0.0036784759283676454;
                  }
                } else {
                  result[0] += 0.02237430685329502;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.27951388888889106) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.028850145288502382) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4912475000000000591) ) ) {
                    result[0] += -4.2701603178025684e-05;
                  } else {
                    result[0] += -0.001824639609660762;
                  }
                } else {
                  result[0] += 0.004730897831255986;
                }
              } else {
                result[0] += -0.01110513763449684;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.319459459459459971) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6960285000000000499) ) ) {
                result[0] += 0.006242902663954014;
              } else {
                result[0] += -0.0032797265802127764;
              }
            } else {
              result[0] += -0.01329256536035386;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.758534714230918006) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.080540540540540828) ) ) {
            result[0] += -0.002966420007551789;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5451099740723436282) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.909011700273836265) ) ) {
                result[0] += 0.003424691281027017;
              } else {
                result[0] += 0.010110116706113732;
              }
            } else {
              result[0] += 0.0024665140366571378;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05995000000000001023) ) ) {
            result[0] += 0.0008104277483682203;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5843957245848719895) ) ) {
              result[0] += -0.01632926832609987;
            } else {
              result[0] += -0.0038184123692015398;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.775681341719080208) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.86337543053961596) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5771835000000001825) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.741000000000000103) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.95938981653267597) ) ) {
                result[0] += 0.007936519753571241;
              } else {
                result[0] += -0.007024874708046351;
              }
            } else {
              result[0] += 0.011568861153107006;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08455000000000001403) ) ) {
              result[0] += -0.0069556140142332515;
            } else {
              result[0] += 0.00044513407317356635;
            }
          }
        } else {
          result[0] += -0.009596789025790226;
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.293918500000000027) ) ) {
          result[0] += 0.006225341155416165;
        } else {
          result[0] += 0.025092491138796465;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2670.194409694011938) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4157500000000000639) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7302500000000001767) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3530928486564372526) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.2011904761904777) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6239115000000000633) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2745899061051987888) ) ) {
                  result[0] += -0.005303217907155576;
                } else {
                  result[0] += -0.021029886929631626;
                }
              } else {
                result[0] += -0.0010645864927228367;
              }
            } else {
              result[0] += 0.00705911617749109;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1120500000000000107) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05705000000000001042) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3048330000000000761) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.93844696969697239) ) ) {
                    result[0] += 0.005369714876009741;
                  } else {
                    result[0] += 0.0006375691854703831;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.437797619047619602) ) ) {
                    result[0] += 0.0008313495384355781;
                  } else {
                    result[0] += -0.005704830791561049;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4062500000000000555) ) ) {
                  result[0] += -0.002565021717840686;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5374500000000000943) ) ) {
                    result[0] += 0.01574117789488839;
                  } else {
                    result[0] += 0.0018787773545922706;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2724.737518907181311) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446612452718182174) ) ) {
                  result[0] += 0.005359822905959708;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.63927801724138078) ) ) {
                    result[0] += 0.001721810214629096;
                  } else {
                    result[0] += -0.007651773724651232;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4929000000000000603) ) ) {
                  result[0] += -0.008005293960803043;
                } else {
                  result[0] += -0.020114874922975187;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08035000000000000475) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01695000000000000326) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.417288557213931988) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.786086309523809756) ) ) {
                  result[0] += -0.0014879339058340834;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3616605000000000514) ) ) {
                    result[0] += 0.00130169563322892;
                  } else {
                    result[0] += 0.01052746398447975;
                  }
                }
              } else {
                result[0] += -0.001980799331081492;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7144390000000001573) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1687573550250007492) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                    result[0] += 0.0009085786078473237;
                  } else {
                    result[0] += -0.018486305288039257;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1962199642500267183) ) ) {
                    result[0] += 0.006896811981986945;
                  } else {
                    result[0] += -0.0055823315325658806;
                  }
                }
              } else {
                result[0] += 0.003633640565760768;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7922500000000001208) ) ) {
              result[0] += 0.010825046837284856;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2899.923639043688581) ) ) {
                result[0] += -0.004051243688997921;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.50581395348837432) ) ) {
                  result[0] += 0.0007102392397240058;
                } else {
                  result[0] += 0.009891037312231522;
                }
              }
            }
          }
        }
      } else {
        result[0] += -0.01008344236651873;
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2494.752674487995591) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8903500000000000858) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1935119961629459817) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03115000000000000407) ) ) {
              result[0] += 0.005878743463637013;
            } else {
              result[0] += 0.013124829460804295;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7972500000000001252) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6317500000000001448) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4803413391557496692) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4553150571621396026) ) ) {
                    result[0] += 0.0013086971768807615;
                  } else {
                    result[0] += -0.008919832726200031;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5244371701077347181) ) ) {
                    result[0] += 0.012187993727570814;
                  } else {
                    result[0] += 0.0006482109653532923;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4169520000000000448) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
                    result[0] += 0.004024689519130345;
                  } else {
                    result[0] += -0.0038203293635493945;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.986813186813187304) ) ) {
                    result[0] += -0.0005462494898908215;
                  } else {
                    result[0] += 0.0163149708133789;
                  }
                }
              }
            } else {
              result[0] += -0.006655726945038714;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1086385441254854312) ) ) {
            result[0] += 0.004815446161611253;
          } else {
            result[0] += -0.01495732821497539;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2437.218419692248972) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2242439134084858454) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.586265500000000106) ) ) {
              result[0] += 0.008022817866500125;
            } else {
              result[0] += 0.0005610335586712028;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.95938981653267597) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3757500000000000284) ) ) {
                result[0] += -0.0067987924564556325;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5728500000000000814) ) ) {
                  result[0] += 0.004305998705556494;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5329385000000000927) ) ) {
                    result[0] += 0.00032850880757040576;
                  } else {
                    result[0] += -0.0030621147928303746;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3895535000000000525) ) ) {
                result[0] += -0.0016269302028102841;
              } else {
                result[0] += -0.02093011050656139;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2370.398064265408721) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1584500000000000075) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.819347319347319747) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5674000000000000155) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08165000000000001423) ) ) {
                    result[0] += -0.007459562752507338;
                  } else {
                    result[0] += 0.001140233784341523;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5931885000000001185) ) ) {
                    result[0] += 0.008712480703369049;
                  } else {
                    result[0] += -0.0010500264153585042;
                  }
                }
              } else {
                result[0] += -0.004324559308257007;
              }
            } else {
              result[0] += 0.015157771975158095;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2324.854021777930484) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.344799119427628753) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.459935897435898688) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4725700000000001011) ) ) {
                    result[0] += -0.0045324658609861065;
                  } else {
                    result[0] += 0.0006976539372043512;
                  }
                } else {
                  result[0] += 0.006403902422157773;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4285545000000000604) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07915000000000001201) ) ) {
                    result[0] += -0.01302980957973168;
                  } else {
                    result[0] += -0.00040122207712420667;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4935615000000000419) ) ) {
                    result[0] += 0.006062904084209003;
                  } else {
                    result[0] += -0.00680181888843835;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1120500000000000107) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1102500000000000008) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
                    result[0] += -0.0009018423192559451;
                  } else {
                    result[0] += 0.0001733155788641152;
                  }
                } else {
                  result[0] += -0.009619443308094038;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2131075953897917097) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4955405000000000504) ) ) {
                    result[0] += -0.007956856312844129;
                  } else {
                    result[0] += -0.0008582658976598611;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2458590534979424036) ) ) {
                    result[0] += 0.010997817568490676;
                  } else {
                    result[0] += 0.0007279271102710356;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)199.8552803129074675) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-202581.8869749966834) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3649912904309082773) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.745450000000000057) ) ) {
          result[0] += -0.005292657125733512;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8940500000000001224) ) ) {
              result[0] += 0.00013985788559644705;
            } else {
              result[0] += -0.001963174444322957;
            }
          } else {
            result[0] += 0.005401085116683248;
          }
        }
      } else {
        result[0] += 0.011470922643412472;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)64.72098214285715301) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-102854.7252300698165) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1958332350625041351) ) ) {
            result[0] += 0.005488083446983591;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3286648086247792588) ) ) {
              result[0] += -0.0023262740156079495;
            } else {
              result[0] += 0.0045822811245731015;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)59.95123152709360426) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)90122.12198726656788) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-64209.50517865573784) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6934500000000000108) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1491111991420308314) ) ) {
                    result[0] += 0.013101918532404897;
                  } else {
                    result[0] += 0.0004503518994551068;
                  }
                } else {
                  result[0] += -0.0024632572739934975;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-59456.31974871831335) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1958332350625041351) ) ) {
                    result[0] += 0.0012048830414285463;
                  } else {
                    result[0] += -0.005055640669110182;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2523846967694989285) ) ) {
                    result[0] += 0.00018247337338203671;
                  } else {
                    result[0] += -7.344987957589586e-05;
                  }
                }
              }
            } else {
              result[0] += -0.003202137266843728;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7114701316667421116) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2725118062635197291) ) ) {
                result[0] += 0.002376251334179053;
              } else {
                result[0] += -0.003197562843141383;
              }
            } else {
              result[0] += 0.009470849814981884;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2795335000000000458) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)932.260226151358097) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1705100000000000227) ) ) {
              result[0] += -0.0004006599770287058;
            } else {
              result[0] += 0.007293351781333478;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)117.0102564102564173) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-64209.50517865573784) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1917145000000000377) ) ) {
                  result[0] += 0.0028563519968187105;
                } else {
                  result[0] += -0.0005083768515309155;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.24542300000000003) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5213898097270787124) ) ) {
                    result[0] += -0.00028426737017479863;
                  } else {
                    result[0] += -0.0019952824558644843;
                  }
                } else {
                  result[0] += 0.0011375876091849122;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)139.8343653250774139) ) ) {
                result[0] += -0.0015158270576653944;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1053260000000000168) ) ) {
                  result[0] += 0.0004325905422273729;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.343528074243838577) ) ) {
                    result[0] += -0.0002774023220756214;
                  } else {
                    result[0] += -0.0012852361166625817;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.620622000000000118) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4273892915217033517) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6339500000000001245) ) ) {
                result[0] += -0.006367111198822458;
              } else {
                result[0] += -0.003769494168581063;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5710214034532944405) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5396500000000000741) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4962000000000000299) ) ) {
                    result[0] += -0.00020669575053888656;
                  } else {
                    result[0] += 0.0032612725502084183;
                  }
                } else {
                  result[0] += -0.0013041220738711603;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-87920.40362345064932) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8865.340930235526685) ) ) {
                    result[0] += -0.0027083160474612898;
                  } else {
                    result[0] += 0.0021314575122092227;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3838015000000000732) ) ) {
                    result[0] += -0.0017776213133219405;
                  } else {
                    result[0] += -0.006073380502086657;
                  }
                }
              }
            }
          } else {
            result[0] += 0.002199540494382742;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1922.684858006477725) ) ) {
      result[0] += -0.004439287755022833;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2242439134084858454) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7673500000000000876) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1458333333333333426) ) ) {
              result[0] += -0.00282913899187914;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1437665000000000193) ) ) {
                result[0] += 0.0011846618538259035;
              } else {
                result[0] += -0.0020515098112907984;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)338.6168375607124403) ) ) {
              result[0] += 0.0009225476360040491;
            } else {
              result[0] += 0.00017954420709885192;
            }
          }
        } else {
          result[0] += -0.00748156897942433;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2519788480021191157) ) ) {
          result[0] += 0.0046519689640102035;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5158500000000001418) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4332407390653168489) ) ) {
              result[0] += 0.002965462659957409;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6514.587695889199495) ) ) {
                result[0] += 0.0018518525793374393;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8132313610536542337) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7114701316667421116) ) ) {
                    result[0] += -0.001521426165680018;
                  } else {
                    result[0] += 0.000593845061330584;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6745780000000000109) ) ) {
                    result[0] += -0.00487395139270093;
                  } else {
                    result[0] += 0.0010695600125332214;
                  }
                }
              }
            }
          } else {
            result[0] += -0.0047616670527764115;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8363500000000000378) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2046649341083811857) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5885500000000001286) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09637116304413635703) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58876050420168369) ) ) {
            result[0] += 0.002085554620520138;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2516630000000000256) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1437665000000000193) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.07460750000000000715) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2432084806241540387) ) ) {
                    result[0] += 0.0003315085885702768;
                  } else {
                    result[0] += -0.0022926163884002945;
                  }
                } else {
                  result[0] += 0.003208102392581574;
                }
              } else {
                result[0] += -0.0013798999921451913;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06175018126544525726) ) ) {
                result[0] += -0.007761774638065808;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4223800000000000332) ) ) {
                  result[0] += -0.005133215461098327;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01025000000000000216) ) ) {
                    result[0] += 0.000808920881640219;
                  } else {
                    result[0] += -0.0027712483423384783;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5451500000000001345) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.669540229885059901) ) ) {
              result[0] += -0.0004066211919100224;
            } else {
              result[0] += -0.008758477103283216;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1456569483578152857) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1237500000000000128) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01885000000000000217) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09225511088934852666) ) ) {
                    result[0] += 0.0024384169449999326;
                  } else {
                    result[0] += -0.0012224413278216404;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7387500000000001288) ) ) {
                    result[0] += -0.0032034800133605534;
                  } else {
                    result[0] += 0.002944087223274347;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4043.949467352171723) ) ) {
                  result[0] += -0.01511530311396958;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5190295000000001435) ) ) {
                    result[0] += 0.0024913186471489735;
                  } else {
                    result[0] += -0.0028451845007843833;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1383455000000000379) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7972500000000001252) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1674644430706538067) ) ) {
                    result[0] += 0.002314498860249518;
                  } else {
                    result[0] += -0.00035672690488367713;
                  }
                } else {
                  result[0] += -0.0025364810298467004;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1400043546222365654) ) ) {
                  result[0] += -0.0006341921354483856;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.150900799608872066) ) ) {
                    result[0] += 0.01554313578195951;
                  } else {
                    result[0] += 0.004594299761933014;
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += -0.00824722269495924;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.207305540238820557) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4979840000000000377) ) ) {
          result[0] += -0.00720337646701781;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2740.110132415889893) ) ) {
            result[0] += -0.0026276770111894276;
          } else {
            result[0] += 0.003994287717173625;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8312500000000001554) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.826150000000000051) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8039500000000001645) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7750500000000001277) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1028217954414843011) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
                    result[0] += 1.7642781075937017e-05;
                  } else {
                    result[0] += 0.002884430827858144;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1221036777083292363) ) ) {
                    result[0] += -0.0011989302432061305;
                  } else {
                    result[0] += 8.582500013442833e-06;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1614813989374807301) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12314.72915242650379) ) ) {
                    result[0] += -0.003068194422582517;
                  } else {
                    result[0] += 0.0031798336794855815;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2221.82791069670111) ) ) {
                    result[0] += 0.012333906857621358;
                  } else {
                    result[0] += -0.002416715333125967;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2274745869116796826) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.23986928104575256) ) ) {
                  result[0] += 0.0030331734454958964;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
                    result[0] += -0.01302226966555378;
                  } else {
                    result[0] += 0.0005242655355443234;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07335542033840654341) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05807366328129486693) ) ) {
                    result[0] += 0.0012012620349498905;
                  } else {
                    result[0] += -0.0044421608888806285;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.56776556776557285) ) ) {
                    result[0] += 0.007852304487931392;
                  } else {
                    result[0] += -0.0013556529342131714;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2523846967694989285) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.985550935550937091) ) ) {
                result[0] += -0.004005150146240568;
              } else {
                result[0] += 0.00602436037019327;
              }
            } else {
              result[0] += -0.014948442697031163;
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4886700000000000488) ) ) {
            result[0] += 0.01090959525756716;
          } else {
            result[0] += -0.001598001068942358;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6149500000000001076) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8468500000000002137) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07571443317376934379) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.282505447475894178) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8413500000000001533) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.141604010025063065) ) ) {
                result[0] += 0.0009199720719020377;
              } else {
                result[0] += 0.008754418400631675;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.49501992031872577) ) ) {
                result[0] += 0.004412068981366176;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.731662826420891754) ) ) {
                  result[0] += -0.008878607503604606;
                } else {
                  result[0] += 0.001429352025504617;
                }
              }
            }
          } else {
            result[0] += -0.007485567214480286;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1899971049495448316) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1656810466657925307) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8442000000000001725) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1459325396825397192) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01625000000000000402) ) ) {
                    result[0] += 0.00042510303115028073;
                  } else {
                    result[0] += -0.008547855340798646;
                  }
                } else {
                  result[0] += 0.004588710450340227;
                }
              } else {
                result[0] += -0.010833121107471009;
              }
            } else {
              result[0] += -0.016865848908197;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1294500000000000373) ) ) {
              result[0] += 0.008754154641132954;
            } else {
              result[0] += -0.0005524787135833037;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09225511088934852666) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1051827870237245638) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8511000000000000787) ) ) {
              result[0] += 0.0076954697122287065;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9508000000000000895) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05807366328129486693) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03585000000000000686) ) ) {
                    result[0] += 0.0003655365066123188;
                  } else {
                    result[0] += 0.0024919379883407014;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2486.18702816013456) ) ) {
                    result[0] += -0.005707619014117861;
                  } else {
                    result[0] += -0.00025612123898020286;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02267788138525016553) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                    result[0] += -0.00025153609967079924;
                  } else {
                    result[0] += 0.0021780453027713574;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03230300464577552655) ) ) {
                    result[0] += -0.0015643848943585326;
                  } else {
                    result[0] += 0.004005424150578571;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6381740000000001301) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3012500000000000733) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1116920601014284448) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3914215000000000333) ) ) {
                    result[0] += 0.0017756537934610333;
                  } else {
                    result[0] += -0.01072327537552745;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                    result[0] += -0.0037911817222204026;
                  } else {
                    result[0] += 5.1187759481568384e-05;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.63592622293504775) ) ) {
                  result[0] += -0.010218629359293718;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11901.15478194124989) ) ) {
                    result[0] += 0.006209284651332903;
                  } else {
                    result[0] += -0.00649475670821557;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.38379705400982189) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7867050000000000987) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0406573266865800434) ) ) {
                    result[0] += -0.0049776461656597;
                  } else {
                    result[0] += -0.00029083478183119886;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1990818593712635198) ) ) {
                    result[0] += 0.001942083294623893;
                  } else {
                    result[0] += -0.0018191432500894457;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3152.729601350707071) ) ) {
                  result[0] += 0.008585586206088801;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03798846128036145048) ) ) {
                    result[0] += 0.004612967997837489;
                  } else {
                    result[0] += 2.9476439279399268e-06;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3100855000000000694) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2903305000000001024) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2135850000000000526) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.02827380952381375) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06795000000000002427) ) ) {
                    result[0] += -0.0019909223457581482;
                  } else {
                    result[0] += 0.0011668935673895162;
                  }
                } else {
                  result[0] += 0.003359010812731861;
                }
              } else {
                result[0] += 0.007150841798831341;
              }
            } else {
              result[0] += -0.004315588267581957;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09753122706715851298) ) ) {
              result[0] += 0.011992066497325893;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1028217954414843011) ) ) {
                result[0] += -0.0036948520625716035;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1145938035574793623) ) ) {
                  result[0] += 0.010255109327111413;
                } else {
                  result[0] += 0.0010082837454727632;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.00735294117647456) ) ) {
        result[0] += 0.009001262561276304;
      } else {
        result[0] += -0.0010346645153748383;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)196.1990881458966953) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)61615.68427007270657) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7171.422813562979172) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6936.642549725948811) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6721.244372388178817) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6617.041694952862599) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4786.052326248042846) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4397.595081501068307) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3902.354245376167455) ) ) {
                    result[0] += 6.744149077343679e-05;
                  } else {
                    result[0] += -0.0011300159984097152;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.259810052584194151) ) ) {
                    result[0] += 9.176626050307177e-05;
                  } else {
                    result[0] += 0.004416196856051665;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6221500000000000918) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10160.34738444595678) ) ) {
                    result[0] += -0.0004046683289559063;
                  } else {
                    result[0] += 0.006377021155949352;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)90.02272727272729469) ) ) {
                    result[0] += -0.0012510945672827933;
                  } else {
                    result[0] += 0.0017910438957106979;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.78049759229535454) ) ) {
                  result[0] += -0.010286598906952445;
                } else {
                  result[0] += -0.0019454002193829397;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.89545454545454817) ) ) {
                  result[0] += 0.006410627996686708;
                } else {
                  result[0] += -0.007721153625473641;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3944445000000000312) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.292095000000000049) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19615.56936635864986) ) ) {
                  result[0] += 0.0023425068617848334;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2247630000000000183) ) ) {
                    result[0] += 0.0006537108699658712;
                  } else {
                    result[0] += -0.006813905538729817;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14444.10811475239643) ) ) {
                  result[0] += 0.004836390892666709;
                } else {
                  result[0] += 0.014340916749836634;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.781746031746032521) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05807366328129486693) ) ) {
                  result[0] += 0.005339719825870633;
                } else {
                  result[0] += -0.0017970613325993283;
                }
              } else {
                result[0] += -0.004775658799563656;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1071921241514602469) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.60769230769231797) ) ) {
              result[0] += -0.0015550839029509639;
            } else {
              result[0] += 0.009625326894708176;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7344500000000001583) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6954500000000001236) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.43921568627451535) ) ) {
                  result[0] += -0.007840950027095894;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3220420529803963983) ) ) {
                    result[0] += -0.003118220200637131;
                  } else {
                    result[0] += -2.4496873500700984e-05;
                  }
                }
              } else {
                result[0] += 0.003697759761130992;
              }
            } else {
              result[0] += -0.014480992765434669;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7114701316667421116) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.64583333333335702) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1756975000000000342) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                result[0] += 0.00354096411621864;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6637500000000001732) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.02000000000000313) ) ) {
                    result[0] += 0.00015562338332409135;
                  } else {
                    result[0] += -0.003569757452890709;
                  }
                } else {
                  result[0] += -0.006809843845220799;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1972740000000000327) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10669.02265293044911) ) ) {
                    result[0] += -0.004430185430384185;
                  } else {
                    result[0] += 0.009492237259980708;
                  }
                } else {
                  result[0] += 0.0167030281295953;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2482395000000000296) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)13763.95786997891082) ) ) {
                    result[0] += -0.004426727016197951;
                  } else {
                    result[0] += 0.0025700285308237437;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2663275000000000503) ) ) {
                    result[0] += 0.006384625934070249;
                  } else {
                    result[0] += 0.0007018662321585882;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4194.688259547751841) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4780.79918261664443) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)88.33421052631580039) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12609.96159794874438) ) ) {
                    result[0] += 0.0006288714491860926;
                  } else {
                    result[0] += -0.00449112783895045;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-41588.36410045643424) ) ) {
                    result[0] += -0.0014006339101147339;
                  } else {
                    result[0] += 0.0003478769010453566;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.286523500000000042) ) ) {
                  result[0] += 0.001011521303456761;
                } else {
                  result[0] += 0.008315426959329823;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.325338167619579455) ) ) {
                result[0] += 0.0022699997074039934;
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                  result[0] += -0.00038549844645371033;
                } else {
                  result[0] += -0.011219438910968493;
                }
              }
            }
          }
        } else {
          result[0] += 0.006208417746752642;
        }
      }
    } else {
      result[0] += 0.004770215212815658;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)207.7083333333333428) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17224.94728213532289) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355721953891439735) ) ) {
          result[0] += 0.0019242973348226884;
        } else {
          result[0] += -0.0016899862620185298;
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2644870000000000831) ) ) {
          result[0] += -0.0031765321754647423;
        } else {
          result[0] += -0.007190009646912578;
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12609.96159794874438) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10669.02265293044911) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.793653083354456057) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2777390000000000692) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8163.77012159581227) ) ) {
                result[0] += -0.0005086457904934678;
              } else {
                result[0] += -0.001671528347632589;
              }
            } else {
              result[0] += -0.004731918810476378;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.063751731724852823) ) ) {
              result[0] += 0.0021253426931982008;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-102854.7252300698165) ) ) {
                result[0] += -0.00016174729058074437;
              } else {
                result[0] += -0.0021752623007986714;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1917145000000000377) ) ) {
            result[0] += -0.0006163810301267954;
          } else {
            result[0] += -0.00592560609127412;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)217.929861111111137) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3544845000000000357) ) ) {
            result[0] += -0.0007191673602672801;
          } else {
            result[0] += 0.006899617250150414;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-25974.62741760602876) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36262.76808293737122) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.09060995184590936) ) ) {
                result[0] += 0.003185415289129986;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9427500000000000879) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.741000000000000103) ) ) {
                    result[0] += -0.0007216257838459899;
                  } else {
                    result[0] += 0.0007138540792393956;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3125000000000000555) ) ) {
                    result[0] += -0.0009950191071992436;
                  } else {
                    result[0] += -0.005417143218096764;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-32503.51492044490442) ) ) {
                result[0] += -0.005400600840464716;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.3879142300194971) ) ) {
                  result[0] += -0.0038552233376137044;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)24923.86035082091621) ) ) {
                    result[0] += 0.0012783011971837126;
                  } else {
                    result[0] += -0.0007633959807481568;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)52991.21803976064984) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)275.2226890756302851) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2247630000000000183) ) ) {
                  result[0] += 0.0008740223505184766;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11538.33154189746892) ) ) {
                    result[0] += -0.00246302194337615;
                  } else {
                    result[0] += -0.005620929045654512;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4791666666666666852) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)29942.34890977981195) ) ) {
                    result[0] += -0.0003768788250016006;
                  } else {
                    result[0] += 0.0013696459039122544;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04411284851513137123) ) ) {
                    result[0] += -0.0014135373504179228;
                  } else {
                    result[0] += 0.007488182171596547;
                  }
                }
              }
            } else {
              result[0] += 0.006293152986169719;
            }
          }
        }
      }
    }
  }
}

