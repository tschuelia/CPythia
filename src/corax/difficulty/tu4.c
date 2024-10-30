#include "prediction.h"
double predict_margin_unit4(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30909090909091042) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
          sum += (double)-0.003891978558345652196;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
            sum += (double)0.007980477514781439408;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
              sum += (double)-0.007381163293308813482;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
                sum += (double)-0.00367763024355006107;
              } else {
                sum += (double)0.009017637440305380919;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7451.581543301115744) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)20.45461734320752001) ) ) {
              sum += (double)-0.002494331561018135399;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05921603206594685392) ) ) {
                sum += (double)-0.003393777001268461196;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1025332214731468489) ) ) {
                  sum += (double)0.008286496094784248992;
                } else {
                  sum += (double)0.002316812985387124886;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.857800000000000118) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)397.8870711082944922) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                  sum += (double)0.003718906163049829836;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
                    sum += (double)-0.008162094969278966064;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1607000000000000095) ) ) {
                      sum += (double)0.001057548529436999401;
                    } else {
                      sum += (double)-0.004713345856510550713;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03305000000000000299) ) ) {
                      sum += (double)0.0002447674343653893155;
                    } else {
                      sum += (double)0.005659884315537833284;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1446500000000000286) ) ) {
                      sum += (double)-0.002411530625577600409;
                    } else {
                      sum += (double)0.001455945200356678236;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4103386442176324422) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
                      sum += (double)0.002221084017923384037;
                    } else {
                      sum += (double)-0.001312280237031683864;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.647150000000000003) ) ) {
                      sum += (double)-0.006242878066314595624;
                    } else {
                      sum += (double)0.0002562489067552579458;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.00597100920824333338;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.1500000000000199) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2009165000000000256) ) ) {
              sum += (double)0.01116689838872339871;
            } else {
              sum += (double)0.002990749322910450994;
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)29304.5719267044733) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
                sum += (double)0.002878914274512193571;
              } else {
                sum += (double)-0.005244996594536902382;
              }
            } else {
              sum += (double)0.006768074269702809356;
            }
          }
        }
      }
    } else {
      sum += (double)-0.002243981303825291242;
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4995331520331520725) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
          sum += (double)0.003944687990289530606;
        } else {
          sum += (double)-3.822651100257067801e-05;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
          sum += (double)0.004014278820065744074;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-355.2188524626326966) ) ) {
            sum += (double)0.001449769264749560223;
          } else {
            sum += (double)-0.004691218214453625468;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07449922958397615) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9930683563748080589) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
              sum += (double)0.007225878908826337786;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4148169003269751576) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1331779278199183014) ) ) {
                  sum += (double)0.001642357898062616131;
                } else {
                  sum += (double)0.004192598891785557363;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08685000000000001052) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4800849858356940891) ) ) {
                      sum += (double)0.003118155945503753475;
                    } else {
                      sum += (double)-0.00271959930587047918;
                    }
                  } else {
                    sum += (double)-0.0138644672914884793;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1387.069702312839809) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.23182297154900056) ) ) {
                      sum += (double)0.001849176624336625052;
                    } else {
                      sum += (double)0.006977943050096703168;
                    }
                  } else {
                    sum += (double)0.0001822739678766267129;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.004959855377128640809;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.06168384879725863) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5142890000000001072) ) ) {
                sum += (double)-0.01231661903537869911;
              } else {
                sum += (double)6.189349916124513241e-05;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.830018761726079468) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3152500000000000857) ) ) {
                  sum += (double)-0.00612639735550849461;
                } else {
                  sum += (double)0.001983547877511848342;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.890916808149406769) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                    sum += (double)0.004602299748779827872;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0553124705129175373) ) ) {
                      sum += (double)0.003182495378560948676;
                    } else {
                      sum += (double)-0.01008521663576931841;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.432034895516332895) ) ) {
                    sum += (double)-0.00427402787653531277;
                  } else {
                    sum += (double)0.006849250072288313659;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.0121815549220693712;
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.08774088920105922729) ) ) {
          sum += (double)-0.008732857349952979908;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500000000000426) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9013.430510330945253) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5751000000000000556) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6603400946501547519) ) ) {
                    sum += (double)-0.003422717591650550201;
                  } else {
                    sum += (double)0.00424576576143006687;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16362.01564670949665) ) ) {
                      sum += (double)0.007188368667751616689;
                    } else {
                      sum += (double)-0.001194699156928422969;
                    }
                  } else {
                    sum += (double)0.01542998558864814782;
                  }
                }
              } else {
                sum += (double)0.01443595482908624147;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
                sum += (double)0.007207287535434749211;
              } else {
                sum += (double)-0.003160584775602356348;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18253968253969077) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3020500000000000962) ) ) {
                      sum += (double)0.0001845518095719060159;
                    } else {
                      sum += (double)-0.01307235581171264927;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7698386560669406853) ) ) {
                      sum += (double)0.006442822594930202283;
                    } else {
                      sum += (double)-0.003695976199004084167;
                    }
                  }
                } else {
                  sum += (double)-0.003340311160663972032;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2782500000000000528) ) ) {
                  sum += (double)-0.01555723216174819713;
                } else {
                  sum += (double)-0.003394090614106907468;
                }
              }
            } else {
              sum += (double)0.0006047542431962520809;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
            sum += (double)-0.003629637758975402719;
          } else {
            sum += (double)0.004733083032633868606;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3083306738637045519) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5420.781404110555741) ) ) {
                  sum += (double)-0.007309729960832577617;
                } else {
                  sum += (double)0.001324844165394483417;
                }
              } else {
                sum += (double)0.001756490721120517341;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11018.535337379677) ) ) {
                sum += (double)0.007150943004420079636;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0779500000000000054) ) ) {
                  sum += (double)0.004672314594208893355;
                } else {
                  sum += (double)-0.003513393378057247905;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8677000000000001378) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.606377583365031558) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)15.77248611608338713) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
                    sum += (double)-0.008459788505650087109;
                  } else {
                    sum += (double)0.002267430562634762531;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1187500000000000083) ) ) {
                    sum += (double)0.009131179365563863587;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)82.64618349518126195) ) ) {
                      sum += (double)-0.004307912692699865029;
                    } else {
                      sum += (double)0.002612186287363389876;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3652.934062563911539) ) ) {
                    sum += (double)0.004292079095494588659;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4659489670146004237) ) ) {
                      sum += (double)-0.001695166491665104583;
                    } else {
                      sum += (double)-0.007202394973376913777;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.978492136910269927) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                      sum += (double)0.0008630710210400867506;
                    } else {
                      sum += (double)-0.004174459545251519438;
                    }
                  } else {
                    sum += (double)0.008199603169559565793;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08132629836300046822) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.091810344827586654) ) ) {
                  sum += (double)0.005160800609901523492;
                } else {
                  sum += (double)-0.002654306842595436072;
                }
              } else {
                sum += (double)-0.01192713316828124606;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.332274916211522164) ) ) {
          sum += (double)-0.004919324342312645336;
        } else {
          sum += (double)0.003415706819267646469;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
          sum += (double)-0.002309006178760527814;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)215.2883771929824945) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3166171325058890207) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6535500000000000753) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2988235496559247806) ) ) {
                  sum += (double)0.01423958699218620498;
                } else {
                  sum += (double)0.004914166486840600145;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1885.524186461903128) ) ) {
                  sum += (double)0.008255980216220634715;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)10534.50099646399576) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5258.869399769443589) ) ) {
                      sum += (double)0.0001553699505481083334;
                    } else {
                      sum += (double)-0.003503279190150819771;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.857800000000000118) ) ) {
                      sum += (double)0.002313550271372775968;
                    } else {
                      sum += (double)-0.002632998195910332771;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4049500000000000877) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2332.481509447223289) ) ) {
                    sum += (double)-0.003571203493650589814;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)43.5582844574780168) ) ) {
                      sum += (double)0.01052700962973271599;
                    } else {
                      sum += (double)-0.001601272175203283677;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05655000000000000998) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5229000000000001425) ) ) {
                      sum += (double)-0.006959670965812667087;
                    } else {
                      sum += (double)-0.00233275775025106177;
                    }
                  } else {
                    sum += (double)-0.01008175319199372012;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3533.336699232966112) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3749.11546473725457) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0779500000000000054) ) ) {
                      sum += (double)0.006762335974313693487;
                    } else {
                      sum += (double)-0.0009134154125919561468;
                    }
                  } else {
                    sum += (double)0.009620468434245280434;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3149.812030383795445) ) ) {
                    sum += (double)-0.008127927647606201372;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2896.940642020843825) ) ) {
                      sum += (double)0.006584594344953897081;
                    } else {
                      sum += (double)-0.004153467692652444178;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.004989924815542854351;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7118907180887991126) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
              sum += (double)0.004925500399160813968;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6081.744581517318693) ) ) {
                sum += (double)-0.003615442387554690124;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770958479253431361) ) ) {
                  sum += (double)-0.003124129731552992457;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.70619946091644792) ) ) {
                    sum += (double)0.006210952845346212788;
                  } else {
                    sum += (double)-0.002005130458115786992;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4463094520789036013) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6969500000000000695) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2020500000000000351) ) ) {
                  sum += (double)0.0183670028005657078;
                } else {
                  sum += (double)0.006996944365462469916;
                }
              } else {
                sum += (double)0.005143457809499317121;
              }
            } else {
              sum += (double)-0.0002990150990454999063;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03635000000000000731) ) ) {
            sum += (double)0.00201644670389503804;
          } else {
            sum += (double)-0.004894287223772050138;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2523846967694989285) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
          sum += (double)0.003655573540643051664;
        } else {
          sum += (double)-0.0002602409414533944252;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)13833.51142176279791) ) ) {
          sum += (double)-0.01497752364050930832;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5536370000000000458) ) ) {
            sum += (double)-0.002011058746669772482;
          } else {
            sum += (double)0.005307716540677548389;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
            if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
              sum += (double)-0.006581828359889866677;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.76341350601295943) ) ) {
                sum += (double)0.001350760158888994304;
              } else {
                sum += (double)0.008604792884834518152;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.38875137513751667) ) ) {
              sum += (double)-0.009197763281440497068;
            } else {
              sum += (double)-0.0004053133883379584973;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.114147004888090417) ) ) {
            sum += (double)-0.0009726813185925893557;
          } else {
            sum += (double)-0.009161887398027854235;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8753585000000000393) ) ) {
          sum += (double)0.00234942664399209614;
        } else {
          sum += (double)0.006924066036776378372;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30909090909091042) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08409200000000001396) ) ) {
              sum += (double)-0.006324661788078690498;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.975304878048781188) ) ) {
                sum += (double)0.005412323369020234642;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2668.597659326529538) ) ) {
                  sum += (double)-0.00442094969985628878;
                } else {
                  sum += (double)0.001815857291790555625;
                }
              }
            }
          } else {
            sum += (double)0.005980287945787769212;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6081.744581517318693) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
                sum += (double)0.002966882540950474632;
              } else {
                sum += (double)-0.004004091865196319523;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2019559617197731194) ) ) {
                sum += (double)-0.002562399867622792114;
              } else {
                sum += (double)0.01058956078122017148;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.831026909314261597) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                sum += (double)-0.003284196996436487652;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3332.614804015349819) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
                    sum += (double)-0.004280105729827388822;
                  } else {
                    sum += (double)0.001956268058222048432;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000000000001465) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.576686013579013057) ) ) {
                      sum += (double)0.008540918353961233361;
                    } else {
                      sum += (double)-0.002840282028047317903;
                    }
                  } else {
                    sum += (double)0.01140069276587390296;
                  }
                }
              }
            } else {
              sum += (double)-0.004755558037388352838;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7451.581543301115744) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000000000001021) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.34436758893280839) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2428.189675971083943) ) ) {
                      sum += (double)-0.001015253930379611492;
                    } else {
                      sum += (double)0.00269418549942269242;
                    }
                  } else {
                    sum += (double)0.00778795907222188874;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6361.997541307308893) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
                      sum += (double)0.003649855010764827424;
                    } else {
                      sum += (double)-0.002752520600223113453;
                    }
                  } else {
                    sum += (double)-0.008870248255977382368;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7285500000000001419) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
                    sum += (double)0.004733956922003360913;
                  } else {
                    sum += (double)0.01290639597439652286;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                    sum += (double)-0.006702011115471057968;
                  } else {
                    sum += (double)0.004073709441664053431;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.487050000000000094) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0458500000000000088) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)260.2258709753264725) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.742610837438423932) ) ) {
                      sum += (double)0.001331480568966182665;
                    } else {
                      sum += (double)-0.007695160189331096308;
                    }
                  } else {
                    sum += (double)-0.001755049516273978058;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.086028323821603081) ) ) {
                    sum += (double)0.003843606064667636543;
                  } else {
                    sum += (double)-0.003082301854179711736;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.956944444444444819) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5500179611347216779) ) ) {
                    sum += (double)-0.007400135963579020787;
                  } else {
                    sum += (double)0.003631292924339422218;
                  }
                } else {
                  sum += (double)-0.01165613739596021298;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00378787878788067) ) ) {
              sum += (double)0.0004081645584220070172;
            } else {
              sum += (double)0.005124987586154042957;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9584500000000001352) ) ) {
            sum += (double)0.002813540753320124387;
          } else {
            sum += (double)-0.00562783805654127299;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
        sum += (double)-0.002043737622510302318;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3368947088135722523) ) ) {
          sum += (double)-0.003867990509106781875;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.69385026737968047) ) ) {
              sum += (double)0.0008838085652579147269;
            } else {
              sum += (double)-0.003093765167518398515;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4976500000000000923) ) ) {
              sum += (double)0.008784803055595582708;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4659489670146004237) ) ) {
                sum += (double)0.007482311758803753508;
              } else {
                sum += (double)-0.003274712201392057914;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.028991596638655803) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7285500000000001419) ) ) {
        sum += (double)0.002112334416586383878;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-355.2188524626326966) ) ) {
          sum += (double)0.003861940841402330526;
        } else {
          sum += (double)-0.0005012001275429590896;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5988367574978012975) ) ) {
            sum += (double)-0.01072519064888265844;
          } else {
            sum += (double)-0.002077561851427610611;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9046500000000001762) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1612811956950306047) ) ) {
                      sum += (double)0.004370813715791265971;
                    } else {
                      sum += (double)0.0006269974581355908932;
                    }
                  } else {
                    sum += (double)-0.003579636233157365566;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.83232931726908177) ) ) {
                    sum += (double)-0.00808877967853708843;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3177.479148390085811) ) ) {
                      sum += (double)-0.004777871768586213277;
                    } else {
                      sum += (double)0.001014574841615690625;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    sum += (double)-0.003874611176255431284;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.244386202413397563) ) ) {
                      sum += (double)0.00282358392943604479;
                    } else {
                      sum += (double)0.001124882310165642744;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6051360000000001182) ) ) {
                    sum += (double)0.003373014290455534324;
                  } else {
                    sum += (double)0.0137589074261857125;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5565325000000000966) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31299.3757595375755) ) ) {
                    sum += (double)-0.004976099098337674262;
                  } else {
                    sum += (double)0.001622112562131905467;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1784550515539286286) ) ) {
                    sum += (double)0.00519787549570582038;
                  } else {
                    sum += (double)-0.001293823912380163759;
                  }
                }
              } else {
                sum += (double)-0.01322927812238702296;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6213000000000000744) ) ) {
              sum += (double)0.003645136056244874852;
            } else {
              sum += (double)-0.003562723797088290616;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2450.380029300642036) ) ) {
          sum += (double)-4.769903622037751907e-05;
        } else {
          sum += (double)-0.007288979485395269235;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7451.581543301115744) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2833.358085742900585) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.12310606060606588) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2038.087406351012987) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)572.059826422058336) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)530.0555639917105282) ) ) {
                    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                      sum += (double)-0.003284830644643819964;
                    } else {
                      sum += (double)-0.0005447878272596682388;
                    }
                  } else {
                    sum += (double)-0.008033007875812092982;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07895000000000000628) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.872261072261072634) ) ) {
                      sum += (double)-0.0001592050273482651908;
                    } else {
                      sum += (double)-0.004211861939571365059;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
                      sum += (double)0.0009746097000654962202;
                    } else {
                      sum += (double)0.004345065608669044371;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
                  sum += (double)0.001993322898813845463;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2404.62816755580252) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6768.866270911575157) ) ) {
                      sum += (double)-0.002712991371088165071;
                    } else {
                      sum += (double)-0.01364830575238410934;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4126257761330971996) ) ) {
                      sum += (double)0.006091172485716081671;
                    } else {
                      sum += (double)-0.006484029796789935775;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.009911441097275212192;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5629.325767958667711) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3576884733354243617) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4928625677951861683) ) ) {
                  sum += (double)0.002785808291868053024;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22862.06187916693671) ) ) {
                    sum += (double)0.002807450344631584518;
                  } else {
                    sum += (double)-0.007999681393425260925;
                  }
                }
              } else {
                sum += (double)0.005002170612070523832;
              }
            } else {
              sum += (double)0.006185000673179423189;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1940000000000000335) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5639.254044705900924) ) ) {
                  sum += (double)-0.002219858177605063803;
                } else {
                  sum += (double)0.001114630492656340987;
                }
              } else {
                sum += (double)-0.004271716911774898692;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5869420077754615717) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000000000001021) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
                      sum += (double)-0.005596132683963794645;
                    } else {
                      sum += (double)-0.0007043896732600610179;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0174500000000000037) ) ) {
                      sum += (double)0.01142988824645884208;
                    } else {
                      sum += (double)0.0009428432998951584692;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7332.695226774164439) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9566.137358918122118) ) ) {
                      sum += (double)0.004525696482990907744;
                    } else {
                      sum += (double)-0.0051280125188435631;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3912.581042876649917) ) ) {
                      sum += (double)0.0132196658123210891;
                    } else {
                      sum += (double)0.002449449254184788913;
                    }
                  }
                }
              } else {
                sum += (double)-0.005519414338818739822;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4043265000000000886) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4006080000000000751) ) ) {
                sum += (double)-0.003024215252958446093;
              } else {
                sum += (double)-0.01165641303423438531;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1233065969357276664) ) ) {
                sum += (double)0.002083961878110718313;
              } else {
                sum += (double)-0.005202986919854661781;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
          sum += (double)-0.003072013751703926276;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02030850352529866079) ) ) {
            sum += (double)-0.006058725936935017466;
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)26013.27966640743398) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.1500000000000199) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2009165000000000256) ) ) {
                  sum += (double)0.009251768440611771518;
                } else {
                  sum += (double)0.002591516987991344858;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006850000000000001053) ) ) {
                  sum += (double)0.001938618080717055244;
                } else {
                  sum += (double)-0.003734341105285891946;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.7332126398946883) ) ) {
                sum += (double)0.003558396735425499707;
              } else {
                sum += (double)0.01381275252867570497;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
        sum += (double)-0.00211802563080877625;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3283310000000000395) ) ) {
          sum += (double)-0.001698597885893508332;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4976500000000000923) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7581.571018954598003) ) ) {
              sum += (double)0.01154728518283271513;
            } else {
              sum += (double)0.001057184036475170832;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13827.99262003128206) ) ) {
              sum += (double)0.001359462414785078547;
            } else {
              sum += (double)-0.00695760167717364951;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.028991596638655803) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8840870000000001783) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6497500000000001608) ) ) {
          sum += (double)0.001530977210137850902;
        } else {
          sum += (double)0.003058985332494583258;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.120050465838510867) ) ) {
          sum += (double)0.006491237812120316704;
        } else {
          sum += (double)0.001835850065010935419;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.8950000000000001288) ) ) {
          sum += (double)-0.007069164353290787427;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.65524034672972675) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)690.7475206421901248) ) ) {
                      sum += (double)-0.001838947438918628503;
                    } else {
                      sum += (double)0.0007564267032282634201;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
                      sum += (double)0.001372703972435600217;
                    } else {
                      sum += (double)0.00800731514707668339;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.78183361629881531) ) ) {
                      sum += (double)0.004648926738098629365;
                    } else {
                      sum += (double)-0.006834062180773738983;
                    }
                  } else {
                    sum += (double)-0.01058886423352220149;
                  }
                }
              } else {
                sum += (double)0.005647534659856502832;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5565325000000000966) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)43305.24755796225509) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1572954101779138469) ) ) {
                      sum += (double)-0.008385036943474642387;
                    } else {
                      sum += (double)-0.002468671624760169787;
                    }
                  } else {
                    sum += (double)0.003195573745570528222;
                  }
                } else {
                  sum += (double)0.001852863989294944091;
                }
              } else {
                sum += (double)-0.01169138424656971167;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6213000000000000744) ) ) {
              sum += (double)0.003174636276077706046;
            } else {
              sum += (double)-0.003272512969343173428;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2450.380029300642036) ) ) {
          sum += (double)8.944851750076033105e-05;
        } else {
          sum += (double)-0.006805012927212547233;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3064.401422747675497) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904340000000000588) ) ) {
            sum += (double)0.001220560581298338765;
          } else {
            sum += (double)0.006036870021175052767;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2190499999999999947) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4615.66579550800634) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                    sum += (double)0.001217707638830542016;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
                      sum += (double)-0.01121630617646676882;
                    } else {
                      sum += (double)-0.002177819672555262025;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0756500000000000089) ) ) {
                    sum += (double)-0.007245079952703076774;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7444500000000001672) ) ) {
                      sum += (double)0.004428539600950381905;
                    } else {
                      sum += (double)-0.004143660542549070305;
                    }
                  }
                }
              } else {
                sum += (double)0.005101352199185195217;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
                sum += (double)-0.001376887809650365014;
              } else {
                sum += (double)-0.009136558546525860511;
              }
            }
          } else {
            sum += (double)0.001690590290336324922;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04825000000000000816) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)456.1989629287657522) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-569.3023343863511627) ) ) {
              sum += (double)-0.007235491908266246212;
            } else {
              sum += (double)-0.001835920219433743745;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.32484954126279364) ) ) {
                sum += (double)0.00562341389896893213;
              } else {
                sum += (double)-0.002480633443658387255;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.756425009589567043) ) ) {
                sum += (double)-0.003529197012964409904;
              } else {
                sum += (double)0.005228044986257303524;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2928.425989978642974) ) ) {
            sum += (double)-0.008659803452754468236;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8551000000000000822) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9301791105069795451) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2690.993343004484359) ) ) {
                  sum += (double)-0.002599229805251700599;
                } else {
                  sum += (double)0.002949263984986987518;
                }
              } else {
                sum += (double)-0.003126309363125141794;
              }
            } else {
              sum += (double)-0.007333158656058926146;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1592430000000000234) ) ) {
          sum += (double)-0.002225734183527517014;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
            sum += (double)0.004228169476043213901;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.34234234234234506) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31299.3757595375755) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8628500000000002279) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2344066382699040996) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7310500000000000886) ) ) {
                      sum += (double)0.007557693639367997658;
                    } else {
                      sum += (double)-0.0001917452940277387897;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                      sum += (double)-0.002278395048585158799;
                    } else {
                      sum += (double)-0.0005270351387642469715;
                    }
                  }
                } else {
                  sum += (double)-0.004869341313925093506;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)295.7846320346320681) ) ) {
                  sum += (double)0.01104456955932055576;
                } else {
                  sum += (double)-0.002663110645709102289;
                }
              }
            } else {
              sum += (double)-0.002506874982484539986;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7118907180887991126) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
              sum += (double)0.004462464786281190518;
            } else {
              sum += (double)-0.0007904667433354670494;
            }
          } else {
            sum += (double)0.005663360756537258282;
          }
        } else {
          sum += (double)-0.003217650044230579119;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.93082137161084688) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3391.870434469365591) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.25978407557355609) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)15.77248611608338713) ) ) {
                sum += (double)-0.0009525477834042755726;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04185000000000000525) ) ) {
                  sum += (double)0.006802770222064109806;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                      sum += (double)0.001339267565328310094;
                    } else {
                      sum += (double)0.009869056493950466649;
                    }
                  } else {
                    sum += (double)-0.004511358221066867971;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
                sum += (double)0.005707848216422175061;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3371.239524566822638) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6659500000000001529) ) ) {
                    sum += (double)-0.0156146666861236242;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3339271889634866652) ) ) {
                      sum += (double)-0.006252841863165561898;
                    } else {
                      sum += (double)0.007951145426271028632;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869734242044373551) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1387.069702312839809) ) ) {
                      sum += (double)-0.01443848659745253574;
                    } else {
                      sum += (double)-0.000234409667761794222;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
                      sum += (double)0.009485908481405420228;
                    } else {
                      sum += (double)-0.001329125097134051031;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.009416868110889918889;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3266000000000000569) ) ) {
            sum += (double)0.002628977289960927454;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3652000000000000246) ) ) {
              sum += (double)-0.006959056663918487817;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                sum += (double)-0.0009830562274958285461;
              } else {
                sum += (double)0.006530520161387638224;
              }
            }
          }
        }
      } else {
        sum += (double)0.002435840994265378676;
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7034.526718448786596) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000000000000799) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)142.2522321428571672) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500000000000426) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5001330000000000497) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4629760000000000542) ) ) {
                  sum += (double)0.002316985197007115187;
                } else {
                  sum += (double)-0.004278377814360201543;
                }
              } else {
                sum += (double)0.006613614709428545721;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                sum += (double)-0.001834380612781660305;
              } else {
                sum += (double)0.001608019407691606848;
              }
            }
          } else {
            sum += (double)-0.003039306792561323294;
          }
        } else {
          sum += (double)0.003927643195570641906;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3177.479148390085811) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4018505548079681078) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.87142857142858077) ) ) {
              sum += (double)0.008002328838544799094;
            } else {
              sum += (double)-0.001912963962916355756;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5001000000000001) ) ) {
                sum += (double)-0.01057600377842980548;
              } else {
                sum += (double)-0.001492409137620672767;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00378787878788067) ) ) {
                sum += (double)0.007736132115249986368;
              } else {
                sum += (double)-0.002505632332675173258;
              }
            }
          }
        } else {
          sum += (double)-0.007890180480466196453;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30909090909091042) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1360340320715830165) ) ) {
          sum += (double)-0.002665974083473852604;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22862.06187916693671) ) ) {
              sum += (double)0.003290089675250990487;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6941500000000001558) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5354000000000000981) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4304500000000000548) ) ) {
                    sum += (double)-0.004999171636130774095;
                  } else {
                    sum += (double)0.003955670889143267366;
                  }
                } else {
                  sum += (double)-0.006570658251742945988;
                }
              } else {
                sum += (double)0.003650396823041178809;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
                sum += (double)-0.003172633814624428901;
              } else {
                sum += (double)0.004607809367666225626;
              }
            } else {
              sum += (double)0.01012248072881148826;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3862.309036383199327) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2602911804898560555) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7821500000000000119) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.39356884057971797) ) ) {
                  sum += (double)0.01198793584642983238;
                } else {
                  sum += (double)0.004066690475207703458;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                  sum += (double)-0.003169843117073677455;
                } else {
                  sum += (double)0.003873713688694372347;
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4542.943917304383831) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7034.526718448786596) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
                    sum += (double)0.001744852896143402835;
                  } else {
                    sum += (double)0.007936562908555759577;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4126257761330971996) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6722500000000001252) ) ) {
                      sum += (double)0.008706580511280316917;
                    } else {
                      sum += (double)1.050910637325415905e-05;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2038.087406351012987) ) ) {
                      sum += (double)0.0001308731423916735038;
                    } else {
                      sum += (double)-0.006032267766779358768;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5481.444926233901242) ) ) {
                  sum += (double)-0.01051610924010560472;
                } else {
                  sum += (double)0.003541582312360897714;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04825000000000000816) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3576884733354243617) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5650000000000000577) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
                    sum += (double)0.001394949793027916701;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.09126037187329660849) ) ) {
                      sum += (double)-0.006996369980072338068;
                    } else {
                      sum += (double)-0.001741368074401992896;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.756425009589567043) ) ) {
                    sum += (double)-0.00297626795292224534;
                  } else {
                    sum += (double)0.004354248721118774736;
                  }
                }
              } else {
                sum += (double)-0.003639658509849633041;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8551000000000000822) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653589743589744199) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9301791105069795451) ) ) {
                    sum += (double)0.004806296362626708008;
                  } else {
                    sum += (double)-0.001530994760691052397;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1920.955598101732676) ) ) {
                      sum += (double)-0.005265945649775303182;
                    } else {
                      sum += (double)0.0006326187857749234747;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2511183070799432038) ) ) {
                      sum += (double)0.002727030869362200363;
                    } else {
                      sum += (double)-0.0009152887847953214981;
                    }
                  }
                }
              } else {
                sum += (double)-0.006943205854884212068;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9003.644477627831293) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4126257761330971996) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2593.773207383128465) ) ) {
                      sum += (double)0.0004719665596014770148;
                    } else {
                      sum += (double)-0.004061761306481836108;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9566.137358918122118) ) ) {
                      sum += (double)0.002312129100008011428;
                    } else {
                      sum += (double)-0.003860379443601316424;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4369219652904519635) ) ) {
                    sum += (double)-0.01001301767844531634;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
                      sum += (double)-0.00492956929899252775;
                    } else {
                      sum += (double)-0.0006122537181722466013;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                    sum += (double)0.003467106589334719227;
                  } else {
                    sum += (double)0.01289818448241094803;
                  }
                } else {
                  sum += (double)-0.003478731516262429605;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5528205492927561471) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03705000000000000654) ) ) {
                    sum += (double)-0.001222938000621377535;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2519.658559778325525) ) ) {
                      sum += (double)0.007473534796954527104;
                    } else {
                      sum += (double)-0.0007308893193062543717;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
                    sum += (double)-0.009533100352286485654;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
                      sum += (double)-0.001984487965091538859;
                    } else {
                      sum += (double)0.004611518710373253491;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                  sum += (double)0.0144318472510552194;
                } else {
                  sum += (double)0.001925743384171578823;
                }
              }
            }
          } else {
            sum += (double)-0.005423464596154197424;
          }
        }
      }
    } else {
      sum += (double)-0.001463387474083953973;
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.028991596638655803) ) ) {
      sum += (double)0.0023907371564296921;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9450000000000000622) ) ) {
          sum += (double)-0.005917681738877823665;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.074247175785397301) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
                      sum += (double)0.001005376088899190409;
                    } else {
                      sum += (double)-0.006476814889355188461;
                    }
                  } else {
                    sum += (double)0.007963701773867903899;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2668.597659326529538) ) ) {
                      sum += (double)-0.004090071659858733437;
                    } else {
                      sum += (double)0.001106357667189235587;
                    }
                  } else {
                    sum += (double)-0.008867757735944526223;
                  }
                }
              } else {
                sum += (double)0.005012074451690397801;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5565325000000000966) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31299.3757595375755) ) ) {
                    sum += (double)-0.004108918677620479291;
                  } else {
                    sum += (double)0.001557664258428995922;
                  }
                } else {
                  sum += (double)0.0017241986782713342;
                }
              } else {
                sum += (double)-0.01071316355121179273;
              }
            }
          } else {
            sum += (double)0.00266294722094542486;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
          sum += (double)0.00277150233845890057;
        } else {
          sum += (double)-0.00546244269946371229;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.5350000000000001421) ) ) {
          sum += (double)-0.003452308933370544335;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8551000000000000822) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8478500000000001036) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78888888888889497) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.117150000000000018) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4995331520331520725) ) ) {
                      sum += (double)0.0009328798193604961831;
                    } else {
                      sum += (double)-0.00146212165831636912;
                    }
                  } else {
                    sum += (double)0.001428049994881854879;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1155500000000000277) ) ) {
                    sum += (double)0.006263444743849055224;
                  } else {
                    sum += (double)-0.005822666157823046945;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.57417582417583191) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1642951312239392114) ) ) {
                    sum += (double)0.00458982834732181693;
                  } else {
                    sum += (double)-0.004639334747074935067;
                  }
                } else {
                  sum += (double)-0.009304455014832766629;
                }
              }
            } else {
              sum += (double)0.005973591529239190116;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5148.965599026557356) ) ) {
              sum += (double)0.003424847918703574114;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
                sum += (double)0.006063356745855944495;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1516.142594860419422) ) ) {
                  sum += (double)-0.01179429297720741357;
                } else {
                  sum += (double)-0.001769328153806824398;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.332274916211522164) ) ) {
          sum += (double)-0.005198819330890798625;
        } else {
          sum += (double)0.003259460053506751161;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1592430000000000234) ) ) {
          sum += (double)-0.001946108614137869028;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3146.277250048707629) ) ) {
                sum += (double)-0.004086639054981673277;
              } else {
                sum += (double)0.005929591139322998999;
              }
            } else {
              sum += (double)0.01004660532404774015;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)215.2883771929824945) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)29304.5719267044733) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)739.2431776973787692) ) ) {
                  sum += (double)-0.002527866898330088409;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8628500000000002279) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2344066382699040996) ) ) {
                      sum += (double)0.001297566881228723237;
                    } else {
                      sum += (double)-0.0009686995674892299275;
                    }
                  } else {
                    sum += (double)-0.003681340850191550367;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
                  sum += (double)0.01093983784321912386;
                } else {
                  sum += (double)0.002028555005270135918;
                }
              }
            } else {
              sum += (double)-0.003246783701535002013;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4587524074502786764) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
              sum += (double)0.006677038236398258331;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)10171.3697502395753) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5258.869399769443589) ) ) {
                      sum += (double)-0.00668312414014061041;
                    } else {
                      sum += (double)0.002370573062367667839;
                    }
                  } else {
                    sum += (double)0.003381317455737208391;
                  }
                } else {
                  sum += (double)-0.007241119485070687464;
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)18183.16014768836976) ) ) {
                  sum += (double)0.005939464458368479659;
                } else {
                  sum += (double)-0.002288637945728195459;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
              sum += (double)0.004335700192733621221;
            } else {
              sum += (double)0.01253760579615500505;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10138.67215128568751) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.54356060606061618) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-49080.05530822202854) ) ) {
                sum += (double)0.007625406531782342491;
              } else {
                sum += (double)0.0006931985260107601356;
              }
            } else {
              sum += (double)-0.005425551673597579436;
            }
          } else {
            sum += (double)-0.004162695533658119541;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2523846967694989285) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8801500000000000989) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2082206845299330589) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506000000000000449) ) ) {
            sum += (double)0.005899965634589120038;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2082316587659429064) ) ) {
              sum += (double)0.003379362004049996353;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.114147004888090417) ) ) {
                sum += (double)0.002253663400143837703;
              } else {
                sum += (double)-0.005750036492262183309;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
            sum += (double)0.002283791816384129428;
          } else {
            sum += (double)-0.007014989940185185902;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)81.65057915057916205) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.414688759516345984) ) ) {
              sum += (double)0.003635340400598949338;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.74189814814816657) ) ) {
                sum += (double)0.0006660572745846907693;
              } else {
                sum += (double)0.005780115842363503335;
              }
            }
          } else {
            sum += (double)-0.002519717685848154622;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)13067.72038594807418) ) ) {
            sum += (double)-0.01319044419066038761;
          } else {
            sum += (double)0.001694473129138439468;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8753585000000000393) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17778753292362026) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6871843434343435364) ) ) {
                  sum += (double)0.006460516516788640008;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-65.80519855055165124) ) ) {
                    sum += (double)-0.0009787905362807236033;
                  } else {
                    sum += (double)-0.007758036041316933654;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5399840518659736466) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1316846325177797872) ) ) {
                      sum += (double)0.000199165532396121419;
                    } else {
                      sum += (double)0.002818996914996691524;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.00581395348837255) ) ) {
                      sum += (double)0.0006683468803755929569;
                    } else {
                      sum += (double)-0.004959825598373415224;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7143.768529324467636) ) ) {
                    sum += (double)0.002104868054011767905;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)361.7598371524995287) ) ) {
                      sum += (double)0.004951501858935253297;
                    } else {
                      sum += (double)0.01449604098370809932;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
                sum += (double)0.009050587387070376313;
              } else {
                sum += (double)0.001613306109403216419;
              }
            }
          } else {
            sum += (double)-0.002179251862587341937;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.90625000000000711) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
                sum += (double)-0.01040991650775356658;
              } else {
                sum += (double)0.0007629341919678075869;
              }
            } else {
              sum += (double)0.0005141092736275686354;
            }
          } else {
            sum += (double)-0.008900003075486759285;
          }
        }
      } else {
        sum += (double)0.005458359855775746575;
      }
    }
  }
  return sum;
}
