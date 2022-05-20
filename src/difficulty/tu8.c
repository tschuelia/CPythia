#include "header.h"
double predict_margin_unit8(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.11875009536743164) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2316309958696365356) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4687.275146484375) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00439999997615814209) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1480464935302734375) ) ) {
              sum += (double)0.333554890624999989;
            } else {
              sum += (double)0.4402737321428571993;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1624710038304328918) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3022318482398986816) ) ) {
                sum += (double)0.05650814772727272284;
              } else {
                sum += (double)0.1909020499999999898;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075499966740608215) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.619861125946044922) ) ) {
                  sum += (double)0.3366023981481481853;
                } else {
                  sum += (double)0.2308966818181818204;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3631999939680099487) ) ) {
                  sum += (double)0.1745239642857142892;
                } else {
                  sum += (double)0.1097534523809523682;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.18727254867553711) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7028268873691558838) ) ) {
              sum += (double)0.2474728977272727393;
            } else {
              sum += (double)0.06939368750000000918;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1254660002887248993) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09604100137948989868) ) ) {
                sum += (double)0.005407647058823530049;
              } else {
                sum += (double)0.02370575000000000113;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1495.4407958984375) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02835000026971101761) ) ) {
                  sum += (double)0.1450943088235293887;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2947832047939300537) ) ) {
                    sum += (double)0.02548405000000000115;
                  } else {
                    sum += (double)0.1218233076923076752;
                  }
                }
              } else {
                sum += (double)0.01990284374999999953;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.322681427001953125) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2078.4638671875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003499999875202775002) ) ) {
                sum += (double)0.5496351785714285176;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.742063522338867188) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2760.055419921875) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3266.6756591796875) ) ) {
                      sum += (double)0.4107535161290323256;
                    } else {
                      sum += (double)0.3515973076923077367;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2394.6925048828125) ) ) {
                      sum += (double)0.4754584999999999506;
                    } else {
                      sum += (double)0.4327447499999999558;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5255.547607421875) ) ) {
                    sum += (double)0.4004821319444444305;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2899184972047805786) ) ) {
                      sum += (double)0.2097726406250000619;
                    } else {
                      sum += (double)0.3205585000000000795;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6431999802589416504) ) ) {
                sum += (double)0.1983177727272727175;
              } else {
                sum += (double)0.3513360833333333266;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9944.02734375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.82940864562988281) ) ) {
                sum += (double)0.4424070833333333397;
              } else {
                sum += (double)0.2948100576923076699;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.149899996817111969) ) ) {
                sum += (double)0.09486951785714284324;
              } else {
                sum += (double)0.2567419531249999776;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.039836645126342773) ) ) {
            sum += (double)0.1922630555555555898;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2451.3175048828125) ) ) {
              sum += (double)0.05278419444444443914;
            } else {
              sum += (double)0.01101857407407407473;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.24091300368309021) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.10500001907348633) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14131.7041015625) ) ) {
            sum += (double)0.156772367647058819;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4597499966621398926) ) ) {
              sum += (double)0.1342411973684210225;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2206612452864646912) ) ) {
                sum += (double)0.03642290000000000805;
              } else {
                sum += (double)0.01223183333333333241;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4721999913454055786) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07246400043368339539) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1408999934792518616) ) ) {
                sum += (double)0.03725336842105261836;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04403600096702575684) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.808899998664855957) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.00293443749999999998;
                    }
                  } else {
                    sum += (double)0.004800021739130435477;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)122.2535018920898438) ) ) {
                    sum += (double)0.01011271000000000045;
                  } else {
                    sum += (double)0.003427047619047619061;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11297.15478515625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.51904773712158203) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.46273040771484375) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5613499879837036133) ) ) {
                      sum += (double)0.06501635156249999103;
                    } else {
                      sum += (double)0.02335961666666667297;
                    }
                  } else {
                    sum += (double)0.1633440892857143112;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)115.8301506042480469) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-45753.61328125) ) ) {
                      sum += (double)0.1109896874999999894;
                    } else {
                      sum += (double)0.01826475724637681083;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)442.1804351806640625) ) ) {
                      sum += (double)0.02238501388888888832;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4881.6162109375) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6207.59521484375) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.66095352172851562) ) ) {
                      sum += (double)0.02164735714285714527;
                    } else {
                      sum += (double)0.007726260869565218861;
                    }
                  } else {
                    sum += (double)0.0402464375000000027;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1471855044364929199) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02520000003278255463) ) ) {
                      sum += (double)0.009051333333333334841;
                    } else {
                      sum += (double)0.01516555882352941219;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1938745006918907166) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.003053333333333332813;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.08824155208333334111;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7375432848930358887) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)97.871429443359375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06799999997019767761) ) ) {
              sum += (double)0.08619247916666666898;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3071497678756713867) ) ) {
                sum += (double)0.3202105700000000832;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.56812286376953125) ) ) {
                  sum += (double)0.2784096333333333506;
                } else {
                  sum += (double)0.1543873571428571456;
                }
              }
            }
          } else {
            sum += (double)0.05255762962962962775;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09960000216960906982) ) ) {
            sum += (double)0.1073371764705882414;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3979000002145767212) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2036499977111816406) ) ) {
                sum += (double)0.03681138793103447965;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3222949951887130737) ) ) {
                  sum += (double)0.003779964285714286238;
                } else {
                  sum += (double)0.02317913461538461881;
                }
              }
            } else {
              sum += (double)0.09769776562500000205;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5800004899501800537) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5168820023536682129) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.81038665771484375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07509150728583335876) ) ) {
                sum += (double)0.573853137499999999;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7885499894618988037) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.49393939971923828) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
                      sum += (double)0.4829862261904761533;
                    } else {
                      sum += (double)0.5557467236842105196;
                    }
                  } else {
                    sum += (double)0.5689983958333333369;
                  }
                } else {
                  sum += (double)0.382788141666666637;
                }
              }
            } else {
              sum += (double)0.3519634558823528936;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.456908464431762695) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.034946322441101074) ) ) {
                sum += (double)0.6136350138888888583;
              } else {
                sum += (double)0.6564904500000000587;
              }
            } else {
              sum += (double)0.5467825277777778048;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5791999995708465576) ) ) {
            sum += (double)0.1521450833333333197;
          } else {
            sum += (double)0.312191818181818237;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.611263751983642578) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7562465071678161621) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.63636350631713867) ) ) {
              sum += (double)0.7086104899999999818;
            } else {
              sum += (double)0.7602566904761904887;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03960000164806842804) ) ) {
              sum += (double)0.860514884615384501;
            } else {
              sum += (double)0.7827121739130433742;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.47418403625488281) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6919425129890441895) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7608999907970428467) ) ) {
                sum += (double)0.6568479615384615888;
              } else {
                sum += (double)0.5931888863636363141;
              }
            } else {
              sum += (double)0.769651214285714258;
            }
          } else {
            sum += (double)0.4775125874999998632;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6592045128345489502) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.788650929927825928) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4989225119352340698) ) ) {
            sum += (double)0.3817222749999999998;
          } else {
            sum += (double)0.4422612499999999947;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10450.90283203125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.55447769165039062) ) ) {
              sum += (double)0.387695065789473714;
            } else {
              sum += (double)0.2560162999999999744;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5113460123538970947) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.288064956665039062) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                  sum += (double)0.3504517833333333221;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4337224960327148438) ) ) {
                    sum += (double)0.07821339473684210675;
                  } else {
                    sum += (double)0.1677379285714285795;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3713.010009765625) ) ) {
                  sum += (double)0.02999202083333332713;
                } else {
                  sum += (double)0.08855471590909090585;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1313.27392578125) ) ) {
                sum += (double)0.3004565250000000298;
              } else {
                sum += (double)0.1707035625000000167;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.25714302062988281) ) ) {
          sum += (double)0.5183880446428570377;
        } else {
          sum += (double)0.403761326086956529;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3705220073461532593) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.46775054931640625) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3075.2962646484375) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1410804986953735352) ) ) {
              sum += (double)0.1372154761904761655;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
                sum += (double)0.3909998611111111244;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.29373264312744141) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2010910063982009888) ) ) {
                    sum += (double)0.3547379673913043097;
                  } else {
                    sum += (double)0.2530176718749999609;
                  }
                } else {
                  sum += (double)0.1790270166666666773;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.487012863159179688) ) ) {
              sum += (double)0.1949789875000000339;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01500000013038516045) ) ) {
                sum += (double)0.007773277777777777391;
              } else {
                sum += (double)0.06422972058823528396;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
            sum += (double)0.5163456826923077392;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.388248920440673828) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.314434349536895752) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.225694537162780762) ) ) {
                    sum += (double)0.3731158249999999565;
                  } else {
                    sum += (double)0.4257642678571428863;
                  }
                } else {
                  sum += (double)0.3060342105263157975;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3060515075922012329) ) ) {
                  sum += (double)0.3878435250000000778;
                } else {
                  sum += (double)0.4766908416666666426;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4947.6357421875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3198615014553070068) ) ) {
                  sum += (double)0.3751956296296296012;
                } else {
                  sum += (double)0.4534564500000000109;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.38050317764282227) ) ) {
                  sum += (double)0.1314765833333333689;
                } else {
                  sum += (double)0.2478900161290322757;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4313.30517578125) ) ) {
          sum += (double)0.1950746111111111292;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.631305098533630371) ) ) {
            sum += (double)0.01540905263157894833;
          } else {
            sum += (double)0.03447138235294117115;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.97348499298095703) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9650.12744140625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2554450035095214844) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005000000222935341299) ) ) {
              sum += (double)0.3226924999999999932;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1600320041179656982) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09777000173926353455) ) ) {
                  sum += (double)0.03160997727272726876;
                } else {
                  sum += (double)0.08602463888888887966;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.9845890998840332) ) ) {
                  sum += (double)0.2125662954545454453;
                } else {
                  sum += (double)0.1128090624999999875;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.363739013671875) ) ) {
              sum += (double)0.4028420714285714799;
            } else {
              sum += (double)0.2577663103448276094;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07450000196695327759) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4363.64453125) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.81818199157714844) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02900000009685754776) ) ) {
                  sum += (double)0.1657963472222222234;
                } else {
                  sum += (double)0.0663011470588235341;
                }
              } else {
                sum += (double)0.02339374074074074272;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04915000125765800476) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.31666946411132812) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03625000081956386566) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2346384972333908081) ) ) {
                      sum += (double)0.008305659090909090977;
                    } else {
                      sum += (double)0.004167368421052631416;
                    }
                  } else {
                    sum += (double)0.02227613235294117339;
                  }
                } else {
                  sum += (double)0.03403845312499998582;
                }
              } else {
                sum += (double)0.06075449999999999601;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6437696516513824463) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2157284989953041077) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.126681499183177948) ) ) {
                  sum += (double)0.01184373333333333354;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1546500027179718018) ) ) {
                    sum += (double)0.17307486842105263;
                  } else {
                    sum += (double)0.08317542647058821792;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5720.6416015625) ) ) {
                  sum += (double)0.1815520000000000189;
                } else {
                  sum += (double)0.3289109875000000849;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.06283426284790039) ) ) {
                sum += (double)0.0226066578947368424;
              } else {
                sum += (double)0.07820009374999999097;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1454439982771873474) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.94133663177490234) ) ) {
            sum += (double)0.09953859210526314061;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07196350023150444031) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3345.8603515625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04863500036299228668) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8332000076770782471) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4131000041961669922) ) ) {
                      sum += (double)0.003423483870967742541;
                    } else {
                      sum += (double)0.002500000000000001353;
                    }
                  } else {
                    sum += (double)0.005271458333333333725;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5112999975681304932) ) ) {
                    sum += (double)0.003311333333333334097;
                  } else {
                    sum += (double)0.008620513888888891099;
                  }
                }
              } else {
                sum += (double)0.01202200000000000144;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18768.794921875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.26621723175048828) ) ) {
                  sum += (double)0.1142160357142857074;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3696999996900558472) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)319.052520751953125) ) ) {
                      sum += (double)0.0209987096774193506;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  } else {
                    sum += (double)0.06446816176470589188;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5150134563446044922) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3420496135950088501) ) ) {
                    sum += (double)0.00921813333333333304;
                  } else {
                    sum += (double)0.02374861111111110923;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3603999912738800049) ) ) {
                    sum += (double)0.002902300000000000452;
                  } else {
                    sum += (double)0.008541142857142859993;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5728.1005859375) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.41921043395996094) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30079.740234375) ) ) {
                sum += (double)0.2501000357142856845;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.26515007019042969) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6205592453479766846) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3972597718238830566) ) ) {
                      sum += (double)0.075595666666666686;
                    } else {
                      sum += (double)0.1551210921052631753;
                    }
                  } else {
                    sum += (double)0.03794224999999999681;
                  }
                } else {
                  sum += (double)0.1938975652173913489;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-141005.75) ) ) {
                sum += (double)0.1174254833333333164;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.49791526794433594) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2760775089263916016) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6578000187873840332) ) ) {
                      sum += (double)0.08556892857142858744;
                    } else {
                      sum += (double)0.02782181666666666553;
                    }
                  } else {
                    sum += (double)0.1143522499999999886;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2550835013389587402) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2317999973893165588) ) ) {
                      sum += (double)0.02023502941176471073;
                    } else {
                      sum += (double)0.005797541666666668723;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7339018285274505615) ) ) {
                      sum += (double)0.06235291666666665372;
                    } else {
                      sum += (double)0.03251660416666667108;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2747084945440292358) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.317431151866912842) ) ) {
                sum += (double)0.003401441176470588849;
              } else {
                sum += (double)0.0109879999999999995;
              }
            } else {
              sum += (double)0.02314095454545454095;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5112900435924530029) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42352914810180664) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5349995195865631104) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8548499941825866699) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1975999996066093445) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1971.7718505859375) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005500000224856194109) ) ) {
                    sum += (double)0.6252923214285713849;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.90909051895141602) ) ) {
                      sum += (double)0.495584038043478281;
                    } else {
                      sum += (double)0.5685200694444443315;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01124999998137354851) ) ) {
                    sum += (double)0.4143333750000000038;
                  } else {
                    sum += (double)0.5044253333333333922;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.962072610855102539) ) ) {
                  sum += (double)0.5051952499999999846;
                } else {
                  sum += (double)0.4087364499999999734;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08162003010511398315) ) ) {
                sum += (double)0.4834691630434782561;
              } else {
                sum += (double)0.3567884264705882269;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1200214438140392303) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3293.25634765625) ) ) {
                sum += (double)0.6700896428571428975;
              } else {
                sum += (double)0.6252468260869563643;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0612000003457069397) ) ) {
                sum += (double)0.5094057666666667039;
              } else {
                sum += (double)0.6060312314814814139;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6209500133991241455) ) ) {
            sum += (double)0.3938831406250000167;
          } else {
            sum += (double)0.2808161323529412279;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.98828601837158203) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6768469810485839844) ) ) {
              sum += (double)0.7428909342105263214;
            } else {
              sum += (double)0.7028300104166665951;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03770000115036964417) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7930704951286315918) ) ) {
                sum += (double)0.8199777375000000257;
              } else {
                sum += (double)0.8707229666666667089;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.626961052417755127) ) ) {
                sum += (double)0.7521778472222222511;
              } else {
                sum += (double)0.7990516973684210766;
              }
            }
          }
        } else {
          sum += (double)0.6579222875000001469;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5458705127239227295) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.2421875) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1777.24884033203125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1552999988198280334) ) ) {
              sum += (double)0.262808671052631615;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.458703815937042236) ) ) {
                sum += (double)0.4124426296296296313;
              } else {
                sum += (double)0.3282025833333332976;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4378789961338043213) ) ) {
              sum += (double)0.07692631250000001031;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-734.35345458984375) ) ) {
                sum += (double)0.1886712125000000184;
              } else {
                sum += (double)0.3373111875000000537;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08275000005960464478) ) ) {
            sum += (double)0.2921879166666666583;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2567499876022338867) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3160.5521240234375) ) ) {
                sum += (double)0.07293217857142857141;
              } else {
                sum += (double)0.01851267857142857229;
              }
            } else {
              sum += (double)0.1594065603448275581;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1417.17144775390625) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.029400944709777832) ) ) {
            sum += (double)0.5960692592592592431;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
              sum += (double)0.3497620263157894538;
            } else {
              sum += (double)0.5089172708333333794;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
            sum += (double)0.4335938611111110896;
          } else {
            sum += (double)0.1268748970588235159;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3677469938993453979) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.216029167175292969) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4106.695556640625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006399999838322401047) ) ) {
            sum += (double)0.4035465500000000594;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.509975433349609375) ) ) {
              sum += (double)0.2866978214285714199;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.172299996018409729) ) ) {
                sum += (double)0.1808528793103447996;
              } else {
                sum += (double)0.239402749999999942;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.22886037826538086) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.926179170608520508) ) ) {
              sum += (double)0.2784273076923076684;
            } else {
              sum += (double)0.1614771500000000137;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.99033808708190918) ) ) {
              sum += (double)0.1149874166666666614;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7583999931812286377) ) ) {
                sum += (double)0.02173046875000000239;
              } else {
                sum += (double)0.007504400000000001347;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.051411598920822144) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
            sum += (double)0.5300403833333332537;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.935222864151000977) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1427.47467041015625) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.144230842590332031) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3942669332027435303) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0733999982476234436) ) ) {
                      sum += (double)0.4221526935483871368;
                    } else {
                      sum += (double)0.473425355263157932;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4323.678955078125) ) ) {
                      sum += (double)0.3960990937500000753;
                    } else {
                      sum += (double)0.3487715535714285831;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.946853160858154297) ) ) {
                    sum += (double)0.2669398645833333528;
                  } else {
                    sum += (double)0.3941602065217391648;
                  }
                }
              } else {
                sum += (double)0.2826030972222222659;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3340.8245849609375) ) ) {
                sum += (double)0.38034741666666666;
              } else {
                sum += (double)0.07533892187499999227;
              }
            }
          }
        } else {
          sum += (double)0.09350694791666665229;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1950545012950897217) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07213700190186500549) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1234500035643577576) ) ) {
            sum += (double)0.07093537500000000884;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.51973676681518555) ) ) {
              sum += (double)0.02064212500000000075;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04316999949514865875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.41592025756835938) ) ) {
                  sum += (double)0.003817421052631578878;
                } else {
                  sum += (double)0.002500000000000001353;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06122849881649017334) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05423900112509727478) ) ) {
                    sum += (double)0.006084454545454546538;
                  } else {
                    sum += (double)0.01318176785714285718;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16016.52392578125) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.00399904166666666637;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004500000068219378591) ) ) {
            sum += (double)0.214872553571428565;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5527.55078125) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02115000039339065552) ) ) {
                sum += (double)0.191246923913043515;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.25595283508300781) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18917.84765625) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3319163769483566284) ) ) {
                      sum += (double)0.1907215666666666476;
                    } else {
                      sum += (double)0.08689940151515151978;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6082088947296142578) ) ) {
                      sum += (double)0.03449715364583332694;
                    } else {
                      sum += (double)0.08501599999999998047;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4053499996662139893) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1463450044393539429) ) ) {
                      sum += (double)0.01228700000000000105;
                    } else {
                      sum += (double)0.030474226190476187;
                    }
                  } else {
                    sum += (double)0.06098836250000000403;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.83928489685058594) ) ) {
                sum += (double)0.05267097500000000182;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.169786497950553894) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.77272701263427734) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2189957126975059509) ) ) {
                      sum += (double)0.01079478947368421073;
                    } else {
                      sum += (double)0.004053405405405405802;
                    }
                  } else {
                    sum += (double)0.01643754166666666627;
                  }
                } else {
                  sum += (double)0.01934839999999999824;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4405913949012756348) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.26908150315284729) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7807.607421875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.58440923690795898) ) ) {
                sum += (double)0.2848930476190476013;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2567999958992004395) ) ) {
                  sum += (double)0.0893280729166666676;
                } else {
                  sum += (double)0.2136811428571428473;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6367999911308288574) ) ) {
                sum += (double)0.1117538333333333161;
              } else {
                sum += (double)0.02966406578947368075;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.62424278259277344) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3032126426696777344) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7250999808311462402) ) ) {
                  sum += (double)0.4069353823529411329;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13844.26904296875) ) ) {
                    sum += (double)0.3414011785714285985;
                  } else {
                    sum += (double)0.2076250357142856995;
                  }
                }
              } else {
                sum += (double)0.1429054218749999938;
              }
            } else {
              sum += (double)0.1111456805555555427;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.90746784210205078) ) ) {
            sum += (double)0.1750517307692307789;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3470.424560546875) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.17857170104980469) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.047440409660339355) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7076331675052642822) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5341523587703704834) ) ) {
                      sum += (double)0.06258053571428572048;
                    } else {
                      sum += (double)0.09624244736842106629;
                    }
                  } else {
                    sum += (double)0.1954661153846153632;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3403999954462051392) ) ) {
                    sum += (double)0.07861332499999999779;
                  } else {
                    sum += (double)0.02274152173913043806;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09810000285506248474) ) ) {
                  sum += (double)0.09858984374999998912;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8945292234420776367) ) ) {
                    sum += (double)0.02767414473684210244;
                  } else {
                    sum += (double)0.006206482142857143794;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1452.3519287109375) ) ) {
                sum += (double)0.007281600000000001786;
              } else {
                sum += (double)0.02802129545454545498;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5711800456047058105) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.71070480346679688) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468925237655639648) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4191274940967559814) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3964640051126480103) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4452.052001953125) ) ) {
                  sum += (double)0.405227319444444456;
                } else {
                  sum += (double)0.5028950833333333259;
                }
              } else {
                sum += (double)0.3884941160714285857;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.57952499389648438) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1942.0135498046875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07735000178217887878) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1436605304479598999) ) ) {
                      sum += (double)0.5747101250000000716;
                    } else {
                      sum += (double)0.5069101833333333751;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7153999805450439453) ) ) {
                      sum += (double)0.5068594827586206941;
                    } else {
                      sum += (double)0.4239408684210526634;
                    }
                  }
                } else {
                  sum += (double)0.4473026354166667051;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06159999966621398926) ) ) {
                  sum += (double)0.6036359642857141994;
                } else {
                  sum += (double)0.5073960192307692685;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1200214438140392303) ) ) {
              sum += (double)0.6574518703703703393;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0612000003457069397) ) ) {
                sum += (double)0.5235363333333332703;
              } else {
                sum += (double)0.6096911442307691997;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8749499917030334473) ) ) {
            sum += (double)0.2246522875000000197;
          } else {
            sum += (double)0.4120689166666666181;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7384830117225646973) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8303000032901763916) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6468499898910522461) ) ) {
              sum += (double)0.709822000000000064;
            } else {
              sum += (double)0.6724642727272727161;
            }
          } else {
            sum += (double)0.7332534999999998915;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.832332998514175415) ) ) {
              sum += (double)0.8192001666666668402;
            } else {
              sum += (double)0.8700365000000001015;
            }
          } else {
            sum += (double)0.7507300333333333242;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.288064956665039062) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3201.2772216796875) ) ) {
            sum += (double)0.4321017826086955282;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4255234897136688232) ) ) {
              sum += (double)0.1545225925925926003;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.309198141098022461) ) ) {
                sum += (double)0.3653295892857142957;
              } else {
                sum += (double)0.2407142980769230722;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.70833301544189453) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1037000007927417755) ) ) {
              sum += (double)0.1082230263157894501;
            } else {
              sum += (double)0.02174150806451612822;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.84106826782226562) ) ) {
              sum += (double)0.3030355833333333582;
            } else {
              sum += (double)0.1067984285714285581;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3779.5599365234375) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.74656534194946289) ) ) {
            sum += (double)0.5954737500000000239;
          } else {
            sum += (double)0.4153944351851852068;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.141848564147949219) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.87322157621383667) ) ) {
              sum += (double)0.4375364199999999815;
            } else {
              sum += (double)0.3589252343749999574;
            }
          } else {
            sum += (double)0.1586830499999999922;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4569820016622543335) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.33211088180541992) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4202.166259765625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999970197677612) ) ) {
            sum += (double)0.4396043666666666905;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11885.71044921875) ) ) {
              sum += (double)0.2827012279411764695;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2661499977111816406) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.152281522750854492) ) ) {
                  sum += (double)0.2952571323529412095;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09984999895095825195) ) ) {
                    sum += (double)0.1184248088235294177;
                  } else {
                    sum += (double)0.1999699868421052629;
                  }
                }
              } else {
                sum += (double)0.1108254732142857357;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.478991508483886719) ) ) {
            sum += (double)0.1692466111111111393;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2594.0220947265625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.276295185089111328) ) ) {
                sum += (double)0.138809540000000009;
              } else {
                sum += (double)0.05781891129032256521;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06754999980330467224) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1839333251118659973) ) ) {
                  sum += (double)0.009166350000000000192;
                } else {
                  sum += (double)0.03216800000000000215;
                }
              } else {
                sum += (double)0.08120649999999998703;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9722101092338562012) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001499999962106812745) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2753.9794921875) ) ) {
              sum += (double)0.6106978676470586898;
            } else {
              sum += (double)0.4831412500000000221;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3206399977207183838) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.53156566619873047) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4830499887466430664) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.533085107803344727) ) ) {
                    sum += (double)0.373085147058823563;
                  } else {
                    sum += (double)0.3046613125000000033;
                  }
                } else {
                  sum += (double)0.4222974642857142413;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2005000039935112) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.607407569885253906) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2763275057077407837) ) ) {
                      sum += (double)0.2021633333333333338;
                    } else {
                      sum += (double)0.3305905416666667374;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2829269915819168091) ) ) {
                      sum += (double)0.2081224861111111435;
                    } else {
                      sum += (double)0.07241807499999998454;
                    }
                  }
                } else {
                  sum += (double)0.3414292870370370103;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.222527503967285156) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8082500100135803223) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.042261838912963867) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.601344585418701172) ) ) {
                      sum += (double)0.4573057327586206866;
                    } else {
                      sum += (double)0.5297745781250000618;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2564783245325088501) ) ) {
                      sum += (double)0.4557459807692307852;
                    } else {
                      sum += (double)0.3504093181818181968;
                    }
                  }
                } else {
                  sum += (double)0.3950830124999999415;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.785950005054473877) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03490000031888484955) ) ) {
                    sum += (double)0.2316610833333333785;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3809899985790252686) ) ) {
                      sum += (double)0.3341497840909090633;
                    } else {
                      sum += (double)0.3950314469696969977;
                    }
                  }
                } else {
                  sum += (double)0.4843151931818180933;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2965.49169921875) ) ) {
            sum += (double)0.2761062400000000028;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.638694882392883301) ) ) {
              sum += (double)0.1287159305555555522;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.5201149582862854) ) ) {
                sum += (double)0.04201507894736841719;
              } else {
                sum += (double)0.0109829000000000003;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2574974894523620605) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37857151031494141) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07237700000405311584) ) ) {
            sum += (double)0.0160723333333333343;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10653.59130859375) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1525100022554397583) ) ) {
                sum += (double)0.2496459166666666341;
              } else {
                sum += (double)0.1119522800000000012;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174571499228477478) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3873.8570556640625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.49048900604248047) ) ) {
                    sum += (double)0.03495555357142857839;
                  } else {
                    sum += (double)0.006698047619047620832;
                  }
                } else {
                  sum += (double)0.09570589062499998412;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6511999964714050293) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1591000035405158997) ) ) {
                    sum += (double)0.05555045370370369912;
                  } else {
                    sum += (double)0.1144719500000000029;
                  }
                } else {
                  sum += (double)0.1748666704545454587;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0879999995231628418) ) ) {
            sum += (double)0.0933809479166666373;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
                sum += (double)0.02788142307692307795;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7944134175777435303) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05397449992597103119) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.182799994945526123) ) ) {
                      sum += (double)0.002596978260869567054;
                    } else {
                      sum += (double)0.004246184210526316068;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06351049989461898804) ) ) {
                      sum += (double)0.009813022727272727522;
                    } else {
                      sum += (double)0.003042473684210526309;
                    }
                  }
                } else {
                  sum += (double)0.008357592592592595279;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2670808732509613037) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.33179092407226562) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17832.8759765625) ) ) {
                    sum += (double)0.1591652272727272777;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.16383743286132812) ) ) {
                      sum += (double)0.01019135294117647084;
                    } else {
                      sum += (double)0.06970002083333332044;
                    }
                  }
                } else {
                  sum += (double)0.01432990217391304569;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10292.85986328125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60548496246337891) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1926499977707862854) ) ) {
                      sum += (double)0.02474718181818181748;
                    } else {
                      sum += (double)0.1100172738095237801;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-109288.8515625) ) ) {
                      sum += (double)0.05064897368421052148;
                    } else {
                      sum += (double)0.01834348267326731466;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.71754264831542969) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5967.834716796875) ) ) {
                      sum += (double)0.03366827272727272724;
                    } else {
                      sum += (double)0.01064348148148148293;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1426950022578239441) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.004985225000000000246;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7413459122180938721) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10034.47998046875) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.25134849548339844) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1221077144145965576) ) ) {
                sum += (double)0.2027231718749999967;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2616999894380569458) ) ) {
                  sum += (double)0.4081486124999999521;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6292500197887420654) ) ) {
                    sum += (double)0.2296396093749999978;
                  } else {
                    sum += (double)0.3266558026315790064;
                  }
                }
              }
            } else {
              sum += (double)0.1263289782608695566;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08565000072121620178) ) ) {
              sum += (double)0.05871064423076922251;
            } else {
              sum += (double)0.1991416323529411891;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3902549892663955688) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.72916603088378906) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20284.0380859375) ) ) {
                sum += (double)0.1477114605263158131;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.013739019632339478) ) ) {
                  sum += (double)0.07154049999999997911;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.11605548858642578) ) ) {
                    sum += (double)0.01119479166666666713;
                  } else {
                    sum += (double)0.030646069444444448;
                  }
                }
              }
            } else {
              sum += (double)0.01777334375000000008;
            }
          } else {
            sum += (double)0.1230702580645161442;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4212084412574768066) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5362260043621063232) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.397484302520751953) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.939125537872314453) ) ) {
            sum += (double)0.5090918166666666966;
          } else {
            sum += (double)0.6376073666666666195;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2237.23822021484375) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2495551556348800659) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.49028491973876953) ) ) {
                sum += (double)0.5203924629629629317;
              } else {
                sum += (double)0.4139405500000000737;
              }
            } else {
              sum += (double)0.5970162500000000261;
            }
          } else {
            sum += (double)0.3046550468750000018;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7556720077991485596) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.874904632568359375) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.892453193664550781) ) ) {
              sum += (double)0.6221265535714286532;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5989305078983306885) ) ) {
                sum += (double)0.6512169843750000853;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.78472232818603516) ) ) {
                  sum += (double)0.7224406190476190259;
                } else {
                  sum += (double)0.7505168499999999021;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1295500025153160095) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07271568477153778076) ) ) {
                sum += (double)0.6436181785714286674;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.87740373611450195) ) ) {
                  sum += (double)0.6151720882352941233;
                } else {
                  sum += (double)0.5402870789473683821;
                }
              }
            } else {
              sum += (double)0.6674875714285716244;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
            sum += (double)0.8511809375000002342;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
              sum += (double)0.7787208593750000185;
            } else {
              sum += (double)0.7436831785714286269;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7671484947204589844) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7006.357177734375) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.32692289352416992) ) ) {
            sum += (double)0.5006152258064515692;
          } else {
            sum += (double)0.3351456287878787355;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.170329689979553223) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5774924755096435547) ) ) {
              sum += (double)0.3854981428571428448;
            } else {
              sum += (double)0.4498601718749999923;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1119.5023193359375) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6092714965343475342) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.82619047164916992) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2522.7034912109375) ) ) {
                    sum += (double)0.4296564375000000435;
                  } else {
                    sum += (double)0.2184790192307692336;
                  }
                } else {
                  sum += (double)0.1727277500000000132;
                }
              } else {
                sum += (double)0.3887750217391304219;
              }
            } else {
              sum += (double)0.1148140166666666573;
            }
          }
        }
      } else {
        sum += (double)0.6521387058823530092;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3804129958152770996) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.942741870880126953) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2707985043525695801) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1409819945693016052) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4080.7537841796875) ) ) {
            sum += (double)0.1275874218749999955;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.222222328186035156) ) ) {
              sum += (double)0.03849566176470587547;
            } else {
              sum += (double)0.01661161764705882532;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.19108271598815918) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4393.5703125) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07629999890923500061) ) ) {
                sum += (double)0.3916558225806451299;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4878000020980834961) ) ) {
                  sum += (double)0.3202319062499999758;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1880499944090843201) ) ) {
                    sum += (double)0.1828140192307692868;
                  } else {
                    sum += (double)0.2595975961538460886;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.22886037826538086) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5225696563720703125) ) ) {
                  sum += (double)0.3504191875000000067;
                } else {
                  sum += (double)0.1790979027777777621;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2296769991517066956) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2116483747959136963) ) ) {
                    sum += (double)0.04586942391304347361;
                  } else {
                    sum += (double)0.1178661562499999926;
                  }
                } else {
                  sum += (double)0.2066299999999999804;
                }
              }
            }
          } else {
            sum += (double)0.07802519827586205936;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7430075705051422119) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003249999950639903545) ) ) {
            sum += (double)0.5478028382352942982;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1427.47467041015625) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.144230842590332031) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.314434349536895752) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.127980232238769531) ) ) {
                    sum += (double)0.4134414642857142108;
                  } else {
                    sum += (double)0.4766776666666667217;
                  }
                } else {
                  sum += (double)0.3733968620689655515;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346499994397163391) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3301695138216018677) ) ) {
                    sum += (double)0.2115541375000000168;
                  } else {
                    sum += (double)0.3281331666666666425;
                  }
                } else {
                  sum += (double)0.41203933928571429;
                }
              }
            } else {
              sum += (double)0.195185826086956532;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4746.814208984375) ) ) {
            sum += (double)0.2988857499999999501;
          } else {
            sum += (double)0.07824223571428570723;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1371454969048500061) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.85714244842529297) ) ) {
          sum += (double)0.09160035937500000947;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07196350023150444031) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
              sum += (double)0.02014402777777777806;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04427749849855899811) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3665499985218048096) ) ) {
                  sum += (double)0.005769911764705882781;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02944599930197000504) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    sum += (double)0.003916842105263157806;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)163.9371185302734375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06272399798035621643) ) ) {
                    sum += (double)0.01304000000000000124;
                  } else {
                    sum += (double)0.003052533333333333661;
                  }
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07574350014328956604) ) ) {
              sum += (double)0.1240084333333333205;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2160384729504585266) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1114525012671947479) ) ) {
                  sum += (double)0.01951342857142857393;
                } else {
                  sum += (double)0.1255910714285713992;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.8480987548828125) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.15960407257080078) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12279.33935546875) ) ) {
                      sum += (double)0.03456757812499999805;
                    } else {
                      sum += (double)0.01163968055555555589;
                    }
                  } else {
                    sum += (double)0.06650516176470588903;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1015500016510486603) ) ) {
                    sum += (double)0.002794461538461538198;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1049109995365142822) ) ) {
                      sum += (double)0.02728843749999999499;
                    } else {
                      sum += (double)0.00750352500000000134;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.48809528350830078) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10148.6513671875) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.66394710540771484) ) ) {
              sum += (double)0.4204808055555556145;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2808524966239929199) ) ) {
                sum += (double)0.1685742708333333451;
              } else {
                sum += (double)0.2964739464285713888;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4296244978904724121) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.288315504789352417) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5631499886512756348) ) ) {
                  sum += (double)0.1591005875000000291;
                } else {
                  sum += (double)0.06962852678571428144;
                }
              } else {
                sum += (double)0.2752351428571428449;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7312069833278656006) ) ) {
                sum += (double)0.08490764705882351826;
              } else {
                sum += (double)0.0228320000000000016;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4960.7763671875) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349194973707199097) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.72382450103759766) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20660.44921875) ) ) {
                  sum += (double)0.2238630000000000064;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2366394996643066406) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8090.515380859375) ) ) {
                      sum += (double)0.09067613095238094556;
                    } else {
                      sum += (double)0.02695175000000000001;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1617500036954879761) ) ) {
                      sum += (double)0.1165807916666666832;
                    } else {
                      sum += (double)0.1741115294117647205;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-112807.92578125) ) ) {
                  sum += (double)0.1482128382352941309;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2465620040893554688) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3167241513729095459) ) ) {
                      sum += (double)0.07627428124999999226;
                    } else {
                      sum += (double)0.02079111148648648058;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3128650039434432983) ) ) {
                      sum += (double)0.1149332317073171045;
                    } else {
                      sum += (double)0.04468572499999999559;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4274936169385910034) ) ) {
                sum += (double)0.3041375500000000343;
              } else {
                sum += (double)0.09915721052631579213;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2598499953746795654) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.214392483234405518) ) ) {
                sum += (double)0.1037750999999999951;
              } else {
                sum += (double)0.01402365217391304646;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6192073822021484375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.88636398315429688) ) ) {
                  sum += (double)0.02565797058823529597;
                } else {
                  sum += (double)0.007966500000000001358;
                }
              } else {
                sum += (double)0.003270975000000000184;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5861079990863800049) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.197937965393066406) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.318896770477294922) ) ) {
              sum += (double)0.4307529537037037004;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009949999861419200897) ) ) {
                sum += (double)0.6078426759259258905;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.250815369188785553) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1068163886666297913) ) ) {
                    sum += (double)0.4766440769230769758;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.856744885444641113) ) ) {
                      sum += (double)0.5129746015624999655;
                    } else {
                      sum += (double)0.5662710789473683892;
                    }
                  }
                } else {
                  sum += (double)0.4494914473684210598;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5593884885311126709) ) ) {
              sum += (double)0.6660269583333332521;
            } else {
              sum += (double)0.5879221203703705045;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7359000146389007568) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1917113587260246277) ) ) {
              sum += (double)0.4366968289473683873;
            } else {
              sum += (double)0.5311746018518518353;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1450017690658569336) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.098214149475097656) ) ) {
                sum += (double)0.4518362656249999554;
              } else {
                sum += (double)0.361485187500000027;
              }
            } else {
              sum += (double)0.2230029473684210506;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.752637147903442383) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7139790058135986328) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8266000151634216309) ) ) {
              sum += (double)0.680663556818181803;
            } else {
              sum += (double)0.7294501052631577886;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1553.44091796875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.733060836791992188) ) ) {
                sum += (double)0.7603799473684210719;
              } else {
                sum += (double)0.8238171333333333957;
              }
            } else {
              sum += (double)0.8449182638888887986;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.53252506256103516) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6516920030117034912) ) ) {
              sum += (double)0.6351123823529410961;
            } else {
              sum += (double)0.71996484782608694;
            }
          } else {
            sum += (double)0.5428533749999999714;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5475879907608032227) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.15932178497314453) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.096897304058074951) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.5233917236328125) ) ) {
              sum += (double)0.4867499259259260302;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.93053913116455078) ) ) {
                sum += (double)0.268765647058823498;
              } else {
                sum += (double)0.4547537031249999639;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1777.24884033203125) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4301549941301345825) ) ) {
                sum += (double)0.2637625833333333003;
              } else {
                sum += (double)0.3608374264705882517;
              }
            } else {
              sum += (double)0.118671479999999982;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9684193730354309082) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1000499986112117767) ) ) {
              sum += (double)0.1350315657894737009;
            } else {
              sum += (double)0.2691844642857142422;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.39651966094970703) ) ) {
              sum += (double)0.04360836111111111163;
            } else {
              sum += (double)0.1492148392857142736;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1559.46240234375) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.630369305610656738) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09694999828934669495) ) ) {
              sum += (double)0.4126557368421051586;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.65186348557472229) ) ) {
                sum += (double)0.5877426086956522022;
              } else {
                sum += (double)0.6694052187500000306;
              }
            }
          } else {
            sum += (double)0.3511655263157895113;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.23130345344543457) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.894699394702911377) ) ) {
              sum += (double)0.4822884999999999533;
            } else {
              sum += (double)0.4272092380952380308;
            }
          } else {
            sum += (double)0.1335638088235293897;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3831795006990432739) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.456695079803466797) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2316284999251365662) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4202.166259765625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2014940008521080017) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.251736164093017578) ) ) {
              sum += (double)0.2569586562499999727;
            } else {
              sum += (double)0.3770408928571428731;
            }
          } else {
            sum += (double)0.1712695769230769549;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
            sum += (double)0.2408278690476190476;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2515.79736328125) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1536365002393722534) ) ) {
                sum += (double)0.07147204999999999531;
              } else {
                sum += (double)0.187129638888888894;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.72355747222900391) ) ) {
                sum += (double)0.06754686764705881974;
              } else {
                sum += (double)0.01530664130434782749;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9411062896251678467) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3359.2139892578125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01380000030621886253) ) ) {
              sum += (double)0.5125815357142856632;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1763221621513366699) ) ) {
                sum += (double)0.3031805326086957075;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2759589999914169312) ) ) {
                  sum += (double)0.4086220000000000963;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349650055170059204) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1787000000476837158) ) ) {
                      sum += (double)0.3435924545454546175;
                    } else {
                      sum += (double)0.3865905588235293289;
                    }
                  } else {
                    sum += (double)0.4084126093749999575;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.111111164093017578) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3255925029516220093) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5966999828815460205) ) ) {
                  sum += (double)0.3870898214285714567;
                } else {
                  sum += (double)0.2582670955882352959;
                }
              } else {
                sum += (double)0.4375902500000000139;
              }
            } else {
              sum += (double)0.1287884880952381017;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1857.888671875) ) ) {
            sum += (double)0.1860402211538461359;
          } else {
            sum += (double)0.04287469117647058764;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1861995011568069458) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84589385986328125) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5547.379150390625) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02235000021755695343) ) ) {
              sum += (double)0.3030780735294117401;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1480999961495399475) ) ) {
                sum += (double)0.1329104342105263126;
              } else {
                sum += (double)0.03552359999999999546;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.334144294261932373) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1049044989049434662) ) ) {
                sum += (double)0.006528500000000001316;
              } else {
                sum += (double)0.01612192857142857177;
              }
            } else {
              sum += (double)0.06576644642857143452;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4626000076532363892) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.44532966613769531) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12398.7353515625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04234999977052211761) ) ) {
                  sum += (double)0.1647917499999999869;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.25395011901855469) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2240500003099441528) ) ) {
                      sum += (double)0.02949631249999999996;
                    } else {
                      sum += (double)0.07524117307692307355;
                    }
                  } else {
                    sum += (double)0.1360972000000000015;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.128613002598285675) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07246400043368339539) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.65961456298828125) ) ) {
                      sum += (double)0.00506199999999999966;
                    } else {
                      sum += (double)0.002567934782608695746;
                    }
                  } else {
                    sum += (double)0.009542569444444443799;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.07675409317016602) ) ) {
                    sum += (double)0.07337963333333333282;
                  } else {
                    sum += (double)0.01143367241379310284;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1294514983892440796) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2051999941468238831) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.84375) ) ) {
                    sum += (double)0.01666582142857142915;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04637400060892105103) ) ) {
                      sum += (double)0.002755180555555557589;
                    } else {
                      sum += (double)0.008846784615384618161;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2594500035047531128) ) ) {
                    sum += (double)0.03104624999999999399;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)155.0300674438476562) ) ) {
                      sum += (double)0.01363002500000000047;
                    } else {
                      sum += (double)0.002499999999999999185;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4064500033855438232) ) ) {
                  sum += (double)0.03731658928571427586;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.16813278198242188) ) ) {
                    sum += (double)0.02573509210526315691;
                  } else {
                    sum += (double)0.008147965517241380004;
                  }
                }
              }
            }
          } else {
            sum += (double)0.1263637968749999896;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5376987457275390625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7780.98876953125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.82499980926513672) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2849870026111602783) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2253139987587928772) ) ) {
                    sum += (double)0.3002230192307692169;
                  } else {
                    sum += (double)0.1504490416666666441;
                  }
                } else {
                  sum += (double)0.3832752833333333276;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4443999975919723511) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2443754002451896667) ) ) {
                    sum += (double)0.2090526029411765019;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2861670106649398804) ) ) {
                      sum += (double)0.1094904473684210899;
                    } else {
                      sum += (double)0.04400861363636363044;
                    }
                  }
                } else {
                  sum += (double)0.2444215166666666439;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05184999853372573853) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4351.128662109375) ) ) {
                  sum += (double)0.07394549999999999734;
                } else {
                  sum += (double)0.02611162499999999595;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.25) ) ) {
                  sum += (double)0.2309064200000000011;
                } else {
                  sum += (double)0.1303948636363636282;
                }
              }
            }
          } else {
            sum += (double)0.3339297368421051959;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.091315984725952148) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.7651519775390625) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4485.299072265625) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7203567922115325928) ) ) {
                  sum += (double)0.121940260869565234;
                } else {
                  sum += (double)0.2497299741379310212;
                }
              } else {
                sum += (double)0.03688025781249999052;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2421040013432502747) ) ) {
                sum += (double)0.007038309523809523939;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3096999973058700562) ) ) {
                  sum += (double)0.07914017857142859047;
                } else {
                  sum += (double)0.05102232954545453392;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05559999868273735046) ) ) {
              sum += (double)0.09882731666666665082;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15797.10009765625) ) ) {
                sum += (double)0.04239891666666666115;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.576317310333251953) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.199400000274181366) ) ) {
                    sum += (double)0.01346499999999999954;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3118499964475631714) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.006794846153846154785;
                    }
                  }
                } else {
                  sum += (double)0.0277189230769230785;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6058602333068847656) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6171754896640777588) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12297296524047852) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4168944954872131348) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7279500067234039307) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.083333492279052734) ) ) {
                  sum += (double)0.4160886718750000379;
                } else {
                  sum += (double)0.5265122708333334067;
                }
              } else {
                sum += (double)0.3667191190476191132;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.27091312408447266) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7188499867916107178) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6167500019073486328) ) ) {
                    sum += (double)0.4714826500000000586;
                  } else {
                    sum += (double)0.5553320000000000478;
                  }
                } else {
                  sum += (double)0.3729939642857142412;
                }
              } else {
                sum += (double)0.569145379629629522;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1205621063709259033) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5248735249042510986) ) ) {
                sum += (double)0.5456050199999999961;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00664999987930059433) ) ) {
                  sum += (double)0.6716642941176470538;
                } else {
                  sum += (double)0.6310915583333333023;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6888000071048736572) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.616146445274353027) ) ) {
                  sum += (double)0.5289653333333332874;
                } else {
                  sum += (double)0.6161558833333332652;
                }
              } else {
                sum += (double)0.441285108695652184;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5091879963874816895) ) ) {
            sum += (double)0.3401564249999999845;
          } else {
            sum += (double)0.2209455937499999745;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.681208610534667969) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1607.85223388671875) ) ) {
              sum += (double)0.6771272666666666717;
            } else {
              sum += (double)0.7295553593749999344;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7741999924182891846) ) ) {
              sum += (double)0.6760252749999999811;
            } else {
              sum += (double)0.5757488055555555206;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1070499978959560394) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1530.0501708984375) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2521.170166015625) ) ) {
                sum += (double)0.8155130972222222052;
              } else {
                sum += (double)0.7625917333333332992;
              }
            } else {
              sum += (double)0.8441064375000000286;
            }
          } else {
            sum += (double)0.7250972666666667399;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5965064764022827148) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.76419442892074585) ) ) {
          sum += (double)0.3801665322580644046;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4486.044921875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.33918523788452148) ) ) {
              sum += (double)0.4354837619047619013;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4550174921751022339) ) ) {
                sum += (double)0.1418111176470588097;
              } else {
                sum += (double)0.2463313529411764735;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.75) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05004999972879886627) ) ) {
                sum += (double)0.1065948636363636265;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1993499994277954102) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.744037389755249023) ) ) {
                    sum += (double)0.2042644230769230518;
                  } else {
                    sum += (double)0.1196536785714285428;
                  }
                } else {
                  sum += (double)0.2957694761904762215;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2164.19189453125) ) ) {
                sum += (double)0.1033571153846153945;
              } else {
                sum += (double)0.01442880555555555583;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
          sum += (double)0.5944147794117646821;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.131898045539855957) ) ) {
            sum += (double)0.4497635967741936414;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)50.18181800842285156) ) ) {
              sum += (double)0.2079263906249999849;
            } else {
              sum += (double)0.3818274218749999616;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3218135088682174683) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.216029167175292969) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2269699946045875549) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4202.166259765625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1054500006139278412) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.571338176727294922) ) ) {
              sum += (double)0.3096878281250000087;
            } else {
              sum += (double)0.3880617375000000036;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2661499977111816406) ) ) {
              sum += (double)0.246316541666666694;
            } else {
              sum += (double)0.1476234833333333329;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3480076342821121216) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.92228245735168457) ) ) {
              sum += (double)0.09335416666666666863;
            } else {
              sum += (double)0.01990212500000000315;
            }
          } else {
            sum += (double)0.1865698249999999947;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.11650007963180542) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.296165943145751953) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2046.376708984375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01650000084191560745) ) ) {
                sum += (double)0.4783751416666666145;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.499390125274658203) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4508.364990234375) ) ) {
                    sum += (double)0.376428089999999993;
                  } else {
                    sum += (double)0.4310000546875000227;
                  }
                } else {
                  sum += (double)0.3043444270833333132;
                }
              }
            } else {
              sum += (double)0.2512025277777777954;
            }
          } else {
            sum += (double)0.204436808333333303;
          }
        } else {
          sum += (double)0.08039793750000000239;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.21120643615722656) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10291.52783203125) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
            sum += (double)0.3778724999999999445;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2553090006113052368) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1337219998240470886) ) ) {
                sum += (double)0.03332166176470588437;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.34411334991455078) ) ) {
                  sum += (double)0.1940261057692307944;
                } else {
                  sum += (double)0.1104422499999999779;
                }
              }
            } else {
              sum += (double)0.3314465000000000328;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.125330999493598938) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1053149998188018799) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02234999928623437881) ) ) {
                sum += (double)0.002927395833333332198;
              } else {
                sum += (double)0.008375038461538463277;
              }
            } else {
              sum += (double)0.02731264705882353178;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001499999954830855131) ) ) {
              sum += (double)0.2361642361111111477;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.256107717752456665) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1719491928815841675) ) ) {
                  sum += (double)0.09388286249999999722;
                } else {
                  sum += (double)0.1951351944444444653;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.972222328186035156) ) ) {
                  sum += (double)0.1410735576923076717;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.20535755157470703) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2352224960923194885) ) ) {
                      sum += (double)0.01423832608695652091;
                    } else {
                      sum += (double)0.04379924999999999791;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1326500028371810913) ) ) {
                      sum += (double)0.04422312121212122749;
                    } else {
                      sum += (double)0.1653389230769230778;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2557024955749511719) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4666499942541122437) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0892999991774559021) ) ) {
              sum += (double)0.1034727222222222021;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02963000070303678513) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.169529356062412262) ) ) {
                      sum += (double)0.002748249999999999825;
                    } else {
                      sum += (double)0.002500000000000001787;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)55.17272758483886719) ) ) {
                      sum += (double)0.006544216346153848042;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03160000033676624298) ) ) {
                    sum += (double)0.002499999999999999618;
                  } else {
                    sum += (double)0.01914612499999999995;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10292.85986328125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.26309585571289062) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24936.94140625) ) ) {
                      sum += (double)0.1536408653846153827;
                    } else {
                      sum += (double)0.05551912499999998862;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6411821246147155762) ) ) {
                      sum += (double)0.02818614215686274238;
                    } else {
                      sum += (double)0.007329162790697675046;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.35714340209960938) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1303640007972717285) ) ) {
                      sum += (double)0.03668201315789473838;
                    } else {
                      sum += (double)0.01222805102040816667;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.11153793334960938) ) ) {
                      sum += (double)0.00873849999999999974;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21872.2109375) ) ) {
              sum += (double)0.1133065571428571172;
            } else {
              sum += (double)0.03653822727272727083;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.372500002384185791) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.189449995756149292) ) ) {
              sum += (double)0.09418169736842103845;
            } else {
              sum += (double)0.004834062499999999818;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2745665013790130615) ) ) {
              sum += (double)0.226719230769230784;
            } else {
              sum += (double)0.1243457211538461366;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3575691580772399902) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5345174968242645264) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.283285617828369141) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003550000139512121677) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1314535737037658691) ) ) {
              sum += (double)0.6292101447368420031;
            } else {
              sum += (double)0.4704628666666665904;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4168944954872131348) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1208557188510894775) ) ) {
                sum += (double)0.402397846153846106;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1892185285687446594) ) ) {
                  sum += (double)0.4902395789473683596;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3672370016574859619) ) ) {
                    sum += (double)0.3868499821428571517;
                  } else {
                    sum += (double)0.4680391195652173764;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8683499991893768311) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7639000117778778076) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4937150031328201294) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3503.6817626953125) ) ) {
                      sum += (double)0.4628645156250000281;
                    } else {
                      sum += (double)0.4912838157894736657;
                    }
                  } else {
                    sum += (double)0.5295292916666667349;
                  }
                } else {
                  sum += (double)0.5491470952380952397;
                }
              } else {
                sum += (double)0.4301366428571428147;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7987500131130218506) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1444965898990631104) ) ) {
              sum += (double)0.2085006184210526359;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6796000003814697266) ) ) {
                sum += (double)0.2980638076923076696;
              } else {
                sum += (double)0.429243508064516166;
              }
            }
          } else {
            sum += (double)0.5089747500000000313;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1061999984085559845) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.910897254943847656) ) ) {
              sum += (double)0.5964124833333332987;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.874904632568359375) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5938065052032470703) ) ) {
                  sum += (double)0.6689123035714287235;
                } else {
                  sum += (double)0.7468744687499998536;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3392.0394287109375) ) ) {
                  sum += (double)0.6822985882352941012;
                } else {
                  sum += (double)0.6082817500000000654;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6062864959239959717) ) ) {
              sum += (double)0.531282799999999944;
            } else {
              sum += (double)0.6330195277777777019;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8327875137329101562) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
                sum += (double)0.8325936323529411487;
              } else {
                sum += (double)0.7810433333333333117;
              }
            } else {
              sum += (double)0.8617912500000000087;
            }
          } else {
            sum += (double)0.7305349868421051607;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6085674762725830078) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.338970422744750977) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9602659344673156738) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3831595033407211304) ) ) {
              sum += (double)0.3444443529411764238;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.509968489408493042) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5229650437831878662) ) ) {
                  sum += (double)0.492746065217391338;
                } else {
                  sum += (double)0.4457741785714285365;
                }
              } else {
                sum += (double)0.584257865384615438;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.788650929927825928) ) ) {
              sum += (double)0.3906974423076922109;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2764.2154541015625) ) ) {
                sum += (double)0.3420602763157894466;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1334.9664306640625) ) ) {
                  sum += (double)0.1968800833333332889;
                } else {
                  sum += (double)0.09603753999999999069;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3329.2513427734375) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.1566462516784668) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4154054969549179077) ) ) {
                sum += (double)0.3676966406249999597;
              } else {
                sum += (double)0.5327843749999999767;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.04964590072631836) ) ) {
                sum += (double)0.1322389074074074022;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.79848480224609375) ) ) {
                  sum += (double)0.3258860599999999774;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1047499999403953552) ) ) {
                    sum += (double)0.3148441250000000302;
                  } else {
                    sum += (double)0.1108218557692307454;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.005583435297012329) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02089999988675117493) ) ) {
                sum += (double)0.06485909374999998533;
              } else {
                sum += (double)0.1500688295454545296;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3908079862594604492) ) ) {
                sum += (double)0.01226958333333333373;
              } else {
                sum += (double)0.06987826562499999117;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.837719142436981201) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
            sum += (double)0.6341496770833333629;
          } else {
            sum += (double)0.4821888333333332888;
          }
        } else {
          sum += (double)0.2976678365384615721;
        }
      }
    }
  }
  return sum;
}
