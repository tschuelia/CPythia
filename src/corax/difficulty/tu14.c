
#include "prediction.h"

void predict_unit14(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7092500000000001581) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.114147004888090417) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3190058479532194) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6678500000000000547) ) ) {
            result[0] += -0.0011399052814105983;
          } else {
            result[0] += 0;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3018.749278514522757) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.727553723874008185) ) ) {
              result[0] += 0.00035251525634829304;
            } else {
              result[0] += 0.004380501242981276;
            }
          } else {
            result[0] += 0;
          }
        }
      } else {
        result[0] += 0.004322305646045887;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3170295000000000196) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.7610275038920733) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10562.16622267131788) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02465000000000000524) ) ) {
                    result[0] += 0.0012417559022589464;
                  } else {
                    result[0] += -0.001110153743028949;
                  }
                } else {
                  result[0] += 0.005986579255612088;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4472500000000000364) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.197938500000000045) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0025904396961558837;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3829700104266255956) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4853978233193322334) ) ) {
                      result[0] += -0.0001727779900659146;
                    } else {
                      result[0] += 0.0001772216404447327;
                    }
                  } else {
                    result[0] += 0.003497325062221668;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)878.7882229141167727) ) ) {
                result[0] += 0.0017652199042358133;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.94047619047619335) ) ) {
                  result[0] += -0.004352340756684562;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7143.768529324467636) ) ) {
              result[0] += 0.004707841673998305;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5261.246056081498864) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.52228163992870336) ) ) {
                    result[0] += -0.003211640659509381;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6189.910138631900736) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0002485681665295061;
                    }
                  }
                } else {
                  result[0] += 0.001470594216985569;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1810395000000000199) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2190499999999999947) ) ) {
                      result[0] += 0.0052009346527142186;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1359000000000000485) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1842.867320295106538) ) ) {
                      result[0] += 0.001609891039653848;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
                      result[0] += -0.004378943173055355;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.08712121212122526) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03995000000000000634) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2668555000000000788) ) ) {
                result[0] += -0.00029037467987712105;
              } else {
                result[0] += -0.004618797624513412;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7517.831857566079634) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                result[0] += 0.003282954991392412;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.30731523378582892) ) ) {
                  result[0] += 0.0022399895597883693;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.94680249009621065) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2067000000000000226) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0033648030556133694;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09695000000000000839) ) ) {
                      result[0] += -0.0001325714349117178;
                    } else {
                      result[0] += 0.0006228215087034618;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4290.319098872139875) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2316266331274001722) ) ) {
                  result[0] += 0.0012639862796404765;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114255000000000162) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.01569650000000000559) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00022762834984921493;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5254000000000000892) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.001764358248850018;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5349.110830475206967) ) ) {
                  result[0] += -0.0022489542225998665;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2219744259704764244) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
              result[0] += -0.0002752870849348877;
            } else {
              result[0] += -0.004729317140150466;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4709808304613328223) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4103386442176324422) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.004571320176643584;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5500179611347216779) ) ) {
                result[0] += 0.0036074804728226753;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5396.80911722399378) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                    result[0] += 0.0020196695423345436;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2668.597659326529538) ) ) {
                      result[0] += -0.0006558875926354889;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
                    result[0] += -0.005106635202777567;
                  } else {
                    result[0] += 7.01276823716453e-07;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.692450000000000121) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.18303571428572241) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03785000000000000864) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-200.3606350077996296) ) ) {
                      result[0] += -0.00025306611909239397;
                    } else {
                      result[0] += 0.0015252692356615479;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.433327285921625727) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0021631474248671014;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3954325276832468261) ) ) {
                      result[0] += 0.0007961157400549182;
                    } else {
                      result[0] += -0.00046939840908812687;
                    }
                  } else {
                    result[0] += 0.0025748649359996242;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4626188573480190525) ) ) {
                  result[0] += -0.006493788263633958;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5001330000000000497) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.569111884291402359) ) ) {
                      result[0] += 0.00047481335174254664;
                    } else {
                      result[0] += -0.0020748190360788017;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6112.637109564428101) ) ) {
                      result[0] += 0.0037043838294749964;
                    } else {
                      result[0] += -0.0002961872274248921;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18253968253969077) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1688500000000000278) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4268500000000000627) ) ) {
                    result[0] += 0.006439819678396365;
                  } else {
                    result[0] += 0.00022846063712574094;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3986990764490913053) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                    result[0] += 0.0010647904768688317;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.36487820934827653) ) ) {
                      result[0] += -0.005007768163604275;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1183000000000000163) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3492040711322696445) ) ) {
                      result[0] += -0.00380718180805597;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.61204013377927069) ) ) {
                      result[0] += 0.004194361422927163;
                    } else {
                      result[0] += 0.0005452290698351565;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4648510000000000697) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2301.714118936117757) ) ) {
                result[0] += 0.0006515181261004073;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4169.613374163339358) ) ) {
                  result[0] += -0.0029409891037199963;
                } else {
                  result[0] += 2.2798517476227593e-05;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.145515329548585759) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5321155000000000745) ) ) {
                  result[0] += 0.007493534720252364;
                } else {
                  result[0] += 0.000313405124595748;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7166500000000001203) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3282773505116238777) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03545000000000000234) ) ) {
          result[0] += -0.001109298689097397;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.0005872624735260312;
          }
        }
      } else {
        result[0] += -0.004180258005581941;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.24725274725274815) ) ) {
          result[0] += 0;
        } else {
          result[0] += 0.0035496339307491205;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7263500000000001622) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355947963695212921) ) ) {
            result[0] += -0.003927283051361141;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
              result[0] += 0.001216926096243697;
            } else {
              result[0] += -0.0014234817695348303;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5192.030210470990824) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4478500000000000258) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1937.925932230502212) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.606377583365031558) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2484845401189077485) ) ) {
                      result[0] += 0.0004400495818932018;
                    } else {
                      result[0] += -0.0007115694397361108;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0023738032613576303;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04145000000000000767) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.138110787595931539) ) ) {
                      result[0] += 0.0007877599880073002;
                    } else {
                      result[0] += -0.0005834722337800742;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2428.189675971083943) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0022170134851370155;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2223713548084257641) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07519656588417543419) ) ) {
                      result[0] += -0.0009171342739826096;
                    } else {
                      result[0] += -0.008123426553485968;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7942500000000002336) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7310500000000000886) ) ) {
                      result[0] += 0.002588306351382952;
                    } else {
                      result[0] += -0.0014482122190223386;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00407899008046485;
                    }
                  }
                }
              }
            } else {
              result[0] += 0.005757731584199357;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)159.4971590909091219) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003250000000000000718) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.93444444444445196) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10534.50099646399576) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2539.379249415995218) ) ) {
                      result[0] += 0.002026842545477882;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.003996975810153189;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.004473014923284619;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02895000000000000351) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02459183207930617718) ) ) {
                      result[0] += -0.0035153958921194345;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003964400746744438;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
                      result[0] += 0.001039597997222463;
                    } else {
                      result[0] += -0.0018233240499857337;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1861530472994430141) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0018364050054870634;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29069.44581527830451) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06864811295460455931) ) ) {
                      result[0] += -0.0005096467908758384;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0016648380104391774;
                  }
                } else {
                  result[0] += -0.0030359673594740465;
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5850000000000000755) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
                    result[0] += 0.0006767358891058815;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1750000000000000167) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0005056024030589452;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9584500000000001352) ) ) {
                    result[0] += 0.006112916957738457;
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
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5973.486975242797598) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4357.007724276188128) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3851.015235517284509) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3686.786422307056) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3632.024792260073355) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3486.590803824997238) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1851412897798530577) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3064.437254561459213) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.67902930402930473) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2038.087406351012987) ) ) {
                      result[0] += 0.0006777834470724612;
                    } else {
                      result[0] += -0.0009645421306508667;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08235000000000002041) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0032217721335117033;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.432034895516332895) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.69062500000000249) ) ) {
                      result[0] += -0.00022554302794106461;
                    } else {
                      result[0] += 0.0016046768625052968;
                    }
                  } else {
                    result[0] += -0.0032793637248286138;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6241500000000000936) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6152500000000001856) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
                      result[0] += -1.0484958688385611e-05;
                    } else {
                      result[0] += 0.0012967480245949356;
                    }
                  } else {
                    result[0] += 0.004240829982746521;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2470603993683292143) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6659500000000001529) ) ) {
                      result[0] += -0.005860020201185691;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999655000000000515) ) ) {
                      result[0] += -0.0007790873243889491;
                    } else {
                      result[0] += 0.002998338384159283;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2412.226788823968036) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1915340000000000376) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4150000000000000355) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4496507448607858781) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -2.6042476225337433e-05;
                    }
                  } else {
                    result[0] += 0.002912330439733587;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.23182297154900056) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.002037810964817809;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4487310000000000465) ) ) {
                      result[0] += 0.0017909973279198366;
                    } else {
                      result[0] += -0.0004014283219963851;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2712850000000000539) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1137.968895395498521) ) ) {
                      result[0] += -0.0011601141130334542;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904340000000000588) ) ) {
                      result[0] += 0.0029884696320421323;
                    } else {
                      result[0] += 0.00023669748333236321;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45141065830721239) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2792689664682383444) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.000653004571213551;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0031707704880522872;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += -0.003235499873806594;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6656.245527964973007) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
              result[0] += 0.0003968081242417948;
            } else {
              result[0] += 0.005968178398487981;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02075000000000000108) ) ) {
              result[0] += 0.0027155597030635646;
            } else {
              result[0] += -0.0010651091287681171;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.57417582417583191) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1275578474030112097) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.003719381426616409;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0028468775385762477;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4043265000000000886) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.04880952380953119) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11908.89586363036506) ) ) {
                result[0] += -0.004039592967555751;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0.0019676713460825986;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5201090000000001545) ) ) {
              result[0] += -0.006486291204332938;
            } else {
              result[0] += 0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.540750000000000175) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4420656524973072266) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.34134834110034179) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2978831689071954059) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7250000000000000888) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1974103251759973532) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3652.934062563911539) ) ) {
                    result[0] += -0.0013170839552269719;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.74189814814816657) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7285500000000001419) ) ) {
                    result[0] += 0.003576805189590052;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2743.202382171203226) ) ) {
                      result[0] += -0.0006425797498596625;
                    } else {
                      result[0] += 0.0017149703414687536;
                    }
                  }
                } else {
                  result[0] += 0.005099766797279173;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1909226976060683645) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.52175925925926236) ) ) {
                    result[0] += 0.0007681041463331431;
                  } else {
                    result[0] += -0.0030228760255863775;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.02631578947369206) ) ) {
                    result[0] += -0.006014234651323762;
                  } else {
                    result[0] += -0.00022817903422712977;
                  }
                }
              } else {
                result[0] += 0.0011949121622962233;
              }
            }
          } else {
            result[0] += 0.004657251147225739;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.314613457894214299) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
              result[0] += 0.00017074833277131192;
            } else {
              result[0] += 0.006305448717909027;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6549412391405855516) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.21666666666667567) ) ) {
                  result[0] += -0.003226903049073308;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              result[0] += 0.0016938514466142483;
            }
          }
        }
      } else {
        result[0] += 0.0038037222615215542;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3224500000000000699) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.88731060606061618) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.65838375108038605) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.18303571428572241) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1604507482770009263) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07269895721920012488) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8407499999999999973) ) ) {
                  result[0] += 0.0005504356725197842;
                } else {
                  result[0] += -0.0007480656869126155;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2253645772879973308) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0028823263702655905;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4348787844478528841) ) ) {
                result[0] += 0.0029966421118997797;
              } else {
                result[0] += -0.0008525728898086634;
              }
            }
          } else {
            result[0] += 0.0024014676620795804;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7852500000000001146) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20716.01340554505077) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0035974786376670458;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8347.454337403256432) ) ) {
              result[0] += 0.0017862470428265439;
            } else {
              result[0] += -0.0016809101168003152;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
          result[0] += 0.0055705211814792675;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2782500000000000528) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3282773505116238777) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.10606060606062329) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9790.82043369202438) ) ) {
                    result[0] += 0.0074664170778932955;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)14710.51606691821326) ) ) {
                      result[0] += 0.0022284404017447923;
                    } else {
                      result[0] += -0.0001983829927779274;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4222760000000000402) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7030.279293102100382) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0028806380877341594;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.32834040296925338) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0017903620299243748;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3371.239524566822638) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13067.72038594807418) ) ) {
                      result[0] += -0.003475273004636324;
                    } else {
                      result[0] += -1.032845732977603e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.796551724137932737) ) ) {
                      result[0] += 0.0030488040444314546;
                    } else {
                      result[0] += -0.0002695032534811655;
                    }
                  }
                } else {
                  result[0] += 0.0024694843119326213;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.54356060606061618) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.002989572133995544;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3699670000000000458) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2202032112554981602) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)24506.24669275645647) ) ) {
                      result[0] += -0.0014994024318675107;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
                    result[0] += 0.0036540461308239786;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)17604.53908125846283) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9989.107872504324405) ) ) {
                result[0] += 0.00010697016644850742;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0.003322563538368232;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.005273491851930076;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.79864864864865481) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)18906.11182675446616) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8457500000000001128) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518295403837575108) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0043540632858045086;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.509500000000000175) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0011664919434500227;
                  }
                }
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0.0011147690604740431;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999655000000000515) ) ) {
              result[0] += -7.105935224970965e-05;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8140.442679804484214) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5001330000000000497) ) ) {
                  result[0] += 0.003808751278254475;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-107826.1666621288314) ) ) {
            result[0] += 0.0005512072906981734;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)21962.47439012520408) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5049000000000000155) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0021460186185391864;
                }
              } else {
                result[0] += -0.00511382282306467;
              }
            }
          }
        }
      }
    }
  }
}

