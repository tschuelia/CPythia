#include "prediction.h"
double predict_margin_unit5(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.608771800994873047) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8000000119209289551) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1276888996362686157) ) ) {
          sum += (double)0.2135935749647135951;
        } else {
          sum += (double)0.08188928997321139047;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5087229907512664795) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.193059921264648438) ) ) {
              sum += (double)0.3857304553501383904;
            } else {
              sum += (double)0.1837309141789663647;
            }
          } else {
            sum += (double)0.4426748676087992607;
          }
        } else {
          sum += (double)0.5551774976450570831;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1255569979548454285) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59821414947509766) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07093400135636329651) ) ) {
                  sum += (double)0.00893373913043478407;
                } else {
                  sum += (double)0.02361247380952381444;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2232000008225440979) ) ) {
                  sum += (double)0.01414269270216962811;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5193.835693359375) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.844049990177154541) ) ) {
                      sum += (double)0.004487136612021861218;
                    } else {
                      sum += (double)0.008008514285714286862;
                    }
                  } else {
                    sum += (double)0.01156005333333333558;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3518999963998794556) ) ) {
                sum += (double)0.05414104600612643092;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7330999970436096191) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2028999999165534973) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
                      sum += (double)0.007209973333333333755;
                    } else {
                      sum += (double)0.01212693376186103553;
                    }
                  } else {
                    sum += (double)0.01743039999999999867;
                  }
                } else {
                  sum += (double)0.02684331674208145085;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.75555562973022461) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06210000067949295044) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2928631454706192017) ) ) {
                  sum += (double)0.04505552762297226205;
                } else {
                  sum += (double)0.0125387058823529414;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2500000074505805969) ) ) {
                  sum += (double)0.157962334657317599;
                } else {
                  sum += (double)0.06465263841697881098;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4519255906343460083) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)115.6631584167480469) ) ) {
                  sum += (double)0.02780171111111111315;
                } else {
                  sum += (double)0.07953890372735741843;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8054935336112976074) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1760529950261116028) ) ) {
                    sum += (double)0.03139197333333332979;
                  } else {
                    sum += (double)0.01051009333333333302;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.22931098937988281) ) ) {
                    sum += (double)0.01099995294117647043;
                  } else {
                    sum += (double)0.004229215384615385258;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.109004187309464734;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.782407283782958984) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3131500035524368286) ) ) {
              sum += (double)0.06423425786456413156;
            } else {
              sum += (double)0.3212720398570991232;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4288852214813232422) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3726017475128173828) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2721749991178512573) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.73242473602294922) ) ) {
                      sum += (double)0.07890237111511022583;
                    } else {
                      sum += (double)0.02374119999999999703;
                    }
                  } else {
                    sum += (double)0.114742698074330296;
                  }
                } else {
                  sum += (double)0.2230565264991450081;
                }
              } else {
                sum += (double)0.2843923575366568701;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1855499967932701111) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08994999900460243225) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6901996135711669922) ) ) {
                    sum += (double)0.01824341052631579113;
                  } else {
                    sum += (double)0.006323378983382210022;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1383500024676322937) ) ) {
                    sum += (double)0.06516038479015680285;
                  } else {
                    sum += (double)0.01618239999999999956;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8000000119209289551) ) ) {
                  sum += (double)0.1295242197766423298;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7450044751167297363) ) ) {
                    sum += (double)0.09138199915237243953;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3108105063438415527) ) ) {
                      sum += (double)0.02151983552739342859;
                    } else {
                      sum += (double)0.05625489811832107279;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03805000148713588715) ) ) {
            sum += (double)0.12592014512824104;
          } else {
            sum += (double)0.4101332427468818986;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83318185806274414) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.292089506983757019) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00794999999925494194) ) ) {
              sum += (double)0.579477963153060105;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.597350001335144043) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.599524378776550293) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4815500080585479736) ) ) {
                      sum += (double)0.2205372431154620783;
                    } else {
                      sum += (double)0.3793606949812729501;
                    }
                  } else {
                    sum += (double)0.4292995458617430149;
                  }
                } else {
                  sum += (double)0.223195572865184183;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4215.1318359375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.059893131256103516) ) ) {
                    sum += (double)0.5257883341496762952;
                  } else {
                    sum += (double)0.4716820250730749398;
                  }
                } else {
                  sum += (double)0.3327447703205471674;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.33291530609130859) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4005.7427978515625) ) ) {
                  sum += (double)0.5012388977473205554;
                } else {
                  sum += (double)0.5751569786442772836;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.88867473602294922) ) ) {
                  sum += (double)0.3197430035470671394;
                } else {
                  sum += (double)0.5376945657007037305;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1596499979496002197) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
                  sum += (double)0.6874617461538459207;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4986.116943359375) ) ) {
                    sum += (double)0.5653072530024765285;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.84848487377166748) ) ) {
                      sum += (double)0.588043549714642233;
                    } else {
                      sum += (double)0.6522999233870967473;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147095084190368652) ) ) {
                  sum += (double)0.562441910632023423;
                } else {
                  sum += (double)0.4949446027167799245;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1901315152645111084) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17917.6630859375) ) ) {
              sum += (double)0.4633913707078542998;
            } else {
              sum += (double)0.2513731263395665994;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4687999933958053589) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.34411334991455078) ) ) {
                sum += (double)0.2842945978243243133;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2887855023145675659) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4565500020980834961) ) ) {
                    sum += (double)0.2273979873191836476;
                  } else {
                    sum += (double)0.1428583108588569184;
                  }
                } else {
                  sum += (double)0.09547478068768648629;
                }
              }
            } else {
              sum += (double)0.3908474940953807208;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.841967463493347168) ) ) {
          sum += (double)0.2755055174039676702;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25040.73828125) ) ) {
            sum += (double)0.2240554658330704829;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.21085357666015625) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2724.326171875) ) ) {
                sum += (double)0.1347570109033421337;
              } else {
                sum += (double)0.04511662117006802475;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2005000039935112) ) ) {
                sum += (double)0.07442715841750842387;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3354485034942626953) ) ) {
                  sum += (double)0.01387133913043478266;
                } else {
                  sum += (double)0.0328523549143128063;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7349939048290252686) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.61250019073486328) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347345173358917236) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.68488168716430664) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2701.944091796875) ) ) {
                  sum += (double)0.5982855774403015303;
                } else {
                  sum += (double)0.5177906575238758746;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6422.1865234375) ) ) {
                  sum += (double)0.596436175370381183;
                } else {
                  sum += (double)0.6893620952380953293;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6629000008106231689) ) ) {
                sum += (double)0.6411715265374059447;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.326923131942749023) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02245000004768371582) ) ) {
                    sum += (double)0.7368588666666666676;
                  } else {
                    sum += (double)0.6910030536012298219;
                  }
                } else {
                  sum += (double)0.6663807489926740768;
                }
              }
            }
          } else {
            sum += (double)0.3976171529195607346;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1337999999523162842) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.910897254943847656) ) ) {
                sum += (double)0.7465151887929546426;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.401601791381835938) ) ) {
                  sum += (double)0.7975121662551440949;
                } else {
                  sum += (double)0.7613154749999998527;
                }
              }
            } else {
              sum += (double)0.7274250017275748492;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03655000030994415283) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8183034956455230713) ) ) {
                sum += (double)0.8768140714285712622;
              } else {
                sum += (double)0.9031490390123457779;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2480.4439697265625) ) ) {
                sum += (double)0.8112944910087719341;
              } else {
                sum += (double)0.8493882104477612494;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
            sum += (double)0.531322567523507594;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
              sum += (double)0.4919073440881986947;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08609999716281890869) ) ) {
                sum += (double)0.1992660613499034616;
              } else {
                sum += (double)0.3346649809244583995;
              }
            }
          }
        } else {
          sum += (double)0.6677719299718741786;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
          sum += (double)0.09284686657512074281;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1036739982664585114) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.52115249633789062) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.54464340209960938) ) ) {
                  sum += (double)0.007660940000000000631;
                } else {
                  sum += (double)0.02213645042735043131;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8811500072479248047) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8189000189304351807) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3347.36669921875) ) ) {
                      sum += (double)0.004187673239436622702;
                    } else {
                      sum += (double)0.007413527272727273541;
                    }
                  } else {
                    sum += (double)0.006583915151515152935;
                  }
                } else {
                  sum += (double)0.01018015000000000066;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02955000009387731552) ) ) {
                sum += (double)0.0341999585585585561;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                  sum += (double)0.005349052040816327722;
                } else {
                  sum += (double)0.01702645714285714457;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7507500052452087402) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.43487167358398438) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2397.045166015625) ) ) {
                  sum += (double)0.07426990838307107046;
                } else {
                  sum += (double)0.02545026827956989313;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.13899421691894531) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6368999779224395752) ) ) {
                    sum += (double)0.009077050000000001437;
                  } else {
                    sum += (double)0.05442854242424242234;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.066583752632141113) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)170.8208160400390625) ) ) {
                      sum += (double)0.01514199189836509286;
                    } else {
                      sum += (double)0.04328599480286738493;
                    }
                  } else {
                    sum += (double)0.004000000000000000083;
                  }
                }
              }
            } else {
              sum += (double)0.07773019569892472558;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01879999972879886627) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6617626845836639404) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713389992713928223) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008299999870359897614) ) ) {
                sum += (double)0.2823648208562972162;
              } else {
                sum += (double)0.1346895515339824878;
              }
            } else {
              sum += (double)0.4442736625055007105;
            }
          } else {
            sum += (double)0.02690538195631528989;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.099671125411987305) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
              sum += (double)0.1060492454397887474;
            } else {
              sum += (double)0.2967392208599636816;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6086320579051971436) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7936.118896484375) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)150.7761917114257812) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7489999830722808838) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.496212393045425415) ) ) {
                      sum += (double)0.03802731084789676835;
                    } else {
                      sum += (double)0.1121602691182302936;
                    }
                  } else {
                    sum += (double)0.1269109505316241004;
                  }
                } else {
                  sum += (double)0.1513268302093403184;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.155149996280670166) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5343999862670898438) ) ) {
                    sum += (double)0.1644429937632442829;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6836999952793121338) ) ) {
                      sum += (double)0.04634256308759657911;
                    } else {
                      sum += (double)0.1217437894462830572;
                    }
                  }
                } else {
                  sum += (double)0.2695909834059586618;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1573999971151351929) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4959.22802734375) ) ) {
                  sum += (double)0.01911624444444444404;
                } else {
                  sum += (double)0.006111721739130435323;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1923670023679733276) ) ) {
                    sum += (double)0.01664215102040816213;
                  } else {
                    sum += (double)0.1592785174928774972;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.240300007164478302) ) ) {
                    sum += (double)0.02228343211751429923;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.07662296295166016) ) ) {
                      sum += (double)0.05882855603570880804;
                    } else {
                      sum += (double)0.0252134489458254174;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1231999993324279785) ) ) {
          sum += (double)0.1078023369764410933;
        } else {
          sum += (double)0.2507447679180624389;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5985960066318511963) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.376512527465820312) ) ) {
            sum += (double)0.4580135214339957073;
          } else {
            sum += (double)0.2224828243014944362;
          }
        } else {
          sum += (double)0.5672228780506487489;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.89888715744018555) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.280154004693031311) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0171500006690621376) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001000000047497451305) ) ) {
                sum += (double)0.6176889055258467653;
              } else {
                sum += (double)0.5306637858894310833;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6026500165462493896) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2452994957566261292) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12965.92333984375) ) ) {
                    sum += (double)0.4566713053374199527;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7506.543701171875) ) ) {
                      sum += (double)0.2108553915892160679;
                    } else {
                      sum += (double)0.3827749702581283997;
                    }
                  }
                } else {
                  sum += (double)0.5082197054146910808;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5264.1865234375) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.19135761260986328) ) ) {
                    sum += (double)0.3711004948057575747;
                  } else {
                    sum += (double)0.2400402064283167769;
                  }
                } else {
                  sum += (double)0.1510452283709001475;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008499999821651726961) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2762.0169677734375) ) ) {
                sum += (double)0.6867551321428571054;
              } else {
                sum += (double)0.609501391236618284;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596890121698379517) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.72008991241455078) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3638500124216079712) ) ) {
                    sum += (double)0.4735185749465024019;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.392513036727905273) ) ) {
                      sum += (double)0.4939202843439925439;
                    } else {
                      sum += (double)0.5410263976963922694;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4771.193359375) ) ) {
                    sum += (double)0.4868621429680545232;
                  } else {
                    sum += (double)0.338421178359283481;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2920500040054321289) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07950000092387199402) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.73177719116210938) ) ) {
                      sum += (double)0.5845400016590444059;
                    } else {
                      sum += (double)0.6626786171945701076;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3198.997802734375) ) ) {
                      sum += (double)0.5811738397287253832;
                    } else {
                      sum += (double)0.4647191736941178597;
                    }
                  }
                } else {
                  sum += (double)0.4365677068231036961;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.334381103515625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20063.3896484375) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.12855434417724609) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2390605062246322632) ) ) {
                    sum += (double)0.3867240581358082907;
                  } else {
                    sum += (double)0.4484587039767220507;
                  }
                } else {
                  sum += (double)0.2266858473134259755;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11530.50537109375) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2422018945217132568) ) ) {
                    sum += (double)0.1921547086991257369;
                  } else {
                    sum += (double)0.1004000998229791081;
                  }
                } else {
                  sum += (double)0.2957040451231757738;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.79875850677490234) ) ) {
                sum += (double)0.3484000589902962464;
              } else {
                sum += (double)0.4850691947137539262;
              }
            }
          } else {
            sum += (double)0.1052012556605570609;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.378157496452331543) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33309.6494140625) ) ) {
            sum += (double)0.191656712862756734;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.007034778594970703) ) ) {
              sum += (double)0.08032481363620463943;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1075500026345252991) ) ) {
                sum += (double)0.06470839267950095897;
              } else {
                sum += (double)0.02578616884558855224;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.668108701705932617) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1868.17352294921875) ) ) {
              sum += (double)0.4662283873530745359;
            } else {
              sum += (double)0.13890790157504046;
            }
          } else {
            sum += (double)0.05242926214214214259;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5355575084686279297) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4600972831249237061) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.00900459289550781) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09479834139347076416) ) ) {
                    sum += (double)0.5864104759449785265;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.488600507378578186) ) ) {
                      sum += (double)0.6180596002155914759;
                    } else {
                      sum += (double)0.6685108686881020557;
                    }
                  }
                } else {
                  sum += (double)0.6803822939048606022;
                }
              } else {
                sum += (double)0.5382422379993047068;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1039796806871891022) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3324.51171875) ) ) {
                  sum += (double)0.7131044442173212206;
                } else {
                  sum += (double)0.7538509888888887955;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5845.647705078125) ) ) {
                  sum += (double)0.6277264272612749219;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08244999870657920837) ) ) {
                    sum += (double)0.6619223877034001724;
                  } else {
                    sum += (double)0.7071379131815043184;
                  }
                }
              }
            }
          } else {
            sum += (double)0.4733062909145054342;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6992909908294677734) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1516698971390724182) ) ) {
                sum += (double)0.8040498398255812029;
              } else {
                sum += (double)0.7268109047619047969;
              }
            } else {
              sum += (double)0.7044141779489616617;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09455000236630439758) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1779.94921875) ) ) {
                sum += (double)0.8341628346445825182;
              } else {
                sum += (double)0.8822565291536051957;
              }
            } else {
              sum += (double)0.7654118110662213592;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5413514971733093262) ) ) {
          sum += (double)0.2359557692640253668;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04109999909996986389) ) ) {
            sum += (double)0.3437926918743998694;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.665583908557891846) ) ) {
              sum += (double)0.5841446747099476866;
            } else {
              sum += (double)0.5007641657919434941;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3019105046987533569) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.464285612106323242) ) ) {
          sum += (double)0.1240597977008819491;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09099549800157546997) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2164499983191490173) ) ) {
                sum += (double)0.01543632347140039621;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.39925384521484375) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                    sum += (double)0.004000000000000000083;
                  } else {
                    sum += (double)0.008828622222222222773;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8874999880790710449) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                      sum += (double)0.00407007633587786518;
                    } else {
                      sum += (double)0.004981359999999999781;
                    }
                  } else {
                    sum += (double)0.006457529411764708314;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                sum += (double)0.03677184036614646739;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4522.5927734375) ) ) {
                    sum += (double)0.01221282500000000007;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                } else {
                  sum += (double)0.02299978461538461708;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.73214340209960938) ) ) {
              sum += (double)0.07122613863333400464;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4876.850830078125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12610.11279296875) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)259.5858383178710938) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
                      sum += (double)0.01068313594004561932;
                    } else {
                      sum += (double)0.01937041599999999794;
                    }
                  } else {
                    sum += (double)0.03764032000000001182;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1045354977250099182) ) ) {
                    sum += (double)0.07896099912854029346;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6172.08203125) ) ) {
                      sum += (double)0.02376544088888888837;
                    } else {
                      sum += (double)0.05271130615737435604;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.697008669376373291) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5777499973773956299) ) ) {
                    sum += (double)0.03419029162561577212;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7321000099182128906) ) ) {
                      sum += (double)0.006017326315789474356;
                    } else {
                      sum += (double)0.02143844705882353222;
                    }
                  }
                } else {
                  sum += (double)0.00482395789473684302;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2235889360308647156) ) ) {
              sum += (double)0.1865600239132456373;
            } else {
              sum += (double)0.08272577930053096051;
            }
          } else {
            sum += (double)0.2819380072290029182;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01260000001639127731) ) ) {
            sum += (double)0.1837153435473038721;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2253270000219345093) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6859000027179718018) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2774000018835067749) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.94040870666503906) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3410999923944473267) ) ) {
                      sum += (double)0.01475548888888889021;
                    } else {
                      sum += (double)0.05168645002608557304;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07935000211000442505) ) ) {
                      sum += (double)0.00934822608695652299;
                    } else {
                      sum += (double)0.02017336363636363511;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.61066436767578125) ) ) {
                    sum += (double)0.1187827962748893296;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.5701904296875) ) ) {
                      sum += (double)0.02122884486975013668;
                    } else {
                      sum += (double)0.0789484234227060544;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14706.56494140625) ) ) {
                  sum += (double)0.04415421624359536917;
                } else {
                  sum += (double)0.1287220118300710092;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5671499967575073242) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6393032968044281006) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2687200009822845459) ) ) {
                    sum += (double)0.1373659788198151877;
                  } else {
                    sum += (double)0.05965183577235772666;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6812.608154296875) ) ) {
                    sum += (double)0.05701338008744622626;
                  } else {
                    sum += (double)0.01079915000000000389;
                  }
                }
              } else {
                sum += (double)0.2078219696345769418;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.222748637199401855) ) ) {
        sum += (double)0.5800077533251392081;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5568286478519439697) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8499999940395355225) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.01724147796630859) ) ) {
              sum += (double)0.2513458551729765844;
            } else {
              sum += (double)0.0665684857142857106;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2894.43310546875) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.80051279067993164) ) ) {
                sum += (double)0.319403243399196568;
              } else {
                sum += (double)0.166000782221081139;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.52136802673339844) ) ) {
                sum += (double)0.3976766161561689494;
              } else {
                sum += (double)0.5451883156563865906;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.0523834228515625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3931484967470169067) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.026698529720306396) ) ) {
                sum += (double)0.08953016299281103818;
              } else {
                sum += (double)0.0360467592705167178;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.514705657958984375) ) ) {
                sum += (double)0.1826661955239347046;
              } else {
                sum += (double)0.08125543359631820506;
              }
            }
          } else {
            sum += (double)0.2498572538025638778;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.184422492980957031) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412979975342750549) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02284999936819076538) ) ) {
              sum += (double)0.483258406292472964;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.597350001335144043) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.828231334686279297) ) ) {
                  sum += (double)0.3289956288372806736;
                } else {
                  sum += (double)0.4064665144233401972;
                }
              } else {
                sum += (double)0.2074988737276947381;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340396493673324585) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02675000019371509552) ) ) {
                sum += (double)0.5661076075009784381;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7073999941349029541) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.2936859130859375) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.323267221450805664) ) ) {
                      sum += (double)0.4728648254624002734;
                    } else {
                      sum += (double)0.5346946378325382332;
                    }
                  } else {
                    sum += (double)0.4584734323986587867;
                  }
                } else {
                  sum += (double)0.4182113952695681869;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007599999895319342613) ) ) {
                sum += (double)0.668416953571428607;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6772.48095703125) ) ) {
                  sum += (double)0.5009149048556381656;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5810999870300292969) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.395906493067741394) ) ) {
                      sum += (double)0.5867873752284751276;
                    } else {
                      sum += (double)0.4960402923555627952;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2348.373779296875) ) ) {
                      sum += (double)0.6133232879858492304;
                    } else {
                      sum += (double)0.5382186867994235291;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8427.67626953125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.27212905883789062) ) ) {
                sum += (double)0.5698384587838341009;
              } else {
                sum += (double)0.4142139692290163211;
              }
            } else {
              sum += (double)0.2041433254999558689;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3410769999027252197) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1600320041179656982) ) ) {
                sum += (double)0.09914970645089958567;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.33225154876708984) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2653385698795318604) ) ) {
                    sum += (double)0.207045746063864361;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18625.8447265625) ) ) {
                      sum += (double)0.3859999545824621681;
                    } else {
                      sum += (double)0.3012661942826529438;
                    }
                  }
                } else {
                  sum += (double)0.1210299638493426561;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4819000065326690674) ) ) {
                sum += (double)0.2504381087256278282;
              } else {
                sum += (double)0.4267401136174420184;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.813309073448181152) ) ) {
          sum += (double)0.3641804804471823198;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.0108795166015625) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2602.7930908203125) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2804429978132247925) ) ) {
                sum += (double)0.1301309201454110276;
              } else {
                sum += (double)0.3956606721478386213;
              }
            } else {
              sum += (double)0.05325390082713600537;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
              sum += (double)0.1736057428890186438;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3453664928674697876) ) ) {
                sum += (double)0.01518789333333333408;
              } else {
                sum += (double)0.0445326290184921772;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6825145184993743896) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9533487856388092041) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.13206386566162109) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468925237655639648) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.54652214050292969) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.028265237808227539) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2001.6766357421875) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3847.485595703125) ) ) {
                      sum += (double)0.5880536027524640996;
                    } else {
                      sum += (double)0.649329444896461383;
                    }
                  } else {
                    sum += (double)0.5736922846751489891;
                  }
                } else {
                  sum += (double)0.5191835661408542579;
                }
              } else {
                sum += (double)0.6963302807486630996;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1783500015735626221) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1025498360395431519) ) ) {
                  sum += (double)0.7562924995670995409;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07815000042319297791) ) ) {
                    sum += (double)0.7028666999999999554;
                  } else {
                    sum += (double)0.7343707200000001434;
                  }
                }
              } else {
                sum += (double)0.6542783496227632112;
              }
            }
          } else {
            sum += (double)0.4199203742327391464;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.922377645969390869) ) ) {
            sum += (double)0.5392590471780204231;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3262.9871826171875) ) ) {
              sum += (double)0.514669505181749698;
            } else {
              sum += (double)0.2028646948003451633;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.835664272308349609) ) ) {
            sum += (double)0.69078038146041576;
          } else {
            sum += (double)0.761978632320159055;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8372030258178710938) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7992999851703643799) ) ) {
                sum += (double)0.8583055391304348358;
              } else {
                sum += (double)0.8149191873015873;
              }
            } else {
              sum += (double)0.9094533099999999592;
            }
          } else {
            sum += (double)0.7713711464716775934;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2508300021290779114) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09405500069260597229) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.899000018835067749) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.49107122421264648) ) ) {
                sum += (double)0.007221415384615385673;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2025000005960464478) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1380593329668045044) ) ) {
                    sum += (double)0.0051420615384615391;
                  } else {
                    sum += (double)0.004000000000000002685;
                  }
                } else {
                  sum += (double)0.007236376470588236874;
                }
              }
            } else {
              sum += (double)0.01169539047619047763;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1658165007829666138) ) ) {
              sum += (double)0.02156281892393321561;
            } else {
              sum += (double)0.009258905263157894347;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0949566960334777832) ) ) {
            sum += (double)0.09866476735766514794;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6542088985443115234) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5947635769844055176) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1267609968781471252) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003349999897181987762) ) ) {
                    sum += (double)0.03906503065174960626;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07204350084066390991) ) ) {
                      sum += (double)0.00831196363636363747;
                    } else {
                      sum += (double)0.01756447027027026667;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1022500023245811462) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1900000050663948059) ) ) {
                      sum += (double)0.03212928000000000311;
                    } else {
                      sum += (double)0.01361227485281749604;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2158499956130981445) ) ) {
                      sum += (double)0.09739683812705571264;
                    } else {
                      sum += (double)0.03068359166666666596;
                    }
                  }
                }
              } else {
                sum += (double)0.07582622438192668235;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3151500076055526733) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)42.26428413391113281) ) ) {
                  sum += (double)0.01190883673469387942;
                } else {
                  sum += (double)0.00416554444444444498;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2272500023245811462) ) ) {
                  sum += (double)0.01331291111111111182;
                } else {
                  sum += (double)0.02104169411764705844;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.625) ) ) {
          sum += (double)0.1608847211694330315;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2600000053644180298) ) ) {
            sum += (double)0.01790721250497809974;
          } else {
            sum += (double)0.08520817246826072056;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.930952310562133789) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47832450270652771) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3732264935970306396) ) ) {
              sum += (double)0.09560628172783272594;
            } else {
              sum += (double)0.264710251289845544;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.765151500701904297) ) ) {
              sum += (double)0.4538845713264877402;
            } else {
              sum += (double)0.3348444618851543764;
            }
          }
        } else {
          sum += (double)0.5038989499031248931;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6000744998455047607) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9298.3466796875) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)191.9147109985351562) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1096915006637573242) ) ) {
                sum += (double)0.1454432441265970655;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7481499910354614258) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1661234945058822632) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4741999953985214233) ) ) {
                      sum += (double)0.03411151533399781055;
                    } else {
                      sum += (double)0.01541914482758620711;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7399341762065887451) ) ) {
                      sum += (double)0.06337132755157957875;
                    } else {
                      sum += (double)0.02516155862068965646;
                    }
                  }
                } else {
                  sum += (double)0.1164823902317723148;
                }
              }
            } else {
              sum += (double)0.1775638552611012999;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.98798084259033203) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.175000190734863281) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2677330076694488525) ) ) {
                  sum += (double)0.2824822458965761118;
                } else {
                  sum += (double)0.08416845797538637097;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4420.4453125) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.37217235565185547) ) ) {
                    sum += (double)0.1757523117737811169;
                  } else {
                    sum += (double)0.05381506841610063374;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.08026742935180664) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2669.1741943359375) ) ) {
                      sum += (double)0.03867788709677420084;
                    } else {
                      sum += (double)0.02243364410958904182;
                    }
                  } else {
                    sum += (double)0.005338777777777777359;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0413000006228685379) ) ) {
                sum += (double)0.3679898877414012337;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2218239977955818176) ) ) {
                  sum += (double)0.03404820993464052065;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2767680883407592773) ) ) {
                    sum += (double)0.1736198652436906908;
                  } else {
                    sum += (double)0.294713127163169053;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.4212014314172481955;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8318758606910705566) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.6894841194152832) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.291973501443862915) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0171500006690621376) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
                sum += (double)0.6259077565811964616;
              } else {
                sum += (double)0.4845302987154505581;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.722131967544555664) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.086127996444702148) ) ) {
                  sum += (double)0.5015043911263452614;
                } else {
                  sum += (double)0.4180175864832981758;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11927.0244140625) ) ) {
                  sum += (double)0.4453858065421172907;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412595003843307495) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.216550000011920929) ) ) {
                      sum += (double)0.2920972251316691914;
                    } else {
                      sum += (double)0.1839860105783325539;
                    }
                  } else {
                    sum += (double)0.3598831012931925089;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01700000092387199402) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1429168283939361572) ) ) {
                sum += (double)0.6507104057006721787;
              } else {
                sum += (double)0.5913010560661764448;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340364500880241394) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.01013278961181641) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.511367082595825195) ) ) {
                    sum += (double)0.4741631785148088252;
                  } else {
                    sum += (double)0.5322977242118829277;
                  }
                } else {
                  sum += (double)0.407991268867351764;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7281999886035919189) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2232500016689300537) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3635153472423553467) ) ) {
                      sum += (double)0.6147120086355490898;
                    } else {
                      sum += (double)0.5406855567918202876;
                    }
                  } else {
                    sum += (double)0.4855067244653897274;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5182.80322265625) ) ) {
                    sum += (double)0.5786059169497500543;
                  } else {
                    sum += (double)0.4171428939467547448;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4042499959468841553) ) ) {
              sum += (double)0.09682297214547724851;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.3567047119140625) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26481.5556640625) ) ) {
                  sum += (double)0.3165248247071186793;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1912857666611671448) ) ) {
                    sum += (double)0.1388381613945395832;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11524.068359375) ) ) {
                      sum += (double)0.1793684859319199243;
                    } else {
                      sum += (double)0.2765341403041973178;
                    }
                  }
                }
              } else {
                sum += (double)0.3420809103109217486;
              }
            }
          } else {
            sum += (double)0.403603285201603823;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05635000020265579224) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2407.467529296875) ) ) {
            sum += (double)0.3718383075697763718;
          } else {
            sum += (double)0.1446367041547307608;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
            sum += (double)0.2485535190863106814;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.233793258666992188) ) ) {
              sum += (double)0.2323616675783999053;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3895944952964782715) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5770500004291534424) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1409000009298324585) ) ) {
                    sum += (double)0.03756950549871021505;
                  } else {
                    sum += (double)0.01025134117647058876;
                  }
                } else {
                  sum += (double)0.07475006396829424193;
                }
              } else {
                sum += (double)0.1106261348287509994;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5277909040451049805) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209627151489257812) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5121190249919891357) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.219377517700195312) ) ) {
                sum += (double)0.5864454185199898806;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4859344959259033203) ) ) {
                  sum += (double)0.6626608876190476227;
                } else {
                  sum += (double)0.6329472420024420121;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2116163298487663269) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03035000059753656387) ) ) {
                  sum += (double)0.7373195046296296962;
                } else {
                  sum += (double)0.6797143119617224949;
                }
              } else {
                sum += (double)0.6502972787290995926;
              }
            }
          } else {
            sum += (double)0.5146516356173460593;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7415895164012908936) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.633001923561096191) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7320500016212463379) ) ) {
                sum += (double)0.7348946811732022244;
              } else {
                sum += (double)0.7856072563170027889;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1306999996304512024) ) ) {
                sum += (double)0.7006640596491229278;
              } else {
                sum += (double)0.7611057930577358466;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06940000131726264954) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7973224818706512451) ) ) {
                sum += (double)0.8628669913043477413;
              } else {
                sum += (double)0.9017276260869564464;
              }
            } else {
              sum += (double)0.8310442483582091144;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7563615143299102783) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.170329689979553223) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6068294942378997803) ) ) {
              sum += (double)0.5349191866816003227;
            } else {
              sum += (double)0.5780712212460805688;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
              sum += (double)0.5412165973358925575;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
                sum += (double)0.4713586465829169847;
              } else {
                sum += (double)0.2004763182213678829;
              }
            }
          }
        } else {
          sum += (double)0.6970006675210207447;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4594839960336685181) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.964285612106323242) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2573520094156265259) ) ) {
          sum += (double)0.1236426295636855743;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.662099987268447876) ) ) {
            sum += (double)0.1810878167266406213;
          } else {
            sum += (double)0.3786816166405390649;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9038000106811523438) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.83928489685058594) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1299494951963424683) ) ) {
                sum += (double)0.08782699530334589499;
              } else {
                sum += (double)0.03205014666666667483;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0722170025110244751) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
                  sum += (double)0.02359015856735856634;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.39925384521484375) ) ) {
                      sum += (double)0.008233686486486488723;
                    } else {
                      sum += (double)0.005093578947368424675;
                    }
                  } else {
                    sum += (double)0.01406622588383838607;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702707648277282715) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1283999979496002197) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.469300001859664917) ) ) {
                      sum += (double)0.02881145124653739648;
                    } else {
                      sum += (double)0.01257252880867098209;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.0625) ) ) {
                      sum += (double)0.0782667723365685214;
                    } else {
                      sum += (double)0.02905441428571428272;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3084499984979629517) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1938745006918907166) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.006280881259600614754;
                    }
                  } else {
                    sum += (double)0.01124717647058823614;
                  }
                }
              }
            }
          } else {
            sum += (double)0.09116723180582576858;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.560457706451416016) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6347853541374206543) ) ) {
              sum += (double)0.2978582064266672713;
            } else {
              sum += (double)0.05574169619277925813;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6621036529541015625) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2149680033326148987) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2774000018835067749) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.52360057830810547) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.07439231872558594) ) ) {
                      sum += (double)0.03999388775033528576;
                    } else {
                      sum += (double)0.08386039837341051351;
                    }
                  } else {
                    sum += (double)0.01580470476190476078;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3597062677145004272) ) ) {
                    sum += (double)0.04359581027721434049;
                  } else {
                    sum += (double)0.1124828338806192207;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9397.42333984375) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.241999991238117218) ) ) {
                    sum += (double)0.05104534547122524524;
                  } else {
                    sum += (double)0.102553958308274365;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09250000119209289551) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05164999887347221375) ) ) {
                      sum += (double)0.06365364659407046766;
                    } else {
                      sum += (double)0.1230228023212381755;
                    }
                  } else {
                    sum += (double)0.2792409709705269139;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4014499932527542114) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0988999977707862854) ) ) {
                  sum += (double)0.008296449462365592872;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1791500002145767212) ) ) {
                    sum += (double)0.04178818821917808235;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11870.4931640625) ) ) {
                      sum += (double)0.03519197495623760386;
                    } else {
                      sum += (double)0.01087819428571428632;
                    }
                  }
                }
              } else {
                sum += (double)0.06988941916920565767;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.861176490783691406) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5662579834461212158) ) ) {
          sum += (double)0.435543405722662591;
        } else {
          sum += (double)0.635869664242554089;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5704225003719329834) ) ) {
          sum += (double)0.168965242804310023;
        } else {
          sum += (double)0.3223771906818193589;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9664483964443206787) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3343700021505355835) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03329999931156635284) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
                sum += (double)0.6153565333132872128;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2411600276827812195) ) ) {
                  sum += (double)0.5186913544627094197;
                } else {
                  sum += (double)0.417740168072926521;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4878000020980834961) ) ) {
                  sum += (double)0.3646459784894815481;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8066.312255859375) ) ) {
                    sum += (double)0.2706194392956597361;
                  } else {
                    sum += (double)0.1450009245362170462;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7049500048160552979) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.640492916107177734) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.720649242401123047) ) ) {
                      sum += (double)0.4767252808769523731;
                    } else {
                      sum += (double)0.5555908660890853668;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.147149994969367981) ) ) {
                      sum += (double)0.3006530050617130523;
                    } else {
                      sum += (double)0.4778019568345745482;
                    }
                  }
                } else {
                  sum += (double)0.2929762688462818065;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1293999999761581421) ) ) {
              sum += (double)0.3166509083682592096;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17848.5673828125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2484685108065605164) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5922500193119049072) ) ) {
                    sum += (double)0.2487900360277168488;
                  } else {
                    sum += (double)0.12159187314368472;
                  }
                } else {
                  sum += (double)0.3142737243420918869;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12396.10693359375) ) ) {
                  sum += (double)0.06644902742275383967;
                } else {
                  sum += (double)0.1770986008720745741;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1603500023484230042) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3791.3138427734375) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5266.185302734375) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06589999794960021973) ) ) {
                  sum += (double)0.6667796839376526341;
                } else {
                  sum += (double)0.5312990417772531782;
                }
              } else {
                sum += (double)0.3696925827866653913;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.860465049743652344) ) ) {
                sum += (double)0.5813488225995665504;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2397364675998687744) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.058823585510253906) ) ) {
                    sum += (double)0.6088132124999999784;
                  } else {
                    sum += (double)0.5869848503743582135;
                  }
                } else {
                  sum += (double)0.6639881461988302869;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.7682499885559082) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3348.251708984375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4051220118999481201) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1944969817996025085) ) ) {
                    sum += (double)0.4722347745463838509;
                  } else {
                    sum += (double)0.5401018915198956272;
                  }
                } else {
                  sum += (double)0.590621292942261733;
                }
              } else {
                sum += (double)0.4195450613553640684;
              }
            } else {
              sum += (double)0.3203017762019140235;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.371650934219360352) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2628.7816162109375) ) ) {
            sum += (double)0.4045753321094711086;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.75007927417755127) ) ) {
              sum += (double)0.2633153590509708097;
            } else {
              sum += (double)0.05515345099485950003;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.274611353874206543) ) ) {
            sum += (double)0.1402304900324460035;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5441.749755859375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.9605865478515625) ) ) {
                sum += (double)0.1059609525764292071;
              } else {
                sum += (double)0.04528431851046670065;
              }
            } else {
              sum += (double)0.01828203478260869569;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6176975071430206299) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.751275539398193359) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5121190249919891357) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2582.5341796875) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4134.7125244140625) ) ) {
                  sum += (double)0.6138131824238974854;
                } else {
                  sum += (double)0.6599114897827377257;
                }
              } else {
                sum += (double)0.5331109060139699318;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.467226505279541016) ) ) {
                sum += (double)0.6279275298966939811;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8262999951839447021) ) ) {
                  sum += (double)0.7368071266457679735;
                } else {
                  sum += (double)0.6631444384449453056;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.8408203125) ) ) {
              sum += (double)0.5458005880676760624;
            } else {
              sum += (double)0.4332943612098811847;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.98828601837158203) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.910897254943847656) ) ) {
                sum += (double)0.7254384762838129719;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6843680143356323242) ) ) {
                  sum += (double)0.7575048337037462165;
                } else {
                  sum += (double)0.7793483896692677826;
                }
              }
            } else {
              sum += (double)0.6833832714057594959;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5530.912109375) ) ) {
              sum += (double)0.7565702226842536682;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
                sum += (double)0.8777984692307690961;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1942.50775146484375) ) ) {
                  sum += (double)0.8169499142857141738;
                } else {
                  sum += (double)0.8545968915317591064;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06355000101029872894) ) ) {
          sum += (double)0.3373247896383275712;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6088369786739349365) ) ) {
            sum += (double)0.4132877089324352715;
          } else {
            sum += (double)0.6322858492160136068;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.75) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.405882358551025391) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2199999988079071045) ) ) {
              sum += (double)0.09827151376321965892;
            } else {
              sum += (double)0.2067783577954274143;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1428069993853569031) ) ) {
              sum += (double)0.0174955000000000041;
            } else {
              sum += (double)0.07736879499204311894;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.35879325866699219) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2714.4539794921875) ) ) {
              sum += (double)0.2685492487959879604;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6614986956119537354) ) ) {
                sum += (double)0.2093698434601909686;
              } else {
                sum += (double)0.07726466007509387446;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.265611499547958374) ) ) {
              sum += (double)0.2428828328496521749;
            } else {
              sum += (double)0.414810509791268156;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37857151031494141) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1146005019545555115) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1199999973177909851) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.51666641235351562) ) ) {
                  sum += (double)0.004800819047619048902;
                } else {
                  sum += (double)0.01542853333333333438;
                }
              } else {
                sum += (double)0.04757999213184476578;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03810000047087669373) ) ) {
                sum += (double)0.0391999319186560613;
              } else {
                sum += (double)0.1444865950686650691;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1843499988317489624) ) ) {
                sum += (double)0.0180866902564102601;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.97321510314941406) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.10869598388671875) ) ) {
                    sum += (double)0.004000000000000000083;
                  } else {
                    sum += (double)0.01499150476190476422;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8187500238418579102) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.005317963636363637336;
                    }
                  } else {
                    sum += (double)0.008377257142857143582;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93333339691162109) ) ) {
                sum += (double)0.06588643261093911352;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3079000115394592285) ) ) {
                  sum += (double)0.005749786401012017649;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12556.41748046875) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09735000133514404297) ) ) {
                      sum += (double)0.007535462082362082148;
                    } else {
                      sum += (double)0.02395774545454545587;
                    }
                  } else {
                    sum += (double)0.04785858186619718069;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2259725034236907959) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1687056124210357666) ) ) {
              sum += (double)0.1038050647855525283;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6859000027179718018) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2801000028848648071) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2014634981751441956) ) ) {
                      sum += (double)0.02153191781610798786;
                    } else {
                      sum += (double)0.04441895028419855923;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6994681060314178467) ) ) {
                      sum += (double)0.07992031153227600881;
                    } else {
                      sum += (double)0.02299687142857143388;
                    }
                  }
                } else {
                  sum += (double)0.07197985002471753158;
                }
              } else {
                sum += (double)0.09034683555724777604;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6115845143795013428) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09700000286102294922) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2717945128679275513) ) ) {
                  sum += (double)0.05659404429893169497;
                } else {
                  sum += (double)0.1003959294353638926;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7890.994873046875) ) ) {
                  sum += (double)0.1083238823588987959;
                } else {
                  sum += (double)0.2480012534513675038;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.680000007152557373) ) ) {
                sum += (double)0.1303585728728999249;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8785052895545959473) ) ) {
                  sum += (double)0.06600838081792251288;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3436.1851806640625) ) ) {
                    sum += (double)0.03187473712481408289;
                  } else {
                    sum += (double)0.008370725000000002469;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1117.11712646484375) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4054.79150390625) ) ) {
            sum += (double)0.2025791805293376824;
          } else {
            sum += (double)0.3313435532792051719;
          }
        } else {
          sum += (double)0.04838547485380117336;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4590749889612197876) ) ) {
          sum += (double)0.179995743052730417;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.556220054626464844) ) ) {
            sum += (double)0.5129422220211794503;
          } else {
            sum += (double)0.3390471526249455581;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.6894841194152832) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.292089506983757019) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0171500006690621376) ) ) {
              sum += (double)0.5433760417763306982;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.509370803833007812) ) ) {
                sum += (double)0.4966160552914852255;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13618.9873046875) ) ) {
                  sum += (double)0.4649341301390218506;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412595003843307495) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075499966740608215) ) ) {
                      sum += (double)0.2919261290115893193;
                    } else {
                      sum += (double)0.1731845872375124828;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4922.71044921875) ) ) {
                      sum += (double)0.4432617419406250092;
                    } else {
                      sum += (double)0.2506928030674931973;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.99197864532470703) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.29658818244934082) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3597664982080459595) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6710500121116638184) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.686362028121948242) ) ) {
                      sum += (double)0.4925860466663364856;
                    } else {
                      sum += (double)0.5651578815335867034;
                    }
                  } else {
                    sum += (double)0.3895537126732156463;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1734500005841255188) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4160825014114379883) ) ) {
                      sum += (double)0.5799546802369516252;
                    } else {
                      sum += (double)0.6164318709202197821;
                    }
                  } else {
                    sum += (double)0.5415159514034206811;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2990587502717971802) ) ) {
                  sum += (double)0.4253236101465029395;
                } else {
                  sum += (double)0.5281386472598894599;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04835000075399875641) ) ) {
                sum += (double)0.6518336960175374895;
              } else {
                sum += (double)0.5553847388601721446;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351285010576248169) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20197.9580078125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.65137958526611328) ) ) {
                sum += (double)0.3952429825879472669;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4687999933958053589) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2213499993085861206) ) ) {
                    sum += (double)0.1297432501400560267;
                  } else {
                    sum += (double)0.1930487257867112005;
                  }
                } else {
                  sum += (double)0.3259385035888514026;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3115000128746032715) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2800046056509017944) ) ) {
                  sum += (double)0.287370757489605444;
                } else {
                  sum += (double)0.09850286939087600502;
                }
              } else {
                sum += (double)0.05574304153405766626;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.96285629272460938) ) ) {
              sum += (double)0.4582535714603528376;
            } else {
              sum += (double)0.2921090725732023996;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.149416446685791016) ) ) {
          sum += (double)0.4005341940213096308;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.097320795059204102) ) ) {
            sum += (double)0.2219934920329330597;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.2727976847688973194;
              } else {
                sum += (double)0.02942172307692307587;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
                sum += (double)0.1170436252058982274;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.34412956237792969) ) ) {
                  sum += (double)0.05636056870090644377;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1409000009298324585) ) ) {
                    sum += (double)0.02636542745995423126;
                  } else {
                    sum += (double)0.01239193846153846361;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9429409801959991455) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6524230241775512695) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4764960110187530518) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5182944834232330322) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3778.521484375) ) ) {
                    sum += (double)0.6324254259675253786;
                  } else {
                    sum += (double)0.5400324324996412795;
                  }
                } else {
                  sum += (double)0.6614893526341971697;
                }
              } else {
                sum += (double)0.5665659303977598205;
              }
            } else {
              sum += (double)0.4541017692903976943;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.439660549163818359) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280848264694213867) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2549.0557861328125) ) ) {
                  sum += (double)0.6215642309680634581;
                } else {
                  sum += (double)0.6933256042607111036;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5894770026206970215) ) ) {
                  sum += (double)0.7194079992057325068;
                } else {
                  sum += (double)0.7517103846790891275;
                }
              }
            } else {
              sum += (double)0.6061082919514181322;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07434999942779541016) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6066484451293945312) ) ) {
              sum += (double)0.8958674627680311975;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.49033784866333008) ) ) {
                sum += (double)0.8121096096503886974;
              } else {
                sum += (double)0.8622070190476190943;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2746.247802734375) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.30569553375244141) ) ) {
                sum += (double)0.7246572915131048731;
              } else {
                sum += (double)0.7644839727501255844;
              }
            } else {
              sum += (double)0.7776023742350797185;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.5130764409771941814;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.544204831123352051) ) ) {
              sum += (double)0.4025415130040082556;
            } else {
              sum += (double)0.1653235331960435928;
            }
          }
        } else {
          sum += (double)0.6132418302295687962;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.258169889450073242) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2290119975805282593) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1771675050258636475) ) ) {
          sum += (double)0.0687727772965520262;
        } else {
          sum += (double)0.2137128894207053764;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.231313586235046387) ) ) {
          sum += (double)0.5239065804260556458;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1048.388763427734375) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1475.6910400390625) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09690240770578384399) ) ) {
                sum += (double)0.3737808720795596229;
              } else {
                sum += (double)0.2724810016819765868;
              }
            } else {
              sum += (double)0.4801873572187397299;
            }
          } else {
            sum += (double)0.1299054688534753976;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000035762786865) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3714815080165863037) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.21538448333740234) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.164357014000415802) ) ) {
                sum += (double)0.004000000000000000951;
              } else {
                sum += (double)0.02312305934065934931;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)728.542327880859375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.5) ) ) {
                  sum += (double)0.005331022222222222759;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1349550560116767883) ) ) {
                    sum += (double)0.005349709090909091254;
                  } else {
                    sum += (double)0.004000000000000002685;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)472.455352783203125) ) ) {
                  sum += (double)0.01459014545454545564;
                } else {
                  sum += (double)0.004000000000000000083;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702358067035675049) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2466.444091796875) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7031500041484832764) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3595499992370605469) ) ) {
                    sum += (double)0.06139473152161448871;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.149349994957447052) ) ) {
                      sum += (double)0.01493927204706551985;
                    } else {
                      sum += (double)0.03613132903225805409;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
                    sum += (double)0.01546275789473684249;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2449999973177909851) ) ) {
                      sum += (double)0.09996012263814617327;
                    } else {
                      sum += (double)0.03303404116743471203;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04020000062882900238) ) ) {
                  sum += (double)0.02435885161290322551;
                } else {
                  sum += (double)0.1345333052109269345;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3151500076055526733) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2049999982118606567) ) ) {
                  sum += (double)0.004000000000000000951;
                } else {
                  sum += (double)0.008652693333333334388;
                }
              } else {
                sum += (double)0.0116058933333333357;
              }
            }
          }
        } else {
          sum += (double)0.116888850549450557;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6850499808788299561) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9230.150390625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03979999944567680359) ) ) {
                sum += (double)0.09035939366214079671;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2809499949216842651) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1846385002136230469) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3935753107070922852) ) ) {
                      sum += (double)0.0151701733333333335;
                    } else {
                      sum += (double)0.0254580999999999974;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                      sum += (double)0.04306387681185028932;
                    } else {
                      sum += (double)0.02476521329369343882;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20252.34765625) ) ) {
                    sum += (double)0.03849471816791395773;
                  } else {
                    sum += (double)0.07121081225465428211;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.98798084259033203) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.670041203498840332) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.98966169357299805) ) ) {
                      sum += (double)0.08308839804892326208;
                    } else {
                      sum += (double)0.04748170937251402351;
                    }
                  } else {
                    sum += (double)0.1833202071434838487;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3853085041046142578) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0775499977171421051) ) ) {
                      sum += (double)0.004253340000000000419;
                    } else {
                      sum += (double)0.02341955620094191698;
                    }
                  } else {
                    sum += (double)0.05395926866363898178;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7950000166893005371) ) ) {
                  sum += (double)0.1431867259141494375;
                } else {
                  sum += (double)0.2778661461985108549;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7224999964237213135) ) ) {
              sum += (double)0.3220048539734364779;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2907000035047531128) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1279999986290931702) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1263101547956466675) ) ) {
                    sum += (double)0.1824686540464509621;
                  } else {
                    sum += (double)0.07419163546062571002;
                  }
                } else {
                  sum += (double)0.2113915224186239394;
                }
              } else {
                sum += (double)0.03778583611491107691;
              }
            }
          }
        } else {
          sum += (double)0.2848492795036260961;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4604820013046264648) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.36018753051757812) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005050000036135315895) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5669.7919921875) ) ) {
                sum += (double)0.546520870260219005;
              } else {
                sum += (double)0.6008759568732557899;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2357529997825622559) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.258642673492431641) ) ) {
                  sum += (double)0.4236369241734283531;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6359000205993652344) ) ) {
                    sum += (double)0.2089964827735075192;
                  } else {
                    sum += (double)0.3157065534991332911;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2297.1180419921875) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.586111068725585938) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.286803722381591797) ) ) {
                      sum += (double)0.4595724353033307508;
                    } else {
                      sum += (double)0.531901876623094183;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.47551059722900391) ) ) {
                      sum += (double)0.3697676294174815914;
                    } else {
                      sum += (double)0.4858053002567779832;
                    }
                  }
                } else {
                  sum += (double)0.3154382088831996778;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1603500023484230042) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.999999873689375818e-05) ) ) {
                sum += (double)0.6744994541666665677;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.370241507887840271) ) ) {
                  sum += (double)0.5514624729118992041;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2906.3162841796875) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
                      sum += (double)0.6252175708257775577;
                    } else {
                      sum += (double)0.5243432693906809883;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6186499893665313721) ) ) {
                      sum += (double)0.6528677619047618119;
                    } else {
                      sum += (double)0.6088035518559716808;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3436.2587890625) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678065091371536255) ) ) {
                  sum += (double)0.5482290679950186929;
                } else {
                  sum += (double)0.4658317070518112613;
                }
              } else {
                sum += (double)0.3860662073406349593;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3410769999027252197) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.29695606231689453) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2173499986529350281) ) ) {
                sum += (double)0.3271902709703615186;
              } else {
                sum += (double)0.1786742030797663916;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2277417555451393127) ) ) {
                sum += (double)0.2385234634581068214;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2274999991059303284) ) ) {
                  sum += (double)0.03795154424951267813;
                } else {
                  sum += (double)0.2393716306015911954;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.79875850677490234) ) ) {
              sum += (double)0.2755104037579301224;
            } else {
              sum += (double)0.4275413818303511193;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6111499965190887451) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05969999916851520538) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.471292018890380859) ) ) {
              sum += (double)0.3268043612877220561;
            } else {
              sum += (double)0.1652986580637928471;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.980241060256958008) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.256953507661819458) ) ) {
                sum += (double)0.01069725260770975316;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.21085357666015625) ) ) {
                  sum += (double)0.06700745213377858056;
                } else {
                  sum += (double)0.0279761550195835873;
                }
              }
            } else {
              sum += (double)0.1101319117409533394;
            }
          }
        } else {
          sum += (double)0.3609310501421048589;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7607523500919342041) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5411314964294433594) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.28156614303588867) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.56788933277130127) ) ) {
                sum += (double)0.6235543230576959806;
              } else {
                sum += (double)0.5173981244375488453;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4761.35205078125) ) ) {
                sum += (double)0.5920324450373423142;
              } else {
                sum += (double)0.7088392547619046802;
              }
            }
          } else {
            sum += (double)0.3945544838800841281;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6539085209369659424) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1541.4549560546875) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8580999970436096191) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1344500035047531128) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5658330023288726807) ) ) {
                      sum += (double)0.6957944617486339078;
                    } else {
                      sum += (double)0.6308164096509015772;
                    }
                  } else {
                    sum += (double)0.7155062192243131225;
                  }
                } else {
                  sum += (double)0.7275398995670994129;
                }
              } else {
                sum += (double)0.7571897591026747198;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
                sum += (double)0.7398640547872448181;
              } else {
                sum += (double)0.7925981590884343397;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5831313729286193848) ) ) {
              sum += (double)0.910384060225442826;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.291600227355957031) ) ) {
                sum += (double)0.7879498000984086481;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05558137223124504089) ) ) {
                  sum += (double)0.8206701575757572309;
                } else {
                  sum += (double)0.8644338583333333048;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6760014891624450684) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.956643402576446533) ) ) {
            sum += (double)0.5322246730712951734;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2481.459228515625) ) ) {
              sum += (double)0.4461626066220181208;
            } else {
              sum += (double)0.2943725858759059788;
            }
          }
        } else {
          sum += (double)0.5838987247361926425;
        }
      }
    }
  }
  return sum;
}
