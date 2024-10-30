
#include "prediction.h"

void predict_unit10(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000000000001438) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006850000000000001053) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2602911804898560555) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.64483714483714571) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-717.0164406190135651) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.567091454272864226) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.00030542292656844915;
              }
            } else {
              result[0] += 0.0027065335966505403;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02640920508781643625) ) ) {
              result[0] += -0.0018770342800483498;
            } else {
              result[0] += 0.0008432645132427956;
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3064.437254561459213) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1331779278199183014) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.115576363876681118) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2556.820004021212753) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2087.634986269159981) ) ) {
                    result[0] += -0.000702690349959582;
                  } else {
                    result[0] += 0.0019063790799050124;
                  }
                } else {
                  result[0] += -0.0022004169895181;
                }
              } else {
                result[0] += -0.005085409156736394;
              }
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5801.456541730448407) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.4495192307692335) ) ) {
                  result[0] += 0.005425447133978476;
                } else {
                  result[0] += 0.0002929816073812362;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.00164592235996301;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.74189814814816657) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10534.50099646399576) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2928.425989978642974) ) ) {
                    result[0] += 0.00039527369970957047;
                  } else {
                    result[0] += -0.0021569110440098358;
                  }
                } else {
                  result[0] += -0.005460425289177666;
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1431610000000000105) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      result[0] += 0.0005438393873789705;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.0015850190138410008;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6189.910138631900736) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.003828145331838009;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4625500000000000722) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6526430887472424169) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
              result[0] += -0.0005376469428549263;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0054288156258306235;
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
              result[0] += -0.0030532066260759477;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.583910433979686783) ) ) {
                result[0] += 0.0011686672656472735;
              } else {
                result[0] += -0.0010719363847748545;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6221500000000000918) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5324000000000000954) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5650000000000000577) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.001748311491025401;
                }
              }
            } else {
              result[0] += 0.0012501676247089462;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1160.815387464434707) ) ) {
                result[0] += -0.005695927202336052;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.036375661375661839) ) ) {
                  result[0] += -0.002267115740452494;
                } else {
                  result[0] += 0.002106870904808213;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
                result[0] += -0.0085631052182804;
              } else {
                result[0] += -0.0015020501304308625;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.433327285921625727) ) ) {
          result[0] += -0.0005523020881761327;
        } else {
          result[0] += -0.006621792959643821;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.496478873239436957) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.0011721898130055385;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09707842318205106569) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2144260000000000332) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.0033388400297152793;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2190711269459436339) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5049000000000000155) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2104742577805706616) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7424500000000001654) ) ) {
                  result[0] += -0.002153089857345234;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00035928961341978973;
                    }
                  } else {
                    result[0] += -0.0009211382849317645;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.115000000000000005) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.004770236681825886;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.33990778688524692) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7759500000000000286) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1127211429752079802) ) ) {
                      result[0] += 0.00020750389081828412;
                    } else {
                      result[0] += 0.006897551186293192;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1010493287512936184) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4505095000000000627) ) ) {
                      result[0] += 0.004096694504160647;
                    } else {
                      result[0] += 0.00011564454145008151;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.041494490358127578) ) ) {
                      result[0] += 0.0013593439063262003;
                    } else {
                      result[0] += -0.0030076579338450286;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1944435586226250512) ) ) {
                  result[0] += 0.007980562531852555;
                } else {
                  result[0] += 0.0017943650180105195;
                }
              }
            }
          } else {
            result[0] += -0.003529569412656767;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0261500000000000031) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5396.80911722399378) ) ) {
                result[0] += -0.004394634310716678;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4190.954657040626444) ) ) {
                  result[0] += 0.0013331864297443945;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.927625836485307165) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0012352072106009335;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2268.305050740483694) ) ) {
                      result[0] += -0.00423865413620309;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015000000000001013) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09570616862526230839) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.02444841979725787) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08706594241544672597) ) ) {
                      result[0] += -0.0006933005080447804;
                    } else {
                      result[0] += 0.000516260892089493;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
                      result[0] += 0.00466618217505463;
                    } else {
                      result[0] += -0.0004936185533508627;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2924659694118884601) ) ) {
                      result[0] += 0.0004971834213353138;
                    } else {
                      result[0] += -0.0004473452640923824;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3018.749278514522757) ) ) {
                      result[0] += -0.0052015994653517375;
                    } else {
                      result[0] += 0.0014230881603668262;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
                  result[0] += -0.0020792096149173157;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.53708791208791595) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2197.409051300025112) ) ) {
                      result[0] += 0.0006485787896185683;
                    } else {
                      result[0] += -0.0011147142916524148;
                    }
                  } else {
                    result[0] += 0.006957848544138883;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02465000000000000524) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.25978407557355609) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1595.83134361526254) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.89818809318378356) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01325000000000000309) ) ) {
                      result[0] += -0.00023445063263982178;
                    } else {
                      result[0] += 0.00388740808246423;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00378787878788067) ) ) {
                      result[0] += -0.004393246650528989;
                    } else {
                      result[0] += 0.0007524656677711033;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
                    result[0] += 0.005971577631148217;
                  } else {
                    result[0] += 0.00047924207810645734;
                  }
                }
              } else {
                result[0] += -0.00044721092096245313;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6814500000000002222) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4795045000000000557) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.34134834110034179) ) ) {
                      result[0] += 0.0008653197636094319;
                    } else {
                      result[0] += -0.0011265655769941189;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.106374722838138425) ) ) {
                      result[0] += -0.0002520714044207794;
                    } else {
                      result[0] += -0.00439660015536947;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08784999999999999754) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4286285800485598041) ) ) {
                      result[0] += 0.004093429924732414;
                    } else {
                      result[0] += 0.0003226565435822836;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                      result[0] += -0.0014984633612282127;
                    } else {
                      result[0] += 0.00015002423448542653;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3016800000000000592) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
                    result[0] += -0.00217642224521439;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.196750000000000036) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0007425140989651467;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3254789019904610892) ) ) {
                    result[0] += 0.0006833262190002315;
                  } else {
                    result[0] += 0.007534149635614085;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03931893328124715786) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3095740000000000713) ) ) {
          result[0] += 0;
        } else {
          result[0] += 0.002407557294489553;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3652.934062563911539) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7319235000000000602) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8992000000000001103) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04590766326201999731) ) ) {
                  result[0] += -0.0027300100191016727;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7891.26025224217392) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.002793023551257922;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08774088920105922729) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
                    result[0] += 0.0011575168373668789;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.005918731589241981;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7925860000000001238) ) ) {
                result[0] += -0.0027558942862260837;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08505000000000001448) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2743.202382171203226) ) ) {
                    result[0] += -0.002886493176926844;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.677320500000000103) ) ) {
                      result[0] += 0.0018219647953003069;
                    } else {
                      result[0] += -0.0013377534796301777;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
                    result[0] += -0.007171796032784176;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                result[0] += 0.003713940868745465;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
                result[0] += -0.007440311036348334;
              } else {
                result[0] += 0;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)16180.09325483776956) ) ) {
                  result[0] += -0.0005630053883066835;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1155500000000000277) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0035260861548396826;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0038328500796388546;
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5250000000000001332) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6871.194738991899612) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.00037604784871817166;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2879000000000001003) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
                    result[0] += -0.007192171781234142;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4487310000000000465) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004042561804313004;
                    }
                  }
                } else {
                  result[0] += -2.466310640742053e-05;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3249.949450539746977) ) ) {
              result[0] += 0.002748743582249316;
            } else {
              result[0] += -0.0005202664443940329;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2632500000000000395) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.463850174216029032) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)456.1989629287657522) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1350000000000000366) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0017511981239139963;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                result[0] += -0.004079538115003152;
              } else {
                result[0] += 0.0007106212765811728;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.875961538461539568) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04145000000000000767) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0053535711237751235;
              }
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.53228021978022078) ) ) {
            result[0] += -0.003306959877383749;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
              result[0] += 0.0027718108208858584;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5568739105774286324) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.12310606060606588) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2257766530001369121) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0048346628444759145;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32109164420485392) ) ) {
                      result[0] += 0.00016692278941633033;
                    } else {
                      result[0] += -0.0005219177633941759;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4880421551248437795) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
                      result[0] += 0.004561425714168577;
                    } else {
                      result[0] += -1.604397246374421e-05;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.30731523378582892) ) ) {
                      result[0] += 0.004608885507114063;
                    } else {
                      result[0] += -0.0001817398133307265;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08115000000000001379) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.70944164869398918) ) ) {
                    result[0] += 0.003604670352402985;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7959100033456006917) ) ) {
                      result[0] += 0.00015373601444021494;
                    } else {
                      result[0] += -0.0011233776474480765;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.602083333333334636) ) ) {
                    result[0] += -0.007497927662813326;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3689500000000000557) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0022764338581810857;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3166171325058890207) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05921603206594685392) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.50675675675677212) ) ) {
                result[0] += -0.0004949039637773657;
              } else {
                result[0] += 0.0011937002197178732;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1829182123299770424) ) ) {
                result[0] += -0.006021114888347419;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.66602316602317302) ) ) {
                result[0] += 7.208093063987488e-05;
              } else {
                result[0] += 0.005896627964923549;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5258.869399769443589) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4061.155400297998767) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1527886010815981133) ) ) {
                      result[0] += 0.002691344084270478;
                    } else {
                      result[0] += -0.0006865966743060132;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
                      result[0] += -0.0035095616903070273;
                    } else {
                      result[0] += 0.002044652872071728;
                    }
                  }
                } else {
                  result[0] += 0.005723201599259103;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.00607985031382988;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7143.768529324467636) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9566.137358918122118) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09385000000000003062) ) ) {
                    result[0] += 0.0006421389131206495;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4133440879166302429) ) ) {
                      result[0] += -0.0046774493193969275;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += 0.004550250946837148;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.49507021931512174) ) ) {
                  result[0] += 0.000700995149359001;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.592954307638647649) ) ) {
                    result[0] += -0.010242794180472914;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.43376557335367671) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004484552387378937;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4059235000000000482) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4666.632518606213125) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4966.396268897347909) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36860497623707644) ) ) {
                      result[0] += -0.0038248254290478116;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0012419981620693978;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.520019664933700887) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6010500000000000842) ) ) {
                      result[0] += 0.004202533003559143;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.0026727550030121844;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9704.877429389192912) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.872261072261072634) ) ) {
                    result[0] += -0.0007485708075375266;
                  } else {
                    result[0] += -0.006601469309063778;
                  }
                }
              }
            }
          } else {
            result[0] += 0.0030935270295094817;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.30306122448979878) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)12336.40759658668867) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45141065830721239) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.901809780515980819) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05855000000000001176) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0028418218911489667;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1055500000000000188) ) ) {
                      result[0] += -0.002182103240271486;
                    } else {
                      result[0] += 0.0009666236617113016;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2197.409051300025112) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.24725274725274815) ) ) {
                      result[0] += -8.274064568277886e-05;
                    } else {
                      result[0] += -0.0036323852114527612;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
                      result[0] += -0.0031927109179172093;
                    } else {
                      result[0] += 0.0007319688295537599;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6493.911283074395214) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3616.651907341595233) ) ) {
                    result[0] += -0.007722303301207176;
                  } else {
                    result[0] += -1.2030467657305393e-05;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73508771929824768) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6014500000000001512) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1667500000000000371) ) ) {
                      result[0] += 0.005691871782559328;
                    } else {
                      result[0] += 0.0007951479877897162;
                    }
                  }
                } else {
                  result[0] += -0.0013159698600416214;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                  result[0] += 0.001948767970657721;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4849410000000000109) ) ) {
                    result[0] += -0.0063724992848731956;
                  } else {
                    result[0] += 0.00014798146897860383;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0053288032388215155;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675530000000000519) ) ) {
            result[0] += -0.005565528533731722;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)18906.11182675446616) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
                result[0] += -0.004523734950636289;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.920300000000000118) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0024011694450599224;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5522500000000001297) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.856934660369398804) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.638401428543058258) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0031899223612610558;
            }
          } else {
            result[0] += 0.002272046897672292;
          }
        } else {
          result[0] += 0.008472843123289681;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3368947088135722523) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.758600000000000052) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9050000000000001377) ) ) {
          result[0] += 0.0007030257361406628;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.811253561253562516) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.14962251201098553) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3305835000000000856) ) ) {
                result[0] += -0.0013621776493371275;
              } else {
                result[0] += -0.009657233724972849;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.34234234234234506) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.002563327618105288;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.90667311411992912) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1233065969357276664) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0939432926751793268) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05367276199100708828) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6680315000000001113) ) ) {
                    result[0] += 0.0026700700206872367;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
                      result[0] += 0.0018086411973196493;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4138499999999999956) ) ) {
                      result[0] += -0.005479322110371652;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0.0044770303407065904;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                result[0] += -0.0043583957602984745;
              } else {
                result[0] += 0.0001300226910167484;
              }
            }
          } else {
            result[0] += 0.005182566940490648;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.003329947517914616;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.692450000000000121) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4524659535674726007) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.56214887640449618) ) ) {
              result[0] += -0.0004097962946694858;
            } else {
              result[0] += 0.003845261031705603;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.01582751744766142) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4033000000000000473) ) ) {
                result[0] += -0.0074761030757109345;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2164415000000000366) ) ) {
                result[0] += 0.0016653922033216476;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.25978407557355609) ) ) {
                  result[0] += 0.000870332191245229;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11994.21414222725798) ) ) {
                    result[0] += -0.0030324575125623018;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2793.363867362420478) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.32834040296925338) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.43959330143541209) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)294.2731973911765522) ) ) {
                      result[0] += -0.0017388024402228178;
                    } else {
                      result[0] += 0.0011457011112269307;
                    }
                  } else {
                    result[0] += -0.0033245406946932647;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7158.326501222521074) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.18541666666667567) ) ) {
                      result[0] += 0.005188129926547157;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0059554080110956545;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11458.24876613496417) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
                      result[0] += -0.0023078413662622056;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)163.9651741293532723) ) ) {
                    result[0] += 0.0026047445535580947;
                  } else {
                    result[0] += -0.0010460685030273251;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2802500000000000546) ) ) {
                result[0] += 0.006504201594722833;
              } else {
                result[0] += 0.0009200342946188287;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8337.708244919273056) ) ) {
              result[0] += 0.0014620334856328865;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2353.687490992878338) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3412.950059462908939) ) ) {
                  result[0] += -0.0009313406849756524;
                } else {
                  result[0] += -0.004117850253443747;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1643.069582787823265) ) ) {
                  result[0] += 0.0029485241196851833;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
                    result[0] += -0.004035677969939276;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                      result[0] += -0.0033660797048095177;
                    } else {
                      result[0] += 0.0015967090887983922;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.080932372247844) ) ) {
            result[0] += -0.0015876746555148493;
          } else {
            result[0] += 0.0009341498746398842;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4478500000000000258) ) ) {
            result[0] += 0.00223799779321891;
          } else {
            result[0] += 0.009684833103105629;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1729.290123274111693) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4589380000000000126) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2412.226788823968036) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1137500000000000178) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06285000000000001696) ) ) {
                result[0] += 0.005914668350392618;
              } else {
                result[0] += -0.00121887374826859;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.34260670731707599) ) ) {
                result[0] += 0.0005440654994857672;
              } else {
                result[0] += 0.0059126258901306145;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7607500000000001483) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.407843474118376681) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6497500000000001608) ) ) {
                  result[0] += -0.004836180228872038;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1407.682258252089468) ) ) {
                    result[0] += -0.0012538075251981398;
                  } else {
                    result[0] += 0.0012436284499545006;
                  }
                }
              } else {
                result[0] += 0.0010145398453288317;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1040.704691140170553) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.94047619047619335) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0044318785830949475;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-824.1224939772984044) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.59053651266766316) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.80442341124203276) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7446860000000000701) ) ) {
                    result[0] += -0.00047149933557148673;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.409826191705387366) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2808462751056642337) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.002176583220177386;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1530.761118312260805) ) ) {
                  result[0] += 0.003637003914404477;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-717.0164406190135651) ) ) {
                result[0] += -0.003124300645362324;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04908122139453940935) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3514705882352941457) ) ) {
                    result[0] += -0.0010725513172214493;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.002243080625214528;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4795045000000000557) ) ) {
              result[0] += -0.004034170075341883;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2316266331274001722) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1527886010815981133) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1729500000000000204) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7852500000000001146) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0013017432624415862;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3064.401422747675497) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.001587281884517315;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.433327285921625727) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1137500000000000178) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0033499942357804995;
                    }
                  }
                }
              } else {
                result[0] += 0.0021692502592347207;
              }
            }
          }
        }
      } else {
        result[0] += 0.00553065743415134;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3304355872301289465) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3332.614804015349819) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.17517875383044057) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.84108946608946944) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1484500000000000264) ) ) {
                result[0] += -0.00350582322861741;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.602083333333334636) ) ) {
                result[0] += -0.011816581191419297;
              } else {
                result[0] += -0.0026940296391539057;
              }
            }
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5354000000000000981) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4697290000000000632) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
                result[0] += 0.0006185115079650551;
              } else {
                result[0] += 0.006021705900889208;
              }
            } else {
              result[0] += -0.0007715581653338825;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.036172945205479756) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5650500000000000522) ) ) {
                result[0] += -0.003308200305113319;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.293597746500404877) ) ) {
                  result[0] += 0.003538245015142409;
                } else {
                  result[0] += -4.879699911295984e-05;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3511342604241804444) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.004305998774918714;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4625500000000000722) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3991483633491397787) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1055500000000000188) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.005650827740913925;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4636414834351271774) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1381000000000000283) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.005384498512086753;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
                      result[0] += -0.00019191635170619274;
                    } else {
                      result[0] += 0.0016765166516926396;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2962.976412357489153) ) ) {
                      result[0] += -0.005176234167123595;
                    } else {
                      result[0] += 0.0003923328135486342;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3533.336699232966112) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
                    result[0] += 0.0018716856720142516;
                  } else {
                    result[0] += 0.008215783412323133;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5568739105774286324) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00575000000000000077) ) ) {
                    result[0] += -0.0009043192137846667;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.872261072261072634) ) ) {
                      result[0] += 0.0052071952097491395;
                    } else {
                      result[0] += 0.0001424174918113093;
                    }
                  }
                } else {
                  result[0] += -0.002325711456359896;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.758730158730161364) ) ) {
              result[0] += -0.0003777077079849888;
            } else {
              result[0] += -0.007200058163096625;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)166.9041125316803402) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6871843434343435364) ) ) {
                  result[0] += 0.001897686808269777;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-156.7600528121663501) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1018.758829443079094) ) ) {
                      result[0] += -0.0006907039931068587;
                    } else {
                      result[0] += 0.0010950139530146736;
                    }
                  } else {
                    result[0] += -0.0025138450290959524;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-355.2188524626326966) ) ) {
                  result[0] += 0.0054778890579776016;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.091810344827586654) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0033111383172140696;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.978768481788676592) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3383000000000001006) ) ) {
                result[0] += 0.0001557263516059177;
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)760.1404084372057923) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)294.2731973911765522) ) ) {
                  result[0] += 0.0014866244572840116;
                } else {
                  result[0] += 0.0061977986935163555;
                }
              } else {
                result[0] += 0.00035219880643015303;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.890916808149406769) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01478534615874095223) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02622543668122271146) ) ) {
            result[0] += 0.0020045913919214285;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8173765000000000613) ) ) {
              result[0] += 0.0012419426752585984;
            } else {
              result[0] += -0.0003569443952845303;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04000638251704572573) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347230000000001704) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3439.063894173575591) ) ) {
                  result[0] += 0.0004538896867522582;
                } else {
                  result[0] += -0.002901297616985826;
                }
              } else {
                result[0] += -0.00635375418255232;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2997.79619999661054) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2276.637434844240943) ) ) {
                  result[0] += 0.00019092153544722463;
                } else {
                  result[0] += -0.003733219428493539;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1456989672773315592) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8347.454337403256432) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04715000000000000441) ) ) {
                      result[0] += 0.0016408731817077304;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.001105828227787979;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2772624818106737554) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03995000000000000634) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
                      result[0] += -0.0003668224432410478;
                    } else {
                      result[0] += 0.0008890526685710649;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.214790059770343017) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0021223849130856762;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5556500000000000883) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4625500000000000722) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0017361523400911845;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4222760000000000402) ) ) {
                      result[0] += -0.0021449004277228206;
                    } else {
                      result[0] += -0.00019523259685921745;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2190711269459436339) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3028.043267225880754) ) ) {
                      result[0] += -0.0063382254249347335;
                    } else {
                      result[0] += -0.0008291787450969678;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
                      result[0] += 0.00037425748182100136;
                    } else {
                      result[0] += -0.0022971251309283954;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7680500000000001215) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4368015000000000092) ) ) {
                      result[0] += -0.0028337398983129323;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.002543417070106813;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.71032126588348277) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4844.968018580479111) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1510.595905575025881) ) ) {
                    result[0] += 0.004239641534102992;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1092270181979944632) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                    result[0] += 0.002873210305922134;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06217697296483003927) ) ) {
                      result[0] += 0.0011256949163943105;
                    } else {
                      result[0] += -0.0016146372142350407;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01975000000000000019) ) ) {
                    result[0] += -0.003909126604459685;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.14277939042090537) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6107500000000001261) ) ) {
              result[0] += -0.003834188307452064;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2556.820004021212753) ) ) {
                result[0] += 0.0036906610786460615;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5349.110830475206967) ) ) {
                  result[0] += -0.0016907784771452207;
                } else {
                  result[0] += 0.000943700744071558;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.029850000000000005) ) ) {
                result[0] += -0.0005643285522538957;
              } else {
                result[0] += -0.0076463518417974035;
              }
            }
          }
        } else {
          result[0] += 0.0002669367310765107;
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1816.551521492987149) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.52228163992870336) ) ) {
          result[0] += -0.005520359130511654;
        } else {
          result[0] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2021.296333301971345) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
              result[0] += 0.003989572550038232;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9250000000000001554) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.003987420289862755;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4849410000000000109) ) ) {
              result[0] += 0.009384846649053992;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2332.481509447223289) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66217532467532791) ) ) {
              result[0] += -0.0049857884117678036;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
                result[0] += 0.002989522337672943;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.702729044834310201) ) ) {
                  result[0] += -0.004145836329757176;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3304355872301289465) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1250500000000000222) ) ) {
                      result[0] += -0.000656729809748794;
                    } else {
                      result[0] += 0.004151935420161752;
                    }
                  } else {
                    result[0] += -0.001617076370150585;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7769885000000001929) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6680315000000001113) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.496478873239436957) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7757.193972373256656) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09065000000000002223) ) ) {
                      result[0] += 0.0015803246661435036;
                    } else {
                      result[0] += -0.0013400598741958002;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1624179537353906966) ) ) {
                      result[0] += 0.0006034650087492238;
                    } else {
                      result[0] += 0.006712299240952987;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.736068111455108642) ) ) {
                    result[0] += -0.0023688876751398;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7320592709375011164) ) ) {
                      result[0] += 0.00016677021454938507;
                    } else {
                      result[0] += -0.0016976900017229817;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.83130081300813075) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0055310041778387975;
                  }
                }
              }
            } else {
              result[0] += 0.00355601743762866;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1663.13767962321208) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1784550515539286286) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2250000000000000333) ) ) {
                result[0] += -5.72340500559513e-05;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7340.285232759907558) ) ) {
                    result[0] += -0.0003267548376775519;
                  } else {
                    result[0] += 0.0009939794140281781;
                  }
                } else {
                  result[0] += 0.00580327468883256;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6768.866270911575157) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
                    result[0] += -0.00023598743017217767;
                  } else {
                    result[0] += -0.005330849391373544;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8728500000000001258) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08900840403564362624) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06663870972854980812) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.003419095670145274;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7150000000000000799) ) ) {
                      result[0] += 0.0008520278816605156;
                    } else {
                      result[0] += -0.0009750274305340776;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9173.564891287333012) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2626.389045125775283) ) ) {
                      result[0] += -0.003706565937002684;
                    } else {
                      result[0] += -8.23545102013341e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999655000000000515) ) ) {
                      result[0] += -0.0007909758518193971;
                    } else {
                      result[0] += 0.00109019358492076;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7444500000000001672) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3726408267520956996) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.674650000000000083) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.005981138627670168;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
                      result[0] += 0.0008169827943510675;
                    } else {
                      result[0] += -0.002816113881584602;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                    result[0] += -0.005148506384423898;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7179500000000001991) ) ) {
                      result[0] += -0.0009575252215480031;
                    } else {
                      result[0] += 0.001611554241752111;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.433327285921625727) ) ) {
                    result[0] += -0.0013043544945920478;
                  } else {
                    result[0] += 0.0016208769896831966;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005250000000000000326) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4496507448607858781) ) ) {
                      result[0] += 0.00015343561853822373;
                    } else {
                      result[0] += -0.002071391488583415;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.438750000000000639) ) ) {
                      result[0] += -0.005361828601420421;
                    } else {
                      result[0] += -0.0009846109697759832;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.496478873239436957) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
                  result[0] += -0.0022750502565107955;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += -0.005730454504093696;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5594259411545304816) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
              result[0] += 0.004206526139279027;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2986.391455690082239) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.90096618357488367) ) ) {
                  result[0] += -0.0003323592334577501;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.0012050897421995274;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0024871103614347483;
              }
            }
          }
        }
      } else {
        result[0] += -0.00354017620506935;
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
        result[0] += 0.002918249072637685;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01255000000000000213) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.94047619047619335) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.0064516129032306) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.028991596638655803) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.359310344827586503) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2168.319171519228803) ) ) {
                      result[0] += -0.0006656843592380031;
                    } else {
                      result[0] += 0.0012369164868326803;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.002841508118488177;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2574234279727875552) ) ) {
                      result[0] += -0.00500794309012501;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)260.2258709753264725) ) ) {
                      result[0] += -0.0007300488226336599;
                    } else {
                      result[0] += 0.0008599816900489347;
                    }
                  }
                }
              } else {
                result[0] += 0.0035245062075438113;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.115576363876681118) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6526275000000001381) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07945677231391518047) ) ) {
                    result[0] += 0.0022394261601353764;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.003084755104197123;
                }
              } else {
                result[0] += -0.00366828776427888;
              }
            }
          } else {
            result[0] += -0.002815399702100024;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01875000000000000278) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
              result[0] += 0.0036516898584758517;
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += 0;
          }
        }
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)43305.24755796225509) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.18253968253969077) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3473000000000000531) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2428.189675971083943) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
                      result[0] += -0.0002407455305689011;
                    } else {
                      result[0] += 0.001226111870280378;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5877760000000001872) ) ) {
                      result[0] += -0.0006824600482410079;
                    } else {
                      result[0] += -0.006882869050798135;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4257500000000000173) ) ) {
                    result[0] += -0.002235108242457416;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
                      result[0] += 0.0024423274769546205;
                    } else {
                      result[0] += 0.0004338751923477976;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3114755000000000718) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
                      result[0] += 0.0009313210102652446;
                    } else {
                      result[0] += -0.003031020848450666;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.351912500000000017) ) ) {
                      result[0] += 0.005939721682432203;
                    } else {
                      result[0] += 0.0015659708018589183;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4901430000000000509) ) ) {
                    result[0] += -0.008059488328032355;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12510.35759572274947) ) ) {
                      result[0] += -0.0013242559373388954;
                    } else {
                      result[0] += 0.0009645176203553014;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4976500000000000923) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6282926336678872348) ) ) {
                  result[0] += -0.0017046413903537548;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7118907180887991126) ) ) {
                    result[0] += 0.0038992555885188594;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.194724803310769135) ) ) {
                      result[0] += -0.0012996395259789813;
                    } else {
                      result[0] += 0.000613301266047498;
                    }
                  }
                }
              } else {
                result[0] += -0.003998059201370188;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2988235496559247806) ) ) {
                result[0] += -0.0014203809435332207;
              } else {
                result[0] += 0.00027113428746572296;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770958479253431361) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1768500000000000349) ) ) {
                  result[0] += 0.0012303690642899519;
                } else {
                  result[0] += -0.001398693768387783;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.61204013377927069) ) ) {
                  result[0] += 0.010400710766192875;
                } else {
                  result[0] += 0.0018368574831229207;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.04880952380953119) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06815000000000000224) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
                result[0] += -0.0002839424163893684;
              } else {
                result[0] += -0.007097879268740345;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6835161312401194511) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8550000000000000933) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0039087389807545185;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4059235000000000482) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036930000000000462) ) ) {
                      result[0] += -0.00016704496580587905;
                    } else {
                      result[0] += -0.003637598963756624;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.44072681704260752) ) ) {
                      result[0] += 0.0013586721956349516;
                    } else {
                      result[0] += -0.0003246130240168068;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5291855000000000864) ) ) {
                      result[0] += 0.004394053577008634;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1546000000000000429) ) ) {
                      result[0] += -0.004209192083734019;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9790.82043369202438) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
                  result[0] += 0.003457096191661997;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2802500000000000546) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)129.5625000000000284) ) ) {
                      result[0] += -0.0016388668813403352;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0011210531094160002;
                  }
                }
              } else {
                result[0] += 0.003364987326910311;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1056.904411764706083) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1241660000000000125) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1909226976060683645) ) ) {
              result[0] += 0.006237831284806758;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1110915000000000236) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.0003491382278524522;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.094202898550724834) ) ) {
        result[0] += 0.0005132682692016388;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
          result[0] += -0.006656599434803525;
        } else {
          result[0] += 0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.71626984126984361) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3213000000000000855) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1187500000000000083) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)15.77248611608338713) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.0023309456229757466;
          }
        } else {
          result[0] += -0.00345521714526111;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.87456103385307138) ) ) {
          result[0] += 0.0011027508084089945;
        } else {
          result[0] += 0.005576023020772497;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.62645348837209447) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6526430887472424169) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5402301307847082734) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4900.274382293213421) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1472221264172316191) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506000000000000449) ) ) {
                  result[0] += 0.00246288030712439;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0026244295772624568;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.43959330143541209) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
                    result[0] += -0.002368617126050106;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
                    result[0] += -0.0011045728584569083;
                  } else {
                    result[0] += -0.006005763152204497;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9050000000000001377) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.625000000000000111) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2127.473441927146268) ) ) {
                      result[0] += 0.0008598390619452808;
                    } else {
                      result[0] += -3.211575080254081e-05;
                    }
                  } else {
                    result[0] += -0.0013633020493949179;
                  }
                } else {
                  result[0] += 0.0030532617427630527;
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7650000000000001243) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.13006756756757909) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1682.526551393980526) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00040213670449500507;
                    }
                  } else {
                    result[0] += -0.0006432218738877971;
                  }
                } else {
                  result[0] += -0.0034233088616608984;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1484500000000000264) ) ) {
              result[0] += 0.0033300076029575986;
            } else {
              result[0] += -0.0013383985120069264;
            }
          }
        } else {
          result[0] += -0.0046680487380413496;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3535211598876289441) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.293597746500404877) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.36487820934827653) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.01582751744766142) ) ) {
                result[0] += 0.0003950403977869249;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8650000000000001021) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0026368881479660856;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.10606060606062329) ) ) {
                result[0] += 0.001815188669307468;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01975000000000000019) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.03500000000000001027) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0010145537143078551;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03545000000000000234) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)19887.81802584273828) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.003112162148219141;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4850000000000000422) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0006265638498340081;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8950000000000001288) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3254789019904610892) ) ) {
                result[0] += 0.0007894127069739341;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0.005349187977645544;
            }
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3750000000000000555) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2227500000000000313) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4902547376640098986) ) ) {
                result[0] += -0.0002489477175034908;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6903684837426190546) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0017736527145352065;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              result[0] += -0.0005340857904634052;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2067000000000000226) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.431226121273369345) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0019623578533030355;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
                  result[0] += -0.00022310657897040668;
                } else {
                  result[0] += 0.002249298349570713;
                }
              } else {
                result[0] += -0.0016045894472004431;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58257918552036436) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6858500000000001817) ) ) {
          result[0] += 0.004348191267106714;
        } else {
          result[0] += 0;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.73128342245989408) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18644.6123996954484) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6111605972688834987) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04590766326201999731) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5882.835930520358488) ) ) {
                  result[0] += -0.005147593709779914;
                } else {
                  result[0] += -0.0014395498114433086;
                }
              }
            } else {
              result[0] += 0.0006701763709928643;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
                result[0] += 0.0061806844479555785;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.23959827833572689) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.18465909090909172) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6589500000000001467) ) ) {
                      result[0] += 0.0007712799848833288;
                    } else {
                      result[0] += -0.0021288856821997104;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2118493325926607274) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004849245432154473;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5133.306374476119345) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.28245614035088096) ) ) {
                      result[0] += 0.0013966235275478544;
                    } else {
                      result[0] += 0.0073309906981382945;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5732.82001265566214) ) ) {
                      result[0] += -0.002643211071277324;
                    } else {
                      result[0] += 0.0006513066695409592;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
                  result[0] += -0.004357375662708071;
                } else {
                  result[0] += -3.356579670422324e-05;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.487126000000000059) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.02444841979725787) ) ) {
                      result[0] += -0.00024831461080052026;
                    } else {
                      result[0] += -0.004434179039828019;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.606377583365031558) ) ) {
                      result[0] += -0.0001069167042210686;
                    } else {
                      result[0] += 0.0014494255796647449;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3486.590803824997238) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.602083333333334636) ) ) {
                      result[0] += 0.00048600964498350354;
                    } else {
                      result[0] += 0.006502856794188465;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518295403837575108) ) ) {
                      result[0] += 4.38695138668528e-05;
                    } else {
                      result[0] += -0.00208359863409366;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.603350000000000164) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2511183070799432038) ) ) {
              result[0] += 0.004459490441419026;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.50611355962782556) ) ) {
                result[0] += 0.00291994268254492;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5797681545636242939) ) ) {
                  result[0] += -0.0052508677909109056;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1499.104419668594574) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.88883399209486491) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003973374650871731;
                    }
                  } else {
                    result[0] += 0.002460330344178745;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6678500000000000547) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17778753292362026) ) ) {
                result[0] += -0.002954885811428447;
              } else {
                result[0] += -0.009190449934281598;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1412000000000000199) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7484500000000001707) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.004299735937327018;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3183000000000000829) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7444500000000001672) ) ) {
                    result[0] += 0.004409997835032035;
                  } else {
                    result[0] += 0.00031847171886709516;
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
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.7261363636363658) ) ) {
        result[0] += 0.005562076610378133;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4190.954657040626444) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4473314962819884832) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.87142857142858077) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.8806779661016968) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                    result[0] += 0.0032271425370909448;
                  } else {
                    result[0] += -0.002130617945904371;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
                    result[0] += 0.0025100232128594732;
                  } else {
                    result[0] += 0.011229922028293947;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15287.97369123098179) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358141500000000057) ) ) {
                      result[0] += -0.0006680537416455981;
                    } else {
                      result[0] += 0.0018218976442883788;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2772624818106737554) ) ) {
                      result[0] += 3.176017504460993e-05;
                    } else {
                      result[0] += 0.006571405713822302;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)135.6750000000000398) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8501.126385312682032) ) ) {
                      result[0] += -0.0007812711468661008;
                    } else {
                      result[0] += -0.004157942546232551;
                    }
                  } else {
                    result[0] += 0.003492681097444158;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5257804178184334321) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
                    result[0] += -0.001420229200561792;
                  } else {
                    result[0] += -0.00910744318369914;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5254000000000000892) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3970620000000000815) ) ) {
                      result[0] += -0.0021595064280573633;
                    } else {
                      result[0] += 0.00257662304792513;
                    }
                  } else {
                    result[0] += 0.004640355117398651;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2626015000000000432) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2384160000000000446) ) ) {
                    result[0] += -6.790535301491722e-05;
                  } else {
                    result[0] += 0.004080598950808034;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4626188573480190525) ) ) {
                    result[0] += 0.0029321835178915973;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4849410000000000109) ) ) {
                      result[0] += -0.0005654266509818376;
                    } else {
                      result[0] += 0.0009466881787705639;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
                result[0] += 0.004165162821303626;
              } else {
                result[0] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)549.5415402223362662) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)118.0299834287672098) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0020403444876104584;
              }
            } else {
              result[0] += 0.001871002918014621;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.45498652291105657) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500000000000065) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.006221197504181532;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3439.063894173575591) ) ) {
                result[0] += -0.0003438818684420001;
              } else {
                result[0] += 0.0018612105021086458;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3176158234407915892) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)31299.3757595375755) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)19887.81802584273828) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3166171325058890207) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2902500000000000635) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22332.50306697345877) ) ) {
                  result[0] += 0.005744950250592508;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6659500000000001529) ) ) {
                      result[0] += 0.0018597068027062188;
                    } else {
                      result[0] += 0.0001960843698908194;
                    }
                  } else {
                    result[0] += 0.004475802728270812;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6112.637109564428101) ) ) {
                      result[0] += 0.0009262454406506845;
                    } else {
                      result[0] += -0.0004129311700360048;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11657.82777714064287) ) ) {
                      result[0] += -0.004827555550702842;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += 0.0013141538636063743;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2696500000000000563) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2104742577805706616) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5528205492927561471) ) ) {
                      result[0] += 0.0016236299498740899;
                    } else {
                      result[0] += -0.0007280937354657564;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.252450980392159963) ) ) {
                      result[0] += -0.0006468565350937839;
                    } else {
                      result[0] += -0.00268989865337583;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6087500000000001243) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441180000000000294) ) ) {
                      result[0] += -0.0024812208265420624;
                    } else {
                      result[0] += -2.966695421519308e-05;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7451.581543301115744) ) ) {
                      result[0] += 0.00021099330794347172;
                    } else {
                      result[0] += 0.0038894880942757625;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3368947088135722523) ) ) {
                  result[0] += -0.00244112344330366;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.692450000000000121) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
                      result[0] += -0.0014402295146819;
                    } else {
                      result[0] += 0.0007726938729451551;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
                      result[0] += 0.00014720484978173305;
                    } else {
                      result[0] += 0.007251913259751302;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5586000000000000965) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.036172945205479756) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.650443786982250138) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01634999999999999995) ) ) {
                      result[0] += -0.000684683759963718;
                    } else {
                      result[0] += 9.79454485656735e-05;
                    }
                  } else {
                    result[0] += -0.006236071797773384;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
                    result[0] += -0.0002564025334874874;
                  } else {
                    result[0] += 0.0032102389161595976;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.901809780515980819) ) ) {
                  result[0] += -0.005095398648984473;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8728500000000001258) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.33974358974359831) ) ) {
                      result[0] += -0.0054229901815826135;
                    } else {
                      result[0] += -0.000817579442835313;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
                      result[0] += -0.0008900769938994733;
                    } else {
                      result[0] += 0.0016616944639285054;
                    }
                  }
                }
              }
            } else {
              result[0] += 0.002643400490455446;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.36487820934827653) ) ) {
            result[0] += 0.0012394681904085076;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9046500000000001762) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06864811295460455931) ) ) {
                  result[0] += -0.008112060015623868;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1297121988736138765) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0037499999713279755;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02030850352529866079) ) ) {
                result[0] += -0.0012106781573682976;
              } else {
                result[0] += 0.0024433885886271517;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.45833333333334281) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1344370000000000287) ) ) {
              result[0] += 0.0005153830352486971;
            } else {
              result[0] += -0.0007135467607170647;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4368015000000000092) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.62645348837209447) ) ) {
                result[0] += 0.0020463043736433186;
              } else {
                result[0] += 0.007777406489791626;
              }
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1110651606754299442) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5550000000000001599) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.002463227718940757;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.001292726826186321;
              }
            } else {
              result[0] += 0.001966969293002808;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)642.537947836085209) ) ) {
        result[0] += 0.0015817465818400707;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)983.5309309347018143) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5033500000000000751) ) ) {
            result[0] += -0.00012133888521040984;
          } else {
            result[0] += -0.0064631233020074575;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3289.059317362541606) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.540050000000000141) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1564500000000000335) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.003481544004680106;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6069337742791702794) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11745.44574006947005) ) ) {
                    result[0] += 0.0010937195177917753;
                  } else {
                    result[0] += 0.006122044277442476;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2250000000000000333) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0004857531190496018;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08395000000000001072) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3701000000000000401) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.27272012578616867) ) ) {
                      result[0] += -0.007155882034917745;
                    } else {
                      result[0] += -0.001192909877196192;
                    }
                  } else {
                    result[0] += -0.0013817318306034892;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4236293998663874238) ) ) {
              result[0] += 0.003003188067629529;
            } else {
              result[0] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3787509271869893279) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3862.309036383199327) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4481.016304914502143) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2301.714118936117757) ) ) {
            result[0] += -0.0018640198777878966;
          } else {
            result[0] += 0;
          }
        } else {
          result[0] += 0.0036957983725826446;
        }
      } else {
        result[0] += 0.004899514816847807;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7174563514726279845) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18253968253969077) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.00714285714286333) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4709808304613328223) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3755158646863254179) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0031057033357122974;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6549412391405855516) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4528391421342179979) ) ) {
                      result[0] += 0.0045465566678986645;
                    } else {
                      result[0] += 0.0008857397062610756;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4222760000000000402) ) ) {
                      result[0] += -0.00283111406812734;
                    } else {
                      result[0] += 0.0011359456756238808;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.463850174216029032) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.975304878048781188) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0039961358404237745;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005395657502925761;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5308159824506151203) ) ) {
                  result[0] += -0.0030471868101827437;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1137.968895395498521) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)856.1902646574352502) ) ) {
                result[0] += 0.00056072446358796;
              } else {
                result[0] += -0.002817221403922053;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2384160000000000446) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1658.751546212527273) ) ) {
                  result[0] += 0.00992234527026577;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.569111884291402359) ) ) {
                    result[0] += 0.0046016058100009395;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6327627825323679511) ) ) {
                      result[0] += -0.0010500606097328398;
                    } else {
                      result[0] += 0.0028089410154625957;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4843951266831568181) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3787240042526709427) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4191117286610134829) ) ) {
                result[0] += 0.001422896501320814;
              } else {
                result[0] += -0.0004427915271282218;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4768620372057117418) ) ) {
                  result[0] += -0.00040767825816479637;
                } else {
                  result[0] += 5.96069869073711e-05;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904340000000000588) ) ) {
                    result[0] += -0.0013119929758373015;
                  } else {
                    result[0] += -0.005358661047028765;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2993500000000000605) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)39.02970297029703772) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8501.126385312682032) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1595.83134361526254) ) ) {
                      result[0] += -0.0004910312523999517;
                    } else {
                      result[0] += 9.511167566014778e-05;
                    }
                  } else {
                    result[0] += -0.0026435752232261416;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09875000000000001832) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5642304926403781673) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0017387440247105482;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
                  result[0] += 0.005216211853618623;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4800849858356940891) ) ) {
                    result[0] += 0.0039000372799107078;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0016023668837449438;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.0014804381487297852;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2534500000000000641) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3412.950059462908939) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4093.415394671918875) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.5392857142857395) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.4495192307692335) ) ) {
                      result[0] += -0.001332210095651505;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
                      result[0] += 0.0031637561629325795;
                    } else {
                      result[0] += 0.0003363825779081722;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8662560233874664339) ) ) {
                    result[0] += -0.0015058361591544884;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.002747708470762122;
                }
              }
            } else {
              result[0] += 0.004120093985615532;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-985.1868867154022382) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1688500000000000278) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9118823529411765882) ) ) {
                    result[0] += 0.0007729838301841479;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1920.955598101732676) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0019709881621498343;
                    }
                  }
                } else {
                  result[0] += -0.005960606369128965;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2741000000000000658) ) ) {
                  result[0] += 0.0019960356753143736;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
                    result[0] += -0.0027434463614161514;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9892588490470258789) ) ) {
                      result[0] += -0.001754621416699027;
                    } else {
                      result[0] += 0.0008279690890052631;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4122825000000000517) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.948187489548568796) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0037970856617351736;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8350000000000000755) ) ) {
                  result[0] += 0.004934980587535606;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9023689374824783727) ) ) {
                    result[0] += -0.0015301503727116403;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
                      result[0] += 0.0022569510847258666;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)599.5344662300684604) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)237.3704492435913664) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2363500000000000323) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7450000000000001066) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0018857264947436492;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2303.801636448604313) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0004829695832064749;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
                  result[0] += -4.256908284357482e-05;
                } else {
                  result[0] += -0.008403372712405153;
                }
              } else {
                result[0] += -0.0006462088016176238;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5594259411545304816) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17051.15547769272598) ) ) {
                result[0] += 3.607147184443086e-05;
              } else {
                result[0] += -0.0022900571226507596;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)760.1404084372057923) ) ) {
                result[0] += 0.003946646223645244;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.397650000000000059) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0015987793464927575;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1604000000000000148) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01815000000000000294) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1684877502298116336) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1911254520728568607) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015000000000001013) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7396500000000000297) ) ) {
              result[0] += -0.001658962075551161;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00575000000000000077) ) ) {
                result[0] += 0.003275486367107026;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000000000000369) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3750000000000000555) ) ) {
                    result[0] += -0.0011911454409244523;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.001556680503342101;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6450000000000001288) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
                    result[0] += -8.917373383985177e-05;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9163500000000001089) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8677000000000001378) ) ) {
                      result[0] += -0.0027115021990919623;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.006183361286452478;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.221202854230377888) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.756425009589567043) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.512751786874594107) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9455500000000001126) ) ) {
                      result[0] += 0.0006861090609199549;
                    } else {
                      result[0] += -4.731706847032451e-05;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000000000001438) ) ) {
                      result[0] += -0.0017221840706455216;
                    } else {
                      result[0] += 0.00035946074586478923;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.43665158371041102) ) ) {
                    result[0] += 0.0031091868912067875;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                result[0] += -0.00255607536138803;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1110651606754299442) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
              result[0] += 0.002129146809844721;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007250000000000000368) ) ) {
                result[0] += -0.0024461694243366875;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.21064381391329512) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.32484954126279364) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0044869215348177895;
                }
              } else {
                result[0] += 0.0008278279406671177;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                result[0] += -0.007267603949554723;
              } else {
                result[0] += -0.0009335220315841877;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.831026909314261597) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000000000001438) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4950000000000000511) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1850000000000000255) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.115000000000000005) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
                      result[0] += -0.0005456865062684571;
                    } else {
                      result[0] += 0.0004545797964969726;
                    }
                  } else {
                    result[0] += -0.0012998281578976852;
                  }
                } else {
                  result[0] += 0.0008367786055873507;
                }
              } else {
                result[0] += -0.0019631739259203273;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01255000000000000213) ) ) {
                result[0] += 0.002113854165614099;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2519.658559778325525) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0009562636165305498;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2043540000000000079) ) ) {
              result[0] += -0.002112058715534391;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.00290697674418716) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.159464746154530435) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6680315000000001113) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2303.801636448604313) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0028673443187677053;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0061324568217327345;
                    }
                  } else {
                    result[0] += 0.00021047262412143418;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.162893810690548) ) ) {
                    result[0] += 0.004884439242874209;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2626.389045125775283) ) ) {
                      result[0] += -0.0005954172387048889;
                    } else {
                      result[0] += 0.0036813047823558093;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.36487820934827653) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5053.885076473124172) ) ) {
                      result[0] += 0.00025559874081753167;
                    } else {
                      result[0] += -0.0017279940581277785;
                    }
                  } else {
                    result[0] += 0.003064751838493063;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
            result[0] += -0.00548170257224564;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.572427572427572473) ) ) {
              result[0] += 0.0016483487207796293;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3213010000000000588) ) ) {
                result[0] += 0.00045801531296645276;
              } else {
                result[0] += -0.0009029476324276291;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1431610000000000105) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5250000000000001332) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.115000000000000005) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6199252650020550259) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221000000000000141) ) ) {
                result[0] += -0.0004461289496095312;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1750000000000000167) ) ) {
              result[0] += 0.0007794358687802833;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
            result[0] += -0.0029683324160044177;
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-94839.3939457742963) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)129.5625000000000284) ) ) {
            result[0] += 0.005735144172839081;
          } else {
            result[0] += 0.000361798915990551;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2253645772879973308) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08235000000000002041) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1179193971631925381) ) ) {
                      result[0] += 0.0020751751162025713;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0053884810428569485;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                      result[0] += 0.003227498400808584;
                    } else {
                      result[0] += -0.0029372467516062604;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3289.059317362541606) ) ) {
                      result[0] += 0.0006685302570404748;
                    } else {
                      result[0] += -0.006063063580940118;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09707842318205106569) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9013.430510330945253) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2519.658559778325525) ) ) {
                      result[0] += 0.00022826846043766204;
                    } else {
                      result[0] += 0.006103721341898247;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03442655001000935466) ) ) {
                result[0] += -0.006685546239188639;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                  result[0] += -0.001645279285150097;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.14277939042090537) ) ) {
                    result[0] += 0.003992191137291048;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                      result[0] += -0.00046145187495309705;
                    } else {
                      result[0] += 0.000955285887665045;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5732000000000001538) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6497217366336467403) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3532.451953216338097) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4795045000000000557) ) ) {
                      result[0] += 0.0017778358748245116;
                    } else {
                      result[0] += -0.0016301537612270593;
                    }
                  } else {
                    result[0] += -0.002659819992190129;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8817.104006290848702) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12967.17676313729862) ) ) {
                      result[0] += -0.0017159211726876533;
                    } else {
                      result[0] += 0.0020006763587063154;
                    }
                  } else {
                    result[0] += 0.006435952959531597;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6779663431404205909) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
                    result[0] += -0.006409852433153577;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7320592709375011164) ) ) {
                      result[0] += 0.0037302295607317855;
                    } else {
                      result[0] += 7.855945934968125e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0779500000000000054) ) ) {
                      result[0] += 0.00033867895004788685;
                    } else {
                      result[0] += -0.0025186837552717226;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3986990764490913053) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
                      result[0] += 0.00024652476075161413;
                    } else {
                      result[0] += -0.002151582345097298;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3254789019904610892) ) ) {
                      result[0] += 0.0032307925973328096;
                    } else {
                      result[0] += 0.0002965346424033742;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1928899549823784032) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0022147711122433335;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.005126213300480806;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6241500000000000936) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5867500000000001048) ) ) {
                      result[0] += -0.0022012949659099314;
                    } else {
                      result[0] += 0.0018311184527299623;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3420950000000000935) ) ) {
                      result[0] += -0.00024608209215467913;
                    } else {
                      result[0] += -0.006376838168751622;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6614500000000002045) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
                      result[0] += 0.002997562934030849;
                    } else {
                      result[0] += -0.0021097345695160366;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.407843474118376681) ) ) {
                      result[0] += -0.004453612582850585;
                    } else {
                      result[0] += 0;
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
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3083306738637045519) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015000000000001013) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.90667311411992912) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.33974358974359831) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7484500000000001707) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.808257918552036436) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6189.910138631900736) ) ) {
                  result[0] += -0.0059648886212034565;
                } else {
                  result[0] += -0.0002667727174671047;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5732.82001265566214) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
                  result[0] += 0.0008650192763470906;
                } else {
                  result[0] += -0.004347592260538176;
                }
              } else {
                result[0] += 0.003300736928370188;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.158598193308449209) ) ) {
                result[0] += -0.009115903473948517;
              } else {
                result[0] += -0.0026370300645050934;
              }
            } else {
              result[0] += -0.0006586381520053788;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)26013.27966640743398) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3114755000000000718) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.002510790413970369;
            }
          } else {
            result[0] += -0.0018962249340531356;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09244144239215144887) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3701000000000000401) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1612811956950306047) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2598000000000000309) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9163500000000001089) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0015557223611568523;
                }
              } else {
                result[0] += -0.0014194892416367329;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.22431865828092867) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
                  result[0] += -0.0010804735343399518;
                } else {
                  result[0] += 0.0004453065258131059;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4122825000000000517) ) ) {
                  result[0] += -0.0004736854115006282;
                } else {
                  result[0] += -0.006304467438111674;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)103.9546342098412026) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.71008403361344818) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0030063748105294747;
              }
            } else {
              result[0] += -0.0006270675393917407;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16362.01564670949665) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)127.0309523809523995) ) ) {
              result[0] += -0.0017399245841951063;
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
              result[0] += 0.006640450486713398;
            } else {
              result[0] += 0.00032336078849510576;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7166500000000001203) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6988000000000001988) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36860497623707644) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1040.704691140170553) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.70944164869398918) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2180905966455483069) ) ) {
                    result[0] += 0.002797462605518462;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5454500000000001014) ) ) {
                      result[0] += -0.000142762914233897;
                    } else {
                      result[0] += -0.004147115900011076;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
                    result[0] += 0.007874807689610432;
                  } else {
                    result[0] += -0.0009329022499806537;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3067500000000000782) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.31844888366627622) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.0064516129032306) ) ) {
                      result[0] += -0.001987644121312388;
                    } else {
                      result[0] += 0.0016231866484845206;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.18303571428572241) ) ) {
                      result[0] += -0.006832257763987947;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17778753292362026) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.1721611721611751) ) ) {
                      result[0] += -6.65401654025698e-05;
                    } else {
                      result[0] += 0.0038854620567242296;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.7610275038920733) ) ) {
                      result[0] += -0.006324523882883255;
                    } else {
                      result[0] += 0.00011963802341428435;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4976500000000000923) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
                  result[0] += 0.007436417880375072;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78888888888889497) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003340309263128491;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.78345184227537601) ) ) {
                      result[0] += 0.002838416628166024;
                    } else {
                      result[0] += 1.266681124145909e-05;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289274051889615802) ) ) {
                  result[0] += -0.004652298688766618;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5261960000000001081) ) ) {
                      result[0] += -0.00035583160032846617;
                    } else {
                      result[0] += 0.0015196091415976107;
                    }
                  } else {
                    result[0] += -0.0032426227902285143;
                  }
                }
              }
            }
          } else {
            result[0] += 0.0029088272689248174;
          }
        } else {
          result[0] += -0.0026874170923533963;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4082770000000000565) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3137585000000000512) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.00702021423881722;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8337.708244919273056) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1204359241998356339) ) ) {
              result[0] += -0.002638771975646436;
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2363500000000000323) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.003738682115779548;
            }
          }
        }
      }
    }
  }
}

