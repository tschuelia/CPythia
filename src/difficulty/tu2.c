#include "prediction.h"
double predict_margin_unit2(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4209690000000000931) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
      sum += (double)-0.005025366815718053728;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000000000000594) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4775924739126843899) ) ) {
          sum += (double)0.01600416269753783885;
        } else {
          sum += (double)-0.00455681084596216545;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4273500000000000631) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.807323232323232443) ) ) {
            sum += (double)0.003312734165673854314;
          } else {
            sum += (double)-0.006593900012875466947;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2602810000000000401) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4895500000000000407) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1878265000000000351) ) ) {
                sum += (double)0.01814464383206411055;
              } else {
                sum += (double)0.0007887238151875474194;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03870000000000000523) ) ) {
                sum += (double)0.003366416530314446549;
              } else {
                sum += (double)-0.006651884786368773318;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.875000000000000111) ) ) {
              sum += (double)0.01448106155174853395;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8575500000000001455) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8121500000000000385) ) ) {
                  sum += (double)0.002124778884646107147;
                } else {
                  sum += (double)0.01535686496071880618;
                }
              } else {
                sum += (double)-0.008343592270710614017;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.943152454780363136) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5950000000000000844) ) ) {
        sum += (double)-0.01055938130669759924;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005950000000000001295) ) ) {
          sum += (double)0.01158481351623614868;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.276298222740671173) ) ) {
            sum += (double)0.006867913949164352813;
          } else {
            sum += (double)-0.0005394322854581748471;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03010000000000000522) ) ) {
        sum += (double)-0.008450462836145672396;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3186500000000000443) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.946466452074269271) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)129.716666666666697) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5788500000000000867) ) ) {
                sum += (double)0.01982160986626794325;
              } else {
                sum += (double)0.008881172419041107047;
              }
            } else {
              sum += (double)-0.003805136579488695939;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2472.994105478598158) ) ) {
              sum += (double)0.007373534853480531205;
            } else {
              sum += (double)-0.01199471790673935223;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7867.815501298001436) ) ) {
            sum += (double)0.004824025786841827819;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8724076688193924678) ) ) {
              sum += (double)-0.008283491194700563429;
            } else {
              sum += (double)0.003101821980530749309;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3224350000000000827) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05500000000000000722) ) ) {
      sum += (double)-0.006481744612434862593;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000000000000594) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.38860441767068821) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
            sum += (double)0.002752117098569458256;
          } else {
            sum += (double)0.01430195042641784625;
          }
        } else {
          sum += (double)-0.005070502090678239392;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.742918961447680104) ) ) {
          sum += (double)0.00678304985493965399;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.094946129033759652) ) ) {
            sum += (double)-0.002707616122076382352;
          } else {
            sum += (double)-0.007814667971295182272;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.252284686893363308) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09280000000000002136) ) ) {
        sum += (double)0.008088341096500972771;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7854755000000001042) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)108.7425925925926009) ) ) {
            sum += (double)0.003289595057483962227;
          } else {
            sum += (double)-0.00937416660940509211;
          }
        } else {
          sum += (double)0.01016365259977673394;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8138480000000000159) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7757.51780776707983) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.38860441767068821) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5160500000000001197) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.208711433756811) ) ) {
                sum += (double)0.006891936462685692259;
              } else {
                sum += (double)0.0192241745234148706;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.71246246246246336) ) ) {
                sum += (double)0.01130178301530318681;
              } else {
                sum += (double)-0.003960901956235085217;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6119000000000001105) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2681000000000000605) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)169.9806397306397514) ) ) {
                  sum += (double)0.008978823083114048989;
                } else {
                  sum += (double)-0.007035080705999967668;
                }
              } else {
                sum += (double)-0.01291993576292392067;
              }
            } else {
              sum += (double)0.009702220266776308624;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.50657894736842124) ) ) {
            sum += (double)0.005029337299558602793;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03585000000000000686) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5968835000000001223) ) ) {
                sum += (double)-0.009618000468368753317;
              } else {
                sum += (double)0.006969785753479305034;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.023643244746905046) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.03571428571428825) ) ) {
                  sum += (double)0.003194540687400816877;
                } else {
                  sum += (double)-0.01129258778611309105;
                }
              } else {
                sum += (double)-0.004030793147268074868;
              }
            }
          }
        }
      } else {
        sum += (double)0.01165266561782625672;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4370275000000000687) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559985000000000732) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.82404540763674028) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4200500000000000345) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08985000000000002707) ) ) {
            sum += (double)0.003243864733713550368;
          } else {
            sum += (double)-0.005964350239572537363;
          }
        } else {
          sum += (double)0.009324360888082621618;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.50334316617502672) ) ) {
          sum += (double)-0.01548410392859498469;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000000000000594) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000000000000167) ) ) {
              sum += (double)-0.004631685286783865721;
            } else {
              sum += (double)0.007142502423966599033;
            }
          } else {
            sum += (double)-0.003995106091467316364;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4554000000000000825) ) ) {
        sum += (double)-0.003065702805317077791;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1751921495685277441) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3386000000000000676) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.75440184815185418) ) ) {
              sum += (double)-0.002269347109275135065;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3242065000000000641) ) ) {
                sum += (double)-0.0005062763426668239006;
              } else {
                sum += (double)0.01205989166458308094;
              }
            }
          } else {
            sum += (double)-0.01090694892958389041;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1918157216885944261) ) ) {
            sum += (double)0.01338867066062159744;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.18402777777778567) ) ) {
              sum += (double)0.004461103423070054801;
            } else {
              sum += (double)-0.005073012327748509763;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6750000000000001554) ) ) {
      sum += (double)-0.006488670604865219745;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.244044242768009401) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.636722972488512839) ) ) {
          sum += (double)0.006730348475378141078;
        } else {
          sum += (double)0.0003782197186758778202;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.467454196533900523) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.004000000000000000951) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8489585963449997053) ) ) {
              sum += (double)-0.01165937531948550362;
            } else {
              sum += (double)0.008195009590813505385;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02430000000000000215) ) ) {
              sum += (double)-0.004292704763568837983;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5353500000000001036) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4481876643282757811) ) ) {
                  sum += (double)0.004197606313962180466;
                } else {
                  sum += (double)0.01044513352712456156;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1891183553735491796) ) ) {
                  sum += (double)0.01055277092625885905;
                } else {
                  sum += (double)-0.003817974474196566582;
                }
              }
            }
          }
        } else {
          sum += (double)-0.007578730899907583016;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4370275000000000687) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05500000000000000722) ) ) {
      sum += (double)-0.005103936368401214806;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000000000000594) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2258850621187963037) ) ) {
          sum += (double)0.01108893586424289368;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2015435000000000143) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.198650000000000021) ) ) {
              sum += (double)0.01480824563448212769;
            } else {
              sum += (double)-0.004655072950593921836;
            }
          } else {
            sum += (double)-0.003531522920640744675;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003850000000000000557) ) ) {
          sum += (double)-0.009677341486374908125;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559985000000000732) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.82404540763674028) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2162155000000000327) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3483000000000001095) ) ) {
                  sum += (double)0.001499708599311664736;
                } else {
                  sum += (double)0.0131141654481475977;
                }
              } else {
                sum += (double)-0.005105739527628610705;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.50334316617502672) ) ) {
                sum += (double)-0.01431054040353772067;
              } else {
                sum += (double)-0.002920957459688766286;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4554000000000000825) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.009150000000000003617) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8114137916963670705) ) ) {
                  sum += (double)-0.00390699121112950392;
                } else {
                  sum += (double)0.01084900320426835166;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1864.88550111141808) ) ) {
                  sum += (double)-0.002074760308962970371;
                } else {
                  sum += (double)-0.008904302261978545852;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1751921495685277441) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8198500000000000787) ) ) {
                  sum += (double)-0.005213538899957087351;
                } else {
                  sum += (double)0.005201727001645500316;
                }
              } else {
                sum += (double)0.003969842027381290279;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.710438000000000125) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6750000000000001554) ) ) {
        sum += (double)-0.005550031491985019105;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9150000000000001465) ) ) {
          sum += (double)0.01253599157320140454;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7618500000000001382) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)96.80384615384616609) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8231.043625351763694) ) ) {
                sum += (double)0.00623405407579651679;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.943152454780363136) ) ) {
                  sum += (double)0.003012687438558547988;
                } else {
                  sum += (double)-0.003535022304472397459;
                }
              }
            } else {
              sum += (double)-0.009759807176420810804;
            }
          } else {
            sum += (double)0.005757932258334289184;
          }
        }
      }
    } else {
      sum += (double)0.005857235519655648939;
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6341500000000001025) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01515000000000000201) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1972000000000000142) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8857367863762966032) ) ) {
            sum += (double)-0.006203148740236595453;
          } else {
            sum += (double)0.006278199715129361043;
          }
        } else {
          sum += (double)0.01209281125008814482;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-963.6908792882526313) ) ) {
          sum += (double)-0.002569855803623912437;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8150000000000000577) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1060500000000000193) ) ) {
              sum += (double)-0.007641945488894219193;
            } else {
              sum += (double)0.005104724887332779022;
            }
          } else {
            sum += (double)-0.01683048555120172929;
          }
        }
      }
    } else {
      sum += (double)0.008974324323751097648;
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.807323232323232443) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-64.74871345758442942) ) ) {
        sum += (double)0.0036780591171060497;
      } else {
        sum += (double)0.01270962206041472038;
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-23320.56630154126105) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.37382075471698428) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6843500000000001249) ) ) {
            sum += (double)0.01390901517333350407;
          } else {
            sum += (double)0.003489702181421981946;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-113970.0703560906841) ) ) {
            sum += (double)0.01025371255814035848;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5160500000000001197) ) ) {
              sum += (double)-0.00751030336507314128;
            } else {
              sum += (double)0.003896620409209847809;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.20394736842106198) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.2345890410958944) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.2232789855072479) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2914020000000000499) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
                  sum += (double)0.00707659358944243231;
                } else {
                  sum += (double)-0.005717466856645193191;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.004000000000000000951) ) ) {
                  sum += (double)-0.01048987024013486175;
                } else {
                  sum += (double)0.003262987821517308352;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3099500000000000588) ) ) {
                sum += (double)-0.001173326403729000678;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4707500000000000573) ) ) {
                  sum += (double)-0.01727321900301833496;
                } else {
                  sum += (double)-0.005024913131609292684;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1098500000000000171) ) ) {
              sum += (double)0.02006961394782117228;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13716.36173526380844) ) ) {
                sum += (double)0.007709266436331006257;
              } else {
                sum += (double)-0.006763019726222275346;
              }
            }
          }
        } else {
          sum += (double)-0.01967218914371034882;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6341500000000001025) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01515000000000000201) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1972000000000000142) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8857367863762966032) ) ) {
            sum += (double)-0.005313807194696909021;
          } else {
            sum += (double)0.005378107315975207831;
          }
        } else {
          sum += (double)0.01035911611114123318;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-963.6908792882526313) ) ) {
          sum += (double)-0.002201407328788370504;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8150000000000000577) ) ) {
            sum += (double)-0.003249934100304130782;
          } else {
            sum += (double)-0.0144175509269521742;
          }
        }
      }
    } else {
      sum += (double)0.007687737440000296657;
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.467454196533900523) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08890000000000002067) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.79332084893883348) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3410175000000000289) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.409677419354840033) ) ) {
              sum += (double)-0.006009219585200645426;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4019235630275959648) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5875.815355594150788) ) ) {
                  sum += (double)-0.006412945874532130497;
                } else {
                  sum += (double)0.005164717159959870962;
                }
              } else {
                sum += (double)0.007297553966371248674;
              }
            }
          } else {
            sum += (double)0.00433938172016793116;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3825085000000000846) ) ) {
            sum += (double)0.02117279824719525694;
          } else {
            sum += (double)0.002260605406980133788;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.9888888888888907) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2056740000000000235) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.75595238095238315) ) ) {
              sum += (double)0.001452665080012134624;
            } else {
              sum += (double)-0.01155833375414239139;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-23320.56630154126105) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.20204081632653192) ) ) {
                sum += (double)-0.003498418194376949099;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.414220500000000047) ) ) {
                  sum += (double)0.01519535727226504866;
                } else {
                  sum += (double)0.003178146977940464035;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.676547515257193588) ) ) {
                sum += (double)0.003154284992099694752;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.053053766696358862) ) ) {
                  sum += (double)3.586211667862772745e-05;
                } else {
                  sum += (double)-0.00975721170741808419;
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24169.97664455441918) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3280050000000000465) ) ) {
              sum += (double)-0.006570859868348373316;
            } else {
              sum += (double)0.003825913664689409212;
            }
          } else {
            sum += (double)-0.01766019965160474728;
          }
        }
      }
    } else {
      sum += (double)-0.00393368752364516884;
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1259065514773265726) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2914020000000000499) ) ) {
        sum += (double)-0.001357206883362967751;
      } else {
        sum += (double)0.009197545556196977043;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03705000000000000654) ) ) {
        sum += (double)0.0009174277051413595382;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1061.317261442419749) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.151923076923078604) ) ) {
            sum += (double)0.00789727630932581838;
          } else {
            sum += (double)-0.002539447145911451556;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8150000000000000577) ) ) {
            sum += (double)-0.003912888359810137197;
          } else {
            sum += (double)-0.01367014211094286398;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.807323232323232443) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13510.52394035309953) ) ) {
        sum += (double)-0.006574325551127774281;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1427.611110815408438) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6496873316821761835) ) ) {
            sum += (double)0.00386720203402169142;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3966000000000000636) ) ) {
              sum += (double)0.01638323779824992291;
            } else {
              sum += (double)0.004785376342598522507;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.882665832290363328) ) ) {
            sum += (double)0.004748347210685851562;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5968835000000001223) ) ) {
              sum += (double)-0.01076649358945326769;
            } else {
              sum += (double)0.0008575584266180157804;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-45073.62793232055992) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.70575359599749987) ) ) {
          sum += (double)0.01677998092905858343;
        } else {
          sum += (double)0.002484336136762915846;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.09420289855072639) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.2345890410958944) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8287289774413838517) ) ) {
                sum += (double)-0.01582436372574486105;
              } else {
                sum += (double)-0.001288976405673674394;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.2232789855072479) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2914020000000000499) ) ) {
                  sum += (double)-0.002485332974922930399;
                } else {
                  sum += (double)0.002471074424756383031;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.85311240483654593) ) ) {
                  sum += (double)-0.01322748958866546212;
                } else {
                  sum += (double)-0.002410508300838203749;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1184500000000000136) ) ) {
              sum += (double)0.01304308634168903532;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17787.44282608967842) ) ) {
                sum += (double)0.006159906097948600334;
              } else {
                sum += (double)-0.005355886571298222945;
              }
            }
          }
        } else {
          sum += (double)-0.01300568413969387799;
        }
      }
    }
  }
  return sum;
}
