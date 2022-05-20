#include "header.h"
double predict_margin_unit5(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.997630119323730469) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2709845006465911865) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4242.560791015625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00439999997615814209) ) ) {
            sum += (double)0.4220850869565217489;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.783333301544189453) ) ) {
              sum += (double)0.3769793958333333417;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.7431178092956543) ) ) {
                sum += (double)0.1081504305555555656;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7142000198364257812) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.193049997091293335) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2085025012493133545) ) ) {
                      sum += (double)0.1584491071428571207;
                    } else {
                      sum += (double)0.3048580277777777625;
                    }
                  } else {
                    sum += (double)0.3585450588235293834;
                  }
                } else {
                  sum += (double)0.1605403749999999852;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2277995049953460693) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.53125) ) ) {
              sum += (double)0.17357184375000001;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.608771800994873047) ) ) {
                sum += (double)0.102482310344827604;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1254660002887248993) ) ) {
                  sum += (double)0.0127139117647058833;
                } else {
                  sum += (double)0.04981954545454544969;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.263044506311416626) ) ) {
              sum += (double)0.3069587708333332832;
            } else {
              sum += (double)0.08617565624999999618;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
            sum += (double)0.5142240740740741112;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.642801284790039062) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3503550440073013306) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.124988161027431488) ) ) {
                  sum += (double)0.3927776944444444918;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3344.8660888671875) ) ) {
                    sum += (double)0.402242891304347816;
                  } else {
                    sum += (double)0.4835845673076922813;
                  }
                }
              } else {
                sum += (double)0.3558043913043478224;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5083.18603515625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3505720049142837524) ) ) {
                  sum += (double)0.3618756666666666511;
                } else {
                  sum += (double)0.4823962166666667106;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3539.0631103515625) ) ) {
                  sum += (double)0.2817336071428571675;
                } else {
                  sum += (double)0.1522130535714285859;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2305.320068359375) ) ) {
            sum += (double)0.1869414833333333525;
          } else {
            sum += (double)0.0369628157894736839;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.95833301544189453) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9650.12744140625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2554450035095214844) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005000000222935341299) ) ) {
              sum += (double)0.3744881973684210941;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.53682899475097656) ) ) {
                sum += (double)0.2271295333333333277;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1620310023427009583) ) ) {
                  sum += (double)0.03865847500000000464;
                } else {
                  sum += (double)0.121746000000000007;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.26422739028930664) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2767212986946105957) ) ) {
                sum += (double)0.391632350000000018;
              } else {
                sum += (double)0.3435824375000000042;
              }
            } else {
              sum += (double)0.2547975125000000451;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1267609968781471252) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2857.793212890625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.16710853576660156) ) ) {
                sum += (double)0.008152807692307691839;
              } else {
                sum += (double)0.002927525000000000266;
              }
            } else {
              sum += (double)0.0146511406250000014;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.65151405334472656) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.119865596294403076) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.62983798980712891) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5001499801874160767) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3117.924560546875) ) ) {
                      sum += (double)0.1157736388888889051;
                    } else {
                      sum += (double)0.04126453846153844973;
                    }
                  } else {
                    sum += (double)0.1634472500000000161;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1022500023245811462) ) ) {
                    sum += (double)0.03119492307692306801;
                  } else {
                    sum += (double)0.08080076666666666241;
                  }
                }
              } else {
                sum += (double)0.01533808333333333378;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.83333349227905273) ) ) {
                sum += (double)0.2426784531249999988;
              } else {
                sum += (double)0.08812508653846154449;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5292499959468841553) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1454659998416900635) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.82242012023925781) ) ) {
              sum += (double)0.07841915789473684339;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06727499887347221375) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
                  sum += (double)0.01422654545454545179;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2056499943137168884) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8164499998092651367) ) ) {
                      sum += (double)0.00294967913385826971;
                    } else {
                      sum += (double)0.005623068181818182201;
                    }
                  } else {
                    sum += (double)0.00995333333333333313;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21207.3701171875) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.31418418884277344) ) ) {
                    sum += (double)0.1116349500000000106;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.201899997889995575) ) ) {
                      sum += (double)0.01097555263157895013;
                    } else {
                      sum += (double)0.04486047500000000382;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.3076934814453125) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.60333251953125) ) ) {
                      sum += (double)0.009246225000000000277;
                    } else {
                      sum += (double)0.03022623529411764057;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07510000094771385193) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.005823625000000000676;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-120813.48046875) ) ) {
              sum += (double)0.1872481562499999919;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5441.749755859375) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.92550468444824219) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.88106155395507812) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24476.904296875) ) ) {
                      sum += (double)0.138624985294117653;
                    } else {
                      sum += (double)0.06362583244680855565;
                    }
                  } else {
                    sum += (double)0.1443711625000000109;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2465620040893554688) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1760529950261116028) ) ) {
                      sum += (double)0.04300548333333333029;
                    } else {
                      sum += (double)0.01162844285714285941;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.99803924560546875) ) ) {
                      sum += (double)0.03351047727272726123;
                    } else {
                      sum += (double)0.0959381842105263144;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3335.6925048828125) ) ) {
                  sum += (double)0.01324429545454545651;
                } else {
                  sum += (double)0.002500000000000000919;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5125000178813934326) ) ) {
            sum += (double)0.08503741176470587526;
          } else {
            sum += (double)0.230051343749999998;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6084312200546264648) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.03043508529663086) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5677529871463775635) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1137.951416015625) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5349995195865631104) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8623000085353851318) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008500000112690031528) ) ) {
                    sum += (double)0.6140496666666667158;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5245999991893768311) ) ) {
                      sum += (double)0.4129626818181817427;
                    } else {
                      sum += (double)0.5003180553097343886;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9016999900341033936) ) ) {
                    sum += (double)0.322999375000000033;
                  } else {
                    sum += (double)0.4901903552631578509;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5512475073337554932) ) ) {
                  sum += (double)0.640119232142857153;
                } else {
                  sum += (double)0.564683652777777878;
                }
              }
            } else {
              sum += (double)0.2965761029411764782;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1085000000894069672) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8104499876499176025) ) ) {
                sum += (double)0.6118793749999998921;
              } else {
                sum += (double)0.6561106093750000978;
              }
            } else {
              sum += (double)0.5731387916666665916;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.81216239929199219) ) ) {
            sum += (double)0.2796532968750000125;
          } else {
            sum += (double)0.3658713809523809757;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8142319917678833008) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.41611862182617188) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7414509952068328857) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6797190010547637939) ) ) {
                sum += (double)0.7350401111111111163;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7087925076484680176) ) ) {
                  sum += (double)0.6706236100000001477;
                } else {
                  sum += (double)0.6999479874999998685;
                }
              }
            } else {
              sum += (double)0.8006794807692306781;
            }
          } else {
            sum += (double)0.5815277187499999778;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03390000015497207642) ) ) {
            sum += (double)0.8817481071428572292;
          } else {
            sum += (double)0.8226856071428573225;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5457390248775482178) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.41014003753662109) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3201.2772216796875) ) ) {
            sum += (double)0.4270612672413792721;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4365565031766891479) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1741.5186767578125) ) ) {
                sum += (double)0.1798057333333333008;
              } else {
                sum += (double)0.05477686764705883005;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.706464707851409912) ) ) {
                sum += (double)0.3335624558823529484;
              } else {
                sum += (double)0.2071518522727272549;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.79761886596679688) ) ) {
            sum += (double)0.02146096875000000348;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.00797843933105469) ) ) {
              sum += (double)0.1789550326086956633;
            } else {
              sum += (double)0.1148875972222222069;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3698.1630859375) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
            sum += (double)0.567873897058823518;
          } else {
            sum += (double)0.3972668750000000193;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.344444394111633301) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.955363452434539795) ) ) {
              sum += (double)0.4502836875000000294;
            } else {
              sum += (double)0.3901270000000000571;
            }
          } else {
            sum += (double)0.2335327068965517561;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3698109984397888184) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.45048999786376953) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473649978637695312) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4315.2431640625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00215000007301568985) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.12159699946641922) ) ) {
              sum += (double)0.2545559166666666595;
            } else {
              sum += (double)0.4818865999999999983;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13282.0419921875) ) ) {
              sum += (double)0.3027360859375000102;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1450349986553192139) ) ) {
                sum += (double)0.03593032142857142952;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3405999988317489624) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2112635001540184021) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.4140625) ) ) {
                      sum += (double)0.2956725000000000048;
                    } else {
                      sum += (double)0.2105297800000000275;
                    }
                  } else {
                    sum += (double)0.1564381704545454721;
                  }
                } else {
                  sum += (double)0.08505821739130434156;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.472727298736572266) ) ) {
            sum += (double)0.2198137954545454908;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.22886037826538086) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6813842952251434326) ) ) {
                sum += (double)0.213795303571428591;
              } else {
                sum += (double)0.03815183928571428545;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1219644993543624878) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02929999958723783493) ) ) {
                  sum += (double)0.003978250000000000015;
                } else {
                  sum += (double)0.01340447368421052859;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2397.045166015625) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3570.5455322265625) ) ) {
                    sum += (double)0.05674027631578946324;
                  } else {
                    sum += (double)0.1268640535714285478;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1971573010087013245) ) ) {
                    sum += (double)0.05422094117647057593;
                  } else {
                    sum += (double)0.01706066666666666495;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
            sum += (double)0.5373511120689655751;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.142307758331298828) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2067.87847900390625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.392513036727905273) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05489999987185001373) ) ) {
                    sum += (double)0.3935335156250000521;
                  } else {
                    sum += (double)0.3514975416666666352;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3943165093660354614) ) ) {
                    sum += (double)0.4632339722222222345;
                  } else {
                    sum += (double)0.3846900735294117024;
                  }
                }
              } else {
                sum += (double)0.315092468750000021;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5259.608642578125) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.50735282897949219) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3441500067710876465) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.25071001052856445) ) ) {
                      sum += (double)0.3714735083333333132;
                    } else {
                      sum += (double)0.288613588235294094;
                    }
                  } else {
                    sum += (double)0.4577909705882353686;
                  }
                } else {
                  sum += (double)0.2159691034482758287;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.669117450714111328) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.46732044219970703) ) ) {
                    sum += (double)0.2080216916666666749;
                  } else {
                    sum += (double)0.2870357833333333497;
                  }
                } else {
                  sum += (double)0.1237681160714285689;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4313.30517578125) ) ) {
            sum += (double)0.1074655882352941183;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3341699987649917603) ) ) {
              sum += (double)0.01248100000000000077;
            } else {
              sum += (double)0.03636590624999999632;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2552685141563415527) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.76286888122558594) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20660.44921875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08764999732375144958) ) ) {
              sum += (double)0.2696972023809524055;
            } else {
              sum += (double)0.1351271500000000014;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005050000036135315895) ) ) {
              sum += (double)0.1389979166666666655;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1632735058665275574) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1317000016570091248) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1413725018501281738) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4727.18798828125) ) ) {
                      sum += (double)0.009334321428571429671;
                    } else {
                      sum += (double)0.002499999999999999618;
                    }
                  } else {
                    sum += (double)0.02570211904761904656;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11021.5986328125) ) ) {
                    sum += (double)0.0130520714285714285;
                  } else {
                    sum += (double)0.05852722499999998135;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.7611842155456543) ) ) {
                  sum += (double)0.1589389999999999969;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8511.40869140625) ) ) {
                    sum += (double)0.08731123148148148272;
                  } else {
                    sum += (double)0.02409149999999999139;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5291999876499176025) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07654349878430366516) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.56490325927734375) ) ) {
                sum += (double)0.02267488461538461758;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)55.12895584106445312) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)50.72129249572753906) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.04059600830078125) ) ) {
                      sum += (double)0.0092924473684210529;
                    } else {
                      sum += (double)0.002500000000000000919;
                    }
                  } else {
                    sum += (double)0.01669184999999999766;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2609.45751953125) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)74.45238113403320312) ) ) {
                      sum += (double)0.00359442105263157877;
                    } else {
                      sum += (double)0.002500000000000001353;
                    }
                  } else {
                    sum += (double)0.006203000000000001048;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3427268564701080322) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1807534992694854736) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.18682861328125) ) ) {
                    sum += (double)0.06517511538461537302;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24800.7763671875) ) ) {
                      sum += (double)0.02281056250000000271;
                    } else {
                      sum += (double)0.005020285714285714976;
                    }
                  }
                } else {
                  sum += (double)0.1281718749999999907;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-116296.8984375) ) ) {
                  sum += (double)0.053043458333333314;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33858.240234375) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)85.29912185668945312) ) ) {
                      sum += (double)0.06144814583333333552;
                    } else {
                      sum += (double)0.007696000000000000583;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1555000022053718567) ) ) {
                      sum += (double)0.006199051724137933338;
                    } else {
                      sum += (double)0.01990907327586205131;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.1120218999999999937;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3580999970436096191) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.71271324157714844) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.01976203918457031) ) ) {
              sum += (double)0.02913539285714285623;
            } else {
              sum += (double)0.1451928958333333075;
            }
          } else {
            sum += (double)0.02068360135135135364;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2740714997053146362) ) ) {
            sum += (double)0.2767703913043478292;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16015.51806640625) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2455629929900169373) ) ) {
                sum += (double)0.2855465138888889087;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3636499941349029541) ) ) {
                  sum += (double)0.07233804166666665814;
                } else {
                  sum += (double)0.2188469558823529226;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7870.62353515625) ) ) {
                sum += (double)0.1070153970588235554;
              } else {
                sum += (double)0.0326643823529411681;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5571127235889434814) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6155470013618469238) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.25) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5358225107192993164) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.22692298889160156) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4435250014066696167) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1734500005841255188) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2333.9556884765625) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.06233739852905273) ) ) {
                      sum += (double)0.5060726442307691419;
                    } else {
                      sum += (double)0.5665737976190475811;
                    }
                  } else {
                    sum += (double)0.4387966184210525533;
                  }
                } else {
                  sum += (double)0.3781206973684210215;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7857500016689300537) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.044230937957763672) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.485707506537437439) ) ) {
                      sum += (double)0.5310325357142856584;
                    } else {
                      sum += (double)0.4856916499999999748;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.781531572341918945) ) ) {
                      sum += (double)0.5398860760869564901;
                    } else {
                      sum += (double)0.6260899464285714089;
                    }
                  }
                } else {
                  sum += (double)0.4784103214285713723;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07371930032968521118) ) ) {
                sum += (double)0.5311732352941176405;
              } else {
                sum += (double)0.3228575104166667153;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1579570025205612183) ) ) {
              sum += (double)0.650177575757575732;
            } else {
              sum += (double)0.5587488800000000033;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.45280647277832031) ) ) {
            sum += (double)0.3752597413793103409;
          } else {
            sum += (double)0.2220562857142857061;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.074468135833740234) ) ) {
              sum += (double)0.6944128500000000814;
            } else {
              sum += (double)0.7331128125000000439;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6760500073432922363) ) ) {
              sum += (double)0.6741057333333332346;
            } else {
              sum += (double)0.5886349523809523143;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03894999995827674866) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1281.79534912109375) ) ) {
              sum += (double)0.866550227272727458;
            } else {
              sum += (double)0.8086187692307693631;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09455000236630439758) ) ) {
              sum += (double)0.7881818749999999207;
            } else {
              sum += (double)0.7305661477272729076;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5291219949722290039) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.32458257675170898) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2801.376220703125) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4328584969043731689) ) ) {
              sum += (double)0.3430183593750000259;
            } else {
              sum += (double)0.4457056500000000088;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.368086457252502441) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1368.8526611328125) ) ) {
                sum += (double)0.3260635833333332956;
              } else {
                sum += (double)0.2167080833333333012;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.916666746139526367) ) ) {
                sum += (double)0.08099590476190476895;
              } else {
                sum += (double)0.1745683124999999891;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.97150802612304688) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.88461542129516602) ) ) {
              sum += (double)0.01622821052631578942;
            } else {
              sum += (double)0.0452927115384615317;
            }
          } else {
            sum += (double)0.1669697187499999957;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3698.1630859375) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)49.27954673767089844) ) ) {
            sum += (double)0.5822775328947368267;
          } else {
            sum += (double)0.4314288400000000911;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.211818933486938477) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6161809861660003662) ) ) {
              sum += (double)0.3735840833333333721;
            } else {
              sum += (double)0.4756589250000001212;
            }
          } else {
            sum += (double)0.2652400789473683962;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.009064197540283203) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2505149990320205688) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3015.4736328125) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075499966740608215) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1512529999017715454) ) ) {
              sum += (double)0.1581594017857142764;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1287085898220539093) ) ) {
                sum += (double)0.387761117647058895;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3887617737054824829) ) ) {
                  sum += (double)0.2366302500000000419;
                } else {
                  sum += (double)0.3265338035714285825;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2147469967603683472) ) ) {
              sum += (double)0.2094751607142857353;
            } else {
              sum += (double)0.09014937500000000381;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.95238113403320312) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4697500020265579224) ) ) {
              sum += (double)0.09937797058823528984;
            } else {
              sum += (double)0.211921308823529414;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1887845024466514587) ) ) {
              sum += (double)0.02806471428571428312;
            } else {
              sum += (double)0.06281141666666666123;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.935222864151000977) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1357.700927734375) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713164985179901123) ) ) {
                sum += (double)0.3603362884615384787;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02615000028163194656) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.641237974166870117) ) ) {
                    sum += (double)0.4340461999999999376;
                  } else {
                    sum += (double)0.5159148068181818036;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.284801959991455078) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4868499934673309326) ) ) {
                      sum += (double)0.3856597499999999124;
                    } else {
                      sum += (double)0.4393345199999999506;
                    }
                  } else {
                    sum += (double)0.3590408541666667008;
                  }
                }
              }
            } else {
              sum += (double)0.3053098970588235539;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3340.8245849609375) ) ) {
              sum += (double)0.4236458645833333647;
            } else {
              sum += (double)0.1354368970588235577;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.928750038146972656) ) ) {
            sum += (double)0.2363912678571428727;
          } else {
            sum += (double)0.08543303749999997532;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2195315062999725342) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36350345611572266) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10291.52783203125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0344000011682510376) ) ) {
              sum += (double)0.3240710131578947162;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.0718531608581543) ) ) {
                sum += (double)0.1811275263157894888;
              } else {
                sum += (double)0.04403910999999999937;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1061574965715408325) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5003.2255859375) ) ) {
                sum += (double)0.04353942647058822724;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0396999996155500412) ) ) {
                  sum += (double)0.005325419354838711004;
                } else {
                  sum += (double)0.02237968750000000201;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.40783405303955078) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4886.4404296875) ) ) {
                  sum += (double)0.1595352647058823348;
                } else {
                  sum += (double)0.06242162499999998754;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.449949994683265686) ) ) {
                  sum += (double)0.1013052343749999973;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1016500033438205719) ) ) {
                    sum += (double)0.01368866666666666669;
                  } else {
                    sum += (double)0.03272370833333333034;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06727499887347221375) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1617499962449073792) ) ) {
              sum += (double)0.02999498437499999864;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04489400051534175873) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8429999947547912598) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.3635482788085938) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11274.70263671875) ) ) {
                      sum += (double)0.003949458333333333467;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  } else {
                    sum += (double)0.002500000000000001353;
                  }
                } else {
                  sum += (double)0.005512374999999999914;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)163.9371185302734375) ) ) {
                  sum += (double)0.01273219318181818133;
                } else {
                  sum += (double)0.00346846428571428566;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10292.85986328125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.51904773712158203) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)59.77373123168945312) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5019034743309020996) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.82385635375976562) ) ) {
                      sum += (double)0.01997247058823529292;
                    } else {
                      sum += (double)0.06136811764705882299;
                    }
                  } else {
                    sum += (double)0.1112863846153846342;
                  }
                } else {
                  sum += (double)0.1663897954545454361;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.471799999475479126) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-117964.01171875) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)922.761932373046875) ) ) {
                      sum += (double)0.09650160937499999148;
                    } else {
                      sum += (double)0.002499999999999999618;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.92254638671875) ) ) {
                      sum += (double)0.04372115625000000394;
                    } else {
                      sum += (double)0.01582922222222221328;
                    }
                  }
                } else {
                  sum += (double)0.1227617500000000028;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4843.90966796875) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8362.41552734375) ) ) {
                  sum += (double)0.008076343749999999322;
                } else {
                  sum += (double)0.03188175675675675169;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2939.94921875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.5) ) ) {
                    sum += (double)0.02547880769230769643;
                  } else {
                    sum += (double)0.004214361111111111433;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6424354612827301025) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.003690194444444445162;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5078000128269195557) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.091315984725952148) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.33749961853027344) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7588.68408203125) ) ) {
                sum += (double)0.2705458095238095217;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07799999788403511047) ) ) {
                  sum += (double)0.0340023863636363527;
                } else {
                  sum += (double)0.1852973214285714154;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2822999954223632812) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6939284801483154297) ) ) {
                  sum += (double)0.04015122058823529516;
                } else {
                  sum += (double)0.01743592307692307802;
                }
              } else {
                sum += (double)0.1404028653846153829;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09960000216960906982) ) ) {
              sum += (double)0.08218302631578945638;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2032499983906745911) ) ) {
                sum += (double)0.02725226086956521188;
              } else {
                sum += (double)0.003757132352941177419;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.18651199340820312) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1389499977231025696) ) ) {
              sum += (double)0.1921478181818181974;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2839774936437606812) ) ) {
                sum += (double)0.2778260499999999911;
              } else {
                sum += (double)0.4140124749999999909;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09700000286102294922) ) ) {
              sum += (double)0.05605797321428570429;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.48664569854736328) ) ) {
                sum += (double)0.2850730952380952088;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6560999751091003418) ) ) {
                  sum += (double)0.208576942307692248;
                } else {
                  sum += (double)0.1113468522727272675;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6084312200546264648) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6215465068817138672) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12297296524047852) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468925237655639648) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003400000045076012611) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2539.494873046875) ) ) {
                sum += (double)0.6427726071428572219;
              } else {
                sum += (double)0.526354945652173889;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2348.373779296875) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6742.477783203125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.252703189849853516) ) ) {
                    sum += (double)0.4620403863636363684;
                  } else {
                    sum += (double)0.4026368124999999965;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.36085987091064453) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5791999995708465576) ) ) {
                      sum += (double)0.4548509239130434367;
                    } else {
                      sum += (double)0.5188904939024389096;
                    }
                  } else {
                    sum += (double)0.5904175555555556398;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.261954307556152344) ) ) {
                  sum += (double)0.4777641599999998823;
                } else {
                  sum += (double)0.3706229374999999715;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.312225580215454102) ) ) {
              sum += (double)0.5850101111111111196;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.829677820205688477) ) ) {
                sum += (double)0.6872002019230769587;
              } else {
                sum += (double)0.601415134615384539;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.381399989128112793) ) ) {
            sum += (double)0.2370841964285714532;
          } else {
            sum += (double)0.3624680535714286944;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.387547850608825684) ) ) {
            sum += (double)0.7099450378787879323;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.991754651069641113) ) ) {
              sum += (double)0.6240507499999999874;
            } else {
              sum += (double)0.6858490138888888588;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.23895031213760376) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8238435089588165283) ) ) {
              sum += (double)0.8056625374999999423;
            } else {
              sum += (double)0.8788724545454545956;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7976059913635253906) ) ) {
              sum += (double)0.7288261999999999796;
            } else {
              sum += (double)0.7824967031249999705;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5527740120887756348) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.76419442892074585) ) ) {
          sum += (double)0.4058082794117647274;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.92392826080322266) ) ) {
              sum += (double)0.3663079655172413185;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.46347808837890625) ) ) {
                sum += (double)0.02498449999999999976;
              } else {
                sum += (double)0.2302026249999999941;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4576395004987716675) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1382.6014404296875) ) ) {
                sum += (double)0.1138027500000000081;
              } else {
                sum += (double)0.04604111764705881571;
              }
            } else {
              sum += (double)0.1790419078947368681;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3400.0914306640625) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.029400944709777832) ) ) {
            sum += (double)0.6071460882352940347;
          } else {
            sum += (double)0.4530423333333333802;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.576312541961669922) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6145164966583251953) ) ) {
              sum += (double)0.4099267916666666789;
            } else {
              sum += (double)0.4702969545454545597;
            }
          } else {
            sum += (double)0.1624015299999999884;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4562695026397705078) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.349175930023193359) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2602.255126953125) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1498735025525093079) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7560500204563140869) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4601500034332275391) ) ) {
                sum += (double)0.2374048166666666571;
              } else {
                sum += (double)0.1428221375000000015;
              }
            } else {
              sum += (double)0.02846473333333333217;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              sum += (double)0.3795804249999999436;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2125445008277893066) ) ) {
                sum += (double)0.2989959615384616409;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4183135628700256348) ) ) {
                  sum += (double)0.2174623749999999855;
                } else {
                  sum += (double)0.1044736833333333309;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.36341667175292969) ) ) {
            sum += (double)0.2023817291666666629;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.78461456298828125) ) ) {
              sum += (double)0.04665742391304348452;
            } else {
              sum += (double)0.003835700000000000047;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7523927986621856689) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3168849945068359375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006700000027194619179) ) ) {
              sum += (double)0.5162164666666666513;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.743021249771118164) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2339.043212890625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711329221725463867) ) ) {
                    sum += (double)0.3791754782608695029;
                  } else {
                    sum += (double)0.4343624479166665608;
                  }
                } else {
                  sum += (double)0.323325357142857206;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5148.095703125) ) ) {
                  sum += (double)0.3688836666666666653;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2668374925851821899) ) ) {
                    sum += (double)0.2511881406250000004;
                  } else {
                    sum += (double)0.1306673095238095328;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9142499864101409912) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.100153684616088867) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.149112105369567871) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.527438998222351074) ) ) {
                    sum += (double)0.4855553020833333622;
                  } else {
                    sum += (double)0.4309675625000000676;
                  }
                } else {
                  sum += (double)0.5556299999999999573;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2083.4365234375) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08200000226497650146) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.76573371887207031) ) ) {
                      sum += (double)0.4330280625000000883;
                    } else {
                      sum += (double)0.5346541785714286066;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3562.866943359375) ) ) {
                      sum += (double)0.385614683823529425;
                    } else {
                      sum += (double)0.4609844558823529281;
                    }
                  }
                } else {
                  sum += (double)0.3283810882352941052;
                }
              }
            } else {
              sum += (double)0.3500539062499999909;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4001999944448471069) ) ) {
              sum += (double)0.329595312500000015;
            } else {
              sum += (double)0.1428091964285714555;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.807593107223510742) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.234565258026123047) ) ) {
                sum += (double)0.1733334218749999767;
              } else {
                sum += (double)0.1039452500000000168;
              }
            } else {
              sum += (double)0.03778109999999999802;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2529164999723434448) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1050424985587596893) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.96186447143554688) ) ) {
            sum += (double)0.09283664285714286757;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07196350023150444031) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
                sum += (double)0.02142291176470587782;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8681000173091888428) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03464949876070022583) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900999993085861206) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.006941882352941177066;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)156.9863662719726562) ) ) {
                      sum += (double)0.008037575000000001663;
                    } else {
                      sum += (double)0.003195285714285715176;
                    }
                  }
                } else {
                  sum += (double)0.01116444444444444559;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0853369981050491333) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05780000053346157074) ) ) {
                  sum += (double)0.1036038124999999754;
                } else {
                  sum += (double)0.05151216666666666444;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.87857246398925781) ) ) {
                  sum += (double)0.03710818999999999923;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09426750242710113525) ) ) {
                    sum += (double)0.003182394736842105408;
                  } else {
                    sum += (double)0.009607656250000000744;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10653.59130859375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.95979547500610352) ) ) {
                sum += (double)0.2945758823529411874;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1817499995231628418) ) ) {
                  sum += (double)0.201375928571428553;
                } else {
                  sum += (double)0.07661991666666664869;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.07938051223754883) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3753.203125) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6766999959945678711) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2139104977250099182) ) ) {
                      sum += (double)0.0296262596153846168;
                    } else {
                      sum += (double)0.1140357500000000052;
                    }
                  } else {
                    sum += (double)0.1709014880952380855;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.81912422180175781) ) ) {
                    sum += (double)0.04091779166666667522;
                  } else {
                    sum += (double)0.02224506451612903724;
                  }
                }
              } else {
                sum += (double)0.162258912499999991;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20710.3837890625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.04898262023925781) ) ) {
                sum += (double)0.1828461022727272678;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4773499965667724609) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)96.315216064453125) ) ) {
                    sum += (double)0.06261083695652173986;
                  } else {
                    sum += (double)0.01217562499999999895;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-42361.8203125) ) ) {
                    sum += (double)0.1510561052631579082;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2906000018119812012) ) ) {
                      sum += (double)0.01662414285714285817;
                    } else {
                      sum += (double)0.1008853235294117634;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8720.7919921875) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2986499965190887451) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09390000253915786743) ) ) {
                    sum += (double)0.01064634210526315718;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.92269515991210938) ) ) {
                      sum += (double)0.06442285526315788546;
                    } else {
                      sum += (double)0.02600529629629629372;
                    }
                  }
                } else {
                  sum += (double)0.1136642115384615265;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5134.833251953125) ) ) {
                  sum += (double)0.02092526190476190484;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.22368431091308594) ) ) {
                    sum += (double)0.00328771212121212273;
                  } else {
                    sum += (double)0.008983770833333334926;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.501947447657585144) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3333054929971694946) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.059800000861287117) ) ) {
              sum += (double)0.0786039886363636281;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.34814834594726562) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1816000044345855713) ) ) {
                  sum += (double)0.1965988703703704099;
                } else {
                  sum += (double)0.3332937037037037031;
                }
              } else {
                sum += (double)0.1147099027777777613;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.44551849365234375) ) ) {
              sum += (double)0.3881751206896551509;
            } else {
              sum += (double)0.2572952916666667034;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3513.2430419921875) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.875) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.116747558116912842) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4544499963521957397) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.306333005428314209) ) ) {
                    sum += (double)0.1788584038461538406;
                  } else {
                    sum += (double)0.3113062058823529155;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17368.82861328125) ) ) {
                    sum += (double)0.18599750000000001;
                  } else {
                    sum += (double)0.08510485937499999431;
                  }
                }
              } else {
                sum += (double)0.07426548958333334394;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3489625006914138794) ) ) {
                sum += (double)0.02839962499999999779;
              } else {
                sum += (double)0.1120821785714285757;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.16905927658081055) ) ) {
              sum += (double)0.05602423076923077061;
            } else {
              sum += (double)0.01093661111111111396;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4497304260730743408) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5349995195865631104) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.44316482543945312) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4876945018768310547) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2764.6925048828125) ) ) {
                sum += (double)0.5281149375000000479;
              } else {
                sum += (double)0.412725166666666643;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1314499974250793457) ) ) {
                sum += (double)0.605065736842105184;
              } else {
                sum += (double)0.5083740000000001036;
              }
            }
          } else {
            sum += (double)0.361160483333333282;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6886999905109405518) ) ) {
            sum += (double)0.5226667833333332736;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03035000059753656387) ) ) {
              sum += (double)0.6716030624999999032;
            } else {
              sum += (double)0.6078364642857142508;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7415895164012908936) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.633001923561096191) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7320500016212463379) ) ) {
              sum += (double)0.66976067187499988;
            } else {
              sum += (double)0.7336942720588234268;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1306999996304512024) ) ) {
              sum += (double)0.6158753636363635264;
            } else {
              sum += (double)0.7110499125000000475;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.554700851440429688) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8184680044651031494) ) ) {
              sum += (double)0.8320247625000000147;
            } else {
              sum += (double)0.8706998809523809335;
            }
          } else {
            sum += (double)0.7855394772727273267;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02274999953806400299) ) ) {
        sum += (double)0.2072361999999999815;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.292340755462646484) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.44355440139770508) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5327295064926147461) ) ) {
              sum += (double)0.4885225624999999239;
            } else {
              sum += (double)0.6304259642857141799;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05069999955594539642) ) ) {
              sum += (double)0.5267713333333333692;
            } else {
              sum += (double)0.2891587222222222753;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.071060001850128174) ) ) {
            sum += (double)0.4340129924242424053;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1655.56048583984375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.12000119686126709) ) ) {
                sum += (double)0.2558631562500000012;
              } else {
                sum += (double)0.4704516764705882759;
              }
            } else {
              sum += (double)0.1391547678571428415;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3735890090465545654) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.997630119323730469) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2316309958696365356) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4223.26806640625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01205000001937150955) ) ) {
            sum += (double)0.4326811388888889831;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8573.837890625) ) ) {
              sum += (double)0.2452461052631579042;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6140.892822265625) ) ) {
                sum += (double)0.07727563000000001181;
              } else {
                sum += (double)0.2321494375000000554;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
            sum += (double)0.3110291874999999706;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5401999950408935547) ) ) {
              sum += (double)0.1006197407407407318;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.40723991394042969) ) ) {
                sum += (double)0.04126383333333333986;
              } else {
                sum += (double)0.01536897142857143218;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.07211911678314209) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
            sum += (double)0.5179011666666668567;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.67492294311523438) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.677038908004760742) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2056.26678466796875) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4607000052928924561) ) ) {
                    sum += (double)0.372384568181818254;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6072500050067901611) ) ) {
                      sum += (double)0.4461820645161290733;
                    } else {
                      sum += (double)0.3815589999999999815;
                    }
                  }
                } else {
                  sum += (double)0.2906737250000000494;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7117.5205078125) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.01858329772949219) ) ) {
                    sum += (double)0.3377876447368420298;
                  } else {
                    sum += (double)0.4026981406249999784;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4926999956369400024) ) ) {
                    sum += (double)0.1452507352941176666;
                  } else {
                    sum += (double)0.2924655446428571226;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.33267250657081604) ) ) {
                sum += (double)0.4727219874999999405;
              } else {
                sum += (double)0.387958291666666566;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3266.2825927734375) ) ) {
            sum += (double)0.1360876500000000044;
          } else {
            sum += (double)0.02095109090909090879;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2579720020294189453) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36350345611572266) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
            sum += (double)0.2308461599999999669;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11760.4208984375) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.24317836761474609) ) ) {
                sum += (double)0.1955862857142856848;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1779999956488609314) ) ) {
                  sum += (double)0.1406914722222222247;
                } else {
                  sum += (double)0.04711749999999999966;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2080269977450370789) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04014999978244304657) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.597350001335144043) ) ) {
                    sum += (double)0.01125828947368420936;
                  } else {
                    sum += (double)0.004134187499999999842;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.21522617340087891) ) ) {
                    sum += (double)0.01073244736842105321;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.83928489685058594) ) ) {
                      sum += (double)0.1246265434782608816;
                    } else {
                      sum += (double)0.03839331603773584595;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5241.006591796875) ) ) {
                  sum += (double)0.1456052874999999858;
                } else {
                  sum += (double)0.08031931578947366923;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1052374988794326782) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)38.61693572998046875) ) ) {
                sum += (double)0.07699597368421050303;
              } else {
                sum += (double)0.002499999999999999618;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07303249835968017578) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1499.338623046875) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.01410400029271841049) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23868.23046875) ) ) {
                      sum += (double)0.006938976562500000916;
                    } else {
                      sum += (double)0.003834009433962264329;
                    }
                  }
                } else {
                  sum += (double)0.008315690476190476521;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.83087635040283203) ) ) {
                  sum += (double)0.04496444318181817834;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-81927.033203125) ) ) {
                    sum += (double)0.01915594444444444419;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8149.07958984375) ) ) {
                      sum += (double)0.007216333333333334148;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2662331163883209229) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)136.5782470703125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16932.59716796875) ) ) {
                  sum += (double)0.1071478888888888759;
                } else {
                  sum += (double)0.01653850000000000112;
                }
              } else {
                sum += (double)0.1546664374999999758;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4789000004529953003) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5151548683643341064) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4131000041961669922) ) ) {
                    sum += (double)0.1063871406249999874;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.239499993622303009) ) ) {
                      sum += (double)0.01658931666666666957;
                    } else {
                      sum += (double)0.04451143421052630722;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4368.82763671875) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.50582504272460938) ) ) {
                      sum += (double)0.03459780769230768466;
                    } else {
                      sum += (double)0.006237538461538462767;
                    }
                  } else {
                    sum += (double)0.003338532258064516763;
                  }
                }
              } else {
                sum += (double)0.08030180357142857606;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2424409836530685425) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16325.8603515625) ) ) {
            sum += (double)0.4194062647058823257;
          } else {
            sum += (double)0.2478533529411764691;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.740783005952835083) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.163299560546875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10440.39453125) ) ) {
                sum += (double)0.288150586956521737;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07039999961853027344) ) ) {
                  sum += (double)0.08102959821428570852;
                } else {
                  sum += (double)0.2250889274193548784;
                }
              }
            } else {
              sum += (double)0.0576699239130434721;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20319.16015625) ) ) {
              sum += (double)0.1151966770833333098;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2026999965310096741) ) ) {
                sum += (double)0.0561073981481481493;
              } else {
                sum += (double)0.0137296935483870973;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4755957424640655518) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.605323493480682373) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.25) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5349995195865631104) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2083.2003173828125) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0784000009298324585) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8416500091552734375) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.5169525146484375) ) ) {
                    sum += (double)0.5249915555555555446;
                  } else {
                    sum += (double)0.6283631578947367347;
                  }
                } else {
                  sum += (double)0.5046917656249999551;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4469875097274780273) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1734500005841255188) ) ) {
                    sum += (double)0.4702174519230769012;
                  } else {
                    sum += (double)0.3808092840909091392;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.022499799728393555) ) ) {
                    sum += (double)0.5506019285714285338;
                  } else {
                    sum += (double)0.4432353437500000659;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7820499837398529053) ) ) {
                sum += (double)0.5024819482758620115;
              } else {
                sum += (double)0.3241562499999999791;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1920488998293876648) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06799999997019767761) ) ) {
                sum += (double)0.6377386774193547492;
              } else {
                sum += (double)0.5510509999999999575;
              }
            } else {
              sum += (double)0.466783716666666626;
            }
          }
        } else {
          sum += (double)0.3042628409090908925;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.98828601837158203) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.910897254943847656) ) ) {
              sum += (double)0.6557907822580646418;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.924035906791687012) ) ) {
                sum += (double)0.7264988333333332049;
              } else {
                sum += (double)0.697354265151515329;
              }
            }
          } else {
            sum += (double)0.6226521470588235463;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.566138744354248047) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7799499928951263428) ) ) {
              sum += (double)0.7792554411764707201;
            } else {
              sum += (double)0.8508834655172413663;
            }
          } else {
            sum += (double)0.7686698583333332335;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4756494909524917603) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.2421875) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6552097797393798828) ) ) {
            sum += (double)0.4330815882352941903;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2654.944091796875) ) ) {
              sum += (double)0.3831762777777777407;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.823923468589782715) ) ) {
                sum += (double)0.2440868281249999883;
              } else {
                sum += (double)0.1272867500000000041;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11235.466796875) ) ) {
            sum += (double)0.1986834264705882591;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.23829573392868042) ) ) {
              sum += (double)0.05336623333333333219;
            } else {
              sum += (double)0.02643682352941176261;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7671484947204589844) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.558823585510253906) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.674565970897674561) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7005729079246520996) ) ) {
                sum += (double)0.5834238653846154365;
              } else {
                sum += (double)0.484827284090908972;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.578380882740020752) ) ) {
                sum += (double)0.4345269659090908454;
              } else {
                sum += (double)0.3021719250000000079;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.533450007438659668) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3232499957084655762) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.197946369647979736) ) ) {
                  sum += (double)0.3795953173076923037;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.48205137252807617) ) ) {
                    sum += (double)0.1463800781250000071;
                  } else {
                    sum += (double)0.3122333333333333072;
                  }
                }
              } else {
                sum += (double)0.1246708472222222419;
              }
            } else {
              sum += (double)0.4776817941176471072;
            }
          }
        } else {
          sum += (double)0.6659404722222223016;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840035051107406616) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.950584888458251953) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2933639883995056152) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1528.33880615234375) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.981586456298828125) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1733400002121925354) ) ) {
              sum += (double)0.1524616477272727477;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9843173623085021973) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01189999980852007866) ) ) {
                  sum += (double)0.4266624843750000395;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5722.48291015625) ) ) {
                    sum += (double)0.3785692844827585612;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.941071510314941406) ) ) {
                      sum += (double)0.3558640238095238106;
                    } else {
                      sum += (double)0.2174072421875000161;
                    }
                  }
                }
              } else {
                sum += (double)0.137039299999999975;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11502.595703125) ) ) {
              sum += (double)0.2861726710526316109;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7075000107288360596) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.35879325866699219) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4408009797334671021) ) ) {
                      sum += (double)0.2366296875000000188;
                    } else {
                      sum += (double)0.1199390333333333197;
                    }
                  } else {
                    sum += (double)0.3493526923076923363;
                  }
                } else {
                  sum += (double)0.1142509999999999915;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.55495452880859375) ) ) {
                  sum += (double)0.05536393421052630825;
                } else {
                  sum += (double)0.1448904249999999894;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.733333349227905273) ) ) {
            sum += (double)0.1654259999999999897;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1042.70660400390625) ) ) {
              sum += (double)0.0657391470588234994;
            } else {
              sum += (double)0.01591404166666667008;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8564044535160064697) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2454.423583984375) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.41436672210693359) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.29658818244934082) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.016327142715454102) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1037000007927417755) ) ) {
                    sum += (double)0.4321030681818181507;
                  } else {
                    sum += (double)0.37237356944444433;
                  }
                } else {
                  sum += (double)0.468464059523809595;
                }
              } else {
                sum += (double)0.3184750000000000081;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1343176364898681641) ) ) {
                sum += (double)0.5061949249999999623;
              } else {
                sum += (double)0.4621325138888889295;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02104999963194131851) ) ) {
              sum += (double)0.2741215952380952059;
            } else {
              sum += (double)0.3884331323529411906;
            }
          }
        } else {
          sum += (double)0.134294738095238092;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.35554695129394531) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9570.9716796875) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.326752007007598877) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26481.5556640625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2171999961137771606) ) ) {
                sum += (double)0.2058500576923076864;
              } else {
                sum += (double)0.3157578035714285747;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.85100173950195312) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1320234984159469604) ) ) {
                  sum += (double)0.0849327619047618998;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.6894841194152832) ) ) {
                    sum += (double)0.2924657500000000243;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16593.294921875) ) ) {
                      sum += (double)0.2436458970588235018;
                    } else {
                      sum += (double)0.0886739099999999808;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.26153850555419922) ) ) {
                  sum += (double)0.0342203653846153838;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1633460000157356262) ) ) {
                    sum += (double)0.07907581249999999506;
                  } else {
                    sum += (double)0.1420023088235294051;
                  }
                }
              }
            }
          } else {
            sum += (double)0.372130191176470615;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1846349984407424927) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1929.4031982421875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5565.3291015625) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5444500148296356201) ) ) {
                  sum += (double)0.07202872058823531209;
                } else {
                  sum += (double)0.01471411538461538451;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1093465015292167664) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07329450175166130066) ) ) {
                    sum += (double)0.008637730769230769073;
                  } else {
                    sum += (double)0.003731540000000001071;
                  }
                } else {
                  sum += (double)0.0230816574074074049;
                }
              }
            } else {
              sum += (double)0.08728465999999998615;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.612562030553817749) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0797000005841255188) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00297641754150391) ) ) {
                  sum += (double)0.1686019900000000071;
                } else {
                  sum += (double)0.04063449999999999701;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2683994919061660767) ) ) {
                  sum += (double)0.1217445500000000208;
                } else {
                  sum += (double)0.2867325089285714945;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7678990960121154785) ) ) {
                sum += (double)0.06004678125000000033;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.531167268753051758) ) ) {
                  sum += (double)0.01111392500000000019;
                } else {
                  sum += (double)0.03406031666666666652;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1456909999251365662) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07200650125741958618) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.51396369934082031) ) ) {
              sum += (double)0.0158767187499999976;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-37508.982421875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)70.75176239013671875) ) ) {
                  sum += (double)0.01711822619047619065;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1876999959349632263) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.00333758823529411823;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05335900001227855682) ) ) {
                  sum += (double)0.002500000000000001353;
                } else {
                  sum += (double)0.003991593749999999483;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08839249983429908752) ) ) {
              sum += (double)0.06045997826086955962;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3966500014066696167) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.18682861328125) ) ) {
                  sum += (double)0.02758342424242423915;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)470.0023956298828125) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24513.9052734375) ) ) {
                      sum += (double)0.01990255263157894583;
                    } else {
                      sum += (double)0.005288953125000001552;
                    }
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                }
              } else {
                sum += (double)0.0640455000000000052;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4379585534334182739) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-31514.75390625) ) ) {
              sum += (double)0.1425033557692307606;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.19276046752929688) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14617.34033203125) ) ) {
                  sum += (double)0.1183625781250000064;
                } else {
                  sum += (double)0.05487091250000000059;
                }
              } else {
                sum += (double)0.02352850999999999207;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2671615034341812134) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4349000006914138794) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1815889999270439148) ) ) {
                  sum += (double)0.02401249000000000092;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2327149957418441772) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.2401313781738281) ) ) {
                      sum += (double)0.004963888888888889211;
                    } else {
                      sum += (double)0.009695093750000001454;
                    }
                  } else {
                    sum += (double)0.01612313888888889171;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29890.3486328125) ) ) {
                  sum += (double)0.07901134615384614035;
                } else {
                  sum += (double)0.0251263749999999994;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.78877735137939453) ) ) {
                  sum += (double)0.04039375000000000604;
                } else {
                  sum += (double)0.1321073611111111268;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)163.7106857299804688) ) ) {
                  sum += (double)0.02165795833333333462;
                } else {
                  sum += (double)0.05469071428571429389;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.419721648097038269) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5856605172157287598) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.596971988677978516) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1938.53759765625) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4220529943704605103) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07124999910593032837) ) ) {
                  sum += (double)0.5059813749999999555;
                } else {
                  sum += (double)0.423338124999999954;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.306540727615356445) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3460.215087890625) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4959184974431991577) ) ) {
                      sum += (double)0.4942209062500000361;
                    } else {
                      sum += (double)0.4518861875000000361;
                    }
                  } else {
                    sum += (double)0.5477949621212121478;
                  }
                } else {
                  sum += (double)0.5870706184210526812;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7888499796390533447) ) ) {
                sum += (double)0.502821066666666705;
              } else {
                sum += (double)0.3362354374999999562;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7987000048160552979) ) ) {
              sum += (double)0.5704806875000000277;
            } else {
              sum += (double)0.6655544117647059776;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.94261360168457031) ) ) {
            sum += (double)0.4268862586206896848;
          } else {
            sum += (double)0.336753671874999938;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.392998456954956055) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07293378934264183044) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.61852264404296875) ) ) {
              sum += (double)0.8828275735294117688;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0455377139151096344) ) ) {
                sum += (double)0.7671659117647058324;
              } else {
                sum += (double)0.8030124300000001103;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09207046404480934143) ) ) {
              sum += (double)0.661462117647058756;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.117613792419433594) ) ) {
                sum += (double)0.7215472500000000844;
              } else {
                sum += (double)0.7855211875000001065;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.43877506256103516) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.61491107940673828) ) ) {
              sum += (double)0.6164116666666666911;
            } else {
              sum += (double)0.7115046851851850596;
            }
          } else {
            sum += (double)0.5310051634615384764;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5475879907608032227) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7495625615119934082) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.96105480194091797) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5301988720893859863) ) ) {
              sum += (double)0.5193022916666666378;
            } else {
              sum += (double)0.3940830833333333061;
            }
          } else {
            sum += (double)0.2329388522727272592;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.240928888320922852) ) ) {
            sum += (double)0.3834776842105263595;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1989.45965576171875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.216002464294433594) ) ) {
                sum += (double)0.301420965517241346;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.41847801208496094) ) ) {
                  sum += (double)0.1322274761904761731;
                } else {
                  sum += (double)0.263989874999999985;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.0501251220703125) ) ) {
                sum += (double)0.1089732115384615257;
              } else {
                sum += (double)0.0514085499999999973;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.455406785011291504) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6881895065307617188) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1847000047564506531) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
                sum += (double)0.2148823833333333433;
              } else {
                sum += (double)0.4095169456521738915;
              }
            } else {
              sum += (double)0.5476105108695652479;
            }
          } else {
            sum += (double)0.6342863809523808794;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.262626290321350098) ) ) {
            sum += (double)0.4012812499999999227;
          } else {
            sum += (double)0.1986966931818181792;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3711820095777511597) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.08423900604248047) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1946944966912269592) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4254.421630859375) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1351464986801147461) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.384036064147949219) ) ) {
              sum += (double)0.1812036458333332878;
            } else {
              sum += (double)0.05641597413793102839;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04449999891221523285) ) ) {
              sum += (double)0.3884116562500000147;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.47795486450195312) ) ) {
                sum += (double)0.2525009821428571555;
              } else {
                sum += (double)0.1226241250000000005;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.618206501007080078) ) ) {
            sum += (double)0.1161532499999999857;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3496464937925338745) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.96218490600585938) ) ) {
                sum += (double)0.03266981000000000052;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02439999952912330627) ) ) {
                  sum += (double)0.004606647058823529553;
                } else {
                  sum += (double)0.01130566666666666699;
                }
              }
            } else {
              sum += (double)0.07981218478260868054;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9385171830654144287) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2921479940414428711) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.15727686882019043) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2082.72357177734375) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.171477295458316803) ) ) {
                  sum += (double)0.2714678636363636599;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3232.1558837890625) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2677785009145736694) ) ) {
                      sum += (double)0.3839273240740739279;
                    } else {
                      sum += (double)0.3117768125000000001;
                    }
                  } else {
                    sum += (double)0.4464352321428571857;
                  }
                }
              } else {
                sum += (double)0.2391459196428571132;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8663.2158203125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12265.44287109375) ) ) {
                  sum += (double)0.3594668809523809405;
                } else {
                  sum += (double)0.2500901249999999965;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2665.1705322265625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.242532253265380859) ) ) {
                    sum += (double)0.3058672812500000115;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2445449978113174438) ) ) {
                      sum += (double)0.2014721590909090976;
                    } else {
                      sum += (double)0.1014828099999999927;
                    }
                  }
                } else {
                  sum += (double)0.06058765789473682245;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4253202527761459351) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.73055553436279297) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7646499872207641602) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.341218233108520508) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.86016273498535156) ) ) {
                      sum += (double)0.3811287268518518956;
                    } else {
                      sum += (double)0.4795115241935484218;
                    }
                  } else {
                    sum += (double)0.3037534285714285631;
                  }
                } else {
                  sum += (double)0.2305397934782608682;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.342113003134727478) ) ) {
                  sum += (double)0.5088779239130435395;
                } else {
                  sum += (double)0.4135009333333333759;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.18783760070800781) ) ) {
                sum += (double)0.3597686071428572441;
              } else {
                sum += (double)0.1882195394736841942;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3266.2825927734375) ) ) {
            sum += (double)0.1279266203703703642;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09409999847412109375) ) ) {
              sum += (double)0.05412533333333333085;
            } else {
              sum += (double)0.0122307105263157901;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2436510026454925537) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1119664981961250305) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.44532966613769531) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78215789794921875) ) ) {
                sum += (double)0.02521941666666666776;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05276750028133392334) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.002199999988079071045) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.003004833333333333314;
                  }
                } else {
                  sum += (double)0.005484333333333333248;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11362.58935546875) ) ) {
                sum += (double)0.1042555357142856964;
              } else {
                sum += (double)0.02824778571428570792;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)59.6875) ) ) {
              sum += (double)0.016406892857142856;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2051999941468238831) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2175422757863998413) ) ) {
                  sum += (double)0.004996673913043479451;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)121.3120880126953125) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17959.96875) ) ) {
                      sum += (double)0.006069073529411765644;
                    } else {
                      sum += (double)0.002745404761904763138;
                    }
                  } else {
                    sum += (double)0.002500000000000000919;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2926499992609024048) ) ) {
                  sum += (double)0.0208293269230769261;
                } else {
                  sum += (double)0.005352921875000001342;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6687000095844268799) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.50447940826416016) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12909.64892578125) ) ) {
                sum += (double)0.1535642647058823584;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.51785755157470703) ) ) {
                  sum += (double)0.07483534999999999493;
                } else {
                  sum += (double)0.004167374999999999205;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4843500107526779175) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.75889205932617188) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2939.94921875) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.81169319152832031) ) ) {
                      sum += (double)0.0239661187499999942;
                    } else {
                      sum += (double)0.03903791304347826313;
                    }
                  } else {
                    sum += (double)0.002499999999999999618;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25524.3740234375) ) ) {
                    sum += (double)0.01238584615384615527;
                  } else {
                    sum += (double)0.00314415789473684263;
                  }
                }
              } else {
                sum += (double)0.06284269230769230774;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06684999912977218628) ) ) {
              sum += (double)0.1785679342105263301;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.9444427490234375) ) ) {
                sum += (double)0.1134020789473684232;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20845.7197265625) ) ) {
                  sum += (double)0.06584991249999998242;
                } else {
                  sum += (double)0.01238466666666666709;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6150999963283538818) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4126075804233551025) ) ) {
            sum += (double)0.1460781599999999569;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3240.664794921875) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2715175002813339233) ) ) {
                sum += (double)0.1321943095238095334;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9048346579074859619) ) ) {
                  sum += (double)0.09581715178571428848;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1757499948143959045) ) ) {
                    sum += (double)0.05572920000000000651;
                  } else {
                    sum += (double)0.0101746785714285741;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9572030603885650635) ) ) {
                sum += (double)0.03319070833333333248;
              } else {
                sum += (double)0.004111944444444444111;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.686187744140625) ) ) {
            sum += (double)0.249243464285714339;
          } else {
            sum += (double)0.1091027272727272401;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4077123850584030151) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5390599966049194336) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.770978927612304688) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.042261838912963867) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3545.172119140625) ) ) {
              sum += (double)0.4311626911764706027;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2692.2867431640625) ) ) {
                sum += (double)0.6122287058823527861;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.28125) ) ) {
                  sum += (double)0.5442452045454546639;
                } else {
                  sum += (double)0.484249047619047579;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2144.4927978515625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.596391677856445312) ) ) {
                sum += (double)0.3960134333333333867;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3065.16162109375) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5935.747314453125) ) ) {
                    sum += (double)0.509204934210526261;
                  } else {
                    sum += (double)0.4132567222222222614;
                  }
                } else {
                  sum += (double)0.5916429374999999657;
                }
              }
            } else {
              sum += (double)0.3469987333333333646;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675955027341842651) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.25) ) ) {
              sum += (double)0.360099012499999982;
            } else {
              sum += (double)0.2165802499999999742;
            }
          } else {
            sum += (double)0.426973421874999981;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6539085209369659424) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.120183311402797699) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03170000016689300537) ) ) {
                sum += (double)0.6866131203703703667;
              } else {
                sum += (double)0.617293351851851857;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0612000003457069397) ) ) {
                sum += (double)0.5169643593749999599;
              } else {
                sum += (double)0.5941370921052631093;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6797190010547637939) ) ) {
              sum += (double)0.7496912624999999553;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.130202852189540863) ) ) {
                sum += (double)0.6618226249999999977;
              } else {
                sum += (double)0.7072120657894737095;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9451737403869628906) ) ) {
            sum += (double)0.8680860378787877973;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08756742626428604126) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2642.434326171875) ) ) {
                sum += (double)0.7674168749999999983;
              } else {
                sum += (double)0.6816290833333334964;
              }
            } else {
              sum += (double)0.8051442857142857568;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5474214851856231689) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.709855079650878906) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9743910431861877441) ) ) {
            sum += (double)0.4619738214285713518;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1866.04327392578125) ) ) {
              sum += (double)0.366977260416666784;
            } else {
              sum += (double)0.2095709047619047083;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1962.20025634765625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.32458257675170898) ) ) {
              sum += (double)0.3772208055555554829;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.425899997353553772) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09470000118017196655) ) ) {
                  sum += (double)0.2278329230769230995;
                } else {
                  sum += (double)0.1058908749999999954;
                }
              } else {
                sum += (double)0.3061224021739130108;
              }
            }
          } else {
            sum += (double)0.06749788281249997912;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.029400944709777832) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1117499992251396179) ) ) {
            sum += (double)0.3015878552631579002;
          } else {
            sum += (double)0.6458775937500000897;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.956643402576446533) ) ) {
            sum += (double)0.4387859537037036572;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3779.5599365234375) ) ) {
              sum += (double)0.3805897678571429354;
            } else {
              sum += (double)0.2038229285714285854;
            }
          }
        }
      }
    }
  }
  return sum;
}
