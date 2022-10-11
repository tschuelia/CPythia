#include "prediction.h"
double predict_margin_unit6(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7371000000000000885) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.192234848484849508) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.42045826513912132) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04935000000000001191) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6330000000000001181) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.234750000000000042) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03115000000000000407) ) ) {
                sum += (double)0.001254658582813856713;
              } else {
                sum += (double)-0.006141266164051075935;
              }
            } else {
              sum += (double)-0.005917885846365304563;
            }
          } else {
            sum += (double)0.004372621999920877148;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5593500000000001249) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5268500000000001515) ) ) {
              sum += (double)0.001794750720131434423;
            } else {
              sum += (double)0.01200085911307209249;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2811385000000000134) ) ) {
              sum += (double)-0.0115106936312470761;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4165095000000000325) ) ) {
                sum += (double)0.005564361486045291127;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6265500000000000513) ) ) {
                  sum += (double)-0.01129284735546028269;
                } else {
                  sum += (double)-0.0006319205475395999307;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06800000000000001876) ) ) {
          sum += (double)0.008957177312644866787;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6086500000000001354) ) ) {
            sum += (double)-0.006740286436523525507;
          } else {
            sum += (double)0.003912858502775884255;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.18137886597938291) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          sum += (double)-0.00155180309082931546;
        } else {
          sum += (double)-0.0121515148966253872;
        }
      } else {
        sum += (double)7.460312624334079041e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)152.068627450980415) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4165095000000000325) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3878415000000000612) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9244999999999999885) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7890000000000002567) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.55303030303032585) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1366775573521328002) ) ) {
                  sum += (double)-0.01649578225478205706;
                } else {
                  sum += (double)-0.004781144448713163173;
                }
              } else {
                sum += (double)0.002975952174083995507;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.22649572649572747) ) ) {
                sum += (double)0.001880208468342596442;
              } else {
                sum += (double)-0.006245333400316034275;
              }
            }
          } else {
            sum += (double)-0.01085619385568025938;
          }
        } else {
          sum += (double)-0.01469486406635841028;
        }
      } else {
        sum += (double)3.079318285319595827e-05;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9150000000000001465) ) ) {
        sum += (double)0.0009875102596280647439;
      } else {
        sum += (double)0.01244081625331968158;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4876000000000000889) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7371000000000000885) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6843500000000001249) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.192234848484849508) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6330000000000001181) ) ) {
            sum += (double)0.0004617237176233330285;
          } else {
            sum += (double)0.00428978812022131218;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.775555555555557774) ) ) {
            sum += (double)-0.008300836082458363727;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.53663570691434614) ) ) {
              sum += (double)-0.007390830998852336055;
            } else {
              sum += (double)-0.0003718186402722567052;
            }
          }
        }
      } else {
        sum += (double)0.002292073276368146624;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)327.6439144736842763) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5009430000000000271) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9244999999999999885) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.48655523255816036) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.943152454780363136) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.6291208791208831) ) ) {
                  sum += (double)-0.004150632828668766872;
                } else {
                  sum += (double)0.003818711170980300471;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1918157216885944261) ) ) {
                  sum += (double)-0.006739663311710743059;
                } else {
                  sum += (double)-0.0004580354813334535377;
                }
              }
            } else {
              sum += (double)0.0003470345112913876171;
            }
          } else {
            sum += (double)-0.008635802958885793398;
          }
        } else {
          sum += (double)0.0004235311030495468088;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07238550000000001927) ) ) {
          sum += (double)-0.001241631483178416099;
        } else {
          sum += (double)0.01263466030945922976;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8407000000000001139) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3731231779852481334) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11425.04291619889409) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6122500000000000719) ) ) {
            sum += (double)-0.00487844455209895337;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-26384.95984972314545) ) ) {
              sum += (double)0.007394303137445020283;
            } else {
              sum += (double)-0.001638475571071325992;
            }
          }
        } else {
          sum += (double)-0.007431519499571613389;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.869318181818182545) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.065942028985508827) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.558257918552036436) ) ) {
              sum += (double)0.006726250325189920588;
            } else {
              sum += (double)-0.001697683138941090799;
            }
          } else {
            sum += (double)-0.00784686359721902503;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.11032388663968007) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5727000000000000979) ) ) {
              sum += (double)0.01439104787448845964;
            } else {
              sum += (double)0.002431005283116917902;
            }
          } else {
            sum += (double)0.0005979779628304830643;
          }
        }
      }
    } else {
      sum += (double)0.00889861084385024613;
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7371000000000000885) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)169.9806397306397514) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)118.1981481481481495) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6769500000000000517) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2365048405005136523) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3145335000000000769) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0590500000000000122) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
                  sum += (double)-0.007360934103765783693;
                } else {
                  sum += (double)0.003336471127374920648;
                }
              } else {
                sum += (double)-0.0106252055544320944;
              }
            } else {
              sum += (double)0.000703176969336252451;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06135000000000000869) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4850000000000000422) ) ) {
                sum += (double)0.001188974039051704122;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05495000000000000578) ) ) {
                  sum += (double)-0.00169862883775721992;
                } else {
                  sum += (double)-0.009051734565253460874;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                sum += (double)0.008442120443934830742;
              } else {
                sum += (double)0.0007898272628808436112;
              }
            }
          }
        } else {
          sum += (double)0.002013056682834816948;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1817000000000000282) ) ) {
          sum += (double)0.008333380906346056841;
        } else {
          sum += (double)-0.00162067398829148228;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        sum += (double)-0.0002936574186193003136;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02225000000000000241) ) ) {
          sum += (double)0.0001643050486920009587;
        } else {
          sum += (double)-0.01266190105734540418;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)152.068627450980415) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4165095000000000325) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8550000000000000933) ) ) {
          sum += (double)0.0003114369305872600872;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3878415000000000612) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1740840000000000165) ) ) {
              sum += (double)-0.0118148746155820189;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13280.04482759072744) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.24337662337662458) ) ) {
                  sum += (double)0.009805261213334309431;
                } else {
                  sum += (double)-0.004609455629224699404;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.040476190476192997) ) ) {
                  sum += (double)-0.001158102682692468141;
                } else {
                  sum += (double)-0.01105384229198826465;
                }
              }
            }
          } else {
            sum += (double)-0.01217276330814629111;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.35002430724355982) ) ) {
          sum += (double)-0.0004057071146153725283;
        } else {
          sum += (double)0.005729712748752829356;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
        sum += (double)0.000511393309565627216;
      } else {
        sum += (double)0.009890898885476812064;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.7097500000000002141) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6171500000000001984) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7371000000000000885) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)169.9806397306397514) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-72060.08021480003663) ) ) {
            sum += (double)0.006874053577570534562;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6957.789300648867538) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.02219474861650994) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7799537259712746584) ) ) {
                  sum += (double)0.002143948468778008286;
                } else {
                  sum += (double)0.01232300338149735879;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3926440000000000485) ) ) {
                  sum += (double)-0.0007454414155321393036;
                } else {
                  sum += (double)0.004567760259358875224;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6513.621811407679161) ) ) {
                sum += (double)-0.00804457373236659376;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.691015480139064997) ) ) {
                  sum += (double)0.0008504018336782605183;
                } else {
                  sum += (double)-0.0007585369486416689922;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            sum += (double)-0.0004487767507667650684;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02225000000000000241) ) ) {
              sum += (double)0.0001407497857019460402;
            } else {
              sum += (double)-0.01084666008261510675;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)553.1102756892231582) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4508875000000000521) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03712266386379841493) ) ) {
              sum += (double)-0.009833020436348665141;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7890000000000002567) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3650000000000000466) ) ) {
                  sum += (double)0.0007083596287191150581;
                } else {
                  sum += (double)-0.007261949042710162845;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06135000000000000869) ) ) {
                  sum += (double)0.001836271681433355053;
                } else {
                  sum += (double)-0.002171417567777601983;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.17547169811321339) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8253500000000001391) ) ) {
                sum += (double)0.001476070485478544634;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5545740000000000114) ) ) {
                  sum += (double)-0.01095943829275008996;
                } else {
                  sum += (double)-4.887389741748802312e-05;
                }
              }
            } else {
              sum += (double)0.004787457848578111595;
            }
          }
        } else {
          sum += (double)0.005128636580378333719;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6452500000000001013) ) ) {
        sum += (double)0.01127773972957919063;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3284500000000000752) ) ) {
          sum += (double)0.008683385509384328182;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15789.17542896357736) ) ) {
            sum += (double)0.001095580572176952381;
          } else {
            sum += (double)-0.008344490801328405954;
          }
        }
      }
    }
  } else {
    sum += (double)-0.00352366476471818648;
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-999.6459300448483418) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1061.317261442419749) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.004000000000000000951) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8114137916963670705) ) ) {
          sum += (double)-0.008876703375125426926;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5968835000000001223) ) ) {
            sum += (double)0.004227454161350443704;
          } else {
            sum += (double)-0.004083006965879241307;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1277.448594700749481) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7969465000000001131) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4314.984009076141774) ) ) {
              sum += (double)0.0001879870393511132436;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4014.854643240365021) ) ) {
                sum += (double)-0.006786676195214363071;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.35757575757576632) ) ) {
                  sum += (double)-0.001078561386481753084;
                } else {
                  sum += (double)0.001656378134696455612;
                }
              }
            }
          } else {
            sum += (double)0.002498549677928806056;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02065000000000000516) ) ) {
            sum += (double)-0.001082474927790249945;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1536500000000000365) ) ) {
              sum += (double)0.0001673134825170700978;
            } else {
              sum += (double)0.008016063611310004708;
            }
          }
        }
      }
    } else {
      sum += (double)-0.006234761068470147209;
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3483000000000001095) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2378485000000000182) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-320.7328217971722211) ) ) {
          sum += (double)-0.001093054931077510868;
        } else {
          sum += (double)0.00888686819239477982;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.103650000000000006) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-200.0588293342066493) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-672.6547421447786519) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.364510489510490032) ) ) {
                sum += (double)0.00813935052064802822;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.99047323644098029) ) ) {
                  sum += (double)-0.00622872661784441839;
                } else {
                  sum += (double)0.001606812516967703885;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5368495000000000905) ) ) {
                sum += (double)-0.01083018086218668317;
              } else {
                sum += (double)-0.001918306495903833887;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.336734693877551061) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9859698681732581571) ) ) {
                sum += (double)0.0003734644950743401938;
              } else {
                sum += (double)-0.006857870102266796879;
              }
            } else {
              sum += (double)0.005308775249474199064;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5107490000000001196) ) ) {
            sum += (double)0.007584649939578344546;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.882665832290363328) ) ) {
              sum += (double)0.00269388618013406125;
            } else {
              sum += (double)-0.00628872123046182209;
            }
          }
        }
      }
    } else {
      sum += (double)0.008504143177600237066;
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.234750000000000042) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5477000000000001867) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4401000000000000467) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.244765702891327486) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.844121325828643521) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1446000000000000341) ) ) {
              sum += (double)-0.0003608321918418614651;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3971575000000001077) ) ) {
                sum += (double)0.008244218049413330404;
              } else {
                sum += (double)0.001809455071054890448;
              }
            }
          } else {
            sum += (double)0.008051600922605931659;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1727500000000000424) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1653.788307513030077) ) ) {
              sum += (double)-0.0001549888771092376716;
            } else {
              sum += (double)-0.005910030827487281965;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.83974358974359298) ) ) {
              sum += (double)0.007169235826075329165;
            } else {
              sum += (double)-0.0008337994946019215703;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8857367863762966032) ) ) {
          sum += (double)-0.009295065959126248833;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.497098467321646753) ) ) {
            sum += (double)0.005822511629569963702;
          } else {
            sum += (double)-0.004633188628064366897;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.565033783783785104) ) ) {
        sum += (double)-0.00160300266042438062;
      } else {
        sum += (double)0.009792160048692866853;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3400500000000001299) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5740235000000001309) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.414220500000000047) ) ) {
          sum += (double)-0.001728531304375639658;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2777000000000000579) ) ) {
            sum += (double)-0.01116564630218629291;
          } else {
            sum += (double)-0.002821976663707275682;
          }
        }
      } else {
        sum += (double)0.003336660162713834567;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3693500000000001227) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3825085000000000846) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.35002430724355982) ) ) {
            sum += (double)0.007171438378152968605;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20160.18878672522624) ) ) {
              sum += (double)0.003395489651144047768;
            } else {
              sum += (double)-0.004882047823581570599;
            }
          }
        } else {
          sum += (double)0.01272698626383144023;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.004774661273149183) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.42206477732793557) ) ) {
            sum += (double)-0.004860153024074633649;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7873798716591523528) ) ) {
              sum += (double)-7.400300951006655162e-05;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                sum += (double)-0.001691851130528917177;
              } else {
                sum += (double)0.007546942030243699966;
              }
            }
          }
        } else {
          sum += (double)-0.00862831754696349873;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.32690882134914823) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6957.789300648867538) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8487.909566424181321) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.160952380952382512) ) ) {
          sum += (double)0.004148423417122944733;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3783000000000000251) ) ) {
            sum += (double)0.001030238860957743627;
          } else {
            sum += (double)-0.007273508886600751726;
          }
        }
      } else {
        sum += (double)0.006440517054952328048;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5081020000000001646) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8150000000000000577) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3511255000000000348) ) ) {
            sum += (double)-0.0005286738016688955584;
          } else {
            sum += (double)0.008890635659712854688;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.782331511839709393) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2874875000000000624) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.385489510489511744) ) ) {
                sum += (double)-0.009773629599940908408;
              } else {
                sum += (double)0.0001139638873995916954;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3318725000000000702) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.077254641909815014) ) ) {
                  sum += (double)0.0003060115188383775563;
                } else {
                  sum += (double)0.009854073175155356884;
                }
              } else {
                sum += (double)-0.001834931475070340637;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2396.145778909193268) ) ) {
              sum += (double)-0.01059836696334551069;
            } else {
              sum += (double)-0.00185093748947388133;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5274700000000001054) ) ) {
          sum += (double)0.007714429947548962982;
        } else {
          sum += (double)-0.0001568904677806261618;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.61180124223603016) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.795000000000000151) ) ) {
        sum += (double)-0.0004491810860295778244;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08000000000000001554) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.64967105263160363) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5059.42253653030275) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6957.789300648867538) ) ) {
                sum += (double)0.00162115125265714752;
              } else {
                sum += (double)-0.005666119001609552612;
              }
            } else {
              sum += (double)0.004376851677713932028;
            }
          } else {
            sum += (double)0.01414060360298152047;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.129078000000000026) ) ) {
            sum += (double)-0.008922372324953476916;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9322500000000001341) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4837.01975358155596) ) ) {
                sum += (double)0.002071168555911802236;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2140000000000000513) ) ) {
                  sum += (double)0.001717833107589322641;
                } else {
                  sum += (double)-0.007828294435385975067;
                }
              }
            } else {
              sum += (double)-0.006512986997623155215;
            }
          }
        }
      }
    } else {
      sum += (double)-0.0006228857294565057212;
    }
  }
  return sum;
}
