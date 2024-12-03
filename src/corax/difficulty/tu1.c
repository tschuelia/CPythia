
#include "prediction.h"

void predict_unit1(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2310500000000000331) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.325338167619579455) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3125000000000000555) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
              result[0] += -0.018430437725787133;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.501700680272109345) ) ) {
                result[0] += -0.014197176577674485;
              } else {
                result[0] += -0.0033949642613420638;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.793653083354456057) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5327191796258734513) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06647167380074837928) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.687500000000000111) ) ) {
                    result[0] += -0.01630808717768896;
                  } else {
                    result[0] += -0.0033176903719063203;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.625584112149533134) ) ) {
                    result[0] += 0.013100390909454833;
                  } else {
                    result[0] += 0.0038637643602302757;
                  }
                }
              } else {
                result[0] += -0.019593107412167732;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.50621947496947528) ) ) {
                result[0] += 0.010083683455199154;
              } else {
                result[0] += 0.0012968586775632795;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1080.464987976296243) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04565000000000000308) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1233406754772393699) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.11050566695728747) ) ) {
                  result[0] += 0.0057789755977085125;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4248.335231464433491) ) ) {
                    result[0] += -0.0043855289770947815;
                  } else {
                    result[0] += -0.014445939368561827;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.34850948509485491) ) ) {
                  result[0] += -0.009838004725541033;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.17914438502674557) ) ) {
                    result[0] += -0.020383829273949123;
                  } else {
                    result[0] += -0.014620893391000684;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                result[0] += 0.006069284432456672;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8541666666666668517) ) ) {
                  result[0] += -0.014379559844342273;
                } else {
                  result[0] += -0.0038134269254300945;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01505000000000000261) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1458333333333333426) ) ) {
                result[0] += -0.012754624029386234;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-798.0159720737170801) ) ) {
                  result[0] += -0.02152658715898312;
                } else {
                  result[0] += -0.03124882211052028;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                result[0] += -0.005205205470242353;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03585000000000000686) ) ) {
                  result[0] += -0.012378967032014644;
                } else {
                  result[0] += -0.02406908366669292;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8968663066601212375) ) ) {
          result[0] += 0.011033971621723229;
        } else {
          result[0] += -0.002209209832266962;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.245622435020520502) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3188465325964183195) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.50621947496947528) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8745860927152319109) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1080.464987976296243) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2274745869116796826) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1526.154173473093351) ) ) {
                    result[0] += 0.023330927613793784;
                  } else {
                    result[0] += 0.028321592715416368;
                  }
                } else {
                  result[0] += 0.019202779689398666;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9464500000000001245) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03230300464577552655) ) ) {
                    result[0] += 0.028689939558211162;
                  } else {
                    result[0] += 0.0208622528574602;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.03591337907375802) ) ) {
                    result[0] += 0.01329199835182734;
                  } else {
                    result[0] += 0.02206783886373391;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009944440127977462532) ) ) {
                result[0] += 0.014261933235361025;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9551500000000000545) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9427500000000000879) ) ) {
                    result[0] += 0.0203799185792429;
                  } else {
                    result[0] += 0.006909110672353179;
                  }
                } else {
                  result[0] += 0.02425555587620763;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-836.0042144475063424) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2046649341083811857) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1168.062366236748858) ) ) {
                    result[0] += 0.020788473491766296;
                  } else {
                    result[0] += 0.029791985160161967;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                    result[0] += 0.012910464510965869;
                  } else {
                    result[0] += 0.01949399521121622;
                  }
                }
              } else {
                result[0] += 8.376821904736801e-05;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1380658852819209581) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9207000000000000739) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06212817787824550381) ) ) {
                    result[0] += 0.022175375058971505;
                  } else {
                    result[0] += 0.014377180284074661;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01611066591465903919) ) ) {
                    result[0] += 0.019758145063750343;
                  } else {
                    result[0] += 0.00972875204124711;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09882060861174114808) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1427700348432055788) ) ) {
                    result[0] += -0.0037235747975519927;
                  } else {
                    result[0] += 0.013587427984309277;
                  }
                } else {
                  result[0] += -0.008778807349546655;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.207614942528735691) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6115.31175970588356) ) ) {
                result[0] += 0.004569264910251942;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07915000000000001201) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6630084695216510449) ) ) {
                    result[0] += 0.02057166369384751;
                  } else {
                    result[0] += 0.012595439457951853;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-70.91885288635354812) ) ) {
                    result[0] += 0.022290441427618435;
                  } else {
                    result[0] += 0.01461875563880506;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-663.4043224984577591) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6484.005380192698794) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6149500000000001076) ) ) {
                    result[0] += 0.004771221716122133;
                  } else {
                    result[0] += 0.012064767961064074;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01625000000000000402) ) ) {
                    result[0] += 0.006940143508336345;
                  } else {
                    result[0] += 0.013999786799112034;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1397500000000000409) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09410000000000001696) ) ) {
                    result[0] += 0.0033467724445425447;
                  } else {
                    result[0] += -0.015697547501892707;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9826836581709146312) ) ) {
                    result[0] += 0.019276231755687916;
                  } else {
                    result[0] += 0.004815860645471072;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3056000000000000383) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.274781071744195637) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-524.3174548467219438) ) ) {
                  result[0] += 0.00558829605577371;
                } else {
                  result[0] += 0.009656665674149188;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1306.189448752128555) ) ) {
                  result[0] += 0.0006934414078141488;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05424999999999999961) ) ) {
                    result[0] += -0.02499693356981601;
                  } else {
                    result[0] += -0.01328581564891201;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4344000000000000639) ) ) {
                result[0] += 0.012664267665917023;
              } else {
                result[0] += 0.008373117044749339;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9613228062833077958) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2519788480021191157) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2934.007013777737939) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.06528046421667) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.601724137931035408) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2897740295086664308) ) ) {
                    result[0] += 0.013535428560620136;
                  } else {
                    result[0] += 0.009278083681871382;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6954500000000001236) ) ) {
                    result[0] += 0.012256683477584077;
                  } else {
                    result[0] += 0.005287749172878533;
                  }
                }
              } else {
                result[0] += 0.02890922496660982;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2432084806241540387) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.731662826420891754) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9389500000000000624) ) ) {
                    result[0] += 0.008344320876532897;
                  } else {
                    result[0] += -0.01417426737987722;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869560366706151944) ) ) {
                    result[0] += -0.0034895680811097836;
                  } else {
                    result[0] += 0.010200708324248025;
                  }
                }
              } else {
                result[0] += 0.02566564950547071;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1223.821860747523942) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.758534714230918006) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007850000000000002809) ) ) {
                    result[0] += 0.011600257507216867;
                  } else {
                    result[0] += -0.006047022746337648;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6562884567030830008) ) ) {
                    result[0] += -0.005527588182792096;
                  } else {
                    result[0] += -0.02200993418641716;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.002590673575131319) ) ) {
                  result[0] += -0.01533678548910927;
                } else {
                  result[0] += -0.02970723562241519;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4312439772176295816) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1716.028809615633918) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6180500000000000993) ) ) {
                    result[0] += 0.026123774343481898;
                  } else {
                    result[0] += 0.012394932032777872;
                  }
                } else {
                  result[0] += -0.0009291455630549484;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6017000000000000126) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2844999957084173303) ) ) {
                    result[0] += -0.004026105411360498;
                  } else {
                    result[0] += 0.005880855840051759;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3558.496385149145226) ) ) {
                    result[0] += -0.0009595356064297939;
                  } else {
                    result[0] += -0.0343612867807132;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2762.179861479253759) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.390774125132556271) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3786.394717162055713) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6740.924545030961781) ) ) {
                  result[0] += 0.007932632165428645;
                } else {
                  result[0] += -0.014803137007662455;
                }
              } else {
                result[0] += 0.011944071463659039;
              }
            } else {
              result[0] += -0.016172797519036105;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2526500000000000412) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.171550000000000008) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.040661157024794115) ) ) {
                  result[0] += -0.005018849325890054;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.416344086021505966) ) ) {
                    result[0] += -0.022596885892612967;
                  } else {
                    result[0] += -0.015346697275668066;
                  }
                }
              } else {
                result[0] += 0.012661338984642485;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3743000000000000216) ) ) {
                result[0] += -0.028849110168370867;
              } else {
                result[0] += -0.012877784508192106;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)158.6222527472527872) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02505000000000000282) ) ) {
          result[0] += 0.00398850295663089;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3083306738637045519) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.638350000000000084) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5208333333333333703) ) ) {
                result[0] += -0.010507168837513575;
              } else {
                result[0] += 0.0227076053349459;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2977699194230143953) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1456569483578152857) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                    result[0] += -0.01754743275307424;
                  } else {
                    result[0] += -0.012116868320723314;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209084699453553569) ) ) {
                    result[0] += -0.0012425598162660917;
                  } else {
                    result[0] += -0.01236979301106387;
                  }
                }
              } else {
                result[0] += 0.006519336629251006;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01025000000000000216) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
                result[0] += -0.01589541105152652;
              } else {
                result[0] += -0.021622354924081905;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04770000000000000628) ) ) {
                result[0] += -0.021998440687432216;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.868199541507911343) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                    result[0] += -0.014808538815268474;
                  } else {
                    result[0] += -0.010794282590838667;
                  }
                } else {
                  result[0] += -6.370590451402808e-05;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9645500000000001295) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02880243203506518621) ) ) {
            result[0] += -0.007580096447941403;
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6458333333333333703) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.562500000000000111) ) ) {
                result[0] += -0.015087578924797214;
              } else {
                result[0] += -0.012105213994197377;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7291666666666668517) ) ) {
                result[0] += -0.019229061361732417;
              } else {
                result[0] += -0.01597928754345371;
              }
            }
          }
        } else {
          result[0] += -0.02010538131845847;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.85329985652797902) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.035538893813282) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1022500000000000214) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5573500000000001231) ) ) {
                result[0] += 0.025165995874540582;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4019577872618069758) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                    result[0] += 0.01917293807046509;
                  } else {
                    result[0] += -0.0003149933374320243;
                  }
                } else {
                  result[0] += -0.0136227573665148;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2110000000000000209) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.64379699248120659) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.27922077922078259) ) ) {
                    result[0] += 0.0014064946439608273;
                  } else {
                    result[0] += -0.022984526059567547;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.5773524720893235) ) ) {
                    result[0] += 0.020974382088595245;
                  } else {
                    result[0] += 0.0013692853453777273;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.124288472983382414) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9120.266636749798636) ) ) {
                    result[0] += 0.006600135119503859;
                  } else {
                    result[0] += 0.019332701805569494;
                  }
                } else {
                  result[0] += -0.01332550938209521;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.48914488258751021) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.79239388062918081) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.77783929136349528) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24674.59819322649491) ) ) {
                    result[0] += 0.005150183637936555;
                  } else {
                    result[0] += -0.008941102196590235;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5290000000000001368) ) ) {
                    result[0] += 0.022056819761217313;
                  } else {
                    result[0] += 0.007693092042438878;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.73863636363636687) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.48814016172507024) ) ) {
                    result[0] += -0.01448669413007187;
                  } else {
                    result[0] += -0.03147353436990748;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4036500000000000088) ) ) {
                    result[0] += -0.007115402742747227;
                  } else {
                    result[0] += 0.0042542141078605504;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02533779707363225178) ) ) {
                result[0] += -0.02778717309062734;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.1695402298850599) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13669.55583063214181) ) ) {
                    result[0] += 0.011673991044308168;
                  } else {
                    result[0] += -0.001740064036735769;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1416500000000000259) ) ) {
                    result[0] += 0.03192297851481107;
                  } else {
                    result[0] += 0.015307924206888835;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06455000000000001015) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3162745180867091999) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.728150000000000075) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4780.79918261664443) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01425000000000000051) ) ) {
                    result[0] += 0.0021804479176325844;
                  } else {
                    result[0] += 0.03469658921079289;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2508523744426000568) ) ) {
                    result[0] += 0.01617430443948075;
                  } else {
                    result[0] += -0.009578804198611363;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2156942646659316121) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8238500000000000822) ) ) {
                    result[0] += 0.0038560620668728726;
                  } else {
                    result[0] += -0.0144993197784116;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.641839080459782) ) ) {
                    result[0] += -0.03073657581464767;
                  } else {
                    result[0] += -0.015381731587759741;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.26158232359230382) ) ) {
                result[0] += 0.013516897171165521;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.178368028279654922) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5346500000000000696) ) ) {
                    result[0] += 0.016822567530285285;
                  } else {
                    result[0] += -0.01793231615351328;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2113418173407974887) ) ) {
                    result[0] += -0.026806941302577846;
                  } else {
                    result[0] += -0.01426668519918511;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1492668163062055575) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1296327801091326226) ) ) {
                result[0] += 0.0024825291437802106;
              } else {
                result[0] += 0.03616387110776049;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.79217479674796998) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6062500000000000666) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.87666034155597927) ) ) {
                    result[0] += -0.003763257476650979;
                  } else {
                    result[0] += 0.02458780179529881;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                    result[0] += 0.008962929892101401;
                  } else {
                    result[0] += -0.006895255711711161;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3012500000000000733) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.67117117117117253) ) ) {
                    result[0] += -0.015571887317184665;
                  } else {
                    result[0] += -0.025006017077996927;
                  }
                } else {
                  result[0] += -0.0023307656564849743;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.005850000000000000165) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9826836581709146312) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)64.72098214285715301) ) ) {
                result[0] += 0.015205970548570357;
              } else {
                result[0] += 0.003573943096733354;
              }
            } else {
              result[0] += -0.01231631515306312;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04495000000000001078) ) ) {
              result[0] += 0.0030106391300814563;
            } else {
              result[0] += 0.027138237707226405;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4344000000000000639) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2333155460690146121) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1979241379727537664) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.00769230769231299) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17110.8457892469487) ) ) {
                    result[0] += 0.022627023398793748;
                  } else {
                    result[0] += -0.007889628780071963;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2181446333714152641) ) ) {
                    result[0] += -0.005803965179089535;
                  } else {
                    result[0] += -0.022352045461485875;
                  }
                }
              } else {
                result[0] += 0.023411108060870104;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4632614272892083274) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5749500000000000721) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15049.58925072465172) ) ) {
                    result[0] += -0.004812288353824699;
                  } else {
                    result[0] += 0.01877125975940193;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.78049759229535454) ) ) {
                    result[0] += -0.004959897141195192;
                  } else {
                    result[0] += -0.012819153984780965;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-33595.95242623185186) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.85584415584416718) ) ) {
                    result[0] += 0.000725494921158231;
                  } else {
                    result[0] += -0.01247912255578272;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2490000000000000269) ) ) {
                    result[0] += -0.016011567942762935;
                  } else {
                    result[0] += -0.009811235412826132;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.02459016393443392) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17705.48077603937054) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.69425511197663425) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.03333333333333854) ) ) {
                    result[0] += 0.008731319994401118;
                  } else {
                    result[0] += -0.0012393637279486472;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5158500000000001418) ) ) {
                    result[0] += -0.013077890048096133;
                  } else {
                    result[0] += -0.0001584910925104349;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.33549783549783996) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5772832283623651195) ) ) {
                    result[0] += 0.010269376647616261;
                  } else {
                    result[0] += -0.00681824243397039;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5027000000000000357) ) ) {
                    result[0] += 0.0014506729408788428;
                  } else {
                    result[0] += -0.017006309316263568;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3286648086247792588) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5647000000000000908) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-28064.69142083861152) ) ) {
                    result[0] += -0.008490737754143341;
                  } else {
                    result[0] += -0.02334077900225338;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-64209.50517865573784) ) ) {
                    result[0] += -0.017798506315359085;
                  } else {
                    result[0] += -0.031546091191364395;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6621500000000001274) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)42.69862018881627108) ) ) {
                    result[0] += -0.003592323243056722;
                  } else {
                    result[0] += -0.017443900198293436;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-43899.52505376867339) ) ) {
                    result[0] += -0.007575367644983277;
                  } else {
                    result[0] += 0.0126625935138781;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4540995000000000448) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3269880000000000564) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.945195195195196902) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2401350000000000151) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6804500000000001103) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107150000000000023) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002750000000000000708) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.326140544518028541) ) ) {
                  result[0] += -0.013865466463857822;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1524500000000000022) ) ) {
                    result[0] += 0.008577244558962895;
                  } else {
                    result[0] += -0.004206570452472928;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2192871037289895186) ) ) {
                  result[0] += 0.0016119558345050586;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1234.374879497081338) ) ) {
                    result[0] += -0.010984021904988076;
                  } else {
                    result[0] += -0.024973347173479824;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3455500000000000793) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09410000000000001696) ) ) {
                  result[0] += -0.00043367706839530536;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.041987179487180448) ) ) {
                    result[0] += -0.016344623348427668;
                  } else {
                    result[0] += -0.02539987954154186;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.669540229885059901) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1173.118468614793301) ) ) {
                    result[0] += 0.005940147193983356;
                  } else {
                    result[0] += 0.028009087342460347;
                  }
                } else {
                  result[0] += -0.013194670272071397;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1670000000000000373) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.03088619624613997) ) ) {
                result[0] += -0.023861378612281825;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1022500000000000214) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.88483844241923038) ) ) {
                    result[0] += -0.005547657204001811;
                  } else {
                    result[0] += -0.011992775603852413;
                  }
                } else {
                  result[0] += -0.0009713189065912902;
                }
              }
            } else {
              result[0] += -0.02658809517692243;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3953.814167494189405) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04565000000000000308) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1545948809791034828) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1298667417686050485) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.34850948509485491) ) ) {
                    result[0] += -0.0017307974901586563;
                  } else {
                    result[0] += -0.01989242118840195;
                  }
                } else {
                  result[0] += -0.035080836627356414;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2593.286319653105238) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6804500000000001103) ) ) {
                    result[0] += -0.013666099688833004;
                  } else {
                    result[0] += 0.0004541683490327778;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3230.323190207400785) ) ) {
                    result[0] += 0.013151548884476073;
                  } else {
                    result[0] += -0.005822405425833108;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.256349206349208103) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2758315000000000627) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.319459459459459971) ) ) {
                    result[0] += 0.009095905552752366;
                  } else {
                    result[0] += -0.009979608258255095;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6017000000000000126) ) ) {
                    result[0] += 0.00553621462429564;
                  } else {
                    result[0] += -0.005882182280545651;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5908000000000001029) ) ) {
                    result[0] += 0.0008680641439259897;
                  } else {
                    result[0] += -0.021642011420720083;
                  }
                } else {
                  result[0] += -0.03003153824387671;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1903887996092470669) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3175845000000001028) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.819805194805195647) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2960395000000000665) ) ) {
                    result[0] += -0.00032526652644124585;
                  } else {
                    result[0] += 0.015989393191633863;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10669.02265293044911) ) ) {
                    result[0] += -0.00665810743299712;
                  } else {
                    result[0] += 0.004520369570479647;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09647950813491669442) ) ) {
                  result[0] += -0.004498428663419566;
                } else {
                  result[0] += -0.021733141928210034;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.81114130434783149) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5621000000000001551) ) ) {
                  result[0] += 0.017592136207688083;
                } else {
                  result[0] += 0.0025104291414943035;
                }
              } else {
                result[0] += 0.026674220485680415;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2711220000000000296) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.00020598988850054715;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.82683658170914853) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)331.7040358106666531) ) ) {
                result[0] += -0.016322055116021663;
              } else {
                result[0] += -0.02353060022958324;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33392018779342791) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2191665000000000141) ) ) {
                  result[0] += -0.010736340534158187;
                } else {
                  result[0] += 0.011122018091209218;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)139.8343653250774139) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)44505.14021809133556) ) ) {
                    result[0] += -0.011564475631638583;
                  } else {
                    result[0] += -0.006544668719561733;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1917145000000000377) ) ) {
                    result[0] += -0.012949379213852086;
                  } else {
                    result[0] += -0.0169502748800108;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05120002174489756558) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.57259953161593202) ) ) {
              result[0] += 0.02083694991825971;
            } else {
              result[0] += -0.01105462297778246;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1397500000000000409) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1924404709589289386) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04025000000000000105) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.79220779220780457) ) ) {
                    result[0] += -0.015354209658514103;
                  } else {
                    result[0] += 0.006092761833891005;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7497000000000001441) ) ) {
                    result[0] += -0.011073399072284197;
                  } else {
                    result[0] += -0.01719517146091384;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7172500000000000542) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0611500000000000099) ) ) {
                    result[0] += -0.010966910338203843;
                  } else {
                    result[0] += -0.0016506819889993629;
                  }
                } else {
                  result[0] += 0.02485665710364656;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.92940199335549778) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11625.88613410333346) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1072.091074890846585) ) ) {
                    result[0] += -0.01636687183262864;
                  } else {
                    result[0] += -0.00925717635333493;
                  }
                } else {
                  result[0] += 0.010949076159920674;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4723500000000000476) ) ) {
                  result[0] += -0.020204760981917376;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2758315000000000627) ) ) {
                    result[0] += -0.010720747718262156;
                  } else {
                    result[0] += -0.015797187683166625;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.59508740204942789) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)753.7197460358141825) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.682480850012355589) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.4281725597490329) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7554835062195935924) ) ) {
                result[0] += -0.016624684215474;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.726381461675579709) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3895535000000000525) ) ) {
                    result[0] += 0.01557362755153431;
                  } else {
                    result[0] += -0.0035907157402909643;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06205000000000000793) ) ) {
                    result[0] += -0.019353664314498243;
                  } else {
                    result[0] += -0.002219518316999935;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1524500000000000022) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03935000000000000303) ) ) {
                  result[0] += 0.007030989671377918;
                } else {
                  result[0] += 0.0174866046391821;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.28421457482372148) ) ) {
                  result[0] += -0.018410375001225197;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01625000000000000402) ) ) {
                    result[0] += -0.009582177172429086;
                  } else {
                    result[0] += 0.004103604513779566;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3817900000000000182) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3928000000000000935) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1670000000000000373) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
                    result[0] += -0.018285566019054154;
                  } else {
                    result[0] += -0.003948484266343342;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)180.3360792364846645) ) ) {
                    result[0] += -0.015863217721243265;
                  } else {
                    result[0] += -0.030092291679298132;
                  }
                }
              } else {
                result[0] += -0.003960965381364517;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.154380165289259352) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.27475490196078578) ) ) {
                  result[0] += -0.007040185535922719;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.28421457482372148) ) ) {
                    result[0] += 0.002441929550169053;
                  } else {
                    result[0] += 0.019310721699281535;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.552403100775196165) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)540.2594105796734993) ) ) {
                    result[0] += -0.01440980691228145;
                  } else {
                    result[0] += -0.02441734344807644;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)516.3318945478059732) ) ) {
                    result[0] += -0.013009585281670455;
                  } else {
                    result[0] += 0.016394769789256063;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9247500000000000719) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.335416666666668029) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7619500000000001272) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.45747126436781826) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6017000000000000126) ) ) {
                    result[0] += 0.007462957599509437;
                  } else {
                    result[0] += 0.002576635536153956;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7258500000000001062) ) ) {
                    result[0] += 0.01934148945747149;
                  } else {
                    result[0] += 0.008126498641716428;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653967102080309726) ) ) {
                    result[0] += 0.007462191122062318;
                  } else {
                    result[0] += -0.00892716564853953;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.10620300751880762) ) ) {
                    result[0] += 0.024009858789956186;
                  } else {
                    result[0] += 0.0063807345384899235;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7171.422813562979172) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3220420529803963983) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    result[0] += -0.028992795257765495;
                  } else {
                    result[0] += -0.003885880887421181;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03335000000000001158) ) ) {
                    result[0] += -0.007157479806723163;
                  } else {
                    result[0] += 0.008075617425079253;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3369500000000000273) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
                    result[0] += 0.016626162230171857;
                  } else {
                    result[0] += 0.005507669793353323;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.35238095238095468) ) ) {
                    result[0] += 0.0037790309375895534;
                  } else {
                    result[0] += -0.010736109840298127;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0756500000000000089) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10429.20586663455833) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9551500000000000545) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3963105000000000655) ) ) {
                    result[0] += -0.02165042924471047;
                  } else {
                    result[0] += 0.0026967583678716325;
                  }
                } else {
                  result[0] += -0.03098030879574133;
                }
              } else {
                result[0] += 0.01862098591629096;
              }
            } else {
              result[0] += -0.03990008123243714;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4275000000000000466) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)217.929861111111137) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)31879.36035643579817) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)708.6727958726006591) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06340000000000002578) ) ) {
                  result[0] += -0.006248255365893572;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8692129219887744229) ) ) {
                    result[0] += -0.019310643473234163;
                  } else {
                    result[0] += -0.012610939892956623;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8442000000000001725) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355721953891439735) ) ) {
                    result[0] += 0.0006959007924380177;
                  } else {
                    result[0] += -0.008100283481101447;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.906550000000000078) ) ) {
                    result[0] += -0.021969466000372223;
                  } else {
                    result[0] += -0.008117218473420519;
                  }
                }
              }
            } else {
              result[0] += 0.017164821568874684;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4812889397749424147) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07075279291499393663) ) ) {
                result[0] += -0.009870038337763806;
              } else {
                result[0] += -0.02257020905178396;
              }
            } else {
              result[0] += -0.008354177264613584;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.80697674418605203) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3432.582344911681957) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4650500000000000189) ) ) {
                result[0] += 0.005198005114720423;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3511500000000000177) ) ) {
                  result[0] += -0.012675493880919632;
                } else {
                  result[0] += -0.01956168773215423;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3476566175261612823) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.22020202020202362) ) ) {
                  result[0] += 0.013889995249711238;
                } else {
                  result[0] += -0.003982257881446648;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4332407390653168489) ) ) {
                  result[0] += 0.02762830851112997;
                } else {
                  result[0] += 0.005111352111706506;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.645224719101126) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.75461600214076086) ) ) {
                result[0] += -0.010136733021754381;
              } else {
                result[0] += -0.022408248690957446;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11385.5555937579793) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4183000000000000607) ) ) {
                  result[0] += 0.0012329190101165403;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.40153452685422764) ) ) {
                    result[0] += -0.010792804038255801;
                  } else {
                    result[0] += -0.022401933695392093;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)14105.07947886984948) ) ) {
                  result[0] += 0.014255536901244821;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)27856.34674737125533) ) ) {
                    result[0] += -0.006999217015003549;
                  } else {
                    result[0] += 0.0014927271341109343;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6600000000000001421) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.793653083354456057) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.129733520336606567) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5633670000000000622) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.448321891685737661) ) ) {
                  result[0] += -0.008170620439051804;
                } else {
                  result[0] += 0.006930623843447039;
                }
              } else {
                result[0] += -0.016882318109966633;
              }
            } else {
              result[0] += -0.01723934919611991;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9613228062833077958) ) ) {
              result[0] += 0.018306045021613128;
            } else {
              result[0] += -0.010891862398553736;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4221117431024698496) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.586265500000000106) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)753.7197460358141825) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06795000000000002427) ) ) {
                    result[0] += -0.0028314862115583314;
                  } else {
                    result[0] += 0.00818630436319569;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8538500000000001089) ) ) {
                    result[0] += 0.010267004960324452;
                  } else {
                    result[0] += 0.0060120253250147805;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05545000000000000623) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7701.814954046463754) ) ) {
                    result[0] += -0.020071947125678564;
                  } else {
                    result[0] += 0.014522804924177362;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.095327520679633793) ) ) {
                    result[0] += -0.00504929206415918;
                  } else {
                    result[0] += 0.011997616707404887;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3209000000000000186) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002750000000000000708) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8642000000000001902) ) ) {
                    result[0] += 0.011771158740806791;
                  } else {
                    result[0] += 0.002809762989076882;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
                    result[0] += 0.012417213430434408;
                  } else {
                    result[0] += 0.01738286840271666;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3638500000000000623) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.334577114427863975) ) ) {
                    result[0] += 0.0033851044196367263;
                  } else {
                    result[0] += -0.016813082619828123;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3115.942419799886466) ) ) {
                    result[0] += 0.0167768061738441;
                  } else {
                    result[0] += 0.006968465298884868;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4434500000000000663) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5771835000000001825) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6731225466545354141) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4510084821850932069) ) ) {
                    result[0] += -0.007943113712824202;
                  } else {
                    result[0] += 0.00953600671486035;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8494243075500166329) ) ) {
                    result[0] += -0.009207977927285543;
                  } else {
                    result[0] += 0.0024576618942573035;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)59.79870609904083523) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.66280257606040438) ) ) {
                    result[0] += 0.01395192996371948;
                  } else {
                    result[0] += 0.0021045122283182252;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.028850145288502382) ) ) {
                    result[0] += 0.013204606867899189;
                  } else {
                    result[0] += 0.026820040202407986;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)819.6147148111532488) ) ) {
                result[0] += -0.031177609010224094;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4962000000000000299) ) ) {
                  result[0] += 0.006805736173489465;
                } else {
                  result[0] += -0.009423841225278163;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)64.72098214285715301) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)31879.36035643579817) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)217.929861111111137) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886111832648119713) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)21270.70408175692864) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.35424710424710604) ) ) {
                    result[0] += 0.005306733557162615;
                  } else {
                    result[0] += 0.021815064625533693;
                  }
                } else {
                  result[0] += -0.0026884308506491287;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5358140000000001235) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5309975000000001222) ) ) {
                    result[0] += -0.0023654576364759757;
                  } else {
                    result[0] += -0.016888958848845722;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6156880000000001241) ) ) {
                    result[0] += 0.006700236864833428;
                  } else {
                    result[0] += -0.005776438993654445;
                  }
                }
              }
            } else {
              result[0] += -0.02482551839657822;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8835500000000000576) ) ) {
              result[0] += 0.021974955027390285;
            } else {
              result[0] += 0.0031195360985214826;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02505000000000000282) ) ) {
            result[0] += 0.003546087797992901;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1584500000000000075) ) ) {
              result[0] += -0.006932060437139967;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)207.7083333333333428) ) ) {
                result[0] += -0.019118902592011596;
              } else {
                result[0] += -0.013359082112052171;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.14135254988913815) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
          result[0] += -0.017719662744554877;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7639375000000000471) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5.806801516361837834) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6405977316080030404) ) ) {
                result[0] += 0.016984903164115734;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8494243075500166329) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7069310000000000871) ) ) {
                    result[0] += -0.0068583085080343815;
                  } else {
                    result[0] += 0.003530707721975824;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.380182360511232664) ) ) {
                    result[0] += 0.01403193421066608;
                  } else {
                    result[0] += 0.0020408010583058134;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.79423076923077573) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.799613899613900614) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.529766123316798065) ) ) {
                    result[0] += 0.01616037827183673;
                  } else {
                    result[0] += 0.0036491128535200146;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03665000000000000896) ) ) {
                    result[0] += 0.004319317793484219;
                  } else {
                    result[0] += 0.022350298786565696;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.38163074039362721) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6094.863866320612033) ) ) {
                    result[0] += 0.011707167013903124;
                  } else {
                    result[0] += 0.024212093020588642;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10923.85965081359973) ) ) {
                    result[0] += 0.0003908300164859811;
                  } else {
                    result[0] += 0.015022013586575721;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.909011700273836265) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.862805500000000114) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5.806801516361837834) ) ) {
                  result[0] += 0.010012460640836609;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.83870359628770785) ) ) {
                    result[0] += 0.01841868224373066;
                  } else {
                    result[0] += 0.012553521751532052;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.26568627450980431) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.180717299578059709) ) ) {
                    result[0] += 0.022614337156347378;
                  } else {
                    result[0] += 0.016906818676277528;
                  }
                } else {
                  result[0] += 0.028966954538033222;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2424000000000000321) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0650402493301361212) ) ) {
                  result[0] += 0.023430428023263915;
                } else {
                  result[0] += 0.033895710360664806;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.03088619624613997) ) ) {
                  result[0] += 0.011170270843629515;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
                    result[0] += 0.01599678073306045;
                  } else {
                    result[0] += 0.031256051617603434;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4274500000000000521) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5735500000000001153) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
              result[0] += 0.01863085730735695;
            } else {
              result[0] += 0.006893327617444913;
            }
          } else {
            result[0] += -0.0006708652728767232;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1753821899233260206) ) ) {
            result[0] += 0.014785727391259804;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
              result[0] += -0.017234682534915443;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)148.5009469696969973) ) ) {
                result[0] += 0.006500040866207166;
              } else {
                result[0] += -0.015728539169799362;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4151215000000000876) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.801734104046245122) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2711220000000000296) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.715410573678290529) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1041666666666666713) ) ) {
              result[0] += -0.011365768935508518;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1524500000000000022) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2291666666666667129) ) ) {
                  result[0] += -0.00599785315322117;
                } else {
                  result[0] += 0.005878376213700825;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2247630000000000183) ) ) {
                  result[0] += -0.012285827809788624;
                } else {
                  result[0] += -0.003773358018786885;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.194335169158143639) ) ) {
              result[0] += 0.00214080103085694;
            } else {
              result[0] += 0.014308706372373992;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.785363700564971845) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4474500000000000699) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.617866323042412291) ) ) {
                result[0] += 0.021840458129127317;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1917145000000000377) ) ) {
                  result[0] += 0.009699253939067709;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.410450000000000037) ) ) {
                    result[0] += -0.014960958855938445;
                  } else {
                    result[0] += 0.003044379200468271;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74737090866123346) ) ) {
                result[0] += -0.025623398269545596;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1387.236520179336139) ) ) {
                    result[0] += -0.0031862971964815153;
                  } else {
                    result[0] += 0.02295094265301106;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5154874332154414374) ) ) {
                    result[0] += -0.008021070629491265;
                  } else {
                    result[0] += -0.026504661729691417;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9753708898829833718) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.695048309178745605) ) ) {
                result[0] += -0.024765608718697228;
              } else {
                result[0] += -0.017336071146549944;
              }
            } else {
              result[0] += -0.006519502649548425;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2428.141113281569233) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2087.963610990688721) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04565000000000000308) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7750500000000001277) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105614129712844229) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
                    result[0] += -0.009137082294474075;
                  } else {
                    result[0] += 0.014261676408581895;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.437797619047619602) ) ) {
                    result[0] += -0.001708711288298349;
                  } else {
                    result[0] += -0.012913914581560168;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01145000000000000011) ) ) {
                  result[0] += -0.02503723843092779;
                } else {
                  result[0] += -0.010894406810375982;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.88483844241923038) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6038500000000001089) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.552093295775335946) ) ) {
                    result[0] += 0.012381482019086633;
                  } else {
                    result[0] += 6.357097471031362e-05;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                    result[0] += 0.005539875322843414;
                  } else {
                    result[0] += -0.013538014685433006;
                  }
                }
              } else {
                result[0] += 0.016584821334986705;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2950710236599619618) ) ) {
                result[0] += -0.011762985393002242;
              } else {
                result[0] += 0.009796980944149667;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3745321869304507056) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3083306738637045519) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1879495013645960666) ) ) {
                    result[0] += -0.009191550877284323;
                  } else {
                    result[0] += -0.02168122833056554;
                  }
                } else {
                  result[0] += 0.00442229738021051;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5154874332154414374) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.17005163511187682) ) ) {
                    result[0] += -0.020177750952116536;
                  } else {
                    result[0] += -0.03437263332471373;
                  }
                } else {
                  result[0] += -0.01008675746741449;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6999500000000000721) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3162745180867091999) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2685307668603297282) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.08578431372549744) ) ) {
                  result[0] += 0.009536598067527432;
                } else {
                  result[0] += 0.0003175155152311222;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6763500000000001178) ) ) {
                  result[0] += 0.0343465864744784;
                } else {
                  result[0] += 0.014215487415613673;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4470.737490760877336) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.270242914979758275) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.608333333333333837) ) ) {
                    result[0] += -0.007598946711274077;
                  } else {
                    result[0] += 0.012244720638143186;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6498500000000001497) ) ) {
                    result[0] += -0.005889067947089726;
                  } else {
                    result[0] += 0.014285638563753695;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04025000000000000105) ) ) {
                  result[0] += -0.0028153594369225944;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.256349206349208103) ) ) {
                    result[0] += 0.007905326306931143;
                  } else {
                    result[0] += 0.019066801997331247;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.76676186590507811) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.0350985221674911) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.728150000000000075) ) ) {
                  result[0] += -0.0055654560524777295;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.969280660377358938) ) ) {
                    result[0] += 0.003341757930043784;
                  } else {
                    result[0] += 0.011874457275997154;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3272.957111253326275) ) ) {
                  result[0] += 0.018251922669840073;
                } else {
                  result[0] += 0.010383362108337875;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9640.380337645368854) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1492668163062055575) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4011795000000000777) ) ) {
                    result[0] += -0.0014134239076579102;
                  } else {
                    result[0] += 0.02045648677912639;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.43921568627451535) ) ) {
                    result[0] += -0.007662164732077977;
                  } else {
                    result[0] += -0.026103305666229017;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)27856.34674737125533) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11140.90608249307297) ) ) {
                    result[0] += 0.015311835824075108;
                  } else {
                    result[0] += -0.0013530730857606481;
                  }
                } else {
                  result[0] += 0.020858088600242238;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2842505000000000726) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1622485000000000455) ) ) {
            result[0] += -0.009317775175065567;
          } else {
            result[0] += 0.01296993970362872;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.09737269772481483) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)22454.51531968933341) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2449000000000000343) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.82683658170914853) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3297000000000000486) ) ) {
                    result[0] += -0.012728082331425663;
                  } else {
                    result[0] += -0.02529306381432754;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.69570538495772283) ) ) {
                    result[0] += 0.006328076075099992;
                  } else {
                    result[0] += -0.00807546599798765;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5451099740723436282) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.207305540238820557) ) ) {
                    result[0] += -0.0020990804077172763;
                  } else {
                    result[0] += -0.01775215215059291;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6046637229270882541) ) ) {
                    result[0] += 0.00950478927486971;
                  } else {
                    result[0] += -0.011079205189532187;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2004115000000000202) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)44505.14021809133556) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1558180000000000398) ) ) {
                    result[0] += -0.014431520889433242;
                  } else {
                    result[0] += -0.008243046839368365;
                  }
                } else {
                  result[0] += 0.0029589070123082024;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05995000000000001023) ) ) {
                  result[0] += 0.02702993461561046;
                } else {
                  result[0] += -0.0004916249092155307;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.010850000000000002) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                result[0] += -0.010428278337993957;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2853053162064869697) ) ) {
                  result[0] += -0.02038119109332336;
                } else {
                  result[0] += -0.012428667120922025;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2046649341083811857) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2247630000000000183) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1899971049495448316) ) ) {
                    result[0] += -0.009906110631689714;
                  } else {
                    result[0] += -0.006052391958080615;
                  }
                } else {
                  result[0] += 0.01027142118025281;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)61615.68427007270657) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09725000000000001699) ) ) {
                    result[0] += -0.012308413472976799;
                  } else {
                    result[0] += -0.009780764361179204;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)235.0476190476190652) ) ) {
                    result[0] += 0.006812201609365054;
                  } else {
                    result[0] += -0.01113789292009117;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3272.957111253326275) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3229585000000000927) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.81980519480519654) ) ) {
                result[0] += 0.010081325740654757;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08455000000000001403) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)729.7790779374109889) ) ) {
                    result[0] += -0.004591934316665615;
                  } else {
                    result[0] += -0.017014567689456847;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4229000000000000536) ) ) {
                    result[0] += -0.0149875699412303;
                  } else {
                    result[0] += 0.015674263778218827;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3817900000000000182) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.89237451737451856) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09105000000000000593) ) ) {
                    result[0] += -0.01715745567021674;
                  } else {
                    result[0] += -0.032573944891026343;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4833440790887599814) ) ) {
                    result[0] += -0.00646358906231091;
                  } else {
                    result[0] += -0.015071309810191988;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3895535000000000525) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5058210444616920709) ) ) {
                    result[0] += 0.019879301816123362;
                  } else {
                    result[0] += -0.009586474598443478;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.15759905381431238) ) ) {
                    result[0] += -0.0002588573758569792;
                  } else {
                    result[0] += -0.01888092383859384;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4081628666563487662) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
                result[0] += 0.03829138714022685;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3653893359693760057) ) ) {
                  result[0] += -0.024589158330106265;
                } else {
                  result[0] += -0.0012913997577305976;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4062495000000000966) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5969286998555723978) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4659500000000000863) ) ) {
                    result[0] += 0.026421143641686615;
                  } else {
                    result[0] += -0.008208528233396434;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3895535000000000525) ) ) {
                    result[0] += -0.011183054342963529;
                  } else {
                    result[0] += -0.0016397057687635973;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.89237451737451856) ) ) {
                  result[0] += -0.008518759677766101;
                } else {
                  result[0] += 0.009833078766365518;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.87666034155597927) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4277.468016646671458) ) ) {
              result[0] += -0.0028373021878951026;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
                result[0] += 0.014062958338954849;
              } else {
                result[0] += 0.0027930414211464302;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09725000000000001699) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06455000000000001015) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3895535000000000525) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.92940199335549778) ) ) {
                    result[0] += -0.01072707744036991;
                  } else {
                    result[0] += -0.0027595303438562825;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.94076923076924146) ) ) {
                    result[0] += -0.009182911125372829;
                  } else {
                    result[0] += 0.030467024362737457;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
                  result[0] += 0.025787129285399255;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.92403846153846558) ) ) {
                    result[0] += 0.006483375937585606;
                  } else {
                    result[0] += -0.009122985967204785;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4729000000000000425) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.321414000000000033) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5728500000000000814) ) ) {
                    result[0] += -0.0022197015348019134;
                  } else {
                    result[0] += -0.013098948770987018;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.8738636363636445) ) ) {
                    result[0] += -0.0017357775380869712;
                  } else {
                    result[0] += -0.00838737069957372;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.94076923076924146) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3430250000000000798) ) ) {
                    result[0] += -0.006636750125266964;
                  } else {
                    result[0] += 0.009368832477164267;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7302500000000001767) ) ) {
                    result[0] += -0.01063966545778453;
                  } else {
                    result[0] += 0.006581205017968337;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6323505000000001486) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.24337662337662458) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.63927801724138078) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.018205892088713149) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01285000000000000205) ) ) {
                result[0] += 0.005104950547529853;
              } else {
                result[0] += -0.011836010007287859;
              }
            } else {
              result[0] += 0.011837115306473913;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1899971049495448316) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8413500000000001533) ) ) {
                result[0] += 0.009075553941950648;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4886700000000000488) ) ) {
                  result[0] += -0.014701917157664942;
                } else {
                  result[0] += -0.0031466737686208913;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5674000000000000155) ) ) {
                result[0] += -0.011841868966340938;
              } else {
                result[0] += -0.020113473360087127;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446612452718182174) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5545000000000001039) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.334577114427863975) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1827.40614998019123) ) ) {
                  result[0] += 0.018109933277680554;
                } else {
                  result[0] += 0.00067505304162449;
                }
              } else {
                result[0] += 0.044823368347092545;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04685000000000000969) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5218480000000002006) ) ) {
                    result[0] += 0.007211438094332777;
                  } else {
                    result[0] += 0.011787014803784445;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9352500000000000258) ) ) {
                    result[0] += 0.006883060170384606;
                  } else {
                    result[0] += -0.014019695825105054;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4223800000000000332) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4169520000000000448) ) ) {
                    result[0] += -0.006410675096561791;
                  } else {
                    result[0] += -0.024910573515072972;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01225000000000000221) ) ) {
                    result[0] += -0.014401020157311983;
                  } else {
                    result[0] += 0.006049552654064604;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08825000000000000899) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.256349206349208103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.985550935550937091) ) ) {
                    result[0] += 0.002484187632972344;
                  } else {
                    result[0] += -0.013303313140925564;
                  }
                } else {
                  result[0] += 0.027211391799667035;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)274.1091215662196987) ) ) {
                  result[0] += 0.011409705763712872;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2274.959778437426849) ) ) {
                    result[0] += -0.019529491184381045;
                  } else {
                    result[0] += 0.006206050044626753;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9917694079393036821) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5412680000000000824) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06340000000000002578) ) ) {
                    result[0] += 0.01262965383445917;
                  } else {
                    result[0] += 0.00299711266147044;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.77783929136349528) ) ) {
                    result[0] += 0.00790271888168281;
                  } else {
                    result[0] += 0.024199205410926877;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.923563777994157897) ) ) {
                  result[0] += 0.008098537412977405;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.781746031746032521) ) ) {
                    result[0] += -0.00950351152496002;
                  } else {
                    result[0] += 0.0028445973770792614;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)59.95123152709360426) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17224.94728213532289) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7043500000000001426) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6917500000000001981) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5056465000000001098) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2469500000000000306) ) ) {
                    result[0] += -0.009386366662897747;
                  } else {
                    result[0] += -0.0013924554981786645;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4385500000000000509) ) ) {
                    result[0] += 0.00957152903802726;
                  } else {
                    result[0] += -0.0009235822721592023;
                  }
                }
              } else {
                result[0] += 0.020401212343464373;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2449000000000000343) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4820105000000000639) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7841500000000001247) ) ) {
                    result[0] += -0.01006330209897892;
                  } else {
                    result[0] += -0.02017391937622131;
                  }
                } else {
                  result[0] += 0.012431323550229542;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5464955000000001339) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4621460000000000568) ) ) {
                    result[0] += -0.021907368086328777;
                  } else {
                    result[0] += -0.007263016058581336;
                  }
                } else {
                  result[0] += -0.03007172483495726;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.193950000000000039) ) ) {
              result[0] += 0.027746224901072893;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)42.69862018881627108) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.35571587125416571) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)22454.51531968933341) ) ) {
                    result[0] += 0.015262714779641084;
                  } else {
                    result[0] += -0.0015760454567942512;
                  }
                } else {
                  result[0] += -0.018697425425060688;
                }
              } else {
                result[0] += 0.01244858493874622;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7238223757163882999) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4833440790887599814) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596815205881915278) ) ) {
                result[0] += -0.015058548031538147;
              } else {
                result[0] += -0.003370092529095539;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1733500000000000318) ) ) {
                result[0] += -0.00882395764537254;
              } else {
                result[0] += -0.016456836249798962;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1387.236520179336139) ) ) {
              result[0] += -0.00623066945786868;
            } else {
              result[0] += 0.001173632704661132;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8541666666666668517) ) ) {
          result[0] += -0.019453995128003405;
        } else {
          result[0] += -0.009610896680552367;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.14135254988913815) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.757297000000000109) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2.079441541679836192) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.655630936227951544) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004150000000000000043) ) ) {
                  result[0] += 0.002896877274072622;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09425000000000001432) ) ) {
                    result[0] += 0.016062842537493547;
                  } else {
                    result[0] += 0.0075590164474730985;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7069310000000000871) ) ) {
                  result[0] += -0.006003129775234851;
                } else {
                  result[0] += 0.002544202570658347;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09005480525100587053) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.897750673214003925) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2486.18702816013456) ) ) {
                    result[0] += 0.0011480346225085163;
                  } else {
                    result[0] += 0.013959651790586284;
                  }
                } else {
                  result[0] += -0.017246325513838905;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6913850000000000273) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.75378787878788067) ) ) {
                    result[0] += 0.010812239138721067;
                  } else {
                    result[0] += 0.019548101967662827;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4275000000000000466) ) ) {
                    result[0] += 0.014987455601239324;
                  } else {
                    result[0] += 0.009158637512224002;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.369694397283531817) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.43921568627451535) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.81114130434783149) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8830260000000000886) ) ) {
                    result[0] += 0.014353933711973028;
                  } else {
                    result[0] += 0.017115191046836568;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4470.737490760877336) ) ) {
                    result[0] += 0.006294072940064476;
                  } else {
                    result[0] += 0.014318296497854294;
                  }
                }
              } else {
                result[0] += 0.02578824144606386;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2565500000000000558) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8312500000000001554) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04025000000000000105) ) ) {
                    result[0] += 0.015344437247161372;
                  } else {
                    result[0] += 0.025686246244120074;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.48254401942926783) ) ) {
                    result[0] += 0.006439211617362632;
                  } else {
                    result[0] += 0.017641590758418216;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.7467948717948758) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8501325000000000687) ) ) {
                    result[0] += 0.004498797136204051;
                  } else {
                    result[0] += 0.017011549050621244;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4913.352940143695378) ) ) {
                    result[0] += 0.0301442080009869;
                  } else {
                    result[0] += 0.01798106185067079;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5463500000000001133) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.752141886213528843) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3281000000000000028) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6617.041694952862599) ) ) {
                  result[0] += -0.016945564174503658;
                } else {
                  result[0] += -0.0006256619118875483;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.35768025078370158) ) ) {
                  result[0] += 0.01896448168389349;
                } else {
                  result[0] += 0.00011397167596039752;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)235.0476190476190652) ) ) {
                result[0] += 0.02587564012859037;
              } else {
                result[0] += 0.008779645314238029;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6795500000000002094) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)153.3133971291866544) ) ) {
                result[0] += -0.005673809369626608;
              } else {
                result[0] += -0.015388067566995626;
              }
            } else {
              result[0] += 0.009861124771710382;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4151215000000000876) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.801734104046245122) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3256400000000000405) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2401350000000000151) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6089500000000001023) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2110000000000000209) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1252.454359223710526) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.03235294117647136) ) ) {
                    result[0] += -0.006819304264467309;
                  } else {
                    result[0] += 0.008374847850143044;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1972740000000000327) ) ) {
                    result[0] += -0.021122873131034;
                  } else {
                    result[0] += -0.005317197899743742;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.725601914823043037) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.495352833984574914) ) ) {
                    result[0] += 0.005591804929461984;
                  } else {
                    result[0] += 0.014077029436927088;
                  }
                } else {
                  result[0] += -0.013544294856014069;
                }
              }
            } else {
              result[0] += 0.01139048008558541;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6804500000000001103) ) ) {
                result[0] += 0.003756634443627184;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8903500000000000858) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
                    result[0] += -0.0027418547232632294;
                  } else {
                    result[0] += -0.009838788519133772;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7708333333333333703) ) ) {
                    result[0] += -0.008426713487897;
                  } else {
                    result[0] += -0.01825473169610646;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07571443317376934379) ) ) {
                result[0] += 0.0018803156922122415;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                  result[0] += -0.008796932762021223;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2836.592125003699493) ) ) {
                    result[0] += -0.028227203594437728;
                  } else {
                    result[0] += -0.018080921735820432;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3953.814167494189405) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04565000000000000308) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2128690457793445678) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.325338167619579455) ) ) {
                  result[0] += 0.0013803012144273335;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2593.286319653105238) ) ) {
                    result[0] += -0.02042432683063337;
                  } else {
                    result[0] += -0.010860920713379595;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6715500000000002023) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3066040000000000432) ) ) {
                    result[0] += -0.0029523940442797605;
                  } else {
                    result[0] += -0.01398408136128707;
                  }
                } else {
                  result[0] += 0.016530930359579383;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5735500000000001153) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)842.4304686098781758) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)753.7197460358141825) ) ) {
                    result[0] += 0.0004058894020354922;
                  } else {
                    result[0] += 0.019414220946872646;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.819347319347319747) ) ) {
                    result[0] += -0.0009493275189476411;
                  } else {
                    result[0] += -0.010281179624404817;
                  }
                }
              } else {
                result[0] += -0.023432991918718556;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1903887996092470669) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3191480000000000428) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.13339920948616779) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1207048891313476507) ) ) {
                    result[0] += 0.007031593710631982;
                  } else {
                    result[0] += -0.014203406450594935;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279657701681118087) ) ) {
                    result[0] += -0.0011567061732996574;
                  } else {
                    result[0] += 0.010665184983386693;
                  }
                }
              } else {
                result[0] += -0.014283404475736294;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.593650000000000122) ) ) {
                  result[0] += 0.008720135244750953;
                } else {
                  result[0] += 0.027822492653992167;
                }
              } else {
                result[0] += 0.0036559109638657676;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.332482993197279697) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.49775381850854217) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06340000000000002578) ) ) {
                  result[0] += -0.004045236502654227;
                } else {
                  result[0] += -0.015198470255876763;
                }
              } else {
                result[0] += 0.004353906892588128;
              }
            } else {
              result[0] += 0.010896532895040017;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.775681341719080208) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3651455000000000672) ) ) {
                result[0] += -0.010690707146029281;
              } else {
                result[0] += -0.02013658433303521;
              }
            } else {
              result[0] += -0.00017687246207542898;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.245196219089809153) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6017000000000000126) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.81114130434783149) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2293491515996514407) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1941.045842846070173) ) ) {
                    result[0] += 0.017651442129709517;
                  } else {
                    result[0] += -0.0023262937154334205;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3369500000000000273) ) ) {
                    result[0] += -0.00018625261082887005;
                  } else {
                    result[0] += 0.008286915492987695;
                  }
                }
              } else {
                result[0] += 0.03353522682857078;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.86337543053961596) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007150000000000000973) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.528116531165311986) ) ) {
                    result[0] += -0.0026512918082603524;
                  } else {
                    result[0] += -0.014909915039960702;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                    result[0] += 0.0018916630681029667;
                  } else {
                    result[0] += -0.004549516837242132;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1168500000000000094) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3902.354245376167455) ) ) {
                    result[0] += 0.016393323697846966;
                  } else {
                    result[0] += 0.00416225857630085;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.552403100775196165) ) ) {
                    result[0] += -0.021299263737926812;
                  } else {
                    result[0] += 0.0019371341534123081;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04495000000000001078) ) ) {
              result[0] += -0.01933936339592525;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.076190476190476808) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3858855000000000479) ) ) {
                  result[0] += -0.005342101195796936;
                } else {
                  result[0] += 0.005618437844225426;
                }
              } else {
                result[0] += -0.013418904149493028;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2758315000000000627) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8541666666666668517) ) ) {
            result[0] += -0.007736489393811161;
          } else {
            result[0] += 0.012419087880182028;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.82683658170914853) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
              result[0] += -0.008654077540623147;
            } else {
              result[0] += -0.01608770194408423;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.945195195195196902) ) ) {
              result[0] += 0.0033316890272762157;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.24613422604814517) ) ) {
                result[0] += 0.003952774938459319;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.04557724252491901) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3188822082018960002) ) ) {
                    result[0] += -0.01363071068535099;
                  } else {
                    result[0] += 0.0032324637904754335;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.33573141486810876) ) ) {
                    result[0] += -0.005200165410127477;
                  } else {
                    result[0] += -0.007682900341527969;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4275000000000000466) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7449.396245625598567) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4844.061872758970821) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4470.737490760877336) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5908000000000001029) ) ) {
                    result[0] += -0.005333640050010512;
                  } else {
                    result[0] += -0.009458356820892513;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3292335000000000678) ) ) {
                    result[0] += -0.001168143267247136;
                  } else {
                    result[0] += 0.027386806815682493;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.46688034188034422) ) ) {
                  result[0] += 0.0048860344315382635;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2367000000000000492) ) ) {
                    result[0] += -0.008187590751808867;
                  } else {
                    result[0] += -0.015586336189408375;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.77500000000000568) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.0225430597771048) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3269880000000000564) ) ) {
                    result[0] += -0.009628136500559263;
                  } else {
                    result[0] += 0.0028789930343891853;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5251500000000001167) ) ) {
                    result[0] += -0.004425774884959568;
                  } else {
                    result[0] += 0.02706433542739311;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3558790000000000564) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2110000000000000209) ) ) {
                    result[0] += -0.004592178944565591;
                  } else {
                    result[0] += -0.010794297563294142;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.410450000000000037) ) ) {
                    result[0] += 0.021133387986447576;
                  } else {
                    result[0] += -0.0024563767859740204;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2016500000000000237) ) ) {
              result[0] += 0.027560476349920034;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.94076923076924146) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8923726800623609234) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1852970055032208962) ) ) {
                    result[0] += 0.014839151083230966;
                  } else {
                    result[0] += 0.0032600220305755608;
                  }
                } else {
                  result[0] += -0.019024082906041215;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8194500000000001227) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.36507936507936734) ) ) {
                    result[0] += -0.021635321799003755;
                  } else {
                    result[0] += -0.006043552064789097;
                  }
                } else {
                  result[0] += 0.010502732782335582;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1245500000000000079) ) ) {
            result[0] += -0.019080190352176306;
          } else {
            result[0] += -0.012045758192947138;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6323505000000001486) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.32900432900433074) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)59.79870609904083523) ) ) {
              result[0] += 0.0017916537099257818;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5241315000000000834) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7885500000000000842) ) ) {
                  result[0] += -0.008632662985552635;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4559570000000000567) ) ) {
                    result[0] += -0.013750262104568964;
                  } else {
                    result[0] += -0.020557102721897598;
                  }
                }
              } else {
                result[0] += -0.0001050274371761397;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5164445000000000841) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)657.9858817255186523) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.63927801724138078) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1120500000000000107) ) ) {
                    result[0] += -0.0018830024755746744;
                  } else {
                    result[0] += 0.005044080940351025;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2244500000000000106) ) ) {
                    result[0] += 0.0021724933325136977;
                  } else {
                    result[0] += -0.01307850298863741;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.920526315789475191) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6022642703829196309) ) ) {
                    result[0] += 0.005430306632622427;
                  } else {
                    result[0] += -0.013867408921905066;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
                    result[0] += -0.003031749599029031;
                  } else {
                    result[0] += 0.004890975276734999;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5075500000000000567) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3347.459141515674219) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8809500000000000108) ) ) {
                    result[0] += 0.0060863538651202646;
                  } else {
                    result[0] += -0.005671021208239004;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5309975000000001222) ) ) {
                    result[0] += 0.01559960214605334;
                  } else {
                    result[0] += 0.007976106420106792;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5552500000000001323) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6872500000000001386) ) ) {
                    result[0] += -0.0073842645095288225;
                  } else {
                    result[0] += -0.0239531016164789;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2364.153332471118119) ) ) {
                    result[0] += 0.014708291361531386;
                  } else {
                    result[0] += 0.0007280544253525585;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.244758237056055705) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.274781071744195637) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8006849315068494954) ) ) {
                result[0] += 0.0066138337695349995;
              } else {
                result[0] += 0.0016008835035345745;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.4281725597490329) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06340000000000002578) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04195000000000000812) ) ) {
                    result[0] += 0.0024964794437405827;
                  } else {
                    result[0] += -0.009760571285215125;
                  }
                } else {
                  result[0] += -0.018164612489452402;
                }
              } else {
                result[0] += 0.007109871680259335;
              }
            }
          } else {
            result[0] += -0.02156926180649269;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0406573266865800434) ) ) {
          result[0] += 0.015076300088868679;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.79220779220780457) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12609.96159794874438) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.92403846153846558) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.78049759229535454) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4417500000000000315) ) ) {
                    result[0] += -0.012780350494415026;
                  } else {
                    result[0] += -0.00257966300810511;
                  }
                } else {
                  result[0] += -0.02267183432254812;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1245500000000000079) ) ) {
                  result[0] += 0.015489829195983535;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2703.500010395391655) ) ) {
                    result[0] += -0.010068463906244855;
                  } else {
                    result[0] += 0.0010732435382875551;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5885500000000001286) ) ) {
                result[0] += 0.02679382304979868;
              } else {
                result[0] += 0.0009604672678678579;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5340500000000001357) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3874000000000000221) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4463295000000000456) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)13301.51307842540518) ) ) {
                    result[0] += -0.010008768286598477;
                  } else {
                    result[0] += -0.017161426678068255;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.68322981366461022) ) ) {
                    result[0] += -0.014919824726411698;
                  } else {
                    result[0] += -0.0008565358824924884;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3097675543089600247) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5329385000000000927) ) ) {
                    result[0] += -0.01586630093075039;
                  } else {
                    result[0] += -0.02605664401249766;
                  }
                } else {
                  result[0] += -0.010154641276226587;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5647000000000000908) ) ) {
                result[0] += 0.010450474418725965;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.549626000000000059) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.343528074243838577) ) ) {
                    result[0] += -0.013802336371622778;
                  } else {
                    result[0] += -0.0035732753179613537;
                  }
                } else {
                  result[0] += 0.005787090409285598;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1416500000000000259) ) ) {
          result[0] += -0.015962406593354284;
        } else {
          result[0] += -0.007825106407112694;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.30178571428571566) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7711755000000001248) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2775211666417710665) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1474839081354617498) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08955000000000001847) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.794786096256686392) ) ) {
                    result[0] += 0.007553980001218695;
                  } else {
                    result[0] += 0.011698844037555084;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9508000000000000895) ) ) {
                    result[0] += 0.007598812098230187;
                  } else {
                    result[0] += -0.006888771158075696;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.89818809318378356) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1821500000000000341) ) ) {
                    result[0] += 0.015122436399497443;
                  } else {
                    result[0] += 0.006606891046000457;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6445500000000000673) ) ) {
                    result[0] += 0.027988050234664056;
                  } else {
                    result[0] += 0.014167337063342923;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.17005163511187682) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7356605000000001615) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7554835062195935924) ) ) {
                    result[0] += 0.008756857879689727;
                  } else {
                    result[0] += 0.0029800404118280497;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2.079441541679836192) ) ) {
                    result[0] += 0.00808685135171704;
                  } else {
                    result[0] += 0.016344919621224623;
                  }
                }
              } else {
                result[0] += -0.0037910613125385242;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8809500000000000108) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.48254401942926783) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2626500000000001056) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.319805194805195203) ) ) {
                    result[0] += 0.013061662653567268;
                  } else {
                    result[0] += 0.018755214881524086;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
                    result[0] += 0.011271425654541402;
                  } else {
                    result[0] += -0.0021588393904319754;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3506500000000000727) ) ) {
                  result[0] += 0.017946755160232447;
                } else {
                  result[0] += 0.024096320674373266;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1541.330699544382924) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01755000000000000657) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1094.551388389202884) ) ) {
                    result[0] += 0.007355291318954141;
                  } else {
                    result[0] += 0.0016649644443330928;
                  }
                } else {
                  result[0] += 0.014766568353450525;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009050000000000002487) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.641839080459782) ) ) {
                    result[0] += 0.013920586274903926;
                  } else {
                    result[0] += 0.021798132430168222;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01995000000000000592) ) ) {
                    result[0] += 0.001986781653347003;
                  } else {
                    result[0] += 0.011752074217603256;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.184936040256943768) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1753821899233260206) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355721953891439735) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)158.6222527472527872) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3281000000000000028) ) ) {
                    result[0] += 0.013458588962890964;
                  } else {
                    result[0] += 0.0024106342718060664;
                  }
                } else {
                  result[0] += -0.009043273189941263;
                }
              } else {
                result[0] += 0.026309043676770102;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6402500000000000968) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7219650000000000789) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2835000000000000298) ) ) {
                    result[0] += -0.006859118704730843;
                  } else {
                    result[0] += 0.002335294553024611;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4613500000000000933) ) ) {
                    result[0] += 0.01342934881528036;
                  } else {
                    result[0] += -0.001816019521463013;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7138500000000000956) ) ) {
                  result[0] += -0.014864674311844508;
                } else {
                  result[0] += -0.004234056218466499;
                }
              }
            }
          } else {
            result[0] += 0.018894489288491387;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4151215000000000876) ) ) {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2903305000000001024) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1705100000000000227) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.365726227795193815) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.501700680272109345) ) ) {
              result[0] += -0.007559943265623935;
            } else {
              result[0] += 0.0047656667703020695;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.41754258789416632) ) ) {
              result[0] += -0.011890079876357172;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
                result[0] += 0.00032407686890167356;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1112685000000000063) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3238000000000000322) ) ) {
                    result[0] += -0.005253690000461962;
                  } else {
                    result[0] += -0.006821529611549417;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2624768466104180908) ) ) {
                    result[0] += -0.004528373043655794;
                  } else {
                    result[0] += -0.006824541409833531;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2134500000000000564) ) ) {
            result[0] += 0.001200351983690601;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9421.605627117181939) ) ) {
                result[0] += -0.008541256759389883;
              } else {
                result[0] += -0.005316874288923805;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02825000000000000427) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3653893359693760057) ) ) {
                  result[0] += -0.019498384269234854;
                } else {
                  result[0] += -0.01031073480538207;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0734500000000000014) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)22454.51531968933341) ) ) {
                    result[0] += 0.002994444114719721;
                  } else {
                    result[0] += -0.01039508376982221;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                    result[0] += -0.008985558906083936;
                  } else {
                    result[0] += -0.01666678935697075;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.238734978718284252) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7841500000000001247) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4375000000000000555) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2065670000000000284) ) ) {
                result[0] += -0.007266205487390432;
              } else {
                result[0] += -0.010832929716788328;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01995000000000000592) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.35238095238095468) ) ) {
                  result[0] += 0.011326728680463995;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1801279406462452659) ) ) {
                    result[0] += 0.003461269218068162;
                  } else {
                    result[0] += -0.009986054456998943;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1326500000000000179) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2427990000000000148) ) ) {
                    result[0] += 0.010815400652993763;
                  } else {
                    result[0] += 0.03087106193365086;
                  }
                } else {
                  result[0] += -0.012902653041237366;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004150000000000000043) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8865000000000000657) ) ) {
                  result[0] += 0.0001405783893060451;
                } else {
                  result[0] += -0.008511347671931025;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8488500000000001044) ) ) {
                  result[0] += 0.0030051989698783167;
                } else {
                  result[0] += 0.013002146735266073;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10398.26697253586644) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.39148936170214199) ) ) {
                  result[0] += 0.015429310754515046;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08390237751272640321) ) ) {
                    result[0] += 0.0003866478347024042;
                  } else {
                    result[0] += -0.007994509988581693;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                  result[0] += 0.0013860186886906743;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
                    result[0] += -0.006742770165231919;
                  } else {
                    result[0] += -0.014228740751022633;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.754650000000000154) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9884056996908187065) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)44505.14021809133556) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.67261904761906521) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)14930.12114189812746) ) ) {
                    result[0] += -0.0049436118295524785;
                  } else {
                    result[0] += 0.007249624866555045;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1131.259530250802754) ) ) {
                    result[0] += 0.001118116583118434;
                  } else {
                    result[0] += -0.008993847331509685;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5860500000000000709) ) ) {
                  result[0] += -0.008063377387955062;
                } else {
                  result[0] += 0.016573529243013155;
                }
              }
            } else {
              result[0] += -0.016491915370732368;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4417500000000000315) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04565000000000000308) ) ) {
                result[0] += -0.02129418558785777;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8216500000000001025) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.08578431372549744) ) ) {
                    result[0] += -0.0008089677820057418;
                  } else {
                    result[0] += -0.009622403583997798;
                  }
                } else {
                  result[0] += -0.015351849046829348;
                }
              }
            } else {
              result[0] += -0.02432001194522691;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.03591337907375802) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7238223757163882999) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.28421457482372148) ) ) {
            result[0] += -0.015330926719937105;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6791288143489402351) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1294500000000000373) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3574970000000000092) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1120500000000000107) ) ) {
                    result[0] += -0.0011224047667482528;
                  } else {
                    result[0] += -0.019656893116963475;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)951.9637181435929278) ) ) {
                    result[0] += -0.0025650532929416088;
                  } else {
                    result[0] += 0.005962137356547585;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5749500000000000721) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
                    result[0] += 0.020555296920601467;
                  } else {
                    result[0] += 0.005476554080398049;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6917500000000001981) ) ) {
                    result[0] += -0.0058168755122423865;
                  } else {
                    result[0] += 0.00781875075553081;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)842.4304686098781758) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3828.868654278664962) ) ) {
                  result[0] += 0.028275807472277537;
                } else {
                  result[0] += 0.014137277623035231;
                }
              } else {
                result[0] += 0.0012870879317524353;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.522532894736842835) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += -0.013918156660172975;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05205000000000000598) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-113.0432554252483754) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1617.156145847696735) ) ) {
                    result[0] += -7.754037116129992e-07;
                  } else {
                    result[0] += -0.013037469760169935;
                  }
                } else {
                  result[0] += 0.00789894228015643;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3.727359974682000754) ) ) {
                  result[0] += -0.004374281350645957;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1524500000000000022) ) ) {
                    result[0] += 0.012107615105644353;
                  } else {
                    result[0] += 0.002023017794012173;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5330.906933113767991) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6115.31175970588356) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4099500000000000921) ) ) {
                  result[0] += -0.01564417464121711;
                } else {
                  result[0] += 0.0049866466287607466;
                }
              } else {
                result[0] += 0.01357226548641819;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3050000000000001044) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.154380165289259352) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9084995485512600277) ) ) {
                    result[0] += 0.007098514815900889;
                  } else {
                    result[0] += -0.009509896781027963;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1762000000000000233) ) ) {
                    result[0] += -0.010043366502002727;
                  } else {
                    result[0] += -0.015951521216442797;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3616605000000000514) ) ) {
                  result[0] += -0.01674929010684667;
                } else {
                  result[0] += -0.031073196739550325;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4959959919839679876) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5908000000000001029) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10398.26697253586644) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3379937171972570709) ) ) {
                result[0] += 0.017274469818153827;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3728855000000000364) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.79423076923077573) ) ) {
                    result[0] += 0.008277152750771786;
                  } else {
                    result[0] += -0.007966971103611262;
                  }
                } else {
                  result[0] += 0.007423178023201208;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3396.334171538851024) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5181500000000001105) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05545000000000000623) ) ) {
                    result[0] += -0.000562726746085401;
                  } else {
                    result[0] += 0.02489521843545189;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3100855000000000694) ) ) {
                    result[0] += 0.019814960258664808;
                  } else {
                    result[0] += -0.00015894811707171523;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7419.454310499565509) ) ) {
                  result[0] += 0.03498553090258889;
                } else {
                  result[0] += 0.01567636256349613;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.638350000000000084) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11354.96555769008955) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.78049759229535454) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3411105000000000387) ) ) {
                    result[0] += -0.0044497308098530395;
                  } else {
                    result[0] += 0.01662567342483541;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3306920000000000415) ) ) {
                    result[0] += -0.00028514336217373584;
                  } else {
                    result[0] += -0.013701221165226797;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8551.001968962680621) ) ) {
                  result[0] += -0.027197749729643093;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3980730000000000657) ) ) {
                    result[0] += -0.008581077240969792;
                  } else {
                    result[0] += -0.025699498532402148;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4010.052697610588893) ) ) {
                  result[0] += -0.0034500413574817513;
                } else {
                  result[0] += 0.027737649652938;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2428.141113281569233) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105614129712844229) ) ) {
                    result[0] += -0.0014193907310529172;
                  } else {
                    result[0] += -0.012077533409604532;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.76676186590507811) ) ) {
                    result[0] += 0.013010399934300303;
                  } else {
                    result[0] += -0.0026238701155322235;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2723500000000000365) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6056.364809153568785) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.67136150234741976) ) ) {
                result[0] += 0.006573699835421543;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7750.875101487182292) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4277.468016646671458) ) ) {
                    result[0] += -0.010499892537129215;
                  } else {
                    result[0] += -0.0049044909824118976;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1349.650058195245947) ) ) {
                    result[0] += -0.012173103845146234;
                  } else {
                    result[0] += -0.02128511103548978;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3558.496385149145226) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)753.7197460358141825) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8226431302510440746) ) ) {
                    result[0] += -0.016260609070137766;
                  } else {
                    result[0] += 0.0017814098844534457;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04785000000000001058) ) ) {
                    result[0] += -0.013104620339095416;
                  } else {
                    result[0] += 0.010098761428607578;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6339019286269085285) ) ) {
                    result[0] += 0.00385083491425545;
                  } else {
                    result[0] += -0.01177415977691352;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.15454545454545965) ) ) {
                    result[0] += -0.030793285638220314;
                  } else {
                    result[0] += -0.005415289218323394;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3056000000000000383) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-28064.69142083861152) ) ) {
                  result[0] += 0.010615710329131871;
                } else {
                  result[0] += -0.012483477186570646;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1017.140349237611076) ) ) {
                  result[0] += 0.004284669303692118;
                } else {
                  result[0] += 0.029823841571004043;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4277.468016646671458) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3037930000000000352) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.81114130434783149) ) ) {
                    result[0] += -0.022582771813887636;
                  } else {
                    result[0] += -0.009367335849302253;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5327191796258734513) ) ) {
                    result[0] += -0.018108475840079356;
                  } else {
                    result[0] += -0.004969591477100312;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.77500000000000568) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5545000000000001039) ) ) {
                    result[0] += 0.010161993257511782;
                  } else {
                    result[0] += -0.0031519046422522107;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3914215000000000333) ) ) {
                    result[0] += -0.0024878399844901846;
                  } else {
                    result[0] += -0.01796018620698967;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.620622000000000118) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.18333333333335133) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.94076923076924146) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2551729739349475334) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7841500000000001247) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12314.72915242650379) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.81114130434783149) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2197.008210486540975) ) ) {
                    result[0] += 0.004585781196701254;
                  } else {
                    result[0] += 0.014315720613674579;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1827.40614998019123) ) ) {
                    result[0] += 0.011671187085569894;
                  } else {
                    result[0] += 0.022609731078423803;
                  }
                }
              } else {
                result[0] += -0.005480347431671255;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1558403046997211827) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8285500000000000087) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1205712985627314521) ) ) {
                    result[0] += 0.012157275865694261;
                  } else {
                    result[0] += 0.021448397206056936;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.15909090909091361) ) ) {
                    result[0] += 0.008495040493360638;
                  } else {
                    result[0] += 0.0016402550616991685;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8588500000000001133) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03025000000000000258) ) ) {
                    result[0] += -0.0031883973169139013;
                  } else {
                    result[0] += 0.005325968265871896;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1963.811816770965606) ) ) {
                    result[0] += 0.0004916306864579226;
                  } else {
                    result[0] += -0.03096947184764728;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.8738636363636445) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1415.504208660328004) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.96720430107527378) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.56202046035805964) ) ) {
                    result[0] += 0.003487178450527876;
                  } else {
                    result[0] += 0.022089128164487715;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1466500000000000303) ) ) {
                    result[0] += -0.004034890120601351;
                  } else {
                    result[0] += 0.003562125650973328;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.66280257606040438) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02505000000000000282) ) ) {
                    result[0] += 0.00753760649323677;
                  } else {
                    result[0] += -0.0013894400247099576;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01505000000000000261) ) ) {
                    result[0] += -0.01597481502569189;
                  } else {
                    result[0] += -0.002215891832042276;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-31307.28118192806505) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.03333333333333854) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9640.380337645368854) ) ) {
                    result[0] += 0.008680370709340747;
                  } else {
                    result[0] += 0.024663815562371846;
                  }
                } else {
                  result[0] += -0.0061910284156099825;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19615.56936635864986) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.47405150000000007) ) ) {
                    result[0] += -0.010963543108903441;
                  } else {
                    result[0] += -0.020850633178739343;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4969.322965716292856) ) ) {
                    result[0] += -0.012389530396306686;
                  } else {
                    result[0] += 0.004363495629734246;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8903500000000000858) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1647500000000000353) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1774491924585733515) ) ) {
                result[0] += 0.02034535793931341;
              } else {
                result[0] += 0.03868125698369236;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4660265000000000657) ) ) {
                result[0] += 0.0008134080174649574;
              } else {
                result[0] += 0.015115538953332862;
              }
            }
          } else {
            result[0] += -0.0010155899186024457;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10923.85965081359973) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4725700000000001011) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9247500000000000719) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3630500000000000393) ) ) {
                result[0] += 0.0012785323673358772;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500000000000426) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4357900000000000662) ) ) {
                    result[0] += 0.004311831142584284;
                  } else {
                    result[0] += -0.015634105760955398;
                  }
                } else {
                  result[0] += -0.017770392072698732;
                }
              }
            } else {
              result[0] += -0.02619716817796998;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4863.937132689356076) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4103.297752214534739) ) ) {
                result[0] += 0.003995316575770996;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4871705000000000618) ) ) {
                  result[0] += 0.0043371762814839775;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5988500000000001044) ) ) {
                    result[0] += -0.004739692174513821;
                  } else {
                    result[0] += -0.016672453970496905;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.67261904761906521) ) ) {
                  result[0] += 0.013083984257868024;
                } else {
                  result[0] += -0.010123355378154175;
                }
              } else {
                result[0] += 0.020503133377904475;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5749500000000000721) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6149500000000001076) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)27856.34674737125533) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2088500000000000079) ) ) {
                  result[0] += -0.0035999907917943766;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5158500000000001418) ) ) {
                    result[0] += -0.00798491866661868;
                  } else {
                    result[0] += -0.016394974176790984;
                  }
                }
              } else {
                result[0] += -0.017200109562353856;
              }
            } else {
              result[0] += 0.004506480877462143;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1326500000000000179) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02475000000000000464) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9464500000000001245) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005650000000000001375) ) ) {
                    result[0] += 0.008511967262354144;
                  } else {
                    result[0] += -0.022044701101771414;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5190295000000001435) ) ) {
                    result[0] += 0.01655846902241953;
                  } else {
                    result[0] += 0.0018874261407051287;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)14505.7516322498559) ) ) {
                  result[0] += 0.004268626855295071;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13238.69636896185511) ) ) {
                    result[0] += 0.016954763647542954;
                  } else {
                    result[0] += 0.02923187935699157;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)217.929861111111137) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)29942.34890977981195) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12314.72915242650379) ) ) {
                    result[0] += -0.0054328961233874075;
                  } else {
                    result[0] += 0.003694673018027524;
                  }
                } else {
                  result[0] += 0.01624571313415379;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)306.1666666666666856) ) ) {
                  result[0] += -0.02018964677684211;
                } else {
                  result[0] += -0.008324461867062734;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-889.5839568061797991) ) ) {
          result[0] += -0.005002326539024894;
        } else {
          result[0] += -0.015012370955065312;
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7219650000000000789) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2565500000000000558) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3986689308614450034) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6695500000000000895) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6705900000000001304) ) ) {
                  result[0] += 0.010723317018824988;
                } else {
                  result[0] += 0.019439912011857387;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)16548.22517367959881) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9772000000000001796) ) ) {
                    result[0] += 0.008410350018092639;
                  } else {
                    result[0] += -0.001983215070694521;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.79220779220780457) ) ) {
                    result[0] += 0.010330580660710123;
                  } else {
                    result[0] += 0.021337734487263844;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.43863570109804861) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1217.027986566412437) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                    result[0] += 0.0038698626102972107;
                  } else {
                    result[0] += 0.0104406727419386;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5728500000000000814) ) ) {
                    result[0] += 0.016592581172541875;
                  } else {
                    result[0] += 0.007647514516575214;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12357.92113280423655) ) ) {
                  result[0] += 0.006444267472665626;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1151500000000000162) ) ) {
                    result[0] += -0.013982596660987908;
                  } else {
                    result[0] += 0.003992543063672292;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.5773524720893235) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9961447036101620522) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3630500000000000393) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.586317722681360287) ) ) {
                    result[0] += 0.00409790884797757;
                  } else {
                    result[0] += 0.022934990106111698;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5451500000000001345) ) ) {
                    result[0] += -0.0029479380252904596;
                  } else {
                    result[0] += 0.0072936964736810455;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6960285000000000499) ) ) {
                  result[0] += -0.009151754495163157;
                } else {
                  result[0] += 0.002165813206094206;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16089.25988885014704) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.0554917719096863) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)88.33421052631580039) ) ) {
                    result[0] += 0.004936889801214244;
                  } else {
                    result[0] += 0.012976126838309876;
                  }
                } else {
                  result[0] += -0.007485688300947555;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.446650000000000047) ) ) {
                  result[0] += -0.017962583782573857;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6794250000000000567) ) ) {
                    result[0] += -0.012567910544826486;
                  } else {
                    result[0] += -0.0015120647121552335;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7582.792457597500288) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.18820315011250699) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.63961038961039662) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9150000000000001465) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4959959919839679876) ) ) {
                    result[0] += 0.011675712650884339;
                  } else {
                    result[0] += 0.008158317611364733;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3115.942419799886466) ) ) {
                    result[0] += 0.0065682847968715164;
                  } else {
                    result[0] += 0.010902045474499352;
                  }
                }
              } else {
                result[0] += -0.002147585501554262;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04480044763955285531) ) ) {
                result[0] += 0.01991095889153777;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1821500000000000341) ) ) {
                  result[0] += 0.0031824495497176303;
                } else {
                  result[0] += 0.017176719312266917;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.757297000000000109) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9464500000000001245) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2274745869116796826) ) ) {
                  result[0] += -0.012923824466795703;
                } else {
                  result[0] += 0.005495404806812203;
                }
              } else {
                result[0] += 0.011017869023244874;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17824.9451882581634) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16406.66212384711616) ) ) {
                  result[0] += -0.0009898399664629767;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0734500000000000014) ) ) {
                    result[0] += 0.007086269304135776;
                  } else {
                    result[0] += 0.013910358559695983;
                  }
                }
              } else {
                result[0] += 0.014878496651384118;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4660265000000000657) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3689335000000000808) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.56776556776557285) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)26494.54584815848284) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2758315000000000627) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.239250000000000046) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7419.454310499565509) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2065670000000000284) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.46688034188034422) ) ) {
                    result[0] += -0.017089972035683004;
                  } else {
                    result[0] += -0.001909145336180924;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4613500000000000933) ) ) {
                    result[0] += 0.01685014605996303;
                  } else {
                    result[0] += 0.00028312209224348674;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2736000000000000099) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8809500000000000108) ) ) {
                    result[0] += -0.004127061958960343;
                  } else {
                    result[0] += -0.00819203073302189;
                  }
                } else {
                  result[0] += -0.020591591949653026;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3694.512900490842185) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19208.54084854814937) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3347.459141515674219) ) ) {
                    result[0] += -0.006744437938823819;
                  } else {
                    result[0] += 0.0038649308101167726;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.912662090007628102) ) ) {
                    result[0] += 0.00035716098750427494;
                  } else {
                    result[0] += -0.012589195455046819;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.154380165289259352) ) ) {
                  result[0] += 0.00621239690526794;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.79393939393940016) ) ) {
                    result[0] += -0.011935449733605543;
                  } else {
                    result[0] += 0.003918957693215083;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9207000000000000739) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08035000000000000475) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2458.081396306326042) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1647.715800020721645) ) ) {
                    result[0] += -0.003729460524372978;
                  } else {
                    result[0] += -0.011491632477652194;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7193500000000000449) ) ) {
                    result[0] += 0.0038674811720677505;
                  } else {
                    result[0] += -0.0027569220545123644;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1022500000000000214) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.74434389140271584) ) ) {
                    result[0] += 0.016553612855337786;
                  } else {
                    result[0] += 0.0040839884433229836;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.079059829059831443) ) ) {
                    result[0] += 0.001862072628648879;
                  } else {
                    result[0] += -0.0023761849308348167;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3544845000000000357) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.141604010025063065) ) ) {
                  result[0] += 0.005150312169431861;
                } else {
                  result[0] += -0.014990931072597326;
                }
              } else {
                result[0] += -0.025071355601887266;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.75378787878788067) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2598190000000000777) ) ) {
              result[0] += 0.007278936332319366;
            } else {
              result[0] += 0.01983784779323575;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.897150000000000003) ) ) {
              result[0] += 0.010935092103724535;
            } else {
              result[0] += -0.010200985094452313;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.76676186590507811) ) ) {
          result[0] += 0.0023570964241212745;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.21641156462585442) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)22454.51531968933341) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.33549783549783996) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2164470000000000283) ) ) {
                    result[0] += -0.0015297456046456696;
                  } else {
                    result[0] += -0.008939147735305892;
                  }
                } else {
                  result[0] += 0.010582981750445737;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6999500000000000721) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                    result[0] += -0.005864795481127639;
                  } else {
                    result[0] += -0.0161340311071582;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.02000000000000313) ) ) {
                    result[0] += 0.0012456449709720545;
                  } else {
                    result[0] += -0.008662462300501364;
                  }
                }
              }
            } else {
              result[0] += 0.006025435527321788;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.54474097331240401) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.83278388278389315) ) ) {
                result[0] += 0.01818512652125214;
              } else {
                result[0] += -0.007467975474120007;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9120.266636749798636) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7171.422813562979172) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.15564516129032668) ) ) {
                    result[0] += -0.010599698406270326;
                  } else {
                    result[0] += -0.006593764411684745;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.33161350844278559) ) ) {
                    result[0] += 0.010531344926399754;
                  } else {
                    result[0] += -0.005041324576574311;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.01063829787234383) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2663275000000000503) ) ) {
                    result[0] += -0.0025780140455800475;
                  } else {
                    result[0] += 0.02035959788914886;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8823.72194961022069) ) ) {
                    result[0] += 0.008907789671583842;
                  } else {
                    result[0] += -0.004590299265478592;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9645500000000001295) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.00735294117647456) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9681.136102375299743) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.13135000000000005) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3980730000000000657) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3895535000000000525) ) ) {
                  result[0] += 0.006896449465412371;
                } else {
                  result[0] += -0.007470057098835575;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.2011904761904777) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6445500000000000673) ) ) {
                    result[0] += 0.01614810217597564;
                  } else {
                    result[0] += 0.00414239304395723;
                  }
                } else {
                  result[0] += 0.027893997008461468;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.12245989304813776) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4540995000000000448) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6445500000000000673) ) ) {
                    result[0] += 0.0019288427158212227;
                  } else {
                    result[0] += 0.00908964499297393;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
                    result[0] += 0.002534618298455348;
                  } else {
                    result[0] += 0.027268751346032693;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)16548.22517367959881) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.79217479674796998) ) ) {
                    result[0] += -0.001681827681239502;
                  } else {
                    result[0] += -0.015640735760768142;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.33573141486810876) ) ) {
                    result[0] += 0.0012021629705650976;
                  } else {
                    result[0] += 0.015232786857849729;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.08644133644133678) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.4281725597490329) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2604.367943201571507) ) ) {
                  result[0] += 0.008846727845907133;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.326490713587487935) ) ) {
                    result[0] += 0.003274484616498525;
                  } else {
                    result[0] += -0.010779321527998643;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001950000000000000127) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4540995000000000448) ) ) {
                    result[0] += 0.0060476349481935155;
                  } else {
                    result[0] += 0.018722928105969365;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004150000000000000043) ) ) {
                    result[0] += -0.012061585627154576;
                  } else {
                    result[0] += 0.002122547569916945;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3190.817953366558413) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4732.095312547814501) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5273.494216348623922) ) ) {
                    result[0] += -0.0006863667035185;
                  } else {
                    result[0] += -0.014508665873272378;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5621000000000001551) ) ) {
                    result[0] += 0.011795835732860683;
                  } else {
                    result[0] += -0.0009680510160415359;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2703.412105777776105) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.994444444444445352) ) ) {
                    result[0] += -0.026805657864136974;
                  } else {
                    result[0] += -0.007484286000673558;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2494.752674487995591) ) ) {
                    result[0] += 0.008858976062952129;
                  } else {
                    result[0] += -0.0076908803538120254;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-114816.4915942720399) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)170.3440978838632134) ) ) {
              result[0] += 0.02718409785753893;
            } else {
              result[0] += -0.008101250183688706;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)140.9270833333333428) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10923.85965081359973) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5674000000000000155) ) ) {
                    result[0] += -0.004909817009447884;
                  } else {
                    result[0] += 0.008390562385528924;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4344000000000000639) ) ) {
                    result[0] += -0.014264564663624947;
                  } else {
                    result[0] += 0.002858567867176319;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5647000000000000908) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)13763.95786997891082) ) ) {
                    result[0] += 0.02195378840704149;
                  } else {
                    result[0] += 0.004575748173102649;
                  }
                } else {
                  result[0] += -0.014456562954492541;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-28911.59644960196238) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4011795000000000777) ) ) {
                  result[0] += -0.018920339825914942;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5089500000000001245) ) ) {
                    result[0] += -0.010498346414995356;
                  } else {
                    result[0] += -0.006163533332226494;
                  }
                }
              } else {
                result[0] += -0.004346829894120084;
              }
            }
          }
        }
      } else {
        result[0] += -0.02100110157345363;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6600000000000001421) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.04557724252491901) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3281000000000000028) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5771835000000001825) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-113.0432554252483754) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.8738636363636445) ) ) {
                  result[0] += -0.017054488220003088;
                } else {
                  result[0] += 0.0013637373965337542;
                }
              } else {
                result[0] += 0.005521084795778078;
              }
            } else {
              result[0] += -0.012881777163035726;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5896685000000000398) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)562.5854813206698282) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1626000000000000223) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.621024439236693482) ) ) {
                    result[0] += 0.0020510145665515586;
                  } else {
                    result[0] += -0.013761572124233642;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.005617977528091345) ) ) {
                    result[0] += 0.0034467931172633783;
                  } else {
                    result[0] += 0.020783016686764348;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3897500000000000409) ) ) {
                  result[0] += 0.022007865804768684;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.775681341719080208) ) ) {
                    result[0] += 0.004827155306914314;
                  } else {
                    result[0] += -0.0005835026947695009;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01225000000000000221) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6130430000000001156) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006750000000000001658) ) ) {
                    result[0] += 0.002024684975028593;
                  } else {
                    result[0] += -0.010510657962186783;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002750000000000000708) ) ) {
                    result[0] += 0.0024564480016153;
                  } else {
                    result[0] += 0.008557257457471148;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.650157000000000096) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.141604010025063065) ) ) {
                    result[0] += 0.006103161919519752;
                  } else {
                    result[0] += 0.010609612196631384;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02265000000000000346) ) ) {
                    result[0] += 0.011870960588027267;
                  } else {
                    result[0] += -0.0009412570411938469;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.07146908678389963) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7362500000000001821) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.38379705400982189) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.018205892088713149) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5388695000000001123) ) ) {
                    result[0] += 8.507241171088456e-06;
                  } else {
                    result[0] += 0.006310231195169416;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.005850000000000000165) ) ) {
                    result[0] += -0.011674387328315144;
                  } else {
                    result[0] += -0.0011961095101254997;
                  }
                }
              } else {
                result[0] += 0.01579877382658423;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3694.512900490842185) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5203.159600494148435) ) ) {
                  result[0] += 0.0022109413335538895;
                } else {
                  result[0] += -0.01287973438614052;
                }
              } else {
                result[0] += -0.025915176085546433;
              }
            }
          } else {
            result[0] += 0.01734672271268137;
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4705165000000000597) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1846000000000000141) ) ) {
            result[0] += 0.003850448030697666;
          } else {
            result[0] += 0.02053895055441785;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7419.454310499565509) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1647500000000000353) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)59.95123152709360426) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5771835000000001825) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5309975000000001222) ) ) {
                    result[0] += 0.019851653697911784;
                  } else {
                    result[0] += -0.004959484781166191;
                  }
                } else {
                  result[0] += 0.0333554273170928;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.549626000000000059) ) ) {
                  result[0] += -0.005921240962979384;
                } else {
                  result[0] += 0.0039587844168385185;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4820105000000000639) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.92403846153846558) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5138.591951859688379) ) ) {
                    result[0] += -0.029086163480897265;
                  } else {
                    result[0] += -0.007730937389122298;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.09737269772481483) ) ) {
                    result[0] += 0.013484606595611933;
                  } else {
                    result[0] += -0.01157331988790979;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.69345238095239381) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.67375886524823159) ) ) {
                    result[0] += 0.001639810558638824;
                  } else {
                    result[0] += 0.01548035153626334;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16737.80440239057862) ) ) {
                    result[0] += -0.0009618571685668963;
                  } else {
                    result[0] += -0.011789710075561862;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6156880000000001241) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5412680000000000824) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7086000000000000076) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6317500000000001448) ) ) {
                    result[0] += -0.007080201537692703;
                  } else {
                    result[0] += 0.008142286838226768;
                  }
                } else {
                  result[0] += -0.023151431232098413;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4229000000000000536) ) ) {
                  result[0] += 0.024480481463019024;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4863.937132689356076) ) ) {
                    result[0] += -0.011649042147891801;
                  } else {
                    result[0] += 0.008353044964387971;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.00847457627119041) ) ) {
                result[0] += -0.029738190621358233;
              } else {
                result[0] += -0.01602896413288961;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.14135254988913815) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
          result[0] += -0.007369063631794446;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2.079441541679836192) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1.00000001800250948e-35) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
                  result[0] += 0.005702839567769826;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09255000000000000726) ) ) {
                    result[0] += 0.013315821031690994;
                  } else {
                    result[0] += 0.007746804990371102;
                  }
                }
              } else {
                result[0] += -0.0007152878830524561;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1639.659224807193368) ) ) {
                result[0] += 0.00202134922413102;
              } else {
                result[0] += -0.015744535481189245;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7069310000000000871) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.594626313305680831) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.319805194805195203) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9312315270935961342) ) ) {
                    result[0] += 0.011924782897753882;
                  } else {
                    result[0] += 0.00368205786867378;
                  }
                } else {
                  result[0] += -0.005556130853093345;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4761000000000000232) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.29760031471282566) ) ) {
                    result[0] += 0.008466760565920854;
                  } else {
                    result[0] += 0.0220332723081526;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2490000000000000269) ) ) {
                    result[0] += 0.006988079406366776;
                  } else {
                    result[0] += 0.0014941280389419546;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4062500000000000555) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09255000000000000726) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1763.608542368433973) ) ) {
                    result[0] += 0.013176057321682772;
                  } else {
                    result[0] += 0.0036843814651256455;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.897750673214003925) ) ) {
                    result[0] += 0.013394818887955653;
                  } else {
                    result[0] += 0.021078381937706194;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)682.5859171509390535) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1360.735594309118596) ) ) {
                    result[0] += -0.001882107715036428;
                  } else {
                    result[0] += 0.006647963824148308;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7193500000000000449) ) ) {
                    result[0] += 0.010509288097552682;
                  } else {
                    result[0] += 0.007811795329239888;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-28911.59644960196238) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)391.1240740740741444) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)117.0555555555555713) ) ) {
              result[0] += 0.004354307431733913;
            } else {
              result[0] += 0.0149451166011494;
            }
          } else {
            result[0] += 0.0012101761110785239;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.645224719101126) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2192000000000000337) ) ) {
              result[0] += 0.008573217523603712;
            } else {
              result[0] += -0.0011998134878154728;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5236500000000000599) ) ) {
              result[0] += -0.0035251554541734834;
            } else {
              result[0] += -0.012541542078093276;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4660265000000000657) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3689335000000000808) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.270242914979758275) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2644870000000000831) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.715410573678290529) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.326140544518028541) ) ) {
              result[0] += -0.009607794008998798;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.167306000000000038) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.866661769027329054) ) ) {
                  result[0] += 0.003908471732392386;
                } else {
                  result[0] += -0.008615165549104143;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.35238095238095468) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.28421457482372148) ) ) {
                    result[0] += 0.002126661829304787;
                  } else {
                    result[0] += 0.01675950489499889;
                  }
                } else {
                  result[0] += -0.0031584452727861784;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2516630000000000256) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1526.154173473093351) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.15450928381962914) ) ) {
                  result[0] += -0.016996388760886175;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.45747126436781826) ) ) {
                    result[0] += 0.0050407594538831105;
                  } else {
                    result[0] += -0.008454169417027067;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.655630936227951544) ) ) {
                  result[0] += 0.004359536589243488;
                } else {
                  result[0] += -0.006234639042788101;
                }
              }
            } else {
              result[0] += -0.016852769871616442;
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2663275000000000503) ) ) {
            result[0] += 0.014144037893910524;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9917694079393036821) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9207000000000000739) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1080.464987976296243) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1661.374751008663452) ) ) {
                    result[0] += 0.0015779182701138811;
                  } else {
                    result[0] += 0.0103281670291124;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7290141514373503773) ) ) {
                    result[0] += -0.009773722218606666;
                  } else {
                    result[0] += 0.0037488819206689668;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04480044763955285531) ) ) {
                  result[0] += 0.0020476718821422616;
                } else {
                  result[0] += -0.016364704700449526;
                }
              }
            } else {
              result[0] += -0.011487111637053314;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.80322580645161779) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19954.67408175594392) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1962199642500267183) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8940500000000001224) ) ) {
                  result[0] += 0.02195823767122698;
                } else {
                  result[0] += 0.0021779842270786406;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.91806020066889715) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4274500000000000521) ) ) {
                    result[0] += -0.00595110961441999;
                  } else {
                    result[0] += 0.004771961264091416;
                  }
                } else {
                  result[0] += -0.020064260337297253;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4474500000000000699) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4385500000000000509) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5908139956411030402) ) ) {
                    result[0] += 0.008447578168958114;
                  } else {
                    result[0] += -0.002684451450229061;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4510084821850932069) ) ) {
                    result[0] += 0.03581378637361938;
                  } else {
                    result[0] += 0.0025693667512731327;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5806684019708098221) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3127769248817890424) ) ) {
                    result[0] += -0.003380327599964422;
                  } else {
                    result[0] += -3.390875823618154e-05;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6841668807075014236) ) ) {
                    result[0] += -0.01214431760961469;
                  } else {
                    result[0] += 0.007136559942763094;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09084425789999171774) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1801140000000000241) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02533779707363225178) ) ) {
                  result[0] += 0.0012632672610402198;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1086385441254854312) ) ) {
                    result[0] += -0.003872322516161324;
                  } else {
                    result[0] += -0.006633737797129416;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8112500000000001377) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)16548.22517367959881) ) ) {
                    result[0] += -0.01136002252521707;
                  } else {
                    result[0] += -0.01747540234634431;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24674.59819322649491) ) ) {
                    result[0] += -0.005047181076303635;
                  } else {
                    result[0] += -0.013698950318027831;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09356702444951102426) ) ) {
                result[0] += 0.011069834105272137;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3807664597650188831) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3544845000000000357) ) ) {
                    result[0] += -0.003101381579077704;
                  } else {
                    result[0] += 0.01336623032410942;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3356656060707096656) ) ) {
                    result[0] += -0.006354145511247078;
                  } else {
                    result[0] += -0.0036604383309488983;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2888525000000000675) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8215.850837031795891) ) ) {
              result[0] += -0.0002452032032431796;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11.87522710460594944) ) ) {
                result[0] += -0.004726144794180032;
              } else {
                result[0] += -0.011037970391314201;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3135840000000000294) ) ) {
              result[0] += -0.02003791551173103;
            } else {
              result[0] += -0.011728269793079511;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9645500000000001295) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4833440790887599814) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.593650000000000122) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.15833333333333854) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7224.572194877482616) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8334.031066467961864) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5573500000000001231) ) ) {
                    result[0] += 0.009776458235046677;
                  } else {
                    result[0] += 0.030583451067845126;
                  }
                } else {
                  result[0] += 0.03784804250383315;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3777078305615261811) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.72240143369175769) ) ) {
                    result[0] += 0.008242868364713638;
                  } else {
                    result[0] += 0.0265940398075848;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.88483844241923038) ) ) {
                    result[0] += 0.0012111330072354875;
                  } else {
                    result[0] += -0.012201384336708834;
                  }
                }
              }
            } else {
              result[0] += -0.008067957668053393;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1172585597165276133) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8588500000000001133) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09637116304413635703) ) ) {
                  result[0] += 0.003703737593066034;
                } else {
                  result[0] += 0.02365120689140848;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1051827870237245638) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02880243203506518621) ) ) {
                    result[0] += 0.015174802890299266;
                  } else {
                    result[0] += 0.0032752646941232285;
                  }
                } else {
                  result[0] += -0.009300617310584734;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4316910000000000469) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.02889784946237128) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2762.179861479253759) ) ) {
                    result[0] += -0.0013360503947646928;
                  } else {
                    result[0] += 0.006560086650575722;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3346.223713336835317) ) ) {
                    result[0] += -0.002294087736462116;
                  } else {
                    result[0] += -0.010865389849567565;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.48331479421579715) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.89818809318378356) ) ) {
                    result[0] += 0.003684234427324544;
                  } else {
                    result[0] += -0.00690487277175215;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2666.433655949607328) ) ) {
                    result[0] += 0.019484240560321706;
                  } else {
                    result[0] += 0.0033595622922370275;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1888209463138135757) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5728500000000000814) ) ) {
                result[0] += 0.0044627599570829955;
              } else {
                result[0] += -0.002394894718896471;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22333.51733967311884) ) ) {
                result[0] += 0.0020051090730069114;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1597878988880053475) ) ) {
                  result[0] += 0.02910143198444638;
                } else {
                  result[0] += 0.012029004893067654;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.0350985221674911) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2494.752674487995591) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)589.1944314064304535) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.63927801724138078) ) ) {
                    result[0] += 0.0017817514354646112;
                  } else {
                    result[0] += -0.014849357682042846;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.356381612068028597) ) ) {
                    result[0] += -0.0009520945641694244;
                  } else {
                    result[0] += 0.009125193091307864;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5772832283623651195) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2065.691826137578119) ) ) {
                    result[0] += -0.01087290428335585;
                  } else {
                    result[0] += -0.022499488293035403;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9917694079393036821) ) ) {
                    result[0] += -0.000540858842293686;
                  } else {
                    result[0] += -0.009663052598100491;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4598785000000000234) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4992000000000000326) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-69597.80235837957298) ) ) {
                    result[0] += 0.008466235603174044;
                  } else {
                    result[0] += -0.002828475667908139;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1273.44963587212419) ) ) {
                    result[0] += 0.00790570555614096;
                  } else {
                    result[0] += -0.011399448376468882;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5306308187652577502) ) ) {
                  result[0] += -0.023516166178341978;
                } else {
                  result[0] += -0.007993108273467192;
                }
              }
            }
          }
        }
      } else {
        result[0] += -0.01713585054120248;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.472136222910218173) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7021555000000000435) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8226431302510440746) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.526463216865693751) ) ) {
              result[0] += 0.019210121278709157;
            } else {
              result[0] += 0.008018184133080922;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)131.9669371389429671) ) ) {
              result[0] += -0.0063476042142011045;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)377.2502328799494649) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6979477615268391277) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.194335169158143639) ) ) {
                    result[0] += 0.01076186588631535;
                  } else {
                    result[0] += 0.023159818091079285;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)223.4274148164537053) ) ) {
                    result[0] += 0.008071745625112398;
                  } else {
                    result[0] += -0.0024544732626625683;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.507575757575758679) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5388695000000001123) ) ) {
                    result[0] += 0.002292351729132798;
                  } else {
                    result[0] += 0.004234430150820827;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5464955000000001339) ) ) {
                    result[0] += 0.009814227553585244;
                  } else {
                    result[0] += 0.0019448221476464835;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4912475000000000591) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1306.189448752128555) ) ) {
              result[0] += 9.331200581100519e-05;
            } else {
              result[0] += -0.015963064543695223;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.437797619047619602) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.080540540540540828) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.526463216865693751) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-113.0432554252483754) ) ) {
                    result[0] += 0.007005603288190596;
                  } else {
                    result[0] += -0.001551540744749028;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-284.2006577138453736) ) ) {
                    result[0] += 0.0019475361097898985;
                  } else {
                    result[0] += -0.005230981318409848;
                  }
                }
              } else {
                result[0] += 0.009422054499443265;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0801500000000000129) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5438275000000001302) ) ) {
                  result[0] += 0.011864180846656148;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.594010800196367761) ) ) {
                    result[0] += -0.0005580041737612942;
                  } else {
                    result[0] += -0.01209725486389464;
                  }
                }
              } else {
                result[0] += -0.010142081763172132;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7224.572194877482616) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.69570538495772283) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.593650000000000122) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.002590673575131319) ) ) {
                result[0] += 0.006483976081134952;
              } else {
                result[0] += 0.0027502419132980874;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9804.779554419621491) ) ) {
                result[0] += -0.00022084356560244276;
              } else {
                result[0] += -0.0046184344748013825;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
              result[0] += 0.0013524447767803813;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9257.231014387447431) ) ) {
                result[0] += 0.012495837481989075;
              } else {
                result[0] += 0.0058586026912805;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2118.155753535761505) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9826500000000001345) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07335542033840654341) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2040.254840622532583) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3002208421277365313) ) ) {
                    result[0] += 0.00578330334275421;
                  } else {
                    result[0] += -0.002109890735518129;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8413500000000001533) ) ) {
                    result[0] += 0.011764465039608766;
                  } else {
                    result[0] += 0.005746195510998048;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.799613899613900614) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8014155000000001694) ) ) {
                    result[0] += 0.00650096312150546;
                  } else {
                    result[0] += 0.011473972562339037;
                  }
                } else {
                  result[0] += 0.017430417974553553;
                }
              }
            } else {
              result[0] += 0.015036415766138947;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.801294498381877052) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.476627348186981603) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.79261363636364734) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.947140112784286) ) ) {
                    result[0] += 0.006004859387624779;
                  } else {
                    result[0] += -0.00029717121611928874;
                  }
                } else {
                  result[0] += 0.013964217048569061;
                }
              } else {
                result[0] += 0.014368500783563318;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1503.749159866045829) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7356605000000001615) ) ) {
                  result[0] += 0.0017554947151232792;
                } else {
                  result[0] += 0.012358407554898093;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.715410573678290529) ) ) {
                  result[0] += -0.011402635711753078;
                } else {
                  result[0] += -0.0008321866154666031;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.560470779220779924) ) ) {
        result[0] += -0.022622007634923932;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5164445000000000841) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4725700000000001011) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.05570291777189595) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3714418462289422185) ) ) {
                result[0] += 0.022521379436708087;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5354827414836903499) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.902832415420928847) ) ) {
                    result[0] += 0.0069793890058017305;
                  } else {
                    result[0] += -0.016531106143881445;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4683879798511265125) ) ) {
                    result[0] += 0.007638099446600891;
                  } else {
                    result[0] += 0.026823995652973064;
                  }
                }
              }
            } else {
              result[0] += -0.01621312729201793;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1850.585799025786173) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1541.330699544382924) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3825153637350416913) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
                    result[0] += 0.014960972242303354;
                  } else {
                    result[0] += -0.008398772249058684;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5024443287353715926) ) ) {
                    result[0] += -0.02056925847021565;
                  } else {
                    result[0] += -0.006132153814531069;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4664.784318267557865) ) ) {
                  result[0] += -0.016445058868614373;
                } else {
                  result[0] += -0.03036270593524795;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2087.963610990688721) ) ) {
                result[0] += 0.01679557429341795;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4194.688259547751841) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4905.045163925654379) ) ) {
                    result[0] += -0.0009699468414764423;
                  } else {
                    result[0] += 0.020892117909745947;
                  }
                } else {
                  result[0] += -0.013552715542852712;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.09737269772481483) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4780.79918261664443) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5998.889972827267229) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6267.378546571134393) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8494243075500166329) ) ) {
                    result[0] += 0.004405474193311472;
                  } else {
                    result[0] += 0.017619070416461928;
                  }
                } else {
                  result[0] += -0.016061043199266274;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8671500000000000874) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.04557724252491901) ) ) {
                    result[0] += 0.02579959871684768;
                  } else {
                    result[0] += 0.005475771584732912;
                  }
                } else {
                  result[0] += 2.7151154126631462e-05;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1604.502677974852759) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4096.398333074744187) ) ) {
                  result[0] += 0.02923960037521452;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.184936040256943768) ) ) {
                    result[0] += 0.004115505656431447;
                  } else {
                    result[0] += -0.011443891118857213;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2523846967694989285) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2670.194409694011938) ) ) {
                    result[0] += 0.009776695404900058;
                  } else {
                    result[0] += -0.004791604709078663;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                    result[0] += -0.00026184531225129505;
                  } else {
                    result[0] += -0.01950510212182286;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-33595.95242623185186) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.25859375000000995) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2076236950652520508) ) ) {
                  result[0] += 0.02083268193104178;
                } else {
                  result[0] += 0.008405232177724322;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3286648086247792588) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6999500000000000721) ) ) {
                    result[0] += -0.014578318306537113;
                  } else {
                    result[0] += -0.0025239669756431968;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)196.1990881458966953) ) ) {
                    result[0] += 0.016844059602579658;
                  } else {
                    result[0] += 0.0010024018598142456;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2731000000000000649) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)92.51656411757237208) ) ) {
                  result[0] += -0.009520129449461972;
                } else {
                  result[0] += 0.019817351738570767;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1597878988880053475) ) ) {
                  result[0] += -0.017583269557003477;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5451500000000001345) ) ) {
                    result[0] += -0.01295840022339513;
                  } else {
                    result[0] += -0.0006590752675769279;
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

