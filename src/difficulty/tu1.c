#include "prediction.h"
double predict_margin_unit1(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5505620000000001069) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.226711500000000038) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.62731481481482021) ) ) {
          sum += (double)-0.01000170343320392827;
        } else {
          sum += (double)-0.01549589904644014214;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.052631578947369029) ) ) {
          sum += (double)0.007554263455810176359;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4895500000000000407) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06440000000000001279) ) ) {
              sum += (double)-0.01971553433076679226;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                sum += (double)0.00764135296206766134;
              } else {
                sum += (double)-0.01021447717408976823;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8550000000000000933) ) ) {
              sum += (double)-0.008121130302858737063;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9050000000000001377) ) ) {
                sum += (double)0.02252255339942892121;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05695000000000000756) ) ) {
                  sum += (double)0.01235072995175569635;
                } else {
                  sum += (double)-0.007200156092035609259;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.008771929824562541) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7945097899942713537) ) ) {
          sum += (double)0.01248469549745994354;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.141000000000000042) ) ) {
            sum += (double)-0.008276009758365079905;
          } else {
            sum += (double)0.01006635968920442312;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.140910052012023224) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.16263736263736384) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4354.647753189601644) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2325225000000000208) ) ) {
                sum += (double)-0.001337805147568999192;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0590500000000000122) ) ) {
                  sum += (double)0.02248847801302652702;
                } else {
                  sum += (double)0.006687551001329201418;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4599203400496544303) ) ) {
                sum += (double)0.002342526186962004629;
              } else {
                sum += (double)-0.01544408285344806876;
              }
            }
          } else {
            sum += (double)-0.004736248881946492593;
          }
        } else {
          sum += (double)-0.01363410578347373607;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5899477629820119029) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.29843750000000213) ) ) {
        sum += (double)0.02320738511294114653;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24848.45518581499709) ) ) {
          sum += (double)0.01287926195463376389;
        } else {
          sum += (double)-0.007994203621663122095;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8138480000000000159) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2396.145778909193268) ) ) {
          sum += (double)0.01682699523875792053;
        } else {
          sum += (double)0.004035102006772462412;
        }
      } else {
        sum += (double)0.03170193917162583003;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5462525000000001407) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.002750000000000000708) ) ) {
        sum += (double)0.002048741686898751611;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4150000000000000355) ) ) {
          sum += (double)-0.01312748109735294155;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6225697193984417455) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9062.649769165662292) ) ) {
              sum += (double)-0.009097310541014947197;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.6574074074074101) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
                  sum += (double)-0.005676259335485910225;
                } else {
                  sum += (double)0.008051078607961833361;
                }
              } else {
                sum += (double)0.01895113580545984555;
              }
            }
          } else {
            sum += (double)-0.01217136761231234383;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.008771929824562541) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1946626271849857537) ) ) {
          sum += (double)0.01476140921792218688;
        } else {
          sum += (double)0.005590669233796803465;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.467454196533900523) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.13068181818182012) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4354.647753189601644) ) ) {
              sum += (double)0.006409871035952077398;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2180500000000000216) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238000000000000073) ) ) {
                  sum += (double)-0.005506977676822096338;
                } else {
                  sum += (double)0.01500885871709437859;
                }
              } else {
                sum += (double)-0.01548909249833589109;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1689000000000000223) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02065000000000000516) ) ) {
                sum += (double)-0.01090537381914665101;
              } else {
                sum += (double)0.008059171958591937121;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.94444444444444997) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19219.41017880424261) ) ) {
                  sum += (double)0.003334086948736231498;
                } else {
                  sum += (double)-0.01303742535006406286;
                }
              } else {
                sum += (double)-0.01916036148207015538;
              }
            }
          }
        } else {
          sum += (double)-0.0151983836103723579;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.729785247432306772) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6345946031821346756) ) ) {
        sum += (double)0.02066942361169853484;
      } else {
        sum += (double)0.01114777216217627785;
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1685.637314167579689) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.13068181818182012) ) ) {
          sum += (double)0.01634510268150031823;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24848.45518581499709) ) ) {
            sum += (double)0.01349664305248774419;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3992000000000000548) ) ) {
              sum += (double)0.006362083168429960231;
            } else {
              sum += (double)-0.01599672992929506918;
            }
          }
        }
      } else {
        sum += (double)-0.004266251020761447667;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3681235000000000479) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-552.8487653176190406) ) ) {
        sum += (double)-0.01078138696225171105;
      } else {
        sum += (double)-0.002028299467793797089;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4599203400496544303) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
          sum += (double)0.01729622093372790159;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3165280000000000871) ) ) {
            sum += (double)-0.003243916819665110425;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2761.008794057032901) ) ) {
              sum += (double)0.002174855745998658524;
            } else {
              sum += (double)0.01874645035204183102;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.807071960297768065) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.59151511703276527) ) ) {
            sum += (double)0.007792001076162161435;
          } else {
            sum += (double)-0.009300432539574758975;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7085.626942862535543) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.13068181818182012) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.509036144578315586) ) ) {
                sum += (double)-0.002590047173697821153;
              } else {
                sum += (double)0.01635232212572662255;
              }
            } else {
              sum += (double)-0.009844319913679991721;
            }
          } else {
            sum += (double)-0.01619246253483573247;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817845000000000377) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6777336120420829335) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
          sum += (double)-0.01173025287555590386;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3305000000000000715) ) ) {
            sum += (double)0.01065617495768729321;
          } else {
            sum += (double)0.001398653901443645776;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.211111111111111693) ) ) {
          sum += (double)0.007016005370274871165;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2818.428842596366849) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.29843750000000213) ) ) {
              sum += (double)0.01646991123183200179;
            } else {
              sum += (double)-0.00419010968144621198;
            }
          } else {
            sum += (double)-0.008253993479029322552;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.875516528925620374) ) ) {
        sum += (double)0.01692565669493974884;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1189.561118903197212) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4268500000000000627) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.053053766696358862) ) ) {
              sum += (double)0.01851401671349273831;
            } else {
              sum += (double)0.0008606967161741995755;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1853605016317695087) ) ) {
              sum += (double)0.01531271201056440094;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8287289774413838517) ) ) {
                sum += (double)-0.008027661007283748429;
              } else {
                sum += (double)0.01121880761933776068;
              }
            }
          }
        } else {
          sum += (double)-0.008966147875119448094;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4209690000000000931) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.764897074756232698) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8287289774413838517) ) ) {
          sum += (double)-0.01134252396121034415;
        } else {
          sum += (double)0.004717820383990581692;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8857367863762966032) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01725000000000000491) ) ) {
            sum += (double)0.01286581693899842282;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.82404540763674028) ) ) {
              sum += (double)0.006280368183769189684;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04935000000000001191) ) ) {
                sum += (double)0.01077568022620084207;
              } else {
                sum += (double)-0.004190060699003043607;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3246.901261113256169) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2750375000000000458) ) ) {
              sum += (double)-0.007872407601831258109;
            } else {
              sum += (double)0.01352219927524940697;
            }
          } else {
            sum += (double)-0.01418093191161690254;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1043115000000000153) ) ) {
        sum += (double)-0.01061848024258773941;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.343600000000000072) ) ) {
          sum += (double)-0.009728392426676725838;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.09420289855072639) ) ) {
            sum += (double)-0.00249639758556953039;
          } else {
            sum += (double)-0.009027952361636563255;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.75464600000000015) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.558257918552036436) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.691015480139064997) ) ) {
          sum += (double)0.01214607421456540513;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9224771330034489125) ) ) {
            sum += (double)0.01417778072283956345;
          } else {
            sum += (double)0.001915970599587204018;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1685.637314167579689) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)108.7425925925926009) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.290600000000000025) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.72187500000000249) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2545.674573732679619) ) ) {
                  sum += (double)0.01048079975614574222;
                } else {
                  sum += (double)-0.007212354542248773474;
                }
              } else {
                sum += (double)0.01415774097913750397;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-32502.46407997500137) ) ) {
                sum += (double)0.01525795150108565958;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.03571428571428825) ) ) {
                  sum += (double)0.004716719691439768582;
                } else {
                  sum += (double)-0.006988276367914513822;
                }
              }
            }
          } else {
            sum += (double)-0.006859315364426393086;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03010000000000000522) ) ) {
            sum += (double)-0.02076863344244872164;
          } else {
            sum += (double)-0.001370254743992814191;
          }
        }
      }
    } else {
      sum += (double)0.01616229595485569465;
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3681235000000000479) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.83974358974359298) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
        sum += (double)-0.006673990037906221869;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.497098467321646753) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.50334316617502672) ) ) {
              sum += (double)0.002063080734004157923;
            } else {
              sum += (double)0.01923748983130002879;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2890275000000000483) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20725.99637195189644) ) ) {
                sum += (double)0.01177353286871600513;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.048368298368299811) ) ) {
                  sum += (double)0.00846831526468868126;
                } else {
                  sum += (double)-0.004980236995874086185;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3024760000000000226) ) ) {
                sum += (double)0.01310378429709356009;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8159376491280730948) ) ) {
                  sum += (double)0.004060758792811613484;
                } else {
                  sum += (double)-0.0139701240309820663;
                }
              }
            }
          }
        } else {
          sum += (double)-0.01054346894974014619;
        }
      }
    } else {
      sum += (double)-0.007523024803476215799;
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5968835000000001223) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6777336120420829335) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
          sum += (double)-0.009721024790719972122;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5036000000000001586) ) ) {
            sum += (double)0.007594417349789147308;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5525000000000001021) ) ) {
              sum += (double)-0.01426740631212577819;
            } else {
              sum += (double)0.004304171660615274154;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.921270005162622807) ) ) {
          sum += (double)0.005347722375945619319;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2818.428842596366849) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.29843750000000213) ) ) {
              sum += (double)0.01369535334424763252;
            } else {
              sum += (double)-0.003303087981843900577;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3677500000000000768) ) ) {
              sum += (double)-0.01001213581931180083;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8857367863762966032) ) ) {
                sum += (double)-0.009869173172568596747;
              } else {
                sum += (double)0.008895362123825514486;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2563500000000000223) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5679452574321449676) ) ) {
          sum += (double)0.01497219967824029926;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8138480000000000159) ) ) {
            sum += (double)0.004757444275964522497;
          } else {
            sum += (double)0.02057113750414862885;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8138480000000000159) ) ) {
          sum += (double)0.002725554991218418367;
        } else {
          sum += (double)0.01847405151057586112;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3371020000000000683) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.764897074756232698) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.3614130434782723) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7085.626942862535543) ) ) {
          sum += (double)0.006966354872264161197;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.06458333333333499) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2280773739410588419) ) ) {
              sum += (double)-0.01315540991572138399;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.729785247432306772) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05215000000000000885) ) ) {
                  sum += (double)-0.0002278120984796690607;
                } else {
                  sum += (double)0.01251379630309749046;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5211238333507964837) ) ) {
                  sum += (double)0.00371480354722476076;
                } else {
                  sum += (double)-0.009556198710499150956;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5250000000000001332) ) ) {
              sum += (double)-0.009841521005411364709;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01325000000000000309) ) ) {
                sum += (double)0.02149838033413176835;
              } else {
                sum += (double)0.003720165799476654253;
              }
            }
          }
        }
      } else {
        sum += (double)-0.01223759994157685299;
      }
    } else {
      sum += (double)-0.00585516305961898513;
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2546825051281399466) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005950000000000001295) ) ) {
        sum += (double)0.01602192895855503868;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)108.7425925925926009) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513155000000000472) ) ) {
            sum += (double)0.0063995761603389675;
          } else {
            sum += (double)0.01169306684402778192;
          }
        } else {
          sum += (double)-0.005223573011998027156;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8138480000000000159) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5650000000000000577) ) ) {
          sum += (double)-0.007768209399651571263;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.158666732825883505) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.922825000067440615) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)43.65942028985507761) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3860500000000000598) ) ) {
                  sum += (double)0.005794367031916304589;
                } else {
                  sum += (double)-1.24062897865084757e-05;
                }
              } else {
                sum += (double)-0.01594101687864309461;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1658500000000000252) ) ) {
                sum += (double)0.02071568804130663813;
              } else {
                sum += (double)-0.003762679980450047649;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.785386029411764941) ) ) {
              sum += (double)0.008664799411167727408;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2818.428842596366849) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09795000000000000928) ) ) {
                  sum += (double)0.01606037162801781867;
                } else {
                  sum += (double)-0.00345512750060242204;
                }
              } else {
                sum += (double)-0.01199232342799819509;
              }
            }
          }
        }
      } else {
        sum += (double)0.01716660581178791611;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3371020000000000683) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.764897074756232698) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.3614130434782723) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7085.626942862535543) ) ) {
          sum += (double)0.005967582006546181921;
        } else {
          sum += (double)-0.0007343072069319103159;
        }
      } else {
        sum += (double)-0.01048312772567811663;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.98913043478261109) ) ) {
        sum += (double)-0.01235699969226673051;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
          sum += (double)-0.006275887481149444898;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03235000000000001069) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1971420000000000117) ) ) {
              sum += (double)0.01799211408265453255;
            } else {
              sum += (double)-0.0006683944496477198802;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.679200000000000137) ) ) {
              sum += (double)-0.005689987476956614477;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2811385000000000134) ) ) {
                sum += (double)-0.003236513823314909194;
              } else {
                sum += (double)0.01285036543342587059;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2546825051281399466) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000000000000799) ) ) {
        sum += (double)-0.008615115338900559971;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08655000000000001581) ) ) {
          sum += (double)0.01142515135482723328;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7854755000000001042) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)108.7425925925926009) ) ) {
              sum += (double)0.00472396519999093191;
            } else {
              sum += (double)-0.01166420582300573341;
            }
          } else {
            sum += (double)0.01277851396561192204;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8138480000000000159) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5650000000000000577) ) ) {
          sum += (double)-0.006654488122731567167;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.053053766696358862) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.922825000067440615) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)43.65942028985507761) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.67992424242424931) ) ) {
                  sum += (double)0.00254511220922282351;
                } else {
                  sum += (double)0.01286544494525986536;
                }
              } else {
                sum += (double)-0.01365564646676276951;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5107490000000001196) ) ) {
                sum += (double)0.007478074327081232243;
              } else {
                sum += (double)0.02541614884473486838;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.009150000000000003617) ) ) {
              sum += (double)0.01135610337371864738;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.731452455590386963) ) ) {
                sum += (double)0.006686243533209287188;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1310.535920419476724) ) ) {
                  sum += (double)-0.003390513964778392106;
                } else {
                  sum += (double)-0.01708654030073607569;
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.01470545972055095629;
      }
    }
  }
  return sum;
}
