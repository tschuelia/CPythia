
#include "prediction.h"

void predict_unit3(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04715000000000000441) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.221246000000000026) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1766435000000000366) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5791.073405282010754) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08409200000000001396) ) ) {
                  result[0] += -0.005086714400283871;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2444518245208232299) ) ) {
                    result[0] += -0.003417560559270799;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3862.309036383199327) ) ) {
                result[0] += 0.0020214204144354242;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1533.824223339392574) ) ) {
                  result[0] += -0.0028412841283424937;
                } else {
                  result[0] += 0.0006966998516029843;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1372018916650266929) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06344288914682723324) ) ) {
                result[0] += -0.0056253316568845675;
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7150000000000000799) ) ) {
                  result[0] += -0.0005173671730767613;
                } else {
                  result[0] += 0.00162796861485207;
                }
              }
            } else {
              result[0] += -0.0062126300458596505;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1154034132138477414) ) ) {
            result[0] += -0.005648907018761718;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3350000000000000755) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
                  result[0] += -0.000862172239224032;
                } else {
                  result[0] += 0.0016598415004236606;
                }
              } else {
                result[0] += -0.0039722178209624275;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                  result[0] += 0.010297762476680884;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2626.389045125775283) ) ) {
                    result[0] += 0.0025859282347460055;
                  } else {
                    result[0] += -0.0006234531402393583;
                  }
                }
              } else {
                result[0] += -0.0030924013600686254;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.162893810690548) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4084000000000000408) ) ) {
              result[0] += 0.01675596191097032;
            } else {
              result[0] += 0.006133661136472525;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
              result[0] += 0.003460527910428057;
            } else {
              result[0] += -0.00537529912443955;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03545000000000000234) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
                result[0] += -0.006862320260717348;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9989.107872504324405) ) ) {
                  result[0] += 0.008553330542869239;
                } else {
                  result[0] += -0.000847155724811788;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.44072681704260752) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6129500000000001059) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3213000000000000855) ) ) {
                    result[0] += -0.008528955936040658;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                      result[0] += -0.0022485064971787183;
                    } else {
                      result[0] += 0.003852102743388361;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518295403837575108) ) ) {
                    result[0] += -0.010099762003250978;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6574.126053108660017) ) ) {
                      result[0] += -0.0048135633290674875;
                    } else {
                      result[0] += 0.0017864902888460015;
                    }
                  }
                }
              } else {
                result[0] += -0.00896627032020274;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73508771929824768) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2313484523829452688) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1171905010334959446) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09832488768552394287) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04272266684492439376) ) ) {
                      result[0] += -0.0036291854633799287;
                    } else {
                      result[0] += 0.0044363935748530535;
                    }
                  } else {
                    result[0] += -0.0034312911473513307;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                    result[0] += 0.011257683834998939;
                  } else {
                    result[0] += -0.00016139307888613102;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7607500000000001483) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4231.908399006179934) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.310715078210065665) ) ) {
                      result[0] += 0.004122403459837635;
                    } else {
                      result[0] += -0.001242407268813307;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.16323529411765136) ) ) {
                      result[0] += 0.00639200342786025;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7821500000000000119) ) ) {
                    result[0] += -0.010460558448877067;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9439.28927156883401) ) ) {
                result[0] += 0.0003636108915444181;
              } else {
                result[0] += 0.010747727637218448;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
        result[0] += 0.0006435810187759761;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6682000000000001272) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3282773505116238777) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6941500000000001558) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)127.0309523809523995) ) ) {
                  result[0] += 0.0001360866776659508;
                } else {
                  result[0] += -0.0033584756337108512;
                }
              } else {
                result[0] += 0.008345686345435414;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2964813357014444151) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)101.5672514619883202) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.44068627450981523) ) ) {
                    result[0] += -0.0016298023670358994;
                  } else {
                    result[0] += -0.007529185386017676;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)112.2710577188622096) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.924550000000000094) ) ) {
                      result[0] += -0.0036888845999250583;
                    } else {
                      result[0] += -0.000623210714960125;
                    }
                  }
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1390121841946631853) ) ) {
              result[0] += 0.0004359376107296358;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2807000000000000051) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.77003205128205821) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075923801982495709) ) ) {
                      result[0] += -0.005582924041754166;
                    } else {
                      result[0] += -0.0015824343709460397;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596939932693950182) ) ) {
                      result[0] += -0.004559112852785251;
                    } else {
                      result[0] += 0.0019029070519019369;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3492040711322696445) ) ) {
                    result[0] += -0.0015664195250882263;
                  } else {
                    result[0] += 0.004994541570523162;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2164415000000000366) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.197938500000000045) ) ) {
                    result[0] += -0.0034537101437038835;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                      result[0] += -0.004493012886414855;
                    } else {
                      result[0] += -0.008007212346127356;
                    }
                  } else {
                    result[0] += -0.0007676015615105927;
                  }
                }
              }
            }
          }
        } else {
          result[0] += 0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.93082137161084688) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7350000000000000977) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.789850000000000052) ) ) {
          result[0] += -0.001306964725302557;
        } else {
          result[0] += -0.008931168205662155;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.028991596638655803) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3488086661974699187) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.490995462280204631) ) ) {
                    result[0] += 0.008025268334517504;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                      result[0] += 0.004696986068193534;
                    } else {
                      result[0] += 0.007747315076784594;
                    }
                  }
                } else {
                  result[0] += 0.0005806895244194121;
                }
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04185000000000000525) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
                  result[0] += 0.010240699540426442;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6334290000000001308) ) ) {
                    result[0] += 0.00041889268563758856;
                  } else {
                    result[0] += 0.004846484819148326;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.742610837438423932) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.312776891724260375) ) ) {
                    result[0] += 0.000825116383774164;
                  } else {
                    result[0] += -0.0007311065681386973;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4133440879166302429) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)715.4826587170257426) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0022120656906615094;
                    }
                  } else {
                    result[0] += 0.005101001149809958;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9301791105069795451) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
              result[0] += 0.009649794914292131;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)361.7598371524995287) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1250500000000000222) ) ) {
                    result[0] += -0.007805375506995512;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2593.773207383128465) ) ) {
                      result[0] += -0.002000580984733023;
                    } else {
                      result[0] += 0.005481991126722358;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4396243171653491655) ) ) {
                      result[0] += 0.002503033519274047;
                    } else {
                      result[0] += 0.0011023507809216117;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1316846325177797872) ) ) {
                      result[0] += 0.0025964579724464176;
                    } else {
                      result[0] += 0.005419789978947151;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.535781628804885113) ) ) {
                  result[0] += 0.0038256899708974386;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01325000000000000309) ) ) {
                    result[0] += -0.007529574820804458;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2429488264872171899) ) ) {
                      result[0] += -0.00416597363963787;
                    } else {
                      result[0] += 0.0029197954113670023;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2539.379249415995218) ) ) {
              result[0] += 0.005884227030412579;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
                  result[0] += -0.0076034689632751085;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2902500000000000635) ) ) {
                    result[0] += -0.00045195493594785016;
                  } else {
                    result[0] += 0.0005449412530474838;
                  }
                }
              } else {
                result[0] += -0.0098314300346896;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7446860000000000701) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5540.546691107218976) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
              result[0] += -0.004163246436310848;
            } else {
              result[0] += 0.0041416604912146;
            }
          } else {
            result[0] += -0.014300888871429851;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)29304.5719267044733) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.31041666666667567) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
                    result[0] += -0.00617649645231444;
                  } else {
                    result[0] += 0.008299395805197311;
                  }
                } else {
                  result[0] += 0.0120049180127282;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.7261363636363658) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.05227272727272947) ) ) {
                      result[0] += 0.005346634190510858;
                    } else {
                      result[0] += -0.005895098241661232;
                    }
                  } else {
                    result[0] += 0.011891665821728873;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14660.96176939566249) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
                      result[0] += 0.0013800771218284314;
                    } else {
                      result[0] += -0.003916531058455874;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4172500000000000653) ) ) {
                      result[0] += 0.0035036016102680707;
                    } else {
                      result[0] += -0.0051716139894652105;
                    }
                  }
                }
              }
            } else {
              result[0] += 0.007584414799635547;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8957715509494285078) ) ) {
              result[0] += -0.006351100012260186;
            } else {
              result[0] += 0;
            }
          }
        }
      } else {
        result[0] += 0.00761405709267235;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6650000000000001465) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)118.0299834287672098) ) ) {
                  result[0] += -0.0022059348682010142;
                } else {
                  result[0] += 0.0025503171374748604;
                }
              } else {
                result[0] += -0.004105001102055246;
              }
            } else {
              result[0] += 0.005292598009079531;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5001000000000001) ) ) {
              result[0] += -3.4842402233388954e-05;
            } else {
              result[0] += -0.004373640743379717;
            }
          }
        } else {
          result[0] += -0.009431836907186365;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3284500000000000752) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.008436858565659771;
            }
          } else {
            result[0] += 0.002157880310415538;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.80359334895659007) ) ) {
            result[0] += 0.00727141851198472;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1185548504618808702) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.89015151515152979) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1510.595905575025881) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658645000000000369) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.14277939042090537) ) ) {
                      result[0] += -0.0009298272208529855;
                    } else {
                      result[0] += -0.006303378653782694;
                    }
                  } else {
                    result[0] += -0.008895594785340124;
                  }
                } else {
                  result[0] += 0.0003712462456574314;
                }
              } else {
                result[0] += 0.0020837973353400496;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2508523744426000568) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2668.597659326529538) ) ) {
                  result[0] += 0.009785841760609388;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5324000000000000954) ) ) {
                  result[0] += 0.005340695037107993;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3339271889634866652) ) ) {
                      result[0] += 0.003663348369581262;
                    } else {
                      result[0] += -0.0019446856896001444;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
                      result[0] += -0.008214482847377306;
                    } else {
                      result[0] += -0.0028982351512050896;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6051360000000001182) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7795.802699447695886) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9381000000000000449) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1360340320715830165) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08774088920105922729) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05088446673430283007) ) ) {
                      result[0] += 0.0018533563398757894;
                    } else {
                      result[0] += 0.007683920148214189;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
                      result[0] += 0.00035113103284044355;
                    } else {
                      result[0] += 0.002655574782895215;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1842.867320295106538) ) ) {
                      result[0] += 0.0016002976415371982;
                    } else {
                      result[0] += -0.009753405650436614;
                    }
                  }
                }
              } else {
                result[0] += -0.004712669512108894;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7052500000000000435) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6402500000000000968) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.603350000000000164) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.84108946608946944) ) ) {
                      result[0] += -0.0005447260238356171;
                    } else {
                      result[0] += 0.003345440906668018;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
                      result[0] += -0.006442579246426892;
                    } else {
                      result[0] += 0.001026979093131936;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2180905966455483069) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.956944444444444819) ) ) {
                      result[0] += 0.007006744050662286;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2158000000000000196) ) ) {
                      result[0] += 0.012861682407424444;
                    } else {
                      result[0] += 0.0027359922638820443;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2190711269459436339) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1203499999999999986) ) ) {
                      result[0] += 0.007521541990829638;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.002536174047541616;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3002208421277365313) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
                      result[0] += -0.011282240809075774;
                    } else {
                      result[0] += -0.001602191567440745;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7424500000000001654) ) ) {
                      result[0] += -0.0025795027048765473;
                    } else {
                      result[0] += 0.002290348232461717;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11018.535337379677) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1702908340369640727) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
                  result[0] += 0.012522444163942341;
                } else {
                  result[0] += 0.004243625887548233;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2118118797363109373) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.003987579153968273;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347230000000001704) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1572954101779138469) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05655000000000000998) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06845150950446143856) ) ) {
                      result[0] += 0.004170605132833056;
                    } else {
                      result[0] += -0.0012128931500012536;
                    }
                  } else {
                    result[0] += -0.007474233874555887;
                  }
                } else {
                  result[0] += 0.0026125412122263254;
                }
              } else {
                result[0] += 0.00596145381796762;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04185000000000000525) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.00779582399496823;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4126257761330971996) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-355.2188524626326966) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8079557428872498059) ) ) {
              result[0] += 0.0058943538923117095;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1088.019582622902362) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1243193429785608706) ) ) {
                    result[0] += 0.00498910452340421;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6391.930040077767444) ) ) {
                      result[0] += 0.0002702213681363066;
                    } else {
                      result[0] += 0.0027571059461611236;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
                    result[0] += -0.0011730288971201332;
                  } else {
                    result[0] += 0.0020871120987702857;
                  }
                }
              } else {
                result[0] += 0.005287538272581063;
              }
            }
          } else {
            result[0] += 0.00011690509206541983;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4304500000000000548) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8132313610536542337) ) ) {
              result[0] += 0.00677337458906853;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03085000000000000242) ) ) {
                result[0] += 0.0071703783765015155;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                  result[0] += -0.004902199445734675;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
                    result[0] += 0.0033778894278990363;
                  } else {
                    result[0] += -0.0004648952471857038;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3371000000000000663) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0038052862034024357;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1381000000000000283) ) ) {
                  result[0] += -0.001824277399770531;
                } else {
                  result[0] += 0.0009898007594630375;
                }
              }
            } else {
              result[0] += -0.0025779368777557716;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
        result[0] += 0.0012116584926846908;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8132313610536542337) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2596500000000001029) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2081000000000000349) ) ) {
              result[0] += -0.0015007818803942873;
            } else {
              result[0] += 0.0022723769476226388;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2166315049226441858) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7246500000000001274) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)159.4971590909091219) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
                    result[0] += 0.0009310851027198145;
                  } else {
                    result[0] += 0.012339260811742733;
                  }
                } else {
                  result[0] += -0.003117548982519607;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
                  result[0] += -0.005497672314764959;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30909090909091042) ) ) {
                    result[0] += 0.0009043818297590735;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                      result[0] += -0.0032100354574252244;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3184.283198592457211) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6264500000000000624) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2841076982928243955) ) ) {
                      result[0] += -0.001949954103384379;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.003261316580203116;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-31827.96148275736414) ) ) {
                    result[0] += -0.001393467539262511;
                  } else {
                    result[0] += -0.004739506700030831;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4172500000000000653) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.32624113475178262) ) ) {
                      result[0] += -0.005104103842111248;
                    } else {
                      result[0] += -0.0017787905652812805;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.06066176470588758) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.007935253292371871;
                    }
                  } else {
                    result[0] += -0.0028860726423119076;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
            result[0] += -0.003873852903159304;
          } else {
            result[0] += -0.007647266653213268;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2896.940642020843825) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7533620000000000871) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2059541029866850392) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-23408.498900080147) ) ) {
                result[0] += 0.0021070527352378583;
              } else {
                result[0] += 0.012429987561776044;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)103.9546342098412026) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
                  result[0] += -0.0032297600592608366;
                } else {
                  result[0] += 0.006450599771056866;
                }
              } else {
                result[0] += -0.005522070808943654;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.53708791208791595) ) ) {
                  result[0] += 0.004722220318525663;
                } else {
                  result[0] += -0.002655816243975724;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7285500000000001419) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
                    result[0] += 0.003183679143581784;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3787240042526709427) ) ) {
                      result[0] += -0.000898337858881391;
                    } else {
                      result[0] += -0.007356289535018857;
                    }
                  }
                } else {
                  result[0] += -0.012126471199531957;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5890.241073706772113) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3146.277250048707629) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2040413945387017647) ) ) {
                    result[0] += 0.0030040411645403872;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)397.8870711082944922) ) ) {
                      result[0] += 0.001895688691519651;
                    } else {
                      result[0] += -0.005216067350353269;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3191980000000000373) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1805574535561877969) ) ) {
                      result[0] += -0.005377561867875795;
                    } else {
                      result[0] += -0.00041979493401668883;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3540665000000000617) ) ) {
                      result[0] += 0.003464249214317697;
                    } else {
                      result[0] += -0.00020339495460727628;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.50611355962782556) ) ) {
                    result[0] += 0.014226418990342831;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3699670000000000458) ) ) {
                      result[0] += -0.0022235523330437403;
                    } else {
                      result[0] += 0.005887785009751772;
                    }
                  }
                } else {
                  result[0] += -0.004465450120282036;
                }
              }
            }
          }
        } else {
          result[0] += 0.009419142236443856;
        }
      } else {
        result[0] += -0.011553214505194443;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4550085000000000934) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7250000000000000888) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240695900668028262) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.382558990305469582) ) ) {
              result[0] += -0.002294291398314684;
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += -0.00358588805322197;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)99.74719574087761487) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.985999416642361126) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0050287315194386065;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1810.080069446367361) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.003269922345253502;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6969500000000000695) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4126257761330971996) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4791.91395952250241) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2292876471803670657) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.44505130751407052) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.67902930402930473) ) ) {
                      result[0] += -0.0005779767219870265;
                    } else {
                      result[0] += 0.007144222422336093;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6519500000000001405) ) ) {
                      result[0] += -0.0060561963509471045;
                    } else {
                      result[0] += 0.0016613509549361467;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
                    result[0] += -0.00015839847469188007;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
                      result[0] += 0.011112216439339856;
                    } else {
                      result[0] += 0.00234342492007197;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
                  result[0] += 0.0029463688522373553;
                } else {
                  result[0] += 0.01537422189293459;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.88883399209486491) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)829.040359399005979) ) ) {
                      result[0] += 0.007227943426807034;
                    } else {
                      result[0] += 0.0015231106801565854;
                    }
                  } else {
                    result[0] += -0.004156329141619046;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
                      result[0] += -0.0041356015185586;
                    } else {
                      result[0] += 0.0009521623588051063;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2251.557754300879878) ) ) {
                      result[0] += 0.004509864003341276;
                    } else {
                      result[0] += 6.0324245567021586e-05;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5296500000000000652) ) ) {
                  result[0] += 0.0010856464606063205;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07895000000000000628) ) ) {
                    result[0] += -0.012286089375671968;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
                      result[0] += 0.0002822442619560049;
                    } else {
                      result[0] += -0.0072459742874429614;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2461167842040226927) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1435407080639670985) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1332400080645387008) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.72873563218391979) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05921603206594685392) ) ) {
                      result[0] += 0.0013924569245686738;
                    } else {
                      result[0] += 0.011259689162063524;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06446597211275277572) ) ) {
                      result[0] += 0.0035540413082137128;
                    } else {
                      result[0] += -0.004501847589799967;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02895000000000000351) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8237500000000000933) ) ) {
                      result[0] += -0.002487671320532159;
                    } else {
                      result[0] += -0.008811523241443315;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1185548504618808702) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.005702265756103134;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7759500000000000286) ) ) {
                  result[0] += 0.0009557936008151036;
                } else {
                  result[0] += 0.008693247472500307;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1658.751546212527273) ) ) {
                  result[0] += 0.005644456696169769;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2428.189675971083943) ) ) {
                    result[0] += -0.008031519845005766;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66217532467532791) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.006075838300858981;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7942500000000002336) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4190.954657040626444) ) ) {
                      result[0] += -0.004203611196802481;
                    } else {
                      result[0] += -0.013384656498016699;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
                      result[0] += -0.0020406412632240018;
                    } else {
                      result[0] += 0.0003460863079879678;
                    }
                  }
                } else {
                  result[0] += 0.002794345682106435;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1940000000000000335) ) ) {
              result[0] += -0.005078040078232159;
            } else {
              result[0] += 0.005056855454997086;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4507.9565926974592) ) ) {
              result[0] += -0.001639122869459268;
            } else {
              result[0] += -0.007360626107909364;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
        result[0] += 0.003877389511957062;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
              result[0] += -0.0015134051954014001;
            } else {
              result[0] += 0.005598744282985899;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-45582.08751746388589) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1431610000000000105) ) ) {
                  result[0] += -0.00302532928220537;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1511569171003262213) ) ) {
                      result[0] += 0.004861064094710096;
                    } else {
                      result[0] += -0.0026338729633398985;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.04232804232805165) ) ) {
                      result[0] += 0.00863723945647018;
                    } else {
                      result[0] += 0.0017976627498453403;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07519656588417543419) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904340000000000588) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13660.08107385601579) ) ) {
                      result[0] += -0.001184572482003947;
                    } else {
                      result[0] += -0.005131979972819669;
                    }
                  } else {
                    result[0] += -0.010476890857114108;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7320592709375011164) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5832000000000000517) ) ) {
                      result[0] += -0.0007164620161766645;
                    } else {
                      result[0] += -0.0022245647795930855;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                      result[0] += -0.002346861525110099;
                    } else {
                      result[0] += -0.006615410284335833;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5250000000000001332) ) ) {
                result[0] += -0.002720192320963909;
              } else {
                result[0] += -0.005028977914425493;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-25494.69112858862718) ) ) {
            result[0] += 0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
              result[0] += -0.003168695172083494;
            } else {
              result[0] += -0.007842792773166294;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93867243867244454) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6850000000000001643) ) ) {
          result[0] += -0.004363349771697692;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.35781818181818537) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.294700000000000073) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.086028323821603081) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.512751786874594107) ) ) {
                      result[0] += 0.005698846698323608;
                    } else {
                      result[0] += 0.00010263455570138045;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
                      result[0] += 0.0035694672906279156;
                    } else {
                      result[0] += 0.011709762550848872;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6199252650020550259) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000000000000369) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.002341520572088926;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
                      result[0] += 0.0005716644988656527;
                    } else {
                      result[0] += -0.008226531511995804;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.004450000000000001697) ) ) {
                    result[0] += -0.005773141767205699;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3266.861991663331082) ) ) {
                      result[0] += 0.002218170553460431;
                    } else {
                      result[0] += -0.0010391415028386914;
                    }
                  }
                } else {
                  result[0] += 0.005353334592296781;
                }
              }
            } else {
              result[0] += 0.007925609041337203;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9706500000000001238) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8753585000000000393) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4204754184957832375) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.080932372247844) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
                      result[0] += -0.0008575642046378211;
                    } else {
                      result[0] += 0.003867632392092789;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
                      result[0] += 0.0037928637813835963;
                    } else {
                      result[0] += 0.0061618872405965345;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6984108188956750229) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5528205492927561471) ) ) {
                      result[0] += 0.0011404664287449583;
                    } else {
                      result[0] += -0.0004217772647553782;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9631328576282706111) ) ) {
                      result[0] += 0.0053530899129982;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01870773182499101475) ) ) {
                  result[0] += 0.0016198965996493913;
                } else {
                  result[0] += 0.007899478968656838;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02129570787603783308) ) ) {
                result[0] += 0.0037702866062662237;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.88883399209486491) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01027238991612000781) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.002809957877051797;
                  }
                } else {
                  result[0] += 0.0008582305669330638;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.007889998068199029;
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16362.01564670949665) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.45584415584416149) ) ) {
            result[0] += 0.00021295142324898478;
          } else {
            result[0] += -0.0057859069453829026;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3742502868321948561) ) ) {
            result[0] += -0.0005113717078518169;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7689.919473708750047) ) ) {
              result[0] += 0.0015784391376631331;
            } else {
              result[0] += 0.00913064150596891;
            }
          }
        }
      } else {
        result[0] += -0.005263317904938586;
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06446597211275277572) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02030850352529866079) ) ) {
          result[0] += -0.003979328277300223;
        } else {
          result[0] += 0.0042964954054770695;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1311.833829054160333) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8250000000000000666) ) ) {
            result[0] += -0.0011330000058206733;
          } else {
            result[0] += -0.009242780057274726;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6850000000000001643) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.07500000000000002498) ) ) {
                result[0] += -0.003121790153744252;
              } else {
                result[0] += 0.0012344637862461054;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1031000000000000111) ) ) {
                result[0] += -0.0007280207546776784;
              } else {
                result[0] += -0.008039164771688121;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.0032700899495952266;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.028991596638655803) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9606451612903227355) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4401670142345356918) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5159500000000001307) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0045307346305224925;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03619820782110486773) ) ) {
                result[0] += -9.058327825715005e-05;
              } else {
                result[0] += 0.0015122724862904075;
              }
            }
          } else {
            result[0] += 0.005984322530420307;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.742610837438423932) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1206.163682551244392) ) ) {
              result[0] += 0.002330309841496647;
            } else {
              result[0] += -0.001630687792587354;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6199606872203474728) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.485097903309652079) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.414688759516345984) ) ) {
                  result[0] += -0.0006655939272255211;
                } else {
                  result[0] += 0.0006954543321784152;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6189.910138631900736) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.34436758893280839) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.830018761726079468) ) ) {
                      result[0] += 0.002109085924236147;
                    } else {
                      result[0] += 0.0038407196294835844;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                      result[0] += -0.0020831810495235887;
                    } else {
                      result[0] += 0.004372863373170503;
                    }
                  }
                }
              }
            } else {
              result[0] += 0.006582674520328888;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)118.0299834287672098) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.117150000000000018) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.646068859198356105) ) ) {
              result[0] += -0.0025640704251053354;
            } else {
              result[0] += -0.012067542881572668;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3.295836866004294041) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.15450928381962914) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.005143496317463387;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.294700000000000073) ) ) {
                result[0] += 0.008764071326040375;
              } else {
                result[0] += 0.0008108552994370329;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7092500000000001581) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.257490756088232242) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6290.027305551750032) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5354000000000000981) ) ) {
                    result[0] += 0.0013521718582067625;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001450000000000000334) ) ) {
                      result[0] += 0.002233602848245452;
                    } else {
                      result[0] += -0.00031792460120632705;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.212912087912088488) ) ) {
                      result[0] += 0.0008623996060290204;
                    } else {
                      result[0] += 0.004808402733986351;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4286285800485598041) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.886045828437135086) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6441500000000001114) ) ) {
                      result[0] += 0.006714594635182664;
                    } else {
                      result[0] += 0.0019019378798296551;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.86754385964912473) ) ) {
                      result[0] += 0.0004672375078436222;
                    } else {
                      result[0] += 0.006255467853648224;
                    }
                  } else {
                    result[0] += -0.006136557735879333;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1506500000000000339) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.86905594405594577) ) ) {
                  result[0] += 0.0036541898713226455;
                } else {
                  result[0] += 0.009888819907471485;
                }
              } else {
                result[0] += -7.570593162700989e-05;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6672.266741891098718) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.0281746031746124) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9381000000000000449) ) ) {
                      result[0] += 0.0016166898510718017;
                    } else {
                      result[0] += -0.0028410437910141918;
                    }
                  } else {
                    result[0] += -0.0027535025339221254;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4461.556953086569592) ) ) {
                    result[0] += 0.003450724880654689;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
                      result[0] += -0.009568287540591016;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2478.891438747010852) ) ) {
                  result[0] += -0.008829469154286673;
                } else {
                  result[0] += -0.00245524108121127;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04618346993186531885) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01634999999999999995) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8801500000000000989) ) ) {
                    result[0] += 0.002546591253677963;
                  } else {
                    result[0] += -0.0013317116361432327;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.29705882352941515) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.06168384879725863) ) ) {
                      result[0] += 0.004767130424326567;
                    } else {
                      result[0] += 0.009896391944039273;
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
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.67607313195548535) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.47150997150997398) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.796551724137932737) ) ) {
                  result[0] += 0.0011940428089227866;
                } else {
                  result[0] += 0.00751971913293933;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3488086661974699187) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.93082137161084688) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07519656588417543419) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.006829381157533016;
                  }
                }
              } else {
                result[0] += -0.005587307927877011;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
                result[0] += 0.010608077154569299;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2882292173067574903) ) ) {
                  result[0] += 0.005008691418084062;
                } else {
                  result[0] += -0.00838185541094573;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3781.451601085575476) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
                    result[0] += -0.009728608121858181;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.09500000000000001499) ) ) {
                      result[0] += -0.0008874950116059594;
                    } else {
                      result[0] += -0.004298004850030021;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.158598193308449209) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1784550515539286286) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0058973450950999115;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2508523744426000568) ) ) {
                      result[0] += 0.00776460202531227;
                    } else {
                      result[0] += -0.0006179742014286676;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1127211429752079802) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6574.126053108660017) ) ) {
                      result[0] += -0.005339141298524949;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2982875000000000387) ) ) {
                      result[0] += -0.00036132255870809153;
                    } else {
                      result[0] += 0.0033260764500433588;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                    result[0] += 0.0033937196288554403;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)507.68014339146265) ) ) {
                      result[0] += 0.000177778452275273;
                    } else {
                      result[0] += -0.0063794896554095525;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += -0.006871781710928066;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
          result[0] += 0.0026255179939961284;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78888888888889497) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2182000000000000328) ) ) {
              result[0] += -0.0013335313416137067;
            } else {
              result[0] += -0.005625549146978244;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)113.0060386473430043) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)100.6047495120364488) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1647458771900037477) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.62645348837209447) ) ) {
                      result[0] += -0.005163249113335301;
                    } else {
                      result[0] += 0.0007139736179647445;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2304500000000000159) ) ) {
                      result[0] += -0.004111836765925293;
                    } else {
                      result[0] += -0.001699232868137358;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2888715000000000588) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2444518245208232299) ) ) {
                      result[0] += -0.0034089805142845583;
                    } else {
                      result[0] += -0.0015408552978413805;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
                      result[0] += 0.002628912571360491;
                    } else {
                      result[0] += -0.0013539263310453982;
                    }
                  }
                }
              } else {
                result[0] += 0.0019731770053889753;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.197938500000000045) ) ) {
                result[0] += -0.002712259800389706;
              } else {
                result[0] += -0.005355817337893415;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7533620000000000871) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1119.109071009208719) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.825750000000000095) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1750.811071603854316) ) ) {
                  result[0] += -0.006745717089409267;
                } else {
                  result[0] += 0.00021787548394116665;
                }
              } else {
                result[0] += -0.007006534170209972;
              }
            } else {
              result[0] += 0.0009249351254027675;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1861530472994430141) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08774088920105922729) ) ) {
                result[0] += -0.003050429039838404;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675530000000000519) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05921603206594685392) ) ) {
                    result[0] += -0.003018154894819476;
                  } else {
                    result[0] += 0.0029555522986611537;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4092500000000000582) ) ) {
                    result[0] += 0.011314516931160647;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1359000000000000485) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3472.845654216908315) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4093.415394671918875) ) ) {
                      result[0] += -0.00506729020725492;
                    } else {
                      result[0] += -0.0003760184313094268;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.647150000000000003) ) ) {
                      result[0] += 0.007230396372208885;
                    } else {
                      result[0] += 5.278610320153301e-05;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6399918775570295759) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6152500000000001856) ) ) {
                      result[0] += 0.0034219715656632495;
                    } else {
                      result[0] += 0.00018837098701265394;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
                      result[0] += 0.0011059519197940792;
                    } else {
                      result[0] += -0.006123114512733942;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
                  result[0] += 0.006655817503881067;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6836000000000000965) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1746784584268683549) ) ) {
                      result[0] += -0.0003381218312004236;
                    } else {
                      result[0] += -0.004502104673648406;
                    }
                  } else {
                    result[0] += 0.0037950408910396687;
                  }
                }
              }
            }
          }
        } else {
          result[0] += -0.0063939788320080074;
        }
      } else {
        result[0] += 0.006385031808867806;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4550085000000000934) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.162893810690548) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
          result[0] += 0.010295238832376704;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6112.637109564428101) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10138.67215128568751) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0069531686349313445;
                  }
                } else {
                  result[0] += 0.0022042681236059585;
                }
              } else {
                result[0] += -0.006229921973934762;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5797500000000000986) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.19793814432989798) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2732877049818078219) ) ) {
                      result[0] += -0.00120643971045886;
                    } else {
                      result[0] += 0.0031448236370661847;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.47150997150997398) ) ) {
                      result[0] += 0.00194946330171235;
                    } else {
                      result[0] += 0.005941407054956208;
                    }
                  }
                } else {
                  result[0] += -0.004532502676013623;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.308777777777778262) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3819320000000000492) ) ) {
                    result[0] += -0.0005170212267404686;
                  } else {
                    result[0] += 0.0033482066632107227;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.30142642642643125) ) ) {
                    result[0] += -0.011725545961389994;
                  } else {
                    result[0] += -0.0012167132978432545;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
              result[0] += 0.00012577315896220985;
            } else {
              result[0] += 0.009812396748127967;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107150000000000023) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.948187489548568796) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1639.070051175312983) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3420950000000000935) ) ) {
                      result[0] += -0.004795197284387405;
                    } else {
                      result[0] += 0.0007417766854203715;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1275.919050802347783) ) ) {
                      result[0] += 0.0017243711515020316;
                    } else {
                      result[0] += 0.007596534598681861;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.982131478334749675) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1850000000000000255) ) ) {
                      result[0] += -5.491304973311086e-06;
                    } else {
                      result[0] += 0.006109893289079385;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                      result[0] += -0.005522879123955765;
                    } else {
                      result[0] += 0.0019932732053317163;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3254789019904610892) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
                    result[0] += 0.004917926858365732;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653589743589744199) ) ) {
                      result[0] += 0.001576560378816807;
                    } else {
                      result[0] += -0.003311121899803433;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.221202854230377888) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.014026951173474774;
                  }
                }
              }
            } else {
              result[0] += -0.006084438924369081;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.34436758893280839) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1187500000000000083) ) ) {
                  result[0] += 0.0006689381313983255;
                } else {
                  result[0] += -0.002380145774001327;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5095115945175783256) ) ) {
                    result[0] += 0.006248375400501843;
                  } else {
                    result[0] += -0.004972349891110268;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6657846984349986563) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1582500000000000295) ) ) {
                      result[0] += 0.006894457396547543;
                    } else {
                      result[0] += -0.0003718374056957072;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
                      result[0] += 0.0022022037719139904;
                    } else {
                      result[0] += 0.009282662688309323;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.00249113235559046;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2962.976412357489153) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3571.445901236788359) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03305000000000000299) ) ) {
                result[0] += 0.001362870225480291;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036930000000000462) ) ) {
                  result[0] += -0.008660269528339481;
                } else {
                  result[0] += -0.0002682797707869017;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2868203899923389977) ) ) {
                result[0] += -0.006005150156610693;
              } else {
                result[0] += -0.01234099753474431;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.45767090620031858) ) ) {
              result[0] += -0.007004701550259046;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5354000000000000981) ) ) {
                result[0] += 0.00758457186264267;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1595.83134361526254) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2888715000000000588) ) ) {
                      result[0] += -0.00209712364634279;
                    } else {
                      result[0] += -0.00899005417044703;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1185548504618808702) ) ) {
                    result[0] += -0.0038817989996831202;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
                      result[0] += -0.0007625723660999995;
                    } else {
                      result[0] += 0.005368844352174396;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934555000000000302) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5150000000000001243) ) ) {
            result[0] += -0.0023748476393645095;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2882292173067574903) ) ) {
              result[0] += -0.0030995172428364874;
            } else {
              result[0] += 0.004866350392096162;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
              result[0] += -0.00938172385589466;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.60681818181819125) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.006151387076391454;
              }
            }
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3755158646863254179) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9343500000000001249) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2019559617197731194) ) ) {
                  result[0] += -0.0025978497623953675;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.30500894454384309) ) ) {
                      result[0] += -6.675298495950307e-05;
                    } else {
                      result[0] += -0.0022966582884275544;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11144.16520893778397) ) ) {
                      result[0] += -0.0017813019030384855;
                    } else {
                      result[0] += 0.0023331179313344033;
                    }
                  }
                }
              } else {
                result[0] += 0.00023295483752226482;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7560499999999999998) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
                  result[0] += 0.011622094667026408;
                } else {
                  result[0] += 0.0025512754435089817;
                }
              } else {
                result[0] += -0.003948917426875963;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2386968934588671598) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                result[0] += -0.0023561675831532017;
              } else {
                result[0] += -0.006970003357411067;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596939932693950182) ) ) {
                  result[0] += 8.455306749180918e-05;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.86758263639984179) ) ) {
                      result[0] += 0.0001296221868458846;
                    } else {
                      result[0] += -0.002330991075829223;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.22431865828092867) ) ) {
                      result[0] += -0.0063240824064436435;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0.0009859080001337344;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)43305.24755796225509) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8628500000000002279) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2313484523829452688) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8457500000000001128) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7143.768529324467636) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.006429619539546723;
                    }
                  } else {
                    result[0] += 0.005350740218276575;
                  }
                } else {
                  result[0] += 0.007127540958566465;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2924659694118884601) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2020500000000000351) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9820.391414902553151) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.002877164203550836;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.69615384615386233) ) ) {
                      result[0] += -0.01161132651684935;
                    } else {
                      result[0] += -0.0019516429242263946;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.84219858156028593) ) ) {
                      result[0] += -0.0034960487919697735;
                    } else {
                      result[0] += 0.0009041389491304443;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1395500000000000351) ) ) {
                      result[0] += 0.007364103514068563;
                    } else {
                      result[0] += -0.0005632495935529433;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
                result[0] += -0.00017635840236309778;
              } else {
                result[0] += -0.007188347789173527;
              }
            }
          } else {
            result[0] += 0.004372356565879001;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
        result[0] += -0.001150340009229506;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3060106677825033539) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4138499999999999956) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)482.0848310656759281) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.852450000000000041) ) ) {
                result[0] += 0.004197837510434954;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1088.019582622902362) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.21064381391329512) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8849500000000000144) ) ) {
                      result[0] += 0.0016711660664325927;
                    } else {
                      result[0] += 0.0067790587525723;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.31475748194014663) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00286876433544978;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-985.1868867154022382) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0025424614863762225;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          } else {
            result[0] += -0.0009163887339976474;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8753585000000000393) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8220058538128890424) ) ) {
                result[0] += 0.006770553045965242;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
                  result[0] += 1.670077955714865e-07;
                } else {
                  result[0] += 0.0031055147417711256;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-626.6516628632514312) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.835491146007350638) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0003739982242967582;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.036375661375661839) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.028991596638655803) ) ) {
                      result[0] += 0.0019252285251936333;
                    } else {
                      result[0] += 0.00014459155022902156;
                    }
                  } else {
                    result[0] += 0.004424715449108546;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.512751786874594107) ) ) {
                  result[0] += 0.00022796077153201217;
                } else {
                  result[0] += -0.005205839322361781;
                }
              }
            }
          } else {
            result[0] += 0.00671028764430685;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.84693877551020691) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13476.57528643532896) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1369.851320094411903) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1523500000000000132) ) ) {
                      result[0] += 0.0010648903577040452;
                    } else {
                      result[0] += 0.004036160475322666;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17778753292362026) ) ) {
                      result[0] += 0.0008352865669698773;
                    } else {
                      result[0] += -0.00211335766826322;
                    }
                  }
                } else {
                  result[0] += 0.008601301525333086;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01634999999999999995) ) ) {
                  result[0] += -0.007292941709816377;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                    result[0] += 0.005451535650938508;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.582324042174648393) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0030287963536097654;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.011348298912444384;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.04880952380953119) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5924805000000000765) ) ) {
                  result[0] += 0.008656060907388857;
                } else {
                  result[0] += 0.002665505763413792;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11745.44574006947005) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.006608558335181171;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-67546.57382663110911) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)193.4596889952153163) ) ) {
              result[0] += 0.0022330522240794713;
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
                result[0] += -0.011041095076536826;
              } else {
                result[0] += -0.0008164306174344523;
              }
            }
          }
        }
      } else {
        result[0] += -0.009288955370459172;
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3305835000000000856) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.120050465838510867) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2986.391455690082239) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
            result[0] += 0.004144857948273104;
          } else {
            result[0] += 0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.638401428543058258) ) ) {
              result[0] += 0.0024671603763509694;
            } else {
              result[0] += -0.0018294002759834643;
            }
          } else {
            result[0] += -0.006401915942456258;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1623500000000000221) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2428.189675971083943) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2668555000000000788) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2253645772879973308) ) ) {
                result[0] += -0.0012625101844244758;
              } else {
                result[0] += -0.006544995065208783;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057365000000000221) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2412.226788823968036) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.003541201509725171;
                }
              } else {
                result[0] += -0.004193924906221317;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04590766326201999731) ) ) {
                result[0] += -0.002586902648173088;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.138110787595931539) ) ) {
                  result[0] += 0.006659295873898287;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02895000000000000351) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0024861145134660308;
                  }
                }
              }
            } else {
              result[0] += -0.003437585740890685;
            }
          }
        } else {
          result[0] += -0.006757992285571596;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4800849858356940891) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8650000000000001021) ) ) {
          result[0] += -0.002512829644931725;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.890916808149406769) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1642951312239392114) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.94804318488530015) ) ) {
                      result[0] += 0.0039704346433341664;
                    } else {
                      result[0] += 0.0020886633973872006;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
                      result[0] += 0.00839670525955174;
                    } else {
                      result[0] += 0.0009678705361825115;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5741900000000000892) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9083500000000001018) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.011719206048114862;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7689.919473708750047) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.828201000000000076) ) ) {
                      result[0] += -0.0017117522801519047;
                    } else {
                      result[0] += 0.003496905445638095;
                    }
                  } else {
                    result[0] += 0.004784451952019096;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7607500000000001483) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5522500000000001297) ) ) {
                  result[0] += 0.006121195805335152;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2721073006283602491) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1010493287512936184) ) ) {
                      result[0] += 0.0004050523898678103;
                    } else {
                      result[0] += 0.005320459197437375;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003250000000000000718) ) ) {
                      result[0] += -0.0007755548448025705;
                    } else {
                      result[0] += 0.0016756629362579;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2053.868197878035971) ) ) {
                      result[0] += -0.002130218508309774;
                    } else {
                      result[0] += 0.001078143103868653;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1911254520728568607) ) ) {
                      result[0] += -0.00039045378924955164;
                    } else {
                      result[0] += -0.013597686296162849;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3227809997884624194) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1784550515539286286) ) ) {
                      result[0] += -0.002973571119278208;
                    } else {
                      result[0] += 0.002636387074510878;
                    }
                  } else {
                    result[0] += -0.002426692760765475;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
              result[0] += 0.008413678937664704;
            } else {
              result[0] += 0.00044552266731542385;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.7697158305976026238) ) ) {
          result[0] += 0.004809892179609276;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.007730079668392659;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.003565928799223588;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2257766530001369121) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869734242044373551) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.004744343237157405;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3106.972830756585154) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.563301282051282826) ) ) {
                      result[0] += 0.0021841089570409722;
                    } else {
                      result[0] += -0.0007815733074797098;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.091810344827586654) ) ) {
                      result[0] += -0.0007803745946667215;
                    } else {
                      result[0] += -0.006310762098818804;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289274051889615802) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5702500000000001457) ) ) {
                    result[0] += 0.003029513286006691;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.606377583365031558) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)572.059826422058336) ) ) {
                      result[0] += 0.0009127388701607904;
                    } else {
                      result[0] += -0.000446144847281279;
                    }
                  } else {
                    result[0] += -0.00461298583756067;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-355.2188524626326966) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3571.445901236788359) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)739.2431776973787692) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0031631061859712516;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
                      result[0] += 0.0057907977117939045;
                    } else {
                      result[0] += 0.0020833044976524156;
                    }
                  }
                } else {
                  result[0] += -0.0008430877090135289;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09430950000000000444) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05517050000000000426) ) ) {
              result[0] += -0.0020846763004058653;
            } else {
              result[0] += 0.0003866619111036814;
            }
          } else {
            result[0] += -0.003450308020937807;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11908.89586363036506) ) ) {
            result[0] += 0.00020089079010981024;
          } else {
            result[0] += 0.009030051758954714;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2164415000000000366) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
              result[0] += 0.000673571168480566;
            } else {
              result[0] += -0.004287623673456387;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
              result[0] += -0.0014810862936590371;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)642.537947836085209) ) ) {
                result[0] += -0.0033668096349860543;
              } else {
                result[0] += -0.014770765445342537;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4391.076444984862064) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.007648051979813226;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2484845401189077485) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1010493287512936184) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07945677231391518047) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
                    result[0] += -0.001910870463156723;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9305500000000000993) ) ) {
                      result[0] += -1.8548540637783734e-05;
                    } else {
                      result[0] += 0.00036149797053493585;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5950000000000000844) ) ) {
                    result[0] += -0.0019404377061606611;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.10905271199389688) ) ) {
                      result[0] += -0.0022358537889511343;
                    } else {
                      result[0] += -0.007878862279597052;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9150000000000001465) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.857800000000000118) ) ) {
                      result[0] += -0.0017462667213386262;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0036528452503896388;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7534500000000000641) ) ) {
                    result[0] += 0.011061834075501223;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3042628804014196331) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01634999999999999995) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7050000000000000711) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.196750000000000036) ) ) {
                      result[0] += -0.002562834163609346;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5402301307847082734) ) ) {
                      result[0] += -0.00476387877674305;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.8232142857142879) ) ) {
                  result[0] += 0.005796565544001512;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4231.908399006179934) ) ) {
                      result[0] += -0.0026909406172850705;
                    } else {
                      result[0] += -0.0005953068208248489;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
                      result[0] += -0.0009366336256036204;
                    } else {
                      result[0] += 0.003029570867473523;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58257918552036436) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9566.137358918122118) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2158399509024095386) ) ) {
                      result[0] += 0.0011788463770286695;
                    } else {
                      result[0] += -0.0029801542649008444;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3913.927573521703835) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.004502186415058192;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
                      result[0] += -0.0016175057886471207;
                    } else {
                      result[0] += 0.007423532507146912;
                    }
                  } else {
                    result[0] += -0.0037873300335136894;
                  }
                }
              } else {
                result[0] += 0.006397073624837382;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2038.087406351012987) ) ) {
                  result[0] += 0.00335030778514978;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2508523744426000568) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7942500000000002336) ) ) {
                      result[0] += 0.0052530646897900055;
                    } else {
                      result[0] += -0.002814880202351198;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.00714285714286333) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.009476368151230919;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3029155602761551269) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2772.548050562498702) ) ) {
                    result[0] += 0.010081887736725458;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.90625000000000711) ) ) {
                      result[0] += 0.003993554644624542;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.036172945205479756) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7320592709375011164) ) ) {
                      result[0] += 0.0039929152297267494;
                    } else {
                      result[0] += -0.0046165807574609415;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5832000000000000517) ) ) {
                      result[0] += 0.00013600514744242217;
                    } else {
                      result[0] += -0.003774834499429924;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6858500000000001817) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12333.58675317392408) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.005290127076120855;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00378787878788067) ) ) {
                  result[0] += 0.008082380340610085;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
                result[0] += 0.010118112217929963;
              } else {
                result[0] += 0.0024772754029291394;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14660.96176939566249) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.83232931726908177) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.64312313803376853) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17639.05176736719659) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-26216.36240703851217) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7148500000000000965) ) ) {
                      result[0] += -0.0023027796586136875;
                    } else {
                      result[0] += 0.0021804666403511543;
                    }
                  } else {
                    result[0] += 0.005470348267911611;
                  }
                } else {
                  result[0] += -0.002081707861420537;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4122825000000000517) ) ) {
                  result[0] += 0.00931405046520461;
                } else {
                  result[0] += 0.0026634981649999437;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.45361298224128177) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5801.456541730448407) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
                    result[0] += 0.0004424136373842096;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3922500000000000431) ) ) {
                      result[0] += -0.00768142724146426;
                    } else {
                      result[0] += -0.0005837976795531357;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.351912500000000017) ) ) {
                    result[0] += 0.0003822328179654218;
                  } else {
                    result[0] += 0.008662706643282881;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2292876471803670657) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7246500000000001274) ) ) {
                      result[0] += 0.0027860016251338633;
                    } else {
                      result[0] += -0.002677652816105773;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
                      result[0] += -0.00450657918452407;
                    } else {
                      result[0] += 0.00018117850562953698;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.16869918699187636) ) ) {
                    result[0] += -0.002294157609463774;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.009381747969584157;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
              result[0] += 0.005043074554281136;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1040.704691140170553) ) ) {
                result[0] += -0.0071092464428084015;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4706500000000000683) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.59010642135642144) ) ) {
                    result[0] += 0.009525533018024206;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8461.096702489729068) ) ) {
                      result[0] += -0.004569119836718168;
                    } else {
                      result[0] += 0.0016308764665369313;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.351912500000000017) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                      result[0] += -0.004883940116847852;
                    } else {
                      result[0] += 4.869331955019598e-05;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.7332126398946883) ) ) {
                      result[0] += -0.006050893690863711;
                    } else {
                      result[0] += 0.00010422341192467268;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
          result[0] += 0;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
              result[0] += -0.0036673807168410137;
            } else {
              result[0] += -0.011988777094161128;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.005559651353770807;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
              result[0] += -0.0031373820243640175;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.481489856570616936) ) ) {
                result[0] += 0.0012853610483657312;
              } else {
                result[0] += 0;
              }
            }
          } else {
            result[0] += 0.008731379464917529;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.831026909314261597) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
                result[0] += -0.001766070088079484;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6199252650020550259) ) ) {
                  result[0] += 0.006092814096029255;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              result[0] += -0.007234185452630672;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8250000000000000666) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1544380000000000197) ) ) {
                result[0] += -0.0029669961440628246;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += -0.008229520915592118;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1879500000000000337) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3192380828539810866) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2178.807099952505723) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7166500000000001203) ) ) {
                  result[0] += 0.005628234758196263;
                } else {
                  result[0] += -0.0002089968151936244;
                }
              } else {
                result[0] += 0.009093258906817765;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2801060000000000771) ) ) {
                result[0] += -0.0034035409276829665;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1891267783217778775) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8150000000000000577) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.870650000000000035) ) ) {
                      result[0] += 0.007450779783502632;
                    } else {
                      result[0] += 0.00020435985742043664;
                    }
                  }
                } else {
                  result[0] += -0.002535949025045448;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2986.391455690082239) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3332.614804015349819) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
                    result[0] += -0.0016676069762670202;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.84108946608946944) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.008222091264669938;
                    }
                  }
                } else {
                  result[0] += -0.0032683606349540773;
                }
              } else {
                result[0] += 0.008505456896065973;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2839320000000000177) ) ) {
                  result[0] += -0.002539150187346793;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5885500000000001286) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.290200000000000069) ) ) {
                      result[0] += -0.007202506475143134;
                    } else {
                      result[0] += -0.0011207562466652586;
                    }
                  } else {
                    result[0] += -0.011154832993318466;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
                  result[0] += -0.0033298857604263186;
                } else {
                  result[0] += 0.003066545392417202;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3576884733354243617) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.363139534883722526) ) ) {
              result[0] += -0.002818143839552506;
            } else {
              result[0] += 0.002914096355735925;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2660000000000000697) ) ) {
              result[0] += 0.008393429922585096;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7845442775498493448) ) ) {
                result[0] += 0.005733197297200842;
              } else {
                result[0] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.536038961038963535) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6519500000000001405) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.00977214229868467;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
            result[0] += 0.006267824711824653;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.18465909090909172) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
                result[0] += -0.006837937483574937;
              } else {
                result[0] += -0.002542009957381482;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.23959827833572689) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2534500000000000641) ) ) {
                  result[0] += 0.007333473493271181;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2741000000000000658) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004293516149123464;
                    }
                  } else {
                    result[0] += 0.004151658315736208;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4120.477146499230912) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                    result[0] += 0.002225148849111866;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4148169003269751576) ) ) {
                      result[0] += -0.0007132018870409869;
                    } else {
                      result[0] += -0.002437508082903455;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4844.968018580479111) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
                      result[0] += -0.001770464929885914;
                    } else {
                      result[0] += 0.004290448049109081;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5192.030210470990824) ) ) {
                      result[0] += -0.0039997879730162954;
                    } else {
                      result[0] += -0.0009993188352911484;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += -0.006511169320437826;
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.486100386100386306) ) ) {
          result[0] += 0.0043086522181895286;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.94804318488530015) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7450000000000001066) ) ) {
              result[0] += -0.0008493148778226527;
            } else {
              result[0] += -0.0056856824520690715;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1036061969132185817) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.243379790940767116) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.00381984093083445;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4093.415394671918875) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.004028087667245938;
              }
            }
          }
        }
      } else {
        result[0] += -0.007908097552381222;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4082770000000000565) ) ) {
              result[0] += 0.01566205877353437;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9842100889221309101) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9023689374824783727) ) ) {
                    result[0] += -0.001475086246050819;
                  } else {
                    result[0] += 0.004518001361590963;
                  }
                } else {
                  result[0] += -0.0033120662584431664;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3701000000000000401) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6133040000000001823) ) ) {
                    result[0] += 0.006837255554795405;
                  } else {
                    result[0] += 0.0005478618106585393;
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8769200928108228377) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4800849858356940891) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4770315000000000527) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8461.096702489729068) ) ) {
                      result[0] += 0.002032547934529986;
                    } else {
                      result[0] += 0.010062193382096001;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                      result[0] += -0.0029872844132452286;
                    } else {
                      result[0] += 0.005073918762866399;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13833.51142176279791) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
                      result[0] += 0.0008105125446751862;
                    } else {
                      result[0] += -0.0029487578493055545;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3266000000000000569) ) ) {
                      result[0] += 0.005358587972311054;
                    } else {
                      result[0] += -7.084508382417359e-05;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3871448717291648411) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
                      result[0] += 0.0007584446722375159;
                    } else {
                      result[0] += -0.003609469459682507;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.87456103385307138) ) ) {
                      result[0] += -0.00012598568875198492;
                    } else {
                      result[0] += 0.007787241894676095;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3266.861991663331082) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4527450000000000641) ) ) {
                      result[0] += -0.0024318668808352303;
                    } else {
                      result[0] += -0.007713432171635463;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4415.807239953120188) ) ) {
                      result[0] += 0.0042531046783804045;
                    } else {
                      result[0] += -0.0014273809798688755;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.005955399051892805;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.448286052009456704) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2053.868197878035971) ) ) {
              result[0] += 0.006165747636801254;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.091810344827586654) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.006539092045750868;
              }
            }
          } else {
            result[0] += -0.010636557694219784;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9791500000000000759) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4204754184957832375) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6656.245527964973007) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
                      result[0] += -0.00048385112930517484;
                    } else {
                      result[0] += 0.001766414600080671;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.94804318488530015) ) ) {
                      result[0] += 0.0029902568043778765;
                    } else {
                      result[0] += -8.473771661808242e-07;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9820.391414902553151) ) ) {
                    result[0] += 0.002590452571706386;
                  } else {
                    result[0] += 0.009720074897440213;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6549412391405855516) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
                    result[0] += -0.0024539777134931803;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2190499999999999947) ) ) {
                      result[0] += 0.0018241641044861433;
                    } else {
                      result[0] += -0.00088521202752228;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8491407799074687235) ) ) {
                    result[0] += 0.0043177696964063;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1667500000000000371) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0017325016806667207;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03931893328124715786) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3514705882352941457) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0014355841685414743;
                }
              } else {
                result[0] += -0.0010194743408720199;
              }
            }
          } else {
            result[0] += -0.0028207459086202246;
          }
        } else {
          result[0] += 0.006591480420524421;
        }
      }
    }
  }
}

