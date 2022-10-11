#include "prediction.h"
double predict_margin_unit9(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9566500000000001114) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9072000000000001174) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04681961945518394591) ) ) {
        sum += (double)-0.003424172307847075589;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.062394006547141778) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3770.886007893999249) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4314.984009076141774) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4986.669406387503841) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13280.04482759072744) ) ) {
                  sum += (double)0.0002822374701313800217;
                } else {
                  sum += (double)-0.001086472102298146518;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.69615384615385167) ) ) {
                  sum += (double)0.005039430701664049904;
                } else {
                  sum += (double)-0.0002623210384533600551;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8850000000000001199) ) ) {
                sum += (double)0.0006012082886588411817;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.077254641909815014) ) ) {
                  sum += (double)-4.759400917166966156e-05;
                } else {
                  sum += (double)-0.009305793781130023215;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.00952380952381127) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.290600000000000025) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2529500000000000637) ) ) {
                  sum += (double)-0.0006226178026609488882;
                } else {
                  sum += (double)-0.007261751199419859415;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.558257918552036436) ) ) {
                  sum += (double)0.009345411038103436721;
                } else {
                  sum += (double)-0.001240116867654863413;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8550000000000000933) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7650000000000001243) ) ) {
                  sum += (double)-5.566630771084868248e-05;
                } else {
                  sum += (double)-0.006614586167321531186;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.34850948509485491) ) ) {
                  sum += (double)0.002054573008597753228;
                } else {
                  sum += (double)0.007989164241870370942;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            sum += (double)0.0009888623271167252746;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4187725000000000475) ) ) {
              sum += (double)-0.001437440568298965944;
            } else {
              sum += (double)-0.006549853728789297586;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4766210000000000724) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7750000000000001332) ) ) {
          sum += (double)0.003332982011855913779;
        } else {
          sum += (double)-0.002764759209669437508;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.710438000000000125) ) ) {
          sum += (double)0.007178921794647233866;
        } else {
          sum += (double)-1.983700324782652417e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.13045634920635507) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1577.474241027566222) ) ) {
        sum += (double)0.001360521046959013453;
      } else {
        sum += (double)-0.001103776745075986908;
      }
    } else {
      sum += (double)-0.006739893346185560526;
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-27.44838584072272525) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06135000000000000869) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05365000000000001018) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.629450000000000176) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3784500000000000086) ) ) {
            sum += (double)-9.704817662528336523e-05;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1434405000000000263) ) ) {
              sum += (double)0.0006521225923557239217;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.03572567783094271) ) ) {
                sum += (double)-0.001911974900541678866;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
                  sum += (double)-0.003662968463974989892;
                } else {
                  sum += (double)-0.01589355220620451009;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000000000001021) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.151923076923078604) ) ) {
              sum += (double)-0.006836569319715278363;
            } else {
              sum += (double)-0.000827727852268582095;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.75221631205674555) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.609208937198069123) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3540370000000000461) ) ) {
                  sum += (double)0.005947169409936315342;
                } else {
                  sum += (double)0.0007884370732935631811;
                }
              } else {
                sum += (double)-0.004844126254113646605;
              }
            } else {
              sum += (double)0.00863491352937877793;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5573.923605496105665) ) ) {
          sum += (double)-0.008799264186240158062;
        } else {
          sum += (double)-0.0003541557312985672075;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2669.174190811230801) ) ) {
          sum += (double)0.0009365313603884977941;
        } else {
          sum += (double)0.007421182265543571632;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1130598082247689234) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7909000000000000474) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4604975000000000596) ) ) {
              sum += (double)-0.01254154495722904772;
            } else {
              sum += (double)-0.001883549870065095479;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)108.7425925925926009) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.02219474861650994) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.154350000000000015) ) ) {
                  sum += (double)-0.005737381474652954692;
                } else {
                  sum += (double)0.0009611966024572865227;
                }
              } else {
                sum += (double)0.005508371954893663026;
              }
            } else {
              sum += (double)-0.00452517055414042909;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-244.3733554551900227) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-552.8487653176190406) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.576834591415294029) ) ) {
                sum += (double)0.0006337586012372109501;
              } else {
                sum += (double)-0.0005673812951589942994;
              }
            } else {
              sum += (double)0.004008626086594341449;
            }
          } else {
            sum += (double)-0.003388516252118525546;
          }
        }
      }
    }
  } else {
    sum += (double)0.003129924809474182636;
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9566500000000001114) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9224771330034489125) ) ) {
      sum += (double)0.001440066042696264972;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.730992608792824905) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9414886987020746334) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9031987788299341569) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1211000000000000132) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.678080847723705027) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.767948717948718329) ) ) {
                  sum += (double)-0.001182486534360834615;
                } else {
                  sum += (double)-0.006458118339939256103;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.325855839657968327) ) ) {
                  sum += (double)0.0002468385137204202992;
                } else {
                  sum += (double)-0.001592849988996978845;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1658500000000000252) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5191.180377841475092) ) ) {
                  sum += (double)0.0002068839981147190129;
                } else {
                  sum += (double)0.005190871410899876304;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1797500000000000486) ) ) {
                  sum += (double)-0.00391787791856451021;
                } else {
                  sum += (double)3.567181054219992507e-05;
                }
              }
            }
          } else {
            sum += (double)-0.00362328183793364858;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0430000000000000035) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.211111111111111693) ) ) {
              sum += (double)-0.001970648437772998599;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3801160000000000649) ) ) {
                sum += (double)0.002249971705124372435;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.053053766696358862) ) ) {
                  sum += (double)0.004366195088403991391;
                } else {
                  sum += (double)0.01256044290706563073;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3102225000000000676) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000000000000799) ) ) {
                  sum += (double)0.0006921736831316185759;
                } else {
                  sum += (double)-0.003679344315139735679;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
                  sum += (double)-0.001320944190368622236;
                } else {
                  sum += (double)0.01129547087686890924;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.023643244746905046) ) ) {
                sum += (double)0.005065462479519565291;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2136500000000000343) ) ) {
                  sum += (double)-0.002251082562775671286;
                } else {
                  sum += (double)-0.007364902822551997429;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5274700000000001054) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02595000000000000431) ) ) {
            sum += (double)-0.004193415003838185662;
          } else {
            sum += (double)-0.00022904120889168412;
          }
        } else {
          sum += (double)-0.005440871223654647655;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.13045634920635507) ) ) {
      sum += (double)5.079580563639443322e-05;
    } else {
      sum += (double)-0.005835112356308773222;
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.0938416422287407) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6957.789300648867538) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7485.158955287609388) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.307429313354878664) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.192234848484849508) ) ) {
            sum += (double)-0.001064949409603924927;
          } else {
            sum += (double)0.005488421594624371715;
          }
        } else {
          sum += (double)0.01059551003090154764;
        }
      } else {
        sum += (double)0.009413585163053281302;
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6276.648608942848114) ) ) {
        sum += (double)-0.004264206721411941022;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1995835000000000248) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4249.125988354198853) ) ) {
            sum += (double)0.009371353889385728927;
          } else {
            sum += (double)0.001199039442149364264;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.305052790346909575) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2293765000000000109) ) ) {
              sum += (double)-0.005553685346734213435;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.782331511839709393) ) ) {
                sum += (double)0.0003860565710670298373;
              } else {
                sum += (double)0.004823643112112611583;
              }
            }
          } else {
            sum += (double)-0.006947940396342199183;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4067570000000000907) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3878415000000000612) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6747500000000000719) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.41145833333333393) ) ) {
            sum += (double)-0.00526934499451204956;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3746295000000000597) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.364131000000000038) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7392495716674023498) ) ) {
                  sum += (double)0.0004684898274355930176;
                } else {
                  sum += (double)-0.001327946362290137981;
                }
              } else {
                sum += (double)0.008442152678132485571;
              }
            } else {
              sum += (double)-0.005060059462698601219;
            }
          }
        } else {
          sum += (double)-0.007072176871357935789;
        }
      } else {
        sum += (double)0.008805472184114872605;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4187725000000000475) ) ) {
        sum += (double)-0.0114464394920039611;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2626.234914654990916) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9826491253220847044) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3532093052100045982) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7016500000000001069) ) ) {
                sum += (double)-0.009331802080767072002;
              } else {
                sum += (double)-0.0007546380002930308658;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1184500000000000136) ) ) {
                sum += (double)-0.003272274564548983012;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4315500000000000447) ) ) {
                  sum += (double)0.009304604511298174979;
                } else {
                  sum += (double)0.0009810108515783671091;
                }
              }
            }
          } else {
            sum += (double)-0.005350866215012572112;
          }
        } else {
          sum += (double)0.005642750066041347934;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.676547515257193588) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.483097327483048566) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3733500000000000707) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3305000000000000715) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.409677419354840033) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2529500000000000637) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2417500000000000482) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.807323232323232443) ) ) {
                  sum += (double)0.0004975094451548937782;
                } else {
                  sum += (double)-0.003116673071246299151;
                }
              } else {
                sum += (double)0.008590007184013714187;
              }
            } else {
              sum += (double)-0.002773510680426769046;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2733690000000000286) ) ) {
              sum += (double)-0.001969490784018515864;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2879313601055101812) ) ) {
                sum += (double)0.0028319226283563129;
              } else {
                sum += (double)0.008821334905177830379;
              }
            }
          }
        } else {
          sum += (double)0.007228300463439440472;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0203500000000000035) ) ) {
          sum += (double)-0.006333145733430379024;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4317500000000000782) ) ) {
            sum += (double)-0.004110662499486446297;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.337552742616034074) ) ) {
              sum += (double)0.007255084200229944789;
            } else {
              sum += (double)-0.001826744733984425693;
            }
          }
        }
      }
    } else {
      sum += (double)0.007909790197918532134;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.464352992319954971) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2104.645069812032943) ) ) {
        sum += (double)0.00048595202321391885;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3677500000000000768) ) ) {
          sum += (double)-0.009619755606587421584;
        } else {
          sum += (double)-0.001138024719252489448;
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0539500000000000049) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.383600000000000052) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.004000000000000000951) ) ) {
            sum += (double)-0.004669024835802473156;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.38860441767068821) ) ) {
              sum += (double)0.008752623546564248028;
            } else {
              sum += (double)-0.0003577925575261348568;
            }
          }
        } else {
          sum += (double)0.007760149904902997192;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2843695000000000528) ) ) {
          sum += (double)0.0002110246896558276217;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01055000000000000208) ) ) {
            sum += (double)-0.005982239375860204378;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3224350000000000827) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.154350000000000015) ) ) {
                sum += (double)-0.009955256820921217289;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.02380952380952905) ) ) {
                  sum += (double)0.00467093735264729245;
                } else {
                  sum += (double)-0.005582352570206098978;
                }
              }
            } else {
              sum += (double)0.0001015980122623836798;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.0938416422287407) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.89470443349754447) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2831453397228142488) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2293765000000000109) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1853605016317695087) ) ) {
            sum += (double)-0.0006344187081719290669;
          } else {
            sum += (double)-0.01005800388629734046;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2647000000000000464) ) ) {
            sum += (double)0.005980083572780282158;
          } else {
            sum += (double)-0.0005679539958809426544;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21186.65183932884247) ) ) {
          sum += (double)0.008104213286913776459;
        } else {
          sum += (double)0.0007642667961482128847;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.0480769230769269) ) ) {
        sum += (double)0.004843011938554533935;
      } else {
        sum += (double)8.379800493285353665e-05;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.78594771241830408) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2258850621187963037) ) ) {
        sum += (double)-0.01027047227337210544;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4081000000000000738) ) ) {
          sum += (double)-0.00547455691764844616;
        } else {
          sum += (double)0.003159918412420980021;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05697475876019054974) ) ) {
        sum += (double)0.005607761915769048436;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5573.923605496105665) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.29843750000000213) ) ) {
            sum += (double)0.006627277734367743693;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3746295000000000597) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3586370000000000391) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.81002331002331474) ) ) {
                  sum += (double)-0.00444309595098743744;
                } else {
                  sum += (double)-0.0002654623574984728827;
                }
              } else {
                sum += (double)0.006760664414312986259;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8150.693065381894485) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0539500000000000049) ) ) {
                  sum += (double)0.003946671192767428442;
                } else {
                  sum += (double)-0.002376494815092588739;
                }
              } else {
                sum += (double)-0.01264552951554881628;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4480.563354773491483) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4750000000000000333) ) ) {
              sum += (double)-0.001662265233333591174;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7189084634482026948) ) ) {
                sum += (double)0.01472876546409676926;
              } else {
                sum += (double)0.0009055692251512903555;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4075.95765845995993) ) ) {
              sum += (double)-0.006931091979674010653;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.63750000000000995) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.03571428571428825) ) ) {
                  sum += (double)0.002182502982646713358;
                } else {
                  sum += (double)-0.001387136144624059224;
                }
              } else {
                sum += (double)0.007401294594626553827;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.676547515257193588) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.483097327483048566) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.301981351981353008) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.565033783783785104) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.94680432645034784) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3337293270494554043) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2765776916165623711) ) ) {
                sum += (double)-0.000354642337491962935;
              } else {
                sum += (double)-0.00571472867858251795;
              }
            } else {
              sum += (double)0.0007464580992212776524;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.03846153846154721) ) ) {
              sum += (double)0.005005504517155772229;
            } else {
              sum += (double)-0.0008591406621654240454;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1390.407551240512703) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2700.929737596660289) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3770.886007893999249) ) ) {
                sum += (double)-0.0003959043826080731361;
              } else {
                sum += (double)0.008521926562076979558;
              }
            } else {
              sum += (double)-0.002803329797400067221;
            }
          } else {
            sum += (double)0.008340330328946344088;
          }
        }
      } else {
        sum += (double)-0.003580659722996644249;
      }
    } else {
      sum += (double)0.006728777581227041345;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.464352992319954971) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1277.448594700749481) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4508875000000000521) ) ) {
          sum += (double)-0.004596612321608012711;
        } else {
          sum += (double)0.002371747089187796909;
        }
      } else {
        sum += (double)-0.006444033402345800826;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.835271317829459292) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08605000000000000149) ) ) {
          sum += (double)0.006951672225136315726;
        } else {
          sum += (double)0.0004264027674985838802;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.656250000000000111) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6241000000000000991) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6246500000000001496) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6180000000000001048) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.602550000000000141) ) ) {
                  sum += (double)0.0002932204685281793221;
                } else {
                  sum += (double)-0.003906110908510278257;
                }
              } else {
                sum += (double)0.007524495369860071357;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.58149205561072748) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3187835000000000529) ) ) {
                  sum += (double)-0.006810942349659743385;
                } else {
                  sum += (double)-0.0006053835092173061533;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5114000000000000767) ) ) {
                  sum += (double)0.0003462426230660952688;
                } else {
                  sum += (double)-0.004684021488015572415;
                }
              }
            }
          } else {
            sum += (double)0.004973701137076396751;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21602.88987586164512) ) ) {
            sum += (double)0.003916566947502949161;
          } else {
            sum += (double)-0.007171044009649255903;
          }
        }
      }
    }
  }
  return sum;
}
