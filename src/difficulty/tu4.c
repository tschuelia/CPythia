#include "header.h"
double predict_margin_unit4(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840035051107406616) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.950584888458251953) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2268904969096183777) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4672.392333984375) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01555000012740492821) ) ) {
            sum += (double)0.4185253269230769235;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.107750415802001953) ) ) {
              sum += (double)0.3064302763157894516;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7015.922607421875) ) ) {
                sum += (double)0.2543040795454545866;
              } else {
                sum += (double)0.1780406874999999889;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.560640811920166016) ) ) {
            sum += (double)0.2502345789473684468;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3152033090591430664) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1187609992921352386) ) ) {
                sum += (double)0.006035131578947368347;
              } else {
                sum += (double)0.03199712999999999863;
              }
            } else {
              sum += (double)0.1613756699999999988;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7543508708477020264) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
            sum += (double)0.4604138275862068586;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504119873046875) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1410.98321533203125) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2719189971685409546) ) ) {
                  sum += (double)0.2983202717391304493;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.663978457450866699) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06065000034868717194) ) ) {
                      sum += (double)0.4100846018518518044;
                    } else {
                      sum += (double)0.3690656547619047267;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3112400919198989868) ) ) {
                      sum += (double)0.461215992424242438;
                    } else {
                      sum += (double)0.3950306842105262284;
                    }
                  }
                }
              } else {
                sum += (double)0.3068927619047619459;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5705.28857421875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.80196046829223633) ) ) {
                  sum += (double)0.3525455277777778118;
                } else {
                  sum += (double)0.4188539700000000199;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.171111106872558594) ) ) {
                  sum += (double)0.2896028586956522211;
                } else {
                  sum += (double)0.1345875520833333117;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3266.2825927734375) ) ) {
            sum += (double)0.207750986842105273;
          } else {
            sum += (double)0.03560700925925925492;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2112234979867935181) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37857151031494141) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7795.3828125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008699999889358878136) ) ) {
              sum += (double)0.3370584374999999744;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1368450000882148743) ) ) {
                sum += (double)0.03953877380952380838;
              } else {
                sum += (double)0.1449318671874999798;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1088919974863529205) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4418.7197265625) ) ) {
                sum += (double)0.02049395833333333625;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.02857112884521484) ) ) {
                  sum += (double)0.002499999999999999618;
                } else {
                  sum += (double)0.003582607142857142154;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1374654993414878845) ) ) {
                sum += (double)0.1025142777777777736;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6327500045299530029) ) ) {
                  sum += (double)0.03467197115384616085;
                } else {
                  sum += (double)0.07725563461538460797;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4743999987840652466) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.44532966613769531) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20634.9921875) ) ) {
                sum += (double)0.1200300740740740946;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12398.7353515625) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09665000066161155701) ) ) {
                    sum += (double)0.02503795312500000161;
                  } else {
                    sum += (double)0.06619683333333334363;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2241999953985214233) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0886770002543926239) ) ) {
                      sum += (double)0.002500000000000000486;
                    } else {
                      sum += (double)0.01057237735849056448;
                    }
                  } else {
                    sum += (double)0.02437216666666667392;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1759434938430786133) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.93333244323730469) ) ) {
                  sum += (double)0.02400362903225805936;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26467.46484375) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)406.5911865234375) ) ) {
                      sum += (double)0.01454501538461537916;
                    } else {
                      sum += (double)0.004964508620689656211;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20845.64453125) ) ) {
                      sum += (double)0.005286041666666667187;
                    } else {
                      sum += (double)0.002752738317757011041;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.136900000274181366) ) ) {
                  sum += (double)0.003710733333333333505;
                } else {
                  sum += (double)0.04381393749999999004;
                }
              }
            }
          } else {
            sum += (double)0.1386386562500000197;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2688108831644058228) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1092226319015026093) ) ) {
            sum += (double)0.1295288846153846152;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6150.7548828125) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13700.22119140625) ) ) {
                sum += (double)0.3655296184210526378;
              } else {
                sum += (double)0.2646780227272727548;
              }
            } else {
              sum += (double)0.1620379605263158052;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8536425232887268066) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2242.1334228515625) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7101920843124389648) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.34814834594726562) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05164999887347221375) ) ) {
                    sum += (double)0.06196955555555554856;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2277275025844573975) ) ) {
                      sum += (double)0.1100150476190476095;
                    } else {
                      sum += (double)0.2465470833333333056;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3601000010967254639) ) ) {
                    sum += (double)0.04415832407407407206;
                  } else {
                    sum += (double)0.1109861470588235088;
                  }
                }
              } else {
                sum += (double)0.2871868000000000198;
              }
            } else {
              sum += (double)0.01580647500000000386;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06760000064969062805) ) ) {
              sum += (double)0.1234727857142857016;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-32560.2060546875) ) ) {
                sum += (double)0.084138434782608712;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2665770053863525391) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5575.203857421875) ) ) {
                    sum += (double)0.02341115384615384543;
                  } else {
                    sum += (double)0.003217940000000000297;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1732999980449676514) ) ) {
                    sum += (double)0.07581235526315788231;
                  } else {
                    sum += (double)0.02272928030303030325;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4932367950677871704) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5801205039024353027) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1152.593994140625) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4872760027647018433) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8185499906539916992) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.28435993194580078) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7474000155925750732) ) ) {
                      sum += (double)0.4827845335820895589;
                    } else {
                      sum += (double)0.5590717500000000895;
                    }
                  } else {
                    sum += (double)0.6078755588235293938;
                  }
                } else {
                  sum += (double)0.4132644791666666984;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.115455865859985352) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5511125028133392334) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09898508712649345398) ) ) {
                      sum += (double)0.5865699999999999248;
                    } else {
                      sum += (double)0.6350660882352939796;
                    }
                  } else {
                    sum += (double)0.535840592105263136;
                  }
                } else {
                  sum += (double)0.4789542142857143303;
                }
              }
            } else {
              sum += (double)0.3879603026315789349;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7984499931335449219) ) ) {
              sum += (double)0.5790805125000000331;
            } else {
              sum += (double)0.6789534868421053249;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3642650842666625977) ) ) {
            sum += (double)0.3857344204545454236;
          } else {
            sum += (double)0.2545816136363636684;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.767405033111572266) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6509999930858612061) ) ) {
            sum += (double)0.6753166704545454646;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
              sum += (double)0.7379176911764705471;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8526764810085296631) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04965000040829181671) ) ) {
                  sum += (double)0.8347246923076923064;
                } else {
                  sum += (double)0.7741219807692308885;
                }
              } else {
                sum += (double)0.8879303750000001605;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7972499728202819824) ) ) {
            sum += (double)0.7151830555555556135;
          } else {
            sum += (double)0.5109773250000000377;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5487999916076660156) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.300000190734863281) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3208.8759765625) ) ) {
            sum += (double)0.421387181034482694;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.222748637199401855) ) ) {
              sum += (double)0.3728178749999999653;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1600.522216796875) ) ) {
                sum += (double)0.25453244444444445;
              } else {
                sum += (double)0.1157088999999999618;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.18922996520996094) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.339400827884674072) ) ) {
              sum += (double)0.1472144218750000011;
            } else {
              sum += (double)0.03265730681818181796;
            }
          } else {
            sum += (double)0.2582517068965516915;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6908099949359893799) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.260200008749961853) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.23130345344543457) ) ) {
              sum += (double)0.446163199999999982;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1752.54638671875) ) ) {
                sum += (double)0.3904936730769231756;
              } else {
                sum += (double)0.1110823289473684139;
              }
            }
          } else {
            sum += (double)0.5059283249999999565;
          }
        } else {
          sum += (double)0.5621110312500000594;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.385401993989944458) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.46775054931640625) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.05718076229095459) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2316284999251365662) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.41836404800415039) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1473924964666366577) ) ) {
              sum += (double)0.2303002884615384105;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4918.664306640625) ) ) {
                sum += (double)0.3788622500000000115;
              } else {
                sum += (double)0.2882350326086957071;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3205.061767578125) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1051000021398067474) ) ) {
                sum += (double)0.2559569354838709954;
              } else {
                sum += (double)0.09830694047619047138;
              }
            } else {
              sum += (double)0.02602532758620689293;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003249999950639903545) ) ) {
            sum += (double)0.5406456625000000127;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.122619152069091797) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2078.94024658203125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2760.055419921875) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.354010105133056641) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07084999978542327881) ) ) {
                      sum += (double)0.3940130803571428308;
                    } else {
                      sum += (double)0.3347094772727272072;
                    }
                  } else {
                    sum += (double)0.4219050333333333458;
                  }
                } else {
                  sum += (double)0.462753923076923035;
                }
              } else {
                sum += (double)0.3464712500000000084;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5255.547607421875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.58977603912353516) ) ) {
                  sum += (double)0.3319572708333333177;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.351008892059326172) ) ) {
                    sum += (double)0.4384771153846153124;
                  } else {
                    sum += (double)0.3829699821428571016;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3676506131887435913) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3254535049200057983) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07059999927878379822) ) ) {
                      sum += (double)0.2922367099999999551;
                    } else {
                      sum += (double)0.2133841166666666789;
                    }
                  } else {
                    sum += (double)0.3736239705882353213;
                  }
                } else {
                  sum += (double)0.1594350000000000211;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.039836645126342773) ) ) {
          sum += (double)0.1824363461538461295;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3011.1070556640625) ) ) {
            sum += (double)0.08370509615384615076;
          } else {
            sum += (double)0.02616251851851851898;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1925434991717338562) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.94400691986083984) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01784999947994947433) ) ) {
            sum += (double)0.2196551250000000066;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2916999906301498413) ) ) {
              sum += (double)0.01520052500000000119;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1357389986515045166) ) ) {
                sum += (double)0.06752764999999998075;
              } else {
                sum += (double)0.132685714285714268;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08984800055623054504) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07210149988532066345) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04427749849855899811) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.50486946105957031) ) ) {
                    sum += (double)0.006134500000000000196;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                      sum += (double)0.002571877192982457896;
                    } else {
                      sum += (double)0.003719809523809524537;
                    }
                  }
                } else {
                  sum += (double)0.009434437500000000115;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06275549903512001038) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)122.2535018920898438) ) ) {
                    sum += (double)0.0132591785714285728;
                  } else {
                    sum += (double)0.005073342105263159083;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.82097244262695312) ) ) {
                    sum += (double)0.004775357142857142821;
                  } else {
                    sum += (double)0.002867647058823529025;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07996099814772605896) ) ) {
                sum += (double)0.03182396428571428876;
              } else {
                sum += (double)0.003934333333333333953;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.06666660308837891) ) ) {
              sum += (double)0.1063018571428571424;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10292.85986328125) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.89281749725341797) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1685685068368911743) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-27761.537109375) ) ) {
                      sum += (double)0.09893319642857142937;
                    } else {
                      sum += (double)0.04253769485294116998;
                    }
                  } else {
                    sum += (double)0.1308155294117647194;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4053499996662139893) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1417990028858184814) ) ) {
                      sum += (double)0.007768022727272728446;
                    } else {
                      sum += (double)0.02995385416666665815;
                    }
                  } else {
                    sum += (double)0.06868967857142858902;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.83541679382324219) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4344.183349609375) ) ) {
                    sum += (double)0.01436455000000000023;
                  } else {
                    sum += (double)0.04661405000000000409;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3218000084161758423) ) ) {
                    sum += (double)0.005756450000000000629;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4555209577083587646) ) ) {
                      sum += (double)0.01107331249999999982;
                    } else {
                      sum += (double)0.02639436666666666875;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4374230951070785522) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3165185004472732544) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09715000167489051819) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1944218575954437256) ) ) {
                sum += (double)0.2139971944444444274;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4738499969244003296) ) ) {
                  sum += (double)0.121268132352941177;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2772086262702941895) ) ) {
                    sum += (double)0.07878079411764705997;
                  } else {
                    sum += (double)0.04330416666666666442;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.58620643615722656) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2567369937896728516) ) ) {
                  sum += (double)0.1817256562500000061;
                } else {
                  sum += (double)0.3718639531250000352;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.647600024938583374) ) ) {
                  sum += (double)0.2097224027777777611;
                } else {
                  sum += (double)0.08471710714285715649;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.30839157104492188) ) ) {
              sum += (double)0.3629711388888888779;
            } else {
              sum += (double)0.2272319642857142663;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4038500040769577026) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.02380943298339844) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.119865596294403076) ) ) {
                sum += (double)0.1509287777777777728;
              } else {
                sum += (double)0.02854228124999999561;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1824499964714050293) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1643000021576881409) ) ) {
                  sum += (double)0.1154013684210526414;
                } else {
                  sum += (double)0.02282450000000000104;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8626604378223419189) ) ) {
                  sum += (double)0.01830495000000000039;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5137.2138671875) ) ) {
                    sum += (double)0.008060015625000001641;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1693499982357025146) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.32514762878417969) ) ) {
                sum += (double)0.07899666176470587775;
              } else {
                sum += (double)0.02620253750000000117;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.59707832336425781) ) ) {
                sum += (double)0.2316093214285714352;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-27790.0009765625) ) ) {
                  sum += (double)0.1760900312499999731;
                } else {
                  sum += (double)0.0726640500000000078;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6215465068817138672) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12297296524047852) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4764709919691085815) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8629499971866607666) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08444999903440475464) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.14748430252075195) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2320.6640625) ) ) {
                    sum += (double)0.4986224722222222239;
                  } else {
                    sum += (double)0.4316059666666667849;
                  }
                } else {
                  sum += (double)0.5639616666666668054;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7224000096321105957) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.622750014066696167) ) ) {
                    sum += (double)0.4288393125000000139;
                  } else {
                    sum += (double)0.5112629874999999879;
                  }
                } else {
                  sum += (double)0.3550115441176470155;
                }
              }
            } else {
              sum += (double)0.318771166666666661;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02249999996274709702) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7707499861717224121) ) ) {
                sum += (double)0.5904382083333332698;
              } else {
                sum += (double)0.679668526785714322;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5805689990520477295) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08640000224113464355) ) ) {
                  sum += (double)0.4817091634615385254;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6584.76708984375) ) ) {
                    sum += (double)0.501393553571428674;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.94097232818603516) ) ) {
                      sum += (double)0.5479448571428570114;
                    } else {
                      sum += (double)0.6247594125000001108;
                    }
                  }
                }
              } else {
                sum += (double)0.6297744318181818235;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.03917026519775391) ) ) {
            sum += (double)0.3327966931818182039;
          } else {
            sum += (double)0.1871729868421052323;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.36971735954284668) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7556720077991485596) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.766260385513305664) ) ) {
              sum += (double)0.7061997708333332957;
            } else {
              sum += (double)0.7539981249999999635;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6911095380783081055) ) ) {
              sum += (double)0.8794756944444445113;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8440335094928741455) ) ) {
                sum += (double)0.7891965555555554568;
              } else {
                sum += (double)0.841917096153846134;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7694000005722045898) ) ) {
            sum += (double)0.7050023125000001167;
          } else {
            sum += (double)0.6153584861111111026;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.127567529678344727) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2624.4490966796875) ) ) {
            sum += (double)0.4069392500000000856;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.936561226844787598) ) ) {
              sum += (double)0.2927328666666667023;
            } else {
              sum += (double)0.1810527500000000123;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1895.50225830078125) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2190499976277351379) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1554000005125999451) ) ) {
                sum += (double)0.2280180312499999751;
              } else {
                sum += (double)0.03893960294117646687;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.06516551971435547) ) ) {
                sum += (double)0.3457339874999999507;
              } else {
                sum += (double)0.1886145156250000066;
              }
            }
          } else {
            sum += (double)0.06067441346153845672;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
          sum += (double)0.5360531562500000513;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
              sum += (double)0.412329142857142894;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02964999992400407791) ) ) {
                sum += (double)0.3149736249999999793;
              } else {
                sum += (double)0.1426970588235294268;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1208500005304813385) ) ) {
              sum += (double)0.4859827045454546135;
            } else {
              sum += (double)0.3481490681818182331;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.39064750075340271) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.645782470703125) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1856.134033203125) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.05718076229095459) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1706480011343955994) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4989499896764755249) ) ) {
              sum += (double)0.2761744545454545285;
            } else {
              sum += (double)0.07419713043478258496;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
              sum += (double)0.5368670760869564962;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.283674955368041992) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2712945044040679932) ) ) {
                  sum += (double)0.3449161018518517863;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3917071223258972168) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3122.8629150390625) ) ) {
                      sum += (double)0.4266239214285714176;
                    } else {
                      sum += (double)0.470881083333333339;
                    }
                  } else {
                    sum += (double)0.3757040740740740792;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3301695138216018677) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5278.861572265625) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441440001130104065) ) ) {
                      sum += (double)0.2839807173913043714;
                    } else {
                      sum += (double)0.3683840416666666062;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3327.4100341796875) ) ) {
                      sum += (double)0.209978083333333343;
                    } else {
                      sum += (double)0.3288229374999999677;
                    }
                  }
                } else {
                  sum += (double)0.4050476666666666392;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.48734593391418457) ) ) {
            sum += (double)0.2631904374999999852;
          } else {
            sum += (double)0.06163165625000000675;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.556390762329101562) ) ) {
            sum += (double)0.08370283653846152805;
          } else {
            sum += (double)0.01889994117647058811;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5453791022300720215) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.873949646949768066) ) ) {
              sum += (double)0.2558811874999999958;
            } else {
              sum += (double)0.4276081607142856456;
            }
          } else {
            sum += (double)0.07696643518518518634;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2555190026760101318) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.81422901153564453) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4321.652587890625) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
              sum += (double)0.3290055681818181421;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2190245017409324646) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1364340037107467651) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.82393455505371094) ) ) {
                    sum += (double)0.03903018269230768694;
                  } else {
                    sum += (double)0.008850966666666666358;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.41756296157836914) ) ) {
                    sum += (double)0.198817812500000024;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13728.29248046875) ) ) {
                      sum += (double)0.1851469821428571583;
                    } else {
                      sum += (double)0.05946482407407405885;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2085999995470046997) ) ) {
                  sum += (double)0.162118178571428545;
                } else {
                  sum += (double)0.2386536176470588078;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1620704978704452515) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09962650015950202942) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2174.124755859375) ) ) {
                  sum += (double)0.00656947368421052693;
                } else {
                  sum += (double)0.003012875000000000362;
                }
              } else {
                sum += (double)0.01794864705882353098;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2582618892192840576) ) ) {
                sum += (double)0.08330335294117645339;
              } else {
                sum += (double)0.02975271428571428511;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4677499979734420776) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.38571453094482422) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8082.197509765625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2182969972491264343) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4880316108465194702) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24603.908203125) ) ) {
                      sum += (double)0.1029972499999999985;
                    } else {
                      sum += (double)0.01783813068181817896;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6228049099445343018) ) ) {
                      sum += (double)0.1526436785714285482;
                    } else {
                      sum += (double)0.02647842045454545587;
                    }
                  }
                } else {
                  sum += (double)0.1476784423076922814;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4884.9169921875) ) ) {
                  sum += (double)0.01177339999999999984;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1099999994039535522) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1360955014824867249) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.005909766666666667508;
                    }
                  } else {
                    sum += (double)0.006087928571428571391;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1951034963130950928) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1916000023484230042) ) ) {
                  sum += (double)0.02980991304347826304;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07462450116872787476) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900999993085861206) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.0054384444444444454;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05625000037252902985) ) ) {
                      sum += (double)0.003774107142857143719;
                    } else {
                      sum += (double)0.01812061567164178003;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-32707.53125) ) ) {
                  sum += (double)0.06110335937499998538;
                } else {
                  sum += (double)0.007174694444444445346;
                }
              }
            }
          } else {
            sum += (double)0.08388263888888888853;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7498501837253570557) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2815.50634765625) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.40661907196044922) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07324999943375587463) ) ) {
                sum += (double)0.1797541315789473737;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4398721009492874146) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.09540176391601562) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.76339292526245117) ) ) {
                      sum += (double)0.4367862500000000425;
                    } else {
                      sum += (double)0.3951650468749999812;
                    }
                  } else {
                    sum += (double)0.3226449358974358139;
                  }
                } else {
                  sum += (double)0.2475478448275862109;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3158339858055114746) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.242250002920627594) ) ) {
                  sum += (double)0.05653768333333333146;
                } else {
                  sum += (double)0.09838566666666666294;
                }
              } else {
                sum += (double)0.1841094062500000239;
              }
            }
          } else {
            sum += (double)0.0757187569444444375;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3368.845458984375) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2992160022258758545) ) ) {
              sum += (double)0.1345619583333333147;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.30745315551757812) ) ) {
                sum += (double)0.06879086249999999403;
              } else {
                sum += (double)0.03014900000000000219;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.186517536640167236) ) ) {
              sum += (double)0.01335732142857143021;
            } else {
              sum += (double)0.003091250000000000248;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6096212565898895264) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5795139968395233154) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1117.18463134765625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.878899991512298584) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08444999903440475464) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.33391666412353516) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5245999991893768311) ) ) {
                      sum += (double)0.4528019499999999531;
                    } else {
                      sum += (double)0.5382453750000000259;
                    }
                  } else {
                    sum += (double)0.5977316666666665501;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1251984946429729462) ) ) {
                    sum += (double)0.4451137500000000302;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4493644982576370239) ) ) {
                      sum += (double)0.4783498699999999548;
                    } else {
                      sum += (double)0.532846324999999954;
                    }
                  }
                }
              } else {
                sum += (double)0.4273802403846153064;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09691703692078590393) ) ) {
                sum += (double)0.6509940000000000726;
              } else {
                sum += (double)0.5755285099999999376;
              }
            }
          } else {
            sum += (double)0.3317128571428571426;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.75583219528198242) ) ) {
            sum += (double)0.2403565113636363659;
          } else {
            sum += (double)0.3772073600000000471;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.733775019645690918) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.80148696899414062) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.681208610534667969) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8266000151634216309) ) ) {
                sum += (double)0.6612459722222222558;
              } else {
                sum += (double)0.7454413541666666809;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7279999852180480957) ) ) {
                sum += (double)0.6677507395833334192;
              } else {
                sum += (double)0.6071731764705881051;
              }
            }
          } else {
            sum += (double)0.5055800535714285449;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8554465174674987793) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.799142986536026001) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.10443019866943359) ) ) {
                  sum += (double)0.8092727142857143452;
                } else {
                  sum += (double)0.8366058281249999506;
                }
              } else {
                sum += (double)0.765021416666666676;
              }
            } else {
              sum += (double)0.8737768750000000084;
            }
          } else {
            sum += (double)0.7346931029411767344;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.883204728364944458) ) ) {
          sum += (double)0.3436443787878788458;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.181261062622070312) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2351.81781005859375) ) ) {
              sum += (double)0.379333199999999926;
            } else {
              sum += (double)0.1816899224137931146;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09050000086426734924) ) ) {
              sum += (double)0.2259589843749999494;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3160.5521240234375) ) ) {
                sum += (double)0.1448477941176470607;
              } else {
                sum += (double)0.05172797368421053199;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1588.35455322265625) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.064631521701812744) ) ) {
            sum += (double)0.6105758804347827251;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03309999965131282806) ) ) {
              sum += (double)0.4489632500000000359;
            } else {
              sum += (double)0.3749110499999999679;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.070384562015533447) ) ) {
            sum += (double)0.4353798624999999367;
          } else {
            sum += (double)0.1183178472222222166;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4219294935464859009) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.334890365600585938) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9281978607177734375) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2932339906692504883) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2334.5816650390625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1375280022621154785) ) ) {
              sum += (double)0.1795363999999999849;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.773946285247802734) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4588000029325485229) ) ) {
                  sum += (double)0.3392203437499999308;
                } else {
                  sum += (double)0.4162395476190475785;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4393.5703125) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
                    sum += (double)0.4230033281250000221;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441440001130104065) ) ) {
                      sum += (double)0.2703901887755102429;
                    } else {
                      sum += (double)0.3795496500000000162;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03324999939650297165) ) ) {
                    sum += (double)0.2720845441176470425;
                  } else {
                    sum += (double)0.1542976842105263091;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.78417873382568359) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.827639579772949219) ) ) {
                sum += (double)0.2387512656250000143;
              } else {
                sum += (double)0.1648632166666667009;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.600000143051147461) ) ) {
                sum += (double)0.1074845147058823558;
              } else {
                sum += (double)0.02335673684210526693;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5297627151012420654) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003400000045076012611) ) ) {
              sum += (double)0.5172826153846153963;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7660000026226043701) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3416135013103485107) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.17445063591003418) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.609243631362915039) ) ) {
                      sum += (double)0.3582836249999999945;
                    } else {
                      sum += (double)0.4255401875000000556;
                    }
                  } else {
                    sum += (double)0.3244498035714285522;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.394444003701210022) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3646669983863830566) ) ) {
                      sum += (double)0.4428216041666666047;
                    } else {
                      sum += (double)0.5372146388888888735;
                    }
                  } else {
                    sum += (double)0.3809449473684210496;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1315198317170143127) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.785714387893676758) ) ) {
                    sum += (double)0.3295558749999999981;
                  } else {
                    sum += (double)0.4306539499999999521;
                  }
                } else {
                  sum += (double)0.2036974821428571558;
                }
              }
            }
          } else {
            sum += (double)0.2390098333333333658;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2015.69000244140625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912790030241012573) ) ) {
            sum += (double)0.0908869907407407196;
          } else {
            sum += (double)0.2928742045454545972;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.2460784912109375) ) ) {
            sum += (double)0.05390061250000000026;
          } else {
            sum += (double)0.0226212833333333356;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.64553022384643555) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4784.32470703125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
              sum += (double)0.2891187631578946982;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1598075032234191895) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.118551500141620636) ) ) {
                  sum += (double)0.03603424999999999684;
                } else {
                  sum += (double)0.07679089999999999527;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2158499956130981445) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6359000205993652344) ) ) {
                    sum += (double)0.1331589285714285531;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2118560001254081726) ) ) {
                      sum += (double)0.2497814833333333318;
                    } else {
                      sum += (double)0.2003532500000000105;
                    }
                  }
                } else {
                  sum += (double)0.09676962500000001188;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.125330999493598938) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6558499932289123535) ) ) {
                sum += (double)0.006692031250000001798;
              } else {
                sum += (double)0.02198450000000000057;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1982580050826072693) ) ) {
                sum += (double)0.1066833571428571353;
              } else {
                sum += (double)0.02747239062499998857;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07196350023150444031) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1959999948740005493) ) ) {
              sum += (double)0.03968528571428570767;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03464949876070022583) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-52465.236328125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-257507.0390625) ) ) {
                    sum += (double)0.002499999999999999618;
                  } else {
                    sum += (double)0.006240647058823529589;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.09615325927734375) ) ) {
                    sum += (double)0.003061233333333332734;
                  } else {
                    sum += (double)0.002500000000000001353;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)56.44202423095703125) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21111.7900390625) ) ) {
                    sum += (double)0.013674276315789477;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1410000026226043701) ) ) {
                      sum += (double)0.003275076923076922653;
                    } else {
                      sum += (double)0.005957624999999999379;
                    }
                  }
                } else {
                  sum += (double)0.002811026315789473453;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8554.18994140625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60548496246337891) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-31518.50390625) ) ) {
                  sum += (double)0.2321685624999999809;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2650371789932250977) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2080785185098648071) ) ) {
                      sum += (double)0.07717449999999997923;
                    } else {
                      sum += (double)0.1801087083333333394;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12818.9296875) ) ) {
                      sum += (double)0.0653489696969697248;
                    } else {
                      sum += (double)0.02777045833333333102;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.156325042247772217) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.237299993634223938) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2029670029878616333) ) ) {
                      sum += (double)0.01514327611940297948;
                    } else {
                      sum += (double)0.04081441666666666551;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3031999915838241577) ) ) {
                      sum += (double)0.1124764062499999939;
                    } else {
                      sum += (double)0.03517659146341462623;
                    }
                  }
                } else {
                  sum += (double)0.1228317499999999757;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5491.355224609375) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6812.608154296875) ) ) {
                  sum += (double)0.01079558333333333238;
                } else {
                  sum += (double)0.03316796874999999867;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3732500076293945312) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2039984986186027527) ) ) {
                    sum += (double)0.002500000000000000486;
                  } else {
                    sum += (double)0.003995708333333334618;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4555209577083587646) ) ) {
                    sum += (double)0.006579980769230770257;
                  } else {
                    sum += (double)0.02242074999999999971;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7498501837253570557) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.37948799133300781) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4002500027418136597) ) ) {
              sum += (double)0.4685883529411764559;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06284999847412109375) ) ) {
                sum += (double)0.08076432758620687158;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.26329803466796875) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3201293796300888062) ) ) {
                    sum += (double)0.4092137692307691865;
                  } else {
                    sum += (double)0.2666116447368421793;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3591240048408508301) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.90323448181152344) ) ) {
                      sum += (double)0.3208329142857142546;
                    } else {
                      sum += (double)0.2240443928571428656;
                    }
                  } else {
                    sum += (double)0.1594128289473684401;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)38.66111183166503906) ) ) {
              sum += (double)0.1446546153846153815;
            } else {
              sum += (double)0.06658928125000000697;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20319.16015625) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)182.6666641235351562) ) ) {
              sum += (double)0.2376641617647059224;
            } else {
              sum += (double)0.04257082894736842482;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2505500093102455139) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1498500034213066101) ) ) {
                sum += (double)0.01932009677419354449;
              } else {
                sum += (double)0.08173332142857142601;
              }
            } else {
              sum += (double)0.01506391071428571371;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4212666600942611694) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5860525071620941162) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.32604999840259552) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1919.49127197265625) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3568.2001953125) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1346563249826431274) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.314646482467651367) ) ) {
                    sum += (double)0.4930451742424242778;
                  } else {
                    sum += (double)0.4039761111111111469;
                  }
                } else {
                  sum += (double)0.5609722583333333068;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.50302982330322266) ) ) {
                  sum += (double)0.5132233035714286462;
                } else {
                  sum += (double)0.6336377499999999996;
                }
              }
            } else {
              sum += (double)0.4267543275862068497;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5561749935150146484) ) ) {
              sum += (double)0.6749692812500001082;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1036430299282073975) ) ) {
                sum += (double)0.6138131805555555598;
              } else {
                sum += (double)0.5181394166666666301;
              }
            }
          }
        } else {
          sum += (double)0.3479464444444444471;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.767405033111572266) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7414509952068328857) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.074468135833740234) ) ) {
              sum += (double)0.6598746666666666094;
            } else {
              sum += (double)0.722765193548387086;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06500000134110450745) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8979499936103820801) ) ) {
                sum += (double)0.8271278749999999569;
              } else {
                sum += (double)0.8708991718749999889;
              }
            } else {
              sum += (double)0.7529648970588234125;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.76804256439208984) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1223000027239322662) ) ) {
              sum += (double)0.6998648100000001149;
            } else {
              sum += (double)0.6378899464285715526;
            }
          } else {
            sum += (double)0.4893143382352941329;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.883838415145874023) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7808734774589538574) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468085110187530518) ) ) {
            sum += (double)0.4904765000000000374;
          } else {
            sum += (double)0.6702351785714286692;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5139805078506469727) ) ) {
            sum += (double)0.2906364705882353849;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1153999976813793182) ) ) {
                sum += (double)0.4684494500000001005;
              } else {
                sum += (double)0.4234022840909090757;
              }
            } else {
              sum += (double)0.3490290909090909;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3572.1585693359375) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.67444467544555664) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4960179924964904785) ) ) {
              sum += (double)0.4020677638888888739;
            } else {
              sum += (double)0.5604772031249999342;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08200000040233135223) ) ) {
              sum += (double)0.4381914038461538485;
            } else {
              sum += (double)0.1523924827586206898;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1112.396484375) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.85676383972167969) ) ) {
              sum += (double)0.1433572999999999653;
            } else {
              sum += (double)0.3104147499999999615;
            }
          } else {
            sum += (double)0.03960360999999999743;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12549018859863281) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2316309958696365356) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4890.701171875) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999970197677612) ) ) {
            sum += (double)0.3385250000000000203;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12529.08203125) ) ) {
              sum += (double)0.3144799868421053191;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6140.892822265625) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8457.9970703125) ) ) {
                  sum += (double)0.1597631250000000058;
                } else {
                  sum += (double)0.05591220000000000218;
                }
              } else {
                sum += (double)0.2469829732142856948;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1251070015132427216) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1035130023956298828) ) ) {
              sum += (double)0.007289185185185186738;
            } else {
              sum += (double)0.05302276785714286206;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2163869664072990417) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2754.225830078125) ) ) {
                sum += (double)0.09974673529411763606;
              } else {
                sum += (double)0.05324279999999999291;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3628500103950500488) ) ) {
                sum += (double)0.1203353088235293994;
              } else {
                sum += (double)0.2513502159090909571;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7491518259048461914) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3218879997730255127) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.122619152069091797) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1961.2425537109375) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4830499887466430664) ) ) {
                  sum += (double)0.3629075769230769022;
                } else {
                  sum += (double)0.4199852115384615225;
                }
              } else {
                sum += (double)0.2973417916666666327;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009349999949336051941) ) ) {
                sum += (double)0.4013913676470588499;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1760499998927116394) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1340468674898147583) ) ) {
                    sum += (double)0.3083983194444444575;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.425795555114746094) ) ) {
                      sum += (double)0.2320126388888888169;
                    } else {
                      sum += (double)0.1491065299999999871;
                    }
                  }
                } else {
                  sum += (double)0.3377880862068965429;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3855389952659606934) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2302553355693817139) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6957499980926513672) ) ) {
                  sum += (double)0.504854394736842238;
                } else {
                  sum += (double)0.4234436304347827251;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5972000062465667725) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5218223929405212402) ) ) {
                    sum += (double)0.4447812236842105249;
                  } else {
                    sum += (double)0.3370341911764706544;
                  }
                } else {
                  sum += (double)0.2906067124999999751;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3950494974851608276) ) ) {
                sum += (double)0.560348474999999957;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.90682029724121094) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.252881050109863281) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.860465049743652344) ) ) {
                      sum += (double)0.46194389583333334;
                    } else {
                      sum += (double)0.5370580760869564374;
                    }
                  } else {
                    sum += (double)0.4179356363636363425;
                  }
                } else {
                  sum += (double)0.3686342413793102235;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2914929986000061035) ) ) {
              sum += (double)0.1464988522727272702;
            } else {
              sum += (double)0.345747352272727293;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.965034961700439453) ) ) {
              sum += (double)0.1640338749999999679;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3787394911050796509) ) ) {
                sum += (double)0.01325530434782608812;
              } else {
                sum += (double)0.06486090384615383897;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1050034984946250916) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.12853145599365234) ) ) {
          sum += (double)0.1479880892857142471;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06727499887347221375) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.31564903259277344) ) ) {
                sum += (double)0.009093442307692307588;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1559000015258789062) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02583499997854232788) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.3635482788085938) ) ) {
                      sum += (double)0.004658596153846154657;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.4647064208984375) ) ) {
                    sum += (double)0.01105943750000000156;
                  } else {
                    sum += (double)0.002839023809523809078;
                  }
                }
              }
            } else {
              sum += (double)0.009755557692307691847;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005550000118091702461) ) ) {
              sum += (double)0.08009536764705880996;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7397499978542327881) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1228999979794025421) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.448550000786781311) ) ) {
                    sum += (double)0.01743121666666666916;
                  } else {
                    sum += (double)0.009366482142857143409;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.24047470092773438) ) ) {
                    sum += (double)0.01058805555555555541;
                  } else {
                    sum += (double)0.00380486666666666638;
                  }
                }
              } else {
                sum += (double)0.04134505882352940836;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4288852214813232422) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2277275025844573975) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0327000003308057785) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8089.1904296875) ) ) {
                sum += (double)0.3401004270833333787;
              } else {
                sum += (double)0.09659551923076922786;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.209712497889995575) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.63008689880371094) ) ) {
                  sum += (double)0.1549115333333333233;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-36036.611328125) ) ) {
                    sum += (double)0.1178585147058823501;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.80967807769775391) ) ) {
                      sum += (double)0.02976536923076922303;
                    } else {
                      sum += (double)0.007132527777777778431;
                    }
                  }
                }
              } else {
                sum += (double)0.1339049285714285498;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02904999908059835434) ) ) {
              sum += (double)0.05959562499999998542;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.06503009796142578) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9417.5849609375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.13317298889160156) ) ) {
                    sum += (double)0.413473937500000055;
                  } else {
                    sum += (double)0.2774779210526315265;
                  }
                } else {
                  sum += (double)0.2237412187499999705;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6742999851703643799) ) ) {
                  sum += (double)0.258133448275862043;
                } else {
                  sum += (double)0.1148865795454545036;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.328134000301361084) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6252499818801879883) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1737169995903968811) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)108.8245086669921875) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.9793243408203125) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.625) ) ) {
                      sum += (double)0.08937147500000000577;
                    } else {
                      sum += (double)0.03449489999999999501;
                    }
                  } else {
                    sum += (double)0.123741899999999988;
                  }
                } else {
                  sum += (double)0.0110642142857142866;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441449984908103943) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36309528350830078) ) ) {
                    sum += (double)0.04145251136363636152;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5273.190673828125) ) ) {
                      sum += (double)0.01708781578947367666;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2739209979772567749) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.12240028381347656) ) ) {
                      sum += (double)0.1322503214285714046;
                    } else {
                      sum += (double)0.05181811666666666372;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16668.33544921875) ) ) {
                      sum += (double)0.0569185714285714156;
                    } else {
                      sum += (double)0.02761643367346937328;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.21551704406738281) ) ) {
                sum += (double)0.1512059107142857128;
              } else {
                sum += (double)0.05819740909090908437;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3564.6893310546875) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7740142941474914551) ) ) {
                sum += (double)0.2386077763157894438;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08275000005960464478) ) ) {
                  sum += (double)0.1636984038461538338;
                } else {
                  sum += (double)0.05402603999999998352;
                }
              }
            } else {
              sum += (double)0.01443327999999999972;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5796644985675811768) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.578846096992492676) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.889307260513305664) ) ) {
              sum += (double)0.4809795468749999969;
            } else {
              sum += (double)0.5693501527777777849;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05434999987483024597) ) ) {
              sum += (double)0.3113584078947367884;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4843115061521530151) ) ) {
                sum += (double)0.5786355892857144578;
              } else {
                sum += (double)0.4350427000000000599;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08599999919533729553) ) ) {
            sum += (double)0.6448399249999998695;
          } else {
            sum += (double)0.5153333392857143425;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8322224915027618408) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.638506770133972168) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.367918252944946289) ) ) {
                sum += (double)0.6275682058823530696;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01765000075101852417) ) ) {
                  sum += (double)0.7032463260869564747;
                } else {
                  sum += (double)0.7397838452380951502;
                }
              }
            } else {
              sum += (double)0.7969156749999999345;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7694000005722045898) ) ) {
              sum += (double)0.6834292812499999092;
            } else {
              sum += (double)0.5750876590909090869;
            }
          }
        } else {
          sum += (double)0.8598813303571432032;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7006689906120300293) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1110500022768974304) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.351531386375427246) ) ) {
            sum += (double)0.4336226944444445119;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1700.31976318359375) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.592886507511138916) ) ) {
                sum += (double)0.2407362884615384391;
              } else {
                sum += (double)0.3719091718749999997;
              }
            } else {
              sum += (double)0.09736599999999999422;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8670485317707061768) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5088259875774383545) ) ) {
              sum += (double)0.4417730625000000355;
            } else {
              sum += (double)0.5548008472222222265;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5454215109348297119) ) ) {
              sum += (double)0.2710891249999999864;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4623000025749206543) ) ) {
                sum += (double)0.3692746293103448818;
              } else {
                sum += (double)0.4809849027777777786;
              }
            }
          }
        }
      } else {
        sum += (double)0.6142902946428572264;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3856800049543380737) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.75378799438476562) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2553520053625106812) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4210.100830078125) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999970197677612) ) ) {
            sum += (double)0.4362527916666667505;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518170356750488281) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13023.40625) ) ) {
                sum += (double)0.3538330499999999823;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05549999885261058807) ) ) {
                  sum += (double)0.344933307692307678;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1454000025987625122) ) ) {
                    sum += (double)0.1674270599999999887;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.207699999213218689) ) ) {
                      sum += (double)0.3257793611111111098;
                    } else {
                      sum += (double)0.2119069423076922754;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6982499957084655762) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11133.29638671875) ) ) {
                  sum += (double)0.1265359000000000067;
                } else {
                  sum += (double)0.03073074999999999765;
                }
              } else {
                sum += (double)0.1990657177419354884;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.03071403503417969) ) ) {
            sum += (double)0.2504859900000000472;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1255454979836940765) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.51363563537597656) ) ) {
                sum += (double)0.02727457812500000064;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7958500087261199951) ) ) {
                  sum += (double)0.003156566666666666722;
                } else {
                  sum += (double)0.01086578125000000131;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1958375051617622375) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5823500156402587891) ) ) {
                  sum += (double)0.1755374285714285942;
                } else {
                  sum += (double)0.1072520681818181915;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.463235378265380859) ) ) {
                  sum += (double)0.126948046874999998;
                } else {
                  sum += (double)0.03447233333333333399;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999774154275656) ) ) {
            sum += (double)0.5539378181818183089;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.935222864151000977) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1442.0985107421875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3392730057239532471) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5722999870777130127) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.314434349536895752) ) ) {
                      sum += (double)0.4305954999999999644;
                    } else {
                      sum += (double)0.3705430431034481553;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06025000102818012238) ) ) {
                      sum += (double)0.3878268815789473467;
                    } else {
                      sum += (double)0.3012910147058823207;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3202214837074279785) ) ) {
                    sum += (double)0.496547333333333285;
                  } else {
                    sum += (double)0.4250288906249999887;
                  }
                }
              } else {
                sum += (double)0.2304742666666666218;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9533.19677734375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3360150009393692017) ) ) {
                  sum += (double)0.3593896833333332652;
                } else {
                  sum += (double)0.4538592105263157817;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1383499950170516968) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.37053585052490234) ) ) {
                    sum += (double)0.07197250000000000869;
                  } else {
                    sum += (double)0.2009793750000000434;
                  }
                } else {
                  sum += (double)0.3569924166666666454;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.417050838470458984) ) ) {
            sum += (double)0.1519890769230769212;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1571500003337860107) ) ) {
              sum += (double)0.01443166666666666556;
            } else {
              sum += (double)0.0717801944444444312;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2071124985814094543) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07216549664735794067) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.198299996554851532) ) ) {
            sum += (double)0.04091321874999998692;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7944134175777435303) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02213350031524896622) ) ) {
                sum += (double)0.002500000000000001353;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)205.3820648193359375) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23092.998046875) ) ) {
                    sum += (double)0.01012438000000000227;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.20454597473144531) ) ) {
                      sum += (double)0.007643633333333333529;
                    } else {
                      sum += (double)0.003144824324324324832;
                    }
                  }
                } else {
                  sum += (double)0.00295256578947368422;
                }
              }
            } else {
              sum += (double)0.01015278125000000121;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004500000068219378591) ) ) {
            sum += (double)0.207611407894736838;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4790999889373779297) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6838000118732452393) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-117964.01171875) ) ) {
                  sum += (double)0.06825312499999998395;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.35245323181152344) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2114000022411346436) ) ) {
                      sum += (double)0.01879877631578947411;
                    } else {
                      sum += (double)0.08226190789473684928;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9872.09423828125) ) ) {
                      sum += (double)0.02825774358974358219;
                    } else {
                      sum += (double)0.01048078089887639723;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.02445220947265625) ) ) {
                  sum += (double)0.1688747499999999901;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.73052787780761719) ) ) {
                    sum += (double)0.08430976923076921592;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2290500029921531677) ) ) {
                      sum += (double)0.01106763157894736886;
                    } else {
                      sum += (double)0.02842031666666666734;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.1554061911764705872;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4554503560066223145) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05975000001490116119) ) ) {
            sum += (double)0.08042608593750000257;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2536839991807937622) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2189177945256233215) ) ) {
                sum += (double)0.05004471875000000153;
              } else {
                sum += (double)0.1365912307692307703;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.71027374267578125) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7026999890804290771) ) ) {
                  sum += (double)0.3064191250000000144;
                } else {
                  sum += (double)0.251942760416666689;
                }
              } else {
                sum += (double)0.1881716842105263243;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6998.50341796875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.3970184326171875) ) ) {
              sum += (double)0.1776118796296296543;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1208000034093856812) ) ) {
                sum += (double)0.1531521346153846275;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4061000049114227295) ) ) {
                  sum += (double)0.01118558035714285748;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7218368649482727051) ) ) {
                    sum += (double)0.05784360526315789064;
                  } else {
                    sum += (double)0.101716670454545452;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1853500008583068848) ) ) {
              sum += (double)0.03755402499999999782;
            } else {
              sum += (double)0.009801058333333334538;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.604429781436920166) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6070390045642852783) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1926.77142333984375) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)59.90486335754394531) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999774154275656) ) ) {
                  sum += (double)0.62800931578947361;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05609999969601631165) ) ) {
                      sum += (double)0.5169267222222221347;
                    } else {
                      sum += (double)0.582070693181818255;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7153999805450439453) ) ) {
                      sum += (double)0.5048636453488373199;
                    } else {
                      sum += (double)0.4520123879310344872;
                    }
                  }
                }
              } else {
                sum += (double)0.3796913749999999976;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04080000147223472595) ) ) {
                sum += (double)0.3542784021739130429;
              } else {
                sum += (double)0.5264699333333332509;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08874613046646118164) ) ) {
              sum += (double)0.6569360499999999936;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5790629982948303223) ) ) {
                sum += (double)0.5555963636363635549;
              } else {
                sum += (double)0.5955899565217390723;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7070499956607818604) ) ) {
            sum += (double)0.2480058055555555696;
          } else {
            sum += (double)0.405490375000000014;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.52560997009277344) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.910897254943847656) ) ) {
              sum += (double)0.6542100625000000225;
            } else {
              sum += (double)0.718425615384615357;
            }
          } else {
            sum += (double)0.5975712934782607677;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1052500009536743164) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8328820168972015381) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.554700851440429688) ) ) {
                sum += (double)0.8124504318181819951;
              } else {
                sum += (double)0.7528537499999999882;
              }
            } else {
              sum += (double)0.8716509000000000063;
            }
          } else {
            sum += (double)0.7048258125000000929;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5458705127239227295) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.222748637199401855) ) ) {
          sum += (double)0.4080466617647058869;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.958333492279052734) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2679.48583984375) ) ) {
              sum += (double)0.3546488333333333576;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.436109498143196106) ) ) {
                sum += (double)0.07162848076923077068;
              } else {
                sum += (double)0.1428358157894736857;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4893674999475479126) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.39651966094970703) ) ) {
                sum += (double)0.03601694827586205544;
              } else {
                sum += (double)0.1073618750000000094;
              }
            } else {
              sum += (double)0.2141421184210526296;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.228425741195678711) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6699030101299285889) ) ) {
            sum += (double)0.3984438448275862132;
          } else {
            sum += (double)0.574568708333333289;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
            sum += (double)0.4262679259259258835;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.235600009560585022) ) ) {
              sum += (double)0.1644924705882352955;
            } else {
              sum += (double)0.3038024456521739025;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4583019912242889404) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.30757570266723633) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601300030946731567) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4325.9462890625) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1375280022621154785) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4812500029802322388) ) ) {
              sum += (double)0.225545316666666662;
            } else {
              sum += (double)0.0419960892857142859;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04449999891221523285) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01480000047013163567) ) ) {
                sum += (double)0.4038946527777777518;
              } else {
                sum += (double)0.3346465333333333292;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2220139950513839722) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.365909099578857422) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.49739837646484375) ) ) {
                    sum += (double)0.3419561818181818258;
                  } else {
                    sum += (double)0.2432545657894736868;
                  }
                } else {
                  sum += (double)0.1733262222222221871;
                }
              } else {
                sum += (double)0.1380639499999999908;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1684905067086219788) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3480076342821121216) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1081360019743442535) ) ) {
                sum += (double)0.003852399999999999748;
              } else {
                sum += (double)0.02589312499999999947;
              }
            } else {
              sum += (double)0.064432181818181819;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.453246831893920898) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7735500037670135498) ) ) {
                sum += (double)0.2466679821428571784;
              } else {
                sum += (double)0.1366259642857142464;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5557499974966049194) ) ) {
                sum += (double)0.1069607187499999751;
              } else {
                sum += (double)0.02842499999999999194;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9989084899425506592) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3206399977207183838) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009099999908357858658) ) ) {
              sum += (double)0.4749491100000000077;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.485294103622436523) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2035.7894287109375) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.586111068725585938) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5471499860286712646) ) ) {
                      sum += (double)0.3629048906249999762;
                    } else {
                      sum += (double)0.4233332941176470299;
                    }
                  } else {
                    sum += (double)0.3009401458333333945;
                  }
                } else {
                  sum += (double)0.2259234374999999906;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1171999983489513397) ) ) {
                  sum += (double)0.1124691979166666522;
                } else {
                  sum += (double)0.316620323529411718;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2974999994039535522) ) ) {
              sum += (double)0.2507170147058823129;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08444999903440475464) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3281867802143096924) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.91987228393554688) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1021125540137290955) ) ) {
                      sum += (double)0.5569334124999998359;
                    } else {
                      sum += (double)0.478990241071428513;
                    }
                  } else {
                    sum += (double)0.4010364999999999625;
                  }
                } else {
                  sum += (double)0.3880756911764706718;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.312229633331298828) ) ) {
                  sum += (double)0.4871186874999999805;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.234490871429443359) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7342000007629394531) ) ) {
                      sum += (double)0.3834045571428570942;
                    } else {
                      sum += (double)0.2774567166666666584;
                    }
                  } else {
                    sum += (double)0.4444500833333333012;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.149416446685791016) ) ) {
            sum += (double)0.252737611111111149;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4312.84765625) ) ) {
              sum += (double)0.1401176249999999956;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3794009983539581299) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.360257625579833984) ) ) {
                  sum += (double)0.04782421875000000128;
                } else {
                  sum += (double)0.01526576315789473712;
                }
              } else {
                sum += (double)0.08769936249999997491;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07196350023150444031) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.9444427490234375) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12744.087890625) ) ) {
              sum += (double)0.02241732352941176037;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3052.3572998046875) ) ) {
                sum += (double)0.002772166666666666703;
              } else {
                sum += (double)0.00690271875;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0446629989892244339) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02652399986982345581) ) ) {
                  sum += (double)0.002500000000000001353;
                } else {
                  sum += (double)0.003333019230769231848;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21548.17578125) ) ) {
                  sum += (double)0.006684041666666667124;
                } else {
                  sum += (double)0.002847222222222222342;
                }
              }
            } else {
              sum += (double)0.007208696969696969971;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004500000068219378591) ) ) {
            sum += (double)0.175035989583333329;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6849499940872192383) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.51743698120117188) ) ) {
                sum += (double)0.1094737416666666519;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4698499888181686401) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23625.42578125) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3427268564701080322) ) ) {
                      sum += (double)0.1253497000000000083;
                    } else {
                      sum += (double)0.03872490833333332855;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.4236602783203125) ) ) {
                      sum += (double)0.05375758749999999531;
                    } else {
                      sum += (double)0.02091546759259258273;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5981499850749969482) ) ) {
                    sum += (double)0.1320150555555555383;
                  } else {
                    sum += (double)0.05885355882352941853;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1566600054502487183) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17914.3974609375) ) ) {
                  sum += (double)0.1014858690476190539;
                } else {
                  sum += (double)0.01467809821428571471;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1426999941468238831) ) ) {
                  sum += (double)0.237448750000000014;
                } else {
                  sum += (double)0.09503152884615383156;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3319502919912338257) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.73333263397216797) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13258.93603515625) ) ) {
              sum += (double)0.3809919772727272669;
            } else {
              sum += (double)0.2413501500000000133;
            }
          } else {
            sum += (double)0.1510352613636363472;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2991.2967529296875) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4388500005006790161) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02769999951124191284) ) ) {
                sum += (double)0.1778292916666666945;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3930500000715255737) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3783054947853088379) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.019802719354629517) ) ) {
                      sum += (double)0.05467556250000001061;
                    } else {
                      sum += (double)0.01914326666666666885;
                    }
                  } else {
                    sum += (double)0.0971651499999999918;
                  }
                } else {
                  sum += (double)0.1274545277777777708;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.99587154388427734) ) ) {
                sum += (double)0.2995453014705882766;
              } else {
                sum += (double)0.09835883695652174186;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11111068725585938) ) ) {
              sum += (double)0.03642080000000000317;
            } else {
              sum += (double)0.007209120689655174399;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5349995195865631104) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2097.2220458984375) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3568.2001953125) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1373744606971740723) ) ) {
                sum += (double)0.4631335600000000552;
              } else {
                sum += (double)0.5308859886363636038;
              }
            } else {
              sum += (double)0.5782466527777777587;
            }
          } else {
            sum += (double)0.385654578125000036;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.188086748123168945) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.16306614875793457) ) ) {
              sum += (double)0.5738518333333334498;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5593884885311126709) ) ) {
                sum += (double)0.6932267794117646931;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5894770026206970215) ) ) {
                  sum += (double)0.621202056818181747;
                } else {
                  sum += (double)0.6723696057692306605;
                }
              }
            }
          } else {
            sum += (double)0.5028132321428570028;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8275499939918518066) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6741120219230651855) ) ) {
              sum += (double)0.7263933333333333353;
            } else {
              sum += (double)0.6530152874999999302;
            }
          } else {
            sum += (double)0.7625135568181817813;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03770000115036964417) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.61852264404296875) ) ) {
              sum += (double)0.8915307000000000093;
            } else {
              sum += (double)0.8158209880952381754;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8138479888439178467) ) ) {
              sum += (double)0.7604365394736842809;
            } else {
              sum += (double)0.8207033333333334513;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759344935417175293) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.51978015899658203) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.430303096771240234) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6632487475872039795) ) ) {
              sum += (double)0.5111736388888888927;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5731519758701324463) ) ) {
                  sum += (double)0.3873642833333333368;
                } else {
                  sum += (double)0.427460692307692347;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1524.52996826171875) ) ) {
                  sum += (double)0.327118312500000008;
                } else {
                  sum += (double)0.1219222999999999973;
                }
              }
            }
          } else {
            sum += (double)0.5795153289473683467;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03684999980032444) ) ) {
            sum += (double)0.4007756718749999614;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10427.32373046875) ) ) {
              sum += (double)0.2377085624999999702;
            } else {
              sum += (double)0.1009453839285714277;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.439812958240509033) ) ) {
          sum += (double)0.6305321847826086401;
        } else {
          sum += (double)0.4122156805555555747;
        }
      }
    }
  }
  return sum;
}
