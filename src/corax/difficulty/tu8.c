
#include "prediction.h"

void predict_unit8(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9917694079393036821) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3897500000000000409) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6339019286269085285) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3649912904309082773) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.345490716180373525) ) ) {
            result[0] += 0.004080611862540947;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3097675543089600247) ) ) {
              result[0] += -0.0013627256899451617;
            } else {
              result[0] += -0.010806935326840076;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4432530062202834631) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3238000000000000322) ) ) {
              result[0] += 0.0161034015687361;
            } else {
              result[0] += 0.004869019396309452;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3455500000000000793) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5306308187652577502) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2564000000000000168) ) ) {
                  result[0] += -0.009543911875070333;
                } else {
                  result[0] += 7.440360111623682e-05;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7554835062195935924) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.64583333333335702) ) ) {
                    result[0] += 0.0045798239185588395;
                  } else {
                    result[0] += -0.0014934964901948307;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8117010151197184831) ) ) {
                    result[0] += -0.00568531899934427;
                  } else {
                    result[0] += 0.00038807080589627426;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1291.760246402436906) ) ) {
                result[0] += 0.01753831787559816;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0182500000000000058) ) ) {
                  result[0] += -0.002127070997817257;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4650500000000000189) ) ) {
                    result[0] += 0.002458814499598039;
                  } else {
                    result[0] += -0.002059554838550251;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2412699476203346849) ) ) {
          result[0] += 0.005461658486751538;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5463500000000001133) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4797000000000000708) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4344000000000000639) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2467500000000000526) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4156551824015537466) ) ) {
                    result[0] += 0.0035226917015889645;
                  } else {
                    result[0] += 0.00020222530038964843;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7317246774486193539) ) ) {
                    result[0] += 0.0007417243480014979;
                  } else {
                    result[0] += -0.0015642907128869945;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.185213414634148421) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7783143177881820529) ) ) {
                    result[0] += 0.002261928489021045;
                  } else {
                    result[0] += -0.005647957857346704;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.02889784946237128) ) ) {
                    result[0] += 0.019163483922223005;
                  } else {
                    result[0] += -0.0003989991236250404;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.690700657578043109) ) ) {
                result[0] += 0.0032309462625508827;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1762000000000000233) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.27475490196078578) ) ) {
                    result[0] += 0.0014677054194321287;
                  } else {
                    result[0] += -0.0024560494028556543;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3050000000000001044) ) ) {
                    result[0] += -0.011620234734758643;
                  } else {
                    result[0] += -0.0034713243361755527;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1173.118468614793301) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.785363700564971845) ) ) {
                result[0] += 0.008828824276432707;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5735500000000001153) ) ) {
                  result[0] += 0.005101406365920622;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1381500000000000228) ) ) {
                    result[0] += -0.0027347292108792906;
                  } else {
                    result[0] += 0.0026008969834954913;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1692.764967136799214) ) ) {
                result[0] += -0.006385028165221316;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7114701316667421116) ) ) {
                  result[0] += -0.0020758137144011013;
                } else {
                  result[0] += 0.002967430163154152;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7430457737088246306) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)251.1722712442703482) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4315500000000000447) ) ) {
            result[0] += 0.0021491862972362274;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.075647075647077067) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.259810052584194151) ) ) {
                result[0] += -0.002076152521937371;
              } else {
                result[0] += -0.00848501036086524;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.819347319347319747) ) ) {
                result[0] += 0.0028799725137047013;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.03088619624613997) ) ) {
                  result[0] += -0.005833119363798496;
                } else {
                  result[0] += -0.0007409543572930314;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)302.7868852467867669) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3391483238137242839) ) ) {
              result[0] += -0.000135345412529422;
            } else {
              result[0] += 0.010547631938712387;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4348000000000000198) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1888209463138135757) ) ) {
                result[0] += -0.01079027586849715;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84952830188679407) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)589.1944314064304535) ) ) {
                    result[0] += -0.004969148125785642;
                  } else {
                    result[0] += 0.0015575286271502858;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.32230727173319096) ) ) {
                    result[0] += -0.015061808742595448;
                  } else {
                    result[0] += -0.0009735602687132372;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4474500000000000699) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5552500000000001323) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5297127797323987197) ) ) {
                    result[0] += 0.013445281115069778;
                  } else {
                    result[0] += 0.002521487205647689;
                  }
                } else {
                  result[0] += -0.005461043267887041;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6170632668264560694) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)516.3318945478059732) ) ) {
                    result[0] += 0.00205890798212286;
                  } else {
                    result[0] += -7.599048575037865e-05;
                  }
                } else {
                  result[0] += 0.005913509357794203;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4348000000000000198) ) ) {
          result[0] += -0.0015037785712066687;
        } else {
          result[0] += -0.00794693174312567;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2.079441541679836192) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006350000000000000609) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7783143177881820529) ) ) {
              result[0] += 6.764417325749433e-05;
            } else {
              result[0] += -0.0031776356287901383;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.725601914823043037) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03115000000000000407) ) ) {
                result[0] += 0.01163658431845973;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05705000000000001042) ) ) {
                  result[0] += 0.0008933265417918442;
                } else {
                  result[0] += 0.00412275578564018;
                }
              }
            } else {
              result[0] += 0.0007408541234871587;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346500000000000197) ) ) {
            result[0] += -0.006601130134773534;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.793653083354456057) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.690700657578043109) ) ) {
                result[0] += 0.0011870975714133626;
              } else {
                result[0] += -0.008005567007135965;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8494243075500166329) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
                  result[0] += 0.007615721932645586;
                } else {
                  result[0] += 0.0018159880417644154;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.581742450538008438) ) ) {
                  result[0] += 0.003994004458659935;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.608333333333333837) ) ) {
                    result[0] += -0.006677974916957899;
                  } else {
                    result[0] += -0.0005510281647662494;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05424999999999999961) ) ) {
          result[0] += -0.005912638601748445;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07805000000000002214) ) ) {
            result[0] += 0.0028696110506289136;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.486201871006190167) ) ) {
              result[0] += 0.001819918408425984;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1416500000000000259) ) ) {
                result[0] += -0.0006489845512872973;
              } else {
                result[0] += -0.006839586701017168;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8692129219887744229) ) ) {
        result[0] += -0.007324841284141912;
      } else {
        result[0] += -0.00089441808142713;
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3714418462289422185) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3630166700826673032) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6738500000000001711) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6695500000000000895) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3566416580975863004) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1306205000000000283) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.812500000000000111) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.00735294117647456) ) ) {
                  result[0] += -0.002779053118298975;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.68322981366461022) ) ) {
                    result[0] += 0.003162412448346184;
                  } else {
                    result[0] += -0.0007877283800287097;
                  }
                }
              } else {
                result[0] += -0.004876511250644046;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.245622435020520502) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.876096491228070429) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7639375000000000471) ) ) {
                    result[0] += 0.00572740486624485;
                  } else {
                    result[0] += -0.0011844817953818561;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6445500000000000673) ) ) {
                    result[0] += -0.0064787149156614295;
                  } else {
                    result[0] += 0.0005978976106755108;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.86337543053961596) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6241500000000000936) ) ) {
                    result[0] += -0.0001412568116716826;
                  } else {
                    result[0] += 0.00699265389679;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6445500000000000673) ) ) {
                    result[0] += 0.002682772036019673;
                  } else {
                    result[0] += -0.0008968917496659974;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7449.396245625598567) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
                result[0] += 0.001879060701924389;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4786.052326248042846) ) ) {
                  result[0] += -0.01225540457465503;
                } else {
                  result[0] += -0.0030462029249002155;
                }
              }
            } else {
              result[0] += 0.00430497077196123;
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
            result[0] += -0.0028550559815453797;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3466475000000000528) ) ) {
              result[0] += 0.016549925239932907;
            } else {
              result[0] += 0.0028204594121422166;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6827000000000001956) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3136152341452576597) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1827.40614998019123) ) ) {
              result[0] += 0.00998686815146523;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2770.103028186206302) ) ) {
                result[0] += -0.00783765474774033;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.429971988795520232) ) ) {
                  result[0] += 0.007406270485522409;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17224.94728213532289) ) ) {
                    result[0] += -0.004766838346820863;
                  } else {
                    result[0] += 0.00228062272914462;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1248500000000000165) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.731662826420891754) ) ) {
                result[0] += -0.00103580890503957;
              } else {
                result[0] += -0.018585762952271694;
              }
            } else {
              result[0] += 0.0008159484139007678;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6872500000000001386) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4871705000000000618) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2977460000000000107) ) ) {
                result[0] += -0.000382575316959317;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.77500000000000568) ) ) {
                  result[0] += 0.014653696413112134;
                } else {
                  result[0] += 0.007245111171441643;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3062135551683158874) ) ) {
                result[0] += 0.0040737042132384564;
              } else {
                result[0] += -0.0066033345393655294;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596815205881915278) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6917500000000001981) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1430500000000000382) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4337.012047408426952) ) ) {
                    result[0] += 0.003169467245139399;
                  } else {
                    result[0] += -0.005432738276495513;
                  }
                } else {
                  result[0] += -0.012000084003571125;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7114500000000001378) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10017.88409225704527) ) ) {
                    result[0] += 0.002217877094877772;
                  } else {
                    result[0] += -0.002511637178123823;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2508523744426000568) ) ) {
                    result[0] += 6.203372429515302e-05;
                  } else {
                    result[0] += -0.0009571127538186775;
                  }
                }
              }
            } else {
              result[0] += -0.0063061429102415035;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.7639318885448958) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2247.061137120380863) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.594010800196367761) ) ) {
              result[0] += 0.0012457657785264413;
            } else {
              result[0] += -0.01134357417653968;
            }
          } else {
            result[0] += 0.008224871020636577;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5807.741032024249762) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4062495000000000966) ) ) {
              result[0] += 0.016736406611329278;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3653893359693760057) ) ) {
                result[0] += 0.002045186545971816;
              } else {
                result[0] += 0.010381167488968416;
              }
            }
          } else {
            result[0] += -0.0016478395129007133;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11140.90608249307297) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2449000000000000343) ) ) {
            result[0] += -0.002523526494167852;
          } else {
            result[0] += -0.010808863588999785;
          }
        } else {
          result[0] += 0.0063986713815032325;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840540656815825127) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4643995000000000206) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7172500000000000542) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03515000000000000763) ) ) {
                result[0] += 0.0024470064424441298;
              } else {
                result[0] += -0.007044237318695666;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2068500000000000061) ) ) {
                result[0] += 0.01797884717280911;
              } else {
                result[0] += -0.002199957896536246;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.270242914979758275) ) ) {
              result[0] += 0.0019971600221560227;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3895535000000000525) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08825000000000000899) ) ) {
                  result[0] += -0.0016261827506670805;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6637500000000001732) ) ) {
                    result[0] += -0.010487061093955204;
                  } else {
                    result[0] += -0.0036061896713708735;
                  }
                }
              } else {
                result[0] += -0.01630506733817691;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.239250000000000046) ) ) {
            result[0] += -0.0010392821632437548;
          } else {
            result[0] += 0.014125794660078;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05205000000000000598) ) ) {
            result[0] += -0.006466933248345524;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1821500000000000341) ) ) {
              result[0] += 0.0017862509026935604;
            } else {
              result[0] += -0.0020547653043940716;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3369500000000000273) ) ) {
            result[0] += -0.016970544279372633;
          } else {
            result[0] += -0.003488759669990876;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3901314090609130369) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02075000000000000108) ) ) {
          result[0] += -0.00685409906275581;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.30178571428571566) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.966013824884793593) ) ) {
              result[0] += 0.0009212919812790831;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1893500000000000461) ) ) {
                result[0] += 0.021121849316032764;
              } else {
                result[0] += 0.0013085767436991627;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2866500000000000714) ) ) {
              result[0] += -0.004418632638171422;
            } else {
              result[0] += 0.005031624122971897;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1180500000000000299) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.665550000000000086) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4800500000000000322) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4395461641391615326) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3824500000000000677) ) ) {
                  result[0] += 0.0009927353487833392;
                } else {
                  result[0] += 0.01624359870510533;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4717290968772051563) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1895.084169001929013) ) ) {
                    result[0] += -0.007130590997431529;
                  } else {
                    result[0] += -0.0001164922155579069;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4723500000000000476) ) ) {
                    result[0] += -0.00010846519878881912;
                  } else {
                    result[0] += 0.0027251072423965473;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.95938981653267597) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2842505000000000726) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5346500000000000696) ) ) {
                    result[0] += -0.008848403180179482;
                  } else {
                    result[0] += -0.001898207239896336;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5826500000000001123) ) ) {
                    result[0] += 0.00025151013669610223;
                  } else {
                    result[0] += 0.002785162504307548;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.010850000000000002) ) ) {
                    result[0] += 0.004330322478308025;
                  } else {
                    result[0] += -0.008807334390624763;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5544758402383391793) ) ) {
                    result[0] += -0.0008290393443190945;
                  } else {
                    result[0] += -0.008177436083783254;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1198.092384839380657) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09585000000000000464) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7193500000000000449) ) ) {
                  result[0] += -0.0037005514774080778;
                } else {
                  result[0] += 0.0006032824789236437;
                }
              } else {
                result[0] += 0.004792294692340386;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.041987179487180448) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.621024439236693482) ) ) {
                  result[0] += -0.0035098186208682297;
                } else {
                  result[0] += -0.01668818938586924;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
                  result[0] += -0.0019594753193843397;
                } else {
                  result[0] += -0.004688672287324275;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1237500000000000128) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5631430299667542494) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6317500000000001448) ) ) {
                  result[0] += 0.007289215407748997;
                } else {
                  result[0] += -0.001755240631923203;
                }
              } else {
                result[0] += 0.01597845628652829;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)331.7040358106666531) ) ) {
                result[0] += 0.00650127802816076;
              } else {
                result[0] += -0.006202947454189296;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6763500000000001178) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5988500000000001044) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4395461641391615326) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.57027972027972496) ) ) {
                    result[0] += 0.0070511365067523896;
                  } else {
                    result[0] += -0.002400691145651736;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5545000000000001039) ) ) {
                    result[0] += 0.0003395128111419528;
                  } else {
                    result[0] += -0.0011332697192705302;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5423.979011800238368) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3998595000000000899) ) ) {
                    result[0] += -0.004911921762698877;
                  } else {
                    result[0] += -0.000534650278557602;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3986689308614450034) ) ) {
                    result[0] += -0.008130529723642003;
                  } else {
                    result[0] += 0.001128071822104434;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3466475000000000528) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.67543859649123306) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6981500000000001593) ) ) {
                    result[0] += 0.00670042849867481;
                  } else {
                    result[0] += 0.015482680349745748;
                  }
                } else {
                  result[0] += -0.001860834165020145;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3668185000000000473) ) ) {
                  result[0] += -0.008080312447546095;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3771560000000000468) ) ) {
                    result[0] += 0.01137434485205043;
                  } else {
                    result[0] += 0.001257625396576126;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002350000000000000092) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.608333333333333837) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.49501992031872577) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001950000000000000127) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4660265000000000657) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4079010000000000136) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3269880000000000564) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3125000000000000555) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
                    result[0] += -0.0027210843258595784;
                  } else {
                    result[0] += 0.00077627176501429;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1656345976266143383) ) ) {
                    result[0] += 0.0021663509911703667;
                  } else {
                    result[0] += 0.008836929585409613;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2745899061051987888) ) ) {
                  result[0] += 0.0017213381877757314;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6017000000000000126) ) ) {
                    result[0] += -0.0012960513885656327;
                  } else {
                    result[0] += -0.008317254017538439;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4463295000000000456) ) ) {
                result[0] += 0.008108637076328288;
              } else {
                result[0] += 0.0031563514423648513;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4801450000000000995) ) ) {
              result[0] += -0.004936292416211546;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.476627348186981603) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.876096491228070429) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.50621947496947528) ) ) {
                    result[0] += 0.0003663435397877093;
                  } else {
                    result[0] += -0.0026998659030540136;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6418835000000001623) ) ) {
                    result[0] += 0.0055361856625295225;
                  } else {
                    result[0] += -0.0009588563783092429;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.678173972291619798) ) ) {
                  result[0] += -0.009180606684627939;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5309975000000001222) ) ) {
                    result[0] += 0.002633994807897728;
                  } else {
                    result[0] += -0.002646383339397787;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.86337543053961596) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06981312588668585339) ) ) {
              result[0] += -0.003002960705719251;
            } else {
              result[0] += -0.00569778604488311;
            }
          } else {
            result[0] += 0.001393813259106059;
          }
        }
      } else {
        result[0] += 0.007309801898375908;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.010272708988098494;
        } else {
          result[0] += -0.005245917303819238;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2745899061051987888) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.15909090909091361) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1386088498927906809) ) ) {
              result[0] += 0.0010505354552856516;
            } else {
              result[0] += 0.006690099329858056;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.00847457627119041) ) ) {
              result[0] += -0.005511286501038989;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2219470000000000331) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2135850000000000526) ) ) {
                    result[0] += -0.00034267420012697354;
                  } else {
                    result[0] += 0.0013946767231992083;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
                    result[0] += -0.0009148101067052606;
                  } else {
                    result[0] += -0.006318153074333422;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8789000000000001256) ) ) {
                    result[0] += 0.0023316331441119165;
                  } else {
                    result[0] += -0.00872436784203736;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2977460000000000107) ) ) {
                    result[0] += -0.0014233202018013454;
                  } else {
                    result[0] += 0.011053843071772288;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.343528074243838577) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4871705000000000618) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66515151515151771) ) ) {
                result[0] += 0.004358398134756534;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.630604288499026389) ) ) {
                  result[0] += -0.008882231057771585;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.744974379188017899) ) ) {
                    result[0] += 0.0015917383009827052;
                  } else {
                    result[0] += -0.003947795553511103;
                  }
                }
              }
            } else {
              result[0] += -0.010233031131587144;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4011018767401447471) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.46024904214559825) ) ) {
                result[0] += 0.009820875442338934;
              } else {
                result[0] += 9.993017554064811e-05;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7045782027770501887) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4272223701248312189) ) ) {
                  result[0] += -0.004151762588036826;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.902832415420928847) ) ) {
                    result[0] += 0.004804267174558377;
                  } else {
                    result[0] += 0.00034100208479888924;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
                  result[0] += -0.005806578640553936;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8870229725046551161) ) ) {
                    result[0] += -0.0034515365473748614;
                  } else {
                    result[0] += 0.0008011316669687925;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006350000000000000609) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1656345976266143383) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.799350000000000116) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1747936067630936063) ) ) {
            result[0] += 0.010625773993025283;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.46688034188034422) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.20633533276206828) ) ) {
                result[0] += 0.001128541614802691;
              } else {
                result[0] += 0.008710961131725727;
              }
            } else {
              result[0] += -0.00040956350343628793;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.861650000000000138) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003650000000000000466) ) ) {
              result[0] += -0.01141231057023332;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1356382126079153372) ) ) {
                result[0] += 0.007132146572424853;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5270735000000000836) ) ) {
                  result[0] += -0.0038845058694729965;
                } else {
                  result[0] += -0.0016926451529620213;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8691500000000000892) ) ) {
              result[0] += 0.00695541023455512;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003150000000000000456) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02849025974025974281) ) ) {
                  result[0] += -0.0006430914593602866;
                } else {
                  result[0] += 0.0064388327342924;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004550000000000001092) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004150000000000000043) ) ) {
                    result[0] += 0.00017820942074310187;
                  } else {
                    result[0] += -0.00764089434148168;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09637116304413635703) ) ) {
                    result[0] += 0.004933849888899737;
                  } else {
                    result[0] += -0.0018873205409914839;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2432084806241540387) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004150000000000000043) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2098806409843902709) ) ) {
              result[0] += -0.0028326666371361517;
            } else {
              result[0] += -0.01354143073673816;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
              result[0] += 0.007801540076786512;
            } else {
              result[0] += -0.005600482335506186;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6221500000000000918) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4474500000000000699) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4156551824015537466) ) ) {
                result[0] += 0.010610985163780652;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5136625000000001329) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.41311475409836618) ) ) {
                    result[0] += -0.0025300610618159704;
                  } else {
                    result[0] += 0.0021529407970902127;
                  }
                } else {
                  result[0] += 0.003074733305980069;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2792184931135865966) ) ) {
                result[0] += 0.0037178503603049573;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3127769248817890424) ) ) {
                  result[0] += -0.010443104354232612;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2736000000000000099) ) ) {
                    result[0] += 0.0007698188084028428;
                  } else {
                    result[0] += -0.0049240363289835744;
                  }
                }
              }
            }
          } else {
            result[0] += 0.011309909990804768;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008450000000000000913) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2037825000000000331) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.09717550000000001187) ) ) {
            result[0] += -0.0010376989458018172;
          } else {
            result[0] += 0.002741007589925998;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2977460000000000107) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.13339920948616779) ) ) {
              result[0] += -0.004211223190630981;
            } else {
              result[0] += -0.010493259315758088;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.641839080459782) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.10319148936170564) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.753493208552674876) ) ) {
                    result[0] += -0.001272352609173187;
                  } else {
                    result[0] += -0.006983227538222601;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.8269148480958517) ) ) {
                    result[0] += 0.008931655884231369;
                  } else {
                    result[0] += -0.0005395535240295918;
                  }
                }
              } else {
                result[0] += -0.009966950445555345;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.08304056212073618) ) ) {
                result[0] += 0.0070697370679601084;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05533921706643565169) ) ) {
                  result[0] += 0.0010859467810474662;
                } else {
                  result[0] += -0.004245007068750937;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03615663516913097952) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4725700000000001011) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.080540540540540828) ) ) {
              result[0] += -0.014834376564889605;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09725000000000001699) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02880243203506518621) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02159164964612171264) ) ) {
                    result[0] += -0.0003918782909233372;
                  } else {
                    result[0] += 0.006168995857965487;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                    result[0] += -0.011261814260098486;
                  } else {
                    result[0] += 0.0012987870913192825;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84952830188679407) ) ) {
                  result[0] += -0.009399710436838292;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02880243203506518621) ) ) {
                    result[0] += -1.6167009798937435e-05;
                  } else {
                    result[0] += -0.006111460280010991;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6643750000000000488) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5270735000000000836) ) ) {
                  result[0] += 0.009030601239479198;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.801294498381877052) ) ) {
                    result[0] += 0.004238797445048306;
                  } else {
                    result[0] += -0.0008991029017917303;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1687573550250007492) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1380658852819209581) ) ) {
                    result[0] += 0.00027024248389849177;
                  } else {
                    result[0] += -0.007141773441572782;
                  }
                } else {
                  result[0] += 0.004013092685289738;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.758534714230918006) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.757297000000000109) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07838686466789439311) ) ) {
                    result[0] += 0.0007614743323876621;
                  } else {
                    result[0] += -0.006191288506035073;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9731500000000000705) ) ) {
                    result[0] += 0.0004316290196521309;
                  } else {
                    result[0] += -0.003678197688327524;
                  }
                }
              } else {
                result[0] += 0.004016967660708484;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0419270344431006553) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06175018126544525726) ) ) {
              result[0] += 0.009091293997717374;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03335000000000001158) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.64583333333335702) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6016350000000001419) ) ) {
                    result[0] += 0.0020792917023569994;
                  } else {
                    result[0] += -0.002069903124286905;
                  }
                } else {
                  result[0] += -0.00992251852380998;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03953087405495988443) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1712352392541958979) ) ) {
                    result[0] += -0.0016197480486422864;
                  } else {
                    result[0] += 0.004201497507253884;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4301635000000000875) ) ) {
                    result[0] += -0.0008350918043929129;
                  } else {
                    result[0] += 0.007917815390002303;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8642000000000001902) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8468500000000002137) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8442000000000001725) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
                    result[0] += 0.0017958423404150921;
                  } else {
                    result[0] += 4.303330696225127e-05;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06205000000000000793) ) ) {
                    result[0] += -0.010936784238689788;
                  } else {
                    result[0] += -0.0003181806149138732;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8488500000000001044) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5056465000000001098) ) ) {
                    result[0] += 0.011266323360625372;
                  } else {
                    result[0] += -4.814315341376599e-05;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886111832648119713) ) ) {
                    result[0] += -0.0006309602046983688;
                  } else {
                    result[0] += 0.0024667759415784017;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.162018451266281005) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.985550935550937091) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.33549783549783996) ) ) {
                    result[0] += 0.0001564601566553776;
                  } else {
                    result[0] += 0.00704845909327121;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.244758237056055705) ) ) {
                    result[0] += -0.006881986168334942;
                  } else {
                    result[0] += 0.0004645564206383038;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05559438449050682629) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.758828417116743648) ) ) {
                    result[0] += -0.006373451464099681;
                  } else {
                    result[0] += 0.0017879662677882252;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1780500000000000138) ) ) {
                    result[0] += -0.00883658832407504;
                  } else {
                    result[0] += -0.0013373472779549343;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1900.973197986588957) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2159.388666833940533) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)302.7868852467867669) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2251.879919224290916) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1916500000000000148) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8968663066601212375) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)223.4274148164537053) ) ) {
                result[0] += 0.011669126389927164;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.00769230769231299) ) ) {
                  result[0] += -0.0024165336380457016;
                } else {
                  result[0] += 0.005625770160292358;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)90.02272727272729469) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)59.95123152709360426) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3998595000000000899) ) ) {
                    result[0] += -0.0012951812108140488;
                  } else {
                    result[0] += 0.0013180912926765262;
                  }
                } else {
                  result[0] += 0.007326499848923159;
                }
              } else {
                result[0] += -0.005069174900337084;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.941722972972973693) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2522.832375365074313) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.270242914979758275) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8493205205092535515) ) ) {
                    result[0] += 0.0028365561174934716;
                  } else {
                    result[0] += -0.0013691190624771908;
                  }
                } else {
                  result[0] += -0.0054446465977715615;
                }
              } else {
                result[0] += 0.005885807564803663;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7554835062195935924) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5779552098030363849) ) ) {
                  result[0] += -0.006485465991853875;
                } else {
                  result[0] += -0.013634995495525104;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.89237451737451856) ) ) {
                  result[0] += -0.0053497310961814525;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3396.060442531631452) ) ) {
                    result[0] += -0.0027902832402956225;
                  } else {
                    result[0] += 0.0001044116479144588;
                  }
                }
              }
            }
          }
        } else {
          result[0] += -0.010842253251508331;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)331.7040358106666531) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8132313610536542337) ) ) {
            result[0] += -0.0004904149784548555;
          } else {
            result[0] += 0.010829772003909891;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8190475000000000394) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653967102080309726) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2022010309504783943) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2197.008210486540975) ) ) {
                    result[0] += -0.0009006722611407064;
                  } else {
                    result[0] += 0.004545961981934737;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3428.95033302068623) ) ) {
                    result[0] += -0.0007874262474539576;
                  } else {
                    result[0] += -0.014123923237548092;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.180717299578059709) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2257330354602715417) ) ) {
                    result[0] += -0.004778275713974446;
                  } else {
                    result[0] += -0.0002573376417482352;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.005617977528091345) ) ) {
                    result[0] += 0.002513145763563565;
                  } else {
                    result[0] += 0.007562323060097088;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.758828417116743648) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.621024439236693482) ) ) {
                  result[0] += -0.0024413505631899813;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2724.737518907181311) ) ) {
                    result[0] += 0.0036886893792004135;
                  } else {
                    result[0] += 0.01170025964393672;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)589.1944314064304535) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5419086073107369783) ) ) {
                    result[0] += -0.0052785704662529674;
                  } else {
                    result[0] += 0.0008113558770876932;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)708.6727958726006591) ) ) {
                    result[0] += 0.0026270379852907006;
                  } else {
                    result[0] += 4.291951596357363e-05;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.968950000000000089) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01763478653336062602) ) ) {
                result[0] += -0.0035456529570125103;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.03088619624613997) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5111.874409617834317) ) ) {
                    result[0] += -0.001316616915241639;
                  } else {
                    result[0] += 0.0012949814760752827;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4905.045163925654379) ) ) {
                    result[0] += 0.0020253120346027343;
                  } else {
                    result[0] += 0.006249307165247677;
                  }
                }
              }
            } else {
              result[0] += 0.004932457795900433;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4820105000000000639) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.29760031471282566) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.576757931334203278) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.594626313305680831) ) ) {
              result[0] += 0.003443798211502905;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3817900000000000182) ) ) {
                result[0] += 0.0015066304088587582;
              } else {
                result[0] += -0.005787721044757484;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.344799119427628753) ) ) {
              result[0] += -0.013192893421796137;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3604886952753205698) ) ) {
                result[0] += -0.00657645031905716;
              } else {
                result[0] += 7.505111978977304e-05;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1427700348432055788) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.941722972972973693) ) ) {
              result[0] += 0.009543000560735879;
            } else {
              result[0] += 0.002070926398103169;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8216500000000001025) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.24542300000000003) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2002349158630263581) ) ) {
                  result[0] += -0.007152875240593667;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1131.259530250802754) ) ) {
                    result[0] += -0.002811662091063403;
                  } else {
                    result[0] += 0.002480574001604637;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2842505000000000726) ) ) {
                  result[0] += 0.012976621354370079;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.741000000000000103) ) ) {
                    result[0] += -0.0007719472362983718;
                  } else {
                    result[0] += 0.006823568406241436;
                  }
                }
              }
            } else {
              result[0] += -0.008702440268209578;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.256349206349208103) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4979840000000000377) ) ) {
            result[0] += 0.009328826144903832;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.781746031746032521) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.080540540540540828) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1721.929484821459255) ) ) {
                    result[0] += 0.00017240774534774765;
                  } else {
                    result[0] += 0.003821585833173333;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.10319148936170564) ) ) {
                    result[0] += -0.004274216446132689;
                  } else {
                    result[0] += 0.0011151691312017082;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.731662826420891754) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5412680000000000824) ) ) {
                    result[0] += 0.010136325436417183;
                  } else {
                    result[0] += 0.004755907267798332;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5388695000000001123) ) ) {
                    result[0] += -0.005411660123839226;
                  } else {
                    result[0] += 0.00618214193941753;
                  }
                }
              }
            } else {
              result[0] += -0.009794747223521152;
            }
          }
        } else {
          result[0] += 0.010504465923744917;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1827.122553020618625) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.180717299578059709) ) ) {
        result[0] += 0.003976852464966803;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1444.206459403876352) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1860.92441007674438) ) ) {
            result[0] += -0.003919132099083227;
          } else {
            result[0] += -0.015350762231513182;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2131075953897917097) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3073.70609235882921) ) ) {
              result[0] += -0.013940444993210685;
            } else {
              result[0] += -0.001942736421654925;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2768892570409074438) ) ) {
              result[0] += 0.00963561989838794;
            } else {
              result[0] += 0.0017033726600306125;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1736.121756519464043) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.02889784946237128) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.476627348186981603) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1794.783506543015164) ) ) {
              result[0] += -0.005589216649200853;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2181446333714152641) ) ) {
                result[0] += 0.003626894824117173;
              } else {
                result[0] += 0.00036298020622216895;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4114490000000000092) ) ) {
              result[0] += 0.0018089570602133412;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.29760031471282566) ) ) {
                result[0] += 0.004303807479637966;
              } else {
                result[0] += 0.013160620953141413;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.319459459459459971) ) ) {
            result[0] += 0.001766170893816904;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1763.608542368433973) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.669540229885059901) ) ) {
                result[0] += -0.008357080068187864;
              } else {
                result[0] += -0.0033122089717420463;
              }
            } else {
              result[0] += 0.0005916472533491639;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1661.374751008663452) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4899000000000000576) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4269960000000000977) ) ) {
              result[0] += -0.0032782109110194376;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.923563777994157897) ) ) {
                result[0] += 0.0012856346510786054;
              } else {
                result[0] += 0.00786155322754414;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4019577872618069758) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09647950813491669442) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.553444000000000158) ) ) {
                  result[0] += -0.010781781288101314;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2932.390892308531875) ) ) {
                    result[0] += -0.0017339231143829303;
                  } else {
                    result[0] += 0.003289706865921195;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7792500000000001092) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1387.236520179336139) ) ) {
                    result[0] += 0.0009987598262603042;
                  } else {
                    result[0] += -0.002881239355222323;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8018000000000000682) ) ) {
                    result[0] += 0.004830819336149354;
                  } else {
                    result[0] += 0.0017281392149675423;
                  }
                }
              }
            } else {
              result[0] += -0.013837833575397099;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1578.099938315956024) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5673840000000001105) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3963105000000000655) ) ) {
                  result[0] += 0.011907529296743411;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.217148977082086192) ) ) {
                    result[0] += 0.003272847391083421;
                  } else {
                    result[0] += 0.010324082359515853;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3858855000000000479) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2022.266193993530806) ) ) {
                    result[0] += -0.0027641212208513325;
                  } else {
                    result[0] += 0.0019950504611434793;
                  }
                } else {
                  result[0] += 0.005495795580022434;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7069310000000000871) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6156880000000001241) ) ) {
                  result[0] += -0.0014686617167309966;
                } else {
                  result[0] += -0.008148281793299544;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8014155000000001694) ) ) {
                  result[0] += -0.0004221722676217923;
                } else {
                  result[0] += 0.00401517441790686;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1556.733319173369409) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1990818593712635198) ) ) {
                  result[0] += -0.00160823858558481;
                } else {
                  result[0] += 0.0024791489891005866;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.429971988795520232) ) ) {
                  result[0] += -0.012147178934438186;
                } else {
                  result[0] += 0.0010096701491338182;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.50621947496947528) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5673840000000001105) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3499121892707919845) ) ) {
                    result[0] += 0.008650048629738059;
                  } else {
                    result[0] += 0.0006016507996604438;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6418835000000001623) ) ) {
                    result[0] += -0.0018271675710120042;
                  } else {
                    result[0] += 0.00038321528258945694;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2872.105821089800429) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2486.18702816013456) ) ) {
                    result[0] += -0.0004063302159530521;
                  } else {
                    result[0] += 0.00313830452831973;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.8738636363636445) ) ) {
                    result[0] += -0.008428057893749183;
                  } else {
                    result[0] += 0.000804638781798986;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01025000000000000216) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006350000000000000609) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004550000000000001092) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.608333333333333837) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.437797619047619602) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-35.8874746089418224) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8117010151197184831) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8493205205092535515) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5969286998555723978) ) ) {
                    result[0] += -7.456187486381469e-05;
                  } else {
                    result[0] += 0.0028122736349994377;
                  }
                } else {
                  result[0] += -0.00463474387569983;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9430194805194805907) ) ) {
                    result[0] += 0.0023037723553255944;
                  } else {
                    result[0] += 0.007794974860467786;
                  }
                } else {
                  result[0] += 0.00044895049781354786;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
                result[0] += 0.001797206891616547;
              } else {
                result[0] += -0.006631626826081708;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.0350985221674911) ) ) {
              result[0] += 0.0014509031190785109;
            } else {
              result[0] += 0.0074886047877367;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4079010000000000136) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002350000000000000092) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7238223757163882999) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66515151515151771) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5154874332154414374) ) ) {
                    result[0] += 0.008999315779230823;
                  } else {
                    result[0] += -0.00037660815310178386;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.68465909090909705) ) ) {
                    result[0] += -0.003127325131043611;
                  } else {
                    result[0] += -0.00026324037005510617;
                  }
                }
              } else {
                result[0] += -0.003985976195756082;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.76676186590507811) ) ) {
                result[0] += -0.005856706726800827;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.95912400047738622) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                    result[0] += 0.0006653534855625633;
                  } else {
                    result[0] += 0.009193448425313715;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                    result[0] += 0.00036114090423546073;
                  } else {
                    result[0] += -0.0036959339972693094;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4411580000000000501) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2775211666417710665) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3747.556396330042844) ) ) {
                  result[0] += -0.004032202627471904;
                } else {
                  result[0] += -0.019075454080821314;
                }
              } else {
                result[0] += 0.0009426529175735558;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.95916666666667005) ) ) {
                result[0] += -0.0066247786297054445;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4540995000000000448) ) ) {
                  result[0] += -0.0048732965984651265;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.73863636363636687) ) ) {
                    result[0] += 0.0031466043184717775;
                  } else {
                    result[0] += -0.0008689998745489234;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3135840000000000294) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.83870359628770785) ) ) {
            result[0] += -0.005250948874338795;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.11050566695728747) ) ) {
              result[0] += 0.003698042658804511;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.08391608391609395) ) ) {
                result[0] += -0.002260789861230458;
              } else {
                result[0] += -9.83059793586551e-05;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.26352339181286677) ) ) {
            result[0] += -0.004518929325195513;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3651455000000000672) ) ) {
              result[0] += 0.014848507397001926;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.594010800196367761) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.26568627450980431) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0480211614051639854) ) ) {
                    result[0] += 0.006316584141377753;
                  } else {
                    result[0] += -0.0022692164205288376;
                  }
                } else {
                  result[0] += 0.008421270644490168;
                }
              } else {
                result[0] += -0.0009131120657333061;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05559438449050682629) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4391930000000000556) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.731662826420891754) ) ) {
            result[0] += -0.017062221492942717;
          } else {
            result[0] += -0.0017644216511058714;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02880243203506518621) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01611066591465903919) ) ) {
              result[0] += -0.001267063840501386;
            } else {
              result[0] += 0.005189633904207254;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1794.783506543015164) ) ) {
              result[0] += -0.00602369279965055;
            } else {
              result[0] += 0.0021934155887624205;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3680724160323877725) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2768892570409074438) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1827.122553020618625) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1426236536800285226) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1098096607971473931) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1267725882486329947) ) ) {
                    result[0] += 0.004371767320281218;
                  } else {
                    result[0] += -0.0003842778369795033;
                  }
                } else {
                  result[0] += -0.005113748119826009;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1810809162147536122) ) ) {
                  result[0] += 0.008263883085911049;
                } else {
                  result[0] += -9.27582131606228e-05;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008450000000000000913) ) ) {
                  result[0] += 0.003102242909223163;
                } else {
                  result[0] += -0.005097651818730076;
                }
              } else {
                result[0] += -0.012974716067834464;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.517100660707347615) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.630604288499026389) ) ) {
                result[0] += 0.0030421952175304994;
              } else {
                result[0] += 0.016810021771090113;
              }
            } else {
              result[0] += -0.0012176273850535763;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3649912904309082773) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2936787115246400348) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3430250000000000798) ) ) {
                result[0] += -0.00878715469483942;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3161.371852426907026) ) ) {
                  result[0] += -0.0021526775843397476;
                } else {
                  result[0] += 0.0022605567232010845;
                }
              }
            } else {
              result[0] += -0.014244528881604556;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9354017638884142283) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007150000000000000973) ) ) {
                result[0] += -0.004427373510876788;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.92450142450142714) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.621024439236693482) ) ) {
                    result[0] += 0.003806368611429511;
                  } else {
                    result[0] += 0.013878944812612776;
                  }
                } else {
                  result[0] += -0.001674639646211843;
                }
              }
            } else {
              result[0] += -0.006962323708974686;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01225000000000000221) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.194335169158143639) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4559570000000000567) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.178976624942160184) ) ) {
            result[0] += 0.008440231306416185;
          } else {
            result[0] += 0.004809080265027028;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.010850000000000002) ) ) {
            result[0] += 0.004344087816554391;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01145000000000000011) ) ) {
              result[0] += -0.003169258756824563;
            } else {
              result[0] += 0.0034328130354774108;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.608901515151517359) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3747.556396330042844) ) ) {
            result[0] += -0.007969171834679708;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2897740295086664308) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.098543689320389483) ) ) {
                result[0] += -0.0037559875129482985;
              } else {
                result[0] += 0.00541378441016465;
              }
            } else {
              result[0] += -0.004661775285097168;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3037930000000000352) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2247630000000000183) ) ) {
              result[0] += 0.0023925168113044285;
            } else {
              result[0] += -0.0021551512237710214;
            }
          } else {
            result[0] += 0.007948323984689887;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01345000000000000188) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.44472616632860706) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2468.165232770545572) ) ) {
            result[0] += -0.015327032458529493;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.758828417116743648) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7867050000000000987) ) ) {
                result[0] += 0.004209412993155907;
              } else {
                result[0] += -0.0026655973258393065;
              }
            } else {
              result[0] += -0.00510160255148853;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2950710236599619618) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07466098337194494727) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.39148936170214199) ) ) {
                result[0] += 0.0042871186515048045;
              } else {
                result[0] += -0.0009858782115202119;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7291666666666668517) ) ) {
                result[0] += -0.00025165068046078957;
              } else {
                result[0] += -0.007386995776161746;
              }
            }
          } else {
            result[0] += 0.006894193068180958;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01505000000000000261) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1774491924585733515) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.810660377358491058) ) ) {
              result[0] += 0.0007059868600968125;
            } else {
              result[0] += -0.0030036788290072718;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3530928486564372526) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2159.388666833940533) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2758315000000000627) ) ) {
                  result[0] += 0.004418298732090299;
                } else {
                  result[0] += 0.018047527762942352;
                }
              } else {
                result[0] += 0.001459668666114004;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6903684837426190546) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.329183438213477) ) ) {
                  result[0] += -0.0005807400728774354;
                } else {
                  result[0] += 0.004222496189953554;
                }
              } else {
                result[0] += -0.003936849039066095;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01695000000000000326) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1900.973197986588957) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3694.512900490842185) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.48814016172507024) ) ) {
                  result[0] += 0.008064994302619784;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09832385137914774476) ) ) {
                    result[0] += 0.0017889733326313878;
                  } else {
                    result[0] += -0.005132326608920934;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4849465000000000026) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.168079096045198995) ) ) {
                    result[0] += -0.014576357154083109;
                  } else {
                    result[0] += 0.002620141426253313;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1558403046997211827) ) ) {
                    result[0] += 0.0035189634745288285;
                  } else {
                    result[0] += -0.0016721959767070703;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.947140112784286) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.674038461538461808) ) ) {
                  result[0] += -0.0047295236402961245;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
                    result[0] += 0.00020460043713782617;
                  } else {
                    result[0] += 0.002344866461357685;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1168.062366236748858) ) ) {
                  result[0] += 0.006939952117143194;
                } else {
                  result[0] += 0.0025262976635165185;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03324520994880592051) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01763478653336062602) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02267788138525016553) ) ) {
                  result[0] += -0.0016043150015545792;
                } else {
                  result[0] += -0.007862773051220472;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3066040000000000432) ) ) {
                  result[0] += 0.002492769691019622;
                } else {
                  result[0] += -0.0003401788183183949;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01404130762682907936) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1102500000000000008) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0734500000000000014) ) ) {
                    result[0] += 0.0013408847359282108;
                  } else {
                    result[0] += 0.007059037381546058;
                  }
                } else {
                  result[0] += -0.002007082463537015;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02159164964612171264) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.67375886524823159) ) ) {
                    result[0] += -0.0002345676114886462;
                  } else {
                    result[0] += -0.006485561746964406;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05533921706643565169) ) ) {
                    result[0] += 0.0027046751140270427;
                  } else {
                    result[0] += 3.5283941167758204e-05;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5146500000000001629) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4862500000000000155) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7114500000000001378) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105614129712844229) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5451500000000001345) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.40503860987115059) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3272.957111253326275) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4723500000000000476) ) ) {
                  result[0] += 0.000693382235466307;
                } else {
                  result[0] += -0.005166908440238332;
                }
              } else {
                result[0] += -0.006951386231780045;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4570251993391531431) ) ) {
                result[0] += 0.005456940377540392;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5191497654354458868) ) ) {
                  result[0] += -0.004617522643045134;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7290141514373503773) ) ) {
                    result[0] += -0.0010958295752563053;
                  } else {
                    result[0] += 0.0012225370925568744;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008450000000000000913) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.46688034188034422) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2950710236599619618) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2745899061051987888) ) ) {
                    result[0] += 0.00162421770427651;
                  } else {
                    result[0] += -0.005557040660496954;
                  }
                } else {
                  result[0] += 0.0091854181040697;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003150000000000000456) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.238734978718284252) ) ) {
                    result[0] += 0.001979460136628486;
                  } else {
                    result[0] += -0.0012249750535886922;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.64946018893387958) ) ) {
                    result[0] += -0.00928129778505889;
                  } else {
                    result[0] += -0.0013953481249478431;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10017.88409225704527) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7513.900442615285101) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1263500000000000456) ) ) {
                    result[0] += 0.013582467021547159;
                  } else {
                    result[0] += 0.0009310712633353687;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01285000000000000205) ) ) {
                    result[0] += 0.00861527447319493;
                  } else {
                    result[0] += 0.0014401032471840888;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6062500000000000666) ) ) {
                  result[0] += 0.008085375776945864;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2853053162064869697) ) ) {
                    result[0] += 9.788786631611579e-05;
                  } else {
                    result[0] += -0.006841564561673771;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4586000000000000631) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1015718621544924455) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5576.569694912017439) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5031527682228830178) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4684699941457284855) ) ) {
                    result[0] += 0.00026567703598488074;
                  } else {
                    result[0] += 0.008422336277571019;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.319459459459459971) ) ) {
                    result[0] += 0.0010335336544286119;
                  } else {
                    result[0] += -0.0056854190030983165;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07743380528222744419) ) ) {
                  result[0] += 0.0006531194625959948;
                } else {
                  result[0] += 0.010063848627935914;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1888209463138135757) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22828.66277171849651) ) ) {
                    result[0] += -0.004119609443868871;
                  } else {
                    result[0] += 0.003999277982367426;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5621000000000001551) ) ) {
                    result[0] += 4.0787940374068234e-05;
                  } else {
                    result[0] += -0.001007255473483227;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276582891195849945) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5327191796258734513) ) ) {
                    result[0] += -0.001730428723445669;
                  } else {
                    result[0] += 0.004361189620429394;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2339734189577260814) ) ) {
                    result[0] += 0.005740777726004682;
                  } else {
                    result[0] += -6.738656615347002e-05;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2486.18702816013456) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)486.3463921815647382) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8765010811110496292) ) ) {
                  result[0] += 0.0008156164540459089;
                } else {
                  result[0] += 0.0071410233939566276;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.08644133644133678) ) ) {
                  result[0] += 0.0007080263475568175;
                } else {
                  result[0] += -0.010803859069937034;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21867.30290611750752) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.15892857142858219) ) ) {
                  result[0] += -0.004540501238498528;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29973.18077780933891) ) ) {
                    result[0] += 0.006384361388472191;
                  } else {
                    result[0] += -0.0008972044228087361;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5826500000000001123) ) ) {
                  result[0] += 0.015650721768626665;
                } else {
                  result[0] += 0.0026162259494718074;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7155500000000001304) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.27951388888889106) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2347.346151230799023) ) ) {
              result[0] += 0.005991697915311901;
            } else {
              result[0] += -0.00025969105303195534;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5047.839835708285136) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3083306738637045519) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)113.4891304347826235) ) ) {
                  result[0] += 0.0034982487228731383;
                } else {
                  result[0] += -0.0010313040110581308;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2469500000000000306) ) ) {
                  result[0] += -0.004001909911016697;
                } else {
                  result[0] += -0.009091653766899478;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
                result[0] += -0.002593088609679184;
              } else {
                result[0] += -0.013583981837290872;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3012500000000000733) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2232000000000000095) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2068500000000000061) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7242500000000001714) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3396.060442531631452) ) ) {
                    result[0] += -0.00011073567826450178;
                  } else {
                    result[0] += 0.006483549807499759;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2921808083424245472) ) ) {
                    result[0] += -4.875724577540711e-06;
                  } else {
                    result[0] += -0.001872601543142826;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.56776556776557285) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2878363611748627204) ) ) {
                    result[0] += -0.0030978635450165173;
                  } else {
                    result[0] += -0.013234811082269262;
                  }
                } else {
                  result[0] += 0.0022706473105946834;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4395461641391615326) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3032107091898748608) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7497000000000001441) ) ) {
                    result[0] += -0.008153760897032004;
                  } else {
                    result[0] += 0.0015616419007722304;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2651500000000000523) ) ) {
                    result[0] += 0.0035683793836186846;
                  } else {
                    result[0] += 0.01125439587694721;
                  }
                }
              } else {
                result[0] += -0.006969698221136019;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1888209463138135757) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4346740216305434168) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2934.007013777737939) ) ) {
                    result[0] += -0.00340192804994782;
                  } else {
                    result[0] += 0.004225908697896655;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1028217954414843011) ) ) {
                    result[0] += -0.000627097180766984;
                  } else {
                    result[0] += 0.006539101904826923;
                  }
                }
              } else {
                result[0] += 0.0060082046884234646;
              }
            } else {
              result[0] += -0.008522163025514359;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4950500000000000456) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.429971988795520232) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.793653083354456057) ) ) {
            result[0] += 0.002141936839787578;
          } else {
            result[0] += -0.0024498816008168773;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19954.67408175594392) ) ) {
            result[0] += 0.006190454954197398;
          } else {
            result[0] += 0.01722104824177388;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5203.159600494148435) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.0350985221674911) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1895.084169001929013) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7783143177881820529) ) ) {
                result[0] += 0.0035119688960536743;
              } else {
                result[0] += -0.001761516001764275;
              }
            } else {
              result[0] += -0.004230143502265105;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4899000000000000576) ) ) {
              result[0] += -1.653867268268677e-05;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.593650000000000122) ) ) {
                result[0] += 0.017916360946192922;
              } else {
                result[0] += 0.002617876031378373;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6617.041694952862599) ) ) {
            result[0] += -0.01132507171557269;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7155500000000001304) ) ) {
              result[0] += -0.001956362022186219;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1656345976266143383) ) ) {
                result[0] += 0.0016792437418070261;
              } else {
                result[0] += 0.00467451180704402;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5340500000000001357) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-59456.31974871831335) ) ) {
        result[0] += 0.004122317898073439;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.73863636363636687) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6484.005380192698794) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12763.40579176873143) ) ) {
              result[0] += -0.0016713384425220553;
            } else {
              result[0] += 0.003679590459935504;
            }
          } else {
            result[0] += -0.005452724246374198;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3511633202422851929) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-25974.62741760602876) ) ) {
              result[0] += -0.001564977557266781;
            } else {
              result[0] += -0.006416872981916851;
            }
          } else {
            result[0] += -0.012294748003044486;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-39813.79238308515778) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-131602.6154058956017) ) ) {
          result[0] += 0.002862130642253034;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4183000000000000607) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-76331.1691277182108) ) ) {
              result[0] += -0.0013274853170777343;
            } else {
              result[0] += 0.002745738237673409;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.09737269772481483) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)23807.59772303205318) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2113418173407974887) ) ) {
                  result[0] += -0.005087351438984737;
                } else {
                  result[0] += -0.0014897749063751626;
                }
              } else {
                result[0] += 0.0017075914457465406;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-59456.31974871831335) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4107361159622773816) ) ) {
                  result[0] += 0.00012484239223065766;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)27856.34674737125533) ) ) {
                    result[0] += -0.00672871251715403;
                  } else {
                    result[0] += -0.003306162533356807;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2814810351552732848) ) ) {
                  result[0] += -0.011352347345927698;
                } else {
                  result[0] += -0.002803058490356071;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11385.5555937579793) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-33595.95242623185186) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5181399381581147656) ) ) {
              result[0] += -0.0018135670695895879;
            } else {
              result[0] += -0.007881515096866853;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3162745180867091999) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1251953065624919759) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8823.72194961022069) ) ) {
                  result[0] += -0.002763011320506355;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.608333333333333837) ) ) {
                    result[0] += -0.0013863307223771124;
                  } else {
                    result[0] += 0.011764046949115186;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.54474097331240401) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7976.948351077033294) ) ) {
                    result[0] += -0.012669226816913664;
                  } else {
                    result[0] += -0.0032401220701245943;
                  }
                } else {
                  result[0] += -0.00114070484873829;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3127769248817890424) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.912662090007628102) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5885500000000001286) ) ) {
                    result[0] += -0.0030259271996922305;
                  } else {
                    result[0] += -0.00046147791389715843;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596815205881915278) ) ) {
                    result[0] += 0.015166498077908003;
                  } else {
                    result[0] += 0.004721872505300374;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8098.539324017688159) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.035538893813282) ) ) {
                    result[0] += 0.00029671163927223336;
                  } else {
                    result[0] += 0.008455022492535831;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.15454545454545965) ) ) {
                    result[0] += 0.00023075820037423103;
                  } else {
                    result[0] += -0.00580992447364312;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3413457424047925404) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1801279406462452659) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1233406754772393699) ) ) {
                result[0] += -0.00012800966324522485;
              } else {
                result[0] += -0.0035001530814158825;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2685307668603297282) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6621500000000001274) ) ) {
                  result[0] += 0.00939411607076538;
                } else {
                  result[0] += 0.0018728034518809028;
                }
              } else {
                result[0] += -0.00219677455355467;
              }
            }
          } else {
            result[0] += 0.008048544159721562;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3036.173061047864849) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3120.411781551796594) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4156551824015537466) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5058210444616920709) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3841.491407470849936) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7750500000000001277) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7224.572194877482616) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
                    result[0] += 0.0009097799945569161;
                  } else {
                    result[0] += 0.008793732004241632;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6641.084587499458394) ) ) {
                    result[0] += -0.005661431048369398;
                  } else {
                    result[0] += 0.00051379122091147;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09882060861174114808) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107150000000000023) ) ) {
                    result[0] += -0.0030490067572276226;
                  } else {
                    result[0] += 0.0032755800890752035;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355721953891439735) ) ) {
                    result[0] += -0.015248069106296388;
                  } else {
                    result[0] += 0.00031714923489597953;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07743380528222744419) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.08644133644133678) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8383500000000000396) ) ) {
                    result[0] += 0.007872067433076039;
                  } else {
                    result[0] += 4.2181847258497025e-05;
                  }
                } else {
                  result[0] += -0.007637385883075324;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3558.496385149145226) ) ) {
                  result[0] += 0.017449911869563125;
                } else {
                  result[0] += 0.006828463338358774;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5451500000000001345) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3066040000000000432) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4969.322965716292856) ) ) {
                  result[0] += 0.00654355311041866;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)42.69862018881627108) ) ) {
                    result[0] += -0.0030271384251942244;
                  } else {
                    result[0] += -0.00022293784215859252;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18243.8051103931939) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.47405150000000007) ) ) {
                    result[0] += 0.0009642582393151032;
                  } else {
                    result[0] += -0.0040227586534529024;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10562.87122396129962) ) ) {
                    result[0] += -0.015090066514579387;
                  } else {
                    result[0] += -0.008202149323402342;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3604886952753205698) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1846000000000000141) ) ) {
                    result[0] += 0.002692314225272288;
                  } else {
                    result[0] += -0.0012968490588455355;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2965509996887087385) ) ) {
                    result[0] += -0.0003004711500427347;
                  } else {
                    result[0] += 0.006020483823365407;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)39.76851851851852615) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4346740216305434168) ) ) {
                    result[0] += 0.014857797307274562;
                  } else {
                    result[0] += -0.0018091066588386705;
                  }
                } else {
                  result[0] += -0.0027816743021029508;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2572926693332214243) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5988500000000001044) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.552093295775335946) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.630604288499026389) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3944445000000000312) ) ) {
                    result[0] += -0.006678488353689781;
                  } else {
                    result[0] += 0.0033046570769007383;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4844.061872758970821) ) ) {
                    result[0] += 0.008612682097916591;
                  } else {
                    result[0] += 0.0007427432774046713;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1850.585799025786173) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3346595000000000542) ) ) {
                    result[0] += 0.012705725727567667;
                  } else {
                    result[0] += 0.0005029373411118657;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2666.433655949607328) ) ) {
                    result[0] += -0.006993483308410299;
                  } else {
                    result[0] += 0.0007706590101644802;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6872500000000001386) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5327191796258734513) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
                    result[0] += -0.0038304316641926094;
                  } else {
                    result[0] += -0.007874286530601354;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869560366706151944) ) ) {
                    result[0] += 0.002246888850448186;
                  } else {
                    result[0] += -0.006553289182914919;
                  }
                }
              } else {
                result[0] += 0.004426551370352896;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5093795867771410135) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3220420529803963983) ) ) {
                result[0] += -0.0032511413938610847;
              } else {
                result[0] += -0.011135497259693448;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0801500000000000129) ) ) {
                result[0] += 0.007355634857805773;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24005.21158890879087) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.19259259259259665) ) ) {
                    result[0] += 0.003598939257223029;
                  } else {
                    result[0] += -0.001515285453378589;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.897750673214003925) ) ) {
                    result[0] += 0.00038544286272146615;
                  } else {
                    result[0] += -0.0021849024047681663;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4929000000000000603) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4229000000000000536) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4780.79918261664443) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6667238441570323415) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1387.236520179336139) ) ) {
                  result[0] += 0.011560185501601233;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13669.55583063214181) ) ) {
                    result[0] += -0.00032994286767191116;
                  } else {
                    result[0] += 0.0023123946204785533;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3630500000000000393) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5111.874409617834317) ) ) {
                    result[0] += 0.00020556174647126413;
                  } else {
                    result[0] += -0.003115585805998149;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1057.206161904495502) ) ) {
                    result[0] += -0.007582484544943559;
                  } else {
                    result[0] += -0.00044811637677740184;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5122949209789572356) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.332482993197279697) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.225850000000000023) ) ) {
                    result[0] += -0.0023745518682369102;
                  } else {
                    result[0] += 0.0011802599308715085;
                  }
                } else {
                  result[0] += 0.016157268689288167;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6390813770363973356) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.67948717948718595) ) ) {
                    result[0] += -0.013453179079676244;
                  } else {
                    result[0] += -0.0012732449925660142;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)778.083180876904521) ) ) {
                    result[0] += 0.0009079320908227808;
                  } else {
                    result[0] += 0.012447728654038155;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.462163846551056412) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4432530062202834631) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.552403100775196165) ) ) {
                  result[0] += 0.00399634328090674;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6920.679669433080562) ) ) {
                    result[0] += -5.030017584371607e-05;
                  } else {
                    result[0] += -0.008199815068967135;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.21641156462585442) ) ) {
                  result[0] += 0.013113263889474255;
                } else {
                  result[0] += -0.0021240236506663624;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5190295000000001435) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.53452380952381517) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4683879798511265125) ) ) {
                    result[0] += -0.012712347739647144;
                  } else {
                    result[0] += -0.005015358292050764;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3616605000000000514) ) ) {
                    result[0] += 0.0019395720620985122;
                  } else {
                    result[0] += -0.004382143806270245;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3317.314990557732017) ) ) {
                  result[0] += 0.008379228130164285;
                } else {
                  result[0] += 0.0002833237538808696;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5297127797323987197) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5158500000000001418) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2192000000000000337) ) ) {
                result[0] += 0.0011556633325539149;
              } else {
                result[0] += -0.0055292232779664665;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8215.850837031795891) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.64611005692600187) ) ) {
                  result[0] += 0.0123063076106472;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4570251993391531431) ) ) {
                    result[0] += -0.0011386644917750347;
                  } else {
                    result[0] += 0.00715827344087342;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2651500000000000523) ) ) {
                  result[0] += 0.002437560728853919;
                } else {
                  result[0] += -0.005820877302340423;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.87210884353741847) ) ) {
              result[0] += 0.019680039666891195;
            } else {
              result[0] += 0.0019905450365773976;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.775681341719080208) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03735000000000000819) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1085485015600718556) ) ) {
            result[0] += -0.000805598150800225;
          } else {
            result[0] += 0.011082862183234782;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1647.715800020721645) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.897750673214003925) ) ) {
              result[0] += -0.0018747340640141049;
            } else {
              result[0] += 0.009772245006892477;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.854322937228583434) ) ) {
              result[0] += 0.0009670925721220273;
            } else {
              result[0] += -0.019034344578288856;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.293918500000000027) ) ) {
          result[0] += 0.004379008754901344;
        } else {
          result[0] += 0.020482894831373458;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2670.194409694011938) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09356702444951102426) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.141604010025063065) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.581742450538008438) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2966.685986956896613) ) ) {
              result[0] += -0.004470075444270708;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3003.428069510595833) ) ) {
                result[0] += -0.0003114434469690726;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004950000000000000407) ) ) {
                  result[0] += -0.00024213045943224405;
                } else {
                  result[0] += 0.0063446217491062344;
                }
              }
            }
          } else {
            result[0] += -0.005651659557870388;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3449290000000000411) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8903500000000000858) ) ) {
              result[0] += -0.0032254122177693303;
            } else {
              result[0] += 0.0014714418187663073;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.332482993197279697) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.15450928381962914) ) ) {
                result[0] += 0.008516205532030724;
              } else {
                result[0] += 0.003089810726036136;
              }
            } else {
              result[0] += 0.012440398880469388;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1507.77608195368407) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1112.565730584552057) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2703.412105777776105) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02075000000000000108) ) ) {
                result[0] += -0.006646293423915763;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.630604288499026389) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.594010800196367761) ) ) {
                    result[0] += -0.00024138750415652019;
                  } else {
                    result[0] += 0.009326861708592015;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2711220000000000296) ) ) {
                    result[0] += 0.0027657641580236558;
                  } else {
                    result[0] += -0.005096198732539582;
                  }
                }
              }
            } else {
              result[0] += -0.01018024526432805;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.601724137931035408) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6981500000000001593) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03515000000000000763) ) ) {
                  result[0] += -0.0018281872825390865;
                } else {
                  result[0] += 0.0025760734054806516;
                }
              } else {
                result[0] += -0.004630380489421858;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2838.225789746792998) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6089500000000001023) ) ) {
                  result[0] += -0.0034714558911783924;
                } else {
                  result[0] += 0.009991002032142083;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4684699941457284855) ) ) {
                  result[0] += 0.018131583193291122;
                } else {
                  result[0] += 0.00885034927544414;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2088500000000000079) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4107361159622773816) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2934.007013777737939) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2803536647300774454) ) ) {
                  result[0] += -0.0008238638404545635;
                } else {
                  result[0] += 0.008467514390682824;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5241315000000000834) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3616605000000000514) ) ) {
                    result[0] += -0.0012785326896959373;
                  } else {
                    result[0] += -0.010943934766210632;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
                    result[0] += -0.0026847679482951544;
                  } else {
                    result[0] += 0.0053546137297917846;
                  }
                }
              }
            } else {
              result[0] += -0.012686230012966884;
            }
          } else {
            result[0] += -0.01628887144983084;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2522.832375365074313) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0480211614051639854) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1086385441254854312) ) ) {
            result[0] += 0.004078972901797456;
          } else {
            result[0] += -0.012448237406110303;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.207305540238820557) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03115000000000000407) ) ) {
              result[0] += 0.006410676852470178;
            } else {
              result[0] += 0.01249566083490277;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3616605000000000514) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3476566175261612823) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2621735000000000593) ) ) {
                  result[0] += 0.0018743122851707875;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6588500000000000467) ) ) {
                    result[0] += -0.01348140892679684;
                  } else {
                    result[0] += -0.0027094368071037688;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5969286998555723978) ) ) {
                  result[0] += 0.012433157804080431;
                } else {
                  result[0] += -0.001866054705428472;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3896731296988180104) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.731662826420891754) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06795000000000002427) ) ) {
                    result[0] += -0.0013548004229604622;
                  } else {
                    result[0] += 0.0040576305981014854;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05545000000000000623) ) ) {
                    result[0] += 0.0029011815458790933;
                  } else {
                    result[0] += 0.013141998258184618;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.08644133644133678) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653967102080309726) ) ) {
                    result[0] += -0.0015406269932065123;
                  } else {
                    result[0] += 0.004482307861790477;
                  }
                } else {
                  result[0] += -0.008460566483504309;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2437.218419692248972) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3895535000000000525) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.495352833984574914) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3929701013096121298) ) ) {
                result[0] += 0.0030715031365365405;
              } else {
                result[0] += 0.014330310674924275;
              }
            } else {
              result[0] += -0.007912649711145147;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.098543689320389483) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3230.323190207400785) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1637025017206097666) ) ) {
                  result[0] += -0.0023396678175658697;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2432084806241540387) ) ) {
                    result[0] += 0.002087994196829978;
                  } else {
                    result[0] += -0.002089694110278175;
                  }
                }
              } else {
                result[0] += 0.0034746011796428925;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4776103313496700697) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4886700000000000488) ) ) {
                  result[0] += -0.02008823973522987;
                } else {
                  result[0] += -0.003738836547720725;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)753.7197460358141825) ) ) {
                  result[0] += -0.0053141279106833595;
                } else {
                  result[0] += 0.0065885987000347925;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2370.398064265408721) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1584500000000000075) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1153.333993324218) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.450900000000000023) ) ) {
                  result[0] += 0.0029383684899958592;
                } else {
                  result[0] += -0.009823018135475575;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1098096607971473931) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2395.919566910411959) ) ) {
                    result[0] += -0.0038119142039080367;
                  } else {
                    result[0] += 0.002772380185620241;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3710845000000000948) ) ) {
                    result[0] += -0.0008834277085184367;
                  } else {
                    result[0] += 0.00677816677834211;
                  }
                }
              }
            } else {
              result[0] += 0.011440149184496594;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2324.854021777930484) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1467.679265218292812) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5354827414836903499) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.986813186813187304) ) ) {
                    result[0] += 0.0018104203621908228;
                  } else {
                    result[0] += 0.008522452905411851;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                    result[0] += -0.0015421829261065367;
                  } else {
                    result[0] += -0.00766164663323512;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.38163074039362721) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01285000000000000205) ) ) {
                    result[0] += -0.004215917962071003;
                  } else {
                    result[0] += 0.003407128154469969;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2950710236599619618) ) ) {
                    result[0] += -0.005495726122723241;
                  } else {
                    result[0] += -0.01509345618382656;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5423.979011800238368) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2093.23039061359168) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2118.155753535761505) ) ) {
                    result[0] += 0.00018476126353155801;
                  } else {
                    result[0] += 0.004095608218342602;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2034.137847334806565) ) ) {
                    result[0] += -0.001981775403554428;
                  } else {
                    result[0] += -6.602978720729013e-05;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000000000000369) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6514.587695889199495) ) ) {
                    result[0] += 0.0025114669049903235;
                  } else {
                    result[0] += -0.0020562763103535416;
                  }
                } else {
                  result[0] += -0.008213707712663491;
                }
              }
            }
          }
        }
      }
    }
  }
}

