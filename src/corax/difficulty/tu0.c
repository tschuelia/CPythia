
#include "prediction.h"

void predict_unit0(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347230000000001704) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5650000000000000577) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8957715509494285078) ) ) {
            result[0] += 0.32177373676296295;
          } else {
            result[0] += 0.33845901276132706;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653589743589744199) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.257490756088232242) ) ) {
                result[0] += 0.3408020323243586;
              } else {
                result[0] += 0.3504742802391642;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.212912087912088488) ) ) {
                result[0] += 0.3582227427446357;
              } else {
                result[0] += 0.35032292859730124;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1243193429785608706) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8677000000000001378) ) ) {
                result[0] += 0.36010657636827687;
              } else {
                result[0] += 0.33713358975280916;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                result[0] += 0.3427903634310913;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
                    result[0] += 0.32548879569436723;
                  } else {
                    result[0] += 0.3362128836336521;
                  }
                } else {
                  result[0] += 0.34036379200904915;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044849653237345022) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
                  result[0] += 0.3487566203672966;
                } else {
                  result[0] += 0.35940582762045264;
                }
              } else {
                result[0] += 0.3352910844050787;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1774.246538787889904) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1350.354676455084928) ) ) {
                    result[0] += 0.36207694721622175;
                  } else {
                    result[0] += 0.3673226494936689;
                  }
                } else {
                  result[0] += 0.35335208599993584;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3686.786422307056) ) ) {
                    result[0] += 0.35431800177315476;
                  } else {
                    result[0] += 0.36389663975336956;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
                    result[0] += 0.3566756575323264;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4681341459817245365) ) ) {
                      result[0] += 0.35032292859730124;
                    } else {
                      result[0] += 0.34168283019909823;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0.3329611871990599;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6526430887472424169) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                  result[0] += 0.3746049676659895;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8212500000000001465) ) ) {
                    result[0] += 0.37043171673897984;
                  } else {
                    result[0] += 0.35893914058033444;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)690.7475206421901248) ) ) {
                  result[0] += 0.37030373805598843;
                } else {
                  result[0] += 0.380226166810479;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2353.687490992878338) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.405609901914840254) ) ) {
                    result[0] += 0.36720896539595205;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5340269922761711197) ) ) {
                      result[0] += 0.35032292859730124;
                    } else {
                      result[0] += 0.36123024587765556;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4901500000000000301) ) ) {
                    result[0] += 0.3645378628465258;
                  } else {
                    result[0] += 0.37249284307504205;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                  result[0] += 0.3505966830052452;
                } else {
                  result[0] += 0.36209805260638755;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9772770219198791963) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.975304878048781188) ) ) {
                result[0] += 0.36430143008016125;
              } else {
                result[0] += 0.35032292859730124;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1396.779958297000576) ) ) {
                result[0] += 0.3494422852571138;
              } else {
                result[0] += 0.33703664672569456;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.890916808149406769) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4880421551248437795) ) ) {
                result[0] += 0.38326404735599906;
              } else {
                result[0] += 0.3739293412969574;
              }
            } else {
              result[0] += 0.36511632143005157;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
              result[0] += 0.3908562539554481;
            } else {
              result[0] += 0.38079861156241257;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.091810344827586654) ) ) {
            result[0] += 0.37358024686307845;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7747129114313702214) ) ) {
                result[0] += 0.36921049652619664;
              } else {
                result[0] += 0.35288064189339857;
              }
            } else {
              result[0] += 0.348104289001595;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
            result[0] += 0.39721671016022037;
          } else {
            result[0] += 0.40594149906958243;
          }
        } else {
          result[0] += 0.3794045815508785;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8250000000000000666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.221246000000000026) ) ) {
          result[0] += 0.3126597449663226;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.948187489548568796) ) ) {
            result[0] += 0.3174480655578602;
          } else {
            result[0] += 0.33393411881103435;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.87026925953627732) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2577865146990329093) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1527886010815981133) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.852450000000000041) ) ) {
                result[0] += 0.32809024515682866;
              } else {
                result[0] += 0.341304895512861;
              }
            } else {
              result[0] += 0.34986139455026116;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4262175000000000824) ) ) {
              result[0] += 0.32380223986047396;
            } else {
              result[0] += 0.34199291341991794;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3819320000000000492) ) ) {
            result[0] += 0.3176498943284572;
          } else {
            result[0] += 0.328071891117631;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
                result[0] += 0.3554086618401283;
              } else {
                result[0] += 0.368697134954387;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                result[0] += 0.33425310105472883;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5732.82001265566214) ) ) {
                  result[0] += 0.343356804572823;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1667500000000000371) ) ) {
                    result[0] += 0.3478777073295284;
                  } else {
                    result[0] += 0.358636772525988;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03785000000000000864) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6969500000000000695) ) ) {
                    result[0] += 0.3654026635633342;
                  } else {
                    result[0] += 0.355951302758226;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3557370000000000254) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.252450980392159963) ) ) {
                      result[0] += 0.3480568276052875;
                    } else {
                      result[0] += 0.3387011282019856;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.0064516129032306) ) ) {
                      result[0] += 0.34588274995174495;
                    } else {
                      result[0] += 0.3597313929076356;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)918.2648103557561399) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3289.059317362541606) ) ) {
                    result[0] += 0.33985060894076696;
                  } else {
                    result[0] += 0.3261756188125733;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                      result[0] += 0.3333148585918013;
                    } else {
                      result[0] += 0.3424233944593747;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
                      result[0] += 0.34404941252845167;
                    } else {
                      result[0] += 0.3570847199278599;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00378787878788067) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8817.104006290848702) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4461.556953086569592) ) ) {
                      result[0] += 0.3230794467118461;
                    } else {
                      result[0] += 0.3350286107518847;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
                      result[0] += 0.33194170438081777;
                    } else {
                      result[0] += 0.34729893775231924;
                    }
                  }
                } else {
                  result[0] += 0.34808277285719885;
                }
              } else {
                result[0] += 0.34768366051277094;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.70619946091644792) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-31827.96148275736414) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3114755000000000718) ) ) {
                result[0] += 0.3452845316578882;
              } else {
                result[0] += 0.35553606132199345;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)18183.16014768836976) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5396.80911722399378) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14402.23152588333323) ) ) {
                      result[0] += 0.33050972536040535;
                    } else {
                      result[0] += 0.32257943537516426;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5289000000000001478) ) ) {
                      result[0] += 0.3508371153237267;
                    } else {
                      result[0] += 0.33054476822778894;
                    }
                  }
                } else {
                  result[0] += 0.34802135235953335;
                }
              } else {
                result[0] += 0.34948779841785116;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5182500000000002105) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3755158646863254179) ) ) {
                result[0] += 0.32698241526914074;
              } else {
                result[0] += 0.31847007921977033;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3420950000000000935) ) ) {
                result[0] += 0.3263411191813918;
              } else {
                result[0] += 0.34184341954478475;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37840909090909314) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.93082137161084688) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2556.820004021212753) ) ) {
                  result[0] += 0.3607946932416337;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3266000000000000569) ) ) {
                    result[0] += 0.3737802552419794;
                  } else {
                    result[0] += 0.3638602985753082;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5133.306374476119345) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.31844888366627622) ) ) {
                    result[0] += 0.355466344306732;
                  } else {
                    result[0] += 0.3469372678994315;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7484500000000001707) ) ) {
                    result[0] += 0.3654282568982561;
                  } else {
                    result[0] += 0.3565905543443882;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3726408267520956996) ) ) {
                result[0] += 0.38430627676821544;
              } else {
                result[0] += 0.36712127458950355;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
                result[0] += 0.353095712862933;
              } else {
                result[0] += 0.32798148488150725;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.948187489548568796) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3190058479532194) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6087500000000001243) ) ) {
                      result[0] += 0.3533902127103428;
                    } else {
                      result[0] += 0.36170427061947474;
                    }
                  } else {
                    result[0] += 0.3752021134699314;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1201.367728319936987) ) ) {
                    result[0] += 0.35920315979338424;
                  } else {
                    result[0] += 0.3432032888043298;
                  }
                }
              } else {
                result[0] += 0.3350646229659525;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)67.25628626692457601) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)19887.81802584273828) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-35445.64132608562795) ) ) {
                  result[0] += 0.3459393424419148;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10562.16622267131788) ) ) {
                      result[0] += 0.3288402758422606;
                    } else {
                      result[0] += 0.34117898941788877;
                    }
                  } else {
                    result[0] += 0.3448076384145668;
                  }
                }
              } else {
                result[0] += 0.3559498443668688;
              }
            } else {
              result[0] += 0.31956439105146844;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.643991500000000161) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5924805000000000765) ) ) {
                  result[0] += 0.3662343966230215;
                } else {
                  result[0] += 0.35008479420978506;
                }
              } else {
                result[0] += 0.37530358106414297;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.94680249009621065) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3427.976752410164409) ) ) {
                  result[0] += 0.3502068584996054;
                } else {
                  result[0] += 0.34214788068795465;
                }
              } else {
                result[0] += 0.3326664444621592;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6550000000000001377) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5399840518659736466) ) ) {
            result[0] += -0.02599040784478252;
          } else {
            result[0] += -0.014691219523586775;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.404545454545455208) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
              result[0] += -0.010468966205860025;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8769200928108228377) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
                  result[0] += 0.007864004403031881;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01125000000000000132) ) ) {
                    result[0] += -0.004433648559790163;
                  } else {
                    result[0] += 0.0033858080891672514;
                  }
                }
              } else {
                result[0] += -0.009686590538699944;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.650443786982250138) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
                result[0] += -0.022965811822925723;
              } else {
                result[0] += -0.010591178323094214;
              }
            } else {
              result[0] += -0.0053194607551599014;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044849653237345022) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2712850000000000539) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2158399509024095386) ) ) {
                result[0] += -0.010340451713891695;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711180124223603105) ) ) {
                  result[0] += 0.012439898896931124;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4006.744949928525784) ) ) {
                    result[0] += 0.004884229751479568;
                  } else {
                    result[0] += -0.007898532415191221;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5308159824506151203) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
                    result[0] += 0.01660991986340462;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.59010642135642144) ) ) {
                      result[0] += 0.004715259792999687;
                    } else {
                      result[0] += 0.012718755246065387;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3862.309036383199327) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
                    result[0] += 0.012374154921433058;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.293597746500404877) ) ) {
                      result[0] += -0.0027017331899515393;
                    } else {
                      result[0] += 0.010614382421029767;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                    result[0] += -0.007799291235734936;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1137.968895395498521) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.005277772891076188;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)15.77248611608338713) ) ) {
              result[0] += -0.0036923050141696875;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5160139698723101853) ) ) {
                    result[0] += 0.019664140298695683;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
                      result[0] += 0.016890723467304462;
                    } else {
                      result[0] += 0.006877994422644782;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)939.1508267619991557) ) ) {
                    result[0] += 0.018317388549138718;
                  } else {
                    result[0] += 0.025587097895584276;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4026600000000000734) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
                      result[0] += 0.005554225688965979;
                    } else {
                      result[0] += 0.014276551266564144;
                    }
                  } else {
                    result[0] += -0.0005237244091460218;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4231.908399006179934) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2951822687085968178) ) ) {
                      result[0] += 0.004553653365037397;
                    } else {
                      result[0] += 0.01549518654823109;
                    }
                  } else {
                    result[0] += 0.02304054946251882;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3216.282614078772895) ) ) {
            result[0] += 0.002962569820727906;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.908568443051202213) ) ) {
              result[0] += -0.0015800357755136189;
            } else {
              result[0] += -0.024790823877973395;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.582324042174648393) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            result[0] += 0.0065830175731371;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3787240042526709427) ) ) {
                  result[0] += 0.03334260716102534;
                } else {
                  result[0] += 0.023949910857134316;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2741.853991412898267) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1775.162171534685513) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1137.968895395498521) ) ) {
                      result[0] += 0.010722289884028294;
                    } else {
                      result[0] += 0.022712593670062637;
                    }
                  } else {
                    result[0] += 0.0058138523796557665;
                  }
                } else {
                  result[0] += 0.02618362262368639;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.363139534883722526) ) ) {
                result[0] += 0.03779150568516501;
              } else {
                result[0] += 0.018930633701769686;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
              result[0] += 0.020354890269726724;
            } else {
              result[0] += 0.009236761842727701;
            }
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5399840518659736466) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
            result[0] += 0.03640411732707817;
          } else {
            result[0] += 0.04854160314234458;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.094202898550724834) ) ) {
            result[0] += 0.03870936350200718;
          } else {
            result[0] += 0.020219672306820074;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2712850000000000539) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4250000000000000444) ) ) {
          result[0] += -0.03385514946063793;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30909090909091042) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.93444444444445196) ) ) {
              result[0] += -0.025462688132122723;
            } else {
              result[0] += -0.015398851112693323;
            }
          } else {
            result[0] += -0.0310362824472587;
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
            result[0] += -0.01276349404339975;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.8232142857142879) ) ) {
              result[0] += -0.02140088087710584;
            } else {
              result[0] += -0.028390817723252717;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.25978407557355609) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4368015000000000092) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.76388888888889284) ) ) {
                  result[0] += -0.020893157552378673;
                } else {
                  result[0] += -0.009283938699554952;
                }
              } else {
                result[0] += -0.003689923255517648;
              }
            } else {
              result[0] += 0;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
              result[0] += -0.025591489435185685;
            } else {
              result[0] += -0.011911663406227874;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30909090909091042) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
                result[0] += 0.0059392686940245715;
              } else {
                result[0] += 0.015373760136679173;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1667500000000000371) ) ) {
                result[0] += -0.008619606840425191;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2801060000000000771) ) ) {
                  result[0] += -0.0005548722656109432;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5732.82001265566214) ) ) {
                    result[0] += 0.002322303863081032;
                  } else {
                    result[0] += 0.010331708722187591;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5206.745974317551372) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000000000000865) ) ) {
                  result[0] += 0.01262168815817545;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3913.927573521703835) ) ) {
                    result[0] += 0.007329156144010851;
                  } else {
                    result[0] += -0.005527010810366208;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.83824525745257539) ) ) {
                  result[0] += -0.017726407806810382;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09385000000000003062) ) ) {
                    result[0] += -0.011201016371454344;
                  } else {
                    result[0] += 0.004419031751567488;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.21666666666667567) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600160000000000582) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3095740000000000713) ) ) {
                      result[0] += -0.008288536432990917;
                    } else {
                      result[0] += -0.018696469763428845;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5296500000000000652) ) ) {
                      result[0] += -0.015158049080486083;
                    } else {
                      result[0] += -0.021904333966257045;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0756500000000000089) ) ) {
                    result[0] += -0.018182205672448378;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.01309932726727522;
                    }
                  }
                }
              } else {
                result[0] += 0.0062093470586271375;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.2322677322677329) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19559.23761677038419) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2978831689071954059) ) ) {
                  result[0] += -0.0025182026561147014;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.01582751744766142) ) ) {
                    result[0] += -0.006877850023099764;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-27390.08921065179311) ) ) {
                      result[0] += -0.009847176898651956;
                    } else {
                      result[0] += -0.02472427549994273;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7451.581543301115744) ) ) {
                  result[0] += -0.00862743327838993;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)18183.16014768836976) ) ) {
                    result[0] += 0.0014965258443701975;
                  } else {
                    result[0] += 0.011313918168671616;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5261.246056081498864) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14660.96176939566249) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9392.751123286552684) ) ) {
                    result[0] += -0.018940282120283976;
                  } else {
                    result[0] += -0.0071786367078778245;
                  }
                } else {
                  result[0] += -0.023914523095689692;
                }
              } else {
                result[0] += -0.002259597052625683;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3436155000000000181) ) ) {
              result[0] += -0.028056767942918698;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
                result[0] += -0.022225887268420348;
              } else {
                result[0] += -0.008008976117918088;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5540.546691107218976) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2456.927866336010538) ) ) {
                  result[0] += 0.00710228285986322;
                } else {
                  result[0] += 0.015578959858636355;
                }
              } else {
                result[0] += 0.020481006856296457;
              }
            } else {
              result[0] += 0.0334089994398639;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5877760000000001872) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6243108164664067372) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05365000000000001018) ) ) {
                  result[0] += -0.008362927758738462;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221000000000000141) ) ) {
                    result[0] += 0.003922321433145087;
                  } else {
                    result[0] += 0.015824055326908212;
                  }
                }
              } else {
                result[0] += -0.017052284936767925;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5296500000000000652) ) ) {
                result[0] += 0.008331263079495764;
              } else {
                result[0] += 0.02364348645041704;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.62019230769231015) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16031.30829179268949) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675530000000000519) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.011798597231670862;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4648510000000000697) ) ) {
                    result[0] += 0.0013466990228270216;
                  } else {
                    result[0] += -0.0097129490325367;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5159500000000001307) ) ) {
                    result[0] += -0.005402655896517507;
                  } else {
                    result[0] += -0.016719369282502644;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1183000000000000163) ) ) {
                result[0] += -0.0016481865690708129;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3576884733354243617) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.31041666666667567) ) ) {
                    result[0] += -0.00652635852456949;
                  } else {
                    result[0] += -0.019485946432450177;
                  }
                } else {
                  result[0] += -0.026150968865165995;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.78183361629881531) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
                  result[0] += 0.01160223603179356;
                } else {
                  result[0] += 0.022775901201071695;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3810500000000000553) ) ) {
                  result[0] += 0.021193869541501018;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
                    result[0] += -0.009133465072461275;
                  } else {
                    result[0] += 0.005118900877750616;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
                result[0] += 0.00834859279834166;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.87142857142858077) ) ) {
                  result[0] += -0.006903264960510021;
                } else {
                  result[0] += -0.021430695712582704;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5750000000000000666) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-156.7600528121663501) ) ) {
            result[0] += -0.0240022239846449;
          } else {
            result[0] += -0.010744966689317516;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.481489856570616936) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
              result[0] += -0.017506446642004812;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78888888888889497) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
                  result[0] += 0.0036325478502564827;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.01079728923549853;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2900.856362099862963) ) ) {
                  result[0] += 0.011237452222008226;
                } else {
                  result[0] += -0.0044052626292152355;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
              result[0] += -0.018329871293267668;
            } else {
              result[0] += -0.009235093077445675;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358141500000000057) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                result[0] += 4.57618164728116e-06;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)961.6140299952331816) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3018.749278514522757) ) ) {
                    result[0] += 0.008519313488667;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.01450388697823839;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5481.444926233901242) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.86905594405594577) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1250500000000000222) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3213010000000000588) ) ) {
                      result[0] += 0.001550694486344081;
                    } else {
                      result[0] += -0.0076058687126401596;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5528205492927561471) ) ) {
                      result[0] += 0.013360802524469998;
                    } else {
                      result[0] += 0.002096799498983699;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3170295000000000196) ) ) {
                    result[0] += -0.011861269962901983;
                  } else {
                    result[0] += 0.000221972092968234;
                  }
                }
              } else {
                result[0] += 0.014025270212427589;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770958479253431361) ) ) {
                result[0] += 0.023508018782870947;
              } else {
                result[0] += 0.016881445439138016;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4401670142345356918) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2303.801636448604313) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
                      result[0] += 0.01797912833672407;
                    } else {
                      result[0] += 0.013411464036250998;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2523846967694989285) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.013813909137469611;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3571.445901236788359) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
                      result[0] += 0.0011135234980741305;
                    } else {
                      result[0] += 0.01414375696426202;
                    }
                  } else {
                    result[0] += -0.0006963562100273875;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4105955000000000576) ) ) {
                  result[0] += -0.0003913853362901712;
                } else {
                  result[0] += 0.006820877032010976;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
            result[0] += -0.0016056937627696426;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3216.282614078772895) ) ) {
              result[0] += -0.006555372778571412;
            } else {
              result[0] += -0.025252594774195242;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6670401960206224778) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
              result[0] += -0.0016280152686097985;
            } else {
              result[0] += 0.008444723143924832;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6014500000000001512) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3604310129059999368) ) ) {
                  result[0] += 0.028134254311860205;
                } else {
                  result[0] += 0.020803190457996265;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7052500000000000435) ) ) {
                    result[0] += 0.022357258268832187;
                  } else {
                    result[0] += 0.014913557088074502;
                  }
                } else {
                  result[0] += 0.007766876783954772;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
                result[0] += 0.032433574821170125;
              } else {
                result[0] += 0.02468059195463496;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.512751786874594107) ) ) {
                result[0] += 0.013083803085524249;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2696500000000000563) ) ) {
                  result[0] += -0.004031709619955227;
                } else {
                  result[0] += 0.005282783014538135;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.257490756088232242) ) ) {
                result[0] += 0.01883648460205525;
              } else {
                result[0] += 0.009378071549190497;
              }
            }
          } else {
            result[0] += -0.007352764434507839;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6399918775570295759) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3922500000000000431) ) ) {
              result[0] += 0.03891904417214904;
            } else {
              result[0] += 0.02492000945733107;
            }
          } else {
            result[0] += 0.013108262768867595;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
            result[0] += 0.04534944138290636;
          } else {
            result[0] += 0.029222759092918972;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4350000000000000533) ) ) {
          result[0] += -0.029838758349301116;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
            result[0] += -0.02102048468978438;
          } else {
            result[0] += -0.027183862056741944;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
              result[0] += -0.024421557750683574;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17778753292362026) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)878.7882229141167727) ) ) {
                  result[0] += -0.013533164983628651;
                } else {
                  result[0] += -0.024207636977212732;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
                  result[0] += 0.005639544606103915;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7875500000000000833) ) ) {
                    result[0] += -0.0021039251318818986;
                  } else {
                    result[0] += -0.01147908169455886;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
              result[0] += -0.026336895133202545;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4190.954657040626444) ) ) {
                result[0] += -0.011316027995150468;
              } else {
                result[0] += -0.02503204842380407;
              }
            }
          }
        } else {
          result[0] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5732.82001265566214) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8337.708244919273056) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15774.24072148520463) ) ) {
                  result[0] += 0.007732061295035724;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2566500000000001003) ) ) {
                    result[0] += -0.011919943888002276;
                  } else {
                    result[0] += -0.0001311470148884658;
                  }
                }
              } else {
                result[0] += 0.011131537651711345;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0939432926751793268) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.01535506945325823;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.06066176470588758) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09875000000000001832) ) ) {
                  result[0] += -0.01979510711285112;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)901.8913219877068741) ) ) {
                    result[0] += -0.018176240294012845;
                  } else {
                    result[0] += -0.0011074069273666021;
                  }
                }
              } else {
                result[0] += -0.005303225056142367;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4629760000000000542) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4662.809440025213917) ) ) {
                result[0] += 0.00479449197000521;
              } else {
                result[0] += 0.012686134855178943;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6254210000000001157) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3224500000000000699) ) ) {
                  result[0] += 0.021236671129918644;
                } else {
                  result[0] += 0.011798574858250829;
                }
              } else {
                result[0] += 0.02818424192606451;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.0592625109745395) ) ) {
              result[0] += -0.009759124478851845;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09385000000000003062) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5159500000000001307) ) ) {
                  result[0] += 0.006755695118559827;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.43665158371041102) ) ) {
                    result[0] += -0.009577781666568457;
                  } else {
                    result[0] += 0.0020302375349704584;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.978492136910269927) ) ) {
                  result[0] += 0.004698890905595556;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2106500000000000317) ) ) {
                    result[0] += 0.02004315726090539;
                  } else {
                    result[0] += 0.006564906217291983;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4951140000000000541) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00378787878788067) ) ) {
                  result[0] += -0.007104875753140976;
                } else {
                  result[0] += -0.018189555011770647;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7451.581543301115744) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
                    result[0] += 0.00738073793452224;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17639.05176736719659) ) ) {
                      result[0] += -0.00017530922648368823;
                    } else {
                      result[0] += -0.012156077444435453;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)16838.47520585079837) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.310715078210065665) ) ) {
                      result[0] += -0.006559447802106582;
                    } else {
                      result[0] += 0.009364296147688609;
                    }
                  } else {
                    result[0] += 0.013014007384423659;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228310000000000346) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
                  result[0] += -0.003912997316620283;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7158.326501222521074) ) ) {
                    result[0] += -0.021757104659690583;
                  } else {
                    result[0] += -0.010501600137357268;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5192.030210470990824) ) ) {
                    result[0] += -0.021736436418611404;
                  } else {
                    result[0] += -0.0021887202525903565;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)623.1461654618134389) ) ) {
                    result[0] += -0.020364837565818007;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.011083383636646838;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3282773505116238777) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2202032112554981602) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1678605806223842645) ) ) {
                    result[0] += -0.0037066956889636377;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3502855000000000829) ) ) {
                      result[0] += -0.021722205480970622;
                    } else {
                      result[0] += -0.010458555205513306;
                    }
                  }
                } else {
                  result[0] += 0.00484490275355312;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93867243867244454) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-26216.36240703851217) ) ) {
                    result[0] += -0.0025715343663211374;
                  } else {
                    result[0] += -0.020795630008370005;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
                    result[0] += -0.025272728824900417;
                  } else {
                    result[0] += -0.01804805224480247;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358141500000000057) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.52485445588894208) ) ) {
                    result[0] += -0.01275079661842565;
                  } else {
                    result[0] += -0.005424845156466617;
                  }
                } else {
                  result[0] += -0.025747958316137326;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.45584415584416149) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5049000000000000155) ) ) {
                    result[0] += 0.004963710261231769;
                  } else {
                    result[0] += -0.00352762343984124;
                  }
                } else {
                  result[0] += -0.012055673698475116;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.677320500000000103) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5882.835930520358488) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6152500000000001856) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817765000000001407) ) ) {
                    result[0] += 0.010635926974379324;
                  } else {
                    result[0] += -0.001532742470253065;
                  }
                } else {
                  result[0] += -0.009246153133517964;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
                  result[0] += 0.0211497069567452;
                } else {
                  result[0] += 0.007816704399846237;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4407500000000000306) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)103.9546342098412026) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5184500000000001885) ) ) {
                    result[0] += -0.009676399249437565;
                  } else {
                    result[0] += -0.023887718679507574;
                  }
                } else {
                  result[0] += -0.005027069499558357;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10362.98456196805637) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.013546048246297066;
                  }
                } else {
                  result[0] += -0.004798940007007038;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
              result[0] += 0.02680168857204925;
            } else {
              result[0] += 0.006982799010864516;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5466515000000001789) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7250000000000000888) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
              result[0] += -0.022168167890250355;
            } else {
              result[0] += -0.01080077126338272;
            }
          } else {
            result[0] += -0.004606069647009983;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
              result[0] += -0.01822573589523789;
            } else {
              result[0] += -0.00838740539851916;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9379530110910064833) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7759500000000000286) ) ) {
                  result[0] += 0.00948592786196137;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1572954101779138469) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
                      result[0] += -0.0020227764943884746;
                    } else {
                      result[0] += 0.008706011236117661;
                    }
                  } else {
                    result[0] += -0.009830901384823102;
                  }
                }
              } else {
                result[0] += -0.012939293581019454;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
                result[0] += -0.01553564656558156;
              } else {
                result[0] += -0.0029452927948325266;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.074247175785397301) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1488.538162805079082) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015000000000001013) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                    result[0] += 0.005538119445264747;
                  } else {
                    result[0] += 0.013271589954489725;
                  }
                } else {
                  result[0] += 0.00630419692303059;
                }
              } else {
                result[0] += 0.0016441048394967121;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5481.444926233901242) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                    result[0] += -0.010913266763908278;
                  } else {
                    result[0] += 0.003666281768037414;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2833.358085742900585) ) ) {
                      result[0] += 0.004777370352936791;
                    } else {
                      result[0] += 0.013251535890727962;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
                      result[0] += 0.003739940216098651;
                    } else {
                      result[0] += -0.0019190535957043162;
                    }
                  }
                }
              } else {
                result[0] += 0.012525226230031054;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075923801982495709) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.907008495145631422) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)690.7475206421901248) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4123000000000000553) ) ) {
                    result[0] += 0.016415996162522983;
                  } else {
                    result[0] += 0.008113561885674933;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
                    result[0] += 0.02061116974861635;
                  } else {
                    result[0] += 0.009931604112281039;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.036172945205479756) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02465000000000000524) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3211.649567834616846) ) ) {
                      result[0] += 0.0041438833222656275;
                    } else {
                      result[0] += 0.016681742395351314;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4800849858356940891) ) ) {
                      result[0] += 0.01656062104583925;
                    } else {
                      result[0] += 0.012695719686216973;
                    }
                  }
                } else {
                  result[0] += 0.005558165350831068;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.927625836485307165) ) ) {
                  result[0] += 0.01432643756965028;
                } else {
                  result[0] += 0.005180806539852497;
                }
              } else {
                result[0] += -0.005217547181100941;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2743.202382171203226) ) ) {
            result[0] += 0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.257490756088232242) ) ) {
              result[0] += -0.005585583802033817;
            } else {
              result[0] += -0.020378497606324847;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7224490000000001189) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3787240042526709427) ) ) {
                result[0] += 0.026208371142369596;
              } else {
                result[0] += 0.018646244902303745;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7803500000000002101) ) ) {
                result[0] += 0.020561437560733368;
              } else {
                result[0] += 0.010963886938636825;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
              result[0] += 0.03100536017795938;
            } else {
              result[0] += 0.022589039990475207;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.756425009589567043) ) ) {
              result[0] += 0.015258707019142524;
            } else {
              result[0] += 0.007078539204030545;
            }
          } else {
            result[0] += -0.0005386919591108411;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
          result[0] += 0.03321872694478111;
        } else {
          result[0] += 0.039785408117740936;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.602083333333334636) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
              result[0] += -0.02347859671197629;
            } else {
              result[0] += -0.012102482399209216;
            }
          } else {
            result[0] += -0.006620464078867593;
          }
        } else {
          result[0] += -0.025930018607085034;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
          result[0] += -0.0028072081492076365;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3254789019904610892) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1708.479834708773978) ) ) {
              result[0] += 0.0057761054414722885;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6535500000000000753) ) ) {
                  result[0] += -0.01025622920025944;
                } else {
                  result[0] += -0.022149680642035152;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5481.444926233901242) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7708000000000000407) ) ) {
                    result[0] += 0.0004911373956708749;
                  } else {
                    result[0] += -0.005911678724793552;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8312500000000001554) ) ) {
                    result[0] += -0.01896979175106074;
                  } else {
                    result[0] += -0.006341373943910544;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.8232142857142879) ) ) {
              result[0] += -0.017528456483862347;
            } else {
              result[0] += -0.024958107932766805;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4290.319098872139875) ) ) {
                result[0] += 0.002218476594502955;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                  result[0] += 0.0064188278988273695;
                } else {
                  result[0] += 0.014566884246473625;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2093320000000000181) ) ) {
                result[0] += -0.01571423093628929;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.02631578947369206) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                    result[0] += 0.003275513872879286;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1946668479876043911) ) ) {
                      result[0] += -0.0014134044049343274;
                    } else {
                      result[0] += -0.01079024339455468;
                    }
                  }
                } else {
                  result[0] += 0.006767703407934397;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9790.82043369202438) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[0] += 0.009397433538492242;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3557370000000000254) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
                      result[0] += -0.005570577280450256;
                    } else {
                      result[0] += -0.017602921209469692;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5189379155588735859) ) ) {
                      result[0] += -0.0033362219670754526;
                    } else {
                      result[0] += -0.01444467100744117;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5314418083097262047) ) ) {
                      result[0] += 0.002745921538195027;
                    } else {
                      result[0] += -0.006157816711183279;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                      result[0] += -0.017662602445069866;
                    } else {
                      result[0] += -0.002851899092432045;
                    }
                  }
                }
              }
            } else {
              result[0] += 0.008980120244019285;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.84693877551020691) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.03240740740741188) ) ) {
                result[0] += 0.005295841322958917;
              } else {
                result[0] += -0.003302122248104309;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9392.751123286552684) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4268500000000000627) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                      result[0] += -0.018117358732356093;
                    } else {
                      result[0] += -0.02419121833485509;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4059235000000000482) ) ) {
                      result[0] += -0.004476590239490821;
                    } else {
                      result[0] += -0.01759050236270873;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5289000000000001478) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.017608133149486747;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.61204013377927069) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2344066382699040996) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.005404599398213889;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
                    result[0] += -0.01900949685499745;
                  } else {
                    result[0] += -0.007952305660047303;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
              result[0] += -0.01327166810487588;
            } else {
              result[0] += -0.02259346013861036;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4960.940101036608212) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1427500000000000158) ) ) {
                result[0] += 0.001604878818628312;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6770500000000000407) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5751000000000000556) ) ) {
                    result[0] += 0.009359221906566061;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.01438825255269996;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6526275000000001381) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
                  result[0] += 0.020680473896840947;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3513000000000000012) ) ) {
                    result[0] += 0.004061882192642219;
                  } else {
                    result[0] += 0.013844905044597592;
                  }
                }
              } else {
                result[0] += 0.02680653402465664;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1203499999999999986) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3249.949450539746977) ) ) {
                  result[0] += -0.003890580305038675;
                } else {
                  result[0] += 0.007542434563295583;
                }
              } else {
                result[0] += -0.013219496990419008;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2928.425989978642974) ) ) {
                result[0] += 0.015315023279153113;
              } else {
                result[0] += -0.003953955683690511;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.62019230769231015) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5133.306374476119345) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09385000000000003062) ) ) {
                  result[0] += -0.019036952527409282;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3742.494223235453774) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2627.9895310241468) ) ) {
                      result[0] += -0.0061981397685767926;
                    } else {
                      result[0] += 0.00910237114590714;
                    }
                  } else {
                    result[0] += -0.013522955052128104;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2219744259704764244) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20302.8995617723449) ) ) {
                    result[0] += 0.010314660767754672;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2632500000000000395) ) ) {
                      result[0] += 0.0023072254622291456;
                    } else {
                      result[0] += -0.012113119022999472;
                    }
                  }
                } else {
                  result[0] += 0.01765259414478165;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1183000000000000163) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1604507482770009263) ) ) {
                  result[0] += -0.002639842008580072;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.22777777777778141) ) ) {
                    result[0] += -0.014841286051803708;
                  } else {
                    result[0] += -0.02381666896289486;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.677320500000000103) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11657.82777714064287) ) ) {
                    result[0] += 0.0049911797962376965;
                  } else {
                    result[0] += 0.016918112130061325;
                  }
                } else {
                  result[0] += -0.0020198560115531755;
                }
              } else {
                result[0] += 0.02143698383681432;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.08712121212122526) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6296205000000001384) ) ) {
                  result[0] += 0.013472310708674225;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3266000000000000569) ) ) {
                  result[0] += -0.005963351772018446;
                } else {
                  result[0] += -0.01470600281129784;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5350000000000001421) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
              result[0] += -0.023683075897933975;
            } else {
              result[0] += -0.015210932600499478;
            }
          } else {
            result[0] += -0.006347384126305559;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.481489856570616936) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
              result[0] += 0.006377929413287027;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.12310606060606588) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8377419705366430103) ) ) {
                  result[0] += -0.005269105997264603;
                } else {
                  result[0] += -0.012606695056114857;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05921603206594685392) ) ) {
                  result[0] += -0.008537915803614127;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
                    result[0] += -0.000421414832857835;
                  } else {
                    result[0] += 0.008204557860528613;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2951822687085968178) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8312500000000001554) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.016612763037702847;
                }
              } else {
                result[0] += -0.019351795393523982;
              }
            } else {
              result[0] += -0.00435306781305715;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3095740000000000713) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77179878048780548) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5060721500638297732) ) ) {
                result[0] += 0.011723357714010958;
              } else {
                result[0] += 0.002030398658830955;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05255000000000000643) ) ) {
                  result[0] += 0.0005390448650697048;
                } else {
                  result[0] += -0.012316058410414074;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.875961538461539568) ) ) {
                  result[0] += 0.008998828870907027;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.293597746500404877) ) ) {
                    result[0] += -0.0042172244076068705;
                  } else {
                    result[0] += 0.006479404672261507;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4995331520331520725) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8628500000000002279) ) ) {
                  result[0] += 0.015449751454096293;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6672.266741891098718) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
                      result[0] += -0.0006704809361158297;
                    } else {
                      result[0] += 0.007561642819614876;
                    }
                  } else {
                    result[0] += 0.01844874820178536;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.545995454461449814) ) ) {
                  result[0] += 0.004258111598373618;
                } else {
                  result[0] += 0.01106359393906364;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4626188573480190525) ) ) {
                  result[0] += 0.016805466954447963;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5606243401883367339) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.010623495054684495;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
                  result[0] += -0.005677771657729731;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7246031178489703573) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3391.870434469365591) ) ) {
                      result[0] += 0.008890813257528518;
                    } else {
                      result[0] += -0.0018480290065005511;
                    }
                  } else {
                    result[0] += -0.0039033299458439267;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3216.282614078772895) ) ) {
            result[0] += 0.002919174437173577;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.646068859198356105) ) ) {
              result[0] += -0.0032891996183357463;
            } else {
              result[0] += -0.018857242215547975;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)144.5092417440413044) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.532388663967611642) ) ) {
                result[0] += 0.012965547287777435;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
                  result[0] += 0.00853627129605779;
                } else {
                  result[0] += -0.0018852489239931849;
                }
              }
            } else {
              result[0] += 0.016323654833919246;
            }
          } else {
            result[0] += -0.003302145211073021;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2602911804898560555) ) ) {
                result[0] += 0.025812334339435573;
              } else {
                result[0] += 0.01972454419090932;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3913.927573521703835) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5565325000000000966) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5376165000000000527) ) ) {
                    result[0] += 0.01321711924207601;
                  } else {
                    result[0] += 0.007380609714631266;
                  }
                } else {
                  result[0] += 0.016722895628146526;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                  result[0] += 0.023884596097154636;
                } else {
                  result[0] += 0.01550678526525193;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.756425009589567043) ) ) {
            result[0] += 0.0331731627530831;
          } else {
            result[0] += 0.026241699823438287;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7513157894736842701) ) ) {
            result[0] += 0.03087013612480567;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
              result[0] += 0.015069478812368144;
            } else {
              result[0] += 0.0018811982886398793;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.875000000000000111) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4795045000000000557) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.118717000000000017) ) ) {
            result[0] += -0.024170302718539753;
          } else {
            result[0] += -0.021334999737210952;
          }
        } else {
          result[0] += -0.009615033743411267;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3184.283198592457211) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8116500000000000936) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11367.30908202939645) ) ) {
              result[0] += -0.021367845528631343;
            } else {
              result[0] += -0.01665618954763597;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13827.99262003128206) ) ) {
              result[0] += -0.016742046074291642;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                result[0] += -0.01386415431932734;
              } else {
                result[0] += 0.0006094107480871438;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7179500000000001991) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4262175000000000824) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4123000000000000553) ) ) {
                result[0] += -0.021511129042513597;
              } else {
                result[0] += -0.012099868486277738;
              }
            } else {
              result[0] += -0.001338760705867467;
            }
          } else {
            result[0] += 0.0011385382315801844;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2626015000000000432) ) ) {
                  result[0] += 0.002347037943067594;
                } else {
                  result[0] += 0.009888165896872508;
                }
              } else {
                result[0] += -0.003073403701555899;
              }
            } else {
              result[0] += 0.012659487474503232;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5189379155588735859) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3557370000000000254) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2982875000000000387) ) ) {
                    result[0] += -0.0006077088857893729;
                  } else {
                    result[0] += 0.005752210273754233;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6152500000000001856) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                      result[0] += 0.004772965107687697;
                    } else {
                      result[0] += -0.0027577777429383236;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6402500000000000968) ) ) {
                      result[0] += -0.02026391571870542;
                    } else {
                      result[0] += -0.006249278002439801;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.029850000000000005) ) ) {
                  result[0] += -0.0069158773110894285;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2988235496559247806) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3986990764490913053) ) ) {
                      result[0] += 0.006236202620641374;
                    } else {
                      result[0] += -0.00193003816343462;
                    }
                  } else {
                    result[0] += 0.01752780860961219;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.536038961038963535) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)623.1461654618134389) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2986.391455690082239) ) ) {
                    result[0] += -0.0018447700199404544;
                  } else {
                    result[0] += -0.017598843396712284;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1623500000000000221) ) ) {
                    result[0] += -0.002678691995591588;
                  } else {
                    result[0] += 0.006862595481131212;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3819320000000000492) ) ) {
                  result[0] += -0.014538754492486022;
                } else {
                  result[0] += -0.005660056836863392;
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2127.473441927146268) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3020500000000000962) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5877760000000001872) ) ) {
                result[0] += 0.013642382163168055;
              } else {
                result[0] += 0.02513435572640724;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3652000000000000246) ) ) {
                result[0] += 0.0039200520460564055;
              } else {
                result[0] += 0.0153206487993151;
              }
            }
          } else {
            result[0] += -0.002816790972782255;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4901430000000000509) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.64312313803376853) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9989.107872504324405) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
                  result[0] += -0.005561232951687993;
                } else {
                  result[0] += 0.0056299250033402075;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4426700000000000634) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
                      result[0] += -0.006375619107984828;
                    } else {
                      result[0] += -0.014926577904226572;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.16323529411765136) ) ) {
                      result[0] += -0.010539288326106809;
                    } else {
                      result[0] += 0.0022665284583470325;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7332.695226774164439) ) ) {
                    result[0] += 0.006700957755378754;
                  } else {
                    result[0] += -0.011730314432502166;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                result[0] += -0.00681471119116551;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37840909090909314) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19559.23761677038419) ) ) {
                    result[0] += 0.0025001045202161965;
                  } else {
                    result[0] += 0.012016631200312908;
                  }
                } else {
                  result[0] += -0.0014622846354491639;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3502855000000000829) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2399659671015315077) ) ) {
                result[0] += -0.0050658001474116615;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.31041666666667567) ) ) {
                  result[0] += -0.017290132258052326;
                } else {
                  result[0] += -0.022558344622923384;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4626188573480190525) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4505095000000000627) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4148169003269751576) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10755.47127666017332) ) ) {
                      result[0] += -0.015049344531394537;
                    } else {
                      result[0] += -0.005388468273803302;
                    }
                  } else {
                    result[0] += 0.0005574957768048553;
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.63929539295393312) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5732000000000001538) ) ) {
                      result[0] += -0.014516748302749391;
                    } else {
                      result[0] += -0.004436995120275538;
                    }
                  } else {
                    result[0] += -0.023191334201708557;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7446860000000000701) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)148.927747252747281) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)12336.40759658668867) ) ) {
                    result[0] += 0.0056293569407702936;
                  } else {
                    result[0] += 0.018219291024460845;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3634578871420977575) ) ) {
                    result[0] += -0.0023954337182563994;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34049.72333320909092) ) ) {
                      result[0] += 0.008535076167202234;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.382039592976585296) ) ) {
                  result[0] += -0.0025767041515992605;
                } else {
                  result[0] += -0.013477115737919803;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.61204013377927069) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4172500000000000653) ) ) {
                  result[0] += 0.0076341068923853166;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.7261363636363658) ) ) {
                    result[0] += 0.005485635752649922;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3546921061251228635) ) ) {
                      result[0] += -0.0008430068054216196;
                    } else {
                      result[0] += -0.013365300908306312;
                    }
                  }
                }
              } else {
                result[0] += -0.01417716627363282;
              }
            }
          } else {
            result[0] += 0.02020888528195153;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7250000000000000888) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11222.22816428306942) ) ) {
              result[0] += -0.01881826362499925;
            } else {
              result[0] += -0.009411456480270097;
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1350000000000000366) ) ) {
              result[0] += -0.012713237495771246;
            } else {
              result[0] += -0.004215469873941355;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2882292173067574903) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2870.605387001201507) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1774.246538787889904) ) ) {
                result[0] += -0.0019585667839618626;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78888888888889497) ) ) {
                  result[0] += 0.001269575130613208;
                } else {
                  result[0] += 0.01176729521128359;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
                result[0] += 0.002965832115847025;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
                  result[0] += -0.01632890183833106;
                } else {
                  result[0] += -0.003532536765382054;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-569.3023343863511627) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                result[0] += -0.017800751899648328;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2178.807099952505723) ) ) {
                  result[0] += -0.0030829220681292324;
                } else {
                  result[0] += -0.01162896761975629;
                }
              }
            } else {
              result[0] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                    result[0] += 0.009068884948684876;
                  } else {
                    result[0] += 0.002694129196109073;
                  }
                }
              } else {
                result[0] += -0.004681750881639767;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4528391421342179979) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4681341459817245365) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03843854959155177525) ) ) {
                    result[0] += 0.0053756822198675665;
                  } else {
                    result[0] += 0.013544638492294469;
                  }
                } else {
                  result[0] += 0.008921234325959948;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500000000000136) ) ) {
                  result[0] += 0.0001267681071646004;
                } else {
                  result[0] += 0.007458954675694026;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5801.456541730448407) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
                  result[0] += 0.008232329580670586;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.00812315140453068;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5629.325767958667711) ) ) {
                      result[0] += 0.005106780947217944;
                    } else {
                      result[0] += -0.0017496625535653816;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6493.911283074395214) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2503885000000000693) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.011562107546028566;
                  }
                } else {
                  result[0] += -0.0013294375121112815;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2333.321561901081623) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4033126559258033983) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.901809780515980819) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5420.781404110555741) ) ) {
                      result[0] += 0.008335503867999921;
                    } else {
                      result[0] += 0.01736330603601185;
                    }
                  } else {
                    result[0] += 0.0017738879736391732;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000000000000865) ) ) {
                    result[0] += -0.0035990974300509427;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.69062500000000249) ) ) {
                      result[0] += 0.007746486591570559;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                result[0] += -0.0017345010292331734;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
            result[0] += -0.02090791455743154;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
              result[0] += 0.011141246893152814;
            } else {
              result[0] += -0.015623814816655758;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5150000000000001243) ) ) {
          result[0] += -0.020941200248657893;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9139.728134485791088) ) ) {
            result[0] += -0.019378038277783036;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
              result[0] += -0.016172811623452393;
            } else {
              result[0] += -0.00849427737091445;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.01582751744766142) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
                  result[0] += 0.003184083488703306;
                } else {
                  result[0] += -0.0026414133099216153;
                }
              } else {
                result[0] += -0.014049760650185969;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3576884733354243617) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)16180.09325483776956) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.294700000000000073) ) ) {
                    result[0] += -0.006851203678462455;
                  } else {
                    result[0] += 0.004073864007137355;
                  }
                } else {
                  result[0] += 0.008847244219245879;
                }
              } else {
                result[0] += 0.011599030773086915;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5915500000000001313) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
                  result[0] += -0.012321342461068323;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
                    result[0] += -0.0007451010002565746;
                  } else {
                    result[0] += 0.0159577914309519;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10362.98456196805637) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6969500000000000695) ) ) {
                      result[0] += -0.020809743027906794;
                    } else {
                      result[0] += -0.01168606629111914;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13395.22104316800687) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.010047519175573352;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.8806779661016968) ) ) {
                    result[0] += 0.0039860346513147455;
                  } else {
                    result[0] += -0.011781746717592046;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.71626984126984361) ) ) {
                    result[0] += -0.021284217420850453;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4191117286610134829) ) ) {
                      result[0] += -0.009540980258829528;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5033500000000000751) ) ) {
                    result[0] += -0.018679247830171698;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.013529340095915362;
                    }
                  }
                }
              } else {
                result[0] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07230000000000001703) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3699670000000000458) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7158.326501222521074) ) ) {
                result[0] += -0.019889600566848877;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)19887.81802584273828) ) ) {
                  result[0] += -0.013455928415247077;
                } else {
                  result[0] += -0.018355563576455253;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4626188573480190525) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2086500000000000299) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.01192899546753027;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4033000000000000473) ) ) {
                  result[0] += -0.01899559632271154;
                } else {
                  result[0] += -0.004351759931233137;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6334290000000001308) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)760.1404084372057923) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.212912087912088488) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
              result[0] += 0.0062002005008771266;
            } else {
              result[0] += 0.014884141176315565;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9.965684599721443604) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
                result[0] += -0.012456393559108062;
              } else {
                result[0] += 8.938091862121901e-05;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06815000000000000224) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1458.29730909354339) ) ) {
                  result[0] += 0.00500045529293961;
                } else {
                  result[0] += -0.013271174121247781;
                }
              } else {
                result[0] += 0.012372201627233459;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            result[0] += 0.003746137319824695;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4148169003269751576) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
                result[0] += 0.02019195521802626;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                  result[0] += 0.01797627551174379;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                    result[0] += 0.0018824096340600593;
                  } else {
                    result[0] += 0.0163958404759875;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0261500000000000031) ) ) {
                result[0] += 0.0059622317405616425;
              } else {
                result[0] += 0.014110480682153153;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
          result[0] += -0.0006008576833787477;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7602760000000000629) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
              result[0] += 0.024694016794232027;
            } else {
              result[0] += 0.009210795079286382;
            }
          } else {
            result[0] += 0.03102259775699562;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.25728920409771661) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2197.409051300025112) ) ) {
                result[0] += 0.002944350229779847;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2689713774233481458) ) ) {
                  result[0] += 0.009979503318316572;
                } else {
                  result[0] += 0.017857545523483457;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8461.096702489729068) ) ) {
                  result[0] += 0.01210212627194284;
                } else {
                  result[0] += 0.0023893760485120975;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
                  result[0] += -0.005165980059366405;
                } else {
                  result[0] += 0.006158998104392785;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5500179611347216779) ) ) {
              result[0] += 0.01970659862202713;
            } else {
              result[0] += 0.00848455738675149;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4191117286610134829) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1435407080639670985) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4391.076444984862064) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.01152077646827378;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6181500000000000883) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289274051889615802) ) ) {
                    result[0] += -0.012065222971572668;
                  } else {
                    result[0] += 0.008482264081844226;
                  }
                } else {
                  result[0] += 0.008695175218815672;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.536038961038963535) ) ) {
                result[0] += -0.017838315990102455;
              } else {
                result[0] += -0.005936751843276945;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.602083333333334636) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.086028323821603081) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
                  result[0] += 0.00914903845998254;
                } else {
                  result[0] += 0.02113650196120018;
                }
              }
            } else {
              result[0] += -0.0006575303244703705;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
          result[0] += 0.01177242703966151;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16031.30829179268949) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.31041666666667567) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13833.51142176279791) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
                  result[0] += 0.004212544768080332;
                } else {
                  result[0] += -0.0069439582899345435;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                  result[0] += 0.016678836032212783;
                } else {
                  result[0] += 0.005766290932898534;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817765000000001407) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3327500000000000457) ) ) {
                  result[0] += -0.009466605176360601;
                } else {
                  result[0] += -0.020772714972915947;
                }
              } else {
                result[0] += -0.0032637794252244738;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93867243867244454) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1582500000000000295) ) ) {
                result[0] += -0.014783017240856913;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2632500000000000395) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.42792207792208359) ) ) {
                    result[0] += -0.0025889740958036666;
                  } else {
                    result[0] += -0.010999187239037372;
                  }
                }
              }
            } else {
              result[0] += -0.018972495790078314;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5321155000000000745) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6850000000000001643) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2104742577805706616) ) ) {
            result[0] += -0.015602721961200028;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
                result[0] += -0.0040435127932490844;
              } else {
                result[0] += -0.012557849278662775;
              }
            } else {
              result[0] += -0.001973290272071045;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
            result[0] += 0.006224980385910463;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2508523744426000568) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1488.538162805079082) ) ) {
                  result[0] += -0.011852787047779792;
                } else {
                  result[0] += 0.001994500706296915;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
                  result[0] += 0.01246570927392294;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1723.432309542571375) ) ) {
                    result[0] += -0.0017206089271673782;
                  } else {
                    result[0] += 0.0037082675126822013;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221000000000000141) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2202032112554981602) ) ) {
                    result[0] += -0.010605898890844347;
                  } else {
                    result[0] += -0.004332690833615098;
                  }
                } else {
                  result[0] += -0.019864929377224432;
                }
              } else {
                result[0] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.194724803310769135) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2053.868197878035971) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.315748500000000043) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                      result[0] += 0.010737178131138154;
                    } else {
                      result[0] += 0.004274436519553646;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.004792062954145667;
                }
              } else {
                result[0] += 0.01082461745924672;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5567.746532477868641) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2503885000000000693) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
                    result[0] += -0.014065519343973602;
                  } else {
                    result[0] += -0.0016940855057393654;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1204359241998356339) ) ) {
                    result[0] += -0.007228705924978341;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1682.526551393980526) ) ) {
                      result[0] += -0.0009088674918613422;
                    } else {
                      result[0] += 0.005834532012925112;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2399659671015315077) ) ) {
                  result[0] += 0.01364542217926511;
                } else {
                  result[0] += 0.005600754000923514;
                }
              }
            }
          } else {
            result[0] += -0.012194026161092032;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075923801982495709) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.158598193308449209) ) ) {
                result[0] += 0.01578451779292013;
              } else {
                result[0] += 0.01231519979089358;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8962500000000001021) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3064.437254561459213) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2703.500010395392565) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
                      result[0] += 0.010736107577470764;
                    } else {
                      result[0] += 0.0036388724373884553;
                    }
                  } else {
                    result[0] += 0.0017957468212907422;
                  }
                } else {
                  result[0] += 0.013377186942795044;
                }
              } else {
                result[0] += 0.0005877746702857994;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4461.556953086569592) ) ) {
              result[0] += 0.00959551048901997;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.275716440422323128) ) ) {
                result[0] += 0.004795427020379926;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1827500000000000513) ) ) {
                  result[0] += -0.013969357166399757;
                } else {
                  result[0] += -0.003293842501809463;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7224490000000001189) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6133040000000001823) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2654846775688907701) ) ) {
                result[0] += 0.018456598529569487;
              } else {
                result[0] += 0.01451735938311068;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                result[0] += 0.0023674802334550413;
              } else {
                result[0] += 0.011456335129158193;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2598000000000000309) ) ) {
                result[0] += 0.021996907349761098;
              } else {
                result[0] += 0.013980836605312229;
              }
            } else {
              result[0] += 0.0089101637824401;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5701660000000000617) ) ) {
                result[0] += 0.007007876358900489;
              } else {
                result[0] += -0.00029767082777764915;
              }
            } else {
              result[0] += 0.011792621650996076;
            }
          } else {
            result[0] += -0.0030928614585558458;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)961.6140299952331816) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
                result[0] += 0.019733992262168095;
              } else {
                result[0] += 0.009982999617868357;
              }
            } else {
              result[0] += 0.02555596281994733;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6290.027305551750032) ) ) {
              result[0] += 0.018320292294101318;
            } else {
              result[0] += 0.028053247902281926;
            }
          }
        } else {
          result[0] += 0.017251341840322364;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36860497623707644) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
            result[0] += -0.016746012733313886;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9704.877429389192912) ) ) {
              result[0] += -0.005801337939485598;
            } else {
              result[0] += -0.01319107776516964;
            }
          }
        } else {
          result[0] += -0.01832424499568768;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.70619946091644792) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
            result[0] += 0.011682060720444358;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-26216.36240703851217) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
                result[0] += 0.006396461352777236;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36696.22831575417513) ) ) {
                  result[0] += 0.0024918997136284;
                } else {
                  result[0] += -0.0069834644836454665;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1960.422395893427392) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5060721500638297732) ) ) {
                      result[0] += -0.00700338150964991;
                    } else {
                      result[0] += -0.022312500342380557;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2850500000000000811) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                      result[0] += -0.0075408117632330615;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0077457159624332445;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2344066382699040996) ) ) {
                  result[0] += -0.0010214429145005098;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
                    result[0] += -0.017580210059727847;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                      result[0] += -0.014486733993060706;
                    } else {
                      result[0] += -0.009498971033368357;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)59725.4629650157658) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5049000000000000155) ) ) {
              result[0] += -0.018207965790870348;
            } else {
              result[0] += -0.009248631935196518;
            }
          } else {
            result[0] += -0.006733893009202034;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7957.086656945748473) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3190058479532194) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
                result[0] += 0.01834422889384758;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
                      result[0] += 0.009008655036762564;
                    } else {
                      result[0] += 0.002634688795964549;
                    }
                  } else {
                    result[0] += 0.013517245390781236;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
                    result[0] += -0.0034953612454819987;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
                      result[0] += 0.0013829669505333068;
                    } else {
                      result[0] += 0.008220217462372299;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289274051889615802) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                  result[0] += 0.008027402171572395;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.407843474118376681) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.004349414101311389;
                    }
                  } else {
                    result[0] += -0.006081173325836562;
                  }
                }
              } else {
                result[0] += -0.012296404151848558;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.313112745098040435) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                  result[0] += -0.009948776510801017;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.71832579185520729) ) ) {
                    result[0] += -0.004147390912188248;
                  } else {
                    result[0] += 0.0049938837173561165;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3700350016849980883) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2082316587659429064) ) ) {
                    result[0] += -0.0005328450882946911;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1910.675745379773161) ) ) {
                      result[0] += -0.022070714387025285;
                    } else {
                      result[0] += -0.013015438300353701;
                    }
                  }
                } else {
                  result[0] += -9.767358944285695e-05;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4084000000000000408) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.074247175785397301) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
                    result[0] += -0.012382214363493634;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.02101455473980628;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1359000000000000485) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.540050000000000141) ) ) {
                    result[0] += 0.005276399618883689;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.18303571428572241) ) ) {
                      result[0] += -0.009628179165634384;
                    } else {
                      result[0] += 0.002134459267787342;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1426.377837264146592) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
                      result[0] += 0.012962660032192753;
                    } else {
                      result[0] += 0.0026619886743514502;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
                      result[0] += -0.0032052742529883682;
                    } else {
                      result[0] += 0.005984268381355261;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13827.99262003128206) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2304500000000000159) ) ) {
                  result[0] += -0.01294148942941707;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6152500000000001856) ) ) {
                    result[0] += -0.004328850131572624;
                  } else {
                    result[0] += 0.00416311915626351;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
                    result[0] += 0.007087228633352509;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5882.835930520358488) ) ) {
                      result[0] += -0.006246769871590502;
                    } else {
                      result[0] += 0.0028085358203581386;
                    }
                  }
                } else {
                  result[0] += 0.012870183480751574;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
                  result[0] += -0.003019188864308329;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-27390.08921065179311) ) ) {
                      result[0] += 0.0006967478602862091;
                    } else {
                      result[0] += -0.01729528985847702;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6603400946501547519) ) ) {
                      result[0] += -0.016475555115413657;
                    } else {
                      result[0] += -0.007361660517486592;
                    }
                  }
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
              result[0] += -0.0022437807098053763;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4681341459817245365) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3742.494223235453774) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6112.637109564428101) ) ) {
                    result[0] += 0.004232360308349355;
                  } else {
                    result[0] += -0.004663916902024143;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5706.165657108974301) ) ) {
                    result[0] += -0.015025555859981212;
                  } else {
                    result[0] += -0.004947911399689967;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.64312313803376853) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
                    result[0] += -0.017308256812795;
                  } else {
                    result[0] += -0.002299303886372167;
                  }
                } else {
                  result[0] += -0.018602228438834446;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03200000000000000761) ) ) {
            result[0] += 0.000788424788687795;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2632500000000000395) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
                result[0] += 0.008237699025366235;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.52175925925926236) ) ) {
                  result[0] += 0.021000562614900728;
                } else {
                  result[0] += 0.011789808212935609;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3652000000000000246) ) ) {
                result[0] += 0.002057614496185516;
              } else {
                result[0] += 0.011736100036367372;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.69385026737968047) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
                result[0] += -0.005435031349090404;
              } else {
                result[0] += 0.007381725050402428;
              }
            } else {
              result[0] += -0.00918648583155341;
            }
          } else {
            result[0] += 0.015711156607215157;
          }
        }
      }
    }
  }
}

