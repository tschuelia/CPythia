#include "prediction.h"
double predict_margin_unit12(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5354000000000000981) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2166315049226441858) ) ) {
        sum += (double)-0.002086075357625690949;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6682000000000001272) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6361.997541307308893) ) ) {
              sum += (double)-0.003629733608487164306;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
                sum += (double)0.002976119632671520368;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                  sum += (double)0.001006917118379533141;
                } else {
                  sum += (double)-0.003726584163089990964;
                }
              }
            }
          } else {
            sum += (double)0.003921752852423378115;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001450000000000000334) ) ) {
            sum += (double)-0.0009549003912377100438;
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3146.277250048707629) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
                sum += (double)-0.0006436789541230543941;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
                    sum += (double)0.002455460159790477746;
                  } else {
                    sum += (double)-0.001796482845254681856;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
                    sum += (double)0.002177382563609372556;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.71032126588348277) ) ) {
                      sum += (double)0.01011630331364057889;
                    } else {
                      sum += (double)0.002042027112067845967;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.007699772757749097536;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4880421551248437795) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4473314962819884832) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4061.155400297998767) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1264500000000000346) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.727553723874008185) ) ) {
                      sum += (double)-0.00010848448686791938;
                    } else {
                      sum += (double)0.003458227429905842178;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2268.305050740483694) ) ) {
                      sum += (double)0.0002907357553351252034;
                    } else {
                      sum += (double)-0.002766191121679040851;
                    }
                  }
                } else {
                  sum += (double)0.004652245987881512002;
                }
              } else {
                sum += (double)-0.003683915534440535076;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1793500000000000372) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1592430000000000234) ) ) {
                  sum += (double)0.0003148204531395835796;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.44072681704260752) ) ) {
                    sum += (double)0.002005523630673561493;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.90096618357488367) ) ) {
                      sum += (double)0.01223617942377289332;
                    } else {
                      sum += (double)0.003882617679872804855;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.60681818181819125) ) ) {
                    sum += (double)0.0007627129286067058783;
                  } else {
                    sum += (double)-0.003853458540096467259;
                  }
                } else {
                  sum += (double)0.004687212329154761235;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4444724744926561999) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4126257761330971996) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.405609901914840254) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4018505548079681078) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7246500000000001274) ) ) {
                      sum += (double)0.0003505356318606004263;
                    } else {
                      sum += (double)-0.0001149096942422560974;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
                      sum += (double)-0.007802160736673593479;
                    } else {
                      sum += (double)-0.00129563256442287271;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1183000000000000163) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1549.842380604185792) ) ) {
                      sum += (double)0.002702841323127617209;
                    } else {
                      sum += (double)-0.004370113192713089532;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
                      sum += (double)0.007696134497175461699;
                    } else {
                      sum += (double)0.0004009402085375727014;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999655000000000515) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                    sum += (double)-0.006766443272082460318;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2868203899923389977) ) ) {
                      sum += (double)-0.003154234417592140238;
                    } else {
                      sum += (double)0.0008151222214614039499;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58257918552036436) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
                      sum += (double)0.0006394446017676376449;
                    } else {
                      sum += (double)-0.003020816294046115534;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                      sum += (double)0.0002172753635535206308;
                    } else {
                      sum += (double)0.006685933049227097032;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.003951281696654223956;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6241500000000000936) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3064.401422747675497) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.59687500000000426) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1816.551521492987149) ) ) {
                    sum += (double)0.006676499767594422721;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1768500000000000349) ) ) {
                      sum += (double)-0.002282205774081930323;
                    } else {
                      sum += (double)0.003266720583024426347;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
                    sum += (double)-0.001664218986157681634;
                  } else {
                    sum += (double)0.003004670534475905892;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1040.704691140170553) ) ) {
                  sum += (double)-0.000430320304759058362;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
                    sum += (double)-0.001464141295687368654;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5832000000000000517) ) ) {
                      sum += (double)-0.003349129558675546965;
                    } else {
                      sum += (double)-0.01144470393148142549;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.007213824337356656256;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1885.524186461903128) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6497500000000001608) ) ) {
                sum += (double)0.00730899096399280964;
              } else {
                sum += (double)0.0009292189392333667468;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7957.086656945748473) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1854500000000000315) ) ) {
                  sum += (double)0.003465207375158695004;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4542.943917304383831) ) ) {
                    sum += (double)-0.003555088577211664401;
                  } else {
                    sum += (double)0.0006373121608797536509;
                  }
                }
              } else {
                sum += (double)-0.004816151828509928484;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1937.925932230502212) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2574234279727875552) ) ) {
            sum += (double)0.002422156449476159379;
          } else {
            sum += (double)-0.00415162894546441865;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2158000000000000196) ) ) {
            sum += (double)0.008940696181047518704;
          } else {
            sum += (double)0.0008093131708044056481;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5120878152759216206) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
        sum += (double)0.004185705572937369057;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3170295000000000196) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3652.934062563911539) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                sum += (double)-0.0004731694786665643481;
              } else {
                sum += (double)-0.006570107072517289426;
              }
            } else {
              sum += (double)0.002046718689476770704;
            }
          } else {
            sum += (double)-0.005676666726744484387;
          }
        } else {
          sum += (double)0.003382929918985342049;
        }
      }
    } else {
      sum += (double)-0.0001105706432168229237;
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5229000000000001425) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2166315049226441858) ) ) {
        sum += (double)-0.002079897691826813541;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8140.442679804484214) ) ) {
              sum += (double)-0.001850331193063474476;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)13476.57528643532896) ) ) {
                sum += (double)0.005483555088642306369;
              } else {
                sum += (double)0.0005657434386724577956;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001450000000000000334) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4257500000000000173) ) ) {
                sum += (double)0.00352312454395977033;
              } else {
                sum += (double)-0.001974574362198955064;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3146.277250048707629) ) ) {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                  sum += (double)-0.0003671295965554538542;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
                    sum += (double)0.004058419582036063185;
                  } else {
                    sum += (double)-0.0002642690892126036946;
                  }
                }
              } else {
                sum += (double)0.008459125399735631379;
              }
            }
          }
        } else {
          sum += (double)-0.003207812353830629282;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4880421551248437795) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4420656524973072266) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04075000000000000844) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3926465801380922271) ) ) {
                sum += (double)0.001336224986165711164;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                  sum += (double)0.0009761165383679425286;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
                    sum += (double)-0.006328793748987277673;
                  } else {
                    sum += (double)0.0003022446294096789595;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1793500000000000372) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.31844888366627622) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3755158646863254179) ) ) {
                      sum += (double)-0.001198738714491671747;
                    } else {
                      sum += (double)0.003720675699554220651;
                    }
                  } else {
                    sum += (double)0.01264900258842169972;
                  }
                } else {
                  sum += (double)0.0004164986774814359236;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5732000000000001538) ) ) {
                    sum += (double)-0.005954639362719317541;
                  } else {
                    sum += (double)0.000525234978032919483;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.431226121273369345) ) ) {
                    sum += (double)0.007814253654444981018;
                  } else {
                    sum += (double)0.0003636160098834597017;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3755158646863254179) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3634578871420977575) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.674650000000000083) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4671500000000000652) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007250000000000000368) ) ) {
                      sum += (double)-0.0006162818567667856543;
                    } else {
                      sum += (double)0.001821412696754559548;
                    }
                  } else {
                    sum += (double)-0.003085917211007088625;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3060106677825033539) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3002208421277365313) ) ) {
                      sum += (double)-5.067355362233001438e-05;
                    } else {
                      sum += (double)0.002323278089637350729;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5678500000000000769) ) ) {
                      sum += (double)-0.001021791249861463309;
                    } else {
                      sum += (double)0.004200285102839348798;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1811500000000000055) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
                      sum += (double)0.006115776992196894808;
                    } else {
                      sum += (double)-0.002019194728956211996;
                    }
                  } else {
                    sum += (double)-0.002963946165206859766;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9820.391414902553151) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8501.126385312682032) ) ) {
                      sum += (double)-0.0002655537872617751627;
                    } else {
                      sum += (double)0.005424306754940224316;
                    }
                  } else {
                    sum += (double)0.00693606600338052097;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09947290620547651063) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                    sum += (double)-0.001376033587156951996;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1604000000000000148) ) ) {
                      sum += (double)0.001536187260932413102;
                    } else {
                      sum += (double)0.007659795929101405679;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2106500000000000317) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1688500000000000278) ) ) {
                      sum += (double)-0.001166020336627177339;
                    } else {
                      sum += (double)0.002075570699784962288;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.382039592976585296) ) ) {
                      sum += (double)-0.01086041994638524411;
                    } else {
                      sum += (double)-0.002200906014042238162;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.34436758893280839) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4148169003269751576) ) ) {
                    sum += (double)0.0003198346624087405584;
                  } else {
                    sum += (double)-0.004605485654363335526;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.43665158371041102) ) ) {
                    sum += (double)0.009846272181656108222;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3954325276832468261) ) ) {
                      sum += (double)-0.003940768133696424466;
                    } else {
                      sum += (double)0.003818090806057228889;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5201090000000001545) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1079.931960267036857) ) ) {
                sum += (double)0.0009709738563735916981;
              } else {
                sum += (double)-0.001564210222477595714;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.536038961038963535) ) ) {
                  sum += (double)0.0005398825749892484805;
                } else {
                  sum += (double)0.005662019007878394024;
                }
              } else {
                sum += (double)-0.00374470076193722393;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
              sum += (double)-0.003632251146038108225;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1811500000000000055) ) ) {
                  sum += (double)0.001956930696565019161;
                } else {
                  sum += (double)0.008005682796113933533;
                }
              } else {
                sum += (double)-0.0005521155095473763473;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1937.925932230502212) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1079.931960267036857) ) ) {
            sum += (double)0.003756494691821484194;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.956944444444444819) ) ) {
              sum += (double)0.000191549920728433361;
            } else {
              sum += (double)-0.005552635136019510101;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
            sum += (double)0.0005542592813097186634;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.30142642642643125) ) ) {
              sum += (double)0.00347773448183058163;
            } else {
              sum += (double)0.01111811328704808907;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5120878152759216206) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
        sum += (double)0.003844748125984930216;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3170295000000000196) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3652.934062563911539) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                sum += (double)-0.0004346261963924323958;
              } else {
                sum += (double)-0.006034921890989860399;
              }
            } else {
              sum += (double)0.001879997892567911947;
            }
          } else {
            sum += (double)-0.00521425915536833165;
          }
        } else {
          sum += (double)0.003107364525888657754;
        }
      }
    } else {
      sum += (double)-0.0001015638357477377014;
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.45833333333334281) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
      sum += (double)0.003533272858281393067;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)753.4351851851853326) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7158.326501222521074) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.90625000000000711) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2703.500010395392565) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2113.689413772091484) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.92861142217245352) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
                      sum += (double)0.001687276537895761059;
                    } else {
                      sum += (double)-1.830022167901598278e-06;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
                      sum += (double)0.0001791919628149154543;
                    } else {
                      sum += (double)0.01005691092674806941;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
                    sum += (double)0.002609591591830062902;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3689500000000000557) ) ) {
                      sum += (double)-0.0009519408056061983651;
                    } else {
                      sum += (double)-0.002743465453121409804;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11908.89586363036506) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.87026925953627732) ) ) {
                    sum += (double)-0.001659827549408583519;
                  } else {
                    sum += (double)-0.008338609328596105486;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
                    sum += (double)0.005098875168589735163;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
                      sum += (double)-0.002416143432732895894;
                    } else {
                      sum += (double)-0.0002300858794905915369;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
                  sum += (double)0.006665131799587608284;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.308777777777778262) ) ) {
                    sum += (double)-0.004414631824174260546;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
                      sum += (double)0.0008616810531365262042;
                    } else {
                      sum += (double)0.004151077399029970937;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.13563218390804721) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2063695000000000113) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3458099438652766922) ) ) {
                      sum += (double)0.004262995004082180232;
                    } else {
                      sum += (double)-0.003372825410325170845;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3576884733354243617) ) ) {
                      sum += (double)0.0004475123961340829546;
                    } else {
                      sum += (double)0.003093378970142930326;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5528205492927561471) ) ) {
                    sum += (double)-0.005979893757245636869;
                  } else {
                    sum += (double)-0.002157575600244941109;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1490519239829231901) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11531.82324522852832) ) ) {
                sum += (double)-0.0061244916948161943;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1404478012977176671) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                      sum += (double)-0.0001323847706673483902;
                    } else {
                      sum += (double)-0.002170745562848452707;
                    }
                  } else {
                    sum += (double)0.003451761293134523838;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2166315049226441858) ) ) {
                    sum += (double)-0.000927436616960096525;
                  } else {
                    sum += (double)-0.008545918148512415477;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-26216.36240703851217) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4172500000000000653) ) ) {
                  sum += (double)0.001111165418446175826;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
                    sum += (double)-0.0009522774323372563444;
                  } else {
                    sum += (double)-0.00604647031171181952;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
                  sum += (double)0.006202694189184223758;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20716.01340554505077) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4880421551248437795) ) ) {
                      sum += (double)0.002994310790826187549;
                    } else {
                      sum += (double)-0.003251316430613443095;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
                      sum += (double)-0.0003376669870016050417;
                    } else {
                      sum += (double)0.000565475120841768303;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.78019323671498242) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11531.82324522852832) ) ) {
              sum += (double)-0.002134508595213583954;
            } else {
              sum += (double)3.702455459203894233e-05;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.76341350601295943) ) ) {
                  sum += (double)0.001172734235620660282;
                } else {
                  sum += (double)-0.002683389209239043626;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1766435000000000366) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000000000001499) ) ) {
                    sum += (double)-0.0003052472928195708638;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03635000000000000731) ) ) {
                      sum += (double)0.00368618457618731998;
                    } else {
                      sum += (double)0.0001222697301348386477;
                    }
                  }
                } else {
                  sum += (double)-0.00261657440128496184;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2009165000000000256) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7821500000000000119) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6840500000000001579) ) ) {
                    sum += (double)0.002192171299500679169;
                  } else {
                    sum += (double)0.008929752952318677911;
                  }
                } else {
                  sum += (double)0.0005473017053695434109;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8501.126385312682032) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6519500000000001405) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4369219652904519635) ) ) {
                      sum += (double)0.008615471984582210446;
                    } else {
                      sum += (double)0.0007325445776352107257;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.76341350601295943) ) ) {
                      sum += (double)0.001956272859480282303;
                    } else {
                      sum += (double)-0.0008283606925383963033;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8817.104006290848702) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.1500000000000199) ) ) {
                      sum += (double)0.000477044567701992168;
                    } else {
                      sum += (double)-0.006845195908858450404;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.88731060606061618) ) ) {
                      sum += (double)-0.0009109560825703845411;
                    } else {
                      sum += (double)0.0005362408822227153482;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        sum += (double)-0.004055882884607230586;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.10606060606062329) ) ) {
      sum += (double)0.00291937056677535724;
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8817.104006290848702) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
          sum += (double)-0.0002899061991039586202;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-45582.08751746388589) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5229930000000001522) ) ) {
              sum += (double)-0.002104646949951171058;
            } else {
              sum += (double)0.001457023545913996515;
            }
          } else {
            sum += (double)-0.003615385490570986217;
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9989.107872504324405) ) ) {
          sum += (double)0.003488431727802062277;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2626015000000000432) ) ) {
            sum += (double)-2.519019433852700212e-05;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-31827.96148275736414) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5182500000000002105) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3760500000000000509) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4059235000000000482) ) ) {
                    sum += (double)-0.002218279062586211037;
                  } else {
                    sum += (double)0.0002007262867888932813;
                  }
                } else {
                  sum += (double)0.003155546502577787939;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6507500000000000506) ) ) {
                  sum += (double)-0.005349276559036731001;
                } else {
                  sum += (double)-0.001531004264305568623;
                }
              }
            } else {
              sum += (double)0.001735930897810253337;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.927352500000000135) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000000000001438) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9999263622974964294) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6526430887472424169) ) ) {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.795000000000000151) ) ) {
                sum += (double)-0.0008646659142295008357;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3700350016849980883) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
                    sum += (double)0.002341979157266162442;
                  } else {
                    sum += (double)-0.00231939382959328675;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.431226121273369345) ) ) {
                    sum += (double)0.008867038608893228202;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5399840518659736466) ) ) {
                      sum += (double)0.0005932049283188833063;
                    } else {
                      sum += (double)0.00566268517955064235;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9554166948649117641) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)13833.51142176279791) ) ) {
                    sum += (double)-0.007713774001849132457;
                  } else {
                    sum += (double)-0.0005640716941948757104;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.80442341124203276) ) ) {
                    sum += (double)0.001420191636166519538;
                  } else {
                    sum += (double)-0.002121957479414509663;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3819320000000000492) ) ) {
                  sum += (double)0.0005323759307868940367;
                } else {
                  sum += (double)0.00540283698466608505;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2602911804898560555) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.05227272727272947) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1511569171003262213) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)35052.81431451296521) ) ) {
                      sum += (double)0.0001979308296529477937;
                    } else {
                      sum += (double)0.003695265230169183287;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1684877502298116336) ) ) {
                      sum += (double)0.006058648368219358461;
                    } else {
                      sum += (double)0.001331704890203691755;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9606451612903227355) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3514705882352941457) ) ) {
                      sum += (double)-0.001949155134254696277;
                    } else {
                      sum += (double)0.001566341287075046634;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4283830000000000693) ) ) {
                      sum += (double)2.489698888734024281e-05;
                    } else {
                      sum += (double)-0.005757567939877727622;
                    }
                  }
                }
              } else {
                sum += (double)-0.00120098595507624889;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7092500000000001581) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.487050000000000094) ) ) {
                  sum += (double)-0.003467189437154596671;
                } else {
                  sum += (double)-0.0006717219764081041244;
                }
              } else {
                sum += (double)-0.005467353854892035951;
              }
            }
          }
        } else {
          sum += (double)-0.003212365677142704767;
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4880421551248437795) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04108592410728736238) ) ) {
            sum += (double)-0.003726270767833804193;
          } else {
            sum += (double)-0.0001532018939199601617;
          }
        } else {
          sum += (double)-0.004312424191475832183;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5229000000000001425) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3726408267520956996) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.52485445588894208) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
                sum += (double)-0.005721981558678524565;
              } else {
                sum += (double)-0.0005594655800024542517;
              }
            } else {
              sum += (double)0.003491379761518154708;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9983.220168266934706) ) ) {
              sum += (double)0.0009222454940572753735;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1592430000000000234) ) ) {
                sum += (double)-0.0001827803033157572035;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
                      sum += (double)0.003068758228231044296;
                    } else {
                      sum += (double)0.01047364201250498145;
                    }
                  } else {
                    sum += (double)0.000859312130453432875;
                  }
                } else {
                  sum += (double)0.0006847312891239217989;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4880421551248437795) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4126257761330971996) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1708000000000000351) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1412000000000000199) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4190.954657040626444) ) ) {
                      sum += (double)0.002624522959839340613;
                    } else {
                      sum += (double)0.0001494759822255970145;
                    }
                  } else {
                    sum += (double)0.009493096714316029416;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.71032126588348277) ) ) {
                    sum += (double)0.002126655680055850907;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2779054249029654367) ) ) {
                      sum += (double)-0.003839886963493950676;
                    } else {
                      sum += (double)-0.000225398358280634489;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6497500000000001608) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3604310129059999368) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.30731523378582892) ) ) {
                      sum += (double)-0.007580605198072608471;
                    } else {
                      sum += (double)-0.001780982918418240078;
                    }
                  } else {
                    sum += (double)0.0004748351178250115778;
                  }
                } else {
                  sum += (double)5.387056161280740429e-05;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7143.768529324467636) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04310000000000000636) ) ) {
                  sum += (double)0.007220541592115829917;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7757.193972373256656) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6969500000000000695) ) ) {
                      sum += (double)-0.0006578139690179024167;
                    } else {
                      sum += (double)0.002729423533688910258;
                    }
                  } else {
                    sum += (double)0.004112163005494344839;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2487665370563404699) ) ) {
                    sum += (double)-0.000296501665087155013;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1040.704691140170553) ) ) {
                      sum += (double)0.006023513709997527221;
                    } else {
                      sum += (double)0.001020744277484523285;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2841076982928243955) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1658.751546212527273) ) ) {
                      sum += (double)-0.001693048446867633774;
                    } else {
                      sum += (double)-0.006595342231699502164;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06815000000000000224) ) ) {
                      sum += (double)-0.003008112330215104244;
                    } else {
                      sum += (double)0.0009808556065420874839;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5599500000000001698) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2818837338874919385) ) ) {
                  sum += (double)-0.004482240699369022079;
                } else {
                  sum += (double)0.001338371250500937143;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4487310000000000465) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4958483270806217091) ) ) {
                    sum += (double)0.003547469798731818242;
                  } else {
                    sum += (double)0.01033047431287957389;
                  }
                } else {
                  sum += (double)0.0009991432064034105019;
                }
              }
            } else {
              sum += (double)-0.003192680368455980827;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5120878152759216206) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
            sum += (double)0.00448101839427434822;
          } else {
            sum += (double)-0.002341606401871248935;
          }
        } else {
          sum += (double)-9.075585627503771275e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.490995462280204631) ) ) {
      sum += (double)0.002808840589869315233;
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9706500000000001238) ) ) {
        sum += (double)-0.001806709161779384903;
      } else {
        sum += (double)0.001901971781236392331;
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9606451612903227355) ) ) {
    sum += (double)0.0004363326085762689105;
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2082316587659429064) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5797500000000000986) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-26216.36240703851217) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.90667311411992912) ) ) {
                sum += (double)-0.005336529693949053181;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)129.5625000000000284) ) ) {
                  sum += (double)0.001306504138581768672;
                } else {
                  sum += (double)-0.001373349555510040365;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22332.50306697345877) ) ) {
                sum += (double)0.005206008589879255501;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2741.853991412898267) ) ) {
                    sum += (double)-0.0008607979916789516893;
                  } else {
                    sum += (double)0.0006176411839028544699;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
                      sum += (double)0.002341355436866770882;
                    } else {
                      sum += (double)-0.0008511448824091109172;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2648210000000000286) ) ) {
                      sum += (double)0.007513820423716724081;
                    } else {
                      sum += (double)0.001551361478109784201;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.004519843367700922612;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-427.1704539211891074) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1137500000000000178) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8212500000000001465) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-824.1224939772984044) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.746250000000000191) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
                      sum += (double)0.0009829283390852241922;
                    } else {
                      sum += (double)-0.0002340958932570321718;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                      sum += (double)0.000379330080539697675;
                    } else {
                      sum += (double)-0.002442656387646407676;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005250000000000000326) ) ) {
                    sum += (double)0.001645754516412884384;
                  } else {
                    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
                      sum += (double)-0.001576782607928562188;
                    } else {
                      sum += (double)-0.005778570044463641336;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08706594241544672597) ) ) {
                  sum += (double)2.762347344178476204e-05;
                } else {
                  sum += (double)-0.007942141525723513118;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8090500000000001579) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    sum += (double)-0.002452765588897575216;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2808462751056642337) ) ) {
                      sum += (double)-0.001003791297696111223;
                    } else {
                      sum += (double)0.0001307742779235478419;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4566350000000000686) ) ) {
                      sum += (double)0.00915050230779206053;
                    } else {
                      sum += (double)0.002350498631781696313;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
                      sum += (double)-0.002207635070839531182;
                    } else {
                      sum += (double)0.001365881316958566594;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4662.809440025213917) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
                    sum += (double)0.002797800408259520401;
                  } else {
                    sum += (double)0.00944162158295202246;
                  }
                } else {
                  sum += (double)0.0006149080021677857553;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1729500000000000204) ) ) {
              sum += (double)0.004743862970149625297;
            } else {
              sum += (double)-0.0008179701822534753359;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6213000000000000744) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8457500000000001128) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3137585000000000512) ) ) {
                sum += (double)-0.0009230607007118679392;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.18253968253969077) ) ) {
                  sum += (double)-0.002397694175955687214;
                } else {
                  sum += (double)-0.007759139103719797474;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
                sum += (double)0.004036349459650359281;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1994.138578142030383) ) ) {
                  sum += (double)-0.004590492161782030317;
                } else {
                  sum += (double)0.0003020874682919440506;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8551000000000000822) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1275578474030112097) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3502855000000000829) ) ) {
                  sum += (double)4.488075052754526774e-05;
                } else {
                  sum += (double)0.005584883284860455224;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.907008495145631422) ) ) {
                    sum += (double)0.0006290472887259382145;
                  } else {
                    sum += (double)-0.007005377920078157891;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1002500000000000197) ) ) {
                    sum += (double)0.00680306870926679786;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8817.104006290848702) ) ) {
                      sum += (double)-0.001778265078489708884;
                    } else {
                      sum += (double)0.003606731312127668069;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1612811956950306047) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001450000000000000334) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228310000000000346) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
                      sum += (double)0.003517599345308604786;
                    } else {
                      sum += (double)-0.0006797233500942271786;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.606377583365031558) ) ) {
                      sum += (double)-0.0009742597764857155668;
                    } else {
                      sum += (double)-0.005618567048433297829;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.790963257199603031) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
                      sum += (double)0.004967480501651430277;
                    } else {
                      sum += (double)0.0008359172043910324595;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
                      sum += (double)-9.562977618456366616e-06;
                    } else {
                      sum += (double)-0.002630328060667477038;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04108592410728736238) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
                    sum += (double)-0.001689441777393059507;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)12670.19278798460982) ) ) {
                      sum += (double)0.004316508478251568706;
                    } else {
                      sum += (double)-0.0001348237385919878425;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5741900000000000892) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
                      sum += (double)-0.002328124505300211387;
                    } else {
                      sum += (double)-0.01008537867738474279;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.71626984126984361) ) ) {
                      sum += (double)-0.002254912189533337784;
                    } else {
                      sum += (double)0.0008870219554607784111;
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.003606642998601885825;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.532388663967611642) ) ) {
          sum += (double)-0.00101294595300756231;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7959100033456006917) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-95.57213752792789307) ) ) {
              sum += (double)-0.0004782248597796574839;
            } else {
              sum += (double)-0.005143119774629402972;
            }
          } else {
            sum += (double)-0.008331426665442310045;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08395000000000001072) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7607063765522581456) ) ) {
            sum += (double)-0.0004893677931748199785;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4951140000000000541) ) ) {
              sum += (double)0.006497995841889260896;
            } else {
              sum += (double)-7.048299424623377153e-05;
            }
          }
        } else {
          sum += (double)-0.003639825440006950758;
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.45833333333334281) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
      sum += (double)0.003284033651007082881;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)753.4351851851853326) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1484500000000000264) ) ) {
              sum += (double)0.006004974099511886307;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
                sum += (double)-0.001865740093382147564;
              } else {
                sum += (double)0.002486372834561859438;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5678500000000000769) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-72018.65726884668402) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                  sum += (double)0.001544709111125500091;
                } else {
                  sum += (double)0.006165381531746961727;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01055000000000000208) ) ) {
                  sum += (double)-0.003392965230814723628;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03635000000000000731) ) ) {
                    sum += (double)0.004241390244531698973;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.540750000000000175) ) ) {
                      sum += (double)0.0001411134352323616819;
                    } else {
                      sum += (double)0.003476185198581160755;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36696.22831575417513) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
                  sum += (double)-0.0004765189186517526437;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.52485445588894208) ) ) {
                    sum += (double)-0.001993974396629430608;
                  } else {
                    sum += (double)-0.007393323936789128296;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-32780.76529662315443) ) ) {
                  sum += (double)0.004046839475685154452;
                } else {
                  sum += (double)-4.865931556160081248e-05;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31299.3757595375755) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24053.73781696207516) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2632500000000000395) ) ) {
                sum += (double)-0.005274529999136617214;
              } else {
                sum += (double)-0.000569009815850944514;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87146226415094574) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.65524034672972675) ) ) {
                      sum += (double)5.454081466314801308e-05;
                    } else {
                      sum += (double)-0.0005916325892852501841;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
                      sum += (double)-0.0006885282577820408222;
                    } else {
                      sum += (double)-0.004513678449272063263;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.471890500000000046) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4043265000000000886) ) ) {
                      sum += (double)0.001103576346040210368;
                    } else {
                      sum += (double)-0.003601909784896213055;
                    }
                  } else {
                    sum += (double)0.005478640478844189893;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9450000000000000622) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3650000000000000466) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2043540000000000079) ) ) {
                      sum += (double)0.0001382538970749498252;
                    } else {
                      sum += (double)-0.001671229849894824643;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.7332126398946883) ) ) {
                      sum += (double)0.0006452291719685356421;
                    } else {
                      sum += (double)0.006361094486433254216;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19559.23761677038419) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6282926336678872348) ) ) {
                      sum += (double)-0.002390903136854539198;
                    } else {
                      sum += (double)0.0009413879470109354003;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.78183361629881531) ) ) {
                      sum += (double)-0.002835871162818488951;
                    } else {
                      sum += (double)-0.0003299896220608864589;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
              sum += (double)0.007194208166117394693;
            } else {
              sum += (double)0.0007134164411667745813;
            }
          }
        }
      } else {
        sum += (double)-0.00374064411390458932;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.10606060606062329) ) ) {
      sum += (double)0.002700261630610622989;
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8817.104006290848702) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1110915000000000236) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20716.01340554505077) ) ) {
              sum += (double)0.0005806247192526142438;
            } else {
              sum += (double)-0.0001754602453631672065;
            }
          } else {
            sum += (double)-0.0008112855133846126219;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-45582.08751746388589) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5229930000000001522) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1643500000000000238) ) ) {
                sum += (double)-0.003288499511012310875;
              } else {
                sum += (double)-0.0009032444430571250462;
              }
            } else {
              sum += (double)0.001403995125282547253;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
              sum += (double)-0.002540163887730546854;
            } else {
              sum += (double)-0.004685026282179165572;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9989.107872504324405) ) ) {
          sum += (double)0.003215997310796710369;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7310500000000000886) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5599500000000001698) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6507500000000000506) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)17604.53908125846283) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4625500000000000722) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                      sum += (double)-0.001286737047393263613;
                    } else {
                      sum += (double)-0.003652385743878217884;
                    }
                  } else {
                    sum += (double)2.25086043643494715e-05;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)20900.29691740099588) ) ) {
                    sum += (double)0.003455834460558156358;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3699670000000000458) ) ) {
                      sum += (double)0.0001949699781617809534;
                    } else {
                      sum += (double)-0.002642445623855712092;
                    }
                  }
                }
              } else {
                sum += (double)0.003188279247299260523;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1810395000000000199) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1506500000000000339) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07622150000000001147) ) ) {
                    sum += (double)-0.0004795298861273780949;
                  } else {
                    sum += (double)-0.001262153832416340951;
                  }
                } else {
                  sum += (double)0.0003252022914756543979;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2951822687085968178) ) ) {
                  sum += (double)-0.003904980428753430498;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
                    sum += (double)-0.002163490709937492592;
                  } else {
                    sum += (double)7.817743225200359327e-05;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506000000000000449) ) ) {
              sum += (double)0.003241846536871229815;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1647458771900037477) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1092270181979944632) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.02129570787603783308) ) ) {
                    sum += (double)0.0005433323660112085321;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.04988135003030733788) ) ) {
                      sum += (double)5.155588863872961654e-06;
                    } else {
                      sum += (double)-0.0002041834385383324178;
                    }
                  }
                } else {
                  sum += (double)-0.001403933983463278266;
                }
              } else {
                sum += (double)0.0006918302978747242846;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.569111884291402359) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2338600000000000401) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
            sum += (double)-0.0003140473333497896362;
          } else {
            sum += (double)0.005514249721919902911;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4263286645986366086) ) ) {
            sum += (double)-0.006344326089144414031;
          } else {
            sum += (double)-0.0008152711762658136933;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.221246000000000026) ) ) {
          sum += (double)-0.000305524470175233705;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1172.762349355894003) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2792689664682383444) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4172500000000000653) ) ) {
                  sum += (double)-0.0009179277272896513773;
                } else {
                  sum += (double)0.00416881667826680697;
                }
              } else {
                sum += (double)-0.001545770322316423681;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4191117286610134829) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
                  sum += (double)0.01114983684504509097;
                } else {
                  sum += (double)0.004090217326846638454;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.38875137513751667) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107150000000000023) ) ) {
                    sum += (double)0.001957449232062411816;
                  } else {
                    sum += (double)0.006547812052142870827;
                  }
                } else {
                  sum += (double)-0.002164304948318589161;
                }
              }
            }
          } else {
            sum += (double)-0.003584026293264552538;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4901500000000000301) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074926675286680289) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
            sum += (double)-0.007675363017187047075;
          } else {
            sum += (double)-0.00132489217439977873;
          }
        } else {
          sum += (double)0.002560530933858744772;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5324000000000000954) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1186.628837777138642) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5159500000000001307) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2053.868197878035971) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3787509271869893279) ) ) {
                  sum += (double)0.007677340349730049987;
                } else {
                  sum += (double)-0.0004820644063769893351;
                }
              } else {
                sum += (double)-0.003440326395363730531;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
                sum += (double)0.00301224361454603554;
              } else {
                sum += (double)0.008474436040187731736;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5500179611347216779) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3851.015235517284509) ) ) {
                  sum += (double)0.00638651948287991076;
                } else {
                  sum += (double)0.001018540475721846968;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904340000000000588) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                    sum += (double)-0.0008338238797545967839;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.83232931726908177) ) ) {
                      sum += (double)0.007531812348328109988;
                    } else {
                      sum += (double)-0.0002335298233761322014;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4709808304613328223) ) ) {
                    sum += (double)0.001521606232739709016;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.79864864864865481) ) ) {
                      sum += (double)-0.006599109653169027249;
                    } else {
                      sum += (double)-0.001295048774360889028;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2900.856362099862963) ) ) {
                sum += (double)-0.006384517421569036767;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5065000000000000613) ) ) {
                  sum += (double)0.003473029565865579961;
                } else {
                  sum += (double)-0.002277254022548112072;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4236293998663874238) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4791.91395952250241) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.60681818181819125) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                    sum += (double)-0.001595962768338767641;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
                      sum += (double)0.0006672374162995255544;
                    } else {
                      sum += (double)0.005995305843278429976;
                    }
                  }
                } else {
                  sum += (double)-0.002114959954353902351;
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)13067.72038594807418) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.90096618357488367) ) ) {
                    sum += (double)0.009545513016263277445;
                  } else {
                    sum += (double)0.002647158755066244054;
                  }
                } else {
                  sum += (double)0.0006548200183265038025;
                }
              }
            } else {
              sum += (double)-4.572300083113563213e-06;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08115000000000001379) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.286607142857144837) ) ) {
                  sum += (double)-5.653138597916948851e-05;
                } else {
                  sum += (double)0.004414625342717156016;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
                  sum += (double)-0.00791501715540919408;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.64483714483714571) ) ) {
                    sum += (double)0.004079214392793763071;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4928625677951861683) ) ) {
                      sum += (double)-0.001685594703339766747;
                    } else {
                      sum += (double)-0.006888713233412423372;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)739.2431776973787692) ) ) {
                sum += (double)0.003583126797144839133;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5666130000000001443) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.933699633699635712) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
                      sum += (double)-0.0006664283723355707376;
                    } else {
                      sum += (double)-0.00923018688187624177;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6770500000000000407) ) ) {
                      sum += (double)-0.0004841885707155844172;
                    } else {
                      sum += (double)0.001646689912199873155;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
                    sum += (double)0.004289751604593984753;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5623500000000001275) ) ) {
                      sum += (double)0.004337213762287545939;
                    } else {
                      sum += (double)-0.0009912466632217358745;
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
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5797681545636242939) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.46790123456790411) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09385000000000003062) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
            sum += (double)0.001823948754969215115;
          } else {
            sum += (double)-0.002813069978166720005;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
            sum += (double)-1.960602430002302113e-05;
          } else {
            sum += (double)-0.00852614501627037974;
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5258.869399769443589) ) ) {
          sum += (double)0.00395085576433229068;
        } else {
          sum += (double)-0.001595796222877226677;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5324000000000000954) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3689500000000000557) ) ) {
          sum += (double)6.414712941947179692e-05;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6094905000000000461) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2128500000000000114) ) ) {
                sum += (double)-0.00105630351696095145;
              } else {
                sum += (double)0.0006346299712581314825;
              }
            } else {
              sum += (double)-0.005887282784449256179;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.57979626485568936) ) ) {
              sum += (double)-0.001471570147567100419;
            } else {
              sum += (double)-0.008354607184676980311;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1061.95970582644145) ) ) {
            sum += (double)0.006426917288272150815;
          } else {
            sum += (double)0.000237721687992614386;
          }
        } else {
          sum += (double)-0.0009460851996309722813;
        }
      }
    }
  }
  return sum;
}
