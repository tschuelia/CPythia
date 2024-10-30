
#include "prediction.h"

void predict_unit2(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711180124223603105) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3423668233450842813) ) ) {
            result[0] += -0.0040985807088630664;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)82.64618349518126195) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.00842650669357363;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7034.526718448786596) ) ) {
            result[0] += 0.0020437455019222755;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7444253094382086156) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3921815283179364009) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5053.885076473124172) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1275578474030112097) ) ) {
                    result[0] += -0.0023563200000869637;
                  } else {
                    result[0] += -0.008453174075313104;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8671.400547327515596) ) ) {
                    result[0] += 0.0007082162809488908;
                  } else {
                    result[0] += -0.005593119482423562;
                  }
                }
              } else {
                result[0] += 0.004616811911822637;
              }
            } else {
              result[0] += -0.012019960586031823;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1456989672773315592) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.870650000000000035) ) ) {
              result[0] += 0.008825522008657183;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8650000000000001021) ) ) {
                result[0] += -0.003302945352165108;
              } else {
                result[0] += 0.0036113674967169994;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.225650000000000045) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1337.280669109357859) ) ) {
                  result[0] += -0.012329127127764124;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-626.6516628632514312) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.011377436884092615;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04185000000000000525) ) ) {
                  result[0] += 0.0016486571550994326;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2924659694118884601) ) ) {
                    result[0] += -0.00011361774501591755;
                  } else {
                    result[0] += -0.008188241154559323;
                  }
                }
              }
            } else {
              result[0] += 0.0027367302644340664;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.395011276321747484) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2865.318948452297718) ) ) {
                    result[0] += 0.004907672072497378;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0035598529380134994;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10138.67215128568751) ) ) {
                    result[0] += 0.0006959933821679596;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4681341459817245365) ) ) {
                      result[0] += 0.006718973849501295;
                    } else {
                      result[0] += 0.004023869939399808;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09707842318205106569) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
                    result[0] += 0.008189495948569114;
                  } else {
                    result[0] += 0.0005992976890724405;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.007413919147350115;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.71626984126984361) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
                      result[0] += 0.002038596093191757;
                    } else {
                      result[0] += -0.004738323578821065;
                    }
                  } else {
                    result[0] += 0.006349842653849418;
                  }
                } else {
                  result[0] += -0.005180980817251331;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3191980000000000373) ) ) {
                    result[0] += -0.004359510135216145;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1360340320715830165) ) ) {
                      result[0] += -0.0008017104886080949;
                    } else {
                      result[0] += 0.004621065647085853;
                    }
                  }
                } else {
                  result[0] += 0.011106069934724183;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1879.768845692260356) ) ) {
              result[0] += 0.005031256018997146;
            } else {
              result[0] += -0.010321559096910021;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.695248500000000047) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6657846984349986563) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2624768466104180908) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08774088920105922729) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06845150950446143856) ) ) {
                    result[0] += 0.007636360393864823;
                  } else {
                    result[0] += 0.0001286461735633697;
                  }
                } else {
                  result[0] += 0.009210860658791406;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
                  result[0] += 0.00040427910158807656;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3152500000000000857) ) ) {
                    result[0] += 0.005867656131842969;
                  } else {
                    result[0] += 0.0011546065875659732;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2178.807099952505723) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                  result[0] += 0.00011020838406970737;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1623500000000000221) ) ) {
                    result[0] += 0.008716986575650343;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6391.930040077767444) ) ) {
                      result[0] += 0.005200954398935014;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                result[0] += -0.008460580389305038;
              }
            }
          } else {
            result[0] += 0.013143710580897118;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.582324042174648393) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2081000000000000349) ) ) {
                  result[0] += 0.007303022756811511;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2962.976412357489153) ) ) {
                    result[0] += 0.003221654665972795;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
                  result[0] += -0.004422183200611492;
                } else {
                  result[0] += 0.0013591809539694932;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.433327285921625727) ) ) {
                result[0] += 0.003050020467796994;
              } else {
                result[0] += 0.009690457269576942;
              }
            }
          } else {
            result[0] += -0.002708418714603485;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8627945000000001308) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4148169003269751576) ) ) {
                result[0] += 0.009997122531114462;
              } else {
                result[0] += 0.006050184833310663;
              }
            } else {
              result[0] += 0.0130748172715929;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07167445453145829259) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7513157894736842701) ) ) {
                result[0] += 0.011395535616776004;
              } else {
                result[0] += 0.0024191688157496403;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3922500000000000431) ) ) {
            result[0] += 0.005343804014446553;
          } else {
            result[0] += 0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358141500000000057) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8817.104006290848702) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5349.110830475206967) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.01074653313125878;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1247124030991497295) ) ) {
              result[0] += 0.003347209692737978;
            } else {
              result[0] += -0.007512252616795948;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.395011276321747484) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
                result[0] += -0.005188391864858056;
              } else {
                result[0] += 0.010543277876354087;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.221246000000000026) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.70944164869398918) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
                    result[0] += -0.006924523786902698;
                  } else {
                    result[0] += 0.0027683388632710514;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075923801982495709) ) ) {
                    result[0] += -0.007670158633462548;
                  } else {
                    result[0] += -0.001684880721692887;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9581.734211346893062) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
                      result[0] += -0.008076422033247457;
                    } else {
                      result[0] += 0.0014222732208655166;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2865.318948452297718) ) ) {
                      result[0] += -0.003233397939184204;
                    } else {
                      result[0] += 0.0024092930008399326;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8503000000000001668) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.214790059770343017) ) ) {
                      result[0] += 0.011856590646319718;
                    } else {
                      result[0] += 0.0034561600447755203;
                    }
                  } else {
                    result[0] += -0.00755027731387648;
                  }
                }
              }
            }
          } else {
            result[0] += -0.014922926743951133;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)43.5582844574780168) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29069.44581527830451) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6722500000000001252) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)15669.37420511437267) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
                    result[0] += -0.0048704295789253685;
                  } else {
                    result[0] += 0.0012115425201686197;
                  }
                } else {
                  result[0] += 0.0056362398112615435;
                }
              } else {
                result[0] += 0.007882999369122486;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2304500000000000159) ) ) {
                result[0] += -0.010299522252476531;
              } else {
                result[0] += -0.0026674250819544217;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3511342604241804444) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.264116657309969971) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08188154061328727085) ) ) {
                  result[0] += -0.0013614497021979088;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3146902490233077776) ) ) {
                    result[0] += -0.007789358744942933;
                  } else {
                    result[0] += -0.0027905246727679346;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.314613457894214299) ) ) {
                  result[0] += 0.0015987832630277973;
                } else {
                  result[0] += -0.002832573588965448;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3700350016849980883) ) ) {
                result[0] += -0.008948845945065512;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8426833958685702175) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
                    result[0] += -0.006364240754649789;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6199606872203474728) ) ) {
                      result[0] += 0.00020385282428637323;
                    } else {
                      result[0] += -0.005013329033035751;
                    }
                  }
                } else {
                  result[0] += -0.0095474988793984;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
            result[0] += -0.0024509248128929796;
          } else {
            result[0] += -0.00820182418957501;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00378787878788067) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3532.451953216338097) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3787509271869893279) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2793.363867362420478) ) ) {
                result[0] += -0.012093198644857884;
              } else {
                result[0] += -0.003569756485041739;
              }
            } else {
              result[0] += 0.0004959302611040813;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8491407799074687235) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3398531389175412643) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4629760000000000542) ) ) {
                  result[0] += 0.000791175567046293;
                } else {
                  result[0] += -0.007194296290916483;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
                  result[0] += 0.011536041133489015;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.88883399209486491) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
                      result[0] += 0.0019391391682075426;
                    } else {
                      result[0] += 0.008566950544952847;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3912.581042876649917) ) ) {
                      result[0] += -0.0034828418331990713;
                    } else {
                      result[0] += 0.00530627440308371;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1349500000000000421) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.010667281369967618;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6656.245527964973007) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2566500000000001003) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15774.24072148520463) ) ) {
                  result[0] += 0.0032601077265163553;
                } else {
                  result[0] += 0.011437679138270406;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.00714285714286333) ) ) {
                    result[0] += 0.002796726762318853;
                  } else {
                    result[0] += -0.003653045681175598;
                  }
                } else {
                  result[0] += 0.006517775844185862;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
                result[0] += 0.005971143614349496;
              } else {
                result[0] += -0.0037511349236799933;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1643500000000000238) ) ) {
              result[0] += -0.006756071077833039;
            } else {
              result[0] += 0.00447027321275804;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14660.96176939566249) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.52485445588894208) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5324000000000000954) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-28217.98058526761452) ) ) {
                result[0] += 0.0022673183406174413;
              } else {
                result[0] += -0.005307764048187816;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4173837132183961796) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2344066382699040996) ) ) {
                  result[0] += 0.006888909346688034;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37840909090909314) ) ) {
                    result[0] += 0.0018658825486301948;
                  } else {
                    result[0] += -0.0024891463285585105;
                  }
                }
              } else {
                result[0] += 0.011298782537213817;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7371304289733293658) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6339500000000001245) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.007947470572770173;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.50611355962782556) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1233065969357276664) ) ) {
                      result[0] += -0.011557324431850646;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.009830481202644093;
                  }
                }
              } else {
                result[0] += -0.010080196651138027;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8957715509494285078) ) ) {
                result[0] += 0.0005503962325595185;
              } else {
                result[0] += 0.00866937668796781;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3577.178536742065262) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4800849858356940891) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6010500000000000842) ) ) {
                result[0] += 0.014679013801512479;
              } else {
                result[0] += -0.0033553028264414722;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4671500000000000652) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.86758263639984179) ) ) {
                      result[0] += -0.011491340753694334;
                    } else {
                      result[0] += -0.0024528692917091064;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2566500000000001003) ) ) {
                    result[0] += -0.011834405780011718;
                  } else {
                    result[0] += -0.004764093864452375;
                  }
                }
              } else {
                result[0] += 5.873807622265468e-06;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11367.30908202939645) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
                result[0] += -0.008632765632690612;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += -0.010484389612770451;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3550000000000000377) ) ) {
              result[0] += -0.0051162826715517515;
            } else {
              result[0] += 0.005306205475821427;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1472221264172316191) ) ) {
              result[0] += -0.008740879425339368;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596939932693950182) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.00561806937087961;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2508523744426000568) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8551000000000000822) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2870.605387001201507) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78888888888889497) ) ) {
                  result[0] += 0.004977266543485841;
                } else {
                  result[0] += 0.014256970100387605;
                }
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8650000000000001021) ) ) {
                result[0] += -0.008846109988604283;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2330500000000000071) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1940000000000000335) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3819320000000000492) ) ) {
                  result[0] += -0.010767095965051715;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.004860676150478432;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)549.5415402223362662) ) ) {
                result[0] += -0.012879077482455556;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1116.565576061355387) ) ) {
                  result[0] += -0.0005536589306976697;
                } else {
                  result[0] += -0.00539418088060421;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658645000000000369) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3018.749278514522757) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1203499999999999986) ) ) {
                  result[0] += 0.005483498750602193;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
                    result[0] += -0.0005861951935725798;
                  } else {
                    result[0] += 0.0038464104968478127;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04145000000000000767) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.435224480679027081) ) ) {
                    result[0] += -0.009373804652722436;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
                    result[0] += 0.00522815444455871;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5629.325767958667711) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2508523744426000568) ) ) {
                  result[0] += 0.006114695012108258;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.27991452991453158) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1203499999999999986) ) ) {
                      result[0] += -0.001008339722431602;
                    } else {
                      result[0] += 0.004256218633848539;
                    }
                  } else {
                    result[0] += -0.00960671710325708;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5090.688026845967215) ) ) {
                  result[0] += -0.01114144065935638;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07895000000000000628) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.21825396825397192) ) ) {
                      result[0] += -0.009887937324463315;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036930000000000462) ) ) {
                      result[0] += -0.002836644438197302;
                    } else {
                      result[0] += 0.005469591768695114;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.154452422829296665) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
                result[0] += 0.00924717373629646;
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2333.321561901081623) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2690.993343004484359) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2627.9895310241468) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5831362938626021286) ) ) {
                      result[0] += -0.0007418012180294366;
                    } else {
                      result[0] += 0.0034938127316174765;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5258.869399769443589) ) ) {
                      result[0] += 0.005218947272864021;
                    } else {
                      result[0] += 0.0013923860087448748;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.67902930402930473) ) ) {
                    result[0] += 0.0025571340041097247;
                  } else {
                    result[0] += 0.010003857054726367;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.44505130751407052) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                    result[0] += 0.006831729269964006;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4928625677951861683) ) ) {
                      result[0] += 0.0033456380961800983;
                    } else {
                      result[0] += -0.0022407119889471167;
                    }
                  }
                } else {
                  result[0] += -0.009428515856005286;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
            result[0] += -0.01284865559061029;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
              result[0] += 0.008803193420300413;
            } else {
              result[0] += -0.005205608759567848;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1057530000000000137) ) ) {
            result[0] += -0.006869987113368906;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3114755000000000718) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3016800000000000592) ) ) {
                result[0] += -0.005442533271353674;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += -0.007363452436319231;
            }
          }
        } else {
          result[0] += -0.0002701881349160249;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.395011276321747484) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)16180.09325483776956) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4426700000000000634) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.34134834110034179) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.86800573888092458) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                      result[0] += -0.007662862755069178;
                    } else {
                      result[0] += -0.0030514811823080705;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                      result[0] += -0.0026118580867341558;
                    } else {
                      result[0] += 0.010556429216655738;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4286285800485598041) ) ) {
                    result[0] += 0.01223666293625657;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4625500000000000722) ) ) {
                      result[0] += -0.0035699468578233593;
                    } else {
                      result[0] += 0.0005480722914420154;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2804.56287847494923) ) ) {
                  result[0] += -0.0023108609922732324;
                } else {
                  result[0] += 0.00873516553692753;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2737835000000000685) ) ) {
                result[0] += -0.0006987959897685977;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.33990778688524692) ) ) {
                  result[0] += 0.003064644356767443;
                } else {
                  result[0] += 0.012447532524797873;
                }
              }
            }
          } else {
            result[0] += -0.014960949001902351;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07230000000000001703) ) ) {
            result[0] += 0.002149169034393593;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.45833333333334281) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3341321480314294878) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1967701477038585611) ) ) {
                    result[0] += 0.0016291246299953651;
                  } else {
                    result[0] += -0.007066822528886934;
                  }
                } else {
                  result[0] += 0.005660460425830899;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1523500000000000132) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)103.9546342098412026) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10138.67215128568751) ) ) {
                      result[0] += -0.006892229832103322;
                    } else {
                      result[0] += -8.368439688863812e-05;
                    }
                  } else {
                    result[0] += 0.0031706580572591543;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279338682318470199) ) ) {
                    result[0] += -0.011987081032212635;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2043540000000000079) ) ) {
                      result[0] += -0.0009072560070687173;
                    } else {
                      result[0] += -0.006611630671501524;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
                result[0] += -0.0021234275686731145;
              } else {
                result[0] += -0.009791079541913349;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6051360000000001182) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
          result[0] += -0.0023901533335077695;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3578754866530491907) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2364.153332471118119) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1426.377837264146592) ) ) {
                    result[0] += 0.003356349398251876;
                  } else {
                    result[0] += 0.008768838982414186;
                  }
                } else {
                  result[0] += 0.005358861460688899;
                }
              } else {
                result[0] += 0.000722152967005132;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.405609901914840254) ) ) {
                result[0] += 0.0008800793095008131;
              } else {
                result[0] += 0.004662638715745103;
              }
            }
          } else {
            result[0] += -0.002161445288947643;
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
          result[0] += -0.0006152425424476132;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.094202898550724834) ) ) {
            result[0] += 0.00991557973722479;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9.965684599721443604) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[0] += 0.0024057585936435905;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11908.89586363036506) ) ) {
                  result[0] += 0.002169770975514665;
                } else {
                  result[0] += 0.008320182695329192;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.01582751744766142) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6526275000000001381) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2004.58624898434573) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4461.556953086569592) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.7261363636363658) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1604000000000000148) ) ) {
                      result[0] += -0.0026140786474996834;
                    } else {
                      result[0] += 0.004011489577876412;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2470000000000000251) ) ) {
                      result[0] += 0.007912126745154761;
                    } else {
                      result[0] += 0.0028771478673526958;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289274051889615802) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17051.15547769272598) ) ) {
                      result[0] += 0.0034111722980530567;
                    } else {
                      result[0] += -0.00713048622241723;
                    }
                  } else {
                    result[0] += 0.005462804237713355;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7052500000000000435) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4444724744926561999) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2021.296333301971345) ) ) {
                      result[0] += 0.012240135043705002;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2566500000000001003) ) ) {
                      result[0] += 0.0007555198269249534;
                    } else {
                      result[0] += -0.010593553403420483;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08395000000000001072) ) ) {
                    result[0] += -0.00018414846545497792;
                  } else {
                    result[0] += -0.008567819018597994;
                  }
                }
              }
            } else {
              result[0] += 0.011863775898791349;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08900840403564362624) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1211200960218856565) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0052699758880014914;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.080932372247844) ) ) {
                result[0] += 0.0028642063656027263;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4666.632518606213125) ) ) {
                  result[0] += 0.016047457245281175;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2598000000000000309) ) ) {
                    result[0] += 0.01081267358735472;
                  } else {
                    result[0] += 0.002929105222706617;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15774.24072148520463) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
              result[0] += 0.008173161448782634;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)58.19230769230770051) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                  result[0] += 0.008514356291930139;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5727811426840619946) ) ) {
                      result[0] += 0.0074475901664095975;
                    } else {
                      result[0] += -0.004023783922235481;
                    }
                  } else {
                    result[0] += -0.0070140338012331755;
                  }
                }
              } else {
                result[0] += -0.008441003469510721;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2741.853991412898267) ) ) {
              result[0] += -0.008806078745427402;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4791.91395952250241) ) ) {
                result[0] += 0.00040936566183551144;
              } else {
                result[0] += -0.005295268455768684;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
          result[0] += -0.013809275292916142;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1018.758829443079094) ) ) {
            result[0] += -0.007070484044731848;
          } else {
            result[0] += 0.0009244345298710525;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03385000000000000508) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2503885000000000693) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.0650000000000000161) ) ) {
              result[0] += -0.004100601853508718;
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += -0.006604545279263514;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
            result[0] += -0.0037458302116553967;
          } else {
            result[0] += 0.004247524299305082;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.540750000000000175) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3029155602761551269) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8050000000000001599) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1250000000000000278) ) ) {
                result[0] += -0.006234906313728485;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.4247832738398927) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)115.9545454545454675) ) ) {
                    result[0] += -0.004693656974644699;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)148.927747252747281) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0009338034593756032;
                    }
                  }
                } else {
                  result[0] += -0.005965520011281769;
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8850000000000001199) ) ) {
                result[0] += 0.0036345359591496208;
              } else {
                result[0] += -0.005012547368179855;
              }
            }
          } else {
            result[0] += -0.006248793880201854;
          }
        } else {
          result[0] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32109164420485392) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9554166948649117641) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8957715509494285078) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.71626984126984361) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.036172945205479756) ) ) {
                      result[0] += 0.0013402589558489484;
                    } else {
                      result[0] += 0.0069742119762440675;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
                      result[0] += 0.001743833211998726;
                    } else {
                      result[0] += -0.006601277805845202;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
                    result[0] += 0.011064041156235837;
                  } else {
                    result[0] += 0.002679601557434766;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.484296965040338367) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.486100386100386306) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2303.801636448604313) ) ) {
                      result[0] += 0.0028277102503657856;
                    } else {
                      result[0] += 0.009260453892039248;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2135526242593671353) ) ) {
                      result[0] += -0.0014240669085782596;
                    } else {
                      result[0] += 0.0032402294856433487;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0779500000000000054) ) ) {
                      result[0] += -0.008688212045400892;
                    } else {
                      result[0] += -0.0010840675947022568;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.009931937278078591;
            }
          } else {
            result[0] += 0.009243444495035858;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
            result[0] += -0.013278679817096864;
          } else {
            result[0] += -0.0025387260068715774;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2344066382699040996) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1110651606754299442) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2668555000000000788) ) ) {
              result[0] += -0.010121738555081397;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3191980000000000373) ) ) {
                result[0] += 0.006778738081051186;
              } else {
                result[0] += -0.004173416105213419;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0779500000000000054) ) ) {
              result[0] += 0.0170540102797163;
            } else {
              result[0] += -0.0026771371377987186;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)183.7630769230769658) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.59166666666667567) ) ) {
                result[0] += 0.008875793667719848;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-94839.3939457742963) ) ) {
                  result[0] += 0.0020727385759198086;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5095115945175783256) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6614500000000002045) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003218584396125478;
                    }
                  } else {
                    result[0] += -0.008536463401416668;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.34134834110034179) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5528205492927561471) ) ) {
                      result[0] += 0.0020313946072175256;
                    } else {
                      result[0] += -0.003946516675030118;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9392.751123286552684) ) ) {
                      result[0] += -0.007580930687055348;
                    } else {
                      result[0] += -0.003960254614562076;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4444724744926561999) ) ) {
                    result[0] += 0.00684950736047336;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
                      result[0] += -0.0026588929370162527;
                    } else {
                      result[0] += -0.009552073062635547;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3511342604241804444) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2900300291325960678) ) ) {
                    result[0] += -0.006340122041428389;
                  } else {
                    result[0] += 0.008230927222397301;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.07742257742258118) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.28245614035088096) ) ) {
                      result[0] += -0.004666773432314114;
                    } else {
                      result[0] += 0.003967430929303094;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1682.526551393980526) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.00817265845968341;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += -0.008713290256894947;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)15.77248611608338713) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8969687899648990381) ) ) {
            result[0] += 0.007064948613402223;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-776.627462522484393) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.01212079479255806;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-355.2188524626326966) ) ) {
                result[0] += 0.0035261798654342654;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                  result[0] += -0.006329949046003561;
                } else {
                  result[0] += 0.0002060651200417597;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.106374722838138425) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
                result[0] += -0.005318090936984594;
              } else {
                result[0] += 0.003430323007953381;
              }
            } else {
              result[0] += -0.007087416499239133;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.486100386100386306) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4045.520025272053772) ) ) {
                result[0] += 0.0009536612091788989;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.879297427786564834) ) ) {
                  result[0] += 0.0017229203962233705;
                } else {
                  result[0] += 0.006940432117966025;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3749.11546473725457) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1911254520728568607) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02640920508781643625) ) ) {
                    result[0] += 0.0015637024422736783;
                  } else {
                    result[0] += 0.008977324362014859;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.1721611721611751) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                      result[0] += 0.0034442235564077083;
                    } else {
                      result[0] += 0.00990840918154095;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2689713774233481458) ) ) {
                      result[0] += 0.0022641785361747434;
                    } else {
                      result[0] += -0.005433448669380552;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4550085000000000934) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02895000000000000351) ) ) {
                      result[0] += -0.0029478453281259866;
                    } else {
                      result[0] += 0.00269999171518645;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6835161312401194511) ) ) {
                      result[0] += 0.005289306271902653;
                    } else {
                      result[0] += -0.0002800790178089363;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.471890500000000046) ) ) {
                      result[0] += -0.014827496348872555;
                    } else {
                      result[0] += -0.004589683976670548;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
          result[0] += -0.0011789063058126005;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7446860000000000701) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.407843474118376681) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                    result[0] += 0.004494779254488581;
                  } else {
                    result[0] += 0.008245747866880319;
                  }
                } else {
                  result[0] += 0.00479933249584926;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.115576363876681118) ) ) {
                  result[0] += -0.00022665930639905577;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9965277359150260805) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2743.202382171203226) ) ) {
                      result[0] += 0.004315468521559396;
                    } else {
                      result[0] += 0.007205547682096427;
                    }
                  } else {
                    result[0] += 0.0009348990447369233;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)715.4826587170257426) ) ) {
                result[0] += 0.005793193440817544;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                  result[0] += 0.0029513714598548655;
                } else {
                  result[0] += 0.009171058329652891;
                }
              }
            }
          } else {
            result[0] += 0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3427.976752410164409) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08905000000000001803) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.78759398496241317) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
                result[0] += -0.004569231807234634;
              } else {
                result[0] += -0.01150677697789783;
              }
            } else {
              result[0] += 0.0004877918052940697;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4976500000000000923) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2782500000000000528) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
                    result[0] += 0.00173196861767285;
                  } else {
                    result[0] += -0.006864121385305262;
                  }
                } else {
                  result[0] += -0.011065676419315319;
                }
              } else {
                result[0] += 0.0024009509371306814;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.0281746031746124) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4093.415394671918875) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
                      result[0] += -0.0010997056840679892;
                    } else {
                      result[0] += 0.01358287314185445;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3184.283198592457211) ) ) {
                      result[0] += -0.004518188938113475;
                    } else {
                      result[0] += 0.0033150490406165536;
                    }
                  }
                } else {
                  result[0] += -0.005500433599199644;
                }
              } else {
                result[0] += -0.007715428851938335;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6871.194738991899612) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9290.770887201673759) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
                    result[0] += 0.009137170911207108;
                  } else {
                    result[0] += 0.0016046253310138215;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.106606960732522002) ) ) {
                    result[0] += 0.005476050047251313;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                      result[0] += -0.003349617181549118;
                    } else {
                      result[0] += 0.003720890339398887;
                    }
                  }
                }
              } else {
                result[0] += 0.010363809997662114;
              }
            } else {
              result[0] += -0.006045406718900448;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11222.22816428306942) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1359000000000000485) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.010488787395335441;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1322500000000000342) ) ) {
                  result[0] += 0.009574463531103698;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.90667311411992912) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0064226675241806155;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                      result[0] += 0.008290633495073325;
                    } else {
                      result[0] += -0.001108811196503967;
                    }
                  }
                }
              } else {
                result[0] += -0.006663625729348108;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500000000000426) ) ) {
          result[0] += 0.008708775644621873;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.61204013377927069) ) ) {
            result[0] += 0.004814427569360461;
          } else {
            result[0] += -0.0035207331740196384;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4426700000000000634) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.243379790940767116) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.0650000000000000161) ) ) {
            result[0] += -0.005307610565758984;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01325000000000000309) ) ) {
              result[0] += 0.006380535769360565;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09385000000000003062) ) ) {
                result[0] += -0.002827345571831611;
              } else {
                result[0] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3921815283179364009) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3965.158948031867112) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                result[0] += -0.010106111004285356;
              } else {
                result[0] += -0.003907613155161611;
              }
            } else {
              result[0] += -0.0011335047945788901;
            }
          } else {
            result[0] += -0.0008789281949578446;
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)118.0299834287672098) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.879297427786564834) ) ) {
              result[0] += 0.0022941998324282394;
            } else {
              result[0] += -0.010440317078893443;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5.113654335801698814) ) ) {
              result[0] += -0.006809183539358321;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2696500000000000563) ) ) {
                result[0] += 0.01032313039671035;
              } else {
                result[0] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.22431865828092867) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7517.831857566079634) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2865.318948452297718) ) ) {
                      result[0] += 0.004283771364553419;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1746784584268683549) ) ) {
                      result[0] += 0.006771780269130833;
                    } else {
                      result[0] += 0.00345673473717878;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.308777777777778262) ) ) {
                      result[0] += 0.0033335027453382667;
                    } else {
                      result[0] += -0.0013764267049691762;
                    }
                  } else {
                    result[0] += 0.0064279922907983815;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1404478012977176671) ) ) {
                      result[0] += -0.009429665867811412;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)760.1404084372057923) ) ) {
                      result[0] += -0.0024401406116315006;
                    } else {
                      result[0] += 0.0018585553413715174;
                    }
                  }
                }
              }
            } else {
              result[0] += 0.01319916456521019;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07269895721920012488) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05693937631927865894) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9381000000000000449) ) ) {
                  result[0] += -0.004866342314143177;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                    result[0] += -0.00019885582200718547;
                  } else {
                    result[0] += 0.006256040803156026;
                  }
                }
              } else {
                result[0] += 0.005842957261370779;
              }
            } else {
              result[0] += -0.009335468555971267;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.509500000000000175) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3114755000000000718) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1766435000000000366) ) ) {
                result[0] += -0.005183891601423476;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441180000000000294) ) ) {
                    result[0] += -0.003680901113370411;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                    result[0] += -0.006088665363412668;
                  } else {
                    result[0] += -0.0020054400228614396;
                  }
                }
              }
            } else {
              result[0] += -0.007410355058683452;
            }
          } else {
            result[0] += -0.0014040352016776838;
          }
        } else {
          result[0] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5065000000000000613) ) ) {
            result[0] += 0.013640089951655368;
          } else {
            result[0] += -0.003633362690097179;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000000000001438) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3002208421277365313) ) ) {
              result[0] += -0.003401823839315699;
            } else {
              result[0] += -0.010417528400339035;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)43305.24755796225509) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.22820512820514693) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34049.72333320909092) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3042628804014196331) ) ) {
                      result[0] += -0.00029384120994436244;
                    } else {
                      result[0] += 0.005730546847428089;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1702908340369640727) ) ) {
                      result[0] += 0.0055328005471718495;
                    } else {
                      result[0] += -0.0026966005259198263;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2484845401189077485) ) ) {
                      result[0] += 0.002936778625605452;
                    } else {
                      result[0] += -0.004412296105681359;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
                      result[0] += -0.004409739406836484;
                    } else {
                      result[0] += -0.008562978585039455;
                    }
                  }
                }
              } else {
                result[0] += -0.01005573057157674;
              }
            } else {
              result[0] += 0.005743392245280702;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.677320500000000103) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.592954307638647649) ) ) {
            result[0] += 0.003645942521097728;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1911254520728568607) ) ) {
              result[0] += -0.002771597602815058;
            } else {
              result[0] += -0.011492672406070754;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1572954101779138469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05855000000000001176) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07269895721920012488) ) ) {
                    result[0] += 0.006417508268031358;
                  } else {
                    result[0] += 0.002423695873136766;
                  }
                } else {
                  result[0] += 0.01176110447792984;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02980769127971986607) ) ) {
                  result[0] += -0.0025260174233020702;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.005847581651331836;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8220058538128890424) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2268.305050740483694) ) ) {
                    result[0] += 0.003459393173508337;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8162500000000000311) ) ) {
                      result[0] += 0.007110740181232454;
                    } else {
                      result[0] += 0.0026868887928723816;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9118823529411765882) ) ) {
                    result[0] += -0.0036140171848859227;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9842100889221309101) ) ) {
                      result[0] += 0.0013078714902817908;
                    } else {
                      result[0] += 0.008099187547125776;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3211.649567834616846) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.29705882352941515) ) ) {
                      result[0] += 0.0005579700861920116;
                    } else {
                      result[0] += -0.009543304654388815;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7852500000000001146) ) ) {
                      result[0] += 0.008081374807982806;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1784550515539286286) ) ) {
                    result[0] += -0.0029494214252633023;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                      result[0] += 0.0048065782031865446;
                    } else {
                      result[0] += 0.002533844440009544;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.091810344827586654) ) ) {
              result[0] += 0.0011250488977325383;
            } else {
              result[0] += -0.007746947176015467;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9566.137358918122118) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.62019230769231015) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.71008403361344818) ) ) {
              result[0] += -0.00020366128235867214;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18644.6123996954484) ) ) {
                result[0] += 0.00010613718803273863;
              } else {
                result[0] += 0.011498178666069787;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)154.1011111111111234) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4800849858356940891) ) ) {
                  result[0] += 0.004932673591396993;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5376165000000000527) ) ) {
                  result[0] += -0.006822763593921971;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19559.23761677038419) ) ) {
                result[0] += -0.009836270311022147;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3787509271869893279) ) ) {
                  result[0] += -0.0036115560247491846;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.06168384879725863) ) ) {
            result[0] += -0.00284345079227398;
          } else {
            result[0] += -0.009489097252073015;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        result[0] += -0.004194831525143853;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1945758892644455507) ) ) {
            result[0] += 0.013485842205224748;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
              result[0] += 0.007166680547475514;
            } else {
              result[0] += 0.011168608718906793;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.33990778688524692) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9554166948649117641) ) ) {
              result[0] += 0.006142960426085051;
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += -0.001237135276669007;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.004464152462090379;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4706500000000000683) ) ) {
            result[0] += 0.01179668462297122;
          } else {
            result[0] += 0.0019256021526567679;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8662560233874664339) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3535211598876289441) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1937.925932230502212) ) ) {
                result[0] += -0.01026967420812728;
              } else {
                result[0] += 0.0012987066587030669;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3739500000000000601) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.00576633432882103;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.473050000000000026) ) ) {
                  result[0] += 0.009028198431935754;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1036061969132185817) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
                  result[0] += -0.006242593709335871;
                } else {
                  result[0] += -0.0032115635635835554;
                }
              } else {
                result[0] += -0.009792232091890438;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1511569171003262213) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                  result[0] += -0.004252766350094284;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7396500000000000297) ) ) {
                    result[0] += 0.0042074735119537465;
                  } else {
                    result[0] += -0.001842591151663112;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2019559617197731194) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9250000000000001554) ) ) {
                      result[0] += -0.004890622544732115;
                    } else {
                      result[0] += -0.0005548831421538725;
                    }
                  } else {
                    result[0] += -0.010654428980007286;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1344370000000000287) ) ) {
                    result[0] += -0.004746728647815555;
                  } else {
                    result[0] += -0.00337868289385766;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
            result[0] += -0.013004481753857561;
          } else {
            result[0] += -0.006284214588867789;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)211.040267020056973) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7959100033456006917) ) ) {
              result[0] += -0.012117194926079065;
            } else {
              result[0] += -0.0043259066931254945;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1022.028164160269057) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08115000000000001379) ) ) {
                result[0] += 0.008165310068333065;
              } else {
                result[0] += 0.001105301371082807;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
                  result[0] += -0.009216571086028948;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2421625805643562723) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.852450000000000041) ) ) {
                    result[0] += 0.009069674557717533;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6010500000000000842) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.327327084680026026) ) ) {
                      result[0] += 0.0029992632808860083;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2655.127693887397527) ) ) {
                      result[0] += -0.006959550699321417;
                    } else {
                      result[0] += 0.0015933170273885716;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1607000000000000095) ) ) {
            result[0] += 0.014076967523594061;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3739500000000000601) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.0036300079072018846;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.59010642135642144) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2166315049226441858) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1435407080639670985) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9581.734211346893062) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.009590605256074025;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3190058479532194) ) ) {
                    result[0] += 0.004762071406433866;
                  } else {
                    result[0] += -0.005252334515810889;
                  }
                }
              } else {
                result[0] += 0.009011028969954262;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7285500000000001419) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6614500000000002045) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2668555000000000788) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4706500000000000683) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.007537096907704848;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4391.076444984862064) ) ) {
                    result[0] += 0.0033441180593476944;
                  } else {
                    result[0] += -0.002644664405636391;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04825000000000000816) ) ) {
                  result[0] += -0.012874125400896795;
                } else {
                  result[0] += -0.005260204732555439;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.473050000000000026) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4636414834351271774) ) ) {
                result[0] += 0.016711038628817412;
              } else {
                result[0] += -0.0007349673980493917;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.89015151515152979) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7166500000000001203) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4120.477146499230912) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5832000000000000517) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.00622619879029501;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.87142857142858077) ) ) {
                      result[0] += 0.003403728020783386;
                    } else {
                      result[0] += -0.002127192202469543;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3216.282614078772895) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3146902490233077776) ) ) {
                      result[0] += -0.0009860522956253196;
                    } else {
                      result[0] += 0.007370463184346149;
                    }
                  } else {
                    result[0] += 0.01097360528962569;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3701000000000000401) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2082206845299330589) ) ) {
                      result[0] += -0.004467880938163047;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.0077569319559892495;
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6189.910138631900736) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.56214887640449618) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3327500000000000457) ) ) {
                  result[0] += 0.001638863020910591;
                } else {
                  result[0] += -0.003923609608325728;
                }
              } else {
                result[0] += 0.005298377647931125;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2648210000000000286) ) ) {
                result[0] += 0.0007149063288018484;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4290.319098872139875) ) ) {
                  result[0] += -0.007425795876646676;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7795.802699447695886) ) ) {
                    result[0] += -1.4178983628080984e-05;
                  } else {
                    result[0] += -0.00448401455878703;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.00581395348837255) ) ) {
                  result[0] += -0.01044090544914094;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
                    result[0] += -0.0011751158039641754;
                  } else {
                    result[0] += -0.0062242182996815314;
                  }
                }
              } else {
                result[0] += 0.0022146750020121306;
              }
            } else {
              result[0] += -0.010332588643649047;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8650000000000001021) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1247124030991497295) ) ) {
            result[0] += -0.010394427186248617;
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06524444126709380565) ) ) {
            result[0] += 0.008403927330028706;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.382558990305469582) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9118823529411765882) ) ) {
                result[0] += 0.0030157073436191595;
              } else {
                result[0] += -0.0015548582060878665;
              }
            } else {
              result[0] += -0.004552244440088168;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8006.423874351355153) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9381000000000000449) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)878.7882229141167727) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.094202898550724834) ) ) {
                  result[0] += 0.0071279201842068575;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
                      result[0] += 0.0014722447218342605;
                    } else {
                      result[0] += -0.004582255807035939;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1488.538162805079082) ) ) {
                      result[0] += 0.0017125618194806253;
                    } else {
                      result[0] += 0.007756349818301084;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8677000000000001378) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.130274200633482079) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009850000000000001116) ) ) {
                      result[0] += 0.01088670877131098;
                    } else {
                      result[0] += 0.0039517370656834356;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
                      result[0] += 0.004192817145352103;
                    } else {
                      result[0] += 0.0006411901071957176;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.978768481788676592) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1179193971631925381) ) ) {
                      result[0] += 0.006549468329019086;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2268.305050740483694) ) ) {
                      result[0] += 0.001222673403377276;
                    } else {
                      result[0] += -0.00929163054733071;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.32484954126279364) ) ) {
                result[0] += 0.0019474826726839064;
              } else {
                result[0] += -0.009159074892354872;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.47809523809523924) ) ) {
              result[0] += 0.0008161254434330315;
            } else {
              result[0] += 0.0070622526373973725;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9074435000000001805) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4304500000000000548) ) ) {
                result[0] += 0.007839092248941183;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5482000000000001316) ) ) {
                  result[0] += 5.476302960319974e-05;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2566500000000001003) ) ) {
                    result[0] += 0.005784730637536727;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3513000000000000012) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0037092422219318333;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0.009298458300014545;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1396.779958297000576) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8212500000000001465) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03200000000000000761) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3652.934062563911539) ) ) {
                  result[0] += 0.0019309036824746457;
                } else {
                  result[0] += -0.0063420794080177685;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04310000000000000636) ) ) {
                  result[0] += 0.012105674397067619;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.39356884057971797) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1546000000000000429) ) ) {
                      result[0] += -0.0021174886268753154;
                    } else {
                      result[0] += 0.0030967167962842467;
                    }
                  } else {
                    result[0] += 0.007429254568424714;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7957.086656945748473) ) ) {
                result[0] += 0.00024663537059007825;
              } else {
                result[0] += -0.0076674773093510125;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11018.535337379677) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.158598193308449209) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1183000000000000163) ) ) {
                  result[0] += 0.004352886701585841;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3513000000000000012) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.67204301075269157) ) ) {
                      result[0] += 4.377255900810379e-05;
                    } else {
                      result[0] += -0.0064962627844980855;
                    }
                  } else {
                    result[0] += 0.004055606662668515;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3986990764490913053) ) ) {
                  result[0] += 0.01060036313062907;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4049500000000000877) ) ) {
                    result[0] += 0.007727022188810388;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
                      result[0] += -0.005378662770436669;
                    } else {
                      result[0] += 0.0028751772334386656;
                    }
                  }
                }
              }
            } else {
              result[0] += 0.00956841583547399;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1031000000000000111) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)62.86752962768378694) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.009331416881009039;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)31299.3757595375755) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.852450000000000041) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11458.24876613496417) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003068709775986382;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)15669.37420511437267) ) ) {
                      result[0] += 0.008362166078834835;
                    } else {
                      result[0] += 5.7799329911738506e-05;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
                    result[0] += -0.013049605036251922;
                  } else {
                    result[0] += -0.0011509708536975604;
                  }
                }
              } else {
                result[0] += 0.007746132002757924;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3739500000000000601) ) ) {
                result[0] += -0.00025690861341738923;
              } else {
                result[0] += -0.008850813259129137;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7.193095877481540334) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.010529748107433564;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13833.51142176279791) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002450000000000000355) ) ) {
                result[0] += -0.005834123381249975;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.75486037469071476) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.004709795718476293;
                  }
                } else {
                  result[0] += 0.001648226461230286;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04505000000000000671) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.00345671235685495;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4248.335231464433491) ) ) {
                result[0] += -5.060028419221529e-06;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1426.377837264146592) ) ) {
                  result[0] += -0.00872604217942969;
                } else {
                  result[0] += -0.005074612306678216;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2082316587659429064) ) ) {
                result[0] += 0.00023607372600763254;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.2641090678503506) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
                    result[0] += -0.002560156377858616;
                  } else {
                    result[0] += -0.008260327577715255;
                  }
                }
              }
            }
          }
        } else {
          result[0] += 0.003614498296512172;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002450000000000000355) ) ) {
              result[0] += 0.012565146917780734;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
                result[0] += -0.004936427672557267;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09126037187329660849) ) ) {
                  result[0] += -0.00323423639609237;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5349.110830475206967) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.24725274725274815) ) ) {
                      result[0] += 0.002825068451037547;
                    } else {
                      result[0] += -0.00397202138582457;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.509500000000000175) ) ) {
                      result[0] += 0.007296901642971498;
                    } else {
                      result[0] += 0.0003505365458237436;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.978768481788676592) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6399918775570295759) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1283.269061062331048) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3862.309036383199327) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1488.538162805079082) ) ) {
                      result[0] += 0.004668159749531599;
                    } else {
                      result[0] += 0.0005054062985027331;
                    }
                  }
                } else {
                  result[0] += 0.009601549647650889;
                }
              } else {
                result[0] += -0.0011929979085887829;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04272266684492439376) ) ) {
                result[0] += -0.00806880171969081;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1179193971631925381) ) ) {
                  result[0] += 0.009376585169585326;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0022809046423513534;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4463094520789036013) ) ) {
                      result[0] += -0.005270564155097996;
                    } else {
                      result[0] += 0.0041857397842685615;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77179878048780548) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2380.495614866096275) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.362024000000000068) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.008991263646945663;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1172.762349355894003) ) ) {
                result[0] += -0.00870694566612769;
              } else {
                result[0] += -0.0013000033997076638;
              }
            }
          } else {
            result[0] += -0.011052533683015122;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7320592709375011164) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.221246000000000026) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.0064516129032306) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2802500000000000546) ) ) {
                  result[0] += -0.0006893249256036737;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9343500000000001249) ) ) {
                    result[0] += -0.004323791225107621;
                  } else {
                    result[0] += -0.0011275742615192731;
                  }
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3146902490233077776) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.264116657309969971) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.283247888168071893) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07370217330381030607) ) ) {
                    result[0] += -0.007518718201609698;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1678605806223842645) ) ) {
                      result[0] += 0.0003317253144904804;
                    } else {
                      result[0] += -0.005525830115989258;
                    }
                  }
                } else {
                  result[0] += 0.0027901196860361847;
                }
              } else {
                result[0] += 0.006653348870679866;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4126257761330971996) ) ) {
                  result[0] += -0.005243943313124619;
                } else {
                  result[0] += 0.0021269175471890266;
                }
              } else {
                result[0] += -0.005198456255993609;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4268500000000000627) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7484500000000001707) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2602911804898560555) ) ) {
                  result[0] += 0.012720490128757138;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1647458771900037477) ) ) {
                      result[0] += 0.004020399581850672;
                    } else {
                      result[0] += -0.006382588952261094;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
                      result[0] += -0.0005018229011109374;
                    } else {
                      result[0] += 0.0055884685910404875;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13660.08107385601579) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30909090909091042) ) ) {
                    result[0] += 0.004358493051590375;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2344066382699040996) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0065354100725955825;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58257918552036436) ) ) {
                    result[0] += -0.010900469910673588;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8090500000000001579) ) ) {
                      result[0] += -0.006737369628208651;
                    } else {
                      result[0] += 0.0017972019542447334;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2978831689071954059) ) ) {
                result[0] += -0.003173825524166729;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3699670000000000458) ) ) {
                  result[0] += 0.009098020206773754;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
                    result[0] += -0.00028533868669372044;
                  } else {
                    result[0] += 0.004759231800001388;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4626188573480190525) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5229000000000001425) ) ) {
                result[0] += 0.00930906140126088;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.94680249009621065) ) ) {
                    result[0] += -0.008423376534213243;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.46790123456790411) ) ) {
                      result[0] += 0.001944318553548985;
                    } else {
                      result[0] += -0.002936112375273661;
                    }
                  }
                } else {
                  result[0] += 0.004814138645876264;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2304500000000000159) ) ) {
                result[0] += -0.0068239372490819;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4123000000000000553) ) ) {
                  result[0] += 0.007894682970342813;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.362024000000000068) ) ) {
                      result[0] += -0.0020099250579638387;
                    } else {
                      result[0] += -0.007372259779909983;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
            result[0] += -0.00174398205491895;
          } else {
            result[0] += -0.012876555406413857;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.23959827833572689) ) ) {
            result[0] += 0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8671.400547327515596) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                  result[0] += -0.003899629465387967;
                } else {
                  result[0] += -0.007567865708154221;
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
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
        result[0] += -0.010953289446184561;
      } else {
        result[0] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7533620000000000871) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.28801843317972597) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2523846967694989285) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08774088920105922729) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05365000000000001018) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00575000000000000077) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
                      result[0] += 0.0035708825418546367;
                    } else {
                      result[0] += 0.00022499555297604673;
                    }
                  } else {
                    result[0] += 0.006854835915764265;
                  }
                } else {
                  result[0] += -0.0006167178184844064;
                }
              } else {
                result[0] += -0.004538290826307871;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9142500000000001181) ) ) {
                      result[0] += 0.006768641009438152;
                    } else {
                      result[0] += 0.002437544809938737;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.19793814432989798) ) ) {
                      result[0] += -0.0036985520788349;
                    } else {
                      result[0] += 0.006251918546321958;
                    }
                  }
                } else {
                  result[0] += 0.011092670516165403;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3513000000000000012) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3190058479532194) ) ) {
                    result[0] += 0.008369289185720902;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2772624818106737554) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6133040000000001823) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.004248878049510713;
                    }
                  } else {
                    result[0] += -0.00929554262067612;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)144.5092417440413044) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
                      result[0] += 0.00441584585095423;
                    } else {
                      result[0] += -0.003355443369438108;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5399840518659736466) ) ) {
                      result[0] += 0.002555993006902496;
                    } else {
                      result[0] += 0.009711033262852487;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
                  result[0] += 0.01283552221123903;
                } else {
                  result[0] += 0.002984285477754098;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.212912087912088488) ) ) {
                result[0] += 0.003485993774578893;
              } else {
                result[0] += -0.010622456595204529;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
            result[0] += -0.006762572850840637;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4407500000000000306) ) ) {
              result[0] += -0.0019116521502217092;
            } else {
              result[0] += 0.004150311364404933;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.036172945205479756) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3701000000000000401) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.927352500000000135) ) ) {
              result[0] += 0.005703877535033729;
            } else {
              result[0] += 0.009021355685437372;
            }
          } else {
            result[0] += 0.0009202730834759678;
          }
        } else {
          result[0] += 0.012798778150702137;
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817765000000001407) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7250000000000000888) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9989.107872504324405) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2104742577805706616) ) ) {
              result[0] += -0.005458874089746134;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04715000000000000441) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000000000000369) ) ) {
                  result[0] += -0.0005598518095729835;
                } else {
                  result[0] += -0.005343771089955234;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
                  result[0] += 0.0010127449774631552;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            result[0] += 0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.382558990305469582) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7845442775498493448) ) ) {
                result[0] += 0.0060532866892378375;
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8677000000000001378) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1332400080645387008) ) ) {
                  result[0] += 0.010270397315442353;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1185548504618808702) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
                      result[0] += -0.008271965707801034;
                    } else {
                      result[0] += -0.0016063600870796252;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2508523744426000568) ) ) {
                      result[0] += 0.006964017265021717;
                    } else {
                      result[0] += -0.001615165797308681;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0174500000000000037) ) ) {
                  result[0] += -0.009848976861315561;
                } else {
                  result[0] += -0.0028801462162921384;
                }
              }
            }
          } else {
            result[0] += -0.00746944210871613;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7444253094382086156) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3689500000000000557) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7866.211076535222674) ) ) {
              result[0] += 0.00286380346953445;
            } else {
              result[0] += 0.010970289645525676;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)760.1404084372057923) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77179878048780548) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6282926336678872348) ) ) {
                  result[0] += 0.006106569212279355;
                } else {
                  result[0] += -0.00044790954197326306;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.45767090620031858) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.086028323821603081) ) ) {
                    result[0] += -0.0017465460100225666;
                  } else {
                    result[0] += -0.014364115865616785;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2737835000000000685) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                    result[0] += 0.0030792722198388738;
                  } else {
                    result[0] += -0.006145658256836556;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.890916808149406769) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
                      result[0] += 0.0026875959935478097;
                    } else {
                      result[0] += -0.0005404626641154106;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.83824525745257539) ) ) {
                      result[0] += 0.0019483915117613458;
                    } else {
                      result[0] += 0.00756763854628074;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5376165000000000527) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.47809523809523924) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
                      result[0] += -0.009676067045617555;
                    } else {
                      result[0] += 0.0011632098392759121;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.007555483957400423;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                    result[0] += -6.75378292659567e-06;
                  } else {
                    result[0] += -0.007233720843236318;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1369.851320094411903) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8132313610536542337) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075923801982495709) ) ) {
                  result[0] += 0.0020021085930951865;
                } else {
                  result[0] += 0.006620092449543448;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                  result[0] += -0.0003920013188589546;
                } else {
                  result[0] += 0.0038218857793010106;
                }
              } else {
                result[0] += -0.005384564998769056;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5090.688026845967215) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
                result[0] += -0.002162869316401471;
              } else {
                result[0] += 0.006300480877358261;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.548804922219870317) ) ) {
                  result[0] += -0.002887908162301498;
                } else {
                  result[0] += -0.014245651865246725;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77179878048780548) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0035697196069351504;
                  }
                } else {
                  result[0] += -0.008647580087012675;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8066835000000001088) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9965277359150260805) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3146902490233077776) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12967.17676313729862) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
                    result[0] += 0.006050447041439249;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.45022222222222652) ) ) {
                      result[0] += 0.004667150751125247;
                    } else {
                      result[0] += 0.002834990801682659;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                  result[0] += 0.006647941728009383;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-824.1224939772984044) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
                      result[0] += 0.002924635639023161;
                    } else {
                      result[0] += 0.00011982659460110768;
                    }
                  } else {
                    result[0] += -0.0021400778646123637;
                  }
                }
              }
            } else {
              result[0] += 0.008208056701486936;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
            result[0] += 0.0025515684435419095;
          } else {
            result[0] += -0.006498281172380971;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9632500000000000506) ) ) {
          result[0] += 0.0073454423000745075;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-626.6516628632514312) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1842.867320295106538) ) ) {
              result[0] += 0.005972048013780719;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1018.758829443079094) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0037141991729163102;
              }
            }
          } else {
            result[0] += -0.0003026500723160927;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.30306122448979878) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21361.58207848050006) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10755.47127666017332) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
              result[0] += -0.0044464054816509;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2384160000000000446) ) ) {
                result[0] += 0.002805504221756117;
              } else {
                result[0] += -0.0009577122948895335;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7221500000000000696) ) ) {
              result[0] += 0.00841257831237745;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8312500000000001554) ) ) {
                result[0] += -0.0012644001463684336;
              } else {
                result[0] += 0.003540928689315711;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2344066382699040996) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.10905271199389688) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5791.073405282010754) ) ) {
                result[0] += 0.007635637173150151;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
                  result[0] += -0.0013344827105983023;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)17604.53908125846283) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6189.910138631900736) ) ) {
                  result[0] += -0.005926915335502488;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5148.965599026557356) ) ) {
                    result[0] += 0.0011713866706721983;
                  } else {
                    result[0] += -0.002858259933725383;
                  }
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7795.802699447695886) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5420.781404110555741) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6087500000000001243) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4369219652904519635) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                      result[0] += -0.00047421535625853455;
                    } else {
                      result[0] += 0.006248698481291293;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3183000000000000829) ) ) {
                      result[0] += -0.003393132808312239;
                    } else {
                      result[0] += -0.0005086305448876597;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2900.856362099862963) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4248.335231464433491) ) ) {
                      result[0] += 0.0006893076850949489;
                    } else {
                      result[0] += -0.00393631994556727;
                    }
                  } else {
                    result[0] += -0.006228082427413921;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.407843474118376681) ) ) {
                    result[0] += 0.006491244116899812;
                  } else {
                    result[0] += -0.0009852663065214302;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2384160000000000446) ) ) {
                    result[0] += -0.00033908461811163666;
                  } else {
                    result[0] += -0.004440810041342182;
                  }
                }
              }
            } else {
              result[0] += -0.007048419838807632;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
          result[0] += 0;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
            result[0] += -0.003569599986388309;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
              result[0] += -0.005969668999105907;
            } else {
              result[0] += -0.0020776432506205366;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03485000000000000597) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
          result[0] += -0.0003596410588923852;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2166315049226441858) ) ) {
            result[0] += -0.0007470667764057244;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7757.193972373256656) ) ) {
              result[0] += -0.003673802874920671;
            } else {
              result[0] += -0.01019677383570464;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.62019230769231015) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.71626984126984361) ) ) {
            result[0] += -0.00728552566024635;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                result[0] += -0.000779808488065531;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
                  result[0] += 0.004468374957607005;
                } else {
                  result[0] += 0.014611837455460634;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)739.2431776973787692) ) ) {
                result[0] += -0.00944048355705567;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1729500000000000204) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.42792207792208359) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
                      result[0] += -0.0032924490025156997;
                    } else {
                      result[0] += 0.005033495762343446;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
                      result[0] += 0.017970815115465145;
                    } else {
                      result[0] += 0.0018943206751615871;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
                      result[0] += -0.002917534198768963;
                    } else {
                      result[0] += 0.001056881935247008;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)59.16273471352914015) ) ) {
                      result[0] += 0.00471509827125154;
                    } else {
                      result[0] += -0.004722936989971621;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-72018.65726884668402) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)58.19230769230770051) ) ) {
              result[0] += 0.010861955272745815;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
                result[0] += 0.0026610505313124488;
              } else {
                result[0] += -0.005732510377888972;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)215.2883771929824945) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4626188573480190525) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1940000000000000335) ) ) {
                  result[0] += 0.006598477386244827;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2964813357014444151) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3688321311376249745) ) ) {
                      result[0] += -0.006297980222847777;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0015313685659068936;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2534500000000000641) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3970620000000000815) ) ) {
                    result[0] += -0.004483537594420589;
                  } else {
                    result[0] += 0.003915764821465231;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
                    result[0] += -0.007871512164227512;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
                      result[0] += -0.004940697603991764;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.008027322140687609;
            }
          }
        }
      }
    }
  }
}

