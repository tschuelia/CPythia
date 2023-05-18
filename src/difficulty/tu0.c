#include "prediction.h"
double predict_margin_unit0(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5321155000000000745) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1344370000000000287) ) ) {
            sum += (double)0.3271909490559478662;
          } else {
            sum += (double)0.3383939090908772429;
          }
        } else {
          sum += (double)0.3501477679005104982;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.100981848184818812) ) ) {
            sum += (double)0.3573335543112027279;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
              sum += (double)0.3355017815177554485;
            } else {
              sum += (double)0.3481059907865730607;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1510.595905575025881) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                sum += (double)0.3607397672542947409;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8150000000000000577) ) ) {
                  sum += (double)0.3507141826615070568;
                } else {
                  sum += (double)0.3602622006474135441;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.325799200799202104) ) ) {
                sum += (double)0.3481273700104766111;
              } else {
                sum += (double)0.3283387847709133278;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
                sum += (double)0.3690879911191738416;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2333.321561901081623) ) ) {
                  sum += (double)0.3649787160115399165;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8284500000000000197) ) ) {
                    sum += (double)0.360355163189636174;
                  } else {
                    sum += (double)0.3467098134026103118;
                  }
                }
              }
            } else {
              sum += (double)0.3465919866999622734;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3755158646863254179) ) ) {
                sum += (double)0.3763556677035249098;
              } else {
                sum += (double)0.3704337375397450116;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                sum += (double)0.3703558052555970259;
              } else {
                sum += (double)0.3547767580208381899;
              }
            }
          } else {
            sum += (double)0.379439492486037977;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
            sum += (double)0.3673867916739521622;
          } else {
            sum += (double)0.3558371420358386605;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5399840518659736466) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
            sum += (double)0.3853806436856558881;
          } else {
            sum += (double)0.3905421750054346997;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8066835000000001088) ) ) {
            sum += (double)0.368610503932274236;
          } else {
            sum += (double)0.3924310248706893156;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3540665000000000617) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
            sum += (double)0.3541956579069715505;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20716.01340554505077) ) ) {
              sum += (double)0.3492097257224135443;
            } else {
              sum += (double)0.3373300061585300935;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
              sum += (double)0.3268972384034576906;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.048809523809525857) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5706.165657108974301) ) ) {
                  sum += (double)0.3532817033021751763;
                } else {
                  sum += (double)0.3379192048577736029;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2025.244583427236194) ) ) {
                  sum += (double)0.3346763280670539409;
                } else {
                  sum += (double)0.3256799049020497883;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04715000000000000441) ) ) {
              sum += (double)0.3615067285373084194;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7371304289733293658) ) ) {
                sum += (double)0.345689904028559869;
              } else {
                sum += (double)0.3282335265731284313;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2063695000000000113) ) ) {
            sum += (double)0.3235471385981676939;
          } else {
            sum += (double)0.3283497247025566335;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
            sum += (double)0.3286459752580289662;
          } else {
            sum += (double)0.3434843786548553712;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5540.546691107218976) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4795045000000000557) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
              sum += (double)0.3625131026468214612;
            } else {
              sum += (double)0.3541313790589230015;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6526275000000001381) ) ) {
              sum += (double)0.3655304561940617702;
            } else {
              sum += (double)0.3776976580687595453;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2353.687490992878338) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
                sum += (double)0.3520278879973720021;
              } else {
                sum += (double)0.3394524774152526958;
              }
            } else {
              sum += (double)0.3367139320467247288;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9379530110910064833) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
                sum += (double)0.3761325508378868254;
              } else {
                sum += (double)0.3591308272373521793;
              }
            } else {
              sum += (double)0.3424353907044738743;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93867243867244454) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17051.15547769272598) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4505095000000000627) ) ) {
                sum += (double)0.3493209159268807484;
              } else {
                sum += (double)0.3612463760163228677;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5732.82001265566214) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
                    sum += (double)0.3296360597437794082;
                  } else {
                    sum += (double)0.3443913593012048469;
                  }
                } else {
                  sum += (double)0.3525855075197694144;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4190.954657040626444) ) ) {
                  sum += (double)0.3382491947681097733;
                } else {
                  sum += (double)0.3260646004785577867;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
              sum += (double)0.3525303035352528869;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)67.25628626692457601) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11458.24876613496417) ) ) {
                  sum += (double)0.3326142619849202786;
                } else {
                  sum += (double)0.343284977310620687;
                }
              } else {
                sum += (double)0.3266739538825147449;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17639.05176736719659) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.4247832738398927) ) ) {
                sum += (double)0.3595127741055548776;
              } else {
                sum += (double)0.3415691208456219652;
              }
            } else {
              sum += (double)0.3753714129595693283;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1201.367728319936987) ) ) {
                sum += (double)0.3674929996982864711;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7425.301902740433434) ) ) {
                  sum += (double)0.3579479917970544989;
                } else {
                  sum += (double)0.3399997445440063881;
                }
              }
            } else {
              sum += (double)0.3382482199838811598;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1344370000000000287) ) ) {
            sum += (double)-0.02124770445658062668;
          } else {
            sum += (double)-0.01095731027971589069;
          }
        } else {
          sum += (double)-0.000160892298886297809;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.328559547571523947) ) ) {
            sum += (double)0.005471834431129267776;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
              sum += (double)-0.0141840288875989002;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5.113654335801698814) ) ) {
                sum += (double)-0.0099577190724471909;
              } else {
                sum += (double)0.002972927989670122971;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1510.595905575025881) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                sum += (double)0.009568308242889051948;
              } else {
                sum += (double)0.001887608827874299317;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.325799200799202104) ) ) {
                sum += (double)-0.002016713328599764425;
              } else {
                sum += (double)-0.02019336880730764061;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
                sum += (double)0.01707741104365289447;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2353.687490992878338) ) ) {
                  sum += (double)0.01314256176578411719;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
                    sum += (double)0.01143905123596896008;
                  } else {
                    sum += (double)4.599264083120989762e-05;
                  }
                }
              }
            } else {
              sum += (double)-0.004000547173149531302;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6298699906795736103) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3227809997884624194) ) ) {
                sum += (double)0.02422535642136828052;
              } else {
                sum += (double)0.0183437931713809968;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                sum += (double)0.01883983770709739269;
              } else {
                sum += (double)0.007403771602445875268;
              }
            }
          } else {
            sum += (double)0.02673218028862182905;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
            sum += (double)0.011715439528062397;
          } else {
            sum += (double)-0.001912204737529458543;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5399840518659736466) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
            sum += (double)0.0322019968152339256;
          } else {
            sum += (double)0.03694308275004426489;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8066835000000001088) ) ) {
            sum += (double)0.01679791382570669164;
          } else {
            sum += (double)0.03867807106115565829;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3540665000000000617) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.44072681704260752) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
            sum += (double)0.006950036161041378731;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
              sum += (double)-0.01443552392424531788;
            } else {
              sum += (double)-0.0006247042549031654301;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
              sum += (double)-0.02044497866338280609;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.252450980392159963) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5706.165657108974301) ) ) {
                  sum += (double)0.001538953140477648199;
                } else {
                  sum += (double)-0.01122071733156882432;
                }
              } else {
                sum += (double)-0.01458734469021343537;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
              sum += (double)0.01612548196527366015;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6298699906795736103) ) ) {
                sum += (double)-0.002988602000385243845;
              } else {
                sum += (double)-0.02043397616326347171;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            sum += (double)-0.0242203782725322371;
          } else {
            sum += (double)-0.01058104327579199172;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19559.23761677038419) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057365000000000221) ) ) {
                sum += (double)-0.01144191672803784518;
              } else {
                sum += (double)0.004397132190520115953;
              }
            } else {
              sum += (double)-0.01671508687726702344;
            }
          } else {
            sum += (double)-0.0205525162027949751;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11908.89586363036506) ) ) {
              sum += (double)0.01161703737977362594;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4122825000000000517) ) ) {
                sum += (double)-0.001173005626934600556;
              } else {
                sum += (double)0.008114100369606067065;
              }
            }
          } else {
            sum += (double)0.0171619154308310061;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
                sum += (double)-0.01028994248670834014;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2353.687490992878338) ) ) {
                  sum += (double)0.002277160604589521971;
                } else {
                  sum += (double)-0.009031505310122275518;
                }
              }
            } else {
              sum += (double)-0.0241683915101831015;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9379530110910064833) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
                sum += (double)0.02370723268238349862;
              } else {
                sum += (double)0.008090428484765275;
              }
            } else {
              sum += (double)-0.00724503804689150769;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.62019230769231015) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17051.15547769272598) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4505095000000000627) ) ) {
                sum += (double)-0.001411175394498796667;
              } else {
                sum += (double)0.00921033823033097325;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
                    sum += (double)-0.005538498828725246619;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                      sum += (double)-0.01522529069815552714;
                    } else {
                      sum += (double)-0.004287684527247037636;
                    }
                  }
                } else {
                  sum += (double)0.007495585867769511551;
                }
              } else {
                sum += (double)-0.02047404088721943571;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
              sum += (double)0.002027567803096860365;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2019559617197731194) ) ) {
                sum += (double)-0.008862414571012139364;
              } else {
                sum += (double)-0.01677476054055934349;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17639.05176736719659) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.4247832738398927) ) ) {
                sum += (double)0.008441262885082784564;
              } else {
                sum += (double)-0.00804074350250257551;
              }
            } else {
              sum += (double)0.02300809437980028474;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1201.367728319936987) ) ) {
                sum += (double)0.01577143836492492582;
              } else {
                sum += (double)-0.001238705251595870757;
              }
            } else {
              sum += (double)-0.01109113187177888406;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
              sum += (double)-0.01124305591593371609;
            } else {
              sum += (double)0.002625437693413463364;
            }
          } else {
            sum += (double)-0.01790151031944861929;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
            sum += (double)0.003012892044000091418;
          } else {
            sum += (double)-0.01392070658108415966;
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.328559547571523947) ) ) {
            sum += (double)0.005026112044179101464;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2793.363867362420478) ) ) {
              sum += (double)0.006502819723835716152;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.074247175785397301) ) ) {
                sum += (double)-0.005415219330818831292;
              } else {
                sum += (double)-0.01640583572266902934;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                sum += (double)0.009664449872091690832;
              } else {
                sum += (double)0.003122974676879915548;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.59687500000000426) ) ) {
                  sum += (double)0.007492016697681333492;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1088.019582622902362) ) ) {
                    sum += (double)-0.001379177400783421952;
                  } else {
                    sum += (double)-0.01903003812262983596;
                  }
                }
              } else {
                sum += (double)-0.01392515759049191455;
              }
            }
          } else {
            if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
              sum += (double)-0.01040934328391523826;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                  sum += (double)0.01623261390714151806;
                } else {
                  sum += (double)0.01120034478326811973;
                }
              } else {
                sum += (double)-0.003457994386992611392;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
              sum += (double)0.01910197434044815998;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
                sum += (double)0.01733139747137061801;
              } else {
                sum += (double)0.00572552000408856239;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.536235053951590324) ) ) {
              sum += (double)0.02459618132223895942;
            } else {
              sum += (double)0.01891387052271201533;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.532388663967611642) ) ) {
            sum += (double)0.01604972434543861307;
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)187.8653910326616767) ) ) {
              sum += (double)0.003501176746387566277;
            } else {
              sum += (double)0.01939875398261452222;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6399918775570295759) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
            sum += (double)0.028524475363289295;
          } else {
            sum += (double)0.03335639151776136069;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7513157894736842701) ) ) {
            sum += (double)0.03225058968397174347;
          } else {
            sum += (double)0.01329249429312699335;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
            sum += (double)0.004077113711132258379;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
              sum += (double)0.0005928287590760160158;
            } else {
              sum += (double)-0.01050798050536564353;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
              sum += (double)-0.01976662497903976592;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.048809523809525857) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5890.241073706772113) ) ) {
                  sum += (double)0.00345214547310901702;
                } else {
                  sum += (double)-0.009803323265170724859;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2593.773207383128465) ) ) {
                  sum += (double)-0.01249217725036935733;
                } else {
                  sum += (double)-0.01898822599014120954;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007250000000000000368) ) ) {
                sum += (double)0.0164067725638040382;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.313112745098040435) ) ) {
                  sum += (double)0.004459435334653222109;
                } else {
                  sum += (double)-0.00848917800039146464;
                }
              }
            } else {
              sum += (double)-0.02340065268880320293;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.197938500000000045) ) ) {
            sum += (double)-0.02274460615878849679;
          } else {
            sum += (double)-0.0184849737838862424;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
            sum += (double)-0.01880625277341123336;
          } else {
            sum += (double)-0.005160060454879611576;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3371.239524566822638) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817765000000001407) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
              sum += (double)0.01199055623781612907;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
                  sum += (double)0.006586100867110487693;
                } else {
                  sum += (double)-0.008416024533907738581;
                }
              } else {
                sum += (double)0.00629363012543361286;
              }
            }
          } else {
            sum += (double)0.01816328784769570548;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
            sum += (double)-0.01105324050876723037;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2105.992513001595853) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5877760000000001872) ) ) {
                sum += (double)0.00364478066745377435;
              } else {
                sum += (double)0.02218376153387825039;
              }
            } else {
              sum += (double)-0.004172075678467583246;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5053.885076473124172) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                sum += (double)-0.01790629841172763567;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.194724803310769135) ) ) {
                  sum += (double)-0.005595913842454637403;
                } else {
                  sum += (double)-0.02169036128445255701;
                }
              }
            } else {
              sum += (double)0.001367639164307611057;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13827.99262003128206) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.34234234234234506) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4407500000000000306) ) ) {
                  sum += (double)-0.007467214302763998564;
                } else {
                  sum += (double)0.002087522610480600609;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7371304289733293658) ) ) {
                  sum += (double)-0.0159664853384236527;
                } else {
                  sum += (double)-0.002156915877923241617;
                }
              }
            } else {
              sum += (double)-0.01584502900396947411;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.4247832738398927) ) ) {
                sum += (double)0.008355597021533650928;
              } else {
                sum += (double)-0.006848167673433856045;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                sum += (double)0.005133449743164858643;
              } else {
                sum += (double)-0.009474694370802923607;
              }
            }
          } else {
            sum += (double)0.02214803704384417024;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347230000000001704) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2053.868197878035971) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
              sum += (double)-0.01164208019971603447;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
                sum += (double)0.01367662671956178591;
              } else {
                sum += (double)-0.003208847760687555395;
              }
            }
          } else {
            sum += (double)0.004470478398840134482;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
            sum += (double)-0.01768140148391366892;
          } else {
            sum += (double)-0.008082418102310900271;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075923801982495709) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9163500000000001089) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                sum += (double)0.011002541049720772;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2211.906081740259197) ) ) {
                  sum += (double)0.007057089951236421126;
                } else {
                  sum += (double)-0.003084376341734400111;
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8671.400547327515596) ) ) {
                sum += (double)-0.01164471424553605201;
              } else {
                sum += (double)0.008389992308666991902;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.363139534883722526) ) ) {
                sum += (double)0.01506623876666861317;
              } else {
                sum += (double)0.007685859096183267694;
              }
            } else {
              sum += (double)-0.0004075660236176223915;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2793.363867362420478) ) ) {
            sum += (double)0.007943006904084145073;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.908568443051202213) ) ) {
              sum += (double)0.001805802110248376415;
            } else {
              sum += (double)-0.0107387970521442104;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
              sum += (double)0.01881240847165086341;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                sum += (double)0.01522912451591425936;
              } else {
                sum += (double)0.002853692515670939664;
              }
            }
          } else {
            sum += (double)0.0226504306578547733;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.091810344827586654) ) ) {
            sum += (double)0.0136337670882549708;
          } else {
            sum += (double)0.003636895124386601078;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6399918775570295759) ) ) {
            sum += (double)0.02704114155191228441;
          } else {
            sum += (double)0.01249259879251120656;
          }
        } else {
          sum += (double)0.03125010841586831067;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3436155000000000181) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.44072681704260752) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2043540000000000079) ) ) {
            sum += (double)-0.009678583996661035971;
          } else {
            sum += (double)0.002859582917643131023;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
              sum += (double)-0.01664465909649624764;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.252450980392159963) ) ) {
                sum += (double)-0.005250135764912761127;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08115000000000001379) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
                    sum += (double)-0.004480479990002624903;
                  } else {
                    sum += (double)-0.01701431603715085339;
                  }
                } else {
                  sum += (double)-0.009347969301538958109;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
              sum += (double)0.01343786608392307479;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6298699906795736103) ) ) {
                sum += (double)-0.002950689421290802854;
              } else {
                sum += (double)-0.01742649100118613681;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
            sum += (double)-0.0204871393291916927;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87146226415094574) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)13833.51142176279791) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
                  sum += (double)-0.01137908872392665374;
                } else {
                  sum += (double)-0.01914871072259649934;
                }
              } else {
                sum += (double)0.006465392170143811727;
              }
            } else {
              sum += (double)-0.01766515668494828342;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
            sum += (double)-0.006498217477104901302;
          } else {
            sum += (double)-0.01913978369324595766;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2928.425989978642974) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
              sum += (double)0.007766246800812754737;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
                  sum += (double)-0.0002986379519889702195;
                } else {
                  sum += (double)-0.01242679621010204551;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.87456103385307138) ) ) {
                  sum += (double)-0.0105969198519536862;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1387.069702312839809) ) ) {
                    sum += (double)0.01419243309793260729;
                  } else {
                    sum += (double)0.002126280548564883112;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6225430000000001796) ) ) {
              sum += (double)0.01103279607228157579;
            } else {
              sum += (double)0.01972148015728571527;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
              sum += (double)-0.006775751121317275666;
            } else {
              sum += (double)-0.02249209146486008323;
            }
          } else {
            sum += (double)0.008751847179023365675;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93867243867244454) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17051.15547769272598) ) ) {
              sum += (double)0.002247057512266178048;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000000000000799) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                    sum += (double)-0.01982264623810142679;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
                      sum += (double)-0.004401665205897902812;
                    } else {
                      sum += (double)-0.01017438767957299685;
                    }
                  }
                } else {
                  sum += (double)0.007840879824317584929;
                }
              } else {
                sum += (double)-0.01753819604211548713;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
              sum += (double)0.002835859594415360285;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)67.25628626692457601) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
                  sum += (double)-0.003751311945725884119;
                } else {
                  sum += (double)-0.01381594141888119534;
                }
              } else {
                sum += (double)-0.01902714299965338474;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.78183361629881531) ) ) {
                sum += (double)0.01187882373867571451;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8220058538128890424) ) ) {
                  sum += (double)-0.003549816671321100181;
                } else {
                  sum += (double)0.01277677016878913697;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                sum += (double)0.004715291246841384933;
              } else {
                sum += (double)-0.008702908520320679422;
              }
            }
          } else {
            sum += (double)0.02034391090332202459;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1419531765899220976) ) ) {
            sum += (double)-0.01563539663387363346;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
              sum += (double)0.003844885240363039511;
            } else {
              sum += (double)-0.01013320968128492323;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
            sum += (double)0.01241559010214505522;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
              sum += (double)0.009255201268055911895;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.548804922219870317) ) ) {
                sum += (double)-0.002625755164971482238;
              } else {
                sum += (double)-0.01950338108801199372;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.924550000000000094) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.362024000000000068) ) ) {
                  sum += (double)0.007165570464310752619;
                } else {
                  sum += (double)0.0112822105941804765;
                }
              } else {
                sum += (double)-0.0003693781824857020183;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5396.80911722399378) ) ) {
                sum += (double)0.008018475181786794553;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.870650000000000035) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.315748500000000043) ) ) {
                      sum += (double)-0.004379057337826688934;
                    } else {
                      sum += (double)0.002414206218925285356;
                    }
                  } else {
                    sum += (double)0.00906607611384422328;
                  }
                } else {
                  sum += (double)-0.01229859717972651111;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.00714285714286333) ) ) {
              sum += (double)-0.000748230149996176189;
            } else {
              sum += (double)-0.01880237505397038336;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
            sum += (double)0.000504521520326013358;
          } else {
            sum += (double)-0.01306171653929265493;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6829935000000001422) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6670401960206224778) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3787240042526709427) ) ) {
                sum += (double)0.01748059404456984642;
              } else {
                sum += (double)0.01272503168772868946;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2865.318948452297718) ) ) {
                sum += (double)0.01313875734408424638;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
                  sum += (double)-0.003550933120790416772;
                } else {
                  sum += (double)0.009637690455473314419;
                }
              }
            }
          } else {
            sum += (double)0.01936166343414402052;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.062745098039215907) ) ) {
              sum += (double)0.01486772090837337745;
            } else {
              sum += (double)0.004377029738458154164;
            }
          } else {
            sum += (double)-0.007271628894822558531;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6399918775570295759) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.756425009589567043) ) ) {
            sum += (double)0.02772818147981458495;
          } else {
            sum += (double)0.02240948490060894888;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
            sum += (double)0.0183422326258480678;
          } else {
            sum += (double)0.002984908205612125508;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3540665000000000617) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32109164420485392) ) ) {
            sum += (double)0.005605309355271333345;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
              sum += (double)-0.01090796378382884006;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11657.82777714064287) ) ) {
                sum += (double)-0.005044855806297350934;
              } else {
                sum += (double)0.00899037395330127935;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
                sum += (double)-0.01731725978831778756;
              } else {
                sum += (double)-0.008190737743331849216;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2593.773207383128465) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
                  sum += (double)-0.006655033101082849858;
                } else {
                  sum += (double)-0.01175601336655218536;
                }
              } else {
                sum += (double)-0.01574089665853567119;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
              sum += (double)0.009806481009281884861;
            } else {
              sum += (double)-0.006704288927907618885;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
            sum += (double)-0.01926277264828013189;
          } else {
            sum += (double)-0.01584092881086641633;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3545500000000000873) ) ) {
            sum += (double)-0.01635503071434529776;
          } else {
            sum += (double)-0.004444175790867676765;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4505095000000000627) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45141065830721239) ) ) {
              sum += (double)0.006937427261112283187;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7451.581543301115744) ) ) {
                sum += (double)-0.007907038793797916201;
              } else {
                sum += (double)0.004907830278994718999;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
              sum += (double)0.009237199014076179215;
            } else {
              sum += (double)0.01982459698602606971;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1643.069582787823265) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000000000000865) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
                sum += (double)0.001671776819693380264;
              } else {
                sum += (double)-0.01225125438702092014;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4043265000000000886) ) ) {
                sum += (double)-0.004738712961371466768;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07449922958397615) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)294.2731973911765522) ) ) {
                    sum += (double)-0.004844661102531602238;
                  } else {
                    sum += (double)0.007531597192372118353;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3871448717291648411) ) ) {
                    sum += (double)-0.007403133526935003553;
                  } else {
                    sum += (double)0.004136991511835329781;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.01294849649796810109;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5626395000000000701) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13827.99262003128206) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
              sum += (double)-0.0002886727292812173553;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3368947088135722523) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.45833333333334281) ) ) {
                  sum += (double)0.0004982286326848409065;
                } else {
                  sum += (double)-0.0172230985503029517;
                }
              } else {
                sum += (double)-0.01213105450242876748;
              }
            }
          } else {
            sum += (double)-0.01253444634377152804;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17639.05176736719659) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.4247832738398927) ) ) {
                sum += (double)0.0082059147814777713;
              } else {
                sum += (double)-0.006862468060953460201;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                sum += (double)0.006819925664538469511;
              } else {
                sum += (double)-0.008850420253731960257;
              }
            }
          } else {
            sum += (double)0.02026620575241769653;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5466515000000001789) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
              sum += (double)-0.009666746774574283552;
            } else {
              sum += (double)0.0005767038777614050347;
            }
          } else {
            sum += (double)0.003430694363428018773;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.808257918552036436) ) ) {
            sum += (double)-0.007836393319940208532;
          } else {
            sum += (double)-0.01693504338234382012;
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)760.1404084372057923) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9379530110910064833) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
              sum += (double)0.006610678311923211259;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                sum += (double)-0.01072015120537125193;
              } else {
                sum += (double)0.00216530291925141026;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2793.363867362420478) ) ) {
              sum += (double)0.01148551181630201763;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.275716440422323128) ) ) {
                sum += (double)0.002022815109150983247;
              } else {
                sum += (double)-0.01094619757340967864;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                sum += (double)0.01049776890858108297;
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5420.781404110555741) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358141500000000057) ) ) {
                    sum += (double)-0.004311887828483209478;
                  } else {
                    sum += (double)0.005817594888240511242;
                  }
                } else {
                  sum += (double)0.01487353279701492462;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4006.744949928525784) ) ) {
                sum += (double)0.008865781112745253767;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.78759398496241317) ) ) {
                  sum += (double)0.005517712523227046029;
                } else {
                  sum += (double)-0.01037226421763657799;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.363139534883722526) ) ) {
              sum += (double)0.01344433901424204984;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5261.246056081498864) ) ) {
                sum += (double)0.01259296693357048538;
              } else {
                sum += (double)-0.001177336720935792148;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7552793108361041119) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.382558990305469582) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3787240042526709427) ) ) {
              sum += (double)0.02013188820955533545;
            } else {
              sum += (double)0.0152841434384711275;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1172.762349355894003) ) ) {
              sum += (double)0.01465409334346484162;
            } else {
              sum += (double)-0.001405378305408208151;
            }
          }
        } else {
          sum += (double)0.005740301006960968865;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9554166948649117641) ) ) {
            sum += (double)0.02266976541269359949;
          } else {
            sum += (double)0.009510137298659418481;
          }
        } else {
          sum += (double)0.02652535390246245003;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5396.80911722399378) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
              sum += (double)0.005801618812943921955;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1766435000000000366) ) ) {
                  sum += (double)-0.01633305488676814118;
                } else {
                  sum += (double)-0.003022039839211097118;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09065000000000002223) ) ) {
                  sum += (double)0.01372357184192717246;
                } else {
                  sum += (double)-0.003444723148770086757;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
              sum += (double)0.003476582621587825678;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2648210000000000286) ) ) {
                sum += (double)-0.01243837528220985943;
              } else {
                sum += (double)-0.006355974537108668651;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06285000000000001696) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3571.445901236788359) ) ) {
              sum += (double)-0.01099827933693294998;
            } else {
              sum += (double)-0.01741500134303634179;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2982875000000000387) ) ) {
              sum += (double)-0.01221906800369752105;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)939.1508267619991557) ) ) {
                sum += (double)-0.01229527771394079913;
              } else {
                sum += (double)-0.001064234717500280166;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            sum += (double)-0.01735466529181686757;
          } else {
            sum += (double)-0.008550889815932903593;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19559.23761677038419) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057365000000000221) ) ) {
                sum += (double)-0.00782929733914596894;
              } else {
                sum += (double)0.005946197186564439532;
              }
            } else {
              sum += (double)-0.01192161645686594731;
            }
          } else {
            sum += (double)-0.01480564625344144014;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3371.239524566822638) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817765000000001407) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
              sum += (double)0.009727300511475722375;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                sum += (double)0.001907946723591257433;
              } else {
                sum += (double)0.01176836203652734981;
              }
            }
          } else {
            sum += (double)0.01435407516736315371;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
            sum += (double)-0.009356950454318597662;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4587524074502786764) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.45022222222222652) ) ) {
                sum += (double)0.01346125032595377018;
              } else {
                sum += (double)-0.001879687717367042182;
              }
            } else {
              sum += (double)-0.004150440284190564343;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5053.885076473124172) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                sum += (double)-0.01465092524600035938;
              } else {
                sum += (double)-0.005274869987927872927;
              }
            } else {
              sum += (double)0.001513125194534281409;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13827.99262003128206) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.34234234234234506) ) ) {
                sum += (double)-0.002848130118787074727;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7371304289733293658) ) ) {
                  sum += (double)-0.012756353347539778;
                } else {
                  sum += (double)-0.0003083594189846286418;
                }
              }
            } else {
              sum += (double)-0.01254197957492352196;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16031.30829179268949) ) ) {
                sum += (double)0.01026003543546681954;
              } else {
                sum += (double)-0.001130676296040016016;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-28217.98058526761452) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)183.7630769230769658) ) ) {
                  sum += (double)0.00717555215872333306;
                } else {
                  sum += (double)-0.009340403125058184888;
                }
              } else {
                sum += (double)-0.01085142711625105942;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.677320500000000103) ) ) {
              sum += (double)0.006295814538482822839;
            } else {
              sum += (double)0.02531886130865990819;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.162893810690548) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
            sum += (double)0.01214950517533276882;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1360340320715830165) ) ) {
              sum += (double)-0.01289030483902262221;
            } else {
              sum += (double)-0.002663559349139071192;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
            sum += (double)-0.01460928174838990561;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8781420789956296824) ) ) {
              sum += (double)-0.00587213669926558296;
            } else {
              sum += (double)-0.01846690910332869293;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1088.019582622902362) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044849653237345022) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.920300000000000118) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
                  sum += (double)0.009301546944588345855;
                } else {
                  sum += (double)0.004577004682260839806;
                }
              } else {
                sum += (double)-0.00394493134246072779;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2380.495614866096275) ) ) {
                sum += (double)0.001853819011595173646;
              } else {
                sum += (double)-0.01383097655796066729;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04825000000000000816) ) ) {
              sum += (double)-0.009042145534004477486;
            } else {
              sum += (double)0.00146402607947835532;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4507.9565926974592) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9581.734211346893062) ) ) {
              sum += (double)0.001360783713131646791;
            } else {
              sum += (double)0.01037259321499408617;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1366.16280735785358) ) ) {
                  sum += (double)-0.01342908352920225631;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358141500000000057) ) ) {
                    sum += (double)-0.007167986096744551061;
                  } else {
                    sum += (double)0.003884883692870760331;
                  }
                }
              } else {
                sum += (double)-0.01967532229243301733;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)786.2947641301196882) ) ) {
                sum += (double)-0.009635538141236575302;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3016800000000000592) ) ) {
                  sum += (double)-0.007225557934280946518;
                } else {
                  sum += (double)0.003713445141201431737;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1468760000000000343) ) ) {
            sum += (double)-0.01665824426559640165;
          } else {
            sum += (double)-0.01399277250764039381;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03305000000000000299) ) ) {
            sum += (double)0.004039276526358849366;
          } else {
            sum += (double)-0.008889590143249859189;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.70619946091644792) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14091.15150991420705) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
              sum += (double)0.008053618027551530736;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
                  sum += (double)0.005276305841761737801;
                } else {
                  sum += (double)-0.0128389277824066169;
                }
              } else {
                sum += (double)-0.0006028757657019738351;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2624768466104180908) ) ) {
                sum += (double)-0.008456084869653041416;
              } else {
                sum += (double)-0.01523543239190737301;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)294.2731973911765522) ) ) {
                sum += (double)-0.01753173160835893099;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                  sum += (double)-0.008446191240342440856;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.582324042174648393) ) ) {
                    sum += (double)0.008480846911753617268;
                  } else {
                    sum += (double)-0.009099098515276293764;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-0.0132365218913126359;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6225430000000001796) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)642.537947836085209) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.285058977719528484) ) ) {
            sum += (double)0.01218113490478743219;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)15.77248611608338713) ) ) {
              sum += (double)-0.00165353627195463323;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                sum += (double)0.001096891190230132006;
              } else {
                sum += (double)0.0101638021220338149;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
            sum += (double)0.01042575751185945664;
          } else {
            sum += (double)0.01443352186660163891;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7602760000000000629) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6399918775570295759) ) ) {
            sum += (double)0.01906017156491814427;
          } else {
            sum += (double)0.0107099209869176374;
          }
        } else {
          sum += (double)0.02383669577032852815;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
              sum += (double)0.008978047852741866119;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075923801982495709) ) ) {
                  sum += (double)0.00767523113962977066;
                } else {
                  sum += (double)-0.00494737671736046429;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000000000000865) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                    sum += (double)0.001681337676776648807;
                  } else {
                    sum += (double)-0.0112664559737183801;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675530000000000519) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1390121841946631853) ) ) {
                      sum += (double)-0.01397812830118267714;
                    } else {
                      sum += (double)0.002495893379618196149;
                    }
                  } else {
                    sum += (double)0.006844095069463961185;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.545995454461449814) ) ) {
              sum += (double)0.01599988742702954103;
            } else {
              sum += (double)0.006518204020967498236;
            }
          }
        } else {
          sum += (double)-0.006688564329720050883;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)58.19230769230770051) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16031.30829179268949) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.07742257742258118) ) ) {
                sum += (double)0.006079111924469138284;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-67546.57382663110911) ) ) {
                  sum += (double)0.009647102776776909569;
                } else {
                  sum += (double)-0.003066720172361507655;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.64761904761907374) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
                      sum += (double)-0.0003087849486118185893;
                    } else {
                      sum += (double)-0.01487260221045427766;
                    }
                  } else {
                    sum += (double)-0.01448193816840256248;
                  }
                } else {
                  sum += (double)-0.01808839597924855741;
                }
              } else {
                sum += (double)-0.009781612475663418668;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1031000000000000111) ) ) {
              sum += (double)0.0002745662158657390887;
            } else {
              sum += (double)-0.01540722916730534291;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
              sum += (double)0.01054266557514221998;
            } else {
              sum += (double)-0.004455962158976747509;
            }
          } else {
            sum += (double)0.01937884679176637981;
          }
        }
      }
    }
  }
  return sum;
}
