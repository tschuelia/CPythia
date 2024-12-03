
#include "prediction.h"

void predict_unit6(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01695000000000000326) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1267725882486329947) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1205712985627314521) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1172585597165276133) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.68322981366461022) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.46024904214559825) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.799613899613900614) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.3783980078854583) ) ) {
                    result[0] += 0.00010451609441516576;
                  } else {
                    result[0] += 0.002299203690358647;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4079010000000000136) ) ) {
                    result[0] += 0.000878545026830645;
                  } else {
                    result[0] += -0.009663898013314976;
                  }
                }
              } else {
                result[0] += 0.005628310851610137;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3100855000000000694) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2191665000000000141) ) ) {
                  result[0] += 0.0017123243018606449;
                } else {
                  result[0] += -0.004555556856013665;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06624646256753281837) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3838015000000000732) ) ) {
                    result[0] += 0.010067636955885386;
                  } else {
                    result[0] += 0.0010369474130476166;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4482755000000000489) ) ) {
                    result[0] += 0.001970769524938003;
                  } else {
                    result[0] += 0.016282870332669168;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005650000000000001375) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2482395000000000296) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1875000000000000278) ) ) {
                    result[0] += -0.0007248469170966973;
                  } else {
                    result[0] += 0.0007182123981582689;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)196.1990881458966953) ) ) {
                    result[0] += -0.002638744934373202;
                  } else {
                    result[0] += -0.006099340495967134;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03748475326359510668) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4979840000000000377) ) ) {
                    result[0] += 0.012064321821478152;
                  } else {
                    result[0] += 0.0017940798795580493;
                  }
                } else {
                  result[0] += -0.001302834820805165;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2516630000000000256) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06175018126544525726) ) ) {
                  result[0] += -0.0008014379061530885;
                } else {
                  result[0] += 0.0033646366077708175;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.010850000000000002) ) ) {
                  result[0] += -0.010707860639017333;
                } else {
                  result[0] += -0.0012950357945962694;
                }
              }
            }
          }
        } else {
          result[0] += -0.004545702705879474;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002350000000000000092) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.581742450538008438) ) ) {
            result[0] += -0.0009593350173069784;
          } else {
            result[0] += 0.0028400872302303797;
          }
        } else {
          result[0] += 0.008030590323627235;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.826150000000000051) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1801279406462452659) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01425000000000000051) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.158823480849580867) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1327859648471575726) ) ) {
                result[0] += 0.004372436297177519;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009050000000000002487) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.1695402298850599) ) ) {
                    result[0] += 0.00029683229244257273;
                  } else {
                    result[0] += -0.003765009451256634;
                  }
                } else {
                  result[0] += -0.009907565233830802;
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                result[0] += -0.0019009637354066007;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                  result[0] += 0.0005830913384903296;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3771560000000000468) ) ) {
                    result[0] += 0.01624545085704196;
                  } else {
                    result[0] += 0.007400541767038334;
                  }
                }
              }
            }
          } else {
            result[0] += 0.010286445586097549;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7750500000000001277) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01425000000000000051) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01225000000000000221) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01145000000000000011) ) ) {
                    result[0] += -0.0003584188874945159;
                  } else {
                    result[0] += 0.0071858097553093485;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.44472616632860706) ) ) {
                    result[0] += -0.0063586121586021805;
                  } else {
                    result[0] += 0.004027858935748636;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2899.923639043688581) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2777390000000000692) ) ) {
                    result[0] += 0.003262244847690039;
                  } else {
                    result[0] += 0.014494668941015055;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4463295000000000456) ) ) {
                    result[0] += -0.0068643097474606184;
                  } else {
                    result[0] += 0.0027381971574066727;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3086990000000000567) ) ) {
                result[0] += 0.003171048959316802;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4598785000000000234) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1195.496933691951881) ) ) {
                    result[0] += -0.016683065240946413;
                  } else {
                    result[0] += -0.003429622010005551;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5358140000000001235) ) ) {
                    result[0] += 0.0037840988187526014;
                  } else {
                    result[0] += -0.005735871446973786;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5290000000000001368) ) ) {
              result[0] += -0.012167343078070872;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7114500000000001378) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.79423076923077573) ) ) {
                  result[0] += 0.005918370656248861;
                } else {
                  result[0] += -0.005123768107572289;
                }
              } else {
                result[0] += -0.00943190716842139;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4427690000000000237) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3411105000000000387) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
              result[0] += -0.003863245138126079;
            } else {
              result[0] += 0.0005494146421796758;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1400043546222365654) ) ) {
              result[0] += -0.023745619818738618;
            } else {
              result[0] += -0.015017143639650204;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.909011700273836265) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.813466494845362931) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.028850145288502382) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003150000000000000456) ) ) {
                  result[0] += 0.0011973741391089843;
                } else {
                  result[0] += -0.004885099241454677;
                }
              } else {
                result[0] += -0.013166040058188593;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006350000000000000609) ) ) {
                result[0] += 0.006220534529158389;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5601305000000001977) ) ) {
                  result[0] += 0.004032722446357843;
                } else {
                  result[0] += -0.004032634438600054;
                }
              }
            }
          } else {
            result[0] += -0.013322741482461303;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01755000000000000657) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4411580000000000501) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.48814016172507024) ) ) {
          result[0] += 0.015309416139771506;
        } else {
          result[0] += -0.0006760719019849109;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
          result[0] += -0.005906483571045148;
        } else {
          result[0] += 0.0010476518570440919;
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-284.2006577138453736) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8642000000000001902) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2333155460690146121) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1180500000000000299) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1953360000000000374) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1495215000000000294) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6897500000000001963) ) ) {
                    result[0] += -0.0023467833609171723;
                  } else {
                    result[0] += 0.0007422170852875572;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7513.900442615285101) ) ) {
                    result[0] += -0.0070805806337766175;
                  } else {
                    result[0] += -0.0018197176099530362;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7862500000000001155) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3048330000000000761) ) ) {
                    result[0] += 0.010299068985872155;
                  } else {
                    result[0] += 0.0034834837411104225;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8468500000000002137) ) ) {
                    result[0] += -0.0001895720081534611;
                  } else {
                    result[0] += 0.005360888086318071;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2805.314543835761469) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3694.512900490842185) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1294500000000000373) ) ) {
                    result[0] += -0.006127993136243915;
                  } else {
                    result[0] += 0.0001894965659599181;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4223800000000000332) ) ) {
                    result[0] += -0.0012656202742957184;
                  } else {
                    result[0] += 0.009505718267412398;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2251.879919224290916) ) ) {
                  result[0] += -0.015817574731036354;
                } else {
                  result[0] += 0.001406273271229302;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8089500000000001689) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7750500000000001277) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2624768466104180908) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6695500000000000895) ) ) {
                    result[0] += 0.004154614551041363;
                  } else {
                    result[0] += -0.0028471819545039818;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7673500000000000876) ) ) {
                    result[0] += 6.759227593821184e-05;
                  } else {
                    result[0] += 0.0045937488592592965;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5340500000000001357) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2670.194409694011938) ) ) {
                    result[0] += -0.00398036672801979;
                  } else {
                    result[0] += 0.0011260143512848025;
                  }
                } else {
                  result[0] += 0.005398632153009175;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8112500000000001377) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10562.87122396129962) ) ) {
                  result[0] += 0.00047098039312851023;
                } else {
                  result[0] += 0.017533154422673475;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.292095000000000049) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.7639318885448958) ) ) {
                    result[0] += -0.008042872925995505;
                  } else {
                    result[0] += -0.002140908868681386;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4189740000000000686) ) ) {
                    result[0] += 0.007701511826922772;
                  } else {
                    result[0] += 0.00035244793586506826;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.162018451266281005) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4725700000000001011) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.73863636363636687) ) ) {
                result[0] += 0.010045333290246521;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.50233644859813609) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4223800000000000332) ) ) {
                    result[0] += -0.006075068706493542;
                  } else {
                    result[0] += -0.01914774260296678;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.0554917719096863) ) ) {
                    result[0] += -0.002307235231090255;
                  } else {
                    result[0] += 0.0013556486309331422;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5633670000000000622) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)217.929861111111137) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9389500000000000624) ) ) {
                    result[0] += 0.009914019425769737;
                  } else {
                    result[0] += 0.0013015708350745169;
                  }
                } else {
                  result[0] += -0.0013864831880887201;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5896685000000000398) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03515000000000000763) ) ) {
                    result[0] += 0.0018184645335716277;
                  } else {
                    result[0] += -0.006409962122297467;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1521960466719389227) ) ) {
                    result[0] += -0.00018000906435035154;
                  } else {
                    result[0] += 0.004630377611433363;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2637.868029878028665) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3120.411781551796594) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2594500000000000139) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1747936067630936063) ) ) {
                    result[0] += -0.005863355984746708;
                  } else {
                    result[0] += 0.0019240919834833995;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7750.875101487182292) ) ) {
                    result[0] += -0.002789392656935932;
                  } else {
                    result[0] += -0.009624554078313514;
                  }
                }
              } else {
                result[0] += 0.009991122385956059;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6130430000000001156) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4801450000000000995) ) ) {
                  result[0] += -0.009629490375997318;
                } else {
                  result[0] += -0.02380155503839796;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04115000000000001296) ) ) {
                  result[0] += -0.007033571728013374;
                } else {
                  result[0] += 0.002665935572595988;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.080650406504065186) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04495000000000001078) ) ) {
            result[0] += -0.0020478378776027386;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.13135000000000005) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6630084695216510449) ) ) {
                result[0] += 0.0029465511299138114;
              } else {
                result[0] += 0.007615400383813503;
              }
            } else {
              result[0] += -7.146232269453151e-05;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9345935333859788363) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.357662227858803972) ) ) {
              result[0] += -0.00836990259875339;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.326140544518028541) ) ) {
                result[0] += 0.006759059299571156;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.581742450538008438) ) ) {
                  result[0] += -0.004315446384444585;
                } else {
                  result[0] += 0.003534135596411437;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08455000000000001403) ) ) {
              result[0] += -0.0007733777052385212;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6084480000000002109) ) ) {
                result[0] += -0.016207173880763044;
              } else {
                result[0] += -0.002017667021806346;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0611500000000000099) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05815000000000000724) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05205000000000000598) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04995000000000000828) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.601724137931035408) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.203448275862069927) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1276.198284932604565) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4380734778181184508) ) ) {
                    result[0] += 0.0003406319937638267;
                  } else {
                    result[0] += 0.004678037795820922;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.903993855606759045) ) ) {
                    result[0] += -0.00012949814898715687;
                  } else {
                    result[0] += -0.0030591434810401715;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.81114130434783149) ) ) {
                  result[0] += -0.01689380760249055;
                } else {
                  result[0] += 0.0028320869102414596;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.5773524720893235) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.28464818763326427) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01505000000000000261) ) ) {
                    result[0] += -0.006161668182680103;
                  } else {
                    result[0] += 0.00450916412928205;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5102655000000001495) ) ) {
                    result[0] += 0.013038749707504089;
                  } else {
                    result[0] += -0.0002043221321461578;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8737500000000001377) ) ) {
                  result[0] += -0.009441702262649196;
                } else {
                  result[0] += 0.0010327541906171665;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.912662090007628102) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3902.354245376167455) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)913.4768302542491938) ) ) {
                  result[0] += -0.011350870364012541;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2593.286319653105238) ) ) {
                    result[0] += 0.006973771446640812;
                  } else {
                    result[0] += -0.00453792189697892;
                  }
                }
              } else {
                result[0] += -0.013166692008128124;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7513.900442615285101) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.55548780487805161) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2065670000000000284) ) ) {
                    result[0] += -0.002873610959185183;
                  } else {
                    result[0] += 0.0042329092257864555;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)22454.51531968933341) ) ) {
                    result[0] += -0.0022609556513158257;
                  } else {
                    result[0] += 0.00040900105006294536;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7328.62747050258622) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3066040000000000432) ) ) {
                    result[0] += -0.0016718867600246019;
                  } else {
                    result[0] += -0.011978227631211312;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9247500000000000719) ) ) {
                    result[0] += -0.000522413216870486;
                  } else {
                    result[0] += -0.006621369119503785;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4761000000000000232) ) ) {
            result[0] += 0.009285066836690782;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04950512002784904914) ) ) {
              result[0] += 0.00756066664153357;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5056465000000001098) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1860.92441007674438) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46256684491978817) ) ) {
                    result[0] += -0.02542158540163548;
                  } else {
                    result[0] += -0.0056929970109521975;
                  }
                } else {
                  result[0] += -0.00025524787865902694;
                }
              } else {
                result[0] += 0.0019389080099808844;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2519788480021191157) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.217148977082086192) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05305000000000000687) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.73863636363636687) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7172500000000000542) ) ) {
                  result[0] += 0.002342313709715197;
                } else {
                  result[0] += -0.006818534094375205;
                }
              } else {
                result[0] += 0.02305507939564712;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.854322937228583434) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08727941730769819828) ) ) {
                    result[0] += 0.0043519772667125305;
                  } else {
                    result[0] += -0.003865759087004294;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4660265000000000657) ) ) {
                    result[0] += 0.005495269331453158;
                  } else {
                    result[0] += 0.011996764579494893;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6617.041694952862599) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2703.500010395391655) ) ) {
                    result[0] += -0.00485422019955421;
                  } else {
                    result[0] += -0.013701753594733404;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3048330000000000761) ) ) {
                    result[0] += -0.003215623523968088;
                  } else {
                    result[0] += 0.010340942116416122;
                  }
                }
              }
            }
          } else {
            result[0] += 0.014157728772072227;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2134500000000000564) ) ) {
            result[0] += 0.005008488863470734;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05305000000000000687) ) ) {
              result[0] += -0.009941099336735072;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05705000000000001042) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6641.084587499458394) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3391483238137242839) ) ) {
                    result[0] += 0.0005131402392436998;
                  } else {
                    result[0] += -0.006107585911551507;
                  }
                } else {
                  result[0] += 0.003768188450761639;
                }
              } else {
                result[0] += -0.006256040143470881;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8383500000000000396) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.902832415420928847) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.799613899613900614) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1273.44963587212419) ) ) {
              result[0] += -0.005305547468580809;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3084.240859710316272) ) ) {
                result[0] += -0.003966508644807707;
              } else {
                result[0] += 0.003276352590992839;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7043500000000001426) ) ) {
              result[0] += 0.010681893682836074;
            } else {
              result[0] += 0.0016059917718739753;
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1705100000000000227) ) ) {
            result[0] += 0.0011485487607007577;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3259297052268694261) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6675000000000000933) ) ) {
                result[0] += -0.01589702509840636;
              } else {
                result[0] += -0.0033344348829469897;
              }
            } else {
              result[0] += -0.002590970647216284;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03230300464577552655) ) ) {
          result[0] += -3.726207765259093e-05;
        } else {
          result[0] += -0.011692936094015382;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6377.665229350911432) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.01063829787234383) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37025703794369846) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8215.850837031795891) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45958279009126635) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9548.775787945038246) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06675000000000001765) ) ) {
                    result[0] += 0.0013411819846088169;
                  } else {
                    result[0] += 0.00818868899601592;
                  }
                } else {
                  result[0] += 0.01310918795873127;
                }
              } else {
                result[0] += -0.0024174312459527966;
              }
            } else {
              result[0] += -0.006388785900808401;
            }
          } else {
            result[0] += 0.018544640704409383;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.15833333333333854) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2819380000000000774) ) ) {
              result[0] += -0.002555387605923622;
            } else {
              result[0] += -0.009610900139752644;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2135850000000000526) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-51447.8227685276288) ) ) {
                result[0] += -0.004176444712095123;
              } else {
                result[0] += -0.0005997179545466753;
              }
            } else {
              result[0] += 0.007372655930671128;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.21641156462585442) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1448500000000000343) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1326500000000000179) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4151215000000000876) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24674.59819322649491) ) ) {
                  result[0] += 0.006786456140476785;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107150000000000023) ) ) {
                    result[0] += -0.005291128472162485;
                  } else {
                    result[0] += -0.0001802448295212227;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4411580000000000501) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1924404709589289386) ) ) {
                    result[0] += 0.00048150815325615116;
                  } else {
                    result[0] += 0.01622754391523072;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.30178571428571566) ) ) {
                    result[0] += -0.001287113808484991;
                  } else {
                    result[0] += 0.005365382764835657;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7328.62747050258622) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5357.523801430734238) ) ) {
                    result[0] += -0.0020824439159636953;
                  } else {
                    result[0] += 0.010762754151853878;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                    result[0] += -0.0015053899371803932;
                  } else {
                    result[0] += -0.011534196862343997;
                  }
                }
              } else {
                result[0] += -0.014353179844997071;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1903887996092470669) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3187.623916437774369) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.54904306220096188) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4912475000000000591) ) ) {
                    result[0] += 0.006444386471906618;
                  } else {
                    result[0] += -0.0006326776609604578;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
                    result[0] += 0.0023456326244818988;
                  } else {
                    result[0] += 0.025943484498882965;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5802500000000001545) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5470500000000001473) ) ) {
                    result[0] += -0.001236120756553252;
                  } else {
                    result[0] += -0.013619020886836461;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6317500000000001448) ) ) {
                    result[0] += 0.007731752477330146;
                  } else {
                    result[0] += -0.00012814660561468065;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8823.72194961022069) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9257.231014387447431) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1941311643911357854) ) ) {
                    result[0] += -0.01261490191092316;
                  } else {
                    result[0] += -0.00033558967732889774;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1827.40614998019123) ) ) {
                    result[0] += -0.003804138041641293;
                  } else {
                    result[0] += 0.013334207060978393;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3964500000000000246) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7513.900442615285101) ) ) {
                    result[0] += 0.006682944010586838;
                  } else {
                    result[0] += -0.0035987190642962985;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1780500000000000138) ) ) {
                    result[0] += 0.004050901493015383;
                  } else {
                    result[0] += -0.006162451861810034;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.54474097331240401) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4913.352940143695378) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.50925925925926663) ) ) {
                result[0] += -0.00017274463015035422;
              } else {
                result[0] += 0.033973863809587494;
              }
            } else {
              result[0] += -0.00488726300626293;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3230.323190207400785) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1586.824366997087736) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3964500000000000246) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
                    result[0] += 0.006004277994831118;
                  } else {
                    result[0] += -0.0015772643044338953;
                  }
                } else {
                  result[0] += 0.01745674461147212;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3100855000000000694) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2367000000000000492) ) ) {
                    result[0] += -0.0033949212470680066;
                  } else {
                    result[0] += 0.002091945655618357;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.86607142857144481) ) ) {
                    result[0] += -0.005768806806585215;
                  } else {
                    result[0] += -0.0005370581232617363;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3347.459141515674219) ) ) {
                result[0] += 0.009752043678186533;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.35571587125416571) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2663275000000000503) ) ) {
                    result[0] += 0.0035004645073093417;
                  } else {
                    result[0] += 0.00037951781392593355;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.40153452685422764) ) ) {
                    result[0] += -0.002644356700983122;
                  } else {
                    result[0] += -0.0001572322994701774;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2888525000000000675) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2736000000000000099) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += 0.009291391619405013;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.084422195825556656) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.319459459459459971) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2516630000000000256) ) ) {
                  result[0] += -0.0027219050581954347;
                } else {
                  result[0] += 0.004844031334716886;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.24542300000000003) ) ) {
                  result[0] += -0.002852426294499553;
                } else {
                  result[0] += -0.012830861566912566;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3511500000000000177) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.725601914823043037) ) ) {
                    result[0] += -0.004013549246141483;
                  } else {
                    result[0] += 0.00334626077055006;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346500000000000197) ) ) {
                    result[0] += -0.0007625079776344173;
                  } else {
                    result[0] += 0.015062718320676507;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.560470779220779924) ) ) {
                  result[0] += -0.008202222821815196;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3120.411781551796594) ) ) {
                    result[0] += -0.0013989174014878564;
                  } else {
                    result[0] += 0.001845896050144708;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4962000000000000299) ) ) {
              result[0] += -0.0025046915154192397;
            } else {
              result[0] += -0.020765412406133357;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.781746031746032521) ) ) {
              result[0] += 0.008121092318563174;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
                result[0] += -0.011788302187179977;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.33573141486810876) ) ) {
                  result[0] += 0.003725703905078096;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2777390000000000692) ) ) {
                    result[0] += -0.007120910999664782;
                  } else {
                    result[0] += -0.0018163791452010354;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.338266500000000081) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2161500000000000365) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3959.4405165225985) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5346500000000000696) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.560470779220779924) ) ) {
                  result[0] += 0.0038297425079585603;
                } else {
                  result[0] += 0.023027109221327623;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2163.442343789042752) ) ) {
                  result[0] += -0.0047072635376049395;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
                    result[0] += 0.01584768837053641;
                  } else {
                    result[0] += 0.004825631154907611;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3120.411781551796594) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3468.465314767739983) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3645.188716455099438) ) ) {
                    result[0] += -0.0025880737045879737;
                  } else {
                    result[0] += 0.01534697101059529;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.6605458221024314) ) ) {
                    result[0] += -0.00490818716765144;
                  } else {
                    result[0] += -0.016092876062974975;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.79239388062918081) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5374500000000000943) ) ) {
                    result[0] += 0.008909652007328211;
                  } else {
                    result[0] += -0.005749937767251224;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2076236950652520508) ) ) {
                    result[0] += 0.019713807163889183;
                  } else {
                    result[0] += 0.004781414495775069;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5908000000000001029) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1153.333993324218) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2467500000000000526) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.329183438213477) ) ) {
                    result[0] += 0.012608549146983635;
                  } else {
                    result[0] += -0.0019574052116982637;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.775242712123145) ) ) {
                    result[0] += -0.0116830484042227;
                  } else {
                    result[0] += -0.001970546940805451;
                  }
                }
              } else {
                result[0] += 0.011833360997697247;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3118835000000000357) ) ) {
                result[0] += -0.014729304236661089;
              } else {
                result[0] += -0.0026317383124317526;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3507325000000000581) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2008.65609436553018) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2192871037289895186) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1248500000000000165) ) ) {
                  result[0] += 0.006477076873574865;
                } else {
                  result[0] += -0.003973728154439051;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.343528074243838577) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5749500000000000721) ) ) {
                    result[0] += -0.023714947807081454;
                  } else {
                    result[0] += -0.009777769754559565;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3411105000000000387) ) ) {
                    result[0] += 0.0009689677354365659;
                  } else {
                    result[0] += -0.005934268724760244;
                  }
                }
              }
            } else {
              result[0] += 0.003778868634389198;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2293491515996514407) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2076236950652520508) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3689335000000000808) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2400.030403748101435) ) ) {
                    result[0] += -0.002562120788600107;
                  } else {
                    result[0] += 0.017756439099659155;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.81980519480519654) ) ) {
                    result[0] += 0.0002902555262642049;
                  } else {
                    result[0] += -0.004185765378367787;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3468.465314767739983) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1780500000000000138) ) ) {
                    result[0] += -0.016670822152336246;
                  } else {
                    result[0] += -0.0031228758741815078;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08035000000000000475) ) ) {
                    result[0] += 0.012538609327559595;
                  } else {
                    result[0] += -0.004153557279623428;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)753.7197460358141825) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)708.6727958726006591) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5158500000000001418) ) ) {
                    result[0] += 0.00012720947025258997;
                  } else {
                    result[0] += 0.006376770847717309;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2192000000000000337) ) ) {
                    result[0] += -0.014074935904755394;
                  } else {
                    result[0] += 0.0015730346522878896;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5779552098030363849) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.42430441898527071) ) ) {
                    result[0] += 0.0016784496881249657;
                  } else {
                    result[0] += 0.00610818309140317;
                  }
                } else {
                  result[0] += -0.007175185847507368;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9917694079393036821) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.579390238601620311) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8117010151197184831) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6307015360864961506) ) ) {
          result[0] += 0.004162205099471519;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3.727359974682000754) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9662723239676943576) ) ) {
              result[0] += -0.007095667551791195;
            } else {
              result[0] += 0.003596515113826736;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.594010800196367761) ) ) {
              result[0] += -0.003419774756961869;
            } else {
              result[0] += -0.013750543103113608;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3743000000000000216) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4705165000000000597) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8923726800623609234) ) ) {
              result[0] += 0.01543673417528121;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.562500000000000111) ) ) {
                  result[0] += 0.005142196565418495;
                } else {
                  result[0] += -0.0033240715061337587;
                }
              } else {
                result[0] += 0.010186797067923851;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.50621947496947528) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01345000000000000188) ) ) {
                result[0] += 0.004312145103865574;
              } else {
                result[0] += -0.00021054271415097567;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5833650000000001334) ) ) {
                result[0] += -0.008715299798841173;
              } else {
                result[0] += -3.427906704650947e-05;
              }
            }
          }
        } else {
          result[0] += 0.011664730467115607;
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-113.0432554252483754) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3259297052268694261) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4995331520331520725) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4863158929976397205) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4803413391557496692) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4776103313496700697) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2642978763556740884) ) ) {
                    result[0] += -8.698915176917579e-05;
                  } else {
                    result[0] += 0.0008846691253774371;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2844999957084173303) ) ) {
                    result[0] += 0.01057081421430135;
                  } else {
                    result[0] += -0.008237654555554976;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14444.10811475239643) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3728855000000000364) ) ) {
                    result[0] += -0.002740003677506809;
                  } else {
                    result[0] += 0.006134579684117308;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.129733520336606567) ) ) {
                    result[0] += 0.0017453024432235698;
                  } else {
                    result[0] += -0.011866040033290188;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.446650000000000047) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.00735294117647456) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.552403100775196165) ) ) {
                    result[0] += 0.002318734651886503;
                  } else {
                    result[0] += 0.012884369665943562;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2022010309504783943) ) ) {
                    result[0] += 0.004400670020272618;
                  } else {
                    result[0] += -0.004854127352081913;
                  }
                }
              } else {
                result[0] += -0.0070739140486240654;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2572926693332214243) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6239115000000000633) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2224.476427414836053) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1491.197321246881302) ) ) {
                    result[0] += 0.0030401788613352463;
                  } else {
                    result[0] += -0.00010046186013940778;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.608333333333333837) ) ) {
                    result[0] += 0.0024902890083968233;
                  } else {
                    result[0] += -0.011288705743600027;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1639.659224807193368) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3509.586989430135418) ) ) {
                    result[0] += -0.00037509314317036213;
                  } else {
                    result[0] += -0.005928576630200021;
                  }
                } else {
                  result[0] += 0.005783739413891783;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5480226986128626798) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.2011904761904777) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08035000000000000475) ) ) {
                    result[0] += -0.01349408207427625;
                  } else {
                    result[0] += -0.00637095884184867;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3045631882353195263) ) ) {
                    result[0] += -0.002477729365990414;
                  } else {
                    result[0] += 0.00444115472247252;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1237500000000000128) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.34495192307692513) ) ) {
                    result[0] += 0.002890550547238382;
                  } else {
                    result[0] += -0.0027684697036562127;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2161500000000000365) ) ) {
                    result[0] += -0.006801079677417886;
                  } else {
                    result[0] += -0.00025160581998867685;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5388695000000001123) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.47405150000000007) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4660265000000000657) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7317246774486193539) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5236500000000000599) ) ) {
                    result[0] += 0.0007811167883049216;
                  } else {
                    result[0] += -0.00294428118522299;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4344000000000000639) ) ) {
                    result[0] += -0.0011950691133590845;
                  } else {
                    result[0] += 0.002208171314626083;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5544758402383391793) ) ) {
                  result[0] += -0.0032490789822041404;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.417288557213931988) ) ) {
                    result[0] += -0.0011454389258969732;
                  } else {
                    result[0] += 0.011919168558036049;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3786500000000000421) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5190295000000001435) ) ) {
                    result[0] += -0.0056016403828527735;
                  } else {
                    result[0] += 0.0022303443160627975;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7452798482139170178) ) ) {
                    result[0] += 0.004392902484701545;
                  } else {
                    result[0] += -0.0014879752707810572;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5735500000000001153) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6514.587695889199495) ) ) {
                    result[0] += -0.010280900284108262;
                  } else {
                    result[0] += -0.0007153489789559685;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8049.7773975009477) ) ) {
                    result[0] += 0.0070539958583916915;
                  } else {
                    result[0] += -0.0034293227130006558;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6156880000000001241) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.385685967107739669) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9973.952913527764395) ) ) {
                  result[0] += 0.0006024703154627068;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)913.4768302542491938) ) ) {
                    result[0] += 0.004583332547114941;
                  } else {
                    result[0] += 0.012481288452414875;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5419086073107369783) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7238223757163882999) ) ) {
                    result[0] += 0.0015196076389578492;
                  } else {
                    result[0] += -0.006240359585483257;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5897082175521570768) ) ) {
                    result[0] += 0.015181437622685635;
                  } else {
                    result[0] += 0.002635674092323351;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1661.374751008663452) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2724.737518907181311) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11139.86222091502168) ) ) {
                    result[0] += 0.002096475886134546;
                  } else {
                    result[0] += -0.001303554023198946;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2118.155753535761505) ) ) {
                    result[0] += 0.007984077477215273;
                  } else {
                    result[0] += 0.0016541184208885744;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8655379161261905763) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6618093422766974099) ) ) {
                    result[0] += -0.004471177142264105;
                  } else {
                    result[0] += 0.0016281743481759152;
                  }
                } else {
                  result[0] += -0.006441451441681115;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3944445000000000312) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006750000000000001658) ) ) {
            result[0] += -0.0014226765964743965;
          } else {
            result[0] += -0.010133682397973236;
          }
        } else {
          result[0] += 0.002139101322125609;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5739275000000000349) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8494243075500166329) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07915000000000001201) ) ) {
          result[0] += 0.00015391511893905874;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
            result[0] += -0.013135698783703933;
          } else {
            result[0] += -0.00044219669413981193;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8923726800623609234) ) ) {
          result[0] += 0.006374893535493481;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3346.223713336835317) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3636455000000000659) ) ) {
              result[0] += -0.0022742415971190514;
            } else {
              result[0] += 0.009587957768024189;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4912475000000000591) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4269960000000000977) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.472136222910218173) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1415.504208660328004) ) ) {
                    result[0] += -0.0007090852968604195;
                  } else {
                    result[0] += -0.007007762294974421;
                  }
                } else {
                  result[0] += 0.0019896633993436268;
                }
              } else {
                result[0] += -0.008233602231348933;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1416500000000000259) ) ) {
                result[0] += 0.0036126039795231447;
              } else {
                result[0] += -0.002426293079819414;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5931885000000001185) ) ) {
        result[0] += 0.0059441598735834175;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-213.4350721623848131) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1332.881470937780705) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8692129219887744229) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7069310000000000871) ) ) {
                result[0] += -0.0038035290632839054;
              } else {
                result[0] += 0.004201301653531785;
              }
            } else {
              result[0] += -0.006038819801408208;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-889.5839568061797991) ) ) {
              result[0] += 0.006492224455419783;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-451.2355754647197159) ) ) {
                result[0] += -0.0021239891451726874;
              } else {
                result[0] += 0.004506337600361223;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6630084695216510449) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08035000000000000475) ) ) {
              result[0] += 0.002440211027300794;
            } else {
              result[0] += -0.001007080663617351;
            }
          } else {
            result[0] += -0.009368647539709327;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.725601914823043037) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5306308187652577502) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5191497654354458868) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8029140176696568654) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6451728482409898602) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6087968135339727471) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5908139956411030402) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5883065090442958223) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.552093295775335946) ) ) {
                    result[0] += 3.802579735831616e-05;
                  } else {
                    result[0] += -0.0010176374233535415;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1466500000000000303) ) ) {
                    result[0] += -0.003594171443232445;
                  } else {
                    result[0] += 0.009528685769055542;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4564.612143258819742) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2452178646097160908) ) ) {
                    result[0] += -0.0056690545763983784;
                  } else {
                    result[0] += 0.0020302329858823097;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.775681341719080208) ) ) {
                    result[0] += -0.0013446548851525277;
                  } else {
                    result[0] += -0.013335525350370843;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4272223701248312189) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.0987804878048788) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.73128342245989408) ) ) {
                    result[0] += 0.0013395618866714842;
                  } else {
                    result[0] += 0.010439407804192776;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.27991452991453158) ) ) {
                    result[0] += -0.01161776488623415;
                  } else {
                    result[0] += -0.0012957189671348394;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1893500000000000461) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6216068849656636308) ) ) {
                    result[0] += 0.010131711243501797;
                  } else {
                    result[0] += 0.02421056164840244;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3558790000000000564) ) ) {
                    result[0] += 0.005536348306063768;
                  } else {
                    result[0] += -0.007544640938466374;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6562884567030830008) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6505818940810462747) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3727020653814278606) ) ) {
                  result[0] += -0.00599675762262272;
                } else {
                  result[0] += 0.0016325309328158654;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.417288557213931988) ) ) {
                  result[0] += -0.0007394048659807745;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9548.775787945038246) ) ) {
                    result[0] += -0.006724966739722978;
                  } else {
                    result[0] += -0.014183079882045415;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2118.155753535761505) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2873.70979119194044) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.819347319347319747) ) ) {
                    result[0] += -0.0017984418197455928;
                  } else {
                    result[0] += 0.0007696637912440017;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2582.414350298407498) ) ) {
                    result[0] += -0.014168169110317194;
                  } else {
                    result[0] += -0.0009077303366209026;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500000000000426) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.810660377358491058) ) ) {
                    result[0] += -0.003864610304457864;
                  } else {
                    result[0] += 0.006559340730889957;
                  }
                } else {
                  result[0] += 0.009788535262040753;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.831465976822639119) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4705165000000000597) ) ) {
              result[0] += 0.011631513418059047;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2594500000000000139) ) ) {
                result[0] += 0.004051989481207814;
              } else {
                result[0] += -0.0007040646478198493;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4223800000000000332) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.256349206349208103) ) ) {
                result[0] += 0.0003544116349022555;
              } else {
                result[0] += -0.006117892124855099;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.909011700273836265) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1481.890421694704628) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2873.70979119194044) ) ) {
                    result[0] += -0.0002118647760962662;
                  } else {
                    result[0] += -0.0036826961105258463;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-929.333568598457191) ) ) {
                    result[0] += 0.005022637078766657;
                  } else {
                    result[0] += -0.0005282015389439657;
                  }
                }
              } else {
                result[0] += 0.007907397185188292;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0872500000000000081) ) ) {
          result[0] += 0.0014515980183267075;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.24337662337662458) ) ) {
            result[0] += -0.011834718098578466;
          } else {
            result[0] += -0.0016681064623610018;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08165000000000001423) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5354827414836903499) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4791666666666666852) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.26352339181286677) ) ) {
                result[0] += -0.004598033059449013;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4972.713039862052938) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2291666666666667129) ) ) {
                    result[0] += -0.0007444234418147547;
                  } else {
                    result[0] += 0.0018075133217207026;
                  }
                } else {
                  result[0] += 0.00351597348114516;
                }
              }
            } else {
              result[0] += 0.007417052241315523;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8692129219887744229) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4248.335231464433491) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.00769230769231299) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3636455000000000659) ) ) {
                    result[0] += -0.013616201055646492;
                  } else {
                    result[0] += -0.0012893638903835039;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2573165000000000036) ) ) {
                    result[0] += 0.0008608463691626303;
                  } else {
                    result[0] += -0.0018824066062596517;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04385000000000000703) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03935000000000000303) ) ) {
                    result[0] += -0.0005897298672865567;
                  } else {
                    result[0] += -0.013435560577241872;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2468.165232770545572) ) ) {
                    result[0] += 0.011063644887376775;
                  } else {
                    result[0] += 0.0015385016393087581;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.15450928381962914) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1168.062366236748858) ) ) {
                  result[0] += 0.010717989772036913;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-284.2006577138453736) ) ) {
                    result[0] += -0.003157360714191046;
                  } else {
                    result[0] += 0.0028577675601276008;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.502293577981652639) ) ) {
                  result[0] += -0.005850198861329346;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.89818809318378356) ) ) {
                    result[0] += 0.004786574917232971;
                  } else {
                    result[0] += -0.001020379338326351;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4559570000000000567) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3914215000000000333) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2692985000000000517) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7371304289733293658) ) ) {
                  result[0] += 0.002282297125424552;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.22020202020202362) ) ) {
                    result[0] += -0.004223987507620883;
                  } else {
                    result[0] += -0.0005599487746528141;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.35424710424710604) ) ) {
                  result[0] += -0.010127840265926379;
                } else {
                  result[0] += -0.0010508388710374387;
                }
              }
            } else {
              result[0] += -0.013789104942633516;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6130430000000001156) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5241315000000000834) ) ) {
                result[0] += 0.003096984397388353;
              } else {
                result[0] += 0.006220022043217494;
              }
            } else {
              result[0] += -0.0032639800942613636;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1294500000000000373) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5673840000000001105) ) ) {
            result[0] += 0.012701409851174615;
          } else {
            result[0] += -0.0031205352418292157;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8117010151197184831) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9262105936708032727) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2758315000000000627) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2540640000000000676) ) ) {
                    result[0] += -8.47529795527218e-05;
                  } else {
                    result[0] += -0.004302842276354797;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3574970000000000092) ) ) {
                    result[0] += 0.005540425867943544;
                  } else {
                    result[0] += 0.0014427030329438647;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.594010800196367761) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.708030962747944415) ) ) {
                    result[0] += -0.0018078300569448623;
                  } else {
                    result[0] += 0.004516101407605178;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3835500000000000576) ) ) {
                    result[0] += -0.004273486590578574;
                  } else {
                    result[0] += -0.009613294161327486;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3590000000000000413) ) ) {
                result[0] += 0.013283790232673296;
              } else {
                result[0] += 0.002941826593372304;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9107236455282137211) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9961447036101620522) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11139.86222091502168) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.856934660369398804) ) ) {
                    result[0] += -0.0015566309057907307;
                  } else {
                    result[0] += 0.0035633464569056685;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1332.881470937780705) ) ) {
                    result[0] += -0.0085470367358394;
                  } else {
                    result[0] += -0.0002779558226299151;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1617.156145847696735) ) ) {
                  result[0] += 0.0045504626955691786;
                } else {
                  result[0] += -0.0005991817303690918;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9662723239676943576) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3036.173061047864849) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.80322580645161779) ) ) {
                    result[0] += 0.0042042449038767775;
                  } else {
                    result[0] += -0.0007722394075459768;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8493205205092535515) ) ) {
                    result[0] += -0.010836290356886706;
                  } else {
                    result[0] += -0.0026531131517976113;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9999263622974964294) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2395.919566910411959) ) ) {
                    result[0] += 0.00467099517597914;
                  } else {
                    result[0] += 0.014298514663778041;
                  }
                } else {
                  result[0] += -0.003003928257515108;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12994.7307000153578) ) ) {
      result[0] += -0.005336430787663248;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.10363247863248048) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2004115000000000202) ) ) {
          result[0] += 0.0033337838731688956;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3056000000000000383) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6016350000000001419) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04195000000000000812) ) ) {
                  result[0] += 0.000616415703811269;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.425462962962963598) ) ) {
                    result[0] += -0.007250147576234078;
                  } else {
                    result[0] += -0.0014730592057335752;
                  }
                }
              } else {
                result[0] += 0.002200880620232088;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2762.179861479253759) ) ) {
                result[0] += -0.0012342220586368485;
              } else {
                result[0] += 0.005640005435542678;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.343954916307972258) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1794.783506543015164) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2347.346151230799023) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.868199541507911343) ) ) {
                    result[0] += -0.005489128571685043;
                  } else {
                    result[0] += -0.0014291167487502211;
                  }
                } else {
                  result[0] += -0.009970629033358469;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4643995000000000206) ) ) {
                  result[0] += 0.0033602190312481493;
                } else {
                  result[0] += -0.003919269226355643;
                }
              }
            } else {
              result[0] += 0.004306606257012361;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4609.951933392212595) ) ) {
          result[0] += 0.00014522855280319706;
        } else {
          result[0] += 0.006049427786227665;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.401950000000000085) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2156942646659316121) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6533511457093607033) ) ) {
        result[0] += -0.009130766232700581;
      } else {
        result[0] += -0.0002454917626573395;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7317246774486193539) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.690700657578043109) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3649912904309082773) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3259297052268694261) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1294500000000000373) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3668185000000000473) ) ) {
                  result[0] += 0.012333485855245576;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2572926693332214243) ) ) {
                    result[0] += 0.004203167489514265;
                  } else {
                    result[0] += -0.003042376606142076;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2110000000000000209) ) ) {
                  result[0] += -0.004382932148283874;
                } else {
                  result[0] += -0.0006162321237003138;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6736220450276145799) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.09060995184590936) ) ) {
                  result[0] += -0.014428799093439769;
                } else {
                  result[0] += -0.006728156248648888;
                }
              } else {
                result[0] += -0.0001752657871053365;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3825153637350416913) ) ) {
              result[0] += 0.011623617437546566;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.09737269772481483) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2960395000000000665) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6339019286269085285) ) ) {
                    result[0] += 0.007182672735653086;
                  } else {
                    result[0] += -0.002742383084060633;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.517100660707347615) ) ) {
                    result[0] += 0.0028150925638457894;
                  } else {
                    result[0] += 0.011218862730245884;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1916500000000000148) ) ) {
                  result[0] += 0.0076525275949452624;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1647500000000000353) ) ) {
                    result[0] += 0.000535091244468056;
                  } else {
                    result[0] += -0.0034385249769788508;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2401350000000000151) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.75461600214076086) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6289617284540625075) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
                  result[0] += -0.002901954358422029;
                } else {
                  result[0] += 0.004353583307233769;
                }
              } else {
                result[0] += 0.008775846028404626;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1263500000000000456) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6562884567030830008) ) ) {
                  result[0] += 5.708712534527982e-06;
                } else {
                  result[0] += 0.0027459339464893273;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6979477615268391277) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3144500000000000628) ) ) {
                    result[0] += -0.00040193932490016745;
                  } else {
                    result[0] += 0.0009624447415827762;
                  }
                } else {
                  result[0] += -0.0012682318824239612;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1312.224607273150696) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.27475490196078578) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.581742450538008438) ) ) {
                  result[0] += -0.006653318603801968;
                } else {
                  result[0] += 0.007992343020069244;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.00769230769231299) ) ) {
                  result[0] += -0.01913536973011962;
                } else {
                  result[0] += -0.0036042518816858955;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4277.468016646671458) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.09737269772481483) ) ) {
                  result[0] += 0.0008926765133426315;
                } else {
                  result[0] += -0.005864239043610525;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8865.340930235526685) ) ) {
                  result[0] += 0.005616080353373971;
                } else {
                  result[0] += -0.0005021778112741715;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3697500000000000231) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4156551824015537466) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1200000000000000094) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.084422195825556656) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8392346705359243764) ) ) {
                  result[0] += 0.005696844177712067;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3220420529803963983) ) ) {
                    result[0] += -0.0031751408197067577;
                  } else {
                    result[0] += 0.0015448380388821137;
                  }
                }
              } else {
                result[0] += 0.017395713351570884;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2564000000000000168) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2347000000000000475) ) ) {
                  result[0] += 0.0013901837972057126;
                } else {
                  result[0] += 0.005463339797507269;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.368560367816584411) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3455500000000000793) ) ) {
                    result[0] += -0.004230972610163;
                  } else {
                    result[0] += 0.004344096758158319;
                  }
                } else {
                  result[0] += -0.006910092334929616;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4889554961668607369) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.448321891685737661) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)156.6560485639346041) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)44.76293043070497646) ) ) {
                    result[0] += -0.0013259085534226462;
                  } else {
                    result[0] += 0.006128920868182463;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2564000000000000168) ) ) {
                    result[0] += 0.0016128989023518519;
                  } else {
                    result[0] += -0.004329475014429462;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4683879798511265125) ) ) {
                    result[0] += -0.014304540506714652;
                  } else {
                    result[0] += -0.006544188007914297;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3998595000000000899) ) ) {
                    result[0] += -0.004066475288657153;
                  } else {
                    result[0] += 0.0053436981202935295;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3238000000000000322) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3144500000000000628) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)657.9858817255186523) ) ) {
                    result[0] += 0.00019052823821295314;
                  } else {
                    result[0] += -0.001094140422082909;
                  }
                } else {
                  result[0] += -0.00724223172368372;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.59687500000000249) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.819347319347319747) ) ) {
                    result[0] += -0.0025835946915272355;
                  } else {
                    result[0] += 0.01721113869178874;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2842505000000000726) ) ) {
                    result[0] += 0.0022947462373741363;
                  } else {
                    result[0] += -0.004219991410471687;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5122949209789572356) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3558790000000000564) ) ) {
              result[0] += -0.006477078536249488;
            } else {
              result[0] += 0.002514886786210185;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14549731182795789) ) ) {
              result[0] += -0.014020028658920124;
            } else {
              result[0] += -0.002200163224496131;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8692129219887744229) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6505818940810462747) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4800500000000000322) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.994444444444445352) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6216068849656636308) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2151073141463651639) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5631430299667542494) ) ) {
                    result[0] += 0.0022273154806917643;
                  } else {
                    result[0] += -0.006564048207352025;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002750000000000000708) ) ) {
                    result[0] += -0.0017114977414681876;
                  } else {
                    result[0] += 0.005253156948398219;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1017.140349237611076) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4849465000000000026) ) ) {
                    result[0] += -0.013962139569937337;
                  } else {
                    result[0] += -0.0007241849513411836;
                  }
                } else {
                  result[0] += 0.005202992959785337;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3727020653814278606) ) ) {
                result[0] += 0.001964690348494171;
              } else {
                result[0] += 0.021969317785115575;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.608901515151517359) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1874500000000000333) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)842.4304686098781758) ) ) {
                  result[0] += -0.004779556605168812;
                } else {
                  result[0] += -0.014129524417024095;
                }
              } else {
                result[0] += -0.0002889732809679383;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2519788480021191157) ) ) {
                result[0] += 0.010108692788245057;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)56.57639100030404933) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5589555053734368562) ) ) {
                    result[0] += 0.0028985092055063056;
                  } else {
                    result[0] += -0.00035387695482948006;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                    result[0] += -0.00012892968645729602;
                  } else {
                    result[0] += -0.004447810887033119;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5644020255061351632) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5031527682228830178) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4888543444488743783) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4869500000000000495) ) ) {
                  result[0] += -0.0075252881406868985;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5127500000000001501) ) ) {
                    result[0] += 0.004457226295392507;
                  } else {
                    result[0] += -2.734558751674265e-05;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.446650000000000047) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5594500000000001139) ) ) {
                    result[0] += -0.0013869599967768441;
                  } else {
                    result[0] += 0.00547819486668172;
                  }
                } else {
                  result[0] += -0.009846988676201103;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5114794848757114876) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1545948809791034828) ) ) {
                  result[0] += -0.012613212230685985;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.549626000000000059) ) ) {
                    result[0] += -0.0009605926122456997;
                  } else {
                    result[0] += -0.011935358077056658;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1979241379727537664) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4912475000000000591) ) ) {
                    result[0] += 0.003494297140198526;
                  } else {
                    result[0] += -0.0009675248879701082;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4862500000000000155) ) ) {
                    result[0] += -0.001274442431916429;
                  } else {
                    result[0] += 0.0033624278737319478;
                  }
                }
              }
            }
          } else {
            result[0] += 0.00902409458532743;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5127500000000001501) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5901.553629380664461) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3574970000000000092) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.40503860987115059) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289080946470230471) ) ) {
                  result[0] += -0.0038588428135239864;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.704793028322441728) ) ) {
                    result[0] += -0.0211396406281261;
                  } else {
                    result[0] += -0.00965783815771197;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4683879798511265125) ) ) {
                  result[0] += 0.006597004210565411;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)540.2594105796734993) ) ) {
                    result[0] += 0.0021019062192529033;
                  } else {
                    result[0] += -0.005186523713801971;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4559570000000000567) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6979477615268391277) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3460500000000000798) ) ) {
                    result[0] += 0.007912960362226414;
                  } else {
                    result[0] += -0.0037210952192132172;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                    result[0] += 0.0005165979784206016;
                  } else {
                    result[0] += -0.010506993053297251;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7107537360355972167) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4221117431024698496) ) ) {
                    result[0] += -0.0030333516663216026;
                  } else {
                    result[0] += -0.01607747072009401;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4221117431024698496) ) ) {
                    result[0] += -0.0007760526137180953;
                  } else {
                    result[0] += 0.005857978815512944;
                  }
                }
              }
            }
          } else {
            result[0] += 0.006187217948240205;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.178368028279654922) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6903684837426190546) ) ) {
              result[0] += -0.00028504669466586775;
            } else {
              result[0] += 0.0035020458566068016;
            }
          } else {
            result[0] += 0.007047563494687058;
          }
        }
      }
    } else {
      result[0] += -0.009424794003152097;
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.953361000000000125) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1380701.700019875308) ) ) {
        result[0] += 0.004457452779440436;
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.624854312354312436) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3242675000000000418) ) ) {
                result[0] += 0.0006982609621161745;
              } else {
                result[0] += -0.005029216864212912;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.876096491228070429) ) ) {
                result[0] += 0.004402496595492363;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.43920335429769608) ) ) {
                  result[0] += -0.0023630532237712983;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1383455000000000379) ) ) {
                    result[0] += 0.0010992496357078237;
                  } else {
                    result[0] += -0.0005152410474302904;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4776103313496700697) ) ) {
              result[0] += 0.0071504206257783;
            } else {
              result[0] += -0.0011819844903310306;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.76676186590507811) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3175845000000001028) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.909011700273836265) ) ) {
                result[0] += 0.0020910532426881494;
              } else {
                result[0] += 0.007081551874905385;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.369694397283531817) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4621460000000000568) ) ) {
                  result[0] += 0.005678865129258804;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.344799119427628753) ) ) {
                    result[0] += -0.0015708806646409377;
                  } else {
                    result[0] += 0.0018495952376794227;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1223.821860747523942) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.021627906976744438) ) ) {
                    result[0] += -0.006206033863138516;
                  } else {
                    result[0] += 0.0015241404117123092;
                  }
                } else {
                  result[0] += -0.00748788846677756;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-970.1019205114903343) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.608333333333333837) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4783005000000000728) ) ) {
                  result[0] += 0.007224811815714431;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6292775000000000452) ) ) {
                    result[0] += -0.0024313573408072777;
                  } else {
                    result[0] += 0.00120418443476583;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6484.005380192698794) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.78049759229535454) ) ) {
                    result[0] += 0.007333040793285641;
                  } else {
                    result[0] += -0.0025777164799964994;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6279.125985810902421) ) ) {
                    result[0] += -0.0029060584582949332;
                  } else {
                    result[0] += -0.015088153898112923;
                  }
                }
              }
            } else {
              result[0] += -0.013059767321545521;
            }
          }
        }
      }
    } else {
      result[0] += 0.004484421146172993;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2046649341083811857) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1990818593712635198) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1935119961629459817) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1899971049495448316) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03735000000000000819) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03335000000000001158) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.953361000000000125) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03255000000000000254) ) ) {
                    result[0] += 0.0005805983899550197;
                  } else {
                    result[0] += -0.004593902633946735;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0475712373302734845) ) ) {
                    result[0] += -0.00010903997952638944;
                  } else {
                    result[0] += -0.008180664942931095;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1687573550250007492) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3073.70609235882921) ) ) {
                    result[0] += 0.008255110634055866;
                  } else {
                    result[0] += 0.00042055520810006526;
                  }
                } else {
                  result[0] += 0.011294325124021377;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03935000000000000303) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.854322937228583434) ) ) {
                  result[0] += 0.00193282724511297;
                } else {
                  result[0] += -0.01401993481931431;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1522.038109468082666) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1004.56789128042135) ) ) {
                    result[0] += -0.009522465503947886;
                  } else {
                    result[0] += 0.0009647681328783648;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1692.764967136799214) ) ) {
                    result[0] += 0.007851606848802437;
                  } else {
                    result[0] += -0.00012878807698381707;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.334577114427863975) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.15450928381962914) ) ) {
                result[0] += 0.00280374971636418;
              } else {
                result[0] += 0.015339649666869579;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.64611005692600187) ) ) {
                result[0] += -0.0022576467034478155;
              } else {
                result[0] += 0.0033739148564198435;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3895535000000000525) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3120.411781551796594) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.00735294117647456) ) ) {
                result[0] += -0.006370690046019909;
              } else {
                result[0] += 0.0025572718755511614;
              }
            } else {
              result[0] += 0.008840190275983787;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5056465000000001098) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0611500000000000099) ) ) {
                result[0] += -0.011112598569343964;
              } else {
                result[0] += -0.01728435646066083;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2604.367943201571507) ) ) {
                result[0] += 0.002465348744567739;
              } else {
                result[0] += -0.003299670979194692;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4579.929613711167804) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.54692082111437301) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1556.733319173369409) ) ) {
              result[0] += 0.006422135594620515;
            } else {
              result[0] += 0.0012849246354255952;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.08644133644133678) ) ) {
              result[0] += 0.018759981265687294;
            } else {
              result[0] += 0.0043799764255331676;
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8049.7773975009477) ) ) {
            result[0] += -0.007490150131871305;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.85329985652797902) ) ) {
              result[0] += 0.007935621239574553;
            } else {
              result[0] += 0.00022791149899935388;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000000000000369) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.476627348186981603) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.028991596638655803) ) ) {
            result[0] += -0.0010029334949260822;
          } else {
            result[0] += 0.005907216172359138;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3752770000000000272) ) ) {
              result[0] += 0.0035129567791495372;
            } else {
              result[0] += -0.006737880888840725;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4312439772176295816) ) ) {
              result[0] += -0.011771529379301225;
            } else {
              result[0] += -0.0048528153952089245;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0611500000000000099) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4780.79918261664443) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.801734104046245122) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4972.713039862052938) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.83870359628770785) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.79239388062918081) ) ) {
                    result[0] += 0.0020670578134776713;
                  } else {
                    result[0] += 0.00942550869278605;
                  }
                } else {
                  result[0] += -0.0052985294711316465;
                }
              } else {
                result[0] += 0.013414811330550738;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46256684491978817) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03335000000000001158) ) ) {
                  result[0] += -0.013972650996555919;
                } else {
                  result[0] += -0.005558985871842023;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3998595000000000899) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.76676186590507811) ) ) {
                    result[0] += 0.008191495160376643;
                  } else {
                    result[0] += -0.001244551095518822;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03835000000000000214) ) ) {
                    result[0] += -0.0013291431925134122;
                  } else {
                    result[0] += 0.006782672505524502;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04495000000000001078) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1827.40614998019123) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.504385964912282603) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.731662826420891754) ) ) {
                    result[0] += 0.00016036495417365534;
                  } else {
                    result[0] += -0.006463861112459135;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.52606951871658048) ) ) {
                    result[0] += 0.006027335643422222;
                  } else {
                    result[0] += 0.0002732024682881124;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2663275000000000503) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.608901515151517359) ) ) {
                    result[0] += -0.009946796568471654;
                  } else {
                    result[0] += -0.0023998755121570174;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3363960000000000838) ) ) {
                    result[0] += 0.004149308567189178;
                  } else {
                    result[0] += -0.0017703062553886906;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.986813186813187304) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5896685000000000398) ) ) {
                    result[0] += -0.0023540569216271654;
                  } else {
                    result[0] += 0.0015940678604327188;
                  }
                } else {
                  result[0] += 0.00632025993800172;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5034195000000000197) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05205000000000000598) ) ) {
                    result[0] += -0.008260157918647714;
                  } else {
                    result[0] += -2.938135738664154e-05;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1586.824366997087736) ) ) {
                    result[0] += -0.008686291455452138;
                  } else {
                    result[0] += -0.021005913850153463;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06205000000000000793) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.189832689832690527) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.758828417116743648) ) ) {
                result[0] += 0.0049880859204316005;
              } else {
                result[0] += 0.0172292282451518;
              }
            } else {
              result[0] += -0.004365756319306593;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2523846967694989285) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1448500000000000343) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.13135000000000005) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1922.684858006477725) ) ) {
                    result[0] += -0.00325034737881038;
                  } else {
                    result[0] += 0.0035864364702545438;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.33573141486810876) ) ) {
                    result[0] += 0.012755307180313218;
                  } else {
                    result[0] += 0.0013180700060789984;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.46024904214559825) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2131075953897917097) ) ) {
                    result[0] += -0.01044444905819329;
                  } else {
                    result[0] += -0.0012602828649503847;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.67142857142858503) ) ) {
                    result[0] += 0.00892953758083871;
                  } else {
                    result[0] += -3.378797417491808e-05;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2577141792102714546) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2022.266193993530806) ) ) {
                  result[0] += 0.008280767728775977;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3230.323190207400785) ) ) {
                    result[0] += -0.013079156687115017;
                  } else {
                    result[0] += -0.003877327693116345;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4780.79918261664443) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4863.937132689356076) ) ) {
                    result[0] += -7.293340888287293e-05;
                  } else {
                    result[0] += -0.00897816432561457;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3035.449605533378872) ) ) {
                    result[0] += 0.0004704185998601894;
                  } else {
                    result[0] += -0.008896573625190805;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.641839080459782) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.90736842105263804) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10017.88409225704527) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01695000000000000326) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.194335169158143639) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.969280660377358938) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.124288472983382414) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8493205205092535515) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.037345839847144013) ) ) {
                    result[0] += 0.0009121209390249637;
                  } else {
                    result[0] += -0.00041100314546815316;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9430194805194805907) ) ) {
                    result[0] += -0.008447543851775553;
                  } else {
                    result[0] += 0.0007881912891827457;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.004746835443038222) ) ) {
                  result[0] += 3.720008159142784e-05;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    result[0] += 0.0050400367440474126;
                  } else {
                    result[0] += 0.0008884052125086013;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.021627906976744438) ) ) {
                result[0] += 0.00814337879494219;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.080540540540540828) ) ) {
                  result[0] += -0.0019226143961866527;
                } else {
                  result[0] += 0.004688714290079068;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06647167380074837928) ) ) {
              result[0] += -0.011921542144886032;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.54904306220096188) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01025000000000000216) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.781746031746032521) ) ) {
                    result[0] += 0.00010784568505968042;
                  } else {
                    result[0] += -0.004137006851408827;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6763500000000001178) ) ) {
                    result[0] += -0.002959399889285343;
                  } else {
                    result[0] += -0.00939659652474882;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.73863636363636687) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.48331479421579715) ) ) {
                    result[0] += 0.0010108870236386787;
                  } else {
                    result[0] += 0.00972968892532948;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7596500000000001585) ) ) {
                    result[0] += -0.00016908405089264324;
                  } else {
                    result[0] += -0.0074597440207357125;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01755000000000000657) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.48254401942926783) ) ) {
              result[0] += -0.0005138873890381617;
            } else {
              result[0] += 0.012661136022957967;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58876050420168369) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.48814016172507024) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.13339920948616779) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.46688034188034422) ) ) {
                    result[0] += 0.00011406864347153275;
                  } else {
                    result[0] += -0.0016076633735718972;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.15759905381431238) ) ) {
                    result[0] += 0.005774350935061869;
                  } else {
                    result[0] += -0.0011428169689436023;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5423.979011800238368) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6763500000000001178) ) ) {
                    result[0] += -0.0032709569447546575;
                  } else {
                    result[0] += -0.009156017334907255;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6514.587695889199495) ) ) {
                    result[0] += 0.012610494273465604;
                  } else {
                    result[0] += -0.005699302068841815;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6721.244372388178817) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2703.500010395391655) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7813000000000001055) ) ) {
                    result[0] += 0.0008082335441065284;
                  } else {
                    result[0] += 0.0072436910413976995;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3230.323190207400785) ) ) {
                    result[0] += -0.0047707048551002525;
                  } else {
                    result[0] += 0.00047729888593929005;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1466500000000000303) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.775681341719080208) ) ) {
                    result[0] += 0.007489933892801115;
                  } else {
                    result[0] += -0.004943596038844412;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2686500000000000554) ) ) {
                    result[0] += 0.015203038662955333;
                  } else {
                    result[0] += 0.003174979355517509;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10239.19055228768593) ) ) {
          result[0] += -0.011116663703446421;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6267500000000001403) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.15909090909091361) ) ) {
              result[0] += -0.001705372160286459;
            } else {
              result[0] += -0.009996339759260734;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.383548387096774412) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.674038461538461808) ) ) {
                result[0] += -0.0006817797637045658;
              } else {
                result[0] += -0.003982999102811803;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05115000000000000796) ) ) {
                result[0] += 0.005409282238836901;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.16951566951567187) ) ) {
                  result[0] += 0.003988689998673102;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.44472616632860706) ) ) {
                    result[0] += -0.0033731368208727982;
                  } else {
                    result[0] += 0.0019787859596129775;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.00847457627119041) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8642000000000001902) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.92403846153846558) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5699500000000000677) ) ) {
              result[0] += -0.013647643724582527;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.50233644859813609) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1888209463138135757) ) ) {
                  result[0] += -0.010867135953608845;
                } else {
                  result[0] += -0.0064207684158769296;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5644.507670862270061) ) ) {
                  result[0] += -0.005570475888430581;
                } else {
                  result[0] += 0.00015409126402078947;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3973737470478960754) ) ) {
              result[0] += -0.0011604616076814468;
            } else {
              result[0] += -0.00336682327560899;
            }
          }
        } else {
          result[0] += 0.005437638852487864;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8413500000000001533) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355721953891439735) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7972500000000001252) ) ) {
              result[0] += 0.0031136458440472877;
            } else {
              result[0] += 0.012490097480033406;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.03528574333943801) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6675000000000000933) ) ) {
                result[0] += -0.01274581497942603;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1102500000000000008) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04495000000000001078) ) ) {
                    result[0] += -0.0010920299676605895;
                  } else {
                    result[0] += 0.0042607278863522665;
                  }
                } else {
                  result[0] += -0.0060978802397260706;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.57259953161593202) ) ) {
                result[0] += 0.013432079964386308;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4844.061872758970821) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5480226986128626798) ) ) {
                    result[0] += -0.004980310952796548;
                  } else {
                    result[0] += 0.002838278882937992;
                  }
                } else {
                  result[0] += -0.0065415494845137995;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3688.285112543364903) ) ) {
            result[0] += -0.0010489026231587915;
          } else {
            result[0] += -0.010550474599895289;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.15892857142858219) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1548000000000000209) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4722.925910272198053) ) ) {
          result[0] += 0.009721185901542768;
        } else {
          result[0] += -0.006245510522442991;
        }
      } else {
        result[0] += 0.012513489469132732;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.78049759229535454) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4776103313496700697) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06555000000000001104) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01225000000000000221) ) ) {
                result[0] += 0.005512550728159058;
              } else {
                result[0] += -0.007200715084739337;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2293491515996514407) ) ) {
                result[0] += 0.022357792988075876;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.259810052584194151) ) ) {
                  result[0] += -0.00569330554912525;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4786.052326248042846) ) ) {
                    result[0] += 0.02236312973436861;
                  } else {
                    result[0] += 0.004210248285008891;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4344000000000000639) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5545000000000001039) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2681861478904534191) ) ) {
                  result[0] += 0.012533755045528562;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                    result[0] += 0.004861044947262341;
                  } else {
                    result[0] += -0.0023576088424175864;
                  }
                }
              } else {
                result[0] += -0.008264970347544387;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.61404815090593701) ) ) {
                result[0] += 0.00016147692766315094;
              } else {
                result[0] += 0.009005016507598787;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1584500000000000075) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3083306738637045519) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1364500000000000435) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8216500000000001025) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7862500000000001155) ) ) {
                    result[0] += 0.0016029866741382873;
                  } else {
                    result[0] += 0.009635955261304285;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8312500000000001554) ) ) {
                    result[0] += -0.0100716292467755;
                  } else {
                    result[0] += 0.0005471638967182301;
                  }
                }
              } else {
                result[0] += 0.017042334434592334;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276582891195849945) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1581026364170406151) ) ) {
                  result[0] += -0.002373529417722555;
                } else {
                  result[0] += -0.010989262866164062;
                }
              } else {
                result[0] += 0.001618305165880864;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3012500000000000733) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.0225430597771048) ) ) {
                result[0] += -0.01300998962473512;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3499121892707919845) ) ) {
                  result[0] += 0.004767140248598408;
                } else {
                  result[0] += -0.007301696342156857;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3530928486564372526) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.33602150537634579) ) ) {
                  result[0] += 0.004427442049672619;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3162745180867091999) ) ) {
                    result[0] += -0.0114890768832535;
                  } else {
                    result[0] += -0.0033364035330194016;
                  }
                }
              } else {
                result[0] += 0.00798273559476524;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.43921568627451535) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3953.814167494189405) ) ) {
            result[0] += 0.002367972669444405;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.0225430597771048) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8163500000000000201) ) ) {
                result[0] += -0.0023030999238656193;
              } else {
                result[0] += -0.006065578250061764;
              }
            } else {
              result[0] += -0.011614688511772801;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.85329985652797902) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.728150000000000075) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.33573141486810876) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.162018451266281005) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6804500000000001103) ) ) {
                    result[0] += -0.0032320309812238004;
                  } else {
                    result[0] += -0.0002848988761483408;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5736.278277745757805) ) ) {
                    result[0] += 0.0010444833172816462;
                  } else {
                    result[0] += 0.014459327442067888;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6999500000000000721) ) ) {
                  result[0] += 0.005525340748606662;
                } else {
                  result[0] += 0.026702097289167386;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6149500000000001076) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7520000000000001128) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.745450000000000057) ) ) {
                    result[0] += -0.00037061171266845595;
                  } else {
                    result[0] += -0.010464202754051256;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1924404709589289386) ) ) {
                    result[0] += 0.00045027278657224607;
                  } else {
                    result[0] += -0.007472443351202074;
                  }
                }
              } else {
                result[0] += 0.009037539383268779;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.94076923076924146) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5743939393939395677) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7387500000000001288) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4081628666563487662) ) ) {
                    result[0] += -0.00497145169243968;
                  } else {
                    result[0] += -0.00111010352218898;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7767500000000001625) ) ) {
                    result[0] += 0.008832466105776711;
                  } else {
                    result[0] += -0.0072600933640025265;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2666.433655949607328) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2797500000000000542) ) ) {
                    result[0] += 0.000960451117680719;
                  } else {
                    result[0] += -0.0040472219224745335;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5122949209789572356) ) ) {
                    result[0] += 0.0016852244620626346;
                  } else {
                    result[0] += 0.008558384689139007;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3096000000000000418) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.64583333333335702) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2899000000000000465) ) ) {
                    result[0] += 0.0011105314360845724;
                  } else {
                    result[0] += 0.012238313861522875;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)96.58447802197802901) ) ) {
                    result[0] += -0.0016405241559471337;
                  } else {
                    result[0] += 0.00013209451452367237;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09410000000000001696) ) ) {
                  result[0] += 0.004725669732442566;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11385.5555937579793) ) ) {
                    result[0] += -0.0021397562946959855;
                  } else {
                    result[0] += -0.00017898422416345915;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

