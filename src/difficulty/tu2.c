#include "prediction.h"
double predict_margin_unit2(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47832450270652771) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4600000083446502686) ) ) {
          sum += (double)0.088503754489063724;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.258018136024475098) ) ) {
              sum += (double)0.1326195880721437459;
            } else {
              sum += (double)0.2230878259111031825;
            }
          } else {
            sum += (double)0.3759202231006337214;
          }
        }
      } else {
        sum += (double)0.502642239592285045;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.138888835906982422) ) ) {
            sum += (double)0.1140729880595798551;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09103149920701980591) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.45217132568359375) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.16559791564941406) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03651849925518035889) ) ) {
                      sum += (double)0.004000000000000000951;
                    } else {
                      sum += (double)0.009848742857142859033;
                    }
                  } else {
                    sum += (double)0.01682766282051282106;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4876.006591796875) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8596999943256378174) ) ) {
                      sum += (double)0.00446579325842696908;
                    } else {
                      sum += (double)0.00703527619047619214;
                    }
                  } else {
                    sum += (double)0.01027908888888889177;
                  }
                }
              } else {
                sum += (double)0.02304715539717349174;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8536999821662902832) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702707648277282715) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4303500056266784668) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.23412704467773438) ) ) {
                      sum += (double)0.09624255606470381863;
                    } else {
                      sum += (double)0.02599050000000000665;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1003424972295761108) ) ) {
                      sum += (double)0.04900028571428571844;
                    } else {
                      sum += (double)0.0222339984437315008;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.177854359149932861) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.046295166015625) ) ) {
                      sum += (double)0.01886476114285714351;
                    } else {
                      sum += (double)0.005996847058823528975;
                    }
                  } else {
                    sum += (double)0.005663277777777779229;
                  }
                }
              } else {
                sum += (double)0.09294536266679084835;
              }
            }
          }
        } else {
          sum += (double)0.145126113748616975;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5689119994640350342) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009450000245124101639) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1846069991588592529) ) ) {
              sum += (double)0.3098420541664349548;
            } else {
              sum += (double)0.1694381815126050628;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.439700007438659668) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6750000119209289551) ) ) {
                sum += (double)0.1059601076484348592;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7443425357341766357) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.55218696594238281) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9099999964237213135) ) ) {
                      sum += (double)0.04068649773513358103;
                    } else {
                      sum += (double)0.1042731090579002012;
                    }
                  } else {
                    sum += (double)0.02269215392015392144;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1516999974846839905) ) ) {
                    sum += (double)0.008101661538461540565;
                  } else {
                    sum += (double)0.03139999353155972783;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2253270000219345093) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.86128807067871094) ) ) {
                  sum += (double)0.1970636896265529348;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6917999982833862305) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5804999768733978271) ) ) {
                      sum += (double)0.05854953143693716888;
                    } else {
                      sum += (double)0.02295591975537689469;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.166383497416973114) ) ) {
                      sum += (double)0.05653217753517582322;
                    } else {
                      sum += (double)0.1728648120990120829;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13783.8515625) ) ) {
                  sum += (double)0.104905771079877197;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57226133346557617) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2457927614450454712) ) ) {
                      sum += (double)0.1127335084927456876;
                    } else {
                      sum += (double)0.2070878137295042998;
                    }
                  } else {
                    sum += (double)0.2687132094173803609;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.3095205619712908529;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9070492982864379883) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83318185806274414) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03309999965131282806) ) ) {
              sum += (double)0.540152086022143707;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.185559496283531189) ) ) {
                  sum += (double)0.3000821808136209801;
                } else {
                  sum += (double)0.4122106506816961002;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2175995036959648132) ) ) {
                  sum += (double)0.1533769215030530708;
                } else {
                  sum += (double)0.3223814248930521043;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2099.56005859375) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007599999895319342613) ) ) {
                  sum += (double)0.5972485109548874016;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.921875) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.87653636932373047) ) ) {
                      sum += (double)0.4968266364686527714;
                    } else {
                      sum += (double)0.3583807921490541615;
                    }
                  } else {
                    sum += (double)0.5826571499484642924;
                  }
                }
              } else {
                sum += (double)0.3390628582441826966;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1408701911568641663) ) ) {
                  sum += (double)0.6726414102564102215;
                } else {
                  sum += (double)0.5933192890600041958;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                  sum += (double)0.6117690745654443818;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3942845016717910767) ) ) {
                    sum += (double)0.5400998127090300693;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1794999986886978149) ) ) {
                      sum += (double)0.4035311385770792292;
                    } else {
                      sum += (double)0.5199071871919541676;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1240499988198280334) ) ) {
            sum += (double)0.4119348631051789056;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2680875062942504883) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3113500028848648071) ) ) {
                sum += (double)0.2126431156530772526;
              } else {
                sum += (double)0.05225733261067161406;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4804500043392181396) ) ) {
                sum += (double)0.2078640552680370845;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7113499939441680908) ) ) {
                  sum += (double)0.4393038936687427287;
                } else {
                  sum += (double)0.2363007054971787424;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709160089492797852) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.089089453220367432) ) ) {
            sum += (double)0.2467760858224462561;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.297987461090087891) ) ) {
              sum += (double)0.142890468567138107;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17058.76953125) ) ) {
                sum += (double)0.08593008924432565809;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.469235420227050781) ) ) {
                  sum += (double)0.04298337768270663051;
                } else {
                  sum += (double)0.01549826315789473892;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.591643571853637695) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1961.10186767578125) ) ) {
              sum += (double)0.4370579497609864972;
            } else {
              sum += (double)0.2040464799587518863;
            }
          } else {
            sum += (double)0.1080993342213648067;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6194075047969818115) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.23529386520385742) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.875076651573181152) ) ) {
                  sum += (double)0.6181538686404139948;
                } else {
                  sum += (double)0.5225085541865437389;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5594.947265625) ) ) {
                  sum += (double)0.6024747307419461295;
                } else {
                  sum += (double)0.6970807165079364598;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5845499932765960693) ) ) {
                sum += (double)0.6251276550742489446;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03225000016391277313) ) ) {
                  sum += (double)0.7589071904761905962;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5761895179748535156) ) ) {
                    sum += (double)0.6965269001349527755;
                  } else {
                    sum += (double)0.648765855910273137;
                  }
                }
              }
            }
          } else {
            sum += (double)0.461142549686782699;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7125905156135559082) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.81451606750488281) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.51964664459228516) ) ) {
                sum += (double)0.7301389837674814309;
              } else {
                sum += (double)0.792832942151162734;
              }
            } else {
              sum += (double)0.6821754912280701966;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1855.27813720703125) ) ) {
                sum += (double)0.8239409675371224262;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1138.35577392578125) ) ) {
                  sum += (double)0.8939277684210525932;
                } else {
                  sum += (double)0.8417773100478468384;
                }
              }
            } else {
              sum += (double)0.7549966894635481429;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.859554588794708252) ) ) {
          sum += (double)0.5545589571878786206;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
            sum += (double)0.407105033160949592;
          } else {
            sum += (double)0.194424037471161687;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4626670032739639282) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.908870220184326172) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.805000007152557373) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1836035028100013733) ) ) {
            sum += (double)0.03326987;
          } else {
            sum += (double)0.1357467678200432459;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.46661376953125) ) ) {
            sum += (double)0.1870170821137423223;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.431538581848144531) ) ) {
              sum += (double)0.3619581846827386595;
            } else {
              sum += (double)0.4609766552023095154;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.74512958526611328) ) ) {
            sum += (double)0.07421833630312339725;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07185503095388412476) ) ) {
              sum += (double)0.0644147461988304193;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2025000005960464478) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8391000032424926758) ) ) {
                      sum += (double)0.004261468965517244308;
                    } else {
                      sum += (double)0.008527647058823530427;
                    }
                  } else {
                    sum += (double)0.008536666666666669831;
                  }
                } else {
                  sum += (double)0.01382817600000000105;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                  sum += (double)0.04589409297602980997;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.43487167358398438) ) ) {
                    sum += (double)0.04187615842852568382;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9880029857158660889) ) ) {
                      sum += (double)0.01918811832246515234;
                    } else {
                      sum += (double)0.004170274285714286287;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002550000092014670372) ) ) {
            sum += (double)0.1953707872872226248;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2139765024185180664) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.967741966247558594) ) ) {
                sum += (double)0.1661202232186161643;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.396049991250038147) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6859801411628723145) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2774000018835067749) ) ) {
                      sum += (double)0.02991892744081678032;
                    } else {
                      sum += (double)0.05360256616352758463;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2427999973297119141) ) ) {
                      sum += (double)0.007751266666666666895;
                    } else {
                      sum += (double)0.01292512929292929588;
                    }
                  }
                } else {
                  sum += (double)0.05731914215086408859;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4293383657932281494) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.814999997615814209) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1546500027179718018) ) ) {
                    sum += (double)0.2564059843728158095;
                  } else {
                    sum += (double)0.1605052153342005627;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2846820950508117676) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05019999854266643524) ) ) {
                      sum += (double)0.05089860892822245519;
                    } else {
                      sum += (double)0.1015327044406474644;
                    }
                  } else {
                    sum += (double)0.1612858711531078293;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
                  sum += (double)0.115241923286855133;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.373050004243850708) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7742502689361572266) ) ) {
                      sum += (double)0.04781476880161028564;
                    } else {
                      sum += (double)0.01825551404935647076;
                    }
                  } else {
                    sum += (double)0.07641675299924730047;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.579411745071411133) ) ) {
        sum += (double)0.5606005097120845271;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1119.5023193359375) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4069.2884521484375) ) ) {
            sum += (double)0.238060749231954194;
          } else {
            sum += (double)0.4403947038903294198;
          }
        } else {
          sum += (double)0.06348120366300366579;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.46314200758934021) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.88891696929931641) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340364500880241394) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001099999994039535522) ) ) {
              sum += (double)0.6052595481780942421;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.300361394882202148) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713164985179901123) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.784518003463745117) ) ) {
                    sum += (double)0.4781638613673834803;
                  } else {
                    sum += (double)0.3779320406855612435;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3039920032024383545) ) ) {
                    sum += (double)0.5535765830281087485;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.16286778450012207) ) ) {
                      sum += (double)0.4416898039473095006;
                    } else {
                      sum += (double)0.5353083929333327662;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19636.5) ) ) {
                  sum += (double)0.5199107832407557916;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.077176570892333984) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5509.15625) ) ) {
                      sum += (double)0.4335239143578670795;
                    } else {
                      sum += (double)0.2965119498584027902;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1745999976992607117) ) ) {
                      sum += (double)0.1588400075730118932;
                    } else {
                      sum += (double)0.3239454160792091808;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01974999997764825821) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.78706932067871094) ) ) {
                sum += (double)0.6100949472222221281;
              } else {
                sum += (double)0.6876588565248736851;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2428.0433349609375) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2705.5675048828125) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.680555343627929688) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7481000125408172607) ) ) {
                      sum += (double)0.5490109754799495922;
                    } else {
                      sum += (double)0.6142741162393162702;
                    }
                  } else {
                    sum += (double)0.5186549442060583992;
                  }
                } else {
                  sum += (double)0.499932762059607072;
                }
              } else {
                sum += (double)0.6027407965971488535;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.33650779724121094) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3335070013999938965) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2219502776861190796) ) ) {
                sum += (double)0.3545252664044020174;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33205.66796875) ) ) {
                  sum += (double)0.3043953985393256234;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3115000128746032715) ) ) {
                    sum += (double)0.2062116621283883455;
                  } else {
                    sum += (double)0.07605802758735784319;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15424.068359375) ) ) {
                sum += (double)0.5238624360322745588;
              } else {
                sum += (double)0.3214868921156993076;
              }
            }
          } else {
            sum += (double)0.06716667911420033665;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.340321898460388184) ) ) {
          sum += (double)0.3273232943703079934;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
            sum += (double)0.2459662976726532946;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.850671052932739258) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1397499963641166687) ) ) {
                sum += (double)0.02231860000000000094;
              } else {
                sum += (double)0.2316321143786946868;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.34412956237792969) ) ) {
                sum += (double)0.07224670147763141703;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1450000032782554626) ) ) {
                  sum += (double)0.03854312696556205092;
                } else {
                  sum += (double)0.01466813333333333649;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6643044948577880859) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1315999999642372131) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
            sum += (double)0.5326969697612347066;
          } else {
            sum += (double)0.2596966518566848903;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468925237655639648) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.74278450012207031) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.56788933277130127) ) ) {
                  sum += (double)0.613416249321931506;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07990000024437904358) ) ) {
                    sum += (double)0.4670539578834772554;
                  } else {
                    sum += (double)0.564517723195289145;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3666.4161376953125) ) ) {
                  sum += (double)0.6163007990660829272;
                } else {
                  sum += (double)0.702171355555555543;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2413.950927734375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8345.41845703125) ) ) {
                  sum += (double)0.612656885606060575;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.130457162857055664) ) ) {
                    sum += (double)0.6332803282492154295;
                  } else {
                    sum += (double)0.6960606203373015388;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.931028366088867188) ) ) {
                  sum += (double)0.6713239427014794369;
                } else {
                  sum += (double)0.7551053931623932236;
                }
              }
            }
          } else {
            sum += (double)0.4519307233881423302;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8093110918998718262) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7434380054473876953) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.25765323638916016) ) ) {
              sum += (double)0.7580008556588717639;
            } else {
              sum += (double)0.7959292158865823863;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0385500006377696991) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9451737403869628906) ) ) {
                sum += (double)0.8884009529411764916;
              } else {
                sum += (double)0.8561480806818181355;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2851.353759765625) ) ) {
                sum += (double)0.7991044276995304951;
              } else {
                sum += (double)0.842522745335820944;
              }
            }
          }
        } else {
          sum += (double)0.5810066803716338324;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228154927492141724) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7849999964237213135) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.608771800994873047) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.89999961853027344) ) ) {
            sum += (double)0.1838205764582895863;
          } else {
            sum += (double)0.1388133762022455975;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.27391290664672852) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.841269493103027344) ) ) {
                  sum += (double)0.007278926020408164541;
                } else {
                  sum += (double)0.02579711071428571895;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.133979499340057373) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.845149993896484375) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.20833206176757812) ) ) {
                      sum += (double)0.005255930434782609892;
                    } else {
                      sum += (double)0.004000000000000002685;
                    }
                  } else {
                    sum += (double)0.00590706666666666793;
                  }
                } else {
                  sum += (double)0.006938800000000000176;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2187.6689453125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9404.41015625) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7200362682342529297) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5748308002948760986) ) ) {
                      sum += (double)0.01398476628787879289;
                    } else {
                      sum += (double)0.05887145454545454626;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2249999940395355225) ) ) {
                      sum += (double)0.004731182608695653352;
                    } else {
                      sum += (double)0.01258267368421052586;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5491.355224609375) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.38191699981689453) ) ) {
                      sum += (double)0.0873830245425391422;
                    } else {
                      sum += (double)0.03750664549295774919;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.87439346313476562) ) ) {
                      sum += (double)0.01538494814814815245;
                    } else {
                      sum += (double)0.04607847845487845345;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1496.64459228515625) ) ) {
                  sum += (double)0.08465130530019568389;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2169744968414306641) ) ) {
                    sum += (double)0.01305645333333333401;
                  } else {
                    sum += (double)0.05219370909090909061;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2679359316825866699) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.620000004768371582) ) ) {
                sum += (double)0.191085529322425951;
              } else {
                sum += (double)0.04768026389772592882;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.40746784210205078) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07835000008344650269) ) ) {
                  sum += (double)0.05162134903882192871;
                } else {
                  sum += (double)0.1407867352369392144;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)49.04583358764648438) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3392500132322311401) ) ) {
                    sum += (double)0.00694050769230769235;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4215887784957885742) ) ) {
                      sum += (double)0.009182826666666666152;
                    } else {
                      sum += (double)0.03307179945740640337;
                    }
                  }
                } else {
                  sum += (double)0.06312356056112707059;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01714999973773956299) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
            sum += (double)0.2046577904409168924;
          } else {
            sum += (double)0.3766996035950906374;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.651904106140136719) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.32023906707763672) ) ) {
              sum += (double)0.1284279166884702561;
            } else {
              sum += (double)0.3096176497807612837;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6086320579051971436) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8007.293212890625) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6981000006198883057) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12818.9296875) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.94131565093994141) ) ) {
                      sum += (double)0.08438048137587045305;
                    } else {
                      sum += (double)0.02638147229695327056;
                    }
                  } else {
                    sum += (double)0.02195841818181818242;
                  }
                } else {
                  sum += (double)0.1205240562735626908;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38197803497314453) ) ) {
                  sum += (double)0.06932248768535874406;
                } else {
                  sum += (double)0.2636485606824203187;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5169000029563903809) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3432999998331069946) ) ) {
                  sum += (double)0.01254890370370370482;
                } else {
                  sum += (double)0.03400729065520945171;
                }
              } else {
                sum += (double)0.05361133848257006174;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6649999916553497314) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
          sum += (double)0.05476290645161290688;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)88.59999847412109375) ) ) {
            sum += (double)0.1837649718995814363;
          } else {
            sum += (double)0.1069718122720594716;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002700000011827796698) ) ) {
          sum += (double)0.5495309424560564926;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6000744998455047607) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4775499999523162842) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.514705657958984375) ) ) {
                sum += (double)0.2190711686594273289;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4380.429443359375) ) ) {
                  sum += (double)0.127674477427075217;
                } else {
                  sum += (double)0.03762756301075268622;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2664.3167724609375) ) ) {
                sum += (double)0.2330834825619103323;
              } else {
                sum += (double)0.4627465615588509662;
              }
            }
          } else {
            sum += (double)0.4299611486129895632;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.95028257369995117) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.5745225209481716888;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1745999976992607117) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8579.4609375) ) ) {
                  sum += (double)0.2700473087535175676;
                } else {
                  sum += (double)0.1689935020084552819;
                }
              } else {
                sum += (double)0.3416001433311156577;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4338.4638671875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349104970693588257) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.197473049163818359) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.280787229537963867) ) ) {
                      sum += (double)0.4923182043080688852;
                    } else {
                      sum += (double)0.5400809413903682188;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2784494906663894653) ) ) {
                      sum += (double)0.5012497536873002923;
                    } else {
                      sum += (double)0.4010744221145889354;
                    }
                  }
                } else {
                  sum += (double)0.5822386850212699638;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.00393199920654297) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2988047748804092407) ) ) {
                    sum += (double)0.5570249102783733086;
                  } else {
                    sum += (double)0.4305442390956714105;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.31531524658203125) ) ) {
                    sum += (double)0.279346188891289815;
                  } else {
                    sum += (double)0.3758878369706694089;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07294999808073043823) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.73177719116210938) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2668.5855712890625) ) ) {
                    sum += (double)0.6134946995332298814;
                  } else {
                    sum += (double)0.5646670711402850262;
                  }
                } else {
                  sum += (double)0.6718393624999998703;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.5233917236328125) ) ) {
                  sum += (double)0.5974982066917048362;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6936999857425689697) ) ) {
                    sum += (double)0.5419735709541920743;
                  } else {
                    sum += (double)0.4454754368682075638;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.335476994514465332) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506500184535980225) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3066205084323883057) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2307000011205673218) ) ) {
                  sum += (double)0.3569421230056165073;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3161499947309494019) ) ) {
                    sum += (double)0.2264592269771235067;
                  } else {
                    sum += (double)0.3190492580724709204;
                  }
                }
              } else {
                sum += (double)0.1400199336361699909;
              }
            } else {
              sum += (double)0.1061619238619518069;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4373503327369689941) ) ) {
              sum += (double)0.4745095479316194798;
            } else {
              sum += (double)0.2759991098112482555;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.63289952278137207) ) ) {
          sum += (double)0.2832458755992205979;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3880645036697387695) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3470.424560546875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.200499996542930603) ) ) {
                sum += (double)0.2081134099163585993;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.72295522689819336) ) ) {
                  sum += (double)0.1163928700399477906;
                } else {
                  sum += (double)0.01619925714285714441;
                }
              }
            } else {
              sum += (double)0.01415872307692308055;
            }
          } else {
            sum += (double)0.1970940692596817867;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.09328365325927734) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                  sum += (double)0.6194526595965178517;
                } else {
                  sum += (double)0.6963365128747796007;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.19485282897949219) ) ) {
                  sum += (double)0.6059567744332434724;
                } else {
                  sum += (double)0.551874523145581275;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7636.164306640625) ) ) {
                sum += (double)0.6173501056997284797;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280848264694213867) ) ) {
                  sum += (double)0.651006227001663107;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.898981332778930664) ) ) {
                    sum += (double)0.7549382266666666563;
                  } else {
                    sum += (double)0.6938648276397931802;
                  }
                }
              }
            }
          } else {
            sum += (double)0.4670770471394565249;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.40726470947265625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.456896543502807617) ) ) {
                sum += (double)0.7489889092146780891;
              } else {
                sum += (double)0.8098725111111111374;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1575.6549072265625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.449062108993530273) ) ) {
                  sum += (double)0.792060137563435851;
                } else {
                  sum += (double)0.8487014117647058153;
                }
              } else {
                sum += (double)0.8958586615384613872;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7049920260906219482) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.111600000411272049) ) ) {
                sum += (double)0.7160901444444446318;
              } else {
                sum += (double)0.6265119362746396359;
              }
            } else {
              sum += (double)0.7794800374999999448;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.074011802673339844) ) ) {
          sum += (double)0.558026726415215002;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
            sum += (double)0.5297977442460725106;
          } else {
            sum += (double)0.2592361249755765207;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1399450600147247314) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2368410006165504456) ) ) {
            sum += (double)0.1054133240383860609;
          } else {
            sum += (double)0.3443636679985437321;
          }
        } else {
          sum += (double)0.08892318301211980802;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4777210056781768799) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2355999946594238281) ) ) {
            sum += (double)0.2621217920566339399;
          } else {
            sum += (double)0.4095077163299727374;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2775000035762786865) ) ) {
            sum += (double)0.4576246722013718182;
          } else {
            sum += (double)0.6250565200417835809;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1862149983644485474) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08917750045657157898) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.42391300201416016) ) ) {
                  sum += (double)0.009430962962962963908;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.7894744873046875) ) ) {
                    sum += (double)0.006284771428571428974;
                  } else {
                    sum += (double)0.004000000000000002685;
                  }
                }
              } else {
                sum += (double)0.01474501818181818587;
              }
            } else {
              sum += (double)0.01649465918367347406;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
              sum += (double)0.09079447212807696677;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1929.4031982421875) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1589415743947029114) ) ) {
                  sum += (double)0.03484070871794871932;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3218000084161758423) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1900000050663948059) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.009523350000000001606;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6239885389804840088) ) ) {
                      sum += (double)0.01580031224882055135;
                    } else {
                      sum += (double)0.03220104444444444464;
                    }
                  }
                }
              } else {
                sum += (double)0.048285638843813386;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3377366513013839722) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.01538467407226562) ) ) {
              sum += (double)0.0654437161704767012;
            } else {
              sum += (double)0.1843701511643789093;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.392094731330871582) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.91666698455810547) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02089999988675117493) ) ) {
                  sum += (double)0.02339549473684210748;
                } else {
                  sum += (double)0.06477835724661387684;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5710.900146484375) ) ) {
                  sum += (double)0.01225987826086956389;
                } else {
                  sum += (double)0.004000000000000000951;
                }
              }
            } else {
              sum += (double)0.1131530041958042077;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4376685023307800293) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.24722909927368164) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0170499999076128006) ) ) {
              sum += (double)0.2589333053189702971;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7601500153541564941) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6701500117778778076) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1173000037670135498) ) ) {
                    sum += (double)0.0591990025797873784;
                  } else {
                    sum += (double)0.1816115576438218637;
                  }
                } else {
                  sum += (double)0.2610941131268905702;
                }
              } else {
                sum += (double)0.08342315484206000442;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5546499788761138916) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09582749754190444946) ) ) {
                sum += (double)0.1403057105602422694;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2042269185185432434) ) ) {
                  sum += (double)0.09501883526073057196;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
                    sum += (double)0.08107592523962006692;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3371499925851821899) ) ) {
                      sum += (double)0.01586208587408671072;
                    } else {
                      sum += (double)0.04329788491814404866;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.1630319755644268898;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07344999909400939941) ) ) {
            sum += (double)0.1208230148133113413;
          } else {
            sum += (double)0.3550098705146486622;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.34090900421142578) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01555000012740492821) ) ) {
              sum += (double)0.5221590926578759673;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5474.4013671875) ) ) {
                  sum += (double)0.4279570118414489088;
                } else {
                  sum += (double)0.2867874806196756277;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1191499978303909302) ) ) {
                  sum += (double)0.1664458251852779791;
                } else {
                  sum += (double)0.2772101075000911741;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.142307758331298828) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02039999980479478836) ) ) {
                  sum += (double)0.5455065983260579676;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.608206272125244141) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.392513036727905273) ) ) {
                      sum += (double)0.5034946620185573041;
                    } else {
                      sum += (double)0.543500329476052757;
                    }
                  } else {
                    sum += (double)0.4374404824210338383;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1543499976396560669) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5479.758056640625) ) ) {
                    sum += (double)0.4903799931905526432;
                  } else {
                    sum += (double)0.317315683531093129;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4101201742887496948) ) ) {
                    sum += (double)0.5684333854238771133;
                  } else {
                    sum += (double)0.4662025192751316771;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.301644444465637207) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6965000033378601074) ) ) {
                    sum += (double)0.6564895924749163392;
                  } else {
                    sum += (double)0.6028496131519274215;
                  }
                } else {
                  sum += (double)0.5696992322621157179;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                  sum += (double)0.6007987613316815301;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147095084190368652) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2007963582873344421) ) ) {
                      sum += (double)0.4870485351016800024;
                    } else {
                      sum += (double)0.5714548940315805625;
                    }
                  } else {
                    sum += (double)0.4075080324190248349;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363225013017654419) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.98106765747070312) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1958554983139038086) ) ) {
                  sum += (double)0.1085228676646418644;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16710.9365234375) ) ) {
                    sum += (double)0.38231719976251205;
                  } else {
                    sum += (double)0.2188737609662804173;
                  }
                }
              } else {
                sum += (double)0.3982508344282742474;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2603000029921531677) ) ) {
                sum += (double)0.07282604747600227024;
              } else {
                sum += (double)0.2211110796635425702;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3789484947919845581) ) ) {
              sum += (double)0.484543635804387085;
            } else {
              sum += (double)0.2856279002986431559;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.710898756980895996) ) ) {
          sum += (double)0.3711170751897374664;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08080000057816505432) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.775188267230987549) ) ) {
              sum += (double)0.3088931448631970222;
            } else {
              sum += (double)0.1031090472088983662;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17592.8583984375) ) ) {
              sum += (double)0.09955555240528995986;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1489500030875205994) ) ) {
                sum += (double)0.01209320000000000186;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1966999992728233337) ) ) {
                  sum += (double)0.08630423888996281712;
                } else {
                  sum += (double)0.0286426194148936171;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6742173731327056885) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5441325008869171143) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85396003723144531) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1959781572222709656) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3041.1116943359375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5011765062808990479) ) ) {
                  sum += (double)0.6332098242358589202;
                } else {
                  sum += (double)0.5810626028676840749;
                }
              } else {
                sum += (double)0.6964125555555554792;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2959.3824462890625) ) ) {
                sum += (double)0.6157967067831369157;
              } else {
                sum += (double)0.5125355313797314016;
              }
            }
          } else {
            sum += (double)0.4064970527293302882;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2436.00927734375) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7850.490234375) ) ) {
                sum += (double)0.6258424705360238205;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.427056074142456055) ) ) {
                  sum += (double)0.6490609626328774917;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.214798688888549805) ) ) {
                    sum += (double)0.7445004324675325025;
                  } else {
                    sum += (double)0.6964834018518518688;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.861335158348083496) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6220724880695343018) ) ) {
                  sum += (double)0.7421350000000001002;
                } else {
                  sum += (double)0.7934652090357597887;
                }
              } else {
                sum += (double)0.6980675104377103146;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3278.4515380859375) ) ) {
              sum += (double)0.7960109409453385299;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01849999930709600449) ) ) {
                sum += (double)0.8943481840909091041;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1727.71044921875) ) ) {
                  sum += (double)0.8361392907647907657;
                } else {
                  sum += (double)0.8665501760348585103;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6714514791965484619) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
            sum += (double)0.5475110075270297472;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
              sum += (double)0.3797509764196281279;
            } else {
              sum += (double)0.1844088582099030205;
            }
          }
        } else {
          sum += (double)0.5762972217960917742;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473649978637695312) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.947222232818603516) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.20833206176757812) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.310714483261108398) ) ) {
              sum += (double)0.07643445284230333814;
            } else {
              sum += (double)0.01527570133414190429;
            }
          } else {
            sum += (double)0.1515269016893004694;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03889999911189079285) ) ) {
            sum += (double)0.259017292297352264;
          } else {
            sum += (double)0.1051003014680219616;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07210149988532066345) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1700000017881393433) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.54464340209960938) ) ) {
                sum += (double)0.007945356521739129971;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05439149960875511169) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.005484680000000001325;
                  }
                } else {
                  sum += (double)0.007053919999999999982;
                }
              }
            } else {
              sum += (double)0.01755347337006428476;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.78529453277587891) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.32500028610229492) ) ) {
                sum += (double)0.01947866459627329433;
              } else {
                sum += (double)0.07771300649350647294;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0853369981050491333) ) ) {
                sum += (double)0.03980627423822715588;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)84.89898681640625) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2939.94921875) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1450000032782554626) ) ) {
                      sum += (double)0.03210737142857143095;
                    } else {
                      sum += (double)0.0155825000000000026;
                    }
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03865000046789646149) ) ) {
                    sum += (double)0.01325984615384615331;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                      sum += (double)0.004404029629629630828;
                    } else {
                      sum += (double)0.008143066666666668937;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6182352900505065918) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2120909988880157471) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4864984452724456787) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1873414963483810425) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2863192707300186157) ) ) {
                      sum += (double)0.03897758735191005075;
                    } else {
                      sum += (double)0.0175601384615384562;
                    }
                  } else {
                    sum += (double)0.06763849549293934893;
                  }
                } else {
                  sum += (double)0.09668206346153845887;
                }
              } else {
                sum += (double)0.1193538524944921242;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.101349998265504837) ) ) {
                sum += (double)0.169675009234938251;
              } else {
                sum += (double)0.07759518584466436331;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.685000002384185791) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.38808059692382812) ) ) {
                sum += (double)0.05373372944839547444;
              } else {
                sum += (double)0.01855983529411765059;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2908000051975250244) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08994999900460243225) ) ) {
                  sum += (double)0.005353949999999999682;
                } else {
                  sum += (double)0.01086927058823529413;
                }
              } else {
                sum += (double)0.0190615225572047034;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.222527503967285156) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-766.58837890625) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
            sum += (double)0.5783115069005173581;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1124.9454345703125) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84065914154052734) ) ) {
                sum += (double)0.4851926727772780112;
              } else {
                sum += (double)0.3507756448293700147;
              }
            } else {
              sum += (double)0.2897921720141799495;
            }
          }
        } else {
          sum += (double)0.1578226924173178336;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03599999845027923584) ) ) {
          sum += (double)0.3998632875692301192;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
            sum += (double)0.008009619047619050136;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6783999800682067871) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3587609976530075073) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2820990085601806641) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5589.800048828125) ) ) {
                    sum += (double)0.1468689876317406662;
                  } else {
                    sum += (double)0.07798354353535352779;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5492271780967712402) ) ) {
                    sum += (double)0.07116457665676366451;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1913000047206878662) ) ) {
                      sum += (double)0.0373921962962962956;
                    } else {
                      sum += (double)0.0229766117647058829;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.875) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17) ) ) {
                    sum += (double)0.181480016122626403;
                  } else {
                    sum += (double)0.3027958368161073888;
                  }
                } else {
                  sum += (double)0.1133769408034223797;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8537.62646484375) ) ) {
                sum += (double)0.1155436463252122875;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08239999786019325256) ) ) {
                  sum += (double)0.2160723075366907664;
                } else {
                  sum += (double)0.3473598571392309542;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4447671771049499512) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2269699946045875549) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07485000044107437134) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10699.02685546875) ) ) {
              sum += (double)0.4050303719372270739;
            } else {
              sum += (double)0.4979995132967879878;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2833499908447265625) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.4557342529296875) ) ) {
                sum += (double)0.3277616760224513204;
              } else {
                sum += (double)0.1692496455270517675;
              }
            } else {
              sum += (double)0.06199657728877058793;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3675389885902404785) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.30946969985961914) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.97889232635498047) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7127999961376190186) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008350000018253922462) ) ) {
                    sum += (double)0.6279563373424178474;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.54129791259765625) ) ) {
                      sum += (double)0.4988447196502246439;
                    } else {
                      sum += (double)0.3114611958157896821;
                    }
                  }
                } else {
                  sum += (double)0.3025337019380764381;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2813815027475357056) ) ) {
                  sum += (double)0.5533850465811965824;
                } else {
                  sum += (double)0.6105032603917137646;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3025994151830673218) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13900.77392578125) ) ) {
                  sum += (double)0.513720323637754217;
                } else {
                  sum += (double)0.3380088143588479421;
                }
              } else {
                sum += (double)0.2963269068799102013;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07304999977350234985) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999774154275656) ) ) {
                sum += (double)0.6868190966666664066;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.531039237976074219) ) ) {
                  sum += (double)0.6045041153338409634;
                } else {
                  sum += (double)0.655664125641025608;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7293500006198883057) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1734500005841255188) ) ) {
                  sum += (double)0.5991201881087919734;
                } else {
                  sum += (double)0.5101047488770121818;
                }
              } else {
                sum += (double)0.4112005489318661944;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.116747558116912842) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.90746784210205078) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.91803586483001709) ) ) {
              sum += (double)0.5353452120952371107;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5509.15625) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4786999970674514771) ) ) {
                  sum += (double)0.4895946578200533472;
                } else {
                  sum += (double)0.388981289518858131;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.776604175567626953) ) ) {
                  sum += (double)0.3170260878313180819;
                } else {
                  sum += (double)0.1954100639894020275;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6896195709705352783) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.53349494934082031) ) ) {
                sum += (double)0.1989208396083999297;
              } else {
                sum += (double)0.0725791157971180656;
              }
            } else {
              sum += (double)0.3169352931406815288;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
            sum += (double)0.3427124867860205648;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21313.9375) ) ) {
              sum += (double)0.2523598382895733683;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.405001640319824219) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3648.3824462890625) ) ) {
                  sum += (double)0.2050220732596035322;
                } else {
                  sum += (double)0.05880263482800460184;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1409000009298324585) ) ) {
                  sum += (double)0.03507705229741019809;
                } else {
                  sum += (double)0.009224420000000000536;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9429409801959991455) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.54652214050292969) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4733900129795074463) ) ) {
                  sum += (double)0.6449022910476190917;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.005156040191650391) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.66451728343963623) ) ) {
                      sum += (double)0.5982691490352710639;
                    } else {
                      sum += (double)0.6623400356136820433;
                    }
                  } else {
                    sum += (double)0.5415965644883496966;
                  }
                }
              } else {
                sum += (double)0.7006457383006535755;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992000043392181396) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3016.6683349609375) ) ) {
                  sum += (double)0.6316968919481982248;
                } else {
                  sum += (double)0.6816580297619047046;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05345000140368938446) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009000000078231096268) ) ) {
                    sum += (double)0.7150359549999999453;
                  } else {
                    sum += (double)0.7571318249597422945;
                  }
                } else {
                  sum += (double)0.6739446234265734637;
                }
              }
            }
          } else {
            sum += (double)0.4978422756510179625;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7240049839019775391) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8408499956130981445) ) ) {
                sum += (double)0.760105090399273875;
              } else {
                sum += (double)0.7882784762150853997;
              }
            } else {
              sum += (double)0.6980993476489243399;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03894999995827674866) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7887639999389648438) ) ) {
                sum += (double)0.8361840600000001178;
              } else {
                sum += (double)0.8920640298260381629;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7965764999389648438) ) ) {
                sum += (double)0.767702867691109736;
              } else {
                sum += (double)0.8202053488272921244;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.220949999988079071) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2462.2542724609375) ) ) {
            sum += (double)0.4386887456003217833;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.981818199157714844) ) ) {
              sum += (double)0.3567510568886984035;
            } else {
              sum += (double)0.1730021513703884906;
            }
          }
        } else {
          sum += (double)0.5264092453245525771;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482335999608039856) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
          sum += (double)0.1146835073989003057;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3553670048713684082) ) ) {
            sum += (double)0.4050435845407135971;
          } else {
            sum += (double)0.2022405545346415701;
          }
        }
      } else {
        sum += (double)0.5774384380183154031;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.504999995231628418) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165415011346340179) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.51363563537597656) ) ) {
              sum += (double)0.02637203007518797507;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8525.933349609375) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1050000004470348358) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.58016300201416016) ) ) {
                      sum += (double)0.00711093333333333473;
                    } else {
                      sum += (double)0.004284511111111114628;
                    }
                  } else {
                    sum += (double)0.008223257142857145693;
                  }
                } else {
                  sum += (double)0.009805753846153848763;
                }
              } else {
                sum += (double)0.01294193846153846202;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.34642791748046875) ) ) {
              sum += (double)0.06311547365054208381;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2854.4366455078125) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
                  sum += (double)0.0102261647058823537;
                } else {
                  sum += (double)0.02435734285714286074;
                }
              } else {
                sum += (double)0.004000000000000000951;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8258999884128570557) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3691715002059936523) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1929.4031982421875) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7597216665744781494) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.77086162567138672) ) ) {
                      sum += (double)0.01505799082858950283;
                    } else {
                      sum += (double)0.03313248280073256835;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1382874995470046997) ) ) {
                      sum += (double)0.01747947368421052736;
                    } else {
                      sum += (double)0.007470900000000001671;
                    }
                  }
                } else {
                  sum += (double)0.0410676419246486582;
                }
              } else {
                sum += (double)0.05662047752234994347;
              }
            } else {
              sum += (double)0.08105807874276263481;
            }
          } else {
            sum += (double)0.08909399032461789991;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0241000000387430191) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4401587843894958496) ) ) {
            sum += (double)0.3439281889870904885;
          } else {
            sum += (double)0.1145596768138905236;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2238349989056587219) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.99325180053710938) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1576480045914649963) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.80997276306152344) ) ) {
                  sum += (double)0.04781126620847651193;
                } else {
                  sum += (double)0.01489638181818181938;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9300.794921875) ) ) {
                  sum += (double)0.1540194239723239322;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.86128807067871094) ) ) {
                    sum += (double)0.06765434879575661642;
                  } else {
                    sum += (double)0.02797493505104521258;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1323999986052513123) ) ) {
                sum += (double)0.01154757419354838881;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.79147911071777344) ) ) {
                  sum += (double)0.03295540923764354868;
                } else {
                  sum += (double)0.01976438518518518206;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.14985275268554688) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7119949460029602051) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07445000112056732178) ) ) {
                  sum += (double)0.06284201443067821691;
                } else {
                  sum += (double)0.1512055750594301362;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3908079862594604492) ) ) {
                  sum += (double)0.02697439128559447896;
                } else {
                  sum += (double)0.07280401681659851021;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9628.1279296875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3156024962663650513) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4666000008583068848) ) ) {
                    sum += (double)0.03269289038737446806;
                  } else {
                    sum += (double)0.09109555156346030302;
                  }
                } else {
                  sum += (double)0.1568208523673054466;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.222760222852230072) ) ) {
                  sum += (double)0.1458753955244093403;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5432069748640060425) ) ) {
                    sum += (double)0.3755235349457280436;
                  } else {
                    sum += (double)0.2245310915816723651;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596890121698379517) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02270000055432319641) ) ) {
                sum += (double)0.5214725119151033539;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5941999852657318115) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8069.0703125) ) ) {
                    sum += (double)0.3089056592536734147;
                  } else {
                    sum += (double)0.424021952393213053;
                  }
                } else {
                  sum += (double)0.1472883410427577311;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4612497687339782715) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0355500001460313797) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.565374135971069336) ) ) {
                    sum += (double)0.5269029602394477152;
                  } else {
                    sum += (double)0.6204874999999999696;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0653499998152256012) ) ) {
                    sum += (double)0.377307185138188228;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.21117210388183594) ) ) {
                      sum += (double)0.5225332857724214186;
                    } else {
                      sum += (double)0.4507959879885580223;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.44832038879394531) ) ) {
                  sum += (double)0.465176727332738349;
                } else {
                  sum += (double)0.226144636484154643;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2415999993681907654) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5562.941162109375) ) ) {
                sum += (double)0.5447563213856102537;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.729305744171142578) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.876893997192382812) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.90556788444519043) ) ) {
                      sum += (double)0.5779320341337674805;
                    } else {
                      sum += (double)0.6210163562500000678;
                    }
                  } else {
                    sum += (double)0.5299912461637606986;
                  }
                } else {
                  sum += (double)0.6445037100467037039;
                }
              }
            } else {
              sum += (double)0.4875936502986461529;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.335476994514465332) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.2999420166015625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.24473667144775391) ) ) {
                sum += (double)0.1145830104678585565;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7457000017166137695) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.175599999725818634) ) ) {
                    sum += (double)0.4478922582084933213;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5857999920845031738) ) ) {
                      sum += (double)0.1927303043427315565;
                    } else {
                      sum += (double)0.351820864721976212;
                    }
                  }
                } else {
                  sum += (double)0.169345285769355286;
                }
              }
            } else {
              sum += (double)0.1184212538686832683;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4007935225963592529) ) ) {
              sum += (double)0.4243393866235063983;
            } else {
              sum += (double)0.2620288469608870185;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.813309073448181152) ) ) {
          sum += (double)0.3619381903240106446;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.681742429733276367) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4342.831787109375) ) ) {
              sum += (double)0.3402632036298713358;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3773425072431564331) ) ) {
                sum += (double)0.03215463427041499733;
              } else {
                sum += (double)0.105169191229753739;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30044.84375) ) ) {
              sum += (double)0.1891791070906956862;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07689999788999557495) ) ) {
                sum += (double)0.08457193994999709363;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5098499953746795654) ) ) {
                  sum += (double)0.01715221176470588249;
                } else {
                  sum += (double)0.04458137053739855832;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3479607552289962769) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8765.208984375) ) ) {
              sum += (double)0.570518695547590271;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7034499943256378174) ) ) {
                sum += (double)0.6052395679231566961;
              } else {
                sum += (double)0.6494906430739938452;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.275970220565795898) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.751048803329467773) ) ) {
                sum += (double)0.6789846739541793852;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.703571438789367676) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6218225061893463135) ) ) {
                    sum += (double)0.7503024499999998431;
                  } else {
                    sum += (double)0.798356159506172669;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.108369588851928711) ) ) {
                    sum += (double)0.6795684620484381266;
                  } else {
                    sum += (double)0.7498452761904760289;
                  }
                }
              }
            } else {
              sum += (double)0.6285481411886360004;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.43790817260742188) ) ) {
              sum += (double)0.8394654026586209072;
            } else {
              sum += (double)0.8699165599999998388;
            }
          } else {
            sum += (double)0.7665040170565404765;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033862948417663574) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.05545902252197266) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5394719839096069336) ) ) {
              sum += (double)0.5557433976899196493;
            } else {
              sum += (double)0.7194078519561815099;
            }
          } else {
            sum += (double)0.4046922931628587072;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
            sum += (double)0.5020776662256745126;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
              sum += (double)0.4250203142988025484;
            } else {
              sum += (double)0.2132141248847349291;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.160416603088378906) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7356553077697753906) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.435000002384185791) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
              sum += (double)0.1774233351765284739;
            } else {
              sum += (double)0.0355300034297748521;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4060920029878616333) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1575.43548583984375) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.57894706726074219) ) ) {
                  sum += (double)0.1878360580551589332;
                } else {
                  sum += (double)0.295177796055160202;
                }
              } else {
                sum += (double)0.345426897111042186;
              }
            } else {
              sum += (double)0.1306890001559589676;
            }
          }
        } else {
          sum += (double)0.02741718823529411958;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4494794905185699463) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.854583740234375) ) ) {
            sum += (double)0.1261574577777526129;
          } else {
            sum += (double)0.3734897057063333303;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2541999965906143188) ) ) {
            sum += (double)0.3561944539111375208;
          } else {
            sum += (double)0.5476114796407892671;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03914999961853027344) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4418.7197265625) ) ) {
                sum += (double)0.04576065945419102721;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.91249990463256836) ) ) {
                  sum += (double)0.02079941176470588224;
                } else {
                  sum += (double)0.008184168421052634076;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.114321000874042511) ) ) {
                sum += (double)0.02071398730158730689;
              } else {
                sum += (double)0.1253859280526065656;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07252199947834014893) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.052138499915599823) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.005349709090909091254;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05855749920010566711) ) ) {
                    sum += (double)0.007332419047619049939;
                  } else {
                    sum += (double)0.004000000000000000083;
                  }
                }
              } else {
                sum += (double)0.01661894070707070625;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7804144918918609619) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4539999961853027344) ) ) {
                    sum += (double)0.0252736190476190517;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.0062309411764705884;
                    } else {
                      sum += (double)0.008818075000000001606;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05514999851584434509) ) ) {
                    sum += (double)0.006488266666666668396;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1277634948492050171) ) ) {
                      sum += (double)0.06965972169059010677;
                    } else {
                      sum += (double)0.02192089523809523724;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1050985008478164673) ) ) {
                  sum += (double)0.01954883076923076904;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1754499971866607666) ) ) {
                    sum += (double)0.007537256881720430166;
                  } else {
                    sum += (double)0.004000000000000000083;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2134735062718391418) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004949999973177909851) ) ) {
              sum += (double)0.1833422415112386794;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.71212148666381836) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.80357170104980469) ) ) {
                  sum += (double)0.05789293958523383798;
                } else {
                  sum += (double)0.1436911506114108283;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7410667836666107178) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4955710768699645996) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                      sum += (double)0.03000938436928447806;
                    } else {
                      sum += (double)0.06503473027553853536;
                    }
                  } else {
                    sum += (double)0.07818989188786147626;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2670000046491622925) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7649999856948852539) ) ) {
                      sum += (double)0.01569073214285714515;
                    } else {
                      sum += (double)0.005327410526315790734;
                    }
                  } else {
                    sum += (double)0.02285260126262626465;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4329956769943237305) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9005.986328125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17473.4150390625) ) ) {
                  sum += (double)0.1415767915793009757;
                } else {
                  sum += (double)0.05160314791804361534;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08559999987483024597) ) ) {
                  sum += (double)0.1139618451484418898;
                } else {
                  sum += (double)0.2621454663671207164;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)52.79999923706054688) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3257499933242797852) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09714999794960021973) ) ) {
                    sum += (double)0.012105333333333336;
                  } else {
                    sum += (double)0.03760195333833328546;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.75793647766113281) ) ) {
                    sum += (double)0.1380576381744620662;
                  } else {
                    sum += (double)0.04288783108648815123;
                  }
                }
              } else {
                sum += (double)0.1531597374641929798;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59875297546386719) ) ) {
          sum += (double)0.08092544859237536803;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4929.848876953125) ) ) {
            sum += (double)0.1785693865811544268;
          } else {
            sum += (double)0.4056991308475556557;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47614249587059021) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9199577271938323975) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.08494234085083008) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2309774979948997498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07629999890923500061) ) ) {
              sum += (double)0.4676894824352251789;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4878000020980834961) ) ) {
                sum += (double)0.3858723321974846798;
              } else {
                sum += (double)0.2183827645800568706;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58190441131591797) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7384999990463256836) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.292966499924659729) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.97461390495300293) ) ) {
                      sum += (double)0.5140179763938911295;
                    } else {
                      sum += (double)0.4050026789303001751;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.84621238708496094) ) ) {
                      sum += (double)0.5120843380971619174;
                    } else {
                      sum += (double)0.5835376732362383967;
                    }
                  }
                } else {
                  sum += (double)0.2633941348349583822;
                }
              } else {
                sum += (double)0.5982948334815781921;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.80348873138427734) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.70967674255371094) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.5233917236328125) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.488806009292602539) ) ) {
                      sum += (double)0.5685594411954030258;
                    } else {
                      sum += (double)0.6351568274150528604;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2523839697241783142) ) ) {
                      sum += (double)0.5616866449462366573;
                    } else {
                      sum += (double)0.489704344304428496;
                    }
                  }
                } else {
                  sum += (double)0.6477047107501193723;
                }
              } else {
                sum += (double)0.4801114998410395129;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05024999938905239105) ) ) {
            sum += (double)0.4555670256191878265;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3342725038528442383) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.39899015426635742) ) ) {
                sum += (double)0.323132133238850483;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1681705042719841003) ) ) {
                  sum += (double)0.1343846937604452618;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4384025037288665771) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18048.0947265625) ) ) {
                      sum += (double)0.3437287033996163643;
                    } else {
                      sum += (double)0.2598334746470478684;
                    }
                  } else {
                    sum += (double)0.1894103564512778504;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14742.8818359375) ) ) {
                sum += (double)0.4806115404854193751;
              } else {
                sum += (double)0.2924633085029225699;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.438984990119934082) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.710898756980895996) ) ) {
            sum += (double)0.2712841919646317712;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.089089453220367432) ) ) {
              sum += (double)0.2252294591845291072;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
                sum += (double)0.1822879727462147215;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.758207559585571289) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2613.43408203125) ) ) {
                    sum += (double)0.1726062142562681534;
                  } else {
                    sum += (double)0.03320078812615955693;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.78486394882202148) ) ) {
                    sum += (double)0.04429450393850491163;
                  } else {
                    sum += (double)0.01924325161290322758;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.307109388102982106;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.03631901741027832) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.00396823883056641) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5121190249919891357) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3674954771995544434) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.68488168716430664) ) ) {
                  sum += (double)0.6008680718032565204;
                } else {
                  sum += (double)0.6661831454735186453;
                }
              } else {
                sum += (double)0.5567046319194268733;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08850000053644180298) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.120183311402797699) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3392.0394287109375) ) ) {
                    sum += (double)0.7631435111111111169;
                  } else {
                    sum += (double)0.7382929093822843125;
                  }
                } else {
                  sum += (double)0.6881495306162719316;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3793.3834228515625) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.559552997350692749) ) ) {
                    sum += (double)0.6006216973604626697;
                  } else {
                    sum += (double)0.6502146627470034579;
                  }
                } else {
                  sum += (double)0.6952411438034187263;
                }
              }
            }
          } else {
            sum += (double)0.337968998738428561;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8142319917678833008) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.083902359008789062) ) ) {
                sum += (double)0.7493919414621890152;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
                  sum += (double)0.7973022465006384119;
                } else {
                  sum += (double)0.837526361904761818;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7434499859809875488) ) ) {
                sum += (double)0.7576290611111110573;
              } else {
                sum += (double)0.6616920993817878571;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03845000080764293671) ) ) {
              sum += (double)0.9057855696296297499;
            } else {
              sum += (double)0.8414801180762851995;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
          sum += (double)0.5472871609936026394;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3473.6513671875) ) ) {
            sum += (double)0.5275146909478714008;
          } else {
            sum += (double)0.1839209636363877132;
          }
        }
      }
    }
  }
  return sum;
}
