#include "prediction.h"
double predict_margin_unit9(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.241598129272460938) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2368519976735115051) ) ) {
        sum += (double)0.09169509999999998773;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.703066229820251465) ) ) {
          sum += (double)0.4902414807692307974;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1061.0423583984375) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9320483803749084473) ) ) {
              sum += (double)0.44699362499999995;
            } else {
              sum += (double)0.2928541120689654997;
            }
          } else {
            sum += (double)0.1843020555555555662;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4035654962062835693) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000014901161194) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.21538448333740234) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1789780706167221069) ) ) {
                  sum += (double)0.005153842105263158058;
                } else {
                  sum += (double)0.02894706666666667025;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.25) ) ) {
                  sum += (double)0.006310095238095238777;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09925381466746330261) ) ) {
                    sum += (double)0.005529107142857143768;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1721000000834465027) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003044269230769231904;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.20606040954589844) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4642.57421875) ) ) {
                  sum += (double)0.05607321052631578789;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6160414516925811768) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5469000041484832764) ) ) {
                      sum += (double)0.05899820312499998859;
                    } else {
                      sum += (double)0.008742479166666667495;
                    }
                  } else {
                    sum += (double)0.004936472222222222303;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08325099945068359375) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.35595703125) ) ) {
                    sum += (double)0.007268475000000000803;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5811499953269958496) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.00387724999999999962;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)204.2863235473632812) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7000499963760375977) ) ) {
                      sum += (double)0.007907509615384618329;
                    } else {
                      sum += (double)0.01999846875000000149;
                    }
                  } else {
                    sum += (double)0.03918733333333333096;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.685299992561340332) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.85454463958740234) ) ) {
                sum += (double)0.06837213235294117841;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.740966796875) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5011.66748046875) ) ) {
                    sum += (double)0.01435880645161290332;
                  } else {
                    sum += (double)0.005342566666666668032;
                  }
                } else {
                  sum += (double)0.02918319047619047715;
                }
              }
            } else {
              sum += (double)0.09009114772727272458;
            }
          }
        } else {
          sum += (double)0.1331791071428571338;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.578755497932434082) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006549999816343188286) ) ) {
            sum += (double)0.2490464199999999906;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.209712497889995575) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.64260244369506836) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7400000095367431641) ) ) {
                  sum += (double)0.03064237499999999254;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1566600054502487183) ) ) {
                    sum += (double)0.05769727777777777789;
                  } else {
                    sum += (double)0.1660728823529411813;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1622000038623809814) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1794214993715286255) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07690000161528587341) ) ) {
                      sum += (double)0.00440683333333333465;
                    } else {
                      sum += (double)0.009339764705882352969;
                    }
                  } else {
                    sum += (double)0.01542449999999999898;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7410667836666107178) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.47223663330078125) ) ) {
                      sum += (double)0.07871157758620690725;
                    } else {
                      sum += (double)0.03003351785714285932;
                    }
                  } else {
                    sum += (double)0.01897350000000000078;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5152000188827514648) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6774908602237701416) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7363.167724609375) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9200000166893005371) ) ) {
                      sum += (double)0.08829908823529411532;
                    } else {
                      sum += (double)0.05158377631578947575;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.35333347320556641) ) ) {
                      sum += (double)0.07937552941176471977;
                    } else {
                      sum += (double)0.1941892500000000354;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
                    sum += (double)0.1000744999999999829;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3878600001335144043) ) ) {
                      sum += (double)0.01508397023809522793;
                    } else {
                      sum += (double)0.04203570833333333812;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2645314931869506836) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1215683780610561371) ) ) {
                    sum += (double)0.2020632499999999998;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.74305000901222229) ) ) {
                      sum += (double)0.06544985714285714296;
                    } else {
                      sum += (double)0.1399161406250000184;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9403.19677734375) ) ) {
                    sum += (double)0.1244509230769230979;
                  } else {
                    sum += (double)0.2776733333333333276;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.2998486111111111629;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4569820016622543335) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.09288978576660156) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.292966499924659729) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.358326196670532227) ) ) {
                sum += (double)0.3709619000000000111;
              } else {
                sum += (double)0.4814878100000000161;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2158297151327133179) ) ) {
                sum += (double)0.1719956562500000175;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2070830017328262329) ) ) {
                  sum += (double)0.2632324583333333079;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4411.100341796875) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4451944530010223389) ) ) {
                      sum += (double)0.4128086428571428046;
                    } else {
                      sum += (double)0.3470119499999999579;
                    }
                  } else {
                    sum += (double)0.2747030735294117565;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
              sum += (double)0.5905079895833332815;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.39041447639465332) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2471495270729064941) ) ) {
                    sum += (double)0.4063390526315789897;
                  } else {
                    sum += (double)0.3504454166666666204;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.300361394882202148) ) ) {
                    sum += (double)0.4617263500000000076;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4476.47021484375) ) ) {
                      sum += (double)0.3856799078947368287;
                    } else {
                      sum += (double)0.4223388437500000259;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.394444003701210022) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.378023490309715271) ) ) {
                    sum += (double)0.4773909545454546599;
                  } else {
                    sum += (double)0.5323340108695652217;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4103675037622451782) ) ) {
                      sum += (double)0.4094601718750000008;
                    } else {
                      sum += (double)0.4829361761363635819;
                    }
                  } else {
                    sum += (double)0.3865146750000000297;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3337879925966262817) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.66211271286010742) ) ) {
              sum += (double)0.2877346388888889495;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4079499989748001099) ) ) {
                sum += (double)0.09496809210526317713;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19925.775390625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.04261684417724609) ) ) {
                    sum += (double)0.3018831617647058096;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1996705010533332825) ) ) {
                      sum += (double)0.2572062368421052514;
                    } else {
                      sum += (double)0.1754976911764705716;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16398.70703125) ) ) {
                    sum += (double)0.1277963452380952436;
                  } else {
                    sum += (double)0.2013934868421052571;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21846.76953125) ) ) {
              sum += (double)0.2868243804347826442;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3650355041027069092) ) ) {
                sum += (double)0.4815373392857142387;
              } else {
                sum += (double)0.347111437499999953;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.795577049255371094) ) ) {
          sum += (double)0.265936952380952385;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.267136991024017334) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3028285056352615356) ) ) {
              sum += (double)0.2488942236842105193;
            } else {
              sum += (double)0.1021550882352941225;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3625984936952590942) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16187.5341796875) ) ) {
                sum += (double)0.1084118593750000026;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2567500025033950806) ) ) {
                  sum += (double)0.008031687500000000632;
                } else {
                  sum += (double)0.03742400925925926103;
                }
              }
            } else {
              sum += (double)0.1100121544117647204;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7049920260906219482) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031407535076141357) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.15280723571777344) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4768694937229156494) ) ) {
                  sum += (double)0.544805203124999915;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3782.74609375) ) ) {
                    sum += (double)0.5120748846153847511;
                  } else {
                    sum += (double)0.4565737391304348636;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08685000240802764893) ) ) {
                  sum += (double)0.6079497068965517004;
                } else {
                  sum += (double)0.5025010568181818016;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08109999820590019226) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5940265059471130371) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08498444408178329468) ) ) {
                    sum += (double)0.6513149833333334859;
                  } else {
                    sum += (double)0.6177706911764705433;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.039698958396911621) ) ) {
                    sum += (double)0.743438347222222129;
                  } else {
                    sum += (double)0.6877296730769231203;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.393965482711791992) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6194075047969818115) ) ) {
                    sum += (double)0.5635760952380952649;
                  } else {
                    sum += (double)0.6693098088235294174;
                  }
                } else {
                  sum += (double)0.524984761904761954;
                }
              }
            }
          } else {
            sum += (double)0.3469729999999999759;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1578999981284141541) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6086829900741577148) ) ) {
              sum += (double)0.3190236428571428529;
            } else {
              sum += (double)0.4375672624999999982;
            }
          } else {
            sum += (double)0.2290162833333333481;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1375500001013278961) ) ) {
          sum += (double)0.5590614605263158898;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07400000095367431641) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8351690173149108887) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02859999984502792358) ) ) {
                sum += (double)0.7753498611111111494;
              } else {
                sum += (double)0.8362054342105263993;
              }
            } else {
              sum += (double)0.8785745468750000287;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7735044956207275391) ) ) {
              sum += (double)0.7089552124999999316;
            } else {
              sum += (double)0.7729998815789475008;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4375604987144470215) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2219334989786148071) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1052374988794326782) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0722170025110244751) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.17395000159740448) ) ) {
                  sum += (double)0.01469676666666666805;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8785499930381774902) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                      sum += (double)0.002584907894736843646;
                    } else {
                      sum += (double)0.003924268292682928094;
                    }
                  } else {
                    sum += (double)0.004717166666666666383;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03499999921768903732) ) ) {
                  sum += (double)0.03267278571428571671;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                    sum += (double)0.003475431818181818917;
                  } else {
                    sum += (double)0.01719573076923076871;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8808.84814453125) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.254999995231628418) ) ) {
                  sum += (double)0.0173499499999999994;
                } else {
                  sum += (double)0.01070181481481481678;
                }
              } else {
                sum += (double)0.03877731666666666549;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.76636362075805664) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.550506591796875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.978632450103759766) ) ) {
                  sum += (double)0.09229750000000000454;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07705000042915344238) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1577719971537590027) ) ) {
                      sum += (double)0.0246352500000000009;
                    } else {
                      sum += (double)0.01048435294117647243;
                    }
                  } else {
                    sum += (double)0.08038095312500000145;
                  }
                }
              } else {
                sum += (double)0.1313021874999999727;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3992500007152557373) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6468116641044616699) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10596.75927734375) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1463970020413398743) ) ) {
                      sum += (double)0.01708810606060606058;
                    } else {
                      sum += (double)0.05303267045454545386;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.54285717010498047) ) ) {
                      sum += (double)0.02004815104166665987;
                    } else {
                      sum += (double)0.004926340909090908861;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2249999940395355225) ) ) {
                    sum += (double)0.002499999999999999618;
                  } else {
                    sum += (double)0.005488741935483871029;
                  }
                }
              } else {
                sum += (double)0.08205397368421053772;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.436651468276977539) ) ) {
            sum += (double)0.2097641500000000103;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87878799438476562) ) ) {
                sum += (double)0.04289752272727272858;
              } else {
                sum += (double)0.011401368421052634;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09495000168681144714) ) ) {
                sum += (double)0.05924095833333331562;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1878499984741210938) ) ) {
                  sum += (double)0.2030724333333333298;
                } else {
                  sum += (double)0.07639571428571427514;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2317153140902519226) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2927275002002716064) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.768724918365478516) ) ) {
              sum += (double)0.245699062500000065;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.71368408203125) ) ) {
                sum += (double)0.06152405263157893767;
              } else {
                sum += (double)0.1469886710526315809;
              }
            }
          } else {
            sum += (double)0.3531010185185184946;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02165000047534704208) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7116293609142303467) ) ) {
              sum += (double)0.2405611896551723972;
            } else {
              sum += (double)0.02419253333333333533;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10491.81201171875) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.50028705596923828) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.270199999213218689) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.60453605651855469) ) ) {
                    sum += (double)0.02401457692307692668;
                  } else {
                    sum += (double)0.06015923214285712889;
                  }
                } else {
                  sum += (double)0.08406350892857142321;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2360835000872612) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.49122810363769531) ) ) {
                    sum += (double)0.01809413888888888877;
                  } else {
                    sum += (double)0.003520800000000000145;
                  }
                } else {
                  sum += (double)0.04016788095238095491;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.10588264465332031) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4649999886751174927) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3639660030603408813) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7567634880542755127) ) ) {
                      sum += (double)0.05979349999999999249;
                    } else {
                      sum += (double)0.02193636363636363926;
                    }
                  } else {
                    sum += (double)0.1085185657894736783;
                  }
                } else {
                  sum += (double)0.1226083409090909099;
                }
              } else {
                sum += (double)0.2364811093749999704;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8070119619369506836) ) ) {
          sum += (double)0.1001152173913043425;
        } else {
          sum += (double)0.2602656805555556008;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6556589901447296143) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.65630185604095459) ) ) {
            sum += (double)0.3652901086956522048;
          } else {
            sum += (double)0.2236690416666666237;
          }
        } else {
          sum += (double)0.5310486764705882878;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5359705090522766113) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.32458257675170898) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9722101092338562012) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351185023784637451) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02370000071823596954) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
                sum += (double)0.5346924903846154153;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008249999955296516418) ) ) {
                  sum += (double)0.3864525131578946948;
                } else {
                  sum += (double)0.435858218750000026;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.584821462631225586) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4660000056028366089) ) ) {
                  sum += (double)0.3489317205882352946;
                } else {
                  sum += (double)0.4104758166666665486;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13455.06201171875) ) ) {
                  sum += (double)0.3893056184210525461;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6005999743938446045) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.178099997341632843) ) ) {
                      sum += (double)0.2382035625000000212;
                    } else {
                      sum += (double)0.334649836538461587;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7032499909400939941) ) ) {
                      sum += (double)0.1195915326086956498;
                    } else {
                      sum += (double)0.2511849204545453795;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005999999848427250981) ) ) {
              sum += (double)0.6015801100000000012;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08029999956488609314) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3677970021963119507) ) ) {
                  sum += (double)0.3784255000000000813;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.694798469543457031) ) ) {
                    sum += (double)0.4594444210526314465;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.872205734252929688) ) ) {
                      sum += (double)0.5305857604166664965;
                    } else {
                      sum += (double)0.5901075681818181984;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.632647275924682617) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.593449592590332031) ) ) {
                    sum += (double)0.4803427159090908893;
                  } else {
                    sum += (double)0.5525194107142856748;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3656.8443603515625) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1233576387166976929) ) ) {
                      sum += (double)0.3708359125000000311;
                    } else {
                      sum += (double)0.476661755102040896;
                    }
                  } else {
                    sum += (double)0.3533787826086955963;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05969999916851520538) ) ) {
            sum += (double)0.2759415441176470418;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600825071334838867) ) ) {
              sum += (double)0.06262230645161290243;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.390434741973876953) ) ) {
                sum += (double)0.2911076805555555258;
              } else {
                sum += (double)0.1401142763157894877;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3734496086835861206) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3352025002241134644) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0555000007152557373) ) ) {
              sum += (double)0.33667055882352942;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.26102399080991745) ) ) {
                sum += (double)0.1830995267857142839;
              } else {
                sum += (double)0.2888517666666666761;
              }
            }
          } else {
            sum += (double)0.3865933448275861162;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4013499915599822998) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1696999967098236084) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3021229952573776245) ) ) {
                sum += (double)0.1811076911764706032;
              } else {
                sum += (double)0.08338650999999998314;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.189703404903411865) ) ) {
                sum += (double)0.04940923611111111557;
              } else {
                sum += (double)0.01285605263157894862;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.10486412048339844) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.58682441711425781) ) ) {
                sum += (double)0.1401263035714285787;
              } else {
                sum += (double)0.2427203333333333435;
              }
            } else {
              sum += (double)0.1022787000000000002;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.341569945216178894) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.733775019645690918) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02309999987483024597) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1971.9669189453125) ) ) {
              sum += (double)0.7011312291666667029;
            } else {
              sum += (double)0.6732412395833332619;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2681.0269775390625) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5967.938720703125) ) ) {
                sum += (double)0.5393213214285713653;
              } else {
                sum += (double)0.6124697258064517591;
              }
            } else {
              sum += (double)0.6847046304347824686;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0755500011146068573) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7685725688934326172) ) ) {
              sum += (double)0.8823244464285714406;
            } else {
              sum += (double)0.8357471666666667076;
            }
          } else {
            sum += (double)0.7456573804347826906;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7412.578857421875) ) ) {
            sum += (double)0.4661483095238095897;
          } else {
            sum += (double)0.6300888421052633914;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01439999975264072418) ) ) {
            sum += (double)0.4698047499999999377;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.783180832862854004) ) ) {
              sum += (double)0.2693429642857143036;
            } else {
              sum += (double)0.4121496346153846191;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.580495357513427734) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003049999941140413284) ) ) {
          sum += (double)0.08397088461538460002;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1746900007128715515) ) ) {
            sum += (double)0.06463448076923078434;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.63823556900024414) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1981.63885498046875) ) ) {
                sum += (double)0.2603849464285714066;
              } else {
                sum += (double)0.1314654999999999851;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1696.7208251953125) ) ) {
                sum += (double)0.316116867647058819;
              } else {
                sum += (double)0.3821195535714285718;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5125246047973632812) ) ) {
          sum += (double)0.5000586607142857298;
        } else {
          sum += (double)0.3736650740740741217;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.54761886596679688) ) ) {
          sum += (double)0.0997453043478261081;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09584200009703636169) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0844470001757144928) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8840500116348266602) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1880999952554702759) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.06340599060058594) ) ) {
                      sum += (double)0.00486728125000000008;
                    } else {
                      sum += (double)0.002500000000000001787;
                    }
                  } else {
                    sum += (double)0.005160525000000000875;
                  }
                } else {
                  sum += (double)0.007981100000000001388;
                }
              } else {
                sum += (double)0.01407605000000000314;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3025999963283538818) ) ) {
                sum += (double)0.04671999999999999764;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1700000017881393433) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-77387.9609375) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9335.02685546875) ) ) {
                      sum += (double)0.008623394736842107666;
                    } else {
                      sum += (double)0.004916250000000000481;
                    }
                  }
                } else {
                  sum += (double)0.0191548625000000014;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8397000133991241455) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3910440057516098022) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04224999994039535522) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2498521506786346436) ) ) {
                      sum += (double)0.03491001470588234873;
                    } else {
                      sum += (double)0.004696619047619048429;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3138121366500854492) ) ) {
                      sum += (double)0.03296509999999999718;
                    } else {
                      sum += (double)0.1423298461538461401;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2939.94921875) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.29761886596679688) ) ) {
                      sum += (double)0.0236841598837209226;
                    } else {
                      sum += (double)0.01044747580645160809;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3529500067234039307) ) ) {
                      sum += (double)0.002667625000000000291;
                    } else {
                      sum += (double)0.009143214285714285766;
                    }
                  }
                }
              } else {
                sum += (double)0.06571984210526315984;
              }
            } else {
              sum += (double)0.1067168166666666446;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009450000245124101639) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9699999988079071045) ) ) {
            sum += (double)0.1729095357142856892;
          } else {
            sum += (double)0.3460450300000000312;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8552.767578125) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1865937560796737671) ) ) {
              sum += (double)0.1101360583333333143;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2767229974269866943) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.52360057830810547) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12767.576171875) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.930000007152557373) ) ) {
                      sum += (double)0.06225387500000000018;
                    } else {
                      sum += (double)0.1110440333333333196;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.11063957214355469) ) ) {
                      sum += (double)0.01937952777777777677;
                    } else {
                      sum += (double)0.01127963333333333387;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.425050005316734314) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.185764998197555542) ) ) {
                      sum += (double)0.01242564102564102865;
                    } else {
                      sum += (double)0.02615627941176470669;
                    }
                  } else {
                    sum += (double)0.03816195833333333592;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6315877735614776611) ) ) {
                  sum += (double)0.05592705769230769258;
                } else {
                  sum += (double)0.1126675576923076849;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.075439453125) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.059156894683837891) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1231499984860420227) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03035000059753656387) ) ) {
                    sum += (double)0.05986963095238095889;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.537649989128112793) ) ) {
                      sum += (double)0.1479312727272727723;
                    } else {
                      sum += (double)0.07077427678571428238;
                    }
                  }
                } else {
                  sum += (double)0.1872919807692307592;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1636499986052513123) ) ) {
                  sum += (double)0.003954472222222222937;
                } else {
                  sum += (double)0.02448124999999999954;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5736.516357421875) ) ) {
                sum += (double)0.196153842105263182;
              } else {
                sum += (double)0.3978232916666667451;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9722101092338562012) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85074520111083984) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.321953505277633667) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02545000053942203522) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001150000025518238544) ) ) {
                sum += (double)0.5041135714285713831;
              } else {
                sum += (double)0.4327485208333334277;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2988609075546264648) ) ) {
                  sum += (double)0.1773752500000000121;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.994444370269775391) ) ) {
                    sum += (double)0.3210402596153845711;
                  } else {
                    sum += (double)0.2478265326086956655;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6036500036716461182) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08434999734163284302) ) ) {
                    sum += (double)0.3365379821428571838;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4839999973773956299) ) ) {
                      sum += (double)0.3889272600000001079;
                    } else {
                      sum += (double)0.4346273749999999825;
                    }
                  }
                } else {
                  sum += (double)0.2926607586206896872;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3636019974946975708) ) ) {
                sum += (double)0.4373731551724138189;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.503899991512298584) ) ) {
                  sum += (double)0.4775368999999999309;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2818.396728515625) ) ) {
                    sum += (double)0.5997572857142855485;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02084999997168779373) ) ) {
                      sum += (double)0.5156942840909090053;
                    } else {
                      sum += (double)0.5521767321428571185;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3222.9814453125) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1505459025502204895) ) ) {
                  sum += (double)0.3525007000000000557;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3577070087194442749) ) ) {
                    sum += (double)0.4129208249999999358;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.30595207214355469) ) ) {
                      sum += (double)0.4572730263157895325;
                    } else {
                      sum += (double)0.5001039411764705012;
                    }
                  }
                }
              } else {
                sum += (double)0.3171963421052632071;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.33650779724121094) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.74452877044677734) ) ) {
              sum += (double)0.1132677500000000004;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02149999979883432388) ) ) {
                sum += (double)0.4024434375000000008;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2583734989166259766) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22009.7353515625) ) ) {
                    sum += (double)0.2452205199999999974;
                  } else {
                    sum += (double)0.163586826923076939;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3677815049886703491) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.19336128234863281) ) ) {
                      sum += (double)0.3401588645833333313;
                    } else {
                      sum += (double)0.2506792890625000325;
                    }
                  } else {
                    sum += (double)0.3896772678571428505;
                  }
                }
              }
            }
          } else {
            sum += (double)0.1216679545454545236;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.149999856948852539) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.96103978157043457) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1948.795166015625) ) ) {
              sum += (double)0.1562608125000000125;
            } else {
              sum += (double)0.04467390476190476883;
            }
          } else {
            sum += (double)0.2844596750000000229;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25110.431640625) ) ) {
            sum += (double)0.1442518437499999695;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3820239901542663574) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2514715045690536499) ) ) {
                sum += (double)0.0109013529411764714;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.14298152923583984) ) ) {
                  sum += (double)0.03374398333333334526;
                } else {
                  sum += (double)0.0201883235294117655;
                }
              }
            } else {
              sum += (double)0.07865683333333332861;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3979768604040145874) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6223134994506835938) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4630.626220703125) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6066.162841796875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08685000240802764893) ) ) {
                sum += (double)0.5765247222222222856;
              } else {
                sum += (double)0.5059864090909090839;
              }
            } else {
              sum += (double)0.4700721833333333932;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.691382169723510742) ) ) {
              sum += (double)0.5514331590909090641;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006199999945238232613) ) ) {
                sum += (double)0.6706067812499999503;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.57917070388793945) ) ) {
                  sum += (double)0.6426796666666665381;
                } else {
                  sum += (double)0.5990391718749999983;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7417580187320709229) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7899999916553497314) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09565000236034393311) ) ) {
                sum += (double)0.6544005131578948253;
              } else {
                sum += (double)0.7052717380952382431;
              }
            } else {
              sum += (double)0.7358949999999998548;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5831313729286193848) ) ) {
              sum += (double)0.8754822352941176167;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.81944465637207031) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09358867257833480835) ) ) {
                  sum += (double)0.7649265499999999829;
                } else {
                  sum += (double)0.805184632352941132;
                }
              } else {
                sum += (double)0.8361331249999999216;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5439620018005371094) ) ) {
            sum += (double)0.406374000000000013;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2570499926805496216) ) ) {
              sum += (double)0.6229410657894736136;
            } else {
              sum += (double)0.562647013157894671;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
              sum += (double)0.4375124736842105344;
            } else {
              sum += (double)0.2303100000000000147;
            }
          } else {
            sum += (double)0.4812256458333333264;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.405882358551025391) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2717625051736831665) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5249999910593032837) ) ) {
          sum += (double)0.09552324999999999011;
        } else {
          sum += (double)0.1946999435483870999;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9036570489406585693) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9499999880790710449) ) ) {
            sum += (double)0.315636773809523874;
          } else {
            sum += (double)0.4519117738095238535;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.303199529647827148) ) ) {
            sum += (double)0.3508727678571428865;
          } else {
            sum += (double)0.1183236470588235334;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3809314966201782227) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.39273643493652344) ) ) {
                sum += (double)0.01284683333333333337;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.35869550704956055) ) ) {
                  sum += (double)0.00564370833333333391;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8785499930381774902) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2022000029683113098) ) ) {
                      sum += (double)0.002581273437500001319;
                    } else {
                      sum += (double)0.004634964285714286529;
                    }
                  } else {
                    sum += (double)0.00546794117647058861;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                sum += (double)0.03211457499999999937;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1662964969873428345) ) ) {
                  sum += (double)0.01643596551724138197;
                } else {
                  sum += (double)0.004619732142857143307;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.20333385467529297) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.5555572509765625) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1131500005722045898) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5232050418853759766) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1786919981241226196) ) ) {
                      sum += (double)0.007700592592592593079;
                    } else {
                      sum += (double)0.02141440909090909159;
                    }
                  } else {
                    sum += (double)0.03223632291666667093;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.76363563537597656) ) ) {
                    sum += (double)0.09729269318181818504;
                  } else {
                    sum += (double)0.02687959375000000331;
                  }
                }
              } else {
                sum += (double)0.09839099999999999235;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000035762786865) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8364.4462890625) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)429.9615478515625) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1403869986534118652) ) ) {
                      sum += (double)0.01471127536231883921;
                    } else {
                      sum += (double)0.005615666666666666376;
                    }
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                } else {
                  sum += (double)0.02614579761904761018;
                }
              } else {
                sum += (double)0.0370890892857142912;
              }
            }
          }
        } else {
          sum += (double)0.1317250384615384351;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05849999934434890747) ) ) {
          sum += (double)0.3060194239130434313;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999898951500654) ) ) {
            sum += (double)0.2993950882352941489;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7190.92578125) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3156024962663650513) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8849999904632568359) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)129.8833045959472656) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1859655007719993591) ) ) {
                      sum += (double)0.01288848333333333235;
                    } else {
                      sum += (double)0.03325332352941176572;
                    }
                  } else {
                    sum += (double)0.05442716666666665842;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4395325332880020142) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09265000000596046448) ) ) {
                      sum += (double)0.1447345714285714069;
                    } else {
                      sum += (double)0.07342932857142855929;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2809000015258789062) ) ) {
                      sum += (double)0.01982673333333333232;
                    } else {
                      sum += (double)0.0577673951612903136;
                    }
                  }
                }
              } else {
                sum += (double)0.1450569464285714205;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6815336346626281738) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1263500005006790161) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7950000166893005371) ) ) {
                    sum += (double)0.06134201724137931105;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03074999991804361343) ) ) {
                      sum += (double)0.2411945714285714248;
                    } else {
                      sum += (double)0.1199182232142857046;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930195033550262451) ) ) {
                    sum += (double)0.1770782282608696079;
                  } else {
                    sum += (double)0.315964666666666727;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
                  sum += (double)0.06680088095238094492;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3564874976873397827) ) ) {
                    sum += (double)0.008244804347826088786;
                  } else {
                    sum += (double)0.02835155882352941373;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4758750051259994507) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9277135729789733887) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.89888715744018555) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0171500006690621376) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
                sum += (double)0.5140361847826087072;
              } else {
                sum += (double)0.4075379285714286204;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2362929955124855042) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.335714340209960938) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4371999949216842651) ) ) {
                    sum += (double)0.3154254333333332827;
                  } else {
                    sum += (double)0.2228624300000000558;
                  }
                } else {
                  sum += (double)0.1422097499999999681;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4839999973773956299) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.885781526565551758) ) ) {
                    sum += (double)0.3745924305555555778;
                  } else {
                    sum += (double)0.2806112968750000269;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.716250002384185791) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4005.7427978515625) ) ) {
                      sum += (double)0.3704312045454545288;
                    } else {
                      sum += (double)0.43254778906249991;
                    }
                  } else {
                    sum += (double)0.3206385657894736396;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.43208694458007812) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5004500150680541992) ) ) {
                  sum += (double)0.4651744166666665903;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.42570734024047852) ) ) {
                    sum += (double)0.4891735400000000178;
                  } else {
                    sum += (double)0.5539191249999999567;
                  }
                }
              } else {
                sum += (double)0.5863717222222221137;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7143999934196472168) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6629999876022338867) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1635499969124794006) ) ) {
                    sum += (double)0.4783563333333333278;
                  } else {
                    sum += (double)0.4169984166666667047;
                  }
                } else {
                  sum += (double)0.5157905416666666021;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.754449993371963501) ) ) {
                  sum += (double)0.3682095681818181032;
                } else {
                  sum += (double)0.4246784264705882328;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3306660056114196777) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.32604999840259552) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.74700927734375) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934375017881393433) ) ) {
                    sum += (double)0.2531803571428571376;
                  } else {
                    sum += (double)0.2119857624999999801;
                  }
                } else {
                  sum += (double)0.3494060500000000236;
                }
              } else {
                sum += (double)0.1504837499999999995;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6451795399188995361) ) ) {
                sum += (double)0.08708096428571429626;
              } else {
                sum += (double)0.1903128749999999925;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.79875850677490234) ) ) {
              sum += (double)0.238386944444444443;
            } else {
              sum += (double)0.3816141538461538807;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.63054203987121582) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3627160042524337769) ) ) {
            sum += (double)0.09886935416666665921;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2597.02001953125) ) ) {
              sum += (double)0.3522964305555555398;
            } else {
              sum += (double)0.1922313749999999544;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.145312190055847168) ) ) {
            sum += (double)0.137668590909090921;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09370000101625919342) ) ) {
              sum += (double)0.08196663461538460094;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4809499979019165039) ) ) {
                sum += (double)0.009442096153846153347;
              } else {
                sum += (double)0.02174719444444444399;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6940864920616149902) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0254999995231628418) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.134611368179321289) ) ) {
                sum += (double)0.590462783333333241;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.65833377838134766) ) ) {
                  sum += (double)0.728119982142857225;
                } else {
                  sum += (double)0.6465193928571428827;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4761.35205078125) ) ) {
                  sum += (double)0.4925731562500000327;
                } else {
                  sum += (double)0.5518203124999999654;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6939.58447265625) ) ) {
                  sum += (double)0.5535162833333333587;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.901477336883544922) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6505499780178070068) ) ) {
                      sum += (double)0.5673966944444444049;
                    } else {
                      sum += (double)0.6148332222222221422;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7646000087261199951) ) ) {
                      sum += (double)0.6967927499999999608;
                    } else {
                      sum += (double)0.6110054673913043466;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.4006463499999999844;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7741104960441589355) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.53921270370483398) ) ) {
              sum += (double)0.6852298636363636231;
            } else {
              sum += (double)0.7500718888888888713;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08980000019073486328) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8465255200862884521) ) ) {
                sum += (double)0.8362706111111112284;
              } else {
                sum += (double)0.879007593750000038;
              }
            } else {
              sum += (double)0.7704576124999999998;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
            sum += (double)0.4143442236842105331;
          } else {
            sum += (double)0.2415483916666666397;
          }
        } else {
          sum += (double)0.5265806944444444415;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3802810013294219971) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.788461685180664062) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5300000011920928955) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1880984976887702942) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.103605709969997406) ) ) {
              sum += (double)0.05983590384615384422;
            } else {
              sum += (double)0.0120630555555555543;
            }
          } else {
            sum += (double)0.1429037222222221959;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1340468674898147583) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601370066404342651) ) ) {
              sum += (double)0.2104399374999999794;
            } else {
              sum += (double)0.3909641640625000081;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
              sum += (double)0.1417296477272727284;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.016722917556762695) ) ) {
                sum += (double)0.2030733750000000004;
              } else {
                sum += (double)0.2771427812499999699;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59999990463256836) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3238740265369415283) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.107257496565580368) ) ) {
                sum += (double)0.006779360000000000767;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.85714149475097656) ) ) {
                  sum += (double)0.02379331249999999676;
                } else {
                  sum += (double)0.05056122916666665884;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4444958865642547607) ) ) {
                sum += (double)0.1264163749999999975;
              } else {
                sum += (double)0.04909700000000000175;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1001115739345550537) ) ) {
                  sum += (double)0.01247823529411764935;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1534574553370475769) ) ) {
                    sum += (double)0.004006499999999999645;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.5) ) ) {
                      sum += (double)0.003016147058823529219;
                    } else {
                      sum += (double)0.002500000000000001787;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1208500005304813385) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.244946502149105072) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                      sum += (double)0.006266575757575758125;
                    } else {
                      sum += (double)0.01532709523809523862;
                    }
                  } else {
                    sum += (double)0.02180892857142857286;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.83887290954589844) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1531280055642127991) ) ) {
                      sum += (double)0.01382367499999999881;
                    } else {
                      sum += (double)0.003249972222222222672;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4520140886306762695) ) ) {
                      sum += (double)0.005534233333333333539;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09361699968576431274) ) ) {
                sum += (double)0.05810389285714286089;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5399500131607055664) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000035762786865) ) ) {
                    sum += (double)0.00467684999999999889;
                  } else {
                    sum += (double)0.01085109259259259447;
                  }
                } else {
                  sum += (double)0.03136513793103448688;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5749999880790710449) ) ) {
            sum += (double)0.2164635357142856709;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6237286031246185303) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8251.01318359375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.280020490288734436) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.16541290283203125) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1600445061922073364) ) ) {
                      sum += (double)0.02315397916666666819;
                    } else {
                      sum += (double)0.04137414772727272122;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.70624732971191406) ) ) {
                      sum += (double)0.0814352435897435778;
                    } else {
                      sum += (double)0.03233582692307692547;
                    }
                  }
                } else {
                  sum += (double)0.1408668958333333388;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
                  sum += (double)0.03430818055555555357;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.51027965545654297) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6853000223636627197) ) ) {
                      sum += (double)0.08385893749999999425;
                    } else {
                      sum += (double)0.1590738750000000035;
                    }
                  } else {
                    sum += (double)0.2344431166666666455;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000143051147461) ) ) {
                sum += (double)0.07422871153846154202;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4626999944448471069) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2949659973382949829) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8803.30615234375) ) ) {
                      sum += (double)0.01314000000000000064;
                    } else {
                      sum += (double)0.00373228571428571446;
                    }
                  } else {
                    sum += (double)0.01832688235294117896;
                  }
                } else {
                  sum += (double)0.03404565384615384355;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2452994957566261292) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
              sum += (double)0.5039138333333332831;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.29373264312744141) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.185559496283531189) ) ) {
                  sum += (double)0.2190655961538461871;
                } else {
                  sum += (double)0.3673523064516128755;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.19395065307617188) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2159790024161338806) ) ) {
                    sum += (double)0.100997921052631584;
                  } else {
                    sum += (double)0.2023956499999999548;
                  }
                } else {
                  sum += (double)0.2728827187499999751;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007199999876320362091) ) ) {
              sum += (double)0.4694563125000000281;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1659500002861022949) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.252304315567016602) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2988047748804092407) ) ) {
                      sum += (double)0.4219491944444445086;
                    } else {
                      sum += (double)0.3046739868421052821;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2456189543008804321) ) ) {
                      sum += (double)0.2944411250000000257;
                    } else {
                      sum += (double)0.2352641184210526315;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5490560531616210938) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6277.1259765625) ) ) {
                      sum += (double)0.4030482083333333243;
                    } else {
                      sum += (double)0.4508836666666666271;
                    }
                  } else {
                    sum += (double)0.360859783333333406;
                  }
                }
              } else {
                sum += (double)0.4583772857142857093;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07665000110864639282) ) ) {
            sum += (double)0.3507746666666666235;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2510669901967048645) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2803499996662139893) ) ) {
                sum += (double)0.1523100370370370216;
              } else {
                sum += (double)0.0879279558823529428;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4635999947786331177) ) ) {
                sum += (double)0.09386856944444445239;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.26329803466796875) ) ) {
                  sum += (double)0.3533469545454545613;
                } else {
                  sum += (double)0.2425427604166666695;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33309.6494140625) ) ) {
          sum += (double)0.1530813749999999918;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.762404441833496094) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1834000051021575928) ) ) {
              sum += (double)0.06063918749999999691;
            } else {
              sum += (double)0.1575066624999999776;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.04265308380126953) ) ) {
              sum += (double)0.015376474137931034;
            } else {
              sum += (double)0.03790816176470587773;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
          sum += (double)0.1891284062499999641;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999774154275656) ) ) {
            sum += (double)0.635109526315789541;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45101499557495117) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4163989871740341187) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3964640051126480103) ) ) {
                  sum += (double)0.4945232272727272949;
                } else {
                  sum += (double)0.4225038194444444284;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4488.84423828125) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1336500011384487152) ) ) {
                    sum += (double)0.4636459404761905101;
                  } else {
                    sum += (double)0.5154422840909090864;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7377000153064727783) ) ) {
                    sum += (double)0.513683389999999962;
                  } else {
                    sum += (double)0.5588537053571428492;
                  }
                }
              }
            } else {
              sum += (double)0.3910468541666666797;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.81875038146972656) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567690074443817139) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.558600008487701416) ) ) {
              sum += (double)0.5271793437500000845;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1379.94000244140625) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992500126361846924) ) ) {
                  sum += (double)0.6083923875000000203;
                } else {
                  sum += (double)0.6696443068181818781;
                }
              } else {
                sum += (double)0.71761610000000009;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8322224915027618408) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1262.20928955078125) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.617940068244934082) ) ) {
                    sum += (double)0.6957066874999999762;
                  } else {
                    sum += (double)0.7757308749999997088;
                  }
                } else {
                  sum += (double)0.6884981842105263317;
                }
              } else {
                sum += (double)0.8088348815789474511;
              }
            } else {
              sum += (double)0.847110727272727293;
            }
          }
        } else {
          sum += (double)0.4735369090909090639;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.217606782913208008) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4767065048217773438) ) ) {
            sum += (double)0.3394096607142857436;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1596999987959861755) ) ) {
              sum += (double)0.4194427166666666595;
            } else {
              sum += (double)0.4692029318181818454;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9647493362426757812) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05749999918043613434) ) ) {
              sum += (double)0.132380767857142867;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.47017765045166016) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4515945017337799072) ) ) {
                  sum += (double)0.4506153611111110568;
                } else {
                  sum += (double)0.560961299999999996;
                }
              } else {
                sum += (double)0.3039660357142857094;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2859.90234375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.40334552526473999) ) ) {
                sum += (double)0.1408729999999999982;
              } else {
                sum += (double)0.313077666666666643;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4322064965963363647) ) ) {
                sum += (double)0.04751130172413792208;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1321.2176513671875) ) ) {
                  sum += (double)0.2160358055555555434;
                } else {
                  sum += (double)0.08987863157894736277;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.083450615406036377) ) ) {
          sum += (double)0.6676718055555556086;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.818192660808563232) ) ) {
            sum += (double)0.4713206562500000252;
          } else {
            sum += (double)0.3770797678571428668;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.143333196640014648) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.632992476224899292) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.564999997615814209) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2122194990515708923) ) ) {
            sum += (double)0.03468570238095237956;
          } else {
            sum += (double)0.1497950166666666971;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1117.9071044921875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03810000047087669373) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.722222089767456055) ) ) {
                sum += (double)0.3773142222222222175;
              } else {
                sum += (double)0.3121774807692307419;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.705592155456542969) ) ) {
                sum += (double)0.2994579843749999859;
              } else {
                sum += (double)0.2293359659090909441;
              }
            }
          } else {
            sum += (double)0.155953795454545463;
          }
        }
      } else {
        sum += (double)0.5138724027777779035;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07300334051251411438) ) ) {
            sum += (double)0.06837132142857142714;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.78259611129760742) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08994349837303161621) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                  sum += (double)0.003603023809523809434;
                } else {
                  sum += (double)0.007879888888888889401;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.19112920761108398) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6166000068187713623) ) ) {
                    sum += (double)0.01585228571428571459;
                  } else {
                    sum += (double)0.0323756124999999978;
                  }
                } else {
                  sum += (double)0.0654883260869565248;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4121000021696090698) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5410102307796478271) ) ) {
                    sum += (double)0.02164153571428571385;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3220000118017196655) ) ) {
                      sum += (double)0.003493339622641510652;
                    } else {
                      sum += (double)0.01433761111111111174;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8443999886512756348) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.004722452380952380999;
                    }
                  } else {
                    sum += (double)0.01017480769230769307;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.017657160758972168) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3518999963998794556) ) ) {
                    sum += (double)0.04247351470588234951;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2481500059366226196) ) ) {
                      sum += (double)0.008120907258064517797;
                    } else {
                      sum += (double)0.01900237096774193279;
                    }
                  }
                } else {
                  sum += (double)0.003336891304347826704;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2067451253533363342) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1471969932317733765) ) ) {
              sum += (double)0.02096207500000000015;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03665000014007091522) ) ) {
                sum += (double)0.310307524999999973;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7619500160217285156) ) ) {
                  sum += (double)0.1963973888888888852;
                } else {
                  sum += (double)0.09181530769230768219;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7387340068817138672) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10068.0869140625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0299000004306435585) ) ) {
                  sum += (double)0.1199760384615384673;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2269235029816627502) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1954500004649162292) ) ) {
                      sum += (double)0.01912629838709677468;
                    } else {
                      sum += (double)0.04782765789473683582;
                    }
                  } else {
                    sum += (double)0.07658868269230770243;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.25163364410400391) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.161799997091293335) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.75) ) ) {
                      sum += (double)0.02693142307692308196;
                    } else {
                      sum += (double)0.1070305965909090773;
                    }
                  } else {
                    sum += (double)0.1841098970588235517;
                  }
                } else {
                  sum += (double)0.2469504218750000202;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5749999880790710449) ) ) {
                sum += (double)0.088321440476190477;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.523700028657913208) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.07985496520996094) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2312.208740234375) ) ) {
                      sum += (double)0.0317825833333333363;
                    } else {
                      sum += (double)0.01427444736842105322;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
                      sum += (double)0.004359500000000001395;
                    } else {
                      sum += (double)0.01388198333333333194;
                    }
                  }
                } else {
                  sum += (double)0.03892724999999999658;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1866.98406982421875) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6481.059326171875) ) ) {
            sum += (double)0.25431523684210533;
          } else {
            sum += (double)0.4197556071428570901;
          }
        } else {
          sum += (double)0.09636892647058821482;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5472330152988433838) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9722101092338562012) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3680060058832168579) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32410335540771484) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01354999979957938194) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.42828273773193359) ) ) {
                sum += (double)0.399203990740740644;
              } else {
                sum += (double)0.4804903660714286429;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2395025044679641724) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2102814987301826477) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.760769128799438477) ) ) {
                    sum += (double)0.269120870000000012;
                  } else {
                    sum += (double)0.3454242083333332602;
                  }
                } else {
                  sum += (double)0.1571014374999999963;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2475.832763671875) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3152.1728515625) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346499994397163391) ) ) {
                      sum += (double)0.347068714285714397;
                    } else {
                      sum += (double)0.4107219821428571005;
                    }
                  } else {
                    sum += (double)0.4774214852941176535;
                  }
                } else {
                  sum += (double)0.3054704318181818423;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04004999902099370956) ) ) {
              sum += (double)0.3450492624999999536;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4042499959468841553) ) ) {
                sum += (double)0.09200902631578948554;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3369009941816329956) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9464.033203125) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.34411334991455078) ) ) {
                      sum += (double)0.2945111796875000132;
                    } else {
                      sum += (double)0.1869301842105262623;
                    }
                  } else {
                    sum += (double)0.1254923452380952431;
                  }
                } else {
                  sum += (double)0.3826995892857142367;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.67706918716430664) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999824678525329) ) ) {
              sum += (double)0.6085716071428570739;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5301988720893859863) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09180000051856040955) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.872205734252929688) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1481516733765602112) ) ) {
                      sum += (double)0.5557121666666666737;
                    } else {
                      sum += (double)0.4873920000000000474;
                    }
                  } else {
                    sum += (double)0.5893765131578947436;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2212841063737869263) ) ) {
                      sum += (double)0.5058367440476191357;
                    } else {
                      sum += (double)0.4600074134615385058;
                    }
                  } else {
                    sum += (double)0.4026754772727272336;
                  }
                }
              } else {
                sum += (double)0.4184461081081080613;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.66981315612792969) ) ) {
              sum += (double)0.2965774861111111216;
            } else {
              sum += (double)0.3963520875000000609;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
          sum += (double)0.2356628629032258004;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.234565258026123047) ) ) {
            sum += (double)0.2220936195652173928;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
              sum += (double)0.1512119999999999576;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3895944952964782715) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4282.399169921875) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.337519645690917969) ) ) {
                    sum += (double)0.1047339999999999799;
                  } else {
                    sum += (double)0.02701742500000000463;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2183.25390625) ) ) {
                    sum += (double)0.01883206666666666779;
                  } else {
                    sum += (double)0.01389071428571428575;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.151862621307373047) ) ) {
                  sum += (double)0.183259958333333306;
                } else {
                  sum += (double)0.05279886250000000864;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9419553875923156738) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6562445163726806641) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7751.933349609375) ) ) {
            sum += (double)0.5225487058823530262;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.173009872436523438) ) ) {
              sum += (double)0.5869800984848484449;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05345000140368938446) ) ) {
                sum += (double)0.6984094038461537979;
              } else {
                sum += (double)0.6345937799999999962;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07740000262856483459) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7396534979343414307) ) ) {
              sum += (double)0.729412264705882385;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
                sum += (double)0.865800261904761892;
              } else {
                sum += (double)0.8088422578125001872;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7961159944534301758) ) ) {
              sum += (double)0.6619639732142857946;
            } else {
              sum += (double)0.7564598235294117679;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          sum += (double)0.2636218653846153503;
        } else {
          sum += (double)0.4887503409090907525;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.464285612106323242) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.481987491250038147) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2553430050611495972) ) ) {
          sum += (double)0.1320994999999999808;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3546340018510818481) ) ) {
            sum += (double)0.3835108785714285706;
          } else {
            sum += (double)0.1902653706896551833;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5760605037212371826) ) ) {
          sum += (double)0.4313509218749999596;
        } else {
          sum += (double)0.5052608421052632304;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09099549800157546997) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1458499953150749207) ) ) {
                sum += (double)0.01322723333333333286;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8829500079154968262) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04403600096702575684) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.427032470703125) ) ) {
                      sum += (double)0.003645580645161291405;
                    } else {
                      sum += (double)0.002500000000000001353;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.22916650772094727) ) ) {
                      sum += (double)0.009187342105263156949;
                    } else {
                      sum += (double)0.004375166666666667828;
                    }
                  }
                } else {
                  sum += (double)0.009452343750000001543;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59821414947509766) ) ) {
                sum += (double)0.0520731538461538454;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.66964340209960938) ) ) {
                  sum += (double)0.02059068000000000009;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4629260897636413574) ) ) {
                    sum += (double)0.01101426470588235361;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.89090919494628906) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.35714340209960938) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.69934558868408203) ) ) {
                  sum += (double)0.08714556896551724219;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
                    sum += (double)0.007497800000000000645;
                  } else {
                    sum += (double)0.02772039999999999921;
                  }
                }
              } else {
                sum += (double)0.1372194833333333364;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6307500004768371582) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7722391784191131592) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12726.97265625) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4500053077936172485) ) ) {
                      sum += (double)0.01622223684210526151;
                    } else {
                      sum += (double)0.005803650000000000475;
                    }
                  } else {
                    sum += (double)0.04456123333333332492;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2856499999761581421) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2950000017881393433) ) ) {
                      sum += (double)0.003123300000000001162;
                    } else {
                      sum += (double)0.009343764705882355234;
                    }
                  } else {
                    sum += (double)0.01553840000000000082;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)125.6124343872070312) ) ) {
                  sum += (double)0.01900520370370370471;
                } else {
                  sum += (double)0.09103239285714284645;
                }
              }
            }
          }
        } else {
          sum += (double)0.1259569642857142624;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5776525139808654785) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006549999816343188286) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5037.006591796875) ) ) {
              sum += (double)0.1516447708333333033;
            } else {
              sum += (double)0.35405296875000003;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8413477540016174316) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7020.048828125) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7981500029563903809) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1706569939851760864) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.52360057830810547) ) ) {
                      sum += (double)0.05504365243902439864;
                    } else {
                      sum += (double)0.01719112962962963259;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.31788444519042969) ) ) {
                      sum += (double)0.04301603409090909436;
                    } else {
                      sum += (double)0.1008650462962962652;
                    }
                  }
                } else {
                  sum += (double)0.1559915833333333224;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1248499974608421326) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.418182373046875) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9699999988079071045) ) ) {
                      sum += (double)0.05454577857142857422;
                    } else {
                      sum += (double)0.1655416071428571778;
                    }
                  } else {
                    sum += (double)0.1821501093750000078;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1808499991893768311) ) ) {
                    sum += (double)0.3563265961538461535;
                  } else {
                    sum += (double)0.1748936315789473839;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                sum += (double)0.1026528690476190414;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4060000032186508179) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2968004941940307617) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.875) ) ) {
                      sum += (double)0.01476892857142857347;
                    } else {
                      sum += (double)0.007578326086956521657;
                    }
                  } else {
                    sum += (double)0.02244961458333333271;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2905009984970092773) ) ) {
                    sum += (double)0.0284682333333333322;
                  } else {
                    sum += (double)0.05459700000000000664;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.3341902222222221663;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4569820016622543335) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.88891696929931641) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.5066868076923076725;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2311585023999214172) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.641333580017089844) ) ) {
                  sum += (double)0.3126565760869564614;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2773634791374206543) ) ) {
                    sum += (double)0.1608614736842105264;
                  } else {
                    sum += (double)0.2564059565217390868;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.710590362548828125) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2570222020149230957) ) ) {
                      sum += (double)0.3218923281250000157;
                    } else {
                      sum += (double)0.3855301999999999341;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.85544633865356445) ) ) {
                      sum += (double)0.3963485652173912577;
                    } else {
                      sum += (double)0.4757494999999999918;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7270.279052734375) ) ) {
                    sum += (double)0.382574128787878831;
                  } else {
                    sum += (double)0.2341304250000000309;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02025000005960464478) ) ) {
              sum += (double)0.5630062960526316385;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.00507354736328125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2442.576416015625) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08925000205636024475) ) ) {
                    sum += (double)0.4806694852941175156;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4142140001058578491) ) ) {
                      sum += (double)0.4533395909090908726;
                    } else {
                      sum += (double)0.3956145416666667081;
                    }
                  }
                } else {
                  sum += (double)0.5110907500000000381;
                }
              } else {
                sum += (double)0.3903089083333333154;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.36833286285400391) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16476.509765625) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2583520114421844482) ) ) {
                sum += (double)0.275941555555555551;
              } else {
                sum += (double)0.4076416477272726824;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11530.50537109375) ) ) {
                sum += (double)0.1604637738095238131;
              } else {
                sum += (double)0.2892878035714286367;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3403905034065246582) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.87061405181884766) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.20861244201660156) ) ) {
                  sum += (double)0.1445245760869565133;
                } else {
                  sum += (double)0.2333712333333333444;
                }
              } else {
                sum += (double)0.06518062499999999204;
              }
            } else {
              sum += (double)0.279136749999999989;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.234565258026123047) ) ) {
          sum += (double)0.2401920131578947348;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
            sum += (double)0.1611842065217391484;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.671597480773925781) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2842.5643310546875) ) ) {
                sum += (double)0.1498763461538461794;
              } else {
                sum += (double)0.04791675000000000101;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.856671929359436035) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6439.25) ) ) {
                  sum += (double)0.03746166666666666395;
                } else {
                  sum += (double)0.01442394000000000141;
                }
              } else {
                sum += (double)0.04589638043478260626;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9435398280620574951) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5351475179195404053) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3979768604040145874) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3240499943494796753) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.52777814865112305) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2749.54248046875) ) ) {
                    sum += (double)0.51358627499999987;
                  } else {
                    sum += (double)0.4641087692307692691;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4607.9423828125) ) ) {
                    sum += (double)0.5245776666666666088;
                  } else {
                    sum += (double)0.6050058026315789927;
                  }
                }
              } else {
                sum += (double)0.4406962321428571916;
              }
            } else {
              sum += (double)0.3883010982142857115;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1200214438140392303) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5857160091400146484) ) ) {
                sum += (double)0.6244107708333334061;
              } else {
                sum += (double)0.6981368611111109512;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.2876582145690918) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.036840915679931641) ) ) {
                  sum += (double)0.5627188425925925275;
                } else {
                  sum += (double)0.6328347954545454623;
                }
              } else {
                sum += (double)0.5100769166666667687;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.119349997490644455) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1851114928722381592) ) ) {
                sum += (double)0.7401821666666666966;
              } else {
                sum += (double)0.6724515357142857308;
              }
            } else {
              sum += (double)0.6338361315789474704;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08980000019073486328) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.002818822860717773) ) ) {
                sum += (double)0.7772842499999998989;
              } else {
                sum += (double)0.8572770600000001462;
              }
            } else {
              sum += (double)0.7446258846153845923;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6085674762725830078) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1877500042319297791) ) ) {
            sum += (double)0.2448701458333333025;
          } else {
            sum += (double)0.3734894999999999743;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6788139939308166504) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6334754824638366699) ) ) {
              sum += (double)0.4383813333333333451;
            } else {
              sum += (double)0.3450498076923076973;
            }
          } else {
            sum += (double)0.4996748749999999628;
          }
        }
      }
    }
  }
  return sum;
}
