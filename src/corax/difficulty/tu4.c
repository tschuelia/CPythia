
#include "prediction.h"

void predict_unit4(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6795500000000002094) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)139.8343653250774139) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-102854.7252300698165) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)59.95123152709360426) ) ) {
            result[0] += -0.003314342275512601;
          } else {
            result[0] += -0.0007792338967580916;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08825000000000000899) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04025000000000000105) ) ) {
              result[0] += 0.0058952952843374755;
            } else {
              result[0] += 0.024484635705420192;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.0554917719096863) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3333500000000000907) ) ) {
                result[0] += 0.010663060239917158;
              } else {
                result[0] += 0.006884464354026812;
              }
            } else {
              result[0] += -0.0028737103183150013;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.10363247863248048) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19954.67408175594392) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5576.569694912017439) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5138.591951859688379) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09725000000000001699) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.16951566951567187) ) ) {
                    result[0] += 0.003906916550043249;
                  } else {
                    result[0] += 0.0205569315880792;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
                    result[0] += -0.0024182278725145127;
                  } else {
                    result[0] += 0.004889457981569714;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22828.66277171849651) ) ) {
                  result[0] += 0.005558594321722397;
                } else {
                  result[0] += 0.020557164758648463;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7903.503055055340155) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36262.76808293737122) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4950500000000000456) ) ) {
                    result[0] += 0.007476154088700865;
                  } else {
                    result[0] += -0.0031122851776465544;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.60043296587724726) ) ) {
                    result[0] += -0.002224232819203953;
                  } else {
                    result[0] += -0.011070031948995598;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4800500000000000322) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
                    result[0] += 0.0028436181555533705;
                  } else {
                    result[0] += 0.015203058333109294;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6180500000000000993) ) ) {
                    result[0] += -0.002262338725999216;
                  } else {
                    result[0] += 0.0019159681001443367;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.79217479674796998) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18722.62916807730289) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2899000000000000465) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.87666034155597927) ) ) {
                    result[0] += -0.0020031112812446132;
                  } else {
                    result[0] += -0.011023553781430544;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.920526315789475191) ) ) {
                    result[0] += -0.0031421650885437168;
                  } else {
                    result[0] += 0.0023799940611671927;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)27856.34674737125533) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05205000000000000598) ) ) {
                    result[0] += -0.0002555521488864308;
                  } else {
                    result[0] += 0.000422967556751528;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.799613899613900614) ) ) {
                    result[0] += -0.0014212416206692917;
                  } else {
                    result[0] += 0.011292596871710517;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.95672478206724954) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6999500000000000721) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6056.364809153568785) ) ) {
                    result[0] += 0.005863549957964041;
                  } else {
                    result[0] += -0.010465744101111283;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2362428548675385709) ) ) {
                    result[0] += -0.006150013175192629;
                  } else {
                    result[0] += -0.016736183327537697;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06340000000000002578) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1383500000000000285) ) ) {
                    result[0] += 0.01129287114754439;
                  } else {
                    result[0] += -0.0025259713657482994;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7317246774486193539) ) ) {
                    result[0] += -0.00023714418100284583;
                  } else {
                    result[0] += -0.003026376383022381;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4863.937132689356076) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.40153452685422764) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)16548.22517367959881) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-31307.28118192806505) ) ) {
                  result[0] += 0.0030545035768586885;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
                    result[0] += -0.0005279779549581727;
                  } else {
                    result[0] += -0.006371747969024118;
                  }
                }
              } else {
                result[0] += -0.007903968167091895;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[0] += -0.007775951658658505;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9662723239676943576) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5114794848757114876) ) ) {
                    result[0] += -2.0719227731455397e-05;
                  } else {
                    result[0] += -0.0019179205122574863;
                  }
                } else {
                  result[0] += 0.00978361993137478;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6458333333333333703) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3645.188716455099438) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1491.197321246881302) ) ) {
                  result[0] += -0.0036316890257924667;
                } else {
                  result[0] += -0.0004907744907688147;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2244500000000000106) ) ) {
                  result[0] += 0.0036813898143812827;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)516.3318945478059732) ) ) {
                    result[0] += -0.0012959606444970593;
                  } else {
                    result[0] += 0.0010282864779413087;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4005.782514566183636) ) ) {
                result[0] += 0.01510208427806376;
              } else {
                result[0] += 0.0025013439251937697;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-303065.7934048865573) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01205000000000000168) ) ) {
          result[0] += 0.007135308739974646;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)792.3125000000001137) ) ) {
            result[0] += -0.004048246161826547;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2274745869116796826) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7699000000000001398) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19428.1590909090919) ) ) {
                    result[0] += -0.0018479117520568099;
                  } else {
                    result[0] += -0.0029929084295371782;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8538500000000001089) ) ) {
                    result[0] += 0.0007742068073205968;
                  } else {
                    result[0] += 9.85280186581359e-05;
                  }
                }
              } else {
                result[0] += -0.0055703693983758466;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5594500000000001139) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001950000000000000127) ) ) {
                  result[0] += -0.004843816002349937;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06555000000000001104) ) ) {
                    result[0] += 0.0034891540739188424;
                  } else {
                    result[0] += -0.0007985272206107429;
                  }
                }
              } else {
                result[0] += 0.008226998084441476;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6458333333333333703) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8865.340930235526685) ) ) {
            result[0] += 0.0020894141274837292;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1055500000000000188) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3125000000000000555) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500000000000096) ) ) {
                  result[0] += 0.0009307542637856687;
                } else {
                  result[0] += -0.0004386735259685976;
                }
              } else {
                result[0] += -0.0009807573656427624;
              }
            } else {
              result[0] += -0.0026077848243354776;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5181399381581147656) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-131602.6154058956017) ) ) {
              result[0] += -0.009468703520862832;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5573500000000001231) ) ) {
                result[0] += -0.0047570732430378656;
              } else {
                result[0] += -0.0007181272949322441;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)26494.54584815848284) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03835000000000000214) ) ) {
                result[0] += -0.008340173412086578;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
                  result[0] += 0.002064847133068602;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)235.0476190476190652) ) ) {
                    result[0] += -0.0023439002758238376;
                  } else {
                    result[0] += -0.006771871411445782;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-202581.8869749966834) ) ) {
                result[0] += -0.0013410037441194068;
              } else {
                result[0] += 0.002710222840851209;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)331.7040358106666531) ) ) {
      result[0] += 0.0071168676212822884;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.67261904761906521) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13669.55583063214181) ) ) {
            result[0] += -0.0049052886965233146;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.655630936227951544) ) ) {
              result[0] += -0.0005907358300783901;
            } else {
              result[0] += 0.005905539939931201;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-37702.69135549560451) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-64209.50517865573784) ) ) {
              result[0] += -0.005290218505755916;
            } else {
              result[0] += 0.0040394768938179565;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.7294500000000000428) ) ) {
              result[0] += -0.015932525290604627;
            } else {
              result[0] += -0.005599238219226005;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34941.86410757353588) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-114816.4915942720399) ) ) {
            result[0] += 0.0031224520914874486;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5988500000000001044) ) ) {
              result[0] += -0.0016912918948699483;
            } else {
              result[0] += -0.008541827667004495;
            }
          }
        } else {
          result[0] += 0.0071719186664130205;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6856145000000001266) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6795500000000002094) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.725601914823043037) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4275000000000000466) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3209000000000000186) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2723500000000000365) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3964500000000000246) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.239250000000000046) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3455500000000000793) ) ) {
                    result[0] += -8.48802749555703e-05;
                  } else {
                    result[0] += 0.0025072876514551324;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3838015000000000732) ) ) {
                    result[0] += 0.0011163509558890809;
                  } else {
                    result[0] += 0.00910966670284103;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)131.9669371389429671) ) ) {
                  result[0] += -0.01252849957619547;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2161500000000000365) ) ) {
                    result[0] += -9.508978339936563e-05;
                  } else {
                    result[0] += -0.0016953090365144892;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8494243075500166329) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2866500000000000714) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6715500000000002023) ) ) {
                    result[0] += 0.001944329802188571;
                  } else {
                    result[0] += 0.011662541751005796;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7449.396245625598567) ) ) {
                    result[0] += 0.000128751191960371;
                  } else {
                    result[0] += 0.00435404800805668;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.80322580645161779) ) ) {
                  result[0] += -0.01032149247628984;
                } else {
                  result[0] += -0.0021259639091671277;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6111500000000000821) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46256684491978817) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.95938981653267597) ) ) {
                    result[0] += 0.0003916440270885806;
                  } else {
                    result[0] += 0.006551367437452646;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4482755000000000489) ) ) {
                    result[0] += -0.0005491479921277044;
                  } else {
                    result[0] += -0.0067890607354491985;
                  }
                }
              } else {
                result[0] += 0.011216438934015076;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3241500000000000492) ) ) {
                result[0] += -0.011765596679615332;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3333500000000000907) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4337.012047408426952) ) ) {
                    result[0] += 0.009818600733815453;
                  } else {
                    result[0] += -0.002099825228693375;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3547500000000000653) ) ) {
                    result[0] += -0.007166776447887527;
                  } else {
                    result[0] += -0.0024423188291341075;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.297352577637783666) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5075500000000000567) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4862500000000000155) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8923726800623609234) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5897082175521570768) ) ) {
                    result[0] += 0.001562376586845743;
                  } else {
                    result[0] += -0.005738378855660577;
                  }
                } else {
                  result[0] += 0.011192985401567967;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3489680000000000559) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4950500000000000456) ) ) {
                    result[0] += 0.008738582225075474;
                  } else {
                    result[0] += -0.012384199815837701;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.095327520679633793) ) ) {
                    result[0] += 0.001155462815681258;
                  } else {
                    result[0] += 0.01407680563984572;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3757500000000000284) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.472136222910218173) ) ) {
                    result[0] += -0.00955974027690943;
                  } else {
                    result[0] += 0.0024310124289340933;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5807.741032024249762) ) ) {
                    result[0] += -0.0098072277394278;
                  } else {
                    result[0] += -0.003647074378216371;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5063.376429866547369) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5218480000000002006) ) ) {
                    result[0] += 0.006578240435062355;
                  } else {
                    result[0] += -0.004766512024175879;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5236500000000000599) ) ) {
                    result[0] += -0.007332356868930904;
                  } else {
                    result[0] += 0.0004413674406551868;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.380182360511232664) ) ) {
              result[0] += 0.01479995525270867;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)131.9669371389429671) ) ) {
                result[0] += 0.009714766652225362;
              } else {
                result[0] += -0.00313066303308879;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2711220000000000296) ) ) {
            result[0] += -0.0009278128238859099;
          } else {
            result[0] += 0.006473876983279127;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)274.1091215662196987) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)156.6560485639346041) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.343954916307972258) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.95912400047738622) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4524500000000000743) ) ) {
                    result[0] += -0.002793402245183783;
                  } else {
                    result[0] += 0.00492176307646482;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06340000000000002578) ) ) {
                    result[0] += -0.011644716094786064;
                  } else {
                    result[0] += -0.003296291504788928;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1397500000000000409) ) ) {
                  result[0] += 0.0045720274797573955;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4036500000000000088) ) ) {
                    result[0] += -0.003757645691099765;
                  } else {
                    result[0] += 0.0005652153469589839;
                  }
                }
              }
            } else {
              result[0] += -0.01077135139704659;
            }
          } else {
            result[0] += 0.004848913890733348;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5102655000000001495) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4348000000000000198) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1312.224607273150696) ) ) {
            result[0] += 0.003135570973997245;
          } else {
            result[0] += -0.0017479424792224258;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7449.396245625598567) ) ) {
            result[0] += -0.013492364913386845;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)29942.34890977981195) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)110.170454545454561) ) ) {
                result[0] += -0.006229573462989759;
              } else {
                result[0] += 0.0034629554064752543;
              }
            } else {
              result[0] += -0.009375723700038394;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.68322981366461022) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3902.354245376167455) ) ) {
            result[0] += 0.004413436679829721;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.28510807180364495) ) ) {
              result[0] += 5.856166679921563e-05;
            } else {
              result[0] += -0.008458698582054605;
            }
          }
        } else {
          result[0] += 0.0070781663054948814;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.369694397283531817) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7356605000000001615) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02265000000000000346) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1207048891313476507) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01225000000000000221) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.26158232359230382) ) ) {
                result[0] += 0.003626694721032687;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005650000000000001375) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5576.569694912017439) ) ) {
                    result[0] += -0.0051622440630684375;
                  } else {
                    result[0] += 0.001161821354050628;
                  }
                } else {
                  result[0] += 0.0036931294561552085;
                }
              }
            } else {
              result[0] += -0.006483000771738698;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8006849315068494954) ) ) {
              result[0] += -0.0030905819779974046;
            } else {
              result[0] += -0.011842777009139886;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.876096491228070429) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.459748843357567827) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.579390238601620311) ) ) {
                result[0] += 0.0024576864422685917;
              } else {
                result[0] += -0.00010994935061116368;
              }
            } else {
              result[0] += 0.005578905955725912;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06555000000000001104) ) ) {
              result[0] += 0.0015639552434418996;
            } else {
              result[0] += -0.00584608856509464;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5807.741032024249762) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.79261363636364734) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9826500000000001345) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009944440127977462532) ) ) {
                result[0] += 0.0059051689371421865;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3152.729601350707071) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2301.556344757376337) ) ) {
                    result[0] += 0.0011450058916121655;
                  } else {
                    result[0] += -0.0021115820151948027;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02159164964612171264) ) ) {
                    result[0] += 0.00516886228760676;
                  } else {
                    result[0] += 0.001712624480766894;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.10319148936170564) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2163.442343789042752) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3128156565656566301) ) ) {
                    result[0] += -0.004154170821478788;
                  } else {
                    result[0] += 0.0013720485444335881;
                  }
                } else {
                  result[0] += 0.003206883382245478;
                }
              } else {
                result[0] += -0.006949628312613933;
              }
            }
          } else {
            result[0] += 0.008006921880935798;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6279.125985810902421) ) ) {
            result[0] += -0.006508628030254833;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7903.503055055340155) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7344.62256810161216) ) ) {
                result[0] += 0.00026354936174569353;
              } else {
                result[0] += 0.004973576411417597;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6630084695216510449) ) ) {
                result[0] += 0.001599047000646963;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01763478653336062602) ) ) {
                  result[0] += -0.007055626755729415;
                } else {
                  result[0] += -0.001028144557774088;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.17914438502674557) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.6605458221024314) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8501325000000000687) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8190475000000000394) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.903993855606759045) ) ) {
                  result[0] += 0.0028919858170681997;
                } else {
                  result[0] += -0.007272671073196588;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06795000000000002427) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7435555000000001469) ) ) {
                    result[0] += 0.0021545922432543137;
                  } else {
                    result[0] += 0.008501992592792553;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.969280660377358938) ) ) {
                    result[0] += -0.0022424326826949795;
                  } else {
                    result[0] += 0.0020863964542589594;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.225850000000000023) ) ) {
                result[0] += -0.0023061950302611135;
              } else {
                result[0] += -0.009242971689426727;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)932.260226151358097) ) ) {
              result[0] += 0.007581734927545498;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2836.592125003699493) ) ) {
                result[0] += 0.0008566209446279397;
              } else {
                result[0] += 0.004471576284713261;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.947140112784286) ) ) {
              result[0] += 0.0058084212600856685;
            } else {
              result[0] += 0.01613267528182977;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3071499552684361367) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.08578431372549744) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                  result[0] += -0.0042838620260460284;
                } else {
                  result[0] += 0.005349330110303607;
                }
              } else {
                result[0] += 0.008537568651094533;
              }
            } else {
              result[0] += -0.0058677177703154145;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.941722972972973693) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7903.503055055340155) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.594010800196367761) ) ) {
              result[0] += -0.0003685740555723223;
            } else {
              result[0] += -0.014090526672668444;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.757297000000000109) ) ) {
              result[0] += 0.004821281184571155;
            } else {
              result[0] += -0.0005019600477431494;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.95912400047738622) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1821500000000000341) ) ) {
              result[0] += 0.00039718948164151947;
            } else {
              result[0] += 0.00643892025831942;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1237500000000000128) ) ) {
                result[0] += -0.0037305163763430415;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.02459016393443392) ) ) {
                  result[0] += 0.007459576459949208;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6221500000000000918) ) ) {
                    result[0] += 0.0024935127956013043;
                  } else {
                    result[0] += -0.005034838780934143;
                  }
                }
              }
            } else {
              result[0] += -0.006021441269854709;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5056465000000001098) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6795500000000002094) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7171.422813562979172) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03446328318850828271) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07838686466789439311) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.47405150000000007) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4524.630590094714535) ) ) {
                result[0] += 0.0013688096106535671;
              } else {
                result[0] += -0.007836706332372274;
              }
            } else {
              result[0] += 0.00532250976758904;
            }
          } else {
            result[0] += -0.018066497446478775;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9352500000000000258) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.593650000000000122) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1581026364170406151) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1647.715800020721645) ) ) {
                    result[0] += 0.004960429346104603;
                  } else {
                    result[0] += -0.0003987790617403335;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3432.582344911681957) ) ) {
                    result[0] += 0.02250173190603407;
                  } else {
                    result[0] += 0.009140922962058338;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4803413391557496692) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0487500000000000086) ) ) {
                    result[0] += 9.750533263088301e-05;
                  } else {
                    result[0] += 0.0042054072834433204;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4888543444488743783) ) ) {
                    result[0] += -0.005552460310776235;
                  } else {
                    result[0] += -0.0003408073956125754;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3901314090609130369) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1456569483578152857) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4725700000000001011) ) ) {
                    result[0] += -0.0008098157840988442;
                  } else {
                    result[0] += -0.004500797325986407;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4269960000000000977) ) ) {
                    result[0] += -0.00010324230831373386;
                  } else {
                    result[0] += 0.003936289788459757;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1548000000000000209) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3286648086247792588) ) ) {
                    result[0] += -0.004610073420827859;
                  } else {
                    result[0] += 0.005427237262509032;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4212533942858654457) ) ) {
                    result[0] += 0.00345236911361727;
                  } else {
                    result[0] += -0.0016129295513610808;
                  }
                }
              }
            }
          } else {
            result[0] += 0.008990822512464932;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.77500000000000568) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1756975000000000342) ) ) {
            result[0] += -0.007775564147145367;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1972740000000000327) ) ) {
              result[0] += 0.015608968182225132;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2135850000000000526) ) ) {
                result[0] += -0.010298508300335267;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.00847457627119041) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.5773524720893235) ) ) {
                    result[0] += 0.0024838052715693694;
                  } else {
                    result[0] += -0.004884871046711379;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.347563200274363493) ) ) {
                    result[0] += 0.0025068865599274705;
                  } else {
                    result[0] += 0.011645359155590599;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01943819331435730352) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03748475326359510668) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)792.3125000000001137) ) ) {
                  result[0] += -0.0045218637652276825;
                } else {
                  result[0] += -0.0018754969163674645;
                }
              } else {
                result[0] += 0.005656465520454606;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3466475000000000528) ) ) {
                result[0] += -0.005735920563679362;
              } else {
                result[0] += -0.017110475712132034;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4249400000000000399) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4189740000000000686) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9389500000000000624) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7344.62256810161216) ) ) {
                    result[0] += 0.006723726268146101;
                  } else {
                    result[0] += -0.0002276082411452969;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08825000000000000899) ) ) {
                    result[0] += 0.007015887725764206;
                  } else {
                    result[0] += -0.006255171109362579;
                  }
                }
              } else {
                result[0] += -0.009689706118029027;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10017.88409225704527) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1846000000000000141) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8560500000000000886) ) ) {
                    result[0] += 0.02185998702759107;
                  } else {
                    result[0] += 0.010507158440988712;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3590000000000000413) ) ) {
                    result[0] += -0.005904848481957075;
                  } else {
                    result[0] += 0.004605037428629922;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.906550000000000078) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06212817787824550381) ) ) {
                    result[0] += 0.010617254033404163;
                  } else {
                    result[0] += -0.00032987657484467994;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08390237751272640321) ) ) {
                    result[0] += -0.0030196662895184377;
                  } else {
                    result[0] += -0.013174889516841384;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4553150571621396026) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8018000000000000682) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3499121892707919845) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2619963990829793921) ) ) {
              result[0] += -0.00928317606484604;
            } else {
              result[0] += -0.0022976111453996257;
            }
          } else {
            result[0] += -0.012570772505617339;
          }
        } else {
          result[0] += 0.00032038294274955114;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10669.02265293044911) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3404000000000000359) ) ) {
            result[0] += 0.001732750870055536;
          } else {
            result[0] += -0.00734898769261152;
          }
        } else {
          result[0] += 0.005979804937623103;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3511633202422851929) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2725118062635197291) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2317701511745485499) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.217148977082086192) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2449000000000000343) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1597878988880053475) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2284500000000000142) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3062135551683158874) ) ) {
                    result[0] += 0.0006849544885491586;
                  } else {
                    result[0] += -0.0017132280063253522;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.3783980078854583) ) ) {
                    result[0] += 0.003120161744776857;
                  } else {
                    result[0] += 0.011954530072571603;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1893500000000000461) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.82683658170914853) ) ) {
                    result[0] += 0.0016127754429954074;
                  } else {
                    result[0] += 0.008131709706755494;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2110000000000000209) ) ) {
                    result[0] += -0.007124750684746989;
                  } else {
                    result[0] += -0.001132142605392881;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2626500000000001056) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.10620300751880762) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6458715000000000428) ) ) {
                    result[0] += -0.002794847604256351;
                  } else {
                    result[0] += 0.006537272905093421;
                  }
                } else {
                  result[0] += -0.016016427745913824;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6094.863866320612033) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.68044077134987191) ) ) {
                    result[0] += -0.0003784427261319694;
                  } else {
                    result[0] += 0.00741844204365666;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.150900799608872066) ) ) {
                    result[0] += -0.0027057155506900405;
                  } else {
                    result[0] += 0.001831207712593874;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.76676186590507811) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5771835000000001825) ) ) {
                result[0] += -0.006647382019605516;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6323505000000001486) ) ) {
                  result[0] += 0.008717509642298872;
                } else {
                  result[0] += -0.002209440619390405;
                }
              }
            } else {
              result[0] += -0.015090500220643923;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6618093422766974099) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5329385000000000927) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5218480000000002006) ) ) {
                result[0] += 0.004747726319311775;
              } else {
                result[0] += -0.010401954063192855;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5931885000000001185) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4010.052697610588893) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.288941480206541534) ) ) {
                    result[0] += 0.004201202167781831;
                  } else {
                    result[0] += 0.016960743432948375;
                  }
                } else {
                  result[0] += 0.0013818229878725973;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5127500000000001501) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6049365000000000991) ) ) {
                    result[0] += 0.001201228443242426;
                  } else {
                    result[0] += 0.010247697932831435;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6317500000000001448) ) ) {
                    result[0] += 0.00183366762316192;
                  } else {
                    result[0] += -0.001788364929970015;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.866661769027329054) ) ) {
              result[0] += 6.12462463871116e-05;
            } else {
              result[0] += -0.0077177967831783155;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06205000000000000793) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.620622000000000118) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)977.7693481096513324) ) ) {
              result[0] += -0.02558587997054331;
            } else {
              result[0] += -0.009770584772175791;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3188822082018960002) ) ) {
              result[0] += -0.0045290920730046815;
            } else {
              result[0] += 0.004529270844135879;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289080946470230471) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4888543444488743783) ) ) {
              result[0] += 0.0029319658176880066;
            } else {
              result[0] += -0.02022924645390627;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2762500000000000511) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4723500000000000476) ) ) {
                result[0] += -0.0015592762818843007;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.02889784946237128) ) ) {
                  result[0] += 0.005285192827615688;
                } else {
                  result[0] += 0.01487702342033581;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3685500000000000442) ) ) {
                result[0] += -0.009837666802427458;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5896685000000000398) ) ) {
                  result[0] += -0.006114557388785926;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6149500000000001076) ) ) {
                    result[0] += 0.007418283631749451;
                  } else {
                    result[0] += -0.002610884028995728;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)302.7868852467867669) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4229000000000000536) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)251.1722712442703482) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)59.79870609904083523) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.866661769027329054) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5309975000000001222) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9613228062833077958) ) ) {
                    result[0] += 0.011711629568280741;
                  } else {
                    result[0] += -0.0018899092201307872;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                    result[0] += -0.00404811415895678;
                  } else {
                    result[0] += 0.0008009564190296926;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2797500000000000542) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.654567000000000121) ) ) {
                    result[0] += -0.0049501668188656235;
                  } else {
                    result[0] += -0.011328249120803859;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9107236455282137211) ) ) {
                    result[0] += -0.0025242220878465785;
                  } else {
                    result[0] += 0.007200481990146113;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1644500000000000128) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
                  result[0] += -0.002926660260095146;
                } else {
                  result[0] += 0.019459244581608713;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5802690000000000348) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)131.9669371389429671) ) ) {
                    result[0] += -0.010740074041671464;
                  } else {
                    result[0] += -0.00029091365791965177;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8029140176696568654) ) ) {
                    result[0] += 0.008860013746723221;
                  } else {
                    result[0] += 0.0012805317567469944;
                  }
                }
              }
            }
          } else {
            result[0] += -0.00816606085786032;
          }
        } else {
          result[0] += -0.013661714979568638;
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5896685000000000398) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5908139956411030402) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4613500000000000933) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1312.224607273150696) ) ) {
                result[0] += 0.02645903521064617;
              } else {
                result[0] += 0.012959984831118052;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5412680000000000824) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1752500000000000446) ) ) {
                  result[0] += -0.004760799577549118;
                } else {
                  result[0] += 0.005914917467374175;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5025500000000000522) ) ) {
                  result[0] += 0.0019841495366196434;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.49775381850854217) ) ) {
                    result[0] += 0.019287975263467236;
                  } else {
                    result[0] += 0.007038214453524831;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3964500000000000246) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.52606951871658048) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5191497654354458868) ) ) {
                  result[0] += -0.004112149176079619;
                } else {
                  result[0] += 0.0034174300475960594;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.04925431711146899) ) ) {
                  result[0] += 0.021604496462369505;
                } else {
                  result[0] += 0.0009732956369494926;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6390813770363973356) ) ) {
                result[0] += 0.0041072839992473045;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6791288143489402351) ) ) {
                  result[0] += -0.014037317544605113;
                } else {
                  result[0] += -0.0035076496562543675;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)540.2594105796734993) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2449000000000000343) ) ) {
              result[0] += 0.001977131066539102;
            } else {
              result[0] += 0.012566993542780762;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17824.9451882581634) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.620622000000000118) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7114701316667421116) ) ) {
                  result[0] += -0.011940708064317622;
                } else {
                  result[0] += -0.0018527798075468073;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6736220450276145799) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3638500000000000623) ) ) {
                    result[0] += -0.006778877824938711;
                  } else {
                    result[0] += 0.0016309963490139347;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5024443287353715926) ) ) {
                    result[0] += 0.009504925855611114;
                  } else {
                    result[0] += 0.0001626095236293302;
                  }
                }
              }
            } else {
              result[0] += 0.0058594566180661155;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3817900000000000182) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3792435000000000112) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08035000000000000475) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3346595000000000542) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0611500000000000099) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.8269148480958517) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.03591337907375802) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04115000000000001296) ) ) {
                    result[0] += -0.00032623725301113516;
                  } else {
                    result[0] += 0.005818690419971572;
                  }
                } else {
                  result[0] += 0.014445377255803145;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66515151515151771) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4248.335231464433491) ) ) {
                    result[0] += 0.0036695817947987154;
                  } else {
                    result[0] += -0.009319964803513853;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.02889784946237128) ) ) {
                    result[0] += 0.003545792900004455;
                  } else {
                    result[0] += -0.0005926956946166843;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1525564339979418871) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2065.691826137578119) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06795000000000002427) ) ) {
                    result[0] += 0.004049141324603809;
                  } else {
                    result[0] += -0.006800962521782344;
                  }
                } else {
                  result[0] += -0.01622363101869162;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6934500000000000108) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4905.045163925654379) ) ) {
                    result[0] += 0.005797432105946671;
                  } else {
                    result[0] += -0.0026931586809318658;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.77500000000000568) ) ) {
                    result[0] += 0.02230307071861563;
                  } else {
                    result[0] += 0.003177074051760712;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2370.398064265408721) ) ) {
                result[0] += -0.02000400595586852;
              } else {
                result[0] += -0.006690014986170227;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3694.512900490842185) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.93844696969697239) ) ) {
                  result[0] += -0.012791592823775882;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.259810052584194151) ) ) {
                    result[0] += -0.0022212928493379903;
                  } else {
                    result[0] += 0.005620595386567859;
                  }
                }
              } else {
                result[0] += 0.00913606668293775;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3689335000000000808) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1597878988880053475) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46256684491978817) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.799613899613900614) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3558790000000000564) ) ) {
                    result[0] += 0.005616884597058195;
                  } else {
                    result[0] += -0.01173241186978738;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.084422195825556656) ) ) {
                    result[0] += 0.018420450983937287;
                  } else {
                    result[0] += 0.001755704326084282;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8098.539324017688159) ) ) {
                  result[0] += -0.014281806289692459;
                } else {
                  result[0] += -1.2976680704408307e-05;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6267500000000001403) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3228.941485040616953) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
                    result[0] += -0.0044349663287174814;
                  } else {
                    result[0] += 0.005955962074717762;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03735000000000000819) ) ) {
                    result[0] += -0.00448446683159173;
                  } else {
                    result[0] += -0.01948284141189392;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1931.502833784104268) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.03088619624613997) ) ) {
                    result[0] += -0.029054409502766203;
                  } else {
                    result[0] += -0.009750758126064329;
                  }
                } else {
                  result[0] += 0.0012727410519133876;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06375000000000001499) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4274500000000000521) ) ) {
                  result[0] += 0.011196889753770917;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46256684491978817) ) ) {
                    result[0] += 0.0030024029589012812;
                  } else {
                    result[0] += -0.008988010743262293;
                  }
                }
              } else {
                result[0] += 0.020043189159239097;
              }
            } else {
              result[0] += -0.007541818627968519;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03615663516913097952) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73252032520325372) ) ) {
            result[0] += -0.010950426396785456;
          } else {
            result[0] += 0.0020269711685993556;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05290970539545401113) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8560500000000000886) ) ) {
              result[0] += 0.014262478734152824;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1466500000000000303) ) ) {
                result[0] += -0.008814235234452244;
              } else {
                result[0] += 0.007356895138353056;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4972.713039862052938) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1448500000000000343) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.04557724252491901) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3430250000000000798) ) ) {
                    result[0] += -0.004289092785508218;
                  } else {
                    result[0] += -0.020698705397321267;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1326500000000000179) ) ) {
                    result[0] += 0.00036820440055288124;
                  } else {
                    result[0] += -0.0036673676663613736;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1606500000000000428) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1810809162147536122) ) ) {
                    result[0] += -0.003916666408484949;
                  } else {
                    result[0] += 0.006932375547281902;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1647500000000000353) ) ) {
                    result[0] += -0.006099739915964007;
                  } else {
                    result[0] += 3.091132501985847e-05;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1584500000000000075) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4385500000000000509) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1168500000000000094) ) ) {
                    result[0] += 0.0018202609693629783;
                  } else {
                    result[0] += -0.0064690017187285405;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1263500000000000456) ) ) {
                    result[0] += 0.002303926157930952;
                  } else {
                    result[0] += 0.010541753653944297;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2844999957084173303) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2548388444636935923) ) ) {
                    result[0] += -0.001746537902215909;
                  } else {
                    result[0] += -0.012298213040341916;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5749500000000000721) ) ) {
                    result[0] += -0.0003160909423330769;
                  } else {
                    result[0] += 0.00694184019632334;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5712.899764193519331) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2339734189577260814) ) ) {
          result[0] += 0.0041218997327574355;
        } else {
          result[0] += -0.0011301531974226816;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.5141620771046469) ) ) {
          result[0] += -0.013394803283332353;
        } else {
          result[0] += -0.0036445408635082076;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3958333333333334259) ) ) {
      result[0] += -0.00654771423532541;
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3895535000000000525) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5891.981688076555656) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.28510807180364495) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1364500000000000435) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08955000000000001847) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04565000000000000308) ) ) {
                  result[0] += 0.0006859876400720035;
                } else {
                  result[0] += -0.008192394263079881;
                }
              } else {
                result[0] += 0.0040375463436739525;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.10620300751880762) ) ) {
                result[0] += -0.005109617994153514;
              } else {
                result[0] += -0.013959636916395254;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5674000000000000155) ) ) {
              result[0] += -0.0033186869762801747;
            } else {
              result[0] += 0.011373763116442212;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2637.868029878028665) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.799613899613900614) ) ) {
                  result[0] += 0.0002249622891684648;
                } else {
                  result[0] += -0.009071134311914473;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6934500000000000108) ) ) {
                  result[0] += 0.006212886815901783;
                } else {
                  result[0] += -4.2820726374079266e-05;
                }
              }
            } else {
              result[0] += 0.007916666570446578;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3303.87952810574825) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1780500000000000138) ) ) {
                result[0] += 0.022124927585915145;
              } else {
                result[0] += 0.008115454448061762;
              }
            } else {
              result[0] += 0.0026188062594405667;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3914215000000000333) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45958279009126635) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2762.179861479253759) ) ) {
              result[0] += 0.007423386416310168;
            } else {
              result[0] += -0.008193119140756017;
            }
          } else {
            result[0] += -0.012011729129255926;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.731662826420891754) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.448321891685737661) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.194335169158143639) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5896685000000000398) ) ) {
                    result[0] += 0.001900254163154415;
                  } else {
                    result[0] += -0.00018722634781678324;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4011018767401447471) ) ) {
                    result[0] += -0.0009904044797689202;
                  } else {
                    result[0] += -0.015505892801589606;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5056465000000001098) ) ) {
                  result[0] += 0.019441800242278102;
                } else {
                  result[0] += -0.004013152726039085;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.854322937228583434) ) ) {
                result[0] += -0.015079800855474057;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5164445000000000841) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                    result[0] += 0.0058092081707028;
                  } else {
                    result[0] += -0.004033820336922147;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5633670000000000622) ) ) {
                    result[0] += 0.006468723010304395;
                  } else {
                    result[0] += -0.00312659037814131;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02265000000000000346) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.437797619047619602) ) ) {
                result[0] += 0.0015883401226817714;
              } else {
                result[0] += 0.012878866915959878;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-284.2006577138453736) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1004.56789128042135) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1039.769997802646685) ) ) {
                    result[0] += 0.00031504317800970576;
                  } else {
                    result[0] += -0.009289227990519738;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.184936040256943768) ) ) {
                    result[0] += 0.003994349177022849;
                  } else {
                    result[0] += -0.003595090922134623;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.66280257606040438) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1487500000000000211) ) ) {
                    result[0] += -0.002453911588150607;
                  } else {
                    result[0] += 0.005219323451083015;
                  }
                } else {
                  result[0] += -0.01716632103554907;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.620622000000000118) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6795500000000002094) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8642000000000001902) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09882060861174114808) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105614129712844229) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5633670000000000622) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4391930000000000556) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3003.428069510595833) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1521960466719389227) ) ) {
                    result[0] += 0.005216094186066332;
                  } else {
                    result[0] += -0.009234406658211956;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5138.591951859688379) ) ) {
                    result[0] += 0.005212525833861363;
                  } else {
                    result[0] += -0.000901162995012411;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4598785000000000234) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8468500000000002137) ) ) {
                    result[0] += 0.006378037430252452;
                  } else {
                    result[0] += 0.01791661296874719;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09483558412827299) ) ) {
                    result[0] += 0.0004993777179288143;
                  } else {
                    result[0] += 0.012077568223282625;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9044.257124938287234) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2103829836027978628) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500000000000065) ) ) {
                    result[0] += 0.00042918789197109517;
                  } else {
                    result[0] += -0.011422527761110964;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07335542033840654341) ) ) {
                    result[0] += -0.0030407614802939998;
                  } else {
                    result[0] += 0.004794164487213585;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.67375886524823159) ) ) {
                  result[0] += -0.015442795116970305;
                } else {
                  result[0] += -0.008106641405402211;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5058210444616920709) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0721258717034851532) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4346740216305434168) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2686500000000000554) ) ) {
                    result[0] += 0.0004399674329019004;
                  } else {
                    result[0] += 0.009433383895752942;
                  }
                } else {
                  result[0] += -0.00633581752810913;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36262.76808293737122) ) ) {
                  result[0] += 0.013885440358471435;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.64946018893387958) ) ) {
                    result[0] += 0.0063619829382361845;
                  } else {
                    result[0] += -0.006524655899589263;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.42430441898527071) ) ) {
                result[0] += -0.0016828869129141004;
              } else {
                result[0] += -0.008950031661222107;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1085485015600718556) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1267725882486329947) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)184.5543478260869676) ) ) {
                result[0] += 0.012840350008521954;
              } else {
                result[0] += -0.0021501767977746126;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3229585000000000927) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2736000000000000099) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10398.26697253586644) ) ) {
                    result[0] += 0.0012127116503454843;
                  } else {
                    result[0] += -0.00549413706797759;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2977460000000000107) ) ) {
                    result[0] += 0.014553826856351542;
                  } else {
                    result[0] += 7.723921825533839e-07;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.12568922305764652) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3218960891583437234) ) ) {
                    result[0] += 0.011423267697949793;
                  } else {
                    result[0] += -0.0017045434751896914;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6740.924545030961781) ) ) {
                    result[0] += -0.0013519104416046918;
                  } else {
                    result[0] += -0.00849881012551547;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1098096607971473931) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2996690000000000187) ) ) {
                result[0] += -0.005231206775850192;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4285545000000000604) ) ) {
                  result[0] += 0.016716887935948013;
                } else {
                  result[0] += 0.006006316325054243;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2508523744426000568) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2065670000000000284) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2004115000000000202) ) ) {
                    result[0] += -0.000248411141841482;
                  } else {
                    result[0] += -0.006694310224031114;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.745450000000000057) ) ) {
                    result[0] += 0.004002609622892277;
                  } else {
                    result[0] += 0.0005215848453747308;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7750500000000001277) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
                    result[0] += -0.000658228333749332;
                  } else {
                    result[0] += 0.000302249878607466;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8039500000000001645) ) ) {
                    result[0] += -0.011120930332556145;
                  } else {
                    result[0] += 0.005496810063845682;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09832385137914774476) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3272.957111253326275) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.44472616632860706) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09005480525100587053) ) ) {
                result[0] += 0.005314065006375554;
              } else {
                result[0] += 0.012703779391912206;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1385.723442430589557) ) ) {
                result[0] += 0.009550111056296391;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.07146908678389963) ) ) {
                  result[0] += -0.0050487875513780985;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3914215000000000333) ) ) {
                    result[0] += 0.00031937653435778465;
                  } else {
                    result[0] += 0.005957344375960664;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3490.248056722161436) ) ) {
              result[0] += -0.013525781889882103;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09637116304413635703) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06624646256753281837) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9551500000000000545) ) ) {
                    result[0] += 0.0024073757322560134;
                  } else {
                    result[0] += -0.002058616383713549;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0480211614051639854) ) ) {
                    result[0] += -0.004313991044277651;
                  } else {
                    result[0] += 0.0008489163986956496;
                  }
                }
              } else {
                result[0] += 0.008353373429668184;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3035.449605533378872) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05705000000000001042) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4427690000000000237) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.010850000000000002) ) ) {
                  result[0] += -0.019250033861856187;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1172585597165276133) ) ) {
                    result[0] += 0.006569823659700096;
                  } else {
                    result[0] += -0.008409751457451332;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8903500000000000858) ) ) {
                  result[0] += 0.006566224716265217;
                } else {
                  result[0] += -0.0035118826254261046;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0734500000000000014) ) ) {
                result[0] += -0.02418838412341438;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.44472616632860706) ) ) {
                  result[0] += 0.006516760352008238;
                } else {
                  result[0] += -0.01197961378023307;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3317.314990557732017) ) ) {
              result[0] += 0.010351971067137119;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9247500000000000719) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05701861194901656354) ) ) {
                    result[0] += -0.012842665850783405;
                  } else {
                    result[0] += 0.00013354755141841687;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4660265000000000657) ) ) {
                    result[0] += -0.0021299652693117814;
                  } else {
                    result[0] += 0.003531803340378117;
                  }
                }
              } else {
                result[0] += -0.011757542509865646;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1312.224607273150696) ) ) {
        result[0] += 0.0027099158647077904;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8692129219887744229) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.368560367816584411) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8163500000000000201) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.60769230769231797) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)13763.95786997891082) ) ) {
                  result[0] += -0.005048013162831504;
                } else {
                  result[0] += 0.0004414059777077361;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.282505447475894178) ) ) {
                  result[0] += -0.01092141023043033;
                } else {
                  result[0] += -0.004086328636662426;
                }
              }
            } else {
              result[0] += 0.0016749300206224213;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4962000000000000299) ) ) {
              result[0] += -0.003051041035319902;
            } else {
              result[0] += 0.0036079391959456864;
            }
          }
        } else {
          result[0] += -0.00961306497034194;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)29942.34890977981195) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17705.48077603937054) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.0554917719096863) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2412699476203346849) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5340500000000001357) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7219650000000000789) ) ) {
                result[0] += 0.00610077334408593;
              } else {
                result[0] += 8.305029490928072e-05;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6960285000000000499) ) ) {
                result[0] += -0.002621127727169173;
              } else {
                result[0] += 0.0020781788476127764;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29973.18077780933891) ) ) {
              result[0] += 0.004027667970434786;
            } else {
              result[0] += 0.009839753045972205;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17824.9451882581634) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
              result[0] += 0.0005587175124083203;
            } else {
              result[0] += -0.004502581541302414;
            }
          } else {
            result[0] += 0.0037315685312891158;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2805.314543835761469) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1234.374879497081338) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6736220450276145799) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.345490716180373525) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3606.555973432984047) ) ) {
                  result[0] += 0.002101952190871707;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6089500000000001023) ) ) {
                    result[0] += -0.0071120460437816635;
                  } else {
                    result[0] += -0.0008861600622556137;
                  }
                }
              } else {
                result[0] += -0.017095532430930482;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)92.51656411757237208) ) ) {
                result[0] += -0.005659018406033769;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)682.5859171509390535) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4609.951933392212595) ) ) {
                    result[0] += -0.0022982466605161967;
                  } else {
                    result[0] += 0.0022078143064715025;
                  }
                } else {
                  result[0] += 0.007189424268848982;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3127769248817890424) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1015718621544924455) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.64583333333335702) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.650157000000000096) ) ) {
                    result[0] += 0.004814969018877882;
                  } else {
                    result[0] += -0.0001619961952456089;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)14105.07947886984948) ) ) {
                    result[0] += -0.013685523688955566;
                  } else {
                    result[0] += 0.0034813970270718693;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58876050420168369) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.68465909090909705) ) ) {
                    result[0] += 0.0017733599842307784;
                  } else {
                    result[0] += -0.006746168489049658;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1614813989374807301) ) ) {
                    result[0] += 0.009144133970810167;
                  } else {
                    result[0] += 0.00163883037784777;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4510084821850932069) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3649912904309082773) ) ) {
                  result[0] += -0.0035570858858482283;
                } else {
                  result[0] += -0.012882725677341302;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.11050566695728747) ) ) {
                  result[0] += 0.005016195032457163;
                } else {
                  result[0] += -0.00424986080423158;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2118.155753535761505) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2288.189955229814586) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2835000000000000298) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)682.5859171509390535) ) ) {
                  result[0] += -0.00939319789088202;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2553.815469141473386) ) ) {
                    result[0] += 0.0038207609739602183;
                  } else {
                    result[0] += -0.000346088816633025;
                  }
                }
              } else {
                result[0] += 0.008513494030833874;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66515151515151771) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2159.388666833940533) ) ) {
                  result[0] += 0.0016730443924012977;
                } else {
                  result[0] += 0.006074987032921202;
                }
              } else {
                result[0] += 0.009415261953844954;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9645500000000001295) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.023612328920421536) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  result[0] += 0.010341083800666659;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9464500000000001245) ) ) {
                    result[0] += 0.006009475844930354;
                  } else {
                    result[0] += -0.00019812183126767156;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02708747139162712148) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2274.959778437426849) ) ) {
                    result[0] += 0.0003991439383327654;
                  } else {
                    result[0] += -0.011539484089395126;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6239115000000000633) ) ) {
                    result[0] += -0.004840323526310779;
                  } else {
                    result[0] += 0.0006551981296803658;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.43921568627451535) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2301.556344757376337) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.621024439236693482) ) ) {
                    result[0] += -0.004337097902003806;
                  } else {
                    result[0] += 0.0038402290857175187;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.63927801724138078) ) ) {
                    result[0] += 0.004592455863594434;
                  } else {
                    result[0] += -0.007108829724268467;
                  }
                }
              } else {
                result[0] += 0.006937992021216045;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-55797.14682103950327) ) ) {
        result[0] += 0.00116982273995079;
      } else {
        result[0] += -0.009500235572616669;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)196.1990881458966953) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)31879.36035643579817) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4723500000000000476) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5969286998555723978) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.25277777777778709) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5710214034532944405) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.345490716180373525) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
                    result[0] += 0.00242676116131279;
                  } else {
                    result[0] += -0.007807781207402347;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.641839080459782) ) ) {
                    result[0] += 0.00888332830566152;
                  } else {
                    result[0] += -0.001537769807393687;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33392018779342791) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03335000000000001158) ) ) {
                    result[0] += -0.0029541029861280144;
                  } else {
                    result[0] += 0.011317005514675797;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06375000000000001499) ) ) {
                    result[0] += -0.0033105393248743327;
                  } else {
                    result[0] += -0.011524832767509853;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5883065090442958223) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15049.58925072465172) ) ) {
                  result[0] += -0.0046111782967464;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.34850948509485491) ) ) {
                    result[0] += 0.003303584669494032;
                  } else {
                    result[0] += 0.01987832984984991;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3489680000000000559) ) ) {
                  result[0] += 0.013902920940058594;
                } else {
                  result[0] += 0.0221415969414304;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.43921568627451535) ) ) {
              result[0] += -0.0100930021343568;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5806684019708098221) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3012500000000000733) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.68322981366461022) ) ) {
                    result[0] += 0.003200894813518528;
                  } else {
                    result[0] += -0.0028223382159256486;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22333.51733967311884) ) ) {
                    result[0] += 0.0015022170286491602;
                  } else {
                    result[0] += -0.008664104341357864;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6936.642549725948811) ) ) {
                  result[0] += 0.004568085498967825;
                } else {
                  result[0] += 0.011543648338035397;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3697500000000000231) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3297000000000000486) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8865.340930235526685) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09410000000000001696) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9917694079393036821) ) ) {
                    result[0] += 0.0016229305397796453;
                  } else {
                    result[0] += -0.0009876603022231567;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3152.729601350707071) ) ) {
                    result[0] += -0.000982412219885779;
                  } else {
                    result[0] += 0.0049578491629499455;
                  }
                }
              } else {
                result[0] += 0.012248741182673776;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5641.056814807182491) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.74434389140271584) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3728855000000000364) ) ) {
                    result[0] += 0.020879634657686084;
                  } else {
                    result[0] += -0.0018997313095815587;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7419.454310499565509) ) ) {
                    result[0] += -0.0009849736062613659;
                  } else {
                    result[0] += -0.014095373347723482;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4507.436608844527655) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.48254401942926783) ) ) {
                    result[0] += 0.008561282708219755;
                  } else {
                    result[0] += 0.03348815342574201;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2899000000000000465) ) ) {
                    result[0] += 0.0039543404314346265;
                  } else {
                    result[0] += -0.00852701507858438;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7238223757163882999) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5340500000000001357) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2686500000000000554) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2490000000000000269) ) ) {
                    result[0] += -0.000774615310402627;
                  } else {
                    result[0] += -0.011979630876813627;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4598785000000000234) ) ) {
                    result[0] += 0.005954384858224015;
                  } else {
                    result[0] += -0.0027845360689710275;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4147500000000000075) ) ) {
                  result[0] += -0.0017805741989571813;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6339019286269085285) ) ) {
                    result[0] += -0.004014045497593414;
                  } else {
                    result[0] += -0.017069006617500125;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3757500000000000284) ) ) {
                result[0] += -0.014320821338589775;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2347000000000000475) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4151215000000000876) ) ) {
                    result[0] += -0.011800717426596845;
                  } else {
                    result[0] += -0.0039006465317542416;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6920.679669433080562) ) ) {
                    result[0] += -0.004773919370814748;
                  } else {
                    result[0] += 0.002943188097781506;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4995331520331520725) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4888543444488743783) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.52255000000000007) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03585000000000000686) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.24613422604814517) ) ) {
                  result[0] += 0.007452234502483611;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                    result[0] += -0.0007379638527024856;
                  } else {
                    result[0] += -0.007406215718596547;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8098.539324017688159) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6621500000000001274) ) ) {
                    result[0] += -0.0056570429745815;
                  } else {
                    result[0] += 0.007012805079514099;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.77783929136349528) ) ) {
                    result[0] += 0.0075074765931898955;
                  } else {
                    result[0] += 0.02291267294169979;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4498083214434980825) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04115000000000001296) ) ) {
                    result[0] += -0.0011055789435744318;
                  } else {
                    result[0] += 0.004477586459443778;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6089500000000001023) ) ) {
                    result[0] += -0.0033085910338421327;
                  } else {
                    result[0] += -9.065507254558985e-06;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1491.197321246881302) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3048330000000000761) ) ) {
                    result[0] += -0.005906968115542359;
                  } else {
                    result[0] += 0.004527174819094971;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4530575595150208579) ) ) {
                    result[0] += -0.012866004224850871;
                  } else {
                    result[0] += -0.00234098132722647;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06375000000000001499) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.13831967213114815) ) ) {
                result[0] += 0.00017810056881192404;
              } else {
                result[0] += -0.00881948735259613;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2526500000000000412) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.61404815090593701) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1874500000000000333) ) ) {
                    result[0] += 0.008614532523463614;
                  } else {
                    result[0] += 0.023372143596466687;
                  }
                } else {
                  result[0] += 0.0004279675136947595;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6089500000000001023) ) ) {
                  result[0] += 0.0024337389779653905;
                } else {
                  result[0] += -0.008633907518022343;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5114794848757114876) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5061000000000001053) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.86337543053961596) ) ) {
                result[0] += 0.012446234437619108;
              } else {
                result[0] += -0.0028935370119071544;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5181500000000001105) ) ) {
                result[0] += -0.019553371880338764;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.91806020066889715) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4729000000000000425) ) ) {
                    result[0] += -0.007668941217057912;
                  } else {
                    result[0] += 0.005471288327856538;
                  }
                } else {
                  result[0] += 0.004234167396008869;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5127500000000001501) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4862500000000000155) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5089500000000001245) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)729.7790779374109889) ) ) {
                    result[0] += -0.007539008545239283;
                  } else {
                    result[0] += -0.001023847452997658;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4030330000000000301) ) ) {
                    result[0] += -0.0078101674181025;
                  } else {
                    result[0] += -0.01879871651065527;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5885500000000001286) ) ) {
                  result[0] += 0.015813266706360195;
                } else {
                  result[0] += -0.0058293711908010085;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)486.3463921815647382) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4979840000000000377) ) ) {
                  result[0] += 0.020606068067611647;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.075647075647077067) ) ) {
                    result[0] += 0.0020285449440656054;
                  } else {
                    result[0] += 0.004029074263050107;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6562884567030830008) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5154874332154414374) ) ) {
                    result[0] += 0.006395603954351854;
                  } else {
                    result[0] += -0.001196280855618877;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.95938981653267597) ) ) {
                    result[0] += 0.0023407403831165394;
                  } else {
                    result[0] += 0.014707104806069097;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4463295000000000456) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6827000000000001956) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2065670000000000284) ) ) {
            result[0] += 0.003602320805088834;
          } else {
            result[0] += 0.016057552226604967;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1427700348432055788) ) ) {
            result[0] += 0.01356544038140559;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-37702.69135549560451) ) ) {
              result[0] += -0.0024086246868539507;
            } else {
              result[0] += -0.006557844980436441;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-31307.28118192806505) ) ) {
          result[0] += 0.0025687033827078323;
        } else {
          result[0] += -0.006613266599987339;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)207.7083333333333428) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
        result[0] += 0.0009182633064476391;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2551729739349475334) ) ) {
          result[0] += -0.009877888606389966;
        } else {
          result[0] += -0.003789066561304266;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)217.929861111111137) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3544845000000000357) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-25974.62741760602876) ) ) {
            result[0] += -0.004787656431962464;
          } else {
            result[0] += 0.00012697961145716652;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5464955000000001339) ) ) {
            result[0] += 0.012673902920218154;
          } else {
            result[0] += 0.002743524698643308;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04495000000000001078) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03935000000000000303) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)306.1666666666666856) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-39813.79238308515778) ) ) {
                result[0] += -0.006845145266095557;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11538.33154189746892) ) ) {
                  result[0] += 0.00046271235203157343;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6186.11782883037813) ) ) {
                    result[0] += -0.004426960063767263;
                  } else {
                    result[0] += 0.0005361080456220792;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.812500000000000111) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.24542300000000003) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13449.94112542363109) ) ) {
                    result[0] += -0.00024646609780609106;
                  } else {
                    result[0] += 0.002868142789172272;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3048330000000000761) ) ) {
                    result[0] += -0.00793861521197733;
                  } else {
                    result[0] += -0.003290431636372253;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2191665000000000141) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                    result[0] += 0.002802407170824288;
                  } else {
                    result[0] += -0.009752247313275906;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3256400000000000405) ) ) {
                    result[0] += 0.013331869692921;
                  } else {
                    result[0] += 0.0012705099956065822;
                  }
                }
              }
            }
          } else {
            result[0] += 0.006236977822031727;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1840640000000000331) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4214500000000000468) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9352500000000000258) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09005480525100587053) ) ) {
                    result[0] += -0.0016216170453544614;
                  } else {
                    result[0] += 0.00010712874052489356;
                  }
                } else {
                  result[0] += 0.0032587170488089833;
                }
              } else {
                result[0] += 0.004137611367366062;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346500000000000197) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2777390000000000692) ) ) {
                  result[0] += -0.002773024478600899;
                } else {
                  result[0] += -0.007657463130539267;
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8541666666666668517) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2021500000000000241) ) ) {
                    result[0] += 4.611192487549492e-05;
                  } else {
                    result[0] += -0.0057988612691831105;
                  }
                } else {
                  result[0] += 0.0028890898996742852;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
              result[0] += 0.005668018903572695;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                result[0] += -0.00989997431450857;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04126507918390250051) ) ) {
                  result[0] += 0.0022745048369215864;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9175500000000001988) ) ) {
                    result[0] += -0.0026504664318948165;
                  } else {
                    result[0] += -0.009499183525465376;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.037345839847144013) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.66280257606040438) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.124288472983382414) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7961059747699177347) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7430457737088246306) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.4281725597490329) ) ) {
                result[0] += 0.006593408719450859;
              } else {
                result[0] += -0.001005614029220584;
              }
            } else {
              result[0] += -0.005293278238006278;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += -0.0010722492734158838;
            } else {
              result[0] += -0.01098297163435163;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.380182360511232664) ) ) {
            result[0] += 0.005836732720899447;
          } else {
            result[0] += 0.0013527409149904216;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)609.6317085093859305) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3526540000000000785) ) ) {
            result[0] += 0.002531345985030888;
          } else {
            result[0] += 0.0120233846452972;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03230300464577552655) ) ) {
            result[0] += 0.004417898361249646;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7086000000000000076) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.217148977082086192) ) ) {
                result[0] += 0.003632524381710061;
              } else {
                result[0] += -0.0013647829591244642;
              }
            } else {
              result[0] += -0.0062631867089651405;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7344.62256810161216) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6279.125985810902421) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5063.376429866547369) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.76676186590507811) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6111500000000000821) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4812889397749424147) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1234.374879497081338) ) ) {
                    result[0] += -0.015358324063353003;
                  } else {
                    result[0] += -0.001120259857581863;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)131.9669371389429671) ) ) {
                    result[0] += -0.004009317278809328;
                  } else {
                    result[0] += 0.005568157982733743;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1903887996092470669) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2624768466104180908) ) ) {
                    result[0] += 0.0004828563129432886;
                  } else {
                    result[0] += -0.00756076666262201;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.69570538495772283) ) ) {
                    result[0] += 0.01416177131340258;
                  } else {
                    result[0] += 0.0016928880563742495;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5673840000000001105) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9150000000000001465) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.812500000000000111) ) ) {
                    result[0] += -7.042441995978882e-05;
                  } else {
                    result[0] += -0.004006649597565073;
                  }
                } else {
                  result[0] += 0.005182457863332713;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03230300464577552655) ) ) {
                  result[0] += -0.013404754049315211;
                } else {
                  result[0] += -0.002312460713107004;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
              result[0] += -0.0038289034290770836;
            } else {
              result[0] += 0.008497363920276965;
            }
          }
        } else {
          result[0] += -0.014233836820293486;
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3242675000000000418) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.495352833984574914) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3727020653814278606) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1822794002739398789) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04480044763955285531) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6458333333333333703) ) ) {
                    result[0] += -0.0014894237879236633;
                  } else {
                    result[0] += 0.005905056595544737;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08390237751272640321) ) ) {
                    result[0] += -0.003406457435851855;
                  } else {
                    result[0] += 0.000527392280337139;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1953360000000000374) ) ) {
                  result[0] += -0.006103959900956686;
                } else {
                  result[0] += -0.002569484956997405;
                }
              }
            } else {
              result[0] += 0.005807988103792585;
            }
          } else {
            result[0] += -0.0042485881924216465;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05701861194901656354) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02849025974025974281) ) ) {
              result[0] += 0.004486908465549498;
            } else {
              result[0] += -0.007539809927439295;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276582891195849945) ) ) {
              result[0] += 0.013818587530919807;
            } else {
              result[0] += 0.001933589139617492;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5931885000000001185) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.725601914823043037) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.297352577637783666) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)110.2386992295352286) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04995000000000000828) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)44.76293043070497646) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7430457737088246306) ) ) {
                    result[0] += 0.00783868479549436;
                  } else {
                    result[0] += -0.0022023488658174982;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7290141514373503773) ) ) {
                    result[0] += -0.014757465428822536;
                  } else {
                    result[0] += -0.0020299557099271288;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                  result[0] += -0.0001810141113697194;
                } else {
                  result[0] += -0.01133049463666856;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4344000000000000639) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8692129219887744229) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9961447036101620522) ) ) {
                    result[0] += 0.0007449101611924875;
                  } else {
                    result[0] += -0.00996644629017015;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3928000000000000935) ) ) {
                    result[0] += 0.0006821897979150699;
                  } else {
                    result[0] += 0.015257349229488992;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8117010151197184831) ) ) {
                  result[0] += -0.011138674488984795;
                } else {
                  result[0] += -0.003023878832716987;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9172022279348758245) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.7294500000000000428) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3476566175261612823) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2646500000000000519) ) ) {
                    result[0] += -0.008860134725950744;
                  } else {
                    result[0] += -0.00011957741000002214;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.552093295775335946) ) ) {
                    result[0] += 0.001827221518669884;
                  } else {
                    result[0] += -0.00017036643665202763;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6022642703829196309) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.7911000000000001364) ) ) {
                    result[0] += -0.004053162415815805;
                  } else {
                    result[0] += 0.003557378604165797;
                  }
                } else {
                  result[0] += -0.008832736999867464;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)134.6304347826087167) ) ) {
                result[0] += 0.010739324099982643;
              } else {
                result[0] += -0.004174217277807343;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
            result[0] += 0.01246770215334637;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)302.7868852467867669) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.26352339181286677) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4048600000000000532) ) ) {
                  result[0] += 0.015527841380998478;
                } else {
                  result[0] += -0.0022405141548054396;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03935000000000000303) ) ) {
                  result[0] += 0.004549131081104258;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                    result[0] += -0.0006064612005094029;
                  } else {
                    result[0] += -0.005800052013705357;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)753.7197460358141825) ) ) {
                result[0] += 0.01951140420054959;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2540640000000000676) ) ) {
                  result[0] += 0.0009652629707764442;
                } else {
                  result[0] += -0.004812360610460335;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
          result[0] += 0.0032290672414826064;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9753708898829833718) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9172022279348758245) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.868199541507911343) ) ) {
                result[0] += -0.004163304891463231;
              } else {
                result[0] += 0.002534469781291566;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3449290000000000411) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.002590673575131319) ) ) {
                  result[0] += 0.0012921552872197802;
                } else {
                  result[0] += -0.0044487627208892955;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3977500000000001035) ) ) {
                  result[0] += -0.012997555569020908;
                } else {
                  result[0] += -0.006869743995418591;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9884056996908187065) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3858855000000000479) ) ) {
                result[0] += -2.6110032474628515e-05;
              } else {
                result[0] += 0.005084205422248535;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.004475300714343433) ) ) {
                result[0] += -0.005558739072131457;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1397500000000000409) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4269960000000000977) ) ) {
                    result[0] += 0.006071654248110983;
                  } else {
                    result[0] += -0.001625700007033901;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.66280257606040438) ) ) {
                    result[0] += -0.0009214943864793531;
                  } else {
                    result[0] += -0.00786633308459254;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6049365000000000991) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.64946018893387958) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58876050420168369) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08183313046454290807) ) ) {
              result[0] += -0.006303588609866748;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.813466494845362931) ) ) {
                  result[0] += 0.004891928206527278;
                } else {
                  result[0] += 0.012117119679040191;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3096000000000000418) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500000000000426) ) ) {
                    result[0] += 0.0005267828378014311;
                  } else {
                    result[0] += -0.00608721059641679;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3333500000000000907) ) ) {
                    result[0] += 0.0029317482260735384;
                  } else {
                    result[0] += 0.0075772992528373925;
                  }
                }
              }
            }
          } else {
            result[0] += 0.011017678899340386;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.83278388278389315) ) ) {
            result[0] += -0.007783707177181318;
          } else {
            result[0] += 0.00582560000260043;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)27856.34674737125533) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33392018779342791) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1112.565730584552057) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6156880000000001241) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8493205205092535515) ) ) {
                  result[0] += 0.010329165667674304;
                } else {
                  result[0] += 0.0014721492972636023;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.795073692711489421) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4275000000000000466) ) ) {
                    result[0] += 0.000434971469670565;
                  } else {
                    result[0] += -0.004227753629870689;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.725601914823043037) ) ) {
                    result[0] += 0.0024140613484437304;
                  } else {
                    result[0] += -0.005588799300224173;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6252724869141016439) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.178976624942160184) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6960285000000000499) ) ) {
                    result[0] += -0.0018018519427513997;
                  } else {
                    result[0] += 0.0002652076505384547;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.33589743589743826) ) ) {
                    result[0] += 0.0004479012985797462;
                  } else {
                    result[0] += 0.004080470159436334;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6667238441570323415) ) ) {
                  result[0] += -0.009426045052588311;
                } else {
                  result[0] += -0.00299336333813995;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
              result[0] += -0.005850226180673167;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08390237751272640321) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07838686466789439311) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03798846128036145048) ) ) {
                    result[0] += 0.0017301333533107643;
                  } else {
                    result[0] += -0.00472940633572467;
                  }
                } else {
                  result[0] += -0.010146227345569865;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2192871037289895186) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1872.534671783868816) ) ) {
                    result[0] += 0.008596560480274941;
                  } else {
                    result[0] += 0.0017794685371956829;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2412699476203346849) ) ) {
                    result[0] += -0.007957977540004421;
                  } else {
                    result[0] += 0.0005572124645825114;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7750500000000001277) ) ) {
            result[0] += -0.009156451952164394;
          } else {
            result[0] += 0.0003871126852014459;
          }
        }
      }
    }
  }
}

