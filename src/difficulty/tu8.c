#include "prediction.h"
double predict_margin_unit8(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)183.7630769230769658) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
        sum += (double)0.005795877658219052674;
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7158.326501222521074) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9455500000000001126) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.71832579185520729) ) ) {
                      sum += (double)3.02852996709999921e-05;
                    } else {
                      sum += (double)0.002252144425225643953;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.647150000000000003) ) ) {
                      sum += (double)-0.001596402275911734453;
                    } else {
                      sum += (double)7.480753673859210314e-06;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
                    sum += (double)-0.001181079760214536313;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8212.004448418350876) ) ) {
                      sum += (double)-0.009827961445077816258;
                    } else {
                      sum += (double)-0.001714000472097360365;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3266.861991663331082) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10562.16622267131788) ) ) {
                    sum += (double)-0.003547988964133649403;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4856.133881915514394) ) ) {
                      sum += (double)0.002992945908171351383;
                    } else {
                      sum += (double)-0.002626292120490222957;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4006080000000000751) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                      sum += (double)-0.0008061219452531872762;
                    } else {
                      sum += (double)0.007571389484433349755;
                    }
                  } else {
                    sum += (double)0.01083073826284859306;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9678488682944218491) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2009165000000000256) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
                    sum += (double)-0.0003068698759614415985;
                  } else {
                    sum += (double)0.004623877294537824013;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)58.19230769230770051) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4507500000000000395) ) ) {
                      sum += (double)-0.0002383352462886999116;
                    } else {
                      sum += (double)-0.001683414414151890998;
                    }
                  } else {
                    sum += (double)-0.004101813464723047531;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
                  sum += (double)0.006577834230399641491;
                } else {
                  sum += (double)-0.001130607079068475128;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
              sum += (double)-0.006142627017216002391;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1510.595905575025881) ) ) {
                sum += (double)-0.005708526413384240258;
              } else {
                sum += (double)0.004176763741015811215;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
              sum += (double)-0.002565023215763867319;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015000000000001013) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000000000000244) ) ) {
                  sum += (double)-0.0004911478053414414756;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34049.72333320909092) ) ) {
                    sum += (double)-0.0006178814541822014259;
                  } else {
                    sum += (double)0.005737578061539826309;
                  }
                }
              } else {
                sum += (double)-0.002141917477361932227;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2020500000000000351) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7396500000000000297) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2951822687085968178) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.22431865828092867) ) ) {
                      sum += (double)0.003536547241566071528;
                    } else {
                      sum += (double)-0.002372417928001631631;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
                      sum += (double)0.01364786797509274369;
                    } else {
                      sum += (double)0.004792006036403981088;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000000000000865) ) ) {
                      sum += (double)-0.00311573883580520657;
                    } else {
                      sum += (double)0.001469164848690050979;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
                      sum += (double)0.008644537025445403478;
                    } else {
                      sum += (double)0.002684938144541127326;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518295403837575108) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
                      sum += (double)-0.002403531134106527082;
                    } else {
                      sum += (double)0.001801370345885905909;
                    }
                  } else {
                    sum += (double)0.006070980416632432673;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                      sum += (double)0.005570363493230783523;
                    } else {
                      sum += (double)-0.0004911570175420627328;
                    }
                  } else {
                    sum += (double)-0.002182011578602510282;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.22820512820514693) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.35781818181818537) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2158399509024095386) ) ) {
                      sum += (double)-0.006840374686777037777;
                    } else {
                      sum += (double)-0.0001011177186758593438;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
                      sum += (double)0.006170248397009593308;
                    } else {
                      sum += (double)0.0003497865794454394807;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.72873563218391979) ) ) {
                    sum += (double)0.009891845102060958447;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.86800573888092458) ) ) {
                      sum += (double)0.0003859249323782149455;
                    } else {
                      sum += (double)0.005711705673690625068;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11018.535337379677) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)127.0309523809523995) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
                      sum += (double)-0.003004835151037622484;
                    } else {
                      sum += (double)-0.0075642265790557741;
                    }
                  } else {
                    sum += (double)0.002229290041962893754;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-49080.05530822202854) ) ) {
                    sum += (double)-0.002480558248487742864;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3660021954817824219) ) ) {
                      sum += (double)0.0002156584366196087957;
                    } else {
                      sum += (double)0.007449450408853816076;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)43305.24755796225509) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518295403837575108) ) ) {
          sum += (double)-0.007474138031581734586;
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
            sum += (double)0.0002115148257608177103;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-28217.98058526761452) ) ) {
              sum += (double)-0.002888435803740767478;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21361.58207848050006) ) ) {
                sum += (double)0.002657316806095598102;
              } else {
                sum += (double)-0.001527724839700206338;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)753.4351851851853326) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.154452422829296665) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
              sum += (double)0.0006541393546502907762;
            } else {
              sum += (double)0.007438049087821778892;
            }
          } else {
            sum += (double)0.0003361267137388971541;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2534500000000000641) ) ) {
            sum += (double)0.003783239298070753282;
          } else {
            sum += (double)-0.0008753110054193376493;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6680315000000001113) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6264500000000000624) ) ) {
        sum += (double)0.006036445415929043469;
      } else {
        sum += (double)0.0007082564075320971425;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)112.2710577188622096) ) ) {
        sum += (double)0.000568476448728932101;
      } else {
        sum += (double)-0.001856244998088127937;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000000000000059) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3064.437254561459213) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.512751786874594107) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9455500000000001126) ) ) {
            sum += (double)0.0008693944728023068587;
          } else {
            sum += (double)-0.001803373117321398732;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04272266684492439376) ) ) {
            sum += (double)-0.008920906352132586259;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01255000000000000213) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
                sum += (double)0.0009643698167442076074;
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2870.605387001201507) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6519500000000001405) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6339500000000001245) ) ) {
                      sum += (double)-0.001593057748227570767;
                    } else {
                      sum += (double)-0.007472427991892329792;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1366.16280735785358) ) ) {
                      sum += (double)-0.002720657104120087575;
                    } else {
                      sum += (double)0.0005011490947354392154;
                    }
                  }
                } else {
                  sum += (double)-0.007490504835770190294;
                }
              }
            } else {
              sum += (double)-0.006272714789884449062;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07370217330381030607) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
              sum += (double)0.001093589572714289901;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4900.274382293213421) ) ) {
                sum += (double)0.002772809207733263961;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.4495192307692335) ) ) {
                  sum += (double)-0.009187529484280818406;
                } else {
                  sum += (double)-0.001574640060460577281;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2602911804898560555) ) ) {
              sum += (double)0.00382905589001366958;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6264500000000000624) ) ) {
                sum += (double)0.00414460915168121842;
              } else {
                sum += (double)-0.004515829229543238434;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000000000000244) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-689313.8635869174032) ) ) {
                  sum += (double)0.004330976698344253355;
                } else {
                  sum += (double)-0.001189255674063104768;
                }
              } else {
                sum += (double)0.003826738852050744731;
              }
            } else {
              sum += (double)0.005944913897797441012;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1404478012977176671) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.702729044834310201) ) ) {
                sum += (double)-0.01039813200136079953;
              } else {
                sum += (double)-0.00415682717140181731;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                sum += (double)0.004171220026024577247;
              } else {
                sum += (double)-0.002184854531223022998;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
        sum += (double)0.0002779830448446552632;
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3266.861991663331082) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3176158234407915892) ) ) {
                sum += (double)-0.001221467220495901437;
              } else {
                sum += (double)0.005673820487788075115;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1404478012977176671) ) ) {
                sum += (double)0.003377752584754977871;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9439.28927156883401) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
                    sum += (double)-0.00243473935515935028;
                  } else {
                    sum += (double)0.005871853397790879024;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7425.301902740433434) ) ) {
                    sum += (double)-0.008129173789657556312;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4901430000000000509) ) ) {
                      sum += (double)-0.002093368633113359013;
                    } else {
                      sum += (double)-0.006786919382151784808;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3050000000000000488) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3829700104266255956) ) ) {
                  sum += (double)-0.005850506521384478235;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
                    sum += (double)0.01096002325546227389;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2330500000000000071) ) ) {
                      sum += (double)0.007897599722016595755;
                    } else {
                      sum += (double)-0.0006619997860849024954;
                    }
                  }
                }
              } else {
                sum += (double)-0.001923777103620723542;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3423668233450842813) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.45498652291105657) ) ) {
                  sum += (double)0.009490176111334194808;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
                    sum += (double)-0.001533763675131721632;
                  } else {
                    sum += (double)0.003036265469593156692;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.24725274725274815) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
                    sum += (double)-0.001447892559255622817;
                  } else {
                    sum += (double)-0.009579701216993665586;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11367.30908202939645) ) ) {
                    sum += (double)-0.001776079925502969037;
                  } else {
                    sum += (double)-0.0001062873467486299928;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1002500000000000197) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
              sum += (double)-0.0003931210025118565734;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
                sum += (double)0.01109943777651618141;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01695000000000000326) ) ) {
                  sum += (double)0.007908779464893071418;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1514018167545138904) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07269895721920012488) ) ) {
                      sum += (double)-6.716608487694302921e-06;
                    } else {
                      sum += (double)0.00800314009851420087;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7484500000000001707) ) ) {
                      sum += (double)0.001979887937331101678;
                    } else {
                      sum += (double)-0.002526995317717803651;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3344.138681686334621) ) ) {
              sum += (double)0.004770734544836489725;
            } else {
              sum += (double)-0.0002846634124020374821;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.520019664933700887) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770958479253431361) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2005135503574813904) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
            sum += (double)0.002732432343896634176;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4666.632518606213125) ) ) {
              sum += (double)0.0008584236522123283924;
            } else {
              sum += (double)-0.005417498905099490773;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
            sum += (double)-0.004138364215235435656;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)901.8913219877068741) ) ) {
              sum += (double)-0.004548200224172060761;
            } else {
              sum += (double)0.0005931209278257000995;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6988000000000001988) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3787240042526709427) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
              sum += (double)0.008272099464228322221;
            } else {
              sum += (double)0.002137531186392992427;
            }
          } else {
            sum += (double)0.001705311416899720194;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4165800000000000058) ) ) {
            sum += (double)-0.002988737560228558413;
          } else {
            sum += (double)0.001917998460495133747;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21361.58207848050006) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.4495192307692335) ) ) {
          sum += (double)0.004191018477099373377;
        } else {
          sum += (double)-0.0005817262295093888905;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.45022222222222652) ) ) {
          sum += (double)-0.0006574994583097141555;
        } else {
          sum += (double)-0.00389170352437737295;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01242517226504776494) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01325000000000000309) ) ) {
        sum += (double)0.004118292377995161173;
      } else {
        sum += (double)-0.002144858329931755882;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9706500000000001238) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9495000000000001217) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8662560233874664339) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.582324042174648393) ) ) {
                    sum += (double)0.007344028023305245595;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
                      sum += (double)-0.001169208054930561975;
                    } else {
                      sum += (double)0.003772079792254306226;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3166171325058890207) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
                      sum += (double)0.001043812343573018208;
                    } else {
                      sum += (double)-0.0006589998585076363566;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3609444825669292922) ) ) {
                      sum += (double)-0.002588199729051941875;
                    } else {
                      sum += (double)0.0001032631594799665359;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-95.57213752792789307) ) ) {
                  if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.6950000000000000622) ) ) {
                    sum += (double)-0.001773937683806370205;
                  } else {
                    sum += (double)-0.008986909129284880934;
                  }
                } else {
                  sum += (double)0.0006966818072659613191;
                }
              }
            } else {
              sum += (double)-0.004246236409378845514;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.52175925925926236) ) ) {
                  sum += (double)0.003008962266818786258;
                } else {
                  sum += (double)-0.002148224242943520997;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
                  sum += (double)0.002222192346668887177;
                } else {
                  sum += (double)0.007402724241875736737;
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)623.1461654618134389) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9023689374824783727) ) ) {
                  sum += (double)-0.00720257593905494764;
                } else {
                  sum += (double)-0.001719352308346997404;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.401298701298702376) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.138110787595931539) ) ) {
                      sum += (double)0.002608367077247223699;
                    } else {
                      sum += (double)-0.001113868573672773627;
                    }
                  } else {
                    sum += (double)0.003911718341203155799;
                  }
                } else {
                  sum += (double)-0.003859377989506225428;
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.603350000000000164) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.382558990305469582) ) ) {
                  sum += (double)0.005549894409731403848;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                    sum += (double)0.005398865356210455317;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.409826191705387366) ) ) {
                      sum += (double)-0.003235904539692637319;
                    } else {
                      sum += (double)9.67746700556654856e-05;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.23959827833572689) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2384160000000000446) ) ) {
                    sum += (double)-0.00825834126415378976;
                  } else {
                    sum += (double)-0.00247436733713558973;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2128500000000000114) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                      sum += (double)-0.0002991668125568182324;
                    } else {
                      sum += (double)0.003601179457605884534;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7795.802699447695886) ) ) {
                      sum += (double)-0.003058091070722072924;
                    } else {
                      sum += (double)-0.000140678734057279192;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-569.3023343863511627) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5354000000000000981) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2808462751056642337) ) ) {
                      sum += (double)-0.00725328955805893804;
                    } else {
                      sum += (double)0.004641306680764609172;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2363500000000000323) ) ) {
                      sum += (double)0.0004598817987545433935;
                    } else {
                      sum += (double)-0.0002927587449401326423;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5340269922761711197) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
                      sum += (double)0.004052885284857924569;
                    } else {
                      sum += (double)-0.002632678641623641645;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2040413945387017647) ) ) {
                      sum += (double)0.002781493286278904995;
                    } else {
                      sum += (double)-0.0001900792953144720754;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.344900589101620803) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.212912087912088488) ) ) {
                    sum += (double)0.004311463730989224634;
                  } else {
                    sum += (double)-0.001975204110344317386;
                  }
                } else {
                  sum += (double)0.006744298510753288754;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7291161822165118656) ) ) {
              sum += (double)-0.008303827321521703095;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.094202898550724834) ) ) {
                sum += (double)0.005992645422722156327;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4222760000000000402) ) ) {
                  sum += (double)0.001226881287459137635;
                } else {
                  sum += (double)-0.004798636695930540846;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
          sum += (double)-0.0015960658953141063;
        } else {
          sum += (double)-0.008015389108381018937;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8825000000000001732) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.07167445453145829259) ) ) {
        sum += (double)0.005261821965650530751;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.09126037187329660849) ) ) {
          sum += (double)-0.004713378123735739375;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2005135503574813904) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
              sum += (double)0.0008483384029972044224;
            } else {
              sum += (double)0.003065269161250370068;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.43376557335367671) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09947290620547651063) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
                    sum += (double)-0.003391542767723086053;
                  } else {
                    sum += (double)-4.864443444926017421e-05;
                  }
                } else {
                  sum += (double)-0.004507183238003829862;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-65.80519855055165124) ) ) {
                  sum += (double)0.0007531880043665378516;
                } else {
                  sum += (double)-0.002154854510123571307;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
                  sum += (double)0.004670693820188187399;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.83130081300813075) ) ) {
                    sum += (double)0.001711807287759586861;
                  } else {
                    sum += (double)-0.003158660935791855664;
                  }
                }
              } else {
                sum += (double)0.004591664764964522791;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)112.2710577188622096) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.490995462280204631) ) ) {
          sum += (double)0.003907465614884922216;
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1549.842380604185792) ) ) {
            sum += (double)-0.001626399419882872989;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1612811956950306047) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.592954307638647649) ) ) {
                sum += (double)0.002712904383627319938;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.18465909090909172) ) ) {
                  sum += (double)-0.001512590116684766305;
                } else {
                  sum += (double)0.0005617940437577134986;
                }
              }
            } else {
              sum += (double)-0.003021850559917363746;
            }
          }
        }
      } else {
        sum += (double)-0.005555412811528399192;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)142.2522321428571672) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9836000000000001409) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)10362.98456196805637) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.924550000000000094) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1486176851638061902) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.647150000000000003) ) ) {
                sum += (double)-0.006340364848682388497;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1398177495611052923) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1204359241998356339) ) ) {
                      sum += (double)0.003005682563893729859;
                    } else {
                      sum += (double)4.650732278500931333e-05;
                    }
                  } else {
                    sum += (double)0.005356210934398807598;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000000000000611) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.285918000000000061) ) ) {
                      sum += (double)-0.002121876507635034673;
                    } else {
                      sum += (double)0.0007383114724765152273;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
                      sum += (double)0.00517448203616435471;
                    } else {
                      sum += (double)0.0004715036354052129443;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2082316587659429064) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1647458771900037477) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.907008495145631422) ) ) {
                      sum += (double)0.000232699722199286894;
                    } else {
                      sum += (double)0.00774295471189958423;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4013.229638921312926) ) ) {
                      sum += (double)0.002369572841837445584;
                    } else {
                      sum += (double)-0.002420904159877087895;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04145000000000000767) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03895000000000000545) ) ) {
                      sum += (double)-0.0003390735456583594907;
                    } else {
                      sum += (double)-0.002919789153510519292;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                      sum += (double)0.0003462005546907174157;
                    } else {
                      sum += (double)-0.0002653103884449893829;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03085000000000000242) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2005135503574813904) ) ) {
                      sum += (double)0.001169423021547479459;
                    } else {
                      sum += (double)-0.002842906586929697197;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1396.779958297000576) ) ) {
                      sum += (double)-0.003174739581021642897;
                    } else {
                      sum += (double)-0.006852694660501878338;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5133.306374476119345) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8551000000000000822) ) ) {
                      sum += (double)0.0008570839326396288487;
                    } else {
                      sum += (double)-0.001733372222317986454;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7821500000000000119) ) ) {
                      sum += (double)-0.007447906044284896727;
                    } else {
                      sum += (double)-0.0009338831344308123374;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1123872490207054042) ) ) {
                sum += (double)0.001978445785165353858;
              } else {
                sum += (double)-0.003112971137340757657;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3532.451953216338097) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2627.9895310241468) ) ) {
                  sum += (double)-0.00282088954830037519;
                } else {
                  sum += (double)-0.008103244738192613705;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.484296965040338367) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5192.030210470990824) ) ) {
                      sum += (double)0.00113742528272427223;
                    } else {
                      sum += (double)-0.003696474908339481263;
                    }
                  } else {
                    sum += (double)0.003321124375694034861;
                  }
                } else {
                  sum += (double)-0.003934529157318541852;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)39.02970297029703772) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2399659671015315077) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2287316404723389318) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                  sum += (double)-0.001910693776524221644;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.45361298224128177) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                      sum += (double)0.002199171334479257858;
                    } else {
                      sum += (double)0.007296717930823116809;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.180896918882973573) ) ) {
                      sum += (double)0.0002141347658379349453;
                    } else {
                      sum += (double)0.002374646284107959169;
                    }
                  }
                }
              } else {
                sum += (double)0.00612514328964291338;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.789850000000000052) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15287.97369123098179) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2978831689071954059) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)118.3581481481481603) ) ) {
                      sum += (double)0.004791894970912740498;
                    } else {
                      sum += (double)-0.001836195076552589239;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-26216.36240703851217) ) ) {
                      sum += (double)0.0009439051477418984506;
                    } else {
                      sum += (double)-0.003337519807941236646;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00378787878788067) ) ) {
                    sum += (double)0.0006847962352199544024;
                  } else {
                    sum += (double)-0.006579936105208487526;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)15083.44233543514747) ) ) {
                  sum += (double)-0.0008715596360987790591;
                } else {
                  sum += (double)-0.00817725026502531642;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34049.72333320909092) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6659500000000001529) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4341500000000000914) ) ) {
                  sum += (double)0.004853147370643542263;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2737835000000000685) ) ) {
                    sum += (double)0.0003288553100898455872;
                  } else {
                    sum += (double)-0.004992100664219957865;
                  }
                }
              } else {
                sum += (double)0.007122247915437282355;
              }
            } else {
              sum += (double)0.00868541028757401426;
            }
          }
        }
      } else {
        sum += (double)0.003947496169635167015;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.036375661375661839) ) ) {
        sum += (double)-0.006658849254341437339;
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)43305.24755796225509) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9745000000000000329) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.243379790940767116) ) ) {
              sum += (double)0.004054786502585784949;
            } else {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1915340000000000376) ) ) {
                  sum += (double)-0.0002890599738017579656;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2660001773777408984) ) ) {
                    sum += (double)0.006130320141046238791;
                  } else {
                    sum += (double)0.0008338683168070617916;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1187500000000000083) ) ) {
                  sum += (double)-0.005669142428950417131;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
                    sum += (double)-0.001240821272154568654;
                  } else {
                    sum += (double)0.003285486687871778423;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.006545285180794430287;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)753.4351851851853326) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08409200000000001396) ) ) {
              sum += (double)-0.0006514054380063764773;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
                sum += (double)0.008720804989240866709;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1264500000000000346) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
                    sum += (double)0.006908388466839011574;
                  } else {
                    sum += (double)0.001191401087481876262;
                  }
                } else {
                  sum += (double)-0.0006658430219195253866;
                }
              }
            }
          } else {
            sum += (double)-0.0004445136743179231727;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9632500000000000506) ) ) {
      sum += (double)0.001185123024470618406;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.790963257199603031) ) ) {
        sum += (double)-0.001066158633214477807;
      } else {
        sum += (double)0.003175568993436562321;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000000000000059) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3064.437254561459213) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.512751786874594107) ) ) {
          sum += (double)0.0001907841887151452036;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9163500000000001089) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01255000000000000213) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1037995575841958729) ) ) {
                sum += (double)0.002387618747867098316;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
                    sum += (double)-0.0003035608178914339693;
                  } else {
                    sum += (double)0.004375946333530012118;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2870.605387001201507) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.62547709923664141) ) ) {
                      sum += (double)-0.005705645738931494626;
                    } else {
                      sum += (double)-0.001125789873824483995;
                    }
                  } else {
                    sum += (double)-0.008697440463228510096;
                  }
                }
              }
            } else {
              sum += (double)-0.00568646302386828853;
            }
          } else {
            sum += (double)-0.006934277745985529401;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06524444126709380565) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.06446597211275277572) ) ) {
              sum += (double)0.001085674663007500911;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                sum += (double)0.0002106354547531402331;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3962.214750511102011) ) ) {
                  sum += (double)-0.002585519003861494556;
                } else {
                  sum += (double)-0.009895036357347413228;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
              sum += (double)0.007022739373246998477;
            } else {
              sum += (double)0.001806783754509053716;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4900.274382293213421) ) ) {
              sum += (double)-0.01020996970257472339;
            } else {
              sum += (double)0.0003231131110704423752;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5801.456541730448407) ) ) {
                sum += (double)0.006602932366573070234;
              } else {
                sum += (double)-0.0007367125768538903283;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
                sum += (double)-6.333420935510002884e-05;
              } else {
                sum += (double)-0.002583046075375285307;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
        sum += (double)0.0002392384866827466092;
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3266.861991663331082) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
            sum += (double)-0.001699985005681557432;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11908.89586363036506) ) ) {
              sum += (double)-0.001717088505224440703;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                sum += (double)-0.001066867978128284086;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1395500000000000351) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2712850000000000539) ) ) {
                    sum += (double)-0.0009582539452359384053;
                  } else {
                    sum += (double)0.009936328317253297765;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
                    sum += (double)-0.0002201959952796714651;
                  } else {
                    sum += (double)0.002282826804031819808;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.0001000276983750987412;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.520019664933700887) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770958479253431361) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2005135503574813904) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
            sum += (double)0.00228063218628202875;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4666.632518606213125) ) ) {
              sum += (double)0.0007543821125465427794;
            } else {
              sum += (double)-0.00498590447499507386;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4173837132183961796) ) ) {
              sum += (double)-0.005111888841762817631;
            } else {
              sum += (double)0.000238017746944916436;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)901.8913219877068741) ) ) {
              sum += (double)-0.004203563473604183219;
            } else {
              sum += (double)0.0005204320880217354426;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6988000000000001988) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3787240042526709427) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
              sum += (double)0.00750407225992038001;
            } else {
              sum += (double)0.001819789626865278261;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4348787844478528841) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
                sum += (double)0.001750969234628221806;
              } else {
                sum += (double)-0.002907681340783127913;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6402500000000000968) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3112500000000000822) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66217532467532791) ) ) {
                      sum += (double)0.001987140719224646506;
                    } else {
                      sum += (double)0.006279286104948276007;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4033000000000000473) ) ) {
                      sum += (double)-0.005042079703453659564;
                    } else {
                      sum += (double)0.002093951641472397915;
                    }
                  }
                } else {
                  sum += (double)-0.002409952272967464098;
                }
              } else {
                sum += (double)0.00639708464214793545;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
            sum += (double)0.004144802265778275638;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4165800000000000058) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3282773505116238777) ) ) {
                sum += (double)-0.008426754251753607386;
              } else {
                sum += (double)-0.0006032853832310716138;
              }
            } else {
              sum += (double)0.0008960251166893359832;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21361.58207848050006) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.4495192307692335) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
            sum += (double)0.0005666841584380435254;
          } else {
            sum += (double)0.006308762113291565242;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
            sum += (double)-0.001966974803588563987;
          } else {
            sum += (double)0.002664731361947549233;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.582324042174648393) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3540665000000000617) ) ) {
            sum += (double)-0.007678885343126480231;
          } else {
            sum += (double)-0.0009089596161137754315;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
            sum += (double)-0.003678530972933379863;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1311.833829054160333) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
                  sum += (double)0.0002101374065658865318;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
                    sum += (double)0.008188137558084746664;
                  } else {
                    sum += (double)0.002206457095068226938;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02395000000000000254) ) ) {
                    sum += (double)-0.004138128779837432943;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)49.6585239618122003) ) ) {
                      sum += (double)0.006880044425973112776;
                    } else {
                      sum += (double)-0.0001415002080466403508;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.120050465838510867) ) ) {
                    sum += (double)-0.006640566315328833014;
                  } else {
                    sum += (double)-0.001163948769882012678;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1879500000000000337) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.285058977719528484) ) ) {
                  sum += (double)0.0002335767266767225809;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
                    sum += (double)-0.009855898959776033044;
                  } else {
                    sum += (double)-0.001873773071610101331;
                  }
                }
              } else {
                sum += (double)0.001946710785215073885;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5229000000000001425) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2166315049226441858) ) ) {
        sum += (double)-0.00234566585374086688;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-200.3606350077996296) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6682000000000001272) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6483.553124530845707) ) ) {
                sum += (double)-0.004302263333666653082;
              } else {
                sum += (double)0.0008535665192302454348;
              }
            } else {
              sum += (double)0.00527946838943181649;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
                sum += (double)0.007225732842707881243;
              } else {
                sum += (double)-0.0001451772836053044657;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5033500000000000751) ) ) {
                sum += (double)0.004240164199925025579;
              } else {
                sum += (double)0.01083523374653127223;
              }
            }
          }
        } else {
          sum += (double)-0.004480952584321486881;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4880421551248437795) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3755158646863254179) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3634578871420977575) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6885500000000001064) ) ) {
              sum += (double)0.0009385690585316388375;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2508523744426000568) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
                    sum += (double)-0.0003939252953718344065;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1527886010815981133) ) ) {
                      sum += (double)0.0005997710623003432977;
                    } else {
                      sum += (double)0.002771964401813523018;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1642951312239392114) ) ) {
                    sum += (double)-0.0001500770946251636412;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                      sum += (double)-0.005724226470546686478;
                    } else {
                      sum += (double)-0.000609498971185636995;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3064.401422747675497) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4461.556953086569592) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.692450000000000121) ) ) {
                      sum += (double)-0.006415385614825545521;
                    } else {
                      sum += (double)-0.0005875724741662651353;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.00714285714286333) ) ) {
                      sum += (double)-0.0005770956112206115755;
                    } else {
                      sum += (double)-0.006962346672695589669;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.7610275038920733) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
                      sum += (double)0.0005644174739111023102;
                    } else {
                      sum += (double)-0.003011874641842058123;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
                      sum += (double)-0.002631844156041579768;
                    } else {
                      sum += (double)0.01421667818449127811;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3688321311376249745) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7052500000000000435) ) ) {
                sum += (double)0.002946982285347270886;
              } else {
                sum += (double)0.008389894538460240109;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.315748500000000043) ) ) {
                sum += (double)-0.002629010537905921829;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.169986979704803115) ) ) {
                  sum += (double)-0.0007792164883012397221;
                } else {
                  sum += (double)0.006145470603023153212;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441180000000000294) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.43665158371041102) ) ) {
              sum += (double)-0.003586429866866156467;
            } else {
              sum += (double)-0.0006722689652903765566;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.382039592976585296) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1720691644993862512) ) ) {
                sum += (double)0.002344226053728632689;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240695900668028262) ) ) {
                  sum += (double)-0.009652508901931644569;
                } else {
                  sum += (double)-0.002364349086967559421;
                }
              }
            } else {
              sum += (double)-0.0001024564308172827234;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5599500000000001698) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2732877049818078219) ) ) {
            sum += (double)-0.005383967179152128815;
          } else {
            sum += (double)0.001628932236661053854;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
              sum += (double)0.002076455248201098617;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2868203899923389977) ) ) {
                sum += (double)0.0047238350099660497;
              } else {
                sum += (double)0.01504792776797303153;
              }
            }
          } else {
            sum += (double)-0.001720305406694213344;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3304355872301289465) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04505000000000000671) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
            sum += (double)-2.300748519813828431e-05;
          } else {
            sum += (double)-0.005271541223960065151;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.487126000000000059) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.0281746031746124) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20716.01340554505077) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5481.444926233901242) ) ) {
                  sum += (double)0.009138522401420219599;
                } else {
                  sum += (double)0.002190885489499288814;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
                  sum += (double)0.002675080223016055095;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3028.043267225880754) ) ) {
                    sum += (double)-0.00513677287388209728;
                  } else {
                    sum += (double)0.003456661606234025415;
                  }
                }
              }
            } else {
              sum += (double)-0.002659257050391195497;
            }
          } else {
            sum += (double)-0.0007132015958878400522;
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5340269922761711197) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1137500000000000178) ) ) {
              sum += (double)-0.01421659804950511398;
            } else {
              sum += (double)-0.004286225628282939841;
            }
          } else {
            sum += (double)-0.003483717645837873956;
          }
        } else {
          sum += (double)-0.001831134439446194815;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09875000000000001832) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5089500000000001245) ) ) {
              sum += (double)-0.000398334615958621048;
            } else {
              sum += (double)-0.005013413864669342621;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)690.7475206421901248) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8132313610536542337) ) ) {
                  sum += (double)-0.00898054143762688252;
                } else {
                  sum += (double)0.0001975668465876365945;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6656.245527964973007) ) ) {
                  sum += (double)-0.0001346802047805430592;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.57979626485568936) ) ) {
                    sum += (double)0.0002152102637039100212;
                  } else {
                    sum += (double)0.010286843961623807;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5528205492927561471) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                  sum += (double)0.01076747624478113612;
                } else {
                  sum += (double)0.001632592180649970878;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.811253561253562516) ) ) {
                    sum += (double)0.001369464492317415709;
                  } else {
                    sum += (double)0.01250400067726184679;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.8806779661016968) ) ) {
                    sum += (double)-0.006278741098571858151;
                  } else {
                    sum += (double)0.003875285432015014055;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
            sum += (double)0.01029272760977328546;
          } else {
            sum += (double)0.001978525826774914231;
          }
        }
      } else {
        sum += (double)-0.0002322536059289493499;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.35781818181818537) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1110915000000000236) ) ) {
        sum += (double)-0.001077818094090410945;
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)50372.74236767082039) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)135.6750000000000398) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.062745098039215907) ) ) {
                      sum += (double)0.001954075586894079772;
                    } else {
                      sum += (double)-0.0009510883167753584385;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5090.688026845967215) ) ) {
                      sum += (double)0.008404757314765223114;
                    } else {
                      sum += (double)0.001196604528919721806;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3483525000000000649) ) ) {
                    sum += (double)0.007138294661283949363;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)237.3704492435913664) ) ) {
                      sum += (double)0.005210503165275682906;
                    } else {
                      sum += (double)-0.002311729141066900129;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8769200928108228377) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-355.2188524626326966) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
                      sum += (double)3.87780573272260897e-05;
                    } else {
                      sum += (double)0.000688995690763312082;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)211.040267020056973) ) ) {
                      sum += (double)-0.006183504156834703468;
                    } else {
                      sum += (double)-0.001098829138633646398;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3689500000000000557) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)507.68014339146265) ) ) {
                      sum += (double)-0.004393452833009491194;
                    } else {
                      sum += (double)0.004413267910038384291;
                    }
                  } else {
                    sum += (double)-0.007956521156184342622;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.332274916211522164) ) ) {
                sum += (double)-0.001960989935871499442;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
                  sum += (double)0.004544917079309435635;
                } else {
                  sum += (double)-0.001407627865809545856;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)13476.57528643532896) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2737835000000000685) ) ) {
                sum += (double)-0.001627105446727530619;
              } else {
                sum += (double)-0.008110042103636369917;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.06446597211275277572) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13827.99262003128206) ) ) {
                  sum += (double)-0.004796402110850596888;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9584500000000001352) ) ) {
                    sum += (double)0.002470176761378920123;
                  } else {
                    sum += (double)-0.002830734784236231191;
                  }
                }
              } else {
                sum += (double)0.003518152311916117152;
              }
            }
          }
        } else {
          sum += (double)0.003503086743152983903;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2164415000000000366) ) ) {
          sum += (double)0.0006507852110094482743;
        } else {
          sum += (double)-0.002944863660106667065;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3266.861991663331082) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8337.708244919273056) ) ) {
            sum += (double)-0.00391136544307287698;
          } else {
            sum += (double)0.00331348066267220286;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4917.478106812183796) ) ) {
            sum += (double)0.01091105224146715971;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.86800573888092458) ) ) {
              sum += (double)0.0004121345053941647047;
            } else {
              sum += (double)0.005598837861662555281;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.45361298224128177) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-35445.64132608562795) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4671500000000000652) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
              sum += (double)0.004698307506879293403;
            } else {
              sum += (double)0.01101554441172209083;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
              sum += (double)0.006386999047439045722;
            } else {
              sum += (double)-0.000988593354501325931;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-27390.08921065179311) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6812.876128776691075) ) ) {
              sum += (double)-0.003171827443722723822;
            } else {
              sum += (double)0.0009116815811741100454;
            }
          } else {
            sum += (double)0.003973269581067224478;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1390121841946631853) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7661500000000001087) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1052900224917293903) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
                  sum += (double)-0.002303884258720517199;
                } else {
                  sum += (double)0.004581974070971862011;
                }
              } else {
                sum += (double)0.008333031949195827265;
              }
            } else {
              sum += (double)-0.0007592185484077531091;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4697290000000000632) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2063695000000000113) ) ) {
                  sum += (double)-9.091685043003365366e-05;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)84224.34186458920885) ) ) {
                    sum += (double)-0.002117045965762873443;
                  } else {
                    sum += (double)0.002559360439843471648;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1854500000000000315) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)159.4971590909091219) ) ) {
                    sum += (double)0.01020396112213900995;
                  } else {
                    sum += (double)-0.001531947730693811096;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4626188573480190525) ) ) {
                    sum += (double)0.002216355436704173405;
                  } else {
                    sum += (double)-0.003013395653558697922;
                  }
                }
              }
            } else {
              sum += (double)-0.004246641040548510514;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
            sum += (double)0.006146254282137447386;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.856934660369398804) ) ) {
              sum += (double)-0.001969520012723746313;
            } else {
              sum += (double)0.004048377177191092233;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4150000000000000355) ) ) {
          sum += (double)-0.0004180010233845610906;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3488086661974699187) ) ) {
            sum += (double)0.007821705773800192302;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
              sum += (double)-0.0005816325804143322687;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.04232804232805165) ) ) {
                sum += (double)0.001087752884575291911;
              } else {
                sum += (double)0.006615313107870117622;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24053.73781696207516) ) ) {
          sum += (double)-0.005040006908329758284;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.78183361629881531) ) ) {
            sum += (double)-0.003562561957846011821;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5221506565800743127) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4507500000000000395) ) ) {
                sum += (double)0.004680922555623363845;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4587524074502786764) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.471890500000000046) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.440904500000000088) ) ) {
                      sum += (double)-0.0009047139772576183849;
                    } else {
                      sum += (double)-0.005990301057715988198;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4978420000000000623) ) ) {
                      sum += (double)0.008249917056876783505;
                    } else {
                      sum += (double)-0.001341714359659806639;
                    }
                  }
                } else {
                  sum += (double)0.004646245106769654985;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9023689374824783727) ) ) {
                  sum += (double)0.004915618174052850328;
                } else {
                  sum += (double)-0.0007087651077108120387;
                }
              } else {
                sum += (double)-0.002111019524328339864;
              }
            }
          }
        }
      }
    }
  }
  return sum;
}
