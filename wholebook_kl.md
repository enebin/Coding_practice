<script type="text/javascript" async
  src="https://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-MML-AM_CHTML">
</script>

</br> </br>

# 00 Preface

</br> </br>

#### 제작배경/
기계학습에 세간의 이목이 집중되며 최적화에 대한 관심도도 나날이 상승하고 있습니다. 허나, 입문자를 위한 한글자료가 풍부하지 않아 많은 분들이 그 진입장벽으로 힘들어하는 것에 안타까움을 느꼈습니다. 이에 모두의 연구소의 풀잎스쿨에 Convex Optimization 과정을 개설하였고, 지식 나눔을 실천하고자 하는 참여자분들의 선의의 의지에 힘입어 본 프로젝트를 시작하게 되었습니다. 이 활동을 통해 부디 전국민의 지적 성장과 컨벡스 최적화의 국내 대중화에 힘을 보탤수 있길 기원합니다.

#### 작성계획
2018년 4월부터 10월까지 약 7개월 동안, [모두의 연구소](http://www.modulabs.co.kr/) 풀잎스쿨의 2개 기수에 걸쳐 작성될 계획입니다. 매주 한 개의 주제에 대해 초안이 작성된 뒤 1~2주간의 내부리뷰를 거치며, 이 과정을 통과한 2~3개의 주제가 묶여 점진적으로 공개됩니다.  

#### 이 문서의 활용방법
이 문서의 전반적인 내용은 [카네기멜론 대학 강의자료](http://www.stat.cmu.edu/~ryantibs/convexopt-F16/)를 참고하였고, 보조 교재로는 [스탠포드 대학 강의자료](https://web.stanford.edu/~boyd/cvxbook/)를 사용하였습니다. 본 ebook을 중심으로 두 강의자료를 레퍼런스로 공부하시면 좋습니다.

#### 참가자 모집 (종료)
~~본 프로젝트를 통해 홍익인간의 정신을 함께 실현하고 싶으신 분들은 아래 메일주소로 참여의사를 전달해주세요. 프로젝트가 종료되는 2018년 10월 말까지 유효합니다.~~

www.jwpark.co.kr@gmail.com / 박진우 (컨벡스 최적화 풀잎스쿨, 모두의 연구소)

</br> </br>

# 00-01 Author

</br> </br>

## Author
**김기범** (astroblasterr@gmail.com)<br>

**김정훈** (placidus36@gmail.com)<br>
대학원 석박통합과정으로 재학 중이며, 자율주행차량의 판단 분야에 관심이 많고 이를 연구하고 있습니다. 주변의 차량, 사람들과 interactive하면서도, safe-guaranteed한 자율주행차를 개발하는 것을 목표로 하고 있습니다. 기초적인 딥러닝/강화학습을 공부하면서 해당 분야들의 많은 motivation, proof가 최적화 기반에서 왔다는 것을 깨닫고 컨벡스 최적화 프로젝트에 참여하게 되었습니다. 

**노원종** (wnoh27@naver.com)<br>
현재 네트워크 시스템 개발 관련 일을 하고 있으며, 최근 많은 분야에서 적용되기 시작하고 있는 머신러닝/딥러닝기술들에 대해 관심을 가지고, 네트워크에서 적용가능한 기법들에 대해 공부하던 중, 그 안에 적용되고 있는 최적화 기법을 좀 더 자세히 이해하기 위해 컨벡스 최적화 프로젝트에 참여하게 되었습니다. 본 책이 머신러닝/딥러닝에 이용되는 최적화 원리를 좀 더 자세히 이해하고자 하시는 분들께 많은 도움이 되었으면 합니다. 

**박진우** (www.jwpark.co.kr@gmail.com)<br>
모두의 연구소 풀잎스쿨의 컨벡스 최적화 과정을 기획하였고, 해당 과정에서 facilitator로 활동중입니다. 최적화가 기계학습에서 차지하는 중요도에 비해 참고자료가 너무나도 부족한 작금의 현실에 통탄을 금치 못하고 '모두를 위한 컨벡스 최적화' 프로젝트를 제안하게 되었습니다. 현재는 다중 인물에 대한 합성 얼굴 이미지 생성을 연구중이며, 또한 강화학습을 이용한 game agent 학습에도 큰 관심을 가지고 있습니다. [[LinkedIn](https://www.linkedin.com/in/curt-park/)]

**윤성진** (sjyoon@gmail.com)<br>
약 22년 동안 소프트웨어 연구개발 및 제품기획 업무를 해 왔으며 최근 5년에는 데이터 및 미들웨어 소프트웨어, 모듈형 로봇 플랫폼 제품기획을 하였습니다. 현재는 딥러닝 기반의 컴퓨터 비전에 관심을 갖고 있으며 다중 인물에 대한 합성 얼굴 이미지 생성을 연구중입니다. 모두의 연구소 풀잎스쿨에서 컨벡스 최적화를 공부하면서 학문의 중요도에 비해 진입 장벽이 높고 특히 한글 자료가 전무하다는 현실을 깨닫고 '모두를 위한 컨벡스 최적화' 프로젝트에 참여하게 되었습니다. 머신러닝에 관심을 갖고 있는 많은 분들이 본서를 통해 최적화에 좀 더 쉽게 입문할 수 있으면 좋겠습니다.

**이규복** (gyubokl@gmail.com)<br>
산업공학과 석사과정으로 재학 중이며 자연어 처리, 이상 탐지, 강화학습에 관심이 많습니다. 기계학습을 연구하면서 기계학습과 최적화는 떼려야 뗄 수 없는 관계라는 것을 알게 되어 최적화에 자연스럽게 관심을 가지게 되었습니다. 하지만 공부를 하면서 조금 더 친절한 자료가 있으면 좋겠다는 생각을 끊임없이 하게 되었고, '모두를 위한 컨벡스 최적화' 프로젝트에 참여하게 되었습니다. 최적화의 중요성을 알고 도전하려고 하지만 입문의 장벽이 높아 포기하는 사람들에게 이 책이 조그만 희망이 되길 바랍니다. [[LinkedIn](https://www.linkedin.com/in/gyuboklee/)]

**한영일** (thinkingtoyihan@gmail.com)<br>
Computer Science와 무선통신을 공부하였으며 인지과학, 진화 심리학 그리고 인공 생명 등에 관심이 있습니다. 호기심에 시작한 최적화라는 거대한 지식의 산 아래에서 경이로움을 느끼며, 위대한 지식 앞에 또 다시 겸손을 배움니다. 본서가 저처럼 최적화라는 거대한 지식의 산 앞에서 오르기를 주저하시는 분들께 좋은 길잡이가 되어주길 바랍니다.

**황혜진** (brillianthhj@gmail.com)<br>
수학 전공 및 데이터마이닝 석사 과정을 졸업하였으며, 현재 컴퓨터비전 분야 관련 개발자로 일하고 있습니다. 딥러닝 공부를 하는 동안 쉽게 이해되지 않는 수식적 배경에 대해 좀 더 깊게 파헤쳐보고자 컨벡스 최적화 프로젝트에 참여하게 되었고, 공부한 내용들을 깊이 있게 이해하고, 실제 적용 단에서 최적화 된 방법론이 어떻게 사용될 지에 대해 지속적인 관심을 가지고 스터디에 임하고 있습니다.

## Reviewer
**이주희** (juhee1108@gmail.com)<br>
**現 이화여자대학교 수리과학연구소 연구교수**<br>
이화여자대학교에서 수학박사 학위를 취득하였습니다. 주 연구분야는 암호학으로 IoT, 머신러닝등과 같은 다양한 응용분야에서의 효율적인 암호 기술 개발 및 그 기반이 되는 수학적 이론을 연구합니다. 머신러닝 / 딥러닝을 활용한 암호 기술 개발을 위해 딥러닝에 관심 갖게 되었고 최근 모두의 연구소 Deep Learning College에서 기초수학(선형대수/미적분학/최적화문제/확률및통계)을 강의하였습니다. 이후 머신러닝 / 딥러닝에서 필요한 수학을 정리하면서 대부분의 문제들이 논-컨벡스 최적화(non-convex optimization problem)에 해당하지만, 현재까지의 해결방안은 컨벡스 최적화문제로 변환하는 방법이 아닐까하는 생각에 컨벡스 최적화를 공부하게 되었고, '모두를 위한 컨벡스 최적화' 프로젝트에 참여하고 있습니다. 수학의 중요성을 체감하고 있는 많은 분들에게 이 책이 도움이 되기를 바랍니다.
<br>

**장승환** (schang.math@gmail.com)<br>
**現 이화여자대학교 수리과학연구소 연구교수**<br>

**정태수** (tcheong@korea.ac.kr) <br>
**現 고려대학교 산업경영공학부 부교수, 공과대학 연구부학장**<br>
고려대학교 산업경영공학부 부교수로 재직 중이며, 최적화 기법을 활용한 다양한 연구를 수행하였으며 최근들어서는 머신러닝과 관련된 산학 프로젝트도 진행 중에 있습니다. 본 전공은 마르코브 의사결정 프로세스 (Markov decision process)를 활용한 물류 및 SCM 최적화이며 박사과정 중에서 Optimization 트랙으로 박사자격시험을 준비하면서 다양한 최적화 이론을 공부하였습니다. 머신러닝 관련해서는 K-MOOC (http://www.kmooc.kr/)의 "Mathematical Fundamentals for Data Science"와 "Machine Learning for Data Science" 강좌 개발 및 촬영에 참여하였습니다. 최적화와 관련하여 부족하지만 조금이나마 기여를 하고자 이렇게 참여하게 되었습니다. 

</br> </br>

# 00-02 Revision

</br> </br>

주요 변경 이력

| **순서** |**주요내용** | **작성자** | **감수자** | **날짜** |
| -------- | -------- | -------- | -------- | -------- |
| 1 | 01 Introduction | 박진우 | 장승환, 이규복 | 2018.04.21 |
| 2 | 02 Convex Sets | 윤성진 | 이주희  | 2018.05.13 |
| 3 | 05 Canonical Problems | 박진우 | 이규복 | 2018.05.19 |
| 4 | 06 Gradient Descent | 윤성진, 한영일, 황혜진 | 이주희 | 2018.05.30 |
| 5 | 03 Convex Functions | 한영일, 황혜진 | 이주희 | 2018.06.10 |
| 6 | 07 Subgradient | 노원종 | 이주희 | 2018.06.14 |
| 7 | 04 Convex optimization basics | 김기범, 박진우 | 작성자 cross review | 2018.06.15 |
| 8 | 06-04 Gradient Boosting <br> 06-05 Stochastic Gradient Descent  | 노원종 | 윤성진 | 2018.06.18 |
| 9 | 09 Proximal Gradient Descent and Acceleration | 윤성진, 한영일, 황혜진 | 윤성진 | 2018.07.01 |
| 10 | 08 Subgradient Method | 이규복 | 박진우 | 2018.07.08 |
| 11 | 11 Duality in general programs | 노원종 | 윤성진 | 2018.07.31 |
| 12 | 10 Duality in Linear Programs | 김정훈 | 이규복 | 2018.08.05 |
| 13 | 13 Duality uses and correspondences | 한영일 | 황혜진  | 2018.08.11 |
| 14 | 12 KKT conditions | 박진우 | 이규복  | 2018.08.12  |
| 15 | 15 Barrier method | 윤성진 | 노원종  | 2018.08.12 |
| 16 | 17 Primal-dual interior-point method | 한영일 | 윤성진 | 2018.09.27   |
| 17 | 19 Proximal Newton Method  | 윤성진 | 노원종 | 2018.09.28  |
| 18 | 16 Duality revisited | 박진우 | 황혜진  | 2018.09.29  |
| 19 | 18 Qausi-Newton Method  | 박진우 | 김정훈 | 2018.09.30  |
| 20 | 14 Newton's method | 김정훈 | 박진우  | 2018.10.03  |
| 21 | 20 Dual Methods  | 노원종 | 윤성진 | 2018.11.05 |
| 22 | 25 Mixed Integer Programming (part 2)  | 윤성진 | 노원종 | 2018.11.05   |
| 23 | 22 Conditional Gradient (Frank-Wolfe) Method  | 한영일 | 황혜진 | 2018.11.19  |
| 24 | 23 Coordinate Descent  | 박진우 | 김정훈 | 2018.11.19  |
| 25 | 21 Alternating Direction Method of Multipliers  | 김정훈 | 박진우 | 2018.11.20  |
| 26 | 24 Mixed Integer Programming (part 1)  | 황혜진 | 한영일 | 2018.11.20  |

</br> </br>

# 00-03 Table of contents

</br> </br>

| **순서** |**내용** | 
| -------- | -------- |
|1  |	[Introduction](https://wikidocs.net/17202) |  
|2 	| [Convex Sets](https://wikidocs.net/17370)  | 
|3 	| [Convex functions](https://wikidocs.net/17267) | 
|4 	| [Optimization basics](https://wikidocs.net/18335) | 
|5 	| [Canonical problem forms](https://wikidocs.net/17851) | 
|6 	| [Gradient descent](https://wikidocs.net/18083) | 
|7 	| [Subgradient](https://wikidocs.net/18714) | 
|8 	| [Subgradient method](https://wikidocs.net/18952) | 
|9 	| [Proximal gradient descent and acceleration](https://wikidocs.net/19031) | 
|10 	| [Duality in linear programs](https://wikidocs.net/19932) | 
|11 	| [Duality in general programs](https://wikidocs.net/20582) | 
|12 	| [KKT conditions](https://wikidocs.net/20948) | 
|13 	| [Duality uses and correspondences](https://wikidocs.net/20949) | 
|14 	| [Newton’s method](https://wikidocs.net/21007) | 
|15 	| [Barrier method](https://wikidocs.net/21297) |
|16   | [Duality revisited](https://wikidocs.net/21643) |
|17 	| [Primal-dual interior point methods](https://wikidocs.net/21616) | 
|18 	| [Quasi-Newton methods](https://wikidocs.net/21979)  | 
|19 	| [Proximal Newton method](https://wikidocs.net/22424) | 
|20 	| [Dual methods](https://wikidocs.net/22602) | 
|21 	| [Alternating direction method of multipliers](https://wikidocs.net/22687) | 
|22 	| [Frank-Wolfe method](https://wikidocs.net/22688) | 
|23 	| [Coordinate descent](https://wikidocs.net/23359)  | 
|24 	| [Mixed integer programming (part 1)](https://wikidocs.net/23447) |
|25 	| [Mixed integer programming (part 2)](https://wikidocs.net/23718) |

* 이 항목은 추후 진행상황에 따라 수정될 수 있습니다.

</br> </br>

# 01 Introduction

</br> </br>

Mathematical Optimization-특히 Convex Optimization-에 대한 전반적인 소개. 

</br> </br>

# 01-01 Optimization problems

</br> </br>

최적화 문제(Optimization problems)란 여러개의 선택가능한 후보 중에서 최적의 해(Optimal value) 또는 최적의 해에 근접한 값을 찾는 문제를 일컫는다. 일반적으로 기계학습 분야에서는 비용함수(Cost function)를 최소화 또는 최대화 시키는 모델의 파라미터(parameter)를 구하게 되는데, 이것은 최적화 문제로 정의될 수 있다.

## Mathematical optimization problems
Mathematical optimization problem은 다음과 같은 형태로 표현될 수 있다.

>![](https://wikidocs.net/images/page/17203/Optimization_problem.png)

**[Fig1] Mathematical Optimization Problem in standard form [3]**

* $x \in R^n$ is the optimization variable
* $f: R^n \rightarrow R$ is the objective or cost function
* $g_i: R^n \rightarrow R,$ $i = 1, ..., m$ are the inequality constraint functions
* $h_i: R^n \rightarrow R,$ $j = 1, ..., r$ are the equality constraint functions

위의 제약조건을 모두 만족하는 정의역(feasible domain)에서 objective function f를 최소로 만드는 벡터 $x$를 $x^*$로 표시하고 이를 optimal solution이라 부른다. [1]

제약조건의 경우 다음과 같이 두 가지로 구분될 수 있다. [2]

1. Explicit constraints: 말 그대로 optimization problem에 직접적으로 명시된 제약조건을 뜻한다. 위 [Fig1]에서 함수 $g_i$와 $h_i$로 표현된 제약조건이 이에 해당한다. 참고로 explicit constraint가 없는 문제를 unconstrained problem이라고 부른다.
2. Implicit constraints: Optimization problem에 직접적으로 명시되지 않는 제약조건을 말한다. 이는 Objective function과 모든 constraint function들의 정의역에 대한 교집합이다. $D = dom(f) \cap \bigcap_{i=1}^m {\rm dom}(g_i) \cap \bigcap_{j=1}^r dom(h_j)$
<br/>
**Note:** $dom(f)$는 함수 $f$의 정의역을 의미한다.

>**Example: implicit constraint <-> explicit constraint**
>
>최적화 문제가 다음과 같이 주어졌다고 하자.
>
>$$\text{minimize } log(x)$$
>
>여기서 objective function인 log함수의 정의역이 $x > 0$이므로 $x > 0$이 이 문제에서의 implicit constraint가 된다. 이 문제를 explicit constraint가 포함된 형태의 최적화문제로 표현하면 다음과 같다.
>
>$$\text{minimize } log(x) \\\ \text{subject to } x > 0$$

## Applications
최적화 문제는 다양한 영역에 걸쳐 적용될 수 있다. [2]

#### Portfolio optimization
* variables: 각 자산에 대한 투자금
* constraints: 예산, 자산당 최소/최대 투자가능 금액, 최소 수익
* objective: 전반적인 위험도 또는 주가 수익률 분산 (return variance)

#### Device sizing in electonic circuits
* variables: 각 부품의 너비와 길이
* constraints: 제조 공정상 제약사항, 최대 면적
* objective: 전력소비량

#### Data fitting
* variables: 모델 파라미터
* constraints: 사전 정보(e.g. 어떤 파라미터는 non-negative), 파라미터에 대한 제약사항
* objective: 예측값에 대한 에러


</br> </br>

# 01-02 Convex optimization problem

</br> </br>

Convex optimization problem은 optimization problem의 한 종류이다.

>![](https://wikidocs.net/images/page/17206/Optimization_problem.png)

**[Fig1] Convex Optimization Problem in standard form [3]**

여기서 objective function $f$와 inequality constraint function $g_i$가 convex이고, equality constraint function $h_j$가 affine이라는 조건이 추가된다. 이때 affine function이란 다음과 같이 linear function에 상수합이 붙은 형태의 함수를 의미한다.
>$h_j$, $j = 1, ..., r$ are affine: $h_j(x) = a_{j}^T x + b_{j},$ $j=1, ..., r$

그렇다면 convex function은 어떤 함수를 의미하는 것일까? 이를 이해하기 위해서 convex set을 이해할 필요가 있다.

## Convex sets
두 점 $x_1$과 $x_2$를 잇는 선분(line segment)은 다음과 같이 정의된다.

>$x = \theta x_1 + (1 - \theta) x_2$ with $0 \le \theta \le 1$

어떤 집합(set)이 주어져 있다고 하자. 이 집합의 원소인 두 점 $x_1$과 $x_2$를 잇는 선분이 이 집합에 다시 포함될때 우리는 이 집합을 convex set이라고 부른다. 다시 말하면 집합 C가 convex가 될 조건은 다음과 같다.

>$x_1, x_2 \in C$, $0 \le \theta \le 1$  $\Rightarrow$ $\theta x_1 + (1-\theta)x_2 \in C$

예를 들어, 다음 세 가지 그림 중 가장 좌측의 그림만이 convex set에 해당한다.

![](https://wikidocs.net/images/page/17206/Convex_set.png)

**[Fig2] left: a convex set, mid & right: non-convex sets [2]**

## Convex functions
Convex function은 다음과 같이 정의된다.

>$f: R^n \rightarrow R$ is convex if dom f is a convex set and
>
>$f(\theta x + (1 - \theta)y) \le \theta f(x) + (1-\theta)f(y)$ for all $x, y \in$ dom f, $0 \le \theta \le 1$

정의에서 부등식으로 표현된 조건은 다음과 같은 기하학적 의미를 가진다. f의 그래프 상의 임의의 두 점 (x, f(x)), (y, f(y))을 생각해보자. 이 두 점을 잇는 선분은 구간 [x, y]에서 그래프보다 크거나 같게 위치한다.

![](https://wikidocs.net/images/page/17206/Convex_function.png)

**[Fig3] convex function [2]**

## Relation between a convex set and a convex function*
convex function과 convex set 사이에는 다음과 같은 밀접한 관계가 있다.
> 함수 f의 epigraph가 convex set일때, 함수 f는 convex function이다.

여기서 epigraph는 무엇을 의미하는 것일까? Epigraph에서 'Epi'는 'above'를 뜻하며, 곧 epigraph는 'above the graph'를 의미한다. 즉, epi f란 f의 그래프의 위쪽 영역에 해당하는 집합이다. 함수 epigraph는 다음과 같이 정의한다.

>epigraph of f: $R^n \rightarrow R:$
>
>epi f = {$(x, t) \in R^{n+1}$ | $x \in$ dom f, f($x$) $\le t$}

![](https://wikidocs.net/images/page/17206/epigraph.png)

**[Fig4] epigraph [2]**

함수 f가 convex function일때 epi f는 항상 convex set이고 이의 역도 성립한다. 이를 주지하고 위의 convex function과 convex set의 정의를 다시 한번 살펴보도록 하자.

## Nice property of convex optimization problems
Convex 함수의 local minimum은 항상 global minimum이다. convex optimization problem의 경우 non-convex optimization problem에 비해 일반적으로 solution을 더 쉽게 구할 수 있는데, 그 이유는 convex 함수가 다음과 같은 특성을 가지기 때문이다.
>$f$가 convex이고 $x$가 $f(x)$의 locally optimal point일때(즉 $f(x)$가 local minimum), 사실 x는 globally optimal point이다.

이를 한번 증명해보자.

>**proof by contradiction:**
>
>Convex function f에 대해 $x$가 locally optimal point일때, 어딘가에 $f(y) < f(x)$를 만족하는 feasible $y$가 있다고 가정하자. (이 가정이 참임이 증명된다면 'locally optimal point = global optimal point'가 성립하지 않을 것이다.)
>
>$x$가 locally optimal point라는 것은 다음을 만족하는 양수 $R$이 존재한다는 것과 같다: 
>$z$ feasible, $\| z - x \|_2 \le R \Rightarrow f(z) \ge f(x)$
>
>이때 $z = \theta y + (1 - \theta) x$라고 하면 ($0 < \theta < 1$),
>
>1.$\phantom{1} z$는 두 개의 feasible points $x, y$에 대한 convex combination*이므로 또한 feasible하다.
>
>2.$\phantom{1}$가정한 것처럼 $f(y) < f(x)$가 성립한다면, 이는 곧 $f(z) \le \theta f(y) + (1 - \theta) f(x) < \theta f(x) + (1 - \theta) f(x) = f(x)$
>
>2는 x가 locally optimal point이기 위한 전제조건 $f(z) \ge f(x)$에 대한 모순이므로 $f(y)<f(x)$를 만족하는 feasible y는 존재하지 않는다. 즉, locally optimal point x가 곧 globally optimal point임을 의미한다.


*
**convex combination**
>$x_1, ..., x_k$에 대한 convex combination x는 다음과 같이 정의된다.
>
>$x = \theta_1 x_1 + \theta_2 x_2 + ... + \theta_k x_k$ with $\theta_1 + ... + \theta_k = 1, \theta_i \ge 0$
>
>$D$가 convex set일때 $x_1, x_2, ..., x_k \in D$이면, $x \in D$이다.

</br> </br>

# 01-03 Goals and Topics

</br> </br>

## Goals
앞으로의 학습과정을 통해 다음과 같은 능력이 배양되는 것을 목표로 한다.

* 주어진 문제상황이 convex optimization problem에 해당함을 파악(recognize)
* 주어진 문제상황을 convex optimization problem으로 표현(formulate)
* 정의된 convex optimization problem을 풀기위한 가장 적절한 알고리즘을 선택

## Topics
위와 같은 목표를 달성하기 위해 다음과 같은 주제들이 다룰 것이다.

* convex sets, functions, optimization problems
* examples and applications
* algorithms

특히 위의 주제들 중에서, algorithm에 대한 내용이 주를 이루게 될 것이다.

## Algorithms
보통 최적화 문제를 풀기 위해서는 굉장히 다양한 방법이 적용될 수 있다. 서로 다른 방법들은 각각 정의된 문제의 성질에 따라 성능이 달라질 수 있다. 즉, 문제를 해결하기 가장 효율적인 알고리즘을 선택하기 위해서는 주어진 문제와 각 알고리즘에 대한 깊은 이해가 필요하다. Total variation denoising을 예로 들어보자.

#### Example: Total variation denoising

![](https://wikidocs.net/images/page/17206/2d_fused_lasso.png)

**[Fig1] total variation denoising [3]**

노이즈가 잔뜩 낀 이미지 Data(중간)를 받았을 때, 그 이미지에서 노이즈를 제거하고 True Image(좌측)에 가까운 Solution(우측)을 얻고 싶은 상황이라고 가정하자. 각 pixel값을 $y_i, i = 1, ..., n$라고 한다면 이 문제는 다음과 같은 최적화 문제로 정의될 수 있으며, 이는 보통 2d fused lasso 또는 2d total variation denoising problem으로 불린다.

>$min_{\theta}$ $\frac{1}{2} \Sigma_{i=1}^n (y_i - \theta_{i})^2 + \lambda \Sigma_{(i,j) \in E} | \theta_i - \theta_j |$

* E: 인접한 모든 $\theta$ 사이의 Edge들을 모아둔 집합
* $\frac{1}{2} \Sigma_{i=1}^n (y_i - \theta_{i})^2$: Least squares loss. $\theta$가 $y$에 가까워지게 한다.
* $\Sigma_{(i,j) \in E} | \theta_i - \theta_j |$: Total variation smoothing. 인접한 pixel 간 값의 변화가 이미지 전반에 거쳐 그리 많지 않을때 (piecewise constant) 이용할 수 있는 방법이다. 이와 같이 올바른 smoothing 기법의 선택을 위해서는 대상의 특성이 충분히 고려되어야 한다. (Total variation smoothing에 대한 더 자세한 설명은 참고문헌 1의 챕터 6.1.2와 6.3에서 볼 수 있다.)

앞서 정의된 convex optimization problem은 [Specialized ADMM](http://stanford.edu/~boyd/admm.html) 알고리즘을 이용하면 20번의 iteration으로 우측과 같은 solution을 얻을 수 있다.

#### Specialized ADMM, 20 iterations
![](https://wikidocs.net/images/page/17208/result1.png)

#### Proximal gradient descent, 1000 iterations
![](https://wikidocs.net/images/page/17208/result2.png)

#### Coordinate descent, 10K cycles
![](https://wikidocs.net/images/page/17208/result3.png)

**[Fig2] total variation denoising [3]**

위 결과에서 알 수 있듯이 2d fused lasso problem에 대해서는 세 가지 방법 중 Specialized ADMM이 가장 좋은 성능을 발휘한다. 하지만 문제가 달라지면 다른 두 방법이 Specialized ADMM을 압도하는 경우도 발생할 수 있다. 이후의 챕터에서는 다양한 알고리즘과 문제를 분석하여 적절한 알고리즘을 선택하는 방법에 대해 알아볼 것이다.

</br> </br>

# 01-04 Brief history of convex optimization

</br> </br>

## Theory (convex analysis)
ca1900 - 1970

## Algorithms

* 1947: simplex algorithm for linear programming (Dantzig)
* 1960s: early interior-point methods (Fiacco & McCormick, Dikin, . . . )
* 1970s: ellipsoid method and other subgradient methods
* 1980s: polynomial-time interior-point methods for linear programming (Karmarkar 1984)
* late 1980s–now: polynomial-time interior-point methods for nonlinear convex optimization (Nesterov & Nemirovski 1994)

## Applications
* before 1990: mostly in operations research; few in engineering
* since 1990: many new applications in engineering (control, signal processing, communications, circuit design, . . . ); new problem classes (semidefinite and second-order cone programming, robust optimization)

</br> </br>

# 02 Convex Sets

</br> </br>

이 장에서는 convex optimization의 근간을 이루는 개념인 convex set에 대해 살펴볼 것이다.

#### 배경
Convex optimization이란 문제를 convex function으로 정의해서 최대 또는 최소를 구하는 기법을 말한다.
Convex set은 다음 두 가지 측면에서 convex function과 밀접한 관련이 있다.

* Convex function은 convex set으로 정의된다. 즉, 함수의 정의역과 치역이 convex set으로 정의되며 그에 따라 convex function의 주요 성질들이 convex set에 의해 결정된다.
* Optimization 문제를 convex function으로 변환하면 쉽게 풀 수 있다. 하지만, 가끔씩 내가 풀려는 문제가 convex function로 정의된 것인지 판단하기 어려울 때가 있다. 이럴 때는 함수의 epigraph가 convex set인지를 확인해서 convex function임을 판별할 수가 있다.

#### 내용
이 장에서는 convex set의 정의와 예제, 주요 속성, convexity를 유지하는 연산에 대해 살펴볼 것이다.

</br> </br>

# 02-01 Affine and convex sets

</br> </br>

이 절에서는 convex set을 중심으로 하는 개념과 정의를 살펴볼 것이다. 이 절에서는 세 가지 종류의 set을 소개하고 있는데, 이 중 가장 일반적인 set이 affine set이며 affine set에서 범위를 제약해서 정의한 set이 convex set과 cone이다.

재미있는 것은 이 set들은 아주 많은 직선(line) 또는 선분(line segment), 반직선(ray)이 모여있다고 가정하고 있다는 것이다. Affine set은 무수히 많은 line을 모여서 만들어진 것이며, convex set은 무수히 많은 line segment이 모여서 만들어진 것이고 cone은 무수히 많은 ray가 모여서 만들어진 것으로 생각하면 쉽게 이해할 수 있을 것이다. 그리고, cone은 nonnegative homogenous set이라고도 하는데 ray의 한쪽 방향으로만 커지는 성질을 생각하면 왜 이런 이름 붙었는지 쉽게 이해할 수 있을 것이다.

</br> </br>

# 02-01-01 Line, line segment, ray

</br> </br>

Affine set, convex set, cone을 정의하기 위해 먼저 직선(line), 선분(line segment), 반직선(ray)을 먼저 살펴보자.

Line은 두 점을 지나면서 양쪽 방향으로 무한히 커지는 선을 말한다. 반면, line segment는 두 점 사이에서만 정의되는 선을 말하며, ray는 한 점에서 시작해서 다른 점을 지나면서 무한히 커지는 선을 말한다. 다음 그림에서는 line과 line segmemt를 보여주고 있다. 파라미터 $\theta$의 범위에 따라 line, line segment, ray가 어떻게 정의될 지 상상해보라.

![](https://wikidocs.net/images/page/17382/02.01_Line_Segment.PNG)

**[Fig1] $x_1$과 $x_2$을 지나는 Line과 Line Segment [1]** 

[참고] Set에 포함된 임의의 두 점을 이용해서 line 또는 line segment, ray를 만들었을 때, 이들이 set에 포함되는지 여부로 set을 정의하게 된다. (이때 set을 여러 점으로도 정의할 수 있는데, set에 포함된 여러 점들을 이용해서 affine combination, convex combination, conic combination 했을 때 그 결과가 set에 포함되는지 여부로 정의하게 된다. 자세한 내용은  뒷 절에서 설명할 것이다.)

## Line
두 점 $x_1$과 $x_2$을 지나는 **Line**은 다음과 같이 정의된다. 이때, $\theta$는 임의의 실수이며 $\theta$가 0이면 $y$는 $x_2$가 되고, $\theta$가 1이면 $y$는 $x_1$이 된다. 따라서, $\theta$가 0보다 작거나 1보다 크면 $x_2$에서  $x_1$까지의 범위를 벗어나는 것을 위의 그림에서 확인할 수 있다.

>$y = \theta x_1 + (1 - \theta) x_2$ with $\theta \in R$

## Line segment

직선의 식에서 $\theta$의 범위를 0에서 1로 제한하면 **line segment**가 된다. 따라서, line segment는 직선의 식에 $0 \le \theta \le 1$ 조건을 추가해서 정의할 수 있다.

>$y = \theta x_1 + (1 - \theta) x_2$ with $0 \le \theta \le 1$

다음과 같이 식을 조금 다르게 표현해서 해석해보면 line segment는 점 $x_2$에서 출발해서 $(x_1 - x_2)$ 벡터 방향으로 $\theta$배로 진행하다 $x_1$에 도달하면 멈추는 것으로  생각해볼 수 있다.

>$y = x_2 + \theta (x_1 - x_2)$ with $0 \le \theta \le 1$


## Ray
Ray는 한 점에서 시작해서 다른 점을 지나면서 무한히 커지는 직선을 말한다. 점 $x_2$에서 출발해서 $(x_1 - x_2)$ 벡터 방향으로 $\theta$배로 무한히 진행한다.

>$y = x_2 + \theta (x_1 - x_2)$ with $\theta \ge 0$

이 식을 다음과 같이 정리해 보면 위의 line과 line segment 식과 $\theta$의 조건만 다르고 동일한 형태임을 알 수 있다.

>$y = \theta x_1 + (1 - \theta) x_2$ with $\theta \ge 0$



이제  $\theta$의 범위가 line은 $\theta \in R$, line segment는 $0 \le \theta \le 1$, ray는 $\theta \ge 0$라는 것을 알 수 있다. 또한, 앞으로 정의하게 될 affine set, convex set, conic set에서도 $\theta$의 범위도 동일하다는 것을 알게 될 것이다.



</br> </br>

# 02-01-02 Affine set

</br> </br>

Affine set은 점(point), 직선(line), 평면(plane), 초평면(hyperplane)과 같이 선형적 특성이 있으면서 경계가 없는 집합을 말한다. 어떤 집합이 affine set이라고 말할 수 있으려면 집합에 속한 임의의 두 점으로 직선을 만들어서 그 직선이 집합에 포함되는지를 보면 된다. 이쯤에서 다들 느끼겠지만 직선이 포함된다는 의미는 경계가 없다는 의미이므로 어떤 공간이 경계가 있다면 affine set이 될 수 없다는 것을 직관적으로 알 수 있을 것이다. 수학적으로 이 내용을 정의해보자.

## Affine set

집합 $C \subseteq R^n$에 속한 두 점 $x_1$, $x_2 \in C$을 지나는 직선을 만들었을 때 이 직선이 $C$에 포함되면 이 집합을 **affine set**이라고 한다. 

>$\theta x_1 + (1-\theta)x_2 \in C$ with $\theta \in R$

이 식을 다르게 해석해 보면 set $C$에 속한 두 점을 linear combination하되 계수의 합을 1로 제한했다고 볼 수도 있다. (이 식에서 계수인 $\theta$와 $(1-\theta)$의 합은 1이다. ) 그리고, 그 결과가  $C$에 다시 포함되면 affine set이다.

## Affine combination

여러 점들을 linear combination할 때 계수의 합을 1로 제한하게 되면 이를 **affine combination**이라고 한다.  

>$\theta_1 x_1 + \theta_2 x_2 + ... + \theta_k x_k \in C$ with $\theta_1 + \theta_2 + ... + \theta_k = 1$

이제 affine set의 정의를 affine combination 개념을 이용해서 일반화해 볼 수 있다. 즉, 어떤 집합에 속하는 점들을 affine combination했을 때 그 결과가 다시 그 집합에 속하면 그 집합은 affine set이라고 말할 수 있다. 

반대로 affine set에 속하는 점들을 affine combination하면 항상 set에 속하게 된다.

## Affine hull
$C \subseteq \mathbb{R}^n$에 포함된 점들의 모든 affine combination들의 집합을 $C$의 affine hull이라고 하며 **aff** $C$로 표기한다. Affine hull **aff** $C$은 항상 affine set이며, 집합 $C$를 포함하는 가장 작은 affine set이다.
>**aff** $C = $ { $\theta_1 x_1 + \dotsi + \theta_k x_k \phantom{1} | \phantom{1} x_1, \dotso, x_k \in C, \theta_1 + \dotsi + \theta_k = 1$ }

## Affine set과 subspace의 관계

Affine set $C$가 있을 때 $x_0 \in C$라면 set $V = C - x_0$는 subspace이다. 
($V$가 subspace라는 증명은 아래에 있다.)

>$V = C - x_0 = $ { $ x - x_0 \phantom{1} | \phantom{1} x \in C $ }

따라서, **"Affine set $C$은 linear subspace $V$를 $x_0$만큼 translation한 것이다"** 라고 할 수 있으며, $x_0$는 집합 $C$에서 임의로 선택할 수 있다. 그리고, $C$의 차원은 $V$의 차원과 같다. ($C, V \subseteq \mathbb{R}^n$)

>$C = V + x_0 = $ { $v + x_0 \phantom{1} | \phantom{1} v \in V$ }

#### [참고] $V$가 subspace임을 증명
$V$는 subspace라는 것을 증명하려면 sum과 scalar multiplication에 닫혀있다는 것을 보이면 된다.

먼저 $v_1, v_2 \in V$이고 $\alpha, \beta \in R$라고 하자. 만일 $\alpha v_1 + \beta v_2 + x_0$가 $C$에 속한다는 것을 확인한다면, $V = C - x_0$에 따라 $\alpha v_1 + \beta v_2 \in V$가 되므로 $V$가 sum과 scalar multiplication에 닫혀있다는 것을 알 수 있다.

$v_1 + x_0 \in C$이고 $v_2 + x_0 \in C$이므로 $\alpha v_1 + \beta v_2 + x_0$는 다음과 같이 전개될 수 있다. 
이때, 전개 결과에서 계수들의 합이 $\alpha + \beta + (1 -  \alpha - \beta) = 1$이므로, $C$에 속하는 세 점의 affine combination 형태임을 알 수 있다. 따라서, 전개 결과는 집합 $C$에 속하게 된다.

>$$\alpha v_1 + \beta v_2 + x_0 = \alpha (v_1 + x_0) + \beta (v_2 + x_0) + (1 - \alpha - \beta) x_0 \in C$$

정리하면 $\alpha v_1 + \beta v_2 + x_0 \in C$이기 때문에 $\alpha v_1 + \beta v_2 \in V$가 되어서 $V$는 sum과 scalar multiplication에 닫혀있는 subspace임을 알 수 있다.


</br> </br>

# 02-01-03 Convex set

</br> </br>

이제 이 장의 핵심 개념인 convex set을 살펴보자. 직관적으로 convex set이란 오목하게 들어간 부분이나 내부에 구멍이 없는 집합을 의미한다. 따라서, 어떤 집합이 convex set이라고 말할 수 있으려면 집합에 속한 임의의 두 점으로 선분(line segment)을 만들어서 그 선분이 집합에 포함되는지를 보면 된다.

## Convex set
집합 $C \subseteq R^n$에 속한 두 점 $x_1$, $x_2 \in C$을 연결한 line segment가 $C$에 포함되면 이 집합을 **convex set**이라고 한다.

>$\theta x_1 + (1-\theta)x_2 \in C$ with $x_1, x_2 \in C$, $0 \le \theta \le 1$


이 식을 다르게 해석해 보면 set $C$에 속한 두 점을 linear combination하되 계수가 양수이고 계수의 합을 1로 제한했다고 볼 수 있다. 그리고, 그 결과가  $C$에 다시 포함되면 convex set이다.

아래 그림에는 convex set을 설명하는 예들이 있다. 왼쪽의 육각형은 convex이지만 가운데 있는 콩팥 모양은 내부에 두 점을 이었을 때 선분이 외부로 나가기 때문에 convex가 아니다. 오른쪽 네모의 경우 경계의 일부가 open된 상태라 경계에서 선분을 만들면 set의 범위를 벗어나므로 convex가 아니다.

![](https://wikidocs.net/images/page/17384/02.02_Convex_Set.PNG)

**[Fig1] Convex Set [1]**

## Convex combination
점들을 linear combination할 때 계수가 양수이고 계수의 합을 1로 제한하면 이를 **convex combination**이라고 한다.

>A point of the form $\theta_1 x_1 + \theta_2 x_2 + ... + \theta_k x_k$ with $\theta_1 + \theta_2 + ... + \theta_k = 1, \theta_i \ge  0, i = 1,  ..., k$


이제 convex set의 정의를 convex combination 개념을 이용해서 일반화해 볼 수 있다. 즉, 어떤 집합 C에 속하는 임의의 여러 점들의 convex combination이 집합 C에 속하면 그 집합은 convex set이라고 말할 수 있다. 

반대로 convex set C에 속하는 점들의 convex combination은 항상 set C에 속하게 된다.


## Convex hull
$C \subseteq R^n$에 포함된 점들의 모든 convex combination들의 집합을 $C$의 convex hull이라고 하며 **conv** $C$로 표기한다. Convex hull **conv** $C$은 항상 convex이며, 집합 $C$를 포함하는 가장 작은 convex set이다.

>**conv** $C = $ { $\theta_1 x_1 + \dotsi + \theta_k x_k \phantom{1} | \phantom{1} x_i \in C, \phantom{1} \theta_i \ge 0, \phantom{1} i = 1, \dotsi , k, \phantom{1} \theta_1 + \dotsi + \theta_k = 1$ }

아래 그림은  15개의 점으로 이뤄진 집합과 콩팥 모양의 집합에 대한 convex hull이다.

![](https://wikidocs.net/images/page/17384/02.03_Convex_Hull.PNG)

**[Fig2] Convex hull [1]**




</br> </br>

# 02-01-04 Cone

</br> </br>

Cone은 빛이 광원에서 뻣어나가는 모습처럼 어떤 방향으로는 무한히 진행되지만 나머지 방향에서는 정의되지 않는 집합이다. 어떤 집합이 cone이라고 말할 수 있으려면 원점에서 집합에 속한 임의의 한 점을 지나는 반직선(ray)을 만들어서 그 반직선이 집합에 포함되는지를 보면 된다. (따라서, Cone은 반드시 원점을 포함해야 한다.) Cone은 경계를 가지므로 affine set이 될 수 없다. 수학적으로 이 내용을 정의해보자.

## Cone
Cone은 반드시 원점을 포함해야 한다. 따라서. 원점에서 시작해서 집합에 속한 점 $x \in C$을 지나는 ray를 만들었을 때 $\theta x \in C$가 되면 집합 $C$를 **cone** 또는  **nonnegative homogenous**라고 한다. 

> $\theta x \in C$ with $x \in C$, $\theta \ge 0$

[참고] Affine set이나 convex set과는 달리, cone을 정의할 때는 ray의 출발점을 원점으로 가정하고 있기 때문에 집합에 속하는 하나의 점만을 사용해서 정의한다.

## Convex Cone
집합 $C$가 cone이면서 동시에 convex이면 이를 **convex cone**이라고 하며 다음과 같이 정의한다.

>$\theta_1 x_1 + \theta_2 x_2 \in C$ with $x_1, x_2 \in C$, $\theta_1, \theta_2 \ge 0$

다음 그림에서는 파이 모양의 convex cone을 보여주고 있다. 그림에서 $x_1$과 $x_2$는 경계에 속하는 점으로 $\theta_1$과 $\theta_2$가 모두 0이면 꼭지점이 되고, 둘 중 하나가 0이면 경계선이 되며, 둘 모두 0보다 크면 내부의 점이 된다.

![](https://wikidocs.net/images/page/17390/02.04_Convex_Cone.PNG)

**[Fig1] Convex Cone [1]**


## Conic combination
여러 점들을 linear combination할 때 계수를 0이상으로 제한하게 되면 이를 **conic combination** 또는 **nonnegative linear combination**이라고 한다. 

>A point of the form $\theta_1 x_1 + \theta_2 x_2 + ... + \theta_k x_k$ with $\theta_i \ge 0, i = 1,  ..., k$


이제 cone 정의를 conic combination 개념을 이용해서 일반화해 볼 수 있다. 즉, 어떤 집합 C에 속하는 임의의 여러 점들을 conic combination했을 때, 그 결과가 다시 집합 C에 속하면 그 집합은 conic set이라고 말할 수 있다. 

반대로 conic set C에 속하는 점들의 conic combination은 항상 C에 속하게 된다.


## Conic hull
$C \subseteq R^n$에 포함된 점들의 모든 conic  combination들의 집합을 $C$의 conic hull이라고 한다. Conic hull은 항상 집합 $C$를 포함하는 가장 작은 convex cone이다.

>{ $\theta_1 x_1 + \dotsi + \theta_k x_k \phantom{1} | \phantom{1} x_i \in C, \phantom{1} \theta_i \ge 0, \phantom{1} i = 1,\dotsc,k$ }

다음 그림에서는 임의의 set으로 정의되는 conic hull을 보여주고 있다.

![](https://wikidocs.net/images/page/17390/02.04_1_Conic_hull.PNG)

**[Fig2] Conic hull [1]**



</br> </br>

# 02-02 Some important examples

</br> </br>

이 절에서는 convex set의 주요 예제들을 살펴본다. 

* Trivial ones: empty set, point, line, line segment, ray
* Hyperplane: {$x : a^T x = b$}, for given $a, b$, $a \ne 0$
* Halfspace: {$x : a^T x \le b$} for $a \ne 0$
* Affine space: {$x : Ax = b$}, for given $A, b$
* Euclidean ball & ellipsoid
* Norm ball: {$x : \left \Vert x \right \| ≤ r$}, for given norm $\left \Vert · \right \|$ , radius r
* Convex cone : norm cone, normal cone, positive semidefinite cone 

</br> </br>

# 02-02-01 Convex set examples

</br> </br>

Convex set에는 point, line과 같이 trivial한 것부터 hyperplane, halfspace, ball, ellipsoid, polyhedra, cone 형태의 다양한 set들이 있다.

## Hyperplanes

Hyperplane은 $n$차원의 공간을 반으로 가르는 $n-1$차원의 subset으로 다음과 같이 정의된다. 여기서, $a$는 hyperplane의 normal vector이고 $b$는 원점에서 offset이다. Hyperplane은 convex set이자 affine set이다.

>{$x : a^T x = b$} with $ a \in R^n, a \ne 0, b \in R$

다음 그림에 hyperplane이 있다. 이 hyperplane에 속하는 임의의 x에 대해서 $(x - x_0)$와 $a$는 직교(orthogonal)한다. 따라서, $a^T (x - x_0) = 0$이므로  $a^T x =  b$라면 $b$는 $a^Tx_0$이다.

![](https://wikidocs.net/images/page/17371/02.05_Hyperplane.PNG)

**[Fig1] Hyperplane [1]**

## Halfspaces
Halfspace는 hyperplane을 포함한 나머지 한쪽 space를 말한다. 따라서, 하나의 hyperplane $a^T x = b$은 두 개의 halfspace를 정의한다. Halfspace는 convex set이지만 affine set은 아니다.

>{$x : a^T x \le b$} or {$x : a^T x \ge b$}  with $ a \in R^n, a \ne 0, b \in R$

Hyperplane $a^T x = b$일 때 halfspace $a^T x \ge b$는 normal vector a의 방향이 되며, halfspace $a^T x \le b$는 -a의 방향이 된다.

![](https://wikidocs.net/images/page/17371/02.06_Halfspace.PNG)

**[Fig2] Halfspace [1]**

참고로, {$x : a^T x \le b$}의 interior인  {$x : a^T x \lt b$}를 open halfspace라고 한다.

## Euclidean balls
Euclidean ball은 또다른 convex set으로 다음과 같이 정의된다. ($\left \Vert . \right \|_2$은 euclidean norm으로 $\left \Vert u \right \|_2 = (u^T u)^\frac{1}{2}$이다.) $x_c$는 중심이고 $r$은 반지름이다. 따라서, $B(x_c, r)$은 중심 $x_c$에서 반경 $r$ 이내의 모든 점들을 포함한다.

>$B(x_c, r)$ = { $x \phantom{1} | \phantom{1} \|x - x_c \|_2 \le r$ } = { $x \phantom{1} | \phantom{1} (x - x_c)^T (x - x_c) \le r^2$ } with $r\ge 0$


Euclidean ball을 다르게 표현하면 다음과 같다.

>$B(x_c, r)$ = { $x_c + ru \text{ } | \text{ } \| u \|_2 \le 1$ }

## Ellipsoids

Euclidean ball과 관련된 convex set으로 ellipsoid가 있으며 다음과 같이 정의된다. 

>$\mathcal{E}$ = { $x \text{ } | \text{ } (x - x_c)^T P^{-1} (x - x_c) \le 1$ }

여기서 $P = P^T \succ 0$로 $P$는 symmetric이고 positive definite이다. 벡터 $x_c \in C$는 ellipsoid의 중심이며, 행렬 $P$는 ellipsoid가 중심 $x_c$에서 모든 방향으로 얼마나 멀어지는가를 나타낸다. Ellipsoid의 축은 $\sqrt{&lambda;_i}$가 되며 $&lambda;_i$는 행렬 $P$의 eigenvalue를 말한다. 따라서, ball은 $P = r^2 I$인 ellipsoid의 특별한 case라고 할 수 있다.


다음 그림은 ellipsoid를 보여주고 있다. 중심 $x_c$는 점으로 장축과 단축은 line segment로 그려져 있다.

![](https://wikidocs.net/images/page/17371/02.07_Ellipsoid.PNG)

**[Fig3] Ellipsoid [1]**

Ellipsoid 식을 다음과 같이  $x_c$를 중심으로 $Au$ 벡터를 더하는 형태로 표현할 수도 있다.

>$\mathcal{E}$ = { $x_c + Au \text{ } | \text{ } \|u\|_2 \le 1$ }

여기서 $A$는 정방 행렬이고 nonsingular이다. 만일 $A = P^\frac{1}{2}$라고 하면 위의 식과 동일해져서 symmetric이고 positive definite라고 할 수 있다. 이때, $A$가 symmetric positive semidefinite이면  degenerate ellipsoid라고 하며 affine dimension은 $A$의 rank와 같다. Degenerate ellipsoid도 역시 convex이다.

## Norm balls
Norm ball이란 $x_c$를 중심으로 반경 $r$ 이내인 점들의 집합을 말한다. 단, euclidean ball은 euclidean norm으로 정의되는 반면 norm ball은 임의의 norm으로 반경이 정의된다.
$\left \Vert . \right \|$을 $R^n$의 임의의 norm이라고 할때 norm ball은 다음과 같이 정의된다.

>{ $x \phantom{1} | \phantom{1} \|x - x_c \| \le r$ } 

P-norm이 다음과 같이 정의될 때 norm ball의 모양은 다음과 같다.

>$ \left \Vert x \right \|\_{p}$ = $( \sum_{i=0}^n | x_i |^{p} )^{1/p}$ for $p \ge 1$

이 그림은 3D로 $p$값에 따라 norm ball의 모양을 보여준다. $p$가 1이상이어야 norm ball이 convex set임을 알 수 있다.

![](https://wikidocs.net/images/page/17371/02.07_2_norm_ball.png)

이 그림은 2D로 p값에 따라 norm ball의 모양을 보여준다.

![](https://wikidocs.net/images/page/17371/02.07_3_norm_ball2.PNG)

**[Fig4] Norm ball**

## Polyhedra
Polyhedron은 선형 부등식과 등식의 교집합으로 정의된다. Affine sets (즉, subspaces, hyperplanes, lines), rays, line segments, halfspaces는 모두 polyhedron이다. Polyhedra는 convex set이며 bounded polyhedron를 polytope이라고 부르기도 한다. 

>$\mathcal{P} = $ { $x$ | $a^T_i x \le b_i, i = 1, ..., m, c_j^Tx  = d_j, j = 1, ..., p$} 

하나의 등식 $c_j^Tx  = d_j$은 두 개의 부등식 $c^T_jx \le d_j$과 $c^T_jx \ge d_j$을 정의한다. 따라서, 등식 표현은 편의상 추가된 것으로 부등식만으로도  polyhedron을 정의할 수 있다.

다음 그림은 다섯 개 halfspace의 교집합으로 만들어진 육각형 polyhedron이다. 이  polyhedron은 outward normal vectors $a1, . . . ., a5$를 갖는다.

![](https://wikidocs.net/images/page/17371/02.09_Polyhedra.PNG)

**[Fig5] Polyhedra [1]**

행렬 표현으로 간단히 다음과 같이 정의하기도 한다.

>$\mathcal{P} = $ { $x$ | $A^Tx \preceq b, C^Tx  = d$}

$
A = 
\begin{bmatrix}
a^T_1 \\\
\cdots \\\
a^T_m
\end{bmatrix}
$
$
C = 
\begin{bmatrix}
c^T_1 \\\
\cdots \\\
c^T_p
\end{bmatrix}
$

#### Simplexes
Simplex는 $n$차원 공간에서 만들 수 있는 가장 간단한 다각형으로 $n+1$개의 점으로 만들어진다.

만일 $k + 1$개의 점 $v_0, ... , v_k \in R^n$가 있고 이들이 affinely independent하다면 simplex는 이 $k+1$개 점들의 convex hull로 정의된다. 참고로, affinely independent는 $v_1 − v_0, . . . , v_k − v_0$가 linearly independent하다는 의미이다.

>$C = $ **conv** {$v_0, . . . , v_k$}$ = $ { $\theta_0 v_0 + · · · + \theta_k v_k $ | $\theta \succeq 0, 1^T \theta = 1$}

다음 그림은 0차원에서 3차원까지의 simplex를 보여주고 있다. 0차원에서는 점, 1차원에서는 선분, 2차원에서는 삼각형, 3차원에서는 사면체가 해당 차원의 simplex이다.

![](https://wikidocs.net/images/page/17371/02.02_10_Simplex.PNG)

**[Fig2] Simplex [source - wikipedia]** 

대표적인 simplex의 종류에는 probability simplex가 있다.

>$C = $ **conv** {$e_1, . . . , e_n$}$ = $ { $\theta$ | $\theta \succeq 0, 1^T \theta = 1$}

</br> </br>

# 02-02-02 Convex Cone examples

</br> </br>

다음은 convex cone의 예로는 norm cone, normal cone, positive semidefinite cone 등이 있다.

## Norm cone
**Norm cone**은 반경 $t$ 이내인 점들로 이뤄진 cone으로 $(x,t)$로 정의되는 $R^{n+1}$차원의 convex cone이다. 이때, 반경은  임의의 norm으로 정의된다.

>$C = $ {$(x, t) : \left \Vert x \right \| \le t$} $\subseteq R^{n+1}$, for a norm $\left \Vert  · \right \|$ 

아래 그림에는 $l_2$ norm $\left \Vert  · \right \|_2$에 대한 norm cone이 그려져 있다. 이를 second-order cone 또는 ice cream cone이라고도 부른다.

![](https://wikidocs.net/images/page/17371/02.08_Norm_Cone.PNG)

**[Fig1] Norm Cone [1]**

## Normal Cone
집합 $C$에 대해서 $x \in C$일 때, 다음 식을 만족하면 **normal cone**이라고 한다.
Normal cone은 $C$에 상관 없이 항상 convex cone이다.


>$N_C(x) = $ { $g: g^T (y - x) \le 0, \text{ for all } y \in C$ }

Normal cone은 집합 $C$에 속하는 임의의 점 $x$와 집합 $C$의 모든 점 $y$와이 차 벡터인 $y-x$와 내적이 항상 0보다 작은 벡터인 $g$로 정의되는 cone을 말한다. 벡터 $g$와 $y-x$의 내적이 0보다 작다는 의미는 두 벡터의 각도가 (즉, $cos\theta$가 음수인 구간인) $ 90 \le \theta \le 270$이란 것을 의미한다. 

* $x$가 boundary에 포함된 점일 경우 모든 $y-x$ 벡터와의 각도가 $ 90 \le \theta \le 270$인 벡터 $g$는 supporting hyperplane의 normal뿐이다. 
* $x$가 꼭지점일 경우 supporting hyperplane이 여러개 존재하기 때문에 벡터 $g$는 파이 모양이 된다. 
* $x$가 non-boundary 영역의 점일 경우 $g$는 영벡터뿐이다. 

다음 그림에 normal vector이 그려져 있다.

![](https://wikidocs.net/images/page/17371/02.04_2_Normal_Cone.PNG)

**[Fig2] Normal Cone [3]**

## Positive semidefinite cone
**Positive semidefinite** $\mathbb{S}^n_+$의 정의는 다음과 같다. 이때 $\mathbb{S}^n$는  $n × n$ symmetric matrix이다.
>$\mathbb{S}^n_+ =$ { $ X \in \mathbb{S}^n : X \succeq 0 $} 

$\mathbb{S}^n_+$는  $\theta_1, \theta_2 \ge 0$, $A, B \in  \mathbb{S}^n_+$이면 $\theta_1 A + \theta_2 B \in  \mathbb{S}^n_+$를 만족하기 때문에 convex cone이며 **positive semidefinite cone**이라고 부른다.

다음 그림은 $S^2_+$에서의 positive semidefinite cone의 boundary를 $ (x, y, z) \in R^3$ 상에서 그린 그림이다. 행렬 $X$는 positive semidefinite이기 때문에 determinant가 0이상 이어야 한다.

$
X = 
\begin{bmatrix}
x, y \\\
y, z
\end{bmatrix}
\in \mathbb{S}^2_+ \iff x \ge 0, z \ge 0, xz \ge y^2$

![](https://wikidocs.net/images/page/17371/02.10_Positive_Semidefinite_Cone.PNG)

**[Fig3] Positive semidefinite cone [1]**





</br> </br>

# 02-03 Operations that preserve convexity

</br> </br>

이 절에서는 convex set의 convexity를 유지하는 연산에 대해 살펴본다. 집합의 convexity를 판별하거나 hyperplanes, halfspaces, norm balls과 같은 간단한 convex set으로 원하는 convex set을 만들 때 이런 연산들이 유용하다.

Convexity를 유지하는 연산에는 다음과 같은 것들이 있다.

* Intersection
* Affine functions
* Perspective function
* Linear-fractional functions

## Intersection
Convex set의 교집합은 convex이다. 즉, $S_1$과 $S_2$이 convex라면 $S_1 \\cap S_2$은
convex이다. 집합이 무한히 존재할 때에도 이와 같은 성질은 유지된다. (참고로 subspaces, affine sets, convex cones도 교집합 연산에 닫혀있다.)

Set의 convexity는 무한한 halfspace의 교집합으로 표현할 수 있으며 그 반대도 성립한다. 
즉, closed convex set $S$는 $S$를 포함하는 모든 halfspace의 교집합으로 다음과 같이 정의할 수 있다.

>$S = \bigcap$ {$\mathcal{H} | \mathcal{H}$ halfspace, $S \subseteq \mathcal{H}$}

## Affine functions

$A \in R^{m \times n}$이고 $b \in R^{m}$일 때, $f : R^n \to R^m$인 $f(x) = Ax + b$을 affine function이라고 한다.

이때, $C \subseteq R^n$가 convex이고 $D \subseteq R^m$가 convex이면

* affine image인 $f(C) = ${$f(x) | x \in C$}는 convex이다.
* affine preimage인 $f^{-1}(D) = ${$x | f(x) \in D$}는 convex이다.

Affine function인 **scaling and translation**, **projection**, **sum of two sets**, **partial sum of set**과 같은 연산을 convex set에 적용하면 결과는 convex set이다.

Linear matrix inequality의 해집합 {$x | x_1 A_1 + · · · + x_m A_m \preceq B$} (with $A_i, B \in S^n$)도 convex이다. 

Hyperbolic cone {$x$ | $x^T P x \lt (c^T x)^2, c^T x \gt 0$} (with $P \subseteq S^n_+$, $c \in R^n$)도 convex이다. 

## Perspective function
**Perspective function**은 카메라에 상이 맺히는 것과 같이 멀리 있는 물체는 작게 가까이 있는 물체는 크게 원근에 따라 상을 만드는 함수이다. 따라서, 피사체는 $R^{n+1}$차원의 공간에 있고 상은 $R^n$ 차원의 평면에 맺히게 된다.

Perspective function을 수식으로 정의하면 $P : R^{n+1} \rightarrow R^{n}$로서 **dom** $P = R^{n} \times R_{++}$이고 $P(z,t) = z/t$와 같다. (여기서 $R_{++} =$ {$x \in R$ | $x \gt 0$}이다.) 함수를 해석해 보면 벡터의 마지막 요소가 1이 되도록 정규화를 하며, 마지막 요소를 제거해서 차원을 $R^{n+1}$에서 $R^n$로 줄인다. Perspective function은 $C \subseteq$ **dom** $P$가 convex라면 image $P(C) = ${$P(x) | x \in C$}도 convex가 만든다.

Perspective function은 pin-hole 카메라가 작동하는 원리와 같다. 멀리 있는 피사체가 pin-hole을 통과하게 되면 pine-hole과 피사체와의 거리에 비례해서 크기가 축소되기 때문이다. 다음 그림에 이런 원리가 그려져 있는데 직관적으로 동일한 captured ray 안에 피사체가 존재하면 상도 동일하게 맺힐 것이라는 것을 알 수 있다.

![](https://wikidocs.net/images/page/17372/02.03_03_pine_hole.png)

**[Fig 1] pin-hole 카메라 작동 원리**


아래 그림에서 피사체의 한 점이 좌표 $(x_1, x_2, x_3)$로 표현된다고 하면, 검정색 가로선은 $x_3 = 0 \in R^3$이고 원점을 포함한다. 이때 원점이 pine-hole이 되며 Image plane인 $x_3 = −1$에 피사체가 맺힌다. 피사체의 점은 perspective function에 의해 맵핑되어 Image plane에 점 $-(x_1 / x_3, x_2 / x_3)$으로 맺히게 된다.

![](https://wikidocs.net/images/page/17372/02.03_04_pine_hole_camera_model.png)

**[Fig 2] pin-hole 카메라의 perspective function [1]**
## Linear-fractional functions
Linear-fractional function은 perspective function과 affine function으로 구성된다. 

> $f(x) = (A x + b)/(c^T x + d)$, **dom** $f(x) = $ {$x $ | $c^T x + d \gt 0$} ($A \in R^{m \times n}, b \in R^m, c \in  R^n, d \in R$)

Linear-fractional function에서 $c = 0$이고 $d \gt 0$이면 affine function이 된다. 따라서, affine function과 linear function은 linear-fractional function의 special case라고 할 수 있다.

기하학적으로 이 함수는 affine function $A x + b$를 적용하고  projection function을 다시 적용한 것으로 볼 수 있다. 단, vector의 마지막 항목이 $c^T x + d$인 경우이다.

다음 그림은 linear fractional function $f(x) = \frac{1}{(x_1 + x_2 + 1)} x$, **dom** $f(x) = $ {$(x_1, x_2) $ | $x_1 + x_2 + 1 \gt 0$}의 domain과 image를 보여주고 있다. $C \subseteq R^2$일 때 왼쪽 그림은 domain이며, 점선은 domain $f$의 boundary이다. 오른쪽 그림은 $f$의 image이며 점선은  domain $f^{-1}$의  boundary이다.


![](https://wikidocs.net/images/page/17372/02.03_05_linear_fractional_function.PNG)

**[Fig 3] Linear-fractional functions [1]**

</br> </br>

# 02-04 Generalized inequalities

</br> </br>

1차원 실수 공간 $R$에서는 두 개의 숫자 1과 2가 있을 때 1보다 2가 크다고 말할 수 있다. 그러면, n차원 실수 공간 $R^n$에서 두 점 $x_1$과 $x_2$가 있을 때 두 점 중 어떤 점이 더 크다고 말할 수 있을까? 그렇다고 말하기는 어렵다. 

이 절에서는 n차원 실수 공간 $R^n$에서 두 점의 순서를 비교하기 위한 **generalized inequality**를 살펴보고, set의 minimum과 minumal도 함께 살펴볼 것이다.

## Proper cone

Convex cone $K \subseteq R^n$가 다음 성질을 만족하면 **proper cone**이라고 한다.

* K is closed. (boundary를 포함한다.)
* K is solid. (interior가 empty가 아니다.)
* K is pointed. (직선을 포함하지 않는다.) (또는  $x \in K, − x \in K \implies x = 0$)

$n$차원 공간에서 pointed & closed convex cone이 $n-1$차원 이하의 subspace에서 정의된다면 interior가 비게 된다. 왜냐하면, $n-1$차원 이하의 cone은 $n$ 차원의 open ball을 포함하지 못하기 때문에 interior가 정의되지 않는다. 따라서, cone은 solid하지 않게 되고 proper cone이 될 수 없다. 예를 들어, $R^3$에 정의된 2차원 파이 모양의 pointed & closed convex cone은 proper cone이 아니다.

Interior의 정의는 *[Wikipedia 정의](https://en.wikipedia.org/wiki/Interior_(topology))*를 참고하라.


## Generalized inequality
Proper cone을 이용하면$R^n$의 partial ordering인 **generalized inequality**를 다음과 같이 정의할 수 있다.  Generalized inequality는 $R$의 standard ordering과 비슷한 속성을 갖는다.

>$x \preceq_{K} y \iff y − x \in K$

비슷하게 strict parital ordering을 다음과 같이 정의할 수 있다.

>$x \prec_{K} y \iff y − x \in $ **int** $K$

만일 $K = R_{+}$이라면 $\preceq_{K}$는 $R$에서의 일반적인 $\le$과 같다.

#### Properties of generalized inequalities
Generalized inequality $\preceq_{K}$는 다음과 같은 속성을 만족한다.


* $\preceq_{K}$ is **preserved under addition**: if $x \preceq_{K} y$ and $u \preceq_{K} v$, then $ x+u \preceq_{K} y +v$.
* $\preceq_{K}$ is **transitive**: if $x \preceq_{K} y$ and $y \preceq_{K} z$ then $x \preceq_{K}  z$.
* $\preceq_{K}$ is **preserved under nonnegative scaling**: if $x \preceq_{K} y$ and $α ≥ 0$ then $αx \preceq_{K} αy$.
* $\preceq_{K}$ is **reflexive**: $x \preceq_{K} x$.
* $\preceq_{K}$ is **antisymmetric**: if $x \preceq_{K} y$ and $y \preceq_{K} x$, then $x = y$.
* $\preceq_{K}$ is **preserved under limits**: if $x_i \preceq_{K}  y_i$ for $i = 1, 2, . . ., x_i \to x$ and $y_i \to y$ as $i \to ∞$, then $x \preceq_{K} y$.

Strict generalized inequality 위의 속성에 대응하는 속성을 갖는다.

## Minimum and minimal elements

$R$의 ordering과 $R^n$의 generalized ordering의 가장 큰 차이는 **linear ordering**이다. $R$에서는  $x \lt y$ 또는 $x \gt y$와 같이 두 점을 비교할 수 있지만  generalized inequality는 그렇지 못하다. 따라서, generalized inequality 문맥으로 maximum과 minimum 개념을 정의하는 것이 훨씬 더 복잡할 것으로 예상해 볼 수 있다.

#### Minimum elements
$x \in S$이 모든 $y \in S$에 대해 $x \preceq_{K} y$이면 $x$는 집합 $S$의 **minimum** element이다. 비슷한 방식으로  **maximum**도 정의할 수 있다. 어떤 집합에서 minimum이 존재한다면 unique하다. 즉, minimum은 오직 하나만 존재한다. 

어떤 점 $x \in S$가 $S$의 minimum이라면 $S \subseteq x + K$이다. 여기서 $x + K$의 의미는 ($\preceq_{K}$에 따라) 모든 점들은 $x$와 비교할 수 있으며 $x$와 같거나 크다는 의미이다.

#### Minimal elements
비슷한 개념으로 **minimal**이 있다. $x \in S$이 모든 $y \in S$에 대해 $y \preceq_{K} x$인 경우는 $y=x$인 경우뿐이라면 $x$는 집합 $S$의 **minimal** element이다. 비슷한 방식으로  **maximal**도 정의할 수 있다. 집합은 여러 개의 minimal element를 가질 수 있다.

어떤 점 $x \in S$가 $S$의 minimal이라면 $(x - K) \cap S = $ {$x$}이다. 여기서 $x - K$의 의미는 ($\preceq_{K}$에 따라) 모든 점들은 $x$와 비교할 수 있으며 $x$와 같다는 의미이다.

$K = R_{+}$의 경우 minimal과 minimum은 동일하며 일반적인 minimum의 정의에 부합한다.

#### $R^2_{+}$ cone에서 minimum과 minimal

$R^2_{+}$ cone $K$를 고려해 보자. Inequality $x \preceq_{K} y$는 y가 x보다 오른쪽 위에 있다는 의미이다.  $x \in S$일 때 $x$가 minimum이란 이야기는 $S$의 모든 점이 $x$보다 오른쪽 위에 있다는 의미이다. $x$가 minimal이란 이야기는 $S$에는 $x$의 왼쪽 아래에 있는 점이 없다는 의미이다.

아래 그림에서 $S_1$은 minimum $x_1$을 갖는다. 집합 $x + K$은 옅은 회색으로 표시되어 있으며 집합 $S_1$은 $S_1 \subseteq x + K$이기 때문에 $x_1$은  minimum이다. $S_2$은 minimal $x_2$을 갖는다. 집합 $x - K$은 옅은 회색으로 표시되어 있으며 집합 $S_2$은 $(x - K) \cap S = $ {$x$}이기 때문에  $x_2$는 minimal이다.

![](https://wikidocs.net/images/page/17373/02.06_01_Minimum_and_minimal.PNG)

**[Fig1] Minimum and minimal elements [1]**

</br> </br>

# 02-05 Separating and supporting hyperplanes

</br> </br>

이 절에서는 convex set의 대표적인 특성을 나타내는 두 theorem인 **separating hyperplane theorem**과 **supporting hyperplane theorem**을 살펴볼 것이다.

## Separating hyperplane theorem
서로 교집합을 갖지 않는 disjoint convex set이 여러 개가 있다고 해보자. 이들을 분리하려면 어떻게 하면 좋을까? 가장 간단한 방법은 convex set 사이에 직선을 그어보는 것이다. 실제 이 방법은 classification에서 가장 많이 그리고 기본적으로 사용하는 방법이다. 그리고, 이 방법을 지지하는 이론이 바로 **separating hyperplane theorem**이다. 

만일, 두 개의 disjoint convex set $C$와 $D$가 있다고 해보자. 그러면, $x \in C$일 때  $a^T x \le b$이고 $x \in D$일 때  $a^T x \ge b$인 $a \ne 0$와 $b$가 존재하게 된다. 다시 말하면, affine function $a^T x -  b$는 $C$에서는 nonpositive이고 $D$에서는 nonnegative이다. 이때, hyperplance {$ x | a^T x =  b$}를 $C$와 $D$에 대한 **separating hyperplane**이라고 한다.

다음 그림은 disjoint convex set인 $C$와 $D$를 나누는 separating hyperplane을 보여주고 있다.


![](https://wikidocs.net/images/page/17374/02.05_01_Seperating_hyperplan_theorem.PNG)

**[Fig 1] Separating hyperplane [1]**

Separating hyperplane theorems의 역은 성립하지 않는다. 즉, separating hyperplane이 존재한다고 해서 두 convex set이 (교집합이 없는) disjoint convex set은 아닐 수 있다. 가장 간단한 반례로 두 convex set이 $C = D = $ {$0$} $\subseteq R$와 같이 같더라도 $x = 0$은 $C$와 $D$를 분리한다는 것을 알 수 있다.

#### Strict separation

만일 separating hyperplane이 더 강한 조건인 $x \in C$일 때  $a^T x \lt b$이고 $x \in D$일 때  $a^T x \gt b$를 만족한다면, 이를 $C$와 $D$에 대한 **strict separation**이라고 한다. Disjoint closed convex set이 strict serparaton일 필요는 없지만 많은 경우에 이 조건은 성립될 수 있다.


## Supporting hyperplanes theorem
**Supporting hyperplane theorem**은 임의의 nonempty convex set $C$와 $x_0 \in$ **bd** $C$가 있을 때, 점 $x_0$에서 $C$의 **supporting hyperplane**이 존재하는 것을 말한다. 

그렇다면 supporting hyperplane이란 무엇인가? 먼저 점 $x_0$가 boundary **bd** $C$의 점이라고 하자. 집합 내의 모든 점 $x \in C$에 대해  $a^T x \le a^T x_0$ ($a \ne 0$)을 만족하면, hyperplane {$x | a^T x = a^T x_0$}은 점 $x_0$에서 집합 $C$의 **supporting hyperplane**이라고 한다. 

[참고] boundary는 $x_0 \in$ **bd** $C = $ **cl** $C$ $\setminus$ **int** $C$와 같이 전체 set에서 interior를 빼서 정의할 수 있다.

기하학적으로 supporting hyperplane {$x | a^T x = a^T x_0$}은 점 $x_0$에서 접선으로 공간에서 집합 $C$를 분리하며, halfspace $a^T x \le a^T x_0$는 집합 $C$를 포함한다.

![](https://wikidocs.net/images/page/17374/02.05_02_Supporting_hyperplane_theorem.PNG)

**[Fig 2] Supporting hyperplane [1]**





</br> </br>

# 02-06 Dual cones and generalized inequalities

</br> </br>

이 절에서는 cone과 쌍을 이루는 dual cone에 대해 살펴보고 dual cone을 이용한 dual generalized inequalities에 대해서 살펴본다. Dual generalized inequalities를 이용하면 scalar로 된 내적 값으로 비교하기 때문에 비교가 매우 용이해진다.

</br> </br>

# 02-06-01 Dual cones

</br> </br>

## Dual cones

Dual cone은 cone과 쌍을 이뤄서 정의되며, 표기는 cone은 $K$로 dual cone은 $K^∗$로 한다. Dual cone도 cone이며 $K$의 convex 여부와 상관없이 $K^∗$은 항상 convex이다. 다음 식과 같이 dual cone은 set의 점 $x$와 내적을 했을 때 0보다 큰 점인 $y$의 집합으로 정의된다.


>$K^∗ = $ {$y$ | $x^T y \ge 0$ for all $x \in K$}

점 $x$와 점 $y$의 내적이 0보다 크려면 두 벡터 사이의 각도가 $cos\theta \ge 0$인 구간인 $0 \le \theta \le 90$과 $270 \le \theta \le 360$이 된다. 따라서, dual cone의 boundary는 cone의 boundary에서 supporting hyperplane을 만들었을 때 -normal vector의 방향으로 생성된다. 아래 그림을 보면 dual cone이 정의되는 구간을 확인할 수 있다. **결론적으로 dual cone의 구간은 cone의 원점에서 정의되는 모든 supporting hyperplane들의 -normal vector 방향의 구간임을 알 수 있다.**

![](https://wikidocs.net/images/page/17422/02.06_01_2_dual_cone.PNG)

**[Fig1] Dual cone 정의 구간**

기하학적으로 $y \in K^∗$일 때 $-y$는 원점에서 $K$를 support하는 hyperplane의 normal이다. 다음 그림을 보면 왼쪽은 inward normal $y$를 갖는 halfspace가 cone $K$를 포함하므로 $y \in K^∗$이다. 오른쪽은 inward normal $z$를 갖는 halfspace가 cone $K$를 포함하지 않으므로 $y \notin K^∗$이다. 

![](https://wikidocs.net/images/page/17375/02.06_01_dual_cone.PNG)

**[Fig2] Dual cone과 supporting hyperplanne의 normal[1]**

## Dual cones examples
다음은 cone과 dual cone의 예들이다. 이 중 처음 세 개는 **self-dual**로 cone과 dual cone이 동일하다. 마지막 예는 $l_\infty$ cone의 dual cone이 $l_1$ cone임을 말하고 있다 반대로 $l_1$ cone의 dual cone이  $l_\infty$ cone이다.

* $K = R^n_+, K^* = R^n_+$
* $K = S^n_+, K^* = S^n_+$
* $K = $ {$(x, t)$ | $ \left \Vert x \right \|_2 \le t $}, $K^* = $ {$(x, t)$ | $ \left \Vert x \right \|_2 \le t $}
* $K = $ {$(x, t)$ | $ \left \Vert x \right \|_1 \le t $}, $K^* = $ {$(x, t)$ | $ {\left \Vert x \right \|} {\infty} \le t $}

#### $l_2$ cone은 self-dual
아래 그림은 $l_2$ cone이 self-dual임을 보여주고 있다.  즉, $x \in K$가 boundary 점일 때 $x$의 supporting hyperplane의 normal인 $-y$는 $K$의 경계와 정확히 일치하며, $y$는 dual cone $K^∗$의 경계가 되므로 cone $K$와 dual cone $K^*$는 일치한다.

![](https://wikidocs.net/images/page/17375/02.06_03_L2_self-dual.PNG)

**[Fig3] $l_2$ cone과 dual cone**

#### $l_\infty$ cone의 dual cone은 $l_1$ cone
아래 그림은 $l_\infty$ cone의 dual cone이 $l_1$ cone임을 보여주고 있다. 즉, $x \in K$가 boundary 점일 때 $x$의 supporting hyperplane의 normal인 $-y$는 $K$의 내부로 들어가서 $l_1$ cone의 경계와 일치하게 된다.

![](https://wikidocs.net/images/page/17375/02.06_04_L_inf_dual_norm.PNG)

**[Fig4] $l_\infty$ cone과 dual cone**


</br> </br>

# 02-06-02 Dual generalized inequalities

</br> </br>

Proper cone으로 generalized inequality를 정의할 수 있다면, dual cone으로도 dual generalized inequality를 정의할 수 있지 않을까? Dual cone이 proper하다면 그럴 수 있다.

이 절에서는 proper dual cone을 이용해서 dual generalized inequality를 정의해보고 minimum과 minimal도 재정의 해보도록 하겠다.

## Dual generalized inequalities
Proper dual cone으로 generalized inequality를 정의해보면 다음과 같다. 어떤 점 $y$가 있을 때  $K$의 모든 점 $x$와 내적을 해서 0보다 크다면, $y$는 dual cone $K^*$에서 0보다 크다.

이때, $\succeq_{K^*}$를  $\succeq_K$의 **dual**이라고 한다. 즉, **dual generalized inequality**이다.

>$y \succeq_{K^*} 0 \iff y^T x \ge 0$ for all $x \succeq_K 0$


#### Generalized inequality와 dual의 주요 속성

* $x \preceq_K y$  if and only if $\lambda^T x \le \lambda^T y$ for all $\lambda \succeq_{K^*}  0$.
* $x \prec_K y$  if and only if $\lambda^T x \lt \lambda^T y$ for all $\lambda \succeq_{K^*}  0, \lambda \ne 0$.

$K = K^{\*\*}$이고 $\preceq_K^* $와 연관된 
dual generalized inequality는 $\preceq_K$이기 때문에, generalized inequality와 dual이 바뀌더라도 이런 속성은 유지된다. 

예를 들어서, $\lambda \preceq_K^* \mu$ if and only if $\lambda^T x \le \mu^T x$ for all $x \succeq_K  0$이다.


## Minimum and minimal elements via dual inequalities
Proper cone $K$로 유도된 generalized inequality에 대해, dual generalized inequalities를 이용하여 (possibly nonconvex) 집합 $S \subseteq R^m$의 minimum, minimal element에 대한 특성을 표현할 수 있다.

#### Minimum element
모든 $ \lambda \succ_K^* 0$와   $z \in S$에 대해

$x$가 $\lambda^T z$의 unique minimizer라면, 
generalized inequality $ \succ_K^* $에 대해 $x$는 $S$의 minimum이다.  (Minimizer란 어떤 함수를 최소로 만드는 종속변수 값을 말한다. 여기서 함수는 $\lambda^T z$가 되고 종속 변수는 $z$이며 minimizer는 $x$가 된다.)

기하학적으로 이 의미는 어떤 $ \lambda \succ_K^* 0 $이 있을 때 hyperplane { $z$ | $ \lambda^T (z-x) = 0 $}은 $x$에서 $S$의 strict supporting hyperplane이라는 것을 말한다. (Strict supporting hyperplane이란 점 $x$에서만 hyperplane이 교차한다는 것을 말한다.) 이때, 집합 $S$가 convex일 필요는 없다. 다음 그림에는 minimum $x$와 strict supporting hyperplane이 그려져 있다.

![](https://wikidocs.net/images/page/17375/02.06_02_Minimum_element.PNG)

**[Fig1] Minimum element [1]**

#### Minimal element
Minimal의 경우 필요 조건과 충분 조건 사이에 약간의 차이가 있다. 

$\lambda \succ_K^* 0$와 $z \in S$에 대해 $x$가 $\lambda^T z$의 minimizer라면 $x \in S$는 $S$의 minimal이다. 즉, $x$가 minimal의 경우 $\lambda^T z$의 unique minimizer가 아니다. 따라서, 동일한  $\lambda$에 대해서 여러 minimal이 존재할 수도 있고 여러 $\lambda$에서 여러 minimal이 존재할 수도 있다.

다음 그림을 보면 여러 개의 minimal이 존재하는 것을 확인할 수 있다. 왼쪽 아래에 검정색 굵은 선으로 된 부분이 minimal이 존재하는 영역이다. 
여기서 $\lambda^T_1 z$의 minimizer는 $x_1$이며 $\lambda_1 \succ_K^* 0$ 이므로 minimal이다. 또다른 minimizer로 $x_2$가 존재한다. 


![](https://wikidocs.net/images/page/17375/02.06_05_Minimal_element.PNG)

**[Fig2] Minimal element [1]**

하지만 반대는 성립하지 않는다. 점 $x$가 집합 $S$에 minimal이더라도 어떤 $\lambda$와 $z \in S$에 대해 $x$는 $\lambda^T z$의 minimizer는 아니다. 다음 그림을 보면 minimizer가 아닌 minimal을 확인할 수 있다. 또한, 여기서 convexity가 역을 성립시키는데 중요한 조건임을 알 수 있다.

![](https://wikidocs.net/images/page/17423/02.06_06_Minimal_element2.PNG)

**[Fig3] Minimal이지만 minimizer가 아닌 예 [1]**

이 converse theorem은 $\lambda_1 \succ_K^* 0$으로 강화되지는 않는다. 아래 왼쪽 그림을 보면 $x_1 \in S_1$이 minimal이지만 $\lambda_1^T x_1$의 minimizer는 아님을 알 수 있다. 오른쪽 그림은 $x_2 \in S_2$이 minimal은 아니지만  $\lambda_2^T x_2$의 minimizer라는 것을 알 수 있다.

![](https://wikidocs.net/images/page/17423/02.06_07_Minimal_element3.PNG)

**[Fig4] $\lambda_1 \succ_K^* 0$으로 강화되지 않는 Minimal 예  [1]**

#### Optimal production frontier
$n$가지 자원 (노동, 전기, 천연가스, 물 등)을 이용해서 생산해야 하는 제품이 있다고 해보자. 
이 제품은 여러 방식으로 생산될 수 있다. 각 생산 방법 별로 자원 벡터 $x \in R$가 있으며 이때 $x_i$는 자원 $i$의 소비량을 의미한다. 자원 소비량은 $x_i \ge 0$이고 자원은 가치가 높다고 가정한다.

생산 집합 $P \subseteq R^n$은 모든 자원 벡터 $x$의 집합으로 정의된다. 이때, minimal 자원 벡터를 갖는 생산 방법 $P$를 **Pareto optimal** 또는 **efficient**라고 한다. 또한, $P$의 minimal 집합을 **efficient production frontier**라고 한다. 

Pareto optimality에 대해서 간단히 살펴보자. 

자원 벡터 $x$를 갖는 생산 방법 $P_x$와 자원 벡터 $y$를 갖는 생산 방법 $P_y$가 있다고 하자. 이때, 모든 $i$에 대해 $x_i \le y_i$이고 일부 $i$에 대해서는 $x_i \lt y_i$라면 $P_x$는  $P_y$보다 좋다고 말할 수 있다. 다시 말해서 다른 방법보다 자원을 더 많이 사용하지 않거나 최소한 한 자원을 덜 사용하면 더 좋은 방법이라고 말할 수 있다. 즉, $x \preceq y$이고 $x \ne y$인 경우에 해당한다. 
생산 방법 $P_x$보다 더 좋은 방법이 없다면 $P_x$를 Pareto optimal이라고 한다.

아래 식을 최소화하면 Pareto optimal 생산 방법을 찾을 수 있다. 여기서 $ \lambda_i$는 자원 $i$의 가격이라고 할 수 있다. $P$에 대해 $ \lambda^T x$를 최소화하면 가장 저렴한 생산 방법을 찾을 수 있다. 가격은 양수이므로 최소화 결과는 항상 Pareto optimal이다.

> $ \lambda^T x =$ $ \lambda^T_1 x_1 + \lambda^T_2 x_2 + ... + \lambda^T_n x_n, \lambda \succ 0 $

다음 그림은 이런 상황을 잘 보여주고 있다. 그림에서 $x_1, x_2, x_3$는  Pareto optimal인데  $x_4, x_5$는 아니다.

![](https://wikidocs.net/images/page/17423/02.06_08_Pareto_optimal.PNG)

**[Fig5] Optimal production frontier [1]**

</br> </br>

# 03 Convex functions

</br> </br>

이 장에서는 앞장에서 다룬 Convex Set과 유사하게 Convex function의 의 정의와 예제, 주요 속성, Convexity를 유지하는 연산에 대해 살펴볼 것이다.


</br> </br>

# 03-01 Basic properties and examples

</br> </br>

이 절에서는 Convex function의 정의와 대표적인 Convex 함수의 종류들을 살펴본다.
또한 convex함수의 특성들을 살펴본다.

</br> </br>

# 03-01-01 Definition

</br> </br>

## Convex function 
함수 $f:\mathbb{R}^n \rightarrow \mathbb{R}$의 정의역이 convex set이고, 임의의 두점 $x, y ∈dom$ $f$를 잇는 선분 위의 모든 점들이 함수 $f$ 위의 점들보다 위에 있다면 그 함수 $f$는 convex 이다.

>$f(θx+(1−θ)y)≤θf(x)+(1−θ)f(y)$,  with  $0≤θ≤1$,  for all $x,y∈dom$ $f$         

위의 식은 기하학적으로 [Fig1]에서 보는 것처럼 함수 $f$상에 존재하는 임의의 점 $x$와 점$y$를 잇는 선분이 함수 $f$의 그래프 위에 존재하는 것을 의미한다. 즉, 두 점 $x,y$의 convex combination에서의 $f$의 값은 $f(x), f(y)$의 convex combination의 값보다 작거나 같다.  

</br>
![](https://wikidocs.net/images/page/17495/convex_function01.png)

##### [Fig1] Convex Function [2]

## Strictly convex  
함수 $f:\mathbb{R}^n \rightarrow \mathbb{R}$가 임의의 서로 다른 두 점 $x, y ∈dom$ $f$ 과  $0<θ<1$에 대해 다음의 조건을 만족하면 이를 strictly convex 이라 한다.

>$f(θx+(1−θ)y)<θf(x)+(1−θ)f(y)$,  with  $0<θ<1$, $x ≠ y$,  for all  $x, y∈dom$ $f$



## Strongly convex
$f −  {m \over 2}\left \lVert x \right \rVert_{2}^{2}$, with $m > 0$ 가 convex 이면 $f$는 strongly convex이다.

### [Note] strongly convex ⇒ strictly convex ⇒ convex


## Concave function
함수 $-f$가 convex이면,  $f$는 concave라고 한다.

Linear 함수를 포함한 모든 affine 함수 $f(x) = a^T x+b$ 는 다음 식을 만족한다. </br>
>\begin{align}
f(θx+(1−θ)y) &= a^T (θx+(1−θ)y) +b \\\
&= θ a^T x + (1−θ) a^T y +  θb +  (1−θ) b \\\
&= θf(x)+(1−θ)f(y) \ \ \ \text{for all}  \ x,y∈dom \text{ } f, \ \text{with}  \ 0≤θ≤1
\end{align} 

즉, affine 함수는 항상 convex이며, 동시에 concave 이다.

</br> </br>

# 03-01-02 Examples of convex functions

</br> </br>

이 절에서는 대표적인 convex function에 대해 살펴본다. Convex fnuction에는 다음과 같은 것들이 있다.

* Exponential function
* Power function
* affine
* quadratic
* least squares loss
* norm
* indicator function
* support function
* max function 

## Univariate function
*  Exponential function: 
임의의 실수 $a$에 대해서, $e^{ax}$ 는 convex 이다.</br>
> $e^{ax}$  is convex for any $a \in \mathbb{R}$

* Power function: 
음수가 아닌 실수 $x, a \in \mathbb{R}\_{+}$ 에 대해서,  $a$가 속한 구간에 따라  $x^a$는 convex  혹은 concave이다. </br>
> $x^{a}$  is convex on $\mathbb{R}\_{+}$ for any $a \geq 1$  or  $a \leq 0$  </br>
> $x^{a}$  is concave on $\mathbb{R}\_{+}$f for any $0 \leq a \leq 1$  </br>


## Aﬃne function
[03-01-01](https://wikidocs.net/17495) 절에서 언급한 바와 같이 모든 affine function은 convex이면서 동시에 concave 이다.

* on $\mathbb{R}$ and $\mathbb{R}^ n$  </br> 
> $a^Tx + b$  is convex and concave

* on $\mathbb{R}^ {m \times n}$  </br>
> $\text{tr}(A^TX) + b = \sum_{i=1}^m\sum_{j=1}^n A_{ij}X_{ij} + b$  is convex and concave


## Quadratic function
이차 함수 $f(x)={1\over 2}x^TPx+q^Tx+r$를 살펴보면, $∇f(x)= Px+q$ 이고 $∇^2f(x) = P$ 이다.  만일 $P$가 positive semideﬁnite이면 $f(x)$는 convex이다.
주어진 $P \succeq 0$ 에 대해
>$f(x)={1\over 2}x^TPx+q^Tx+r$ is convex with $P \in \mathbb{S}^n, q \in \mathbb{R}^n, r \in \mathbb{R}$

**Q : $P$가 positive semideﬁnite이면 왜 $f(x)$는 convex인가?** <br>
A : 2차 함수에서 2차항의 계수는 함수의 2차 미분인 Hessian matrix이다. 
Hessian matrix는 함수의 곡률(curvature)을 결정하며 positive semidefinite이면 함수가 아래로 볼록하다는 의미이다. (즉, Hessian matrix의 eigen vector 방향으로의 곡률이 0이상이 된다.) 
따라서 2차 함수에서 2차항의 계수가 positive semidefinite이면 함수는 convex이다.
## Least squares loss
임의의 $A$에 대하여 $A^TA$는 항상 positive semideﬁnite이므로 $\left \| Ax - b \right \|_{2}^{2}$ 는 언제나 convex 이다. 

> $f(x) = \left \lVert Ax - b \right \Vert_{2}^{2}$ is convex for any $A$


## Norm
모든 $\mathbb{R}^n$ 상의 Norm은 Convex 이다. 
$f:\mathbb{R}^n -> \mathbb{R}$를 norm이라 하고 정의에 의해

>$f(θx+(1−θ)y)≤θf(x)+(1−θ)f(y)$, with  $0≤θ≤1$, for all  $x,y∈dom f$        
>$\rVert x \rVert_{p} = (\sum_{i=1}^{n} x_i^p)^{1/p}$ for $p  ≥ 1, \rVert x \rVert = max_{i=1,.., n} |x_i|$


## Indicator function
임의의 집합 $C$가 convex이면 이에 해당하지 않는 $x$에 대해 무한대($∞$)로 정의한 indicator 함수도 convex 이다.

즉. 정의 되지 않는 부분을 정의된 부분보다 항상 크게하여 convex의 성질을 가지게 한다.

>$$
>I_{C} (x) =
>\begin{cases}
>0, & \text{x ∈ C} \\\
>∞, & \text{x ∉ C}\\\
>\end{cases}
>$$


## Support function
임의의 집합 $C$가 있다고 가정하자. 집합 $C$가 Convex 이건 아니건 상관 없이 $C$의 support 함수는 convex 이다
> $I_{C}^{\*} (x)$ = $\max_{y∈C} x^Ty$  is convex

Support function의 정의는 [Wikipedia 정의](https://en.wikipedia.org/wiki/Support_function)를 참고하라.

## Max function
연속된 Convex 함수들의 Max 함수는 Convex 이다.
즉, 연속된 Convex 함수들의 최댓값들을 이은 외각은  Convex가 된다.
> $f(x) = \max \\{x_1,..., x_n\\}$  is convex,







</br> </br>

# 03-01-03 Key properties of convex functions

</br> </br>

## Epigraph characterization
앞 1.2절에서 살펴본 바와 같이 $f$가 convex 이면 그 epigraph는 convex set이고, 그 역도 성립한다.

> $f$  is convex $\Leftrightarrow epi(f) = \\{(x,t) \in \mathbb{R}^{n+1} | x \in dom$ $f,  f(x) ≤ t \\}$  is a convex set


## Convex sublevel sets
함수 $f$가 convex이면, 그 sublevel set 도 convex 이다.

> $\\{x \in dom$ $f: f(x) \leq t\\}$, for all $t \in \mathbb{R}$

### [참고] Sublevel set
함수의 $f:\mathbb{R}^n → \mathbb{R}$에 대한 $C_α = \\{x ∈ dom $ $f | f(x) ≤ α\\}$를 *α-sublevel set* 이라고 한다.</br>


## First-order characterization
함수 $f$가 미분가능하다고 가정하면, 다음이 성립한다.</br>
함수 $f$의 도메인 $dom $ $f$가 convex이고, 함수 $f$의 도메인에 속하는 임의의 $x, y$ 에 대하여 $f(y) ≥ f(x) +∇f(x)^T(y−x)$ 가 성립하면 함수 $f$는 convex 이며 그 역도 성립한다.

>$f$is convex $\iff dom$ $f$  is convex, and  $f(y) ≥ f(x) +∇f(x)^T(y−x)$  for all $x,y ∈ dom $ $f$

아래 그림은 미분 가능한 convex function $f$에 관한 1차 테일러 다항식의 그래프이다.
임의의 $x, y \in dom$ $f$에 대해서 $f(y) \geq f(x) + \nabla f(x)^T(y-x)$ 임을 만족하는 것을 보여준다.

 ![](https://wikidocs.net/images/page/17269/1st_order_condition.png)</br>
**[Fig1] Convex Function [1]**



## Second-order characterization
함수 $f$가 두번 미분가능할 때 함수 $f$는 다음과 같은 성질을 가진다.

• 정의역이 convex 인 함수 $f$의 2차 미분이 0보다 크거나 같을 경우,  함수 $f$는 convex 이며, 그 역 또한 성립한다. </br>
> $f$  is convex $\iff ∇^2f(x) \succeq 0$ for all $x ∈ dom f, dom f$: convex </br>

• 함수 $f$의 2차 미분이 0보다 클 경우, 함수 $f$는 strictly convex 이다.</br>
> if $∇^2f(x) \succ 0$ for all $x ∈ dom f$, then $f$ is strictly convex

* 즉 기울기의 변화가 항상 양수가 됨을 의미한다.


## Jensen's inequality
함수 $f$가 convex 이고 $n$개의 양수 $w_1, ..., w_n$에 대하여 $\sum_{i=1}^{n} w_i = 1$ 이라 하자. 이 때 다음이 성립한다.

$\sum_{i=1}^{n} w_i f(x_i) ≥ f \left ( \sum_{i=1}^{n} w_i x_i \right )$</br></br>


함수 $f$가 convex 이면 다음 부등식을 만족한다.
>$$f(tx_1 + (1 − t)x_2) ≤ tf(x_1) + (1 − t)f(x_2) \text{,  for } 0 ≤ t ≤ 1 $$

>*Extension*:</br>
>$X$  is a random variable supported on $dom f$,  then $f(E[X]) ≤E[f(X)]$

![](https://wikidocs.net/images/page/17497/jensen_inequality.png)</br>
**[Fig2] Jensen's Inequality [2]**




</br> </br>

# 03-02 Operations that preserve convexity

</br> </br>

이 절에서는 convex function 의 convexity를 유지하는 연산에 대해 살펴본다. 
Convex fnuction의 Convexity를 유지하는 연산에는 다음과 같은 것들이 있다.

* Nonnegative linear combination
* Composition (Affine/General/Vector) 
* Pointwise maximum and supremum
* Minimization function
* Perspective function


## Nonnegative linear combination
Convex 함수는 상수곱과 덧셈에 대하여 아래와 같은 성질을 가진다.</br>

• Convex 함수 $f$가 존재할 때, 여기에 음수가 아닌 임의의 수를 곱하여도 여전히 함수 $f$는 Convex 이다.</br>
>$f$ is convex $\Rightarrow \alpha f$  is convex

• Convex인 두 함수($f_1, f_2$)이 존재할 때, 이 두 함수를 합하여도 그 결과는 여전히 convex 이다.</br>
>$f_1, f_2$  are convex  $\Rightarrow f_1 + f_2$  is convex

• Convex $f_1, ..., f_m$에 음수가 아닌 $\alpha $에 대한 선형 조합 $\alpha_1f_1 + ... + \alpha_nf_n $은 convex 이다.</br>
>$f_1, ..., f_n$ are convex $\Rightarrow \alpha_1f_1 + ... + \alpha_nf_n$ is convex, $\alpha_1, ..., \alpha_n \ge 0$


## Composition
### 1. Affine composition</br>
함수 $f$가 convex 이면 $f(Ax + b)$ 또한 convex 이다.
> $f$ is convex $\Rightarrow f(Ax + b)$  is convex


### 2.  General composition </br>
$n$차원에서 1차원으로 매핑하는 함수 $g$와 1차원에서 1차원으로 매핑하는 함수 $h$가 있다고 가정하자. </br>
이 두 함수의 합성함수 $f(x)=h(g(x))$는 다음의 경우 convex이거나 concave 이다.

> composition of $g:\mathbb{R}^n→\mathbb{R}$ and $h:\mathbb{R}→\mathbb{R}$: </br>
> $f(x)=h(g(x))$

• $g$가 convex이고 $h$가 convex이며 $h$가 감소하지 않으면 (nondecreasing)  $f$는 convex 이다. </br>
• $g$가 concave이고 $h$가 convex이며 $h$가 증가하지 않으면 (nonincreasing)  $f$는 convex 이다. </br>
• $g$가 concave이고 $h$가 concave이며 $h$가 감소하지 않으면 (nondecreasing)  $f$는 concave 이다. </br>
• $g$가 convex이고 $h$가 concave이며 $h$가 증가하지 않으면 (nonincreasing) $f$는 concave 이다. </br>


#### Proof
• for $n=1$ diﬀerentiable $g,h$
>$f''(x)=h''(g(x))g'(x)^2+h'(g(x))g''(x)$

#### [note]
extended-value extension ${h}$에 대한 단조성(monotonicity)은 반드시 유지되어야 한다. 

#### Example
• $g$가 convex이면, $\exp g(x)$는 convex 이다. </br>
• $g$가 concave이고 positive 하면, $1/g(x)$는 convex 이다.
</br></br> 

### 3.  Vector composition </br>
$n$차원에서 $k$ 차원으로 매핑하는 함수 $g$와 다시 $k$차원에서 1차원으로 매핑하는 함수 $h$가 있다고 가정하자. </br>
그러면 이 두 함수의 합성함수 $f(x)=h(g(x))=h(g_1(x),g_2(x),...,g_k(x))$는 다음의 경우 convex 이거나 concave 이다.

>composition of $g:\mathbb{R}^n→\mathbb{R}^k$ and $h:\mathbb{R}^k→\mathbb{R}$: </br>
>$f(x)=h(g(x))=h(g_1(x),g_2(x),...,g_k(x))$</br>

• $g$가 convex이고 $h$는 convex 일때, $h$가 각 인수에 대해 감소하지 않으면, $f$는 convex 이다.</br>
• $g$가 convex이고 $h$는 concave 일때, $h$가 각 인수에 대해 증가하지 않으면, $f$는 concave 이다.</br>


#### Proof
• for $n=1$ ,diﬀerentiable $g,h$</br> 
>$f''(x)=g'(x)^T∇^2h(g(x))g'(x)+∇h(g(x))^Tg''(x)$

#### Example
• $g_i$가 concave이고 positive 하면, $\sum_{i=1}^{m} \log g_i(x)$는 concave 이다.</br>
• $g_i$가 convex 이면, $\log \sum_{i=1}^{m} \exp g_i(x)$는 convex 이다.


## Pointwise maximum and supremum
함수의 Pointwise maximum은 다음과 같이 정의 되며, 이는 convex이다.
### 1.  Pointwise maximum
> $f_1, f_2$ are convex functions $\Rightarrow f(x) = \max \\{ f_1(x), f_2(x) \\}, dom$ $f = dom$ $f_1 \cap dom $ $f_2$ is convex



### 2. Pointwise supremum</br>
만약 $f (x, y)$가 각각의 $y ∈ A$ 에 대하여 $x$에 볼록하다면, $g(x) = sup_{y∈A} f(x, y)$ 는 convex 이다.

>$f(x, y)$  is convex in  $x$ for each $y ∈ A$ </br>
>$\Rightarrow g(x) = \sup_{y∈A} f(x, y)$  with $dom$ $g = \\{x | (x, y) \in dom$ $f$ for all $y \in A, sup < &infin; \\}$ is convex in $x$

## Minimization
Convex function의 임의의 함수족들의 minimum과 infimum은 convex function 이다.

> $f$  is convex in $(x, y) \Rightarrow g(x)=\inf_{y∈C} f(x,y)$  with $dom$ $g = \\{ x | (x, y) \in dom$ $f$  for some $y \in C \\}$  is convex in $x$</br>
> $C$: A convex set

#### Example
>• $f(x,y)=x^TAx+2x^TBy+y^TCy$ with</br>

>$\begin{bmatrix}
>A & B \\\
>B^T & C
>\end{bmatrix} \succeq 0,$ $C \succ 0$

> minimizing over $y$ gives $g(x)=\inf_y f(x,y)=x^T(A−BC^{−1}B^T)x$
> $g$ is convex, hence Schur complement $A−BC^{−1} B^T \succeq 0$

>• *distance to a set *: $dist(x,S)= \inf_{y ∈ S} \lVert x−y \rVert$ is convex if $S$ is convex



## Perspective
함수 $f: \mathbb{R}^n \rightarrow \mathbb{R}$ 가 convex $\Rightarrow$  the perspective of $ g: \mathbb{R}^{n+1} → \mathbb{R}$ 연산은 convexity를 유지 시키는 함수이다.

함수 $f: \mathbb{R}^n→\mathbb{R}$의 perspective 함수 $g: \mathbb{R}^n×\mathbb{R}→\mathbb{R}$는,
$g(x,t) = tf({x \over t})$,  $dom $  $g = \\{(x,t) | {x \over t} ∈ dom $ $f, t>0 \\}$</br>
일때, 함수 $f$가 convex 이면 $g$또한 convex 이다.

#### Example
•$t$가 양수일때,  $g(x,t)=x^Tx/t$는 convex면,  $f(x)=x^Tx$는 convex이다.

• Negative logarithm</br>
Relative entropy $g(x,t) =t\log t − t\log x$가 $R_{++}^2$에서 convex 일때, $f(x)=−\log x$는 convex 이다.

• $f$가 convex이면, $g(x)=(cTx+d)f((Ax+b)/(cTx+d))$는 아래와 같은 조건에서 convex이다. </br>
> $\\{x | c^Tx+d>0, (Ax+b)/(c^Tx+d) ∈ dom $ $f\\}$

</br> </br>

# 03-03 The conjugate function

</br> </br>

Conjugate 함수에 대해 알아보자

Conjugate function은 뒷장에서 다룰 Lagrange Dual에서 최적화 문제를 상응하는 Dual problem으로 변환하는 데 사용된다. Lagrange Dual에서 미분을 할 때, 직접 미분하지 않고 Conjugate function을 이용해 바로 대입할 수 있다. </br>

함수 $f$의 conjugate 는 아래와 같다.

![](https://wikidocs.net/images/page/17428/conjugate_function.png)

**[Fig1] Conjugate function [2]**

•$f$가 convex가 아니어도 $f^∗$ 는 convex이다.

#### Example
>• *Negative logarithm* $f(x)=−\log x$

> $f∗(y)=\sup_{x>0} (xy+logx)$ 
> $=\begin{cases}
>-1-\log(-y), & \{ y < 0} \\\
>∞, & \text{ otherwise}
>\end{cases}$



>• *Strictly convex quadratic* $f(x) = (1/2)x^TQx$ with $Q∈S_{++}^n$

>$\begin{align}
f∗(y)=\sup_{x} (y^Tx−(1/2)x^TQx) \\
& = {1 \over 2}y^TQ^−1y \\
\end{align}$


이는 13장에서 좀 더 상세히 다루도록 한다.



</br> </br>

# 03-04 Quasiconvex functions

</br> </br>

Quasiconvex function은 임의의 구간에서 정의되는 함수 혹은 real vector space의 convex subset에서 정의된 real-value로 이뤄진 함수로, (-$\infty$, $a$)에서의 역 이미지(inverse image ; $x$구간) 가 convex set이 된다. quasiconvex 함수의 음수는 quasiconcave 라고 불리운다 [[9]](https://en.wikipedia.org/wiki/Quasiconvex_function). 이 장에서는 quasiconvex 함수 및 quasiconcave 함수의 특성에 대해 알아볼 수 있다.


</br> </br>

# 03-04-01 Definition and examples

</br> </br>

## Definition

함수 $f : R^n  \rightarrow R$가 도메인 **dom** $f$와 모든 sublevel set $S_{\alpha}$([03-01-03](https://wikidocs.net/17497) 참고)이 convex라면 이 함수를  **quasiconvex** (or **unimodal**)이라고 한다. 

>$f : R^n  \rightarrow R$ is quasiconvex if dom $f$ and 
>$S_{\alpha} =$ {$x \in dom$ $f \mid f(x) \leq \alpha$} for $\alpha \in R$ are convex.


만약 함수 -$f$가 quasiconvex라면, $f$는 **quasiconcave** 라고 불린다.</br>
>$f : R^n  \rightarrow R$ is quasiconcave if dom $f$ and 
>$S_{\alpha} =$ { $x \in dom$ $f \mid f(x) \geq \alpha $} for $\alpha \in R$</br>

$f$가 quasiconvex이고 qausiconcave일 때, 이를 **quasilinear**라고 하고, 함수의 도메인과 모든 level set에서 {$x \mid f(x)=\alpha$}는 convex가 된다. 다음 그림은 quasiconvex function의 예를 보여준다.</br></br>

![](https://wikidocs.net/images/page/17416/Fig3.9_quasiconvex_ftn_cAsoUpr.PNG)</br></br>
**[Fig1] quasiconvex function on $R$ [1]**</br></br>


$\alpha$에 대하여, $\alpha$-sublevel set $S_{\alpha}$는 convex, 즉 interval [$a,b$]이다. $\beta$-sublevel set $S_{\beta}$는 interval ($-\infty,c$]을 갖는다. **Convex function은 convex sublevel set을 가지며, quasiconvex가 성립하지만, 그 역은 성립하지 않는다.**
> $f$ : convex  $\Longrightarrow$ $f$ : quasiconvex


</br>
## Examples

Quasiconvex에서의 다양한 예제를 살펴보자.

#### Logarithm
$R_{++}$공간에서의 $\log x$는 quasiconvex이다. (또한 quasiconcave이므로, quasilinear의 성질을 갖는다.) 
> $log x$ on R
</br>


#### Celing function 
Celing function은 quasiconvex이다. (또한 quasiconcave 이다.)
>$ceil(x) = inf${$z \in Z \mid z \geq x$} 
</br>



#### Length of vector
$x \in R^n$의 길이를 nonzero component의 가장 큰 index 값으로 놓는다면,
>$f(x) = max${$i \mid x_i \neq 0$}.</br>

이 성립하며, </br>

>$f(x) \leq \alpha \Longleftrightarrow x_i = 0$ for $i = \lfloor\alpha\rfloor + 1,...,n.$ on $R^n$</br>

의 subspace를 만족하므로, quasiconvex이다.</br>
(※ subspace : subspace 내에 있는 모든 원소들은 덧셈, 곱셈에 대해 닫혀있다. $R^n$의 subspace도 convex set 이다.)</br>



#### Linear-fractional function
다음 조건에서, function $f$ 는 quasiconvex이자 quasiconcave, 즉 quasilinear이다.</br>
>$f(x) =  \frac{a^Tx+b}{c^Tx+d} $ with $dom$ $f =$ {$x \mid c^Tx + d > 0$}</br>



#### Distance ratio function
$a, b \in R^n$이고, function $f$를 다음과 같이 정의할 때,즉, x와 a 간의 유클리디안 거리와 x와 b 간의 유클리디안 거리의 비율을 나타내는 function $f$에서,
$f$는 halfspace {$x \mid \parallel x - a \parallel_2 \leq \parallel x - b \parallel_2 $} 상에서 quasiconvex이다.

> $f(x) = \frac{ \parallel x - a  \parallel_2 }{ \parallel x - b  \parallel_2 } $</br>


$\alpha \leq 1$ 조건에서, 이는 유클리디안 ball 형태의 convex set이 되므로 $f$는 quasiconvex가 된다.

</br> </br>

# 03-04-02 Basic properties

</br> </br>

Quasiconvex는 convex function의 일반화라는 것을 앞 절의 예에서 살펴보았다. 이런 관점에서, 이 절에서는 convex function에서의 성질이 quasiconvex function에서도 유지되는지에 관하여 살펴본다.

## Modified Jensen's inequality
Quasiconvex는 Jensen's inequality 를 통해 다음과 같이 정의된다.
>$f(\theta x + (1 - \theta)y) \leq max${$f(x), f(y)$} for all $x, y \in dom$ $f, 0 \leq \theta \leq 1$

아래 그림은 함수 $f$가 quasiconvex 이면, 두 점에서 그은 선분 사이의 $f$값이 각 끝점에서의 $f$의 maximum을 넘지 않는다는 것을 보여준다.
</br></br>


![](https://wikidocs.net/images/page/17419/Fig.3.10_quasiconvex_function_on_R_4uChnEm.PNG)</br></br>
**[Fig1] quasiconvex function on $R$. $x$와 $y$ 사이의 $f$값은 $max${$f(x), f(y)$} 보다 작다.**</br></br>

</br>
## Quasiconvex function on R
연속함수 $f : R \longrightarrow R$가 quasiconvex라는 것은 다음과 같은 조건 중 적어도 하나를 만족한다는 것을 의미한다.</br>

• $f$ is nondecreasing</br>
• $f$ is nonincreasing</br>
• 도메인 상의 특정 한 점, $c \in dom$ $f$을 기준으로, $t \leq c(t \in dom$ $f)$에 대해서, $f$는 nonincreasing하고, $t \geq c(t \in dom$ $f)$에 대해서 $f$는 nondecreasing하다.</br></br>

![](https://wikidocs.net/images/page/17419/Fig.3.11_quasiconvex_function_on_R_2_PPQpNiU.PNG)</br></br>
**[Fig2] quasiconvex function on $R$. $t \leq c(t \in dom$ $f)$에서는 nonincreasing, $t \geq c(t \in dom$ $f)$에서는 nondecreasing 하다.**</br></br>


</br> </br>

# 03-04-03 Differentiable quasiconvex functions

</br> </br>

Quasiconvex function이 미분가능할 때, First-order conditions, Second-order conditions을 만족하게 된다. 다음을 살펴보자.

## First-order conditions
$f : R^n \rightarrow R$가 미분 가능 함수라고 하자. $dom$ $f$가 convex 이고, 다음 조건을 만족하면 $f$는 quasiconvex 이다.
>$f$ is quasiconvex $\Longleftrightarrow$ $f(y) \preceq f(x) ,  \nabla f(x)^T(y-x) \leq 0.$ for all $x, y \in dom$ $f$

![](https://wikidocs.net/images/page/17418/3.12_Three_level_curves_OV6vtPq.PNG)</br></br>
**[Fig1] quasiconvex function f 안에서 3개의 level curve를 보여준다. $\nabla f(x)$는 $x$에서의 sublevel set {$z \mid f(z) \leq f(x)$}의 supporting hyperplane을 정의하는 normal vector가 된다.**</br></br>

Quasiconvexity의 First-order condition이 convexity의 First-order characterization ([03-01-03 ](https://wikidocs.net/17497)참조)과 유사해 보이지만, 중요한 차이가 존재한다. 예를 들면, $f$가 convex이고, $\nabla f(x) = 0$이라면, $x$는 $f$의 global minimizer라는 것이 성립하지만, quasiconvex function에서는 항상 성립하지 않는다.

</br>
## Second-order conditions

$f$가 두번 미분 가능할 때, Second-order conditions가 적용된다. 만약 $f$가 quasiconvex라면, 모든 $x \in dom$ $f$ 그리고 모든 $y \in R^n$에 대하여, 다음 식이 성립한다.
>$f$ is quasiconvex, $y^T \nabla f(x) = 0 \Longrightarrow y^T \nabla^2 f(x)y \geq 0$ for all $x \in dom$ $f$, all $y \in R^n$ </br>

$R$에서 quasiconvex일 때,

>$f$ is quasiconvex, $f'(x) = 0 \Longrightarrow f''(x) \geq 0$

즉, zero slope를 갖는 임의의 포인트가 존재한다면, 2차 미분 값은 non-negative가 된다. 다시 $R^n$으로 돌아와서, Second-order condition은 다음과 같은 성질 또한 만족한다. </br>

1) $ \nabla f(x) = 0$일 때, 항상 $\nabla^2f(x) \succeq 0$이 만족되어야 한다. </br>
2) $ \nabla f(x) \neq 0$이라면, $y^T \nabla f(x) = 0 \Longrightarrow y^T \nabla^2 f(x)y \geq 0$ 에서 $\nabla^2 f(x)$ 가 헤시안 행렬로 작용하여, $(n$-$1)$-$dimensional$ $subspace \nabla f(x)^\perp$에서  positive semidefinite이 된다.

($(n$-$1)$-$dimensional$ $subspace \nabla f(x)^\perp$은 $\nabla f(x)$와 직교하는 (n-1) 차원의 subspace를 의미한다. (n-1)차원인 이유는 $\nabla f(x)$가 n차원 함수 $f$를 미분했기 떄문에 차원이 하나 줄었기 때문이다.)

</br> </br>

# 03-04-04 Operations that preserve quasiconvexity

</br> </br>

이 절에서는 quasiconvexity를 유지하는 연산에 대해 살펴본다.

## Nonnegative weighted maximum

$f$가 quasiconvex function일 때, nonnegative weighted maximum $f$는 quasiconvex 이다.
>$f = max${$w_1f_1, ... ,w_mf_m$} with $w_i \geq 0$ is quasiconvex


이 개념은 다음과 같이 확장될 수 있다.
>$f(x) = sup_{y \in C}(w(y)g(x,y))$ with  $w(y) \geq 0$, 
>where $g(x,y)$ is quasiconvex in $x$ for each $y$.</br>

</br>

## Composition

만약 $g : R^n \rightarrow R$가 quasiconvex이고, $h : R \rightarrow R$이 nondecreasing이면, 합성곱 f는 quasiconvex를 만족한다.
> $f = h \circ g$ is quasiconvex if h is non-decreasing, g is quasiconvex.
 
Quasiconvex function과 affine 또는 linear-fractional 변환을 합성하면 quasiconvex function이 된다.
만약 $f$가 quasiconvex라면, $g(x) = f(Ax + b)$ 역시 quasiconvex가 되고, $\tilde{g}(x) = f((Ax + b)/(c^Tx + d))$도 set {$x \mid c^Tx + d > 0, (Ax + b)/(c^Tx + d) \in dom$ $f$}에서 quasiconvex가 된다.

</br>

## Minimization

만약 $f(x, y)$가 quasiconvex를 만족하고, $C$가 convex set일 때, 다음 조건이 성립한다.
> $g(x) = inf_{y \in C} f(x,y)$ is quasiconvex if f is quasiconvex in x, y, and C is convex set.

</br>

## Representation via family of convex functions

Quasiconvex function f의 sublevel set을 convex function의 부등식으로 표현할 수 있다. Convex function의 family는 $t \in R$에 대해 $\phi_t : R^n \rightarrow R$이고, 다음과 같이 정의된다.
>$f(x) \leq t \Longleftrightarrow \phi_t(x) \leq 0$

즉, quasiconvex function $f(x)$의 t-sublevel set은 convex function $\phi_t$의 0-sublevel set이 된다. 이 때, t는 convex function $\phi$ 의 index를 나타낸다. 그리고, 모든 $x \in R^n$에 대해 다음을 만족한다.
>$\phi_t(x) \leq 0 \Longrightarrow \phi_s(x) \leq 0$, for $s \geq t$



</br> </br>

# 03-05 Log-concave and log-convex functions

</br> </br>

Log-concave & log-convex function에 대해 알아보자.

## Definition

Log-concave와 log-convex의 정의는 다음과 같다.

#### $f : R^n  \rightarrow R$ is Logarithmically concave or log-concave
만약 모든 $x \in dom$ $f$에 대해서 $f(x) > 0$이고, $log f$가 concave라면, $f : R^n \rightarrow R$는 logarithmically concave 혹은 log-concave라고 부른다.
> $f$ is log-concave for $f(x) > 0$ for all x $\in dom$ $f$  : </br>
>$f(\theta x + (1 - \theta) y) \geq f(x)^\theta f(y)^{1-\theta}$ for $0 \leq \theta \leq 1$.

#### $f : R^n  \rightarrow R$ is Logarithmically convex or log-convex
만약 모든 $x \in dom$ $f$에 대해서 $f(x) > 0$이고, $log f$가 convex라면, $f : R^n \rightarrow R$는 logarithmically convex 혹은 log-convex라고 부른다. 따라서 $f$가 log-convex라면, $1/f$는 log-concave가 된다.
> $f$ is log-convex for $f(x) > 0$ for all x $\in dom$ $f$ $\Longleftrightarrow \frac{1}{f}$ is log-concave.

$f$값이 0이 되도록 허용하는 것이 편리할 때가 있는데, 이 경우 $log f(x) = -\infty$가 된다. 이런 경우, extended-value function $log f$가 concave라면, $f$는 log-concave라고 부를 수 있다.

**Log-convex function과 log-concave function은 각각 quasiconvex, quasiconcave가 된다. logarithm은 단조 증가하기 때문이다.**

## Examples
#### Affine function
$f$가 다음과 같이 정의되면, log-concave이다.
>$f(x) = a^Tx + b$ on {$x \mid a^Tx + b > 0$}

#### Powers
$f(x) = x^a$는 $R_{++}$에서 $a \leq 0$일 때 log-convex이고, $a \geq 0$일 때 log-concave이다.

#### Exponentials
$f(x) = e^{ax}$는 log-convex이자 log-concave이다.

#### The cumulative distribution function of a Gaussian density
$\Phi(x) = \frac{1}{ \sqrt{2 \pi } }   \int_ {-\infty} ^x e^{-u^2/2} du $ 는 log-concave이다.

#### Gamma function
$\Gamma (x) =  \int_0^\infty u^{x-1}e^{-u} du $
는 $x \geq 1$에서 log-convex이다.

#### Determinant
$det X$는 $S^n_{++}$에서 log concave이다.

#### Determinant over trace
$det X$ / $tr X$는 $S^n_{++}$에서 log concave이다.

</br>
## Properties

#### Twice differentiable log-convex / concave functions
$f$가 두번 미분 가능하고, $dom$ $f$가 convex하다면, 다음 식이 성립한다.</br>
>$\nabla ^2logf(x) =  \frac{1}{f(x)}  \nabla ^2f(x) -  \frac{1}{f(x)^2}\nabla f(x) \nabla f(x)^T$

$f$가 log-convex $\Longleftrightarrow$ 모든 $x \in dom$ $f$에 대해 $f(x) \nabla ^2 f(x)  \succeq  \nabla f(x)\nabla f(x)^T$ 이고, </br>
$f$가 log-concave $\Longleftrightarrow$ 모든 $x \in dom$ $f$에 대해 $f(x) \nabla ^2 f(x)  \preceq  \nabla f(x)\nabla f(x)^T$이다.

</br>
#### Multiplication
Log-convexity와 log-concavity는 곱셈(multiplication)과 양의 배수(positive scaling)를 곱하는 것에서 닫혀있다(closed). 만약, $f$와 $g$가 log-concave라면, pointwise product $h(x) = f(x)g(x)$ 역시 log-concave하다. 왜냐하면, $log h(x) = log f(x) + log g(x)$이고, 각각의 $log f(x)$와 $log g(x)$는 concave function이기 때문이다.

#### Addition and Integration
일반적으로, log-concave function의 합은 log-concave가 되지 않는다. 하지만, log-convexity는 합에 의해서는 보존된다. 예를 들어, $f$와 $g$를 log-convex function, 즉, $F = log f$ 그리고 $G = log g$가 convex하다고 하자. convex function의 합성 법칙(composition rules)에 의해, 다음을 만족한다.</br>
>$log(exp F + exp G) = log(f + g)$

이는 convex가 된다. (좌변이 convex인 이유는 1. log-convex는 convex이고 2. convex에 지수함수를 적용해도 convex이며 3. convex의 합과 4. convex의 log도 convex이다. 따라서, 전체 결과는 convex이다.) 결론적으로, 두 log-convex function의 합은 log-convex이다. 

이를 일반화하면 각 $y \in C$에 대해 $f(x, y)$가 log-convex이면 $g(x)$는 log-convex이다.
>$g(x) =  \int_C^{} f(x,y) dy $ 

#### Integration of log-concave functions
특정 경우에 log-concavity 또한 integration에 의해 보존된다. 만약, $f : R^n \times R^m \longrightarrow R$가 log-concave이면, $g(x)$ 는 $x \in R^n$에서 log-concave function이다.
>$f : R^n \rightarrow R$ is log-concave $\Longrightarrow$ $g(x) = \int_{}^{} f(x,y) dy$ is log-concave , $x \in R^n$ for each $y \in C$.

이를 토대로, log-concave probability density의 marginal distribution이 log-concave라는 것을 확인할 수 있다.</br>

Convolution 연산에서도 log-concavity는 닫혀있다(closed). 만약, $f$와 $g$가 $R^n$상에서 log-concave하다면, convolution 역시 log-concave이다. 
>$f$, $g$ are log-concave on $R^n$ $\Longrightarrow$ $(f \ast g)(x) =  \int_{}^{} f(x-y)g(y) dy $ is log-concave.</br>


</br> </br>

# 03-06 Convexity with respect to generalized inequalities

</br> </br>

$R$ 공간 이외의 공간에서는 $R$ 공간에서 통상적으로 사용되는 ordering 개념에서 확장된, 일반화된 inequality 표현을 할 때 Cone의 정의를 활용한다. ([02-01-04](https://wikidocs.net/17414) 참고) 이번 절에서는 Cone의 개념을 활용하여, $R$공간 이외에서도 확장되는 monotonicity와 convexity의 개념을 살펴본다.

## Monotonicity with respect to a generalized inequality

$K \subseteq R^n$이 $\preceq_K$로 나타나는 proper cone이라 가정하자. Convex cone $K \subseteq R^n$에 대해 다음과 같은 조건을 만족하면 **proper cone**이다.

• $K$ is closed. (contains its boudary)</br>
• $K$ is solid (has nonempty interior)</br>
• $K$ is pointed (contains no line)</br>

 **$K$-nondecreasing**를 다음과 같이 정의한다.
> $f : R \rightarrow R$ is K-nondecreasing if $x \preceq_K y \Longrightarrow f(x) \leq f(y)$


또한, 다음 조건을 만족할 때, **$K$-increasing**하다고 이야기 한다.
> $f : R \rightarrow R$ is K-increasing if $x \preceq_K y, x \neq y \Longrightarrow f(x) < f(y)$


#### Gradient conditions for monotonicity

어떤 미분 가능한 function $f : R \rightarrow R$이 convex (즉, interval) domain 상에서 nondecreasing 하다는 것은, 모든 $x \in dom$ $f$에서 $f'(x) \geq 0$이라는 뜻이며, 모든 $x \in dom$ $f$에서 $f'(x) > 0$이면, increasing 하다는 것이다. 이와 유사하게 generalized inequality에서도 확장된 개념으로써, monotonicity를 표현할 수 있다.

도메인이 Convex일 때 미분가능한 function $f$가 K-nondecreasing하다는 것은 다음과 식을 만족한다는 의미이다. 잘 살펴보면 단순한 scalar와는 달리 gradient $\nabla f(x)$는 dual inequality에서 nonnegative이어야만 한다.
> A differentiable function $f$ is K-nondecreasing $\Longleftrightarrow$ $\nabla f(x) \succeq_{K^*} 0$ for all $x \in dom$ $f$

다음 조건을 만족하면, $f$는 **$K$-increasing** 이라고 부른다. Scalar일 때와 같이 역은 성립하지 않는다.
> $\nabla f(x) \succ_{K^*} 0$ for all $x \in dom$ $f$ $\Longrightarrow$ $f$ is K-incerasing.


#### Convexity with respect to generalized inequality

$K \subseteq R^m$를 generalized inequality $\preceq_K$와 연관된 proper cone이라고 하자.</br>
이때, $f : R^n \rightarrow R^m$을  모든 $x, y$, 그리고 $0 \leq \theta \leq 1$에서 **$K$-convex**라고 하면, 다음과 같은 부등식이 성립한다.
> $f : R^n \rightarrow R^m$ is K-convex $\Longrightarrow$ $f(\theta x + (1 - \theta) y) \preceq_K \theta f(x) + (1 - \theta) f(y)$ with $0 < \theta < 1$ for all x, y.
 
또한, **strictly $K$-convex**의 조건은 다음과 같다.
> $f(\theta x + (1 - \theta) y) \prec_K \theta f(x) + (1 - \theta) f(y)$  for all $x \neq y$ and $0 < \theta < 1$.
 
m = 1이고 K = $R_+$ 일 때가, 앞서 이야기해왔던 일반적인 convexity를 만족하는 부등식이 된다.

#### Dual characterization of $K$-convexity

$f$가 $K$-convex하다는 것은, 모든 $w \succeq_K * 0$에 대하여 (real-valued) function $w^T f$가 convex라는 것이다. $f$가 strictly convex 하다는 것은 모든 $w \succeq_{K*} 0$ 에 대하여 (real-valued) function $w^T f$가 strictly convex 라는 것이다. 이는 dual inequality의 정의 및 성질을 따른다.

</br>
#### Differentiable K-convex functions

미분가능한 함수 $f$가 $K$-convex라면 함수 도메인이 convex일 때 다음 식이 성립한다.
> $f(y) \succeq_K f(x) + Df(x)(y - x)$ with all $x, y \in dom$ $f$

여기서 $Df(x) \in R^{m \times n}$는 derivative 혹은 점 $x$에서 $f$의 Jacobian matrix 이다.</br>

$f$가 strictly $K$-convex 라면 함수 도메인이 convex일 때 다음 식이 성립한다.
> $f(y) \succ_K f(x) + Df(x)(y - x)$ with all $x, y \in dom$ $f$, $x \neq y$
 

#### Composition theorem

Composition 의 결과로 나타나는 많은 것들은 $K$-convexity 로 일반화 될 수 있다.</br>
예를 들면, 만약 $g : R^n \rightarrow R^P$ 가 $K$-convex 이고, $h : R^P \rightarrow R$ 이 convex, 
그리고 $h$의 extended-value extension $\widetilde{h}$ 가 $K$-nondecreasing이면, $h \circ g$는 convex이다. 이는 convex function의 nondecreasing convex function은 convex 임을 일반화한다.</br>
($\widetilde{h}$가 $K$-nondecreasing이라는 조건이 의미하는 것은 $dom$ $h$ - $K$ = $dom$ $h$이다.)

</br> </br>

# 04 Convex optimization basics

</br> </br>

이번 장에서는 convex optimization의 기본적인 성질과 풀이에 자주 사용되는 몇 가지 테크닉들에 대해 알아보도록 한다. 참고로 몇 가지 관련 내용들은 이미 [이전 챕터](https://wikidocs.net/17206)에서 다루어졌으므로 이번 장에서는 생략한다.

</br> </br>

# 04-01 Basic terminology

</br> </br>

Convex optimization문제에서 사용되는 기본적인 용어들을 살펴보자. 일단 convex optimization 문제는 다음과 같이 정의된다. 
>$$
>\begin{align}
>    &\text{minimize}\_{x \in D} &{f(x)} \\\\
>    &\text{subject to } &{g_{i}(x) \leq 0, i = 1, \dotsc, m} \\\\
>    & &{h_{j}(x) = 0, j = 1, \dotsc, r}, \\\\
>\end{align}
>$$
>where $f$ and $g_i, i = 1, \dotsc, m$ are all convex, $h_j, j = 1, \dotsc, r$ are all affine, and the optimization domain is ${D = {\rm dom}(f) \cap \bigcap\_{i=1}^m {\rm dom}(g_i) \cap  \bigcap\_{j=1}^r {\rm dom}(h_j)}$.

* $f$는 **criterion** 또는 **objective function**이라 부른다.  
* $g_{i}(x)$는 **inequality constraint function**이라고 한다. 
* $h_{j}(x)$는 **equality constraint function**이라고 한다. 
* 만약 $x \in D$이고, ${g_{i}(x) \leq 0, i = 1, \dotsc, m}$와 ${h_{j}(x) = 0, j = 1, \dotsc, r}$를 만족하면 $x$는 **feasible point**다.
* 모든 feasible point $x$에 대해  $f(x)$의 최솟값을 **optimal value**라 부르고, $f^{\star}$으로 쓴다.
* $x$가 feasible하고 $f(x) = f^{\star}$일때, $x$는 **optimal**, **solution**, 또는 **minimizer**라 부른다.
* $x$가 feasible하고 $f(x) \le f^{\star} + \epsilon$일때, $x$는 **$\epsilon$-suboptimal**이라 부른다.
* $x$가 feasible하고 $g\_i(x) = 0$일때, $g\_i$는 $x$에서 **active**하다고 한다.
* Convex minimization 문제는 concave maximization 문제로 변환할 수 있다.
>$$
>\begin{align}
>    &\text{maximize}\_{x \in D} &{-f(x)} \\\\
>    &\text{subject to } &{g\_{i}(x) \leq 0, i = 1, .., m} \\\\
>    & &{h_{j}(x) = 0, j = 1, \dotsc, r}, \\\\
>\end{align}
>$$
>where $f$ and $g_i, i = 1, \dotsc, m$ are all convex, $h_j, j = 1, \dotsc, r$ are all affine, and the optimization domain is ${D = {\rm dom}(f) \cap \bigcap\_{i=1}^m {\rm dom}(g_i) \cap  \bigcap\_{j=1}^r {\rm dom}(h_j)}$.


</br> </br>

# 04-02 Convex solution sets

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Convex solution set의 성질에 대해 알아보자. $X\_{opt}$를 다음과 같이 어떤 convex problem에 대한 solution의 집합이라고 하겠다.

>$$
>\begin{align}
>    X\_{opt}=&\text{argmin}_x &f(x) \\\\
>    &\text{subject to } &{g\_{i}(x) \leq 0, i = 1, .., m} \\\\
>    & &{h\_{j}(x) = 0, i = 1, .., r}  \\\\
>\end{align}
>$$

## Key property1
>$X\_{opt}$는 convex set이다. 

#### Proof
>$x$, $y$가 solution일때, </br></br>
>1. Domain set $D$는 convex set이므로, $0 \le t \le 1$에 대해 $tx+ (1-t)y \in D$를 만족한다.</br></br>
>2. $g_i, i=1,\dotsc,m$와 $h_j, j=1, \dotsc,r$은 각각 convex, affine function이므로 아래 제약조건을 만족한다.</br>
> $g\_{i}(tx + (1-t)y) \leq tg\_i(x) + (1-t)g\_i(y) \leq 0$,</br>
> $h\_{j}(tx + (1-t)y) = th\_j(x) + (1-t)h\_j(y) = 0$.</br></br>
>3. $f$는 convex function이므로 아래를 만족한다.</br>
>$f(tx+(1-t)y) \leq tf(x) + (1-t)f(y)$ = $tf^{\star} + (1-t) f^{\star} = f^{\star} $.</br>
></br></br>
>즉, $tx + (1-t)y$ 또한 solution이다. </br>
>

#### Geometric interpretation
Convex function에서의 local optimum은 곧 global optimum이기 때문에 복수의 element를 가진 solution set이 있다면 이는 아래와 같은 모양일 수 밖에 없다.</br>
<center>
![](https://wikidocs.net/images/page/18263/multiple-optima.png)</br>
**[Fig1] geometric interpretation of convexity of the solution set**
</center>

## Key property2
>$f$가 strictly convex이라면 solution은 unique하다. 즉, $X_{opt}$는 하나의 element만을 갖는다.

$f$가 strictly convex라는 것은 $f$가 다음과 같은 성질을 항상 만족한다는 것과 같다.</br>
>$$f(tx + (1-t)y) < tf(x) + (1-t)f(y) \text{ where } 0 < t < 1, x \neq y, \text{ and } x, y \in \text{dom } f.$$

즉, $f$는 평평한 구간이 없는 아래로 볼록한 형태이며 f의 solution은 오직 하나이다.

</br> </br>

# 04-03 First order optimality condition

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

> $$
> \text{min}\_{x} \quad f(x) \quad \text{  subject to  } x \in C
> $$

위 convex problem에서 objective function $f$가 미분 가능할 때, 아래의 부등식은 optimal point $x$에 대한 필요충분 조건이 된다.

> $$\nabla f(x)^{T}(y-x) \geq 0 \text{ for all } y \in C$$

우리는 이를 *first-order condition for optimality*라고 부른다. $\nabla f(x)^{T}(y-x) = 0$는 set $C$의 접점 x를 지나는 hyperplane이고, $- \nabla f(x)$는 $x$에서 optimal point로 이동하는 방향이다. 이때 위의 부등식을 만족한다면 set $C$가 $- \nabla f(x)$의 반대방향인 half-space에 포함된다는 것이므로 $x$는 optimal point가 된다.</br>
<center>
![](https://wikidocs.net/images/page/18337/first-order-condition.png)</br>
**[Fig1] geometric interpretation of first-order condition for optimality [3]**
</center>

#### Important special case
$C = R^n$일때(unconstrained optimization일때), optimality condition은 다음과 같이 정의된다.
> $$\nabla f(x) = 0$$

마찬가지로 −∇f(x) 는 x에서 optimal point로 이동하는 방향인데, $\nabla f(x) = 0$라는 것은 $f$를 최소화시키기 위해 $x$에서 더이상 이동할 곳이 없다는 것과 같다.

</br> </br>

# 04-04 Partial optimization

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

[Reminder: ](https://wikidocs.net/17268#minimization) $C$가 convex set이고 $f$가 $(x,y)$에 대해 convex일때, $g(x) = min\_{y \in C} f(x, y)$는 x에 대해 convex이다.

즉, 위의 성질에 의해 다변수 함수로 구성된 convex problem에서의 partial optimization이 가능하며 이 과정에서 convexity가 유지된다.
<center>
>![](https://wikidocs.net/images/page/18367/partial-optimization.png)</br>

**[Fig1] partial optimization of a convex problem [3]**
</center>

#### Example: hinge form of SVMs
Non-separable set에 대한 SVM 문제는 다음과 같이 정의된다. 
>$$
>\begin{align}
>    &\text{min}\_{\beta, \beta\_0, \xi} &\frac{1}{2}\|\beta\|\_2^2 + C \sum\_{i=1}^n \xi\_i \\\\
>    &\text{subject to } &{\xi\_{i} \ge 0, y\_i(x\_i^T \beta + \beta\_0) \ge 1 - \xi\_i, i = 1, .., n} \\\\
>\end{align}
>$$

위의 제약조건들은 아래의 제약조건 하나로 표현될 수 있다.
$$\xi\_i \ge max\\{0, 1 - y\_i (x\_i^T \beta + \beta\_0) \\}.$$</br>
이때, $max\\{0, 1 - y\_i (x\_i^T \beta + \beta\_0) \\}$는 $\xi\_i$의 하한임을 이용하여 $\tilde{f}$를 얻을 수 있다.</br>

>
$$
\begin{align}
\frac{1}{2}\|\beta\|\_2^2 + C \sum\_{i=1}^n \xi\_i &\ge \frac{1}{2}\|\beta\|\_2^2 + C \sum\_{i=1}^n max\\{0, 1 - y\_i (x\_i^T \beta + \beta\_0) \\}\\\\
&= min \\{\frac{1}{2}\|\beta\|\_2^2 + C \sum\_{i=1}^n \xi\_i \quad | \quad {\xi\_{i} \ge 0, y\_i(x\_i^T \beta + \beta\_0) \ge 1 - \xi\_i, i = 1, .., n} \\} \\\\
&= \tilde{f}(\beta, \beta\_0) \\\\
\end{align}
$$


그리고 아래와 같이 $\tilde{f}$를 objective function으로 사용함으로써 좀 더 간단한 형태로 solution을 얻을 수 있다. 주어진 문제에서 $\xi$가 제거되었고, 또한 constrained problem에서 unconstrained problem으로 변환되었다.

> $$\text{min}\_{\beta, \beta\_0} \frac{1}{2}\|\beta\|\_2^2 + C \sum\_{i=1}^n max\\{0, 1 - y\_i (x\_i^T \beta + \beta\_0) \\}$$

</br> </br>

# 04-05 Transformations and change of variables

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

목적함수 또는 제약함수는 주어진 optimization problem를 유지하는 선에서 변경될 수 있으며, 때로는 이를 이용해 문제의 "hidden convexity"를 찾아낼 수 있다.

#### Theorem1
함수 $h : \mathbb{R} \rightarrow \mathbb{R} $가 monotone increasing transformation일때, 아래의 관계가 성립한다.

>$$
>\begin{align}
>&\text{min}\_{x} f(x) &&\text{ subject to } x \in C \\\\
>\Longleftrightarrow &\text{min}\_{x} h(f(x)) &&\text{ subject to } x \in C
>\end{align}
>$$

#### Theorem2
함수 $\phi: \mathbb{R}^{n} \rightarrow \mathbb{R}^{m}$가 일대일 대응 함수이고, $\phi$의 상(image)이 feasible set $C$를 커버한다면 optimization problem의 변수는 다음과 같이 변경될 수 있다.   

>$$
>\begin{align}
>&\min\_{x} f(x) &&\text{ subject to } x \in C \\\\ 
>\Longleftrightarrow &\min\_{y} f(\phi(y)) &&\text{ subject to } \phi(y) \in C
>\end{align}
>$$

#### Example: geometric programming

함수 $f: \mathbb{R}\_{++}^n \rightarrow \mathbb{R}$가 다음과 같은 형태일때 이를 **monomial**이라 부른다.
> $$f(x) = \gamma x\_1^{a\_1} x\_2^{a\_2} \dotsb x\_n^{a\_n} \text{ for } \gamma > 0, a\_1, \dotsc, a\_n \in \mathbb{R}.$$

또한 monomial의 합을 **posynomial**이라 부른다.
> $$g(x) = \sum\_{k=1}^p \gamma\_{k} x\_1^{a\_{k1}} x\_2^{a\_{k2}} \dotsb x\_n^{a\_{kn}} \text{ for } \gamma > 0, a\_1, \dotsc, a\_n \in \mathbb{R}.$$

**Geometric program**은 다음과 같은 형태로 정의되며, 이는 non-convex problem이다.
>$$
>\begin{align}
>    &\text{minimize}\_{x} &{f(x)} \\\\
>    &\text{subject to } &{g_{i}(x) \leq 1, i = 1, \dotsc, m} \\\\
>    & &{h_{j}(x) = 1, j = 1, \dotsc, r}, \\\\
>\end{align}\\\\
>    \text{where $f$, $g_i, i=1, \dotsc, m$ are posynomials and $h\_j, j=1, \dotsc, r$ are monomials.}
>$$

Geometric program이 어떤 convex problem과 동일함을 증명해보자.

#### Proof:
>$f(x) = \gamma x\_1^{a\_1} x\_2^{a\_2} \dotsb x\_n^{a\_n}$일때, $y_i = logx_i$, $b=log \gamma$라 하면 $f$는 다음과 같이 변경될 수 있으며, **Theorem2**에 의해 이는 주어진 optimization problem을 동일하게 유지한다.
>$$\gamma (e^{y\_1})^{a\_1} (e^{y\_2})^{a\_2} \dotsb (e^{y\_n})^{a\_n} = e^{a^Ty + b}$$
>
>또한 posynomial은 $\sum\_{k=1}^{p} e^{a\_{k}^Ty + b\_{k}}$로 나타낼 수 있다.
>
>이때, **Theorem1**에 의해 이에 log를 취해준 형태인 $log \big( \sum\_{k=1}^{p} e^{a\_{k}^Ty + b\_{k}} \big)$ 또한 optimization problem을 동일하게 유지할 수 있다.
>
>즉, geometric program은 다음의 문제와도 동일하며 이는 convex problem이다.
>
>$$
>\begin{align}
>    &\text{minimize}\_{x} &{log \big( \sum\_{k=1}^{p\_0} e^{a\_{0k}^Ty + b\_{0k}} \big)} \\\\
>    &\text{subject to } &{{log \big( \sum\_{k=1}^{p\_i} e^{a\_{ik}^Ty + b\_{ik}} \big)} \leq 0, i = 1, \dotsc, m} \\\\
>    & &{c\_j^Ty + d\_j = 0, j = 1, \dotsc, r}, \\\\
>\end{align}\\\\
>$$

</br> </br>

# 04-06 Eliminating equality constraints

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

변수를 변경함으로써 convex problem에서 equality constraints를 소거하는 방법에 대해 알아보겠다.

>$$
>\begin{align}
>    &\text{min}\_{x} &{f(x)} \\\\
>    &\text{subject to } &{g_{i}(x) \leq 0, i = 1, .., m} \\\\
>    & &{Ax = b}. \\\\
>\end{align}
>$$

임의의 solution $x\_0$에 대해 $Ax\_{0} = b$이고 $\text{col}(M) = \text{null}(A)$이면, equality constraint를 만족하는 임의의 $x$를 다음과 같이 표현할 수 있다.
>$$x = My + x\_{0}$$

즉, $Ax = A(My + x\_0) = AMy + Ax\_0 = 0 + b = b$이므로, 주어진 문제의 $x$를 $My+x\_0$로 치환하면 equality constraint를 소거할 수 있다.

그러므로 다음의 문제는 최초에 주어진 문제와 동치이다.

>$$
>\begin{align}
>    &\text{min}\_{y} &{f(My+x\_{0})} \\\\
>    &\text{subject to } &{g_{i}(My+x\_{0}) \leq 0, i = 1, .., m}. \\\\
>\end{align}
>$$

단, 이와 같은 방법은 다음과 같은 이유들로 사용에 주의해야한다.</br>
1. $M$을 계산하는 비용은 대체로 굉장히 크다.</br>
2. $x$가 $y$보다 더 희소(sparse)하다면 $y$를 써서 계산하는 비용이 더 클 수 있다.</br>

</br> </br>

# 04-07 Slack variables

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Slack variable $s$를 사용하여 inequality constraint를 equality constraint로 변환하는 방법에 대해 알아보자.

>$$
>\begin{align}
>    &\text{min}\_{x} &{f(x)} \\\\
>    &\text{subject to } &{g_{i}(x) \leq 0, i = 1, .., m} \\\\
>    & &{Ax = b}. \\\\
>\end{align}
>$$

위의 convex problem은 다음의 문제와 동일하다.

>$$
>\begin{align}
>    &\text{min}\_{x, s} &{f(x)} \\\\
>    &\text{subject to } &{s\_{i} \geq 0, i = 1, .., m} \\\\
>    & &{g\_{i}(x) + s\_{i} = 0, i = 1,...m}\\\\
>    & &{Ax = b}. \\\\
>\end{align}
>$$

주의해야 할 점은 $g\_i, i = 1, \dotsc, m$이 affine이 아니라면 위의 문제는 더이상 convex problem이 아니라는 것이다.


</br> </br>

# 04-08 Relaxation

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

다음과 같은 문제가 주어졌다고 하자.
>$$\text{min}\_{x} \text{ } f(x) \text{  subject to  } x \in C$$

이때, domain set $C$를 $\tilde{C} \supseteq C$로 변경하는 것을 *Relaxation*이라고 한다.
>$$\text{min}\_{x} \text{ } f(x) \text{  subject to  } x \in \tilde{C}$$

$C$보다 더 큰 domain set에 대해 최적화하는 것이므로 그 optimal value는 항상 원래의 문제보다 더 작거나 같다.

#### Important special case: relaxing non-affine equality constraints
>$$h\_j(x) = 0, j = 1, \dotsc, r$$</br>
>$\text{ where $h_j, j = 1, \dotsc, r$ are convex but non-affine, are placed with}$</br>
>$$h\_j(x) \le 0, j = 1, \dotsc, r$$</br>

Equality constraint를 inequality constraint로 바꿈으로써 제약조건이 느슨해지고, domain의 크기가 커지는 효과가 발생한다. 주어진 equality constraint가 covex이고 non-affine일때, 이 방법을 이용하여 문제를 convex 문제로 변경하여 풀이할 수 있다. (단, relaxation 이후에도 동일한 solution이 도출됨이 보장되는 경우에 한함.)

</br> </br>

# 05 Canonical Problems

</br> </br>

[첫 번째 장](https://wikidocs.net/17206)에서 convex optimization problem이 다음과 같이 정의됨을 알아보았다.

>![](https://wikidocs.net/images/page/17203/Optimization_problem.png)

**[Fig1] Convex Optimization Problem in standard form [3]**

* The domain set is convex
* The objective function $f$ and the inequality constraint function $g_i$ are convex
* The equality constraint function $h_j$ is affine

이때 objective function과 constraint function의 유형에 따라 optimization problem은 다양한 범주로 나뉘어지게 된다. 이 장에서는 그 중 다음 6가지 세부항목에 대해 알아보도록 할 것이다.

- Linear Programming (LP)
- Quadratic Programming (QP)
- Quadratically Constrained Quadratic Programming (QCQP)
- Second-Order Cone Programming (SOCP)
- Semidefinite Programming (SDP)
- Conic Programming (CP)

위의 문제들은 다음과 같은 포함관계를 가지고 있으며, 우측으로 갈수록 좀 더 일반화된 형식이라고 볼 수 있다.

LP $\subseteq$ QP $\subseteq$ QCQP $\subseteq$ SOCP $\subseteq$ SDP $\subseteq$ CP

![](https://wikidocs.net/images/page/17851/canonical_problems.jpg)

</br> </br>

# 05-01 Linear Programming (LP)

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

목적함수(objective function)와 제약함수(constraint function)가 모두 affine이면 그 최적화 문제는 *linear program* (LP)이라고 불린다. General linear program은 다음과 같은 형태를 띈다.

#### General LP
>$$
>\begin{align}
>    &\text{minimize}\_{x} &{c^T x + d} \\\\
>    &\text{subject to } &{Gx \preceq h} \\\\
>    & &{Ax = b},\\\\
>&\text{where } G \in \mathbb{R}^{\text{m x n}} \text{ and } A \in \mathbb{R}^{\text{p x n}}.
>\end{align}
>$$

* 위 목적함수의 $+ d$는 최적화의 과정 및 결과에 영향을 주지 않으므로 생략되어도 무방하다.
* 만약 동일한 형태의 제약 아래 $c^T x + d$를 최대화하는 문제가 주어졌을 경우, 이를 $-c^T x - d$를 최소화하는 문제로 바꾸어 풀 수 있다.
* 위 문제는 기하학적으로 polyhedron 형태의 feasible set에 대해 affine function $c^T x + d$를 최소화시키는 $x^{*}$를 찾는 것으로 해석된다.

<center>
![](https://wikidocs.net/images/page/17850/geometric_interpretation_of_LP.png)

**[Fig1] Geometric interpretation of LP [1]**
</center>


## LP in Standard form
General LP가 아닌 standard form LP의 형태로 문제정의에 이용할 수 있다. 

#### Standard form LP
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{c^T x + d} \\\\
>    &\text{subject to } &&{A x = b} \\\\
>    & &&{x \succeq 0}.
>\end{align}
>$$

모든 general LP는 아래의 과정에 의해 standard form LP로 변형될 수 있다.

#### Converting LPs to standard form
**Step1.** Slack variable s를 이용하여 inequality constraint를 equality constraint로 바꿔준다.
> $$
> \begin{align}
>     &\text{minimize}\_{x, s} &&{c^T x + d} \\\\
>     &\text{subject to } &&{Gx + s = h} \\\\
>     & &&{Ax = b},\\\\
>     & &&{s \succeq 0}.
> \end{align}
> $$

**Step2.** x를 두 개의 nonnegative variables로 치환한다.
$x = x^{+}  - x^{-}$이고, $x^{+} \text{, } x^{-} \succeq 0.$

> $$
> \begin{align}
>     &\text{minimize}\_{x^{+}, x^{-}, s} &&{c^Tx^{+} - c^Tx^{-} + d} \\\\
>     &\text{subject to } &&{Gx^{+} - Gx^{-} + s = h} \\\\
>     & &&{Ax^{+} - Ax^{-} = b},\\\\
>     & &&{s \succeq 0}\\\\
>     & &&{x^{+} \succeq 0}, {x^{-} \succeq 0}.
> \end{align}
> $$

**Step3.** $\tilde{x}$, $\tilde{c}$, $\tilde{b}$, $\tilde{A}$를 정의.

<center>
> $\tilde{x} =
> \begin{bmatrix}
> x^{+} \\\\
> x^{-} \\\\
> s
> \end{bmatrix}
> $, 
> $
> \tilde{c} =
> \begin{bmatrix}
> c \\\\
> -c \\\\
> 0
> \end{bmatrix}
> $, 
> $
> \tilde{b} =
> \begin{bmatrix}
> h \\\\
> b
> \end{bmatrix}
> $, 
> $
> \tilde{A} =
> \begin{bmatrix}
> G & -G & I\\\\
> A & -A & O
> \end{bmatrix}
> $
</center>

**Step4.** *Step2*의 문제를 $\tilde{x}$, $\tilde{c}$, $\tilde{b}$, $\tilde{A}$로 치환.

> $$
> \begin{align}
>     &\text{minimize}\_{\tilde{x}} &&{\tilde{c}^T \tilde{x} + d} \\\\
>     &\text{subject to } &&{\tilde{A} \tilde{x} = \tilde{b}} \\\\
>     & &&{\tilde{x} \succeq 0}.
> \end{align}
> $$

## Examples

#### Diet program
영양분에 대한 요구사항을 만족하는 가장 싼 음식의 조합을 찾는 문제다.

> $$
> \begin{align}
>     &\text{minimize}_{x} &&{c^T x} \\\\
>     &\text{subject to } &&{Dx \succeq d} \\\\
>     & &&{x \succeq 0}.
> \end{align}
> $$

* $c_j$: 음식 j에 대한 단위당 가격
* $d_i$: 영양소 i에 대한 최소 권장 섭취량
* $D_{ij}$: 영양소 i가 음식 j에 들어있는 정도
* $x_j$: 식단에 포함된 음식 j의 양

#### Basis pursuit
[Undetermined linear system](https://en.wikipedia.org/wiki/Underdetermined_system)은 변수의 갯수가 등식의 갯수보다 많은 선형시스템이다. $X\beta = y$에 대한 the sparsest solution을 찾는 문제는 아래와 같은 non-convex problem으로 정의된다.

> $$
> \begin{align}
>     &\text{minimize}\_{\beta} &&{\|\beta\|_0} \\\\
>     &\text{subject to } &&{X\beta = y},\\\\
> &\text{given } y \in \mathbb{R}^n \text{ and } X \in \mathbb{R}^\text{n x p} \text{, where } p > n.\\\\
> \end{align}
> $$

* ${\| \beta \|_0}$ = $\sum\_{j=1}^p 1$ { $\beta\_j \neq 0$ }

위의 문제가 non-convex가 되는 이유는 바로 목적함수로 사용되는 $L\_0$ norm 때문이다. $L\_1$ norm이 [sparsity를 높이는 성질에 착안](https://www.analyticsvidhya.com/blog/2016/01/complete-tutorial-ridge-lasso-regression-python/#four)하여 이를 $L\_0$ norm 대신 목적함수로 사용하면 문제를 convex로 만들어 솔루션을 근사할 수 있다. 우리는 이러한 방식을 *basis pursuit*라고 부른다.

> $$
> \begin{align}
>     &\text{minimize}\_{\beta} &&{\|\beta\|_1} \\\\
>     &\text{subject to } &&{X\beta = y},\\\\
> &\text{given } y \in \mathbb{R}^n \text{ and } X \in \mathbb{R}^\text{n x p} \text{, where } p > n.\\\\
> \end{align}
> $$

또한 basis pursuit는 다음과 같이 linear program으로 변형된다.

> $$
> \begin{align}
>     &\text{minimize}_{\beta, z} &&{1^Tz} \\\\
>     &\text{subject to } &&{z \succeq \beta}\\\\
>     & &&{z \succeq -\beta}\\\\
>     & &&{X\beta = y}
> \end{align}
> $$

* $\beta$의 각 component의 절댓값보다 $z$의 각 component가 크거나 같아야한다.
* 최적화를 통해 $z$의 sparsity를 높여가며, $\beta$의 sparsity 또한 높아지도록 한다.

#### Dantzig selector
Basis pursuit에서 다룬 문제와 목적이 동일하지만, y에 noise가 있는 경우를 전제해보자 ($X\beta \approx y$). 이러한 문제를 [Dantzig selector](https://statweb.stanford.edu/~candes/papers/DantzigSelector.pdf)라고 한다.

> $$
> \begin{align}
>     &\text{minimize}_{\beta} &&{\|\beta\|_1} \\\\
>     &\text{subject to } &&{\| X^T (y - X \beta) \|\_{\infty} \leq \lambda},\\\\
>     &\text{given } y \in \mathbb{R}^n \text{ and } X \in \mathbb{R}^\text{n x p} \text{, where } p > n.\\\\
>     &\text{Here } \lambda \geq 0 \text{ is a hyper-parameter. }\\\\
> \end{align}
> $$

* $y - X \beta \in \mathbb{R}^n$은 residual이다.
* $\|y - X \beta\|\_{\infty} \leq \lambda $는 왜 inequality constraint로 사용되지 않을까? Residual을 최소의 값으로 만들어주고 싶다고 하자. 이는 min $\| y - X\beta\|\_2^2$과 같이 표현될 수 있으며, 이 목적함수의 미분값이 0이 되는 지점을 찾는 것과 같다. 즉, $\frac{d(\| y - X\beta\|\_2^2)}{d\beta} = -\frac{1}{2}X^T(y - X \beta) = 0$이다. 문제에 정의된 제약함수 $X^T(y - X \beta)$는 이러한 아이디어에서 도출된다. 다르게 말하면 이는 residual이 variable X와 상관관계(correlation)가 없길 바라는 것과 같다. ($X^T(y - X \beta) = 0$는 residual vector와 X의 column space가 orthogonal함을 의미한다.)

Dantzig selector는 마찬가지로 다음과 같이 linear program으로 변형된다.

> $$
> \begin{align}
>     &\text{minimize}_{\beta, z} &&{\|\beta\|_1} \\\\
>     &\text{subject to } &&{x\_j^T (y - X \beta) \preceq \lambda}, \text{for all } j = 1 \dotsc p\\\\
>     & &&{-x\_j^T (y - X \beta) \preceq \lambda}, \text{for all } j = 1 \dotsc p\\\\
>     & && z \succeq -\beta\\\\
>     & && z \succeq \beta,\\\\
>     &\text{given } y \in \mathbb{R}^n \text{ and } X \in \mathbb{R}^\text{n x p} \text{, where } p > n. \\\\
>     &\text{Here } x_j \text{ is a jth column of } X.\\\\
> \end{align}
> $$


</br> </br>

# 05-02 Quadratic Programming (QP)

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

*Quadratic Program*(QP)는 목적함수(objective function)가 이차식(convex quadratic)이고, 제약함수(constraint functions)가 모두 affine인 convex optimization problem이다. General quadratic program은 다음과 같은 형태로 표현될 수 있다.

#### Quadratic Program
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{(1/2)x^T P x + q^T x + r} \\\\
>    &\text{subject to } &&{Gx \preceq h} \\\\
>    & &&{Ax = b},\\\\
>&\text{where } P \in \mathbb{S}\_{+}^n, G \in \mathbb{R}^{\text{m x n}} \text{, and } A \in \mathbb{R}^{\text{p x n}}.
>\end{align}
>$$

* 위 목적함수의 $+ r$는 최적화의 과정 및 결과에 영향을 주지 않으므로 생략되어도 무방하다.
* $P \in \mathbb{S}\_{+}^n$를 만족하지 않을 경우 위 문제는 더 이상 convex가 아니게 된다.
* Quadratic program에서 직접 명시되어있지 않더라도 $P \in \mathbb{S}\_{+}^n$임을 가정한다.
* 위 문제는 기하학적으로 polyhedron 형태의 feasible set에서 convex quadratic function(ellipsoid) $(1/2)x^T P x + q^T x + r$를 최소화시키는 $x^{*}$를 찾는 것으로 해석된다.

<center>
![](https://wikidocs.net/images/page/17852/geometric_interpretation_of_QP.png)

**[Fig 1] Geometric interpretation of QP [1]**
</center>

## QP in Standard form
Quadratic program의 standard form은 다음과 같이 표현된다.

#### Standard form QP
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{(1/2)x^T P x + q^T x + r} \\\\
>    &\text{subject to } &&{A x = b} \\\\
>    & &&{x \succeq 0}.
>\end{align}
>$$

General form의 quadratic program은 아래의 과정으로 standard form QP로 변형될 수 있다.

#### Converting QPs to standard form
**Step1.** Slack variable s를 이용하여 inequality constraint를 equality constraint로 바꿔준다.
> $$
> \begin{align}
>     &\text{minimize}\_{x, s} &&{(1/2)x^T P x + q^T x + r} \\\\
>     &\text{subject to } &&{Gx + s = h} \\\\
>     & &&{Ax = b},\\\\
>     & &&{s \succeq 0}.
> \end{align}
> $$

**Step2.** x를 두 개의 nonnegative variables로 치환한다.
$x = x^{+}  - x^{-}$이고, $x^{+} \text{, } x^{-} \succeq 0.$

> $$
> \begin{align}
>     &\text{minimize}\_{x^{+}, x^{-}, s} &&{(1/2)(x^{+} - x^{-})^T P (x^{+} - x^{-}) + q^T x^{+} - q^T x^{-} + r}\\\\
>     &\text{subject to } &&{Gx^{+} - Gx^{-} + s = h} \\\\
>     & &&{Ax^{+} - Ax^{-} = b},\\\\
>     & &&{s \succeq 0}\\\\
>     & &&{x^{+} \succeq 0}, {x^{-} \succeq 0}.
> \end{align}
> $$

**Step3.** $\tilde{x}$, $\tilde{q}$, $\tilde{b}$, $\tilde{A}$, $\tilde{P}$를 정의.

<center>
> $\tilde{x} =
> \begin{bmatrix}
> x^{+} \\\\
> x^{-} \\\\
> s
> \end{bmatrix}
> $, 
> $
> \tilde{q} =
> \begin{bmatrix}
> q \\\\
> -q \\\\
> 0
> \end{bmatrix}
> $, 
> $
> \tilde{b} =
> \begin{bmatrix}
> h \\\\
> b
> \end{bmatrix}
> $, 
> $
> \tilde{A} =
> \begin{bmatrix}
> G & -G & I\\\\
> A & -A & O
> \end{bmatrix}
> $, 
> $
> \tilde{P} =
> \begin{bmatrix}
>  P & -P & O\\\\
> -P &  P & O\\\\
>  O &  O & O\\\\
> \end{bmatrix}
> $
</center>

**Step4.** *Step2*의 문제를 $\tilde{x}$, $\tilde{q}$, $\tilde{b}$, $\tilde{A}$, $\tilde{P}$로 치환.

>$$
>\begin{align}
>    &\text{minimize}\_{\tilde{x}} &&{(1/2)\tilde{x}^T \tilde{P} \tilde{x} + \tilde{q}^T \tilde{x} + r} \\\\
>    &\text{subject to } &&{\tilde{A} \tilde{x} = \tilde{b}} \\\\
>    & &&{\tilde{x} \succeq 0}.
>\end{align}
>$$

## LP and equivalent QP
Quadratic program의 목적함수에서 이차항을 제거하게 되면 linear program의 형태와 동일해짐을 알 수 있다. 즉, LP는 QP의 한가지 특수한 경우에 해당하며, LP $\subseteq$ QP의 관계가 성립한다.

#### Recall: General LP
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{c^T x + d} \\\\
>    &\text{subject to } &&{Gx \preceq h} \\\\
>    & &&{Ax = b},\\\\
>&\text{where } G \in \mathbb{R}^{\text{m x n}} \text{ and } A \in \mathbb{R}^{\text{p x n}}.
>\end{align}
>$$

## Examples

#### Portfolio optimization
Financial portfolio를 만듦에 있어 performance와 risk를 적절히 조율(trade-off)하는 문제다. 

>$$
>\begin{align}
>    &\text{maximize}\_{x} &&{\mu^T x - \frac{\gamma}{2}x^T P x} \\\\
>    &\text{subject to } &&{1^Tx = 1} \\\\
>    & &&{x \succeq 0}.
>\end{align}
>$$

* $\mu$: expected assets' returns.
* $P$: covariance matrix of assets' returns.
* $gamma$: risk aversion (hyper-parameter).
* $x$: portfolio holdings (percentages).

$\mu$와 $P$는 과거의 데이터를 통해서 얻을 수 있으며, 각 종목에 $x$만큼 투자했을 때 그 평균을 $\mu^T x$, 분산을 $x^T P x$로 표현할 수 있다.

#### Support vector machines
[Support vector machines(이하 SVM)](https://ratsgo.github.io/machine%20learning/2017/05/23/SVM/)은 quadratic program의 한 예에 해당한다. 아래는 SVM의 변형인 [C-SVM](https://ratsgo.github.io/machine%20learning/2017/05/29/SVM2/)이다. SVM에 대한 자세한 설명은 본 장의 주제에서 벗어나므로 여기서는 생략하도록 한다.

>$$
>\begin{align}
>    &\text{minimize}\_{\beta, \beta\_0, \xi} &&{\frac{1}{2} \| \beta \|\_2^2 + C \sum\_{i=1}^{n} \xi\_i} \\\\
>    &\text{subject to } &&{\xi_i \geq 0, i = 1, \dotsc, n} \\\\
>    & &&{y\_i (x\_i^T \beta + \beta\_0) \geq 1 - \xi\_i, i = 1, \dotsc, n},\\\\
>    &\text{given y} \in \\{-1, 1\\}^n, X \in \mathbb{R}^{\text{n x p}} \text{ having rows } x\_1, \dotsc, x\_n.
>\end{align}
>$$

#### Least-squares in regression
다음과 같은 convex quadratic function을 최소화하는 문제는 (unconstrained) QP에 해당한다.
> $$\| Ax - b \|\_2^2 = x^T A^TA x - 2b^TAx + b^Tb$$


</br> </br>

# 05-03 Quadratically Constrained Quadratic Programming (QCQP)

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Quadratic program에서 inequality contraint function이 이차식(convex quadratic)으로 교체되면, 이는 *Quadratically constrained quadratic program*(QCQP)이라고 불린다.

#### Quadratically Constrained Quadratic Program
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{(1/2)x^T P\_0 x + q\_0^T x + r\_0} \\\\
>    &\text{subject to } &&{(1/2)x^T P\_i x + q\_i^T x + r\_i \leq 0}, i = 1, \dotsc, m\\\\
>    & &&{Ax = b},\\\\
>&\text{where } P\_i \in \mathbb{S}\_{+}^n \text{ for } i = 0, \dotsc, m \text{, and } A \in \mathbb{R}^{\text{p x n}}.
>\end{align}
>$$

## QP and equivalent QCQP
  QCQP의 inequality constraint에서 $P\_i = 0, \text{ for } i = 1, \dotsc, m$이면 QP의 형태와 동일해짐을 알 수 있다. 즉, QP는 QCQP의 한가지 특수한 경우에 해당하며, QP $\subseteq$ QCQP의 관계가 성립한다.

#### Recall: Quadratic Program
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{(1/2)x^T P x + q^T x + r} \\\\
>    &\text{subject to } &&{Gx \preceq h} \\\\
>    & &&{Ax = b},\\\\
>&\text{where } P \in \mathbb{S}\_{+}^n, G \in \mathbb{R}^{\text{m x n}} \text{, and } A \in \mathbb{R}^{\text{p x n}}.
>\end{align}
>$$

</br> </br>

# 05-04 Second-Order Cone Programming (SOCP)

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

General LP에서 inequality constraint가 우항이 affine function인 second-order cone costraint로 교체되면, 이는 *Second-Order Cone Program*(SOCP)이다.

#### Second-Order Cone Program
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{f^T x} \\\\
>    &\text{subject to } &&{\| A\_i x + b\_i \|\_2 \leq c\_i^T x + d\_i, i = 1, \dotsc, m}\\\\
>    & &&{Fx = g},\\\\
>&\text{where } x \in \mathbb{R}^n \text{ is the optimization variable, } A\_i  \in \mathbb{R}^{n\_i \text{ x n}}, \text{ and } F \in \mathbb{R}^{\text{p x n}}.
>\end{align}
>$$

#### Recall: Norm cone
*Norm cone*은 반경 $t$ 이내인 점들로 이뤄진 cone으로 $(x,t)$로 정의되는 $R^{n+1}$차원의 convex cone이다. 이때, 반경은  임의의 norm으로 정의된다.

>$$\\{(x, t) : \left \Vert x \right \| \le t \\} \text{, for a norm } \left \Vert  · \right \|$$

아래 그림에는 $l_2$ norm $\left \Vert  · \right \|_2$에 대한 norm cone이 그려져 있다. 이를 *second-order cone* 또는 ice cream cone이라고도 부른다.

<center>
![](https://wikidocs.net/images/page/17371/02.08_Norm_Cone.PNG)

**[Fig1] Norm Cone [1]**
</center>

## QCQP and equivalent SOCP
QCQP는 다음의 유도과정을 거쳐 SOCP의 한가지 특수한 경우로 변형된다. (즉, QCQP $\subseteq$ SOCP)

#### Recall: Quadratically Constrained Quadratic Program
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{(1/2)x^T P\_0 x + q\_0^T x + r\_0} \\\\
>    &\text{subject to } &&{(1/2)x^T P\_i x + q\_i^T x + r\_i \leq 0}, i = 1, \dotsc, m\\\\
>    & &&{Ax = b},\\\\
>&\text{where } P\_i \in \mathbb{S}\_{+}^n \text{ for } i = 0, \dotsc, m \text{, and } A \in \mathbb{R}^{\text{p x n}}.
>\end{align}
>$$
>

**Step1.** 유도과정의 편의를 위해 약간 다른 형태로 QCQP를 재정의한다.
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{x^T P\_0 x + 2q\_0^T x + r\_0} \\\\
>    &\text{subject to } &&{x^T P\_i x + 2q\_i^T x + r\_i \leq 0}, i = 1, \dotsc, m\\\\
>    & &&{Ax = b},\\\\
>&\text{where } P\_i \in \mathbb{S}\_{+}^n \text{ for } i = 0, \dotsc, m \text{, and } A \in \mathbb{R}^{\text{p x n}}.
>\end{align}
>$$
>

**Step2.** $P_0$는 positive semidefinite matrix이므로 $P\_0 = \tilde{P\_0}\tilde{P\_0}$를 만족하는 $ \tilde{P\_0}$ 또한 positive semidefinite matrix이다[[5](https://en.wikipedia.org/wiki/Positive-definite_matrix#Further_properties)]. $\tilde{P\_0}$는 eigendecomposition[[6](https://en.wikipedia.org/wiki/Matrix_decomposition#Eigendecomposition)]에 의해 $Q\_0 \Lambda\_0 Q\_0^{-1}$($ = Q\_0 \Lambda\_0 Q\_0^T$ [[7](https://en.wikipedia.org/wiki/Eigendecomposition_of_a_matrix#Real_symmetric_matrices)])로 분해될 수 있는데 이를 이용하여 QCQP의 objective function을 변형하면 다음과 같다.

* $P\_0 = Q\_0 \Lambda\_0 \Lambda\_0 Q\_0^T$
* $I = Q\_0 \Lambda\_0 \Lambda\_0^{-1} Q\_0^{-1} = Q\_0 \Lambda\_0^{-1} \Lambda\_0 Q\_0^{-1}$

> $$
> \begin{align}
> {x^T P\_0 x + 2q\_0^T x + r\_0} &= {x^T P\_0 x + q\_0^T x + x^T q\_0 + q\_0^T P\_0^{-1} q\_0 - q\_0^T P\_0^{-1} q\_0 + r\_0}\\\\
> &= {x^T Q\_0 \Lambda\_0 \Lambda\_0 Q\_0^T x} + 
>      {q\_0^T Q\_0 \Lambda\_0^{-1} \Lambda\_0 Q\_0^{-1} x} + {x^T Q\_0 \Lambda\_0 \Lambda\_0^{-1} Q\_0^{-1} q\_0} + 
>      {q\_0^T Q\_0 \Lambda\_0^{-1} \Lambda\_0^{-1} Q\_0^T q\_0} - {q\_0^T P\_0^{-1} q\_0 + r\_0}\\\\
> &=(\Lambda\_0 Q\_0^T x + \Lambda\_0^{-1} Q\_0^T q\_0)^T(\Lambda\_0 Q\_0^T x + \Lambda\_0^{-1} Q\_0^T q\_0) - {q\_0^T P\_0^{-1} q\_0 + r\_0}\\\\
> &=\| \Lambda\_0 Q\_0^T x + \Lambda\_0^{-1} Q\_0^T q\_0 \|\_2^2 - {q\_0^T P\_0^{-1} q\_0 + r\_0}\\\\
> \end{align}
> $$

**Step3.** Inequality constraint function에도 Step2와 같은 방법을 적용한뒤, Step1의 QCQP에 대입한다.

>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{\| \Lambda\_0 Q\_0^T x + \Lambda\_0^{-1} Q\_0^T q\_0 \|\_2^2 - {q\_0^T P\_0^{-1} q\_0 + r\_0}} \\\\
>    &\text{subject to } &&{\| \Lambda\_i Q\_i^T x + \Lambda\_i^{-1} Q\_i^T q\_i \|\_2^2 \leq {q\_i^T P\_i^{-1} q\_i + r\_i}}, i = 1, \dotsc, m\\\\
>    & &&{Ax = b}.\\\\
>\end{align}
>$$
>

**Step4.** 목적함수의 ${q\_0^T P\_0^{-1} q\_0 + r\_0}$는 상수이므로 생략되어도 무방하다.
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{\| \Lambda\_0 Q\_0^T x + \Lambda\_0^{-1} Q\_0^T q\_0 \|\_2^2} \\\\
>    &\text{subject to } &&{\| \Lambda\_i Q\_i^T x + \Lambda\_i^{-1} Q\_i^T q\_i \|\_2^2 \leq {q\_i^T P\_i^{-1} q\_i + r\_i} }, i = 1, \dotsc, m\\\\
>    & &&{Ax = b}.\\\\
>\end{align}
>$$

**Step5.** Scalar variable t를 도입하여 Step4에서와 동일한 문제를 정의할 수 있다. 
>$$
>\begin{align}
>    &\text{minimize}\_{x, t} &&{t} \\\\
>    &\text{subject to } &&{{\| \Lambda\_0 Q\_0^T x + \Lambda\_0^{-1} Q\_0^T q\_0 \|\_2^2} \leq t}\\\\
>    & &&{\| \Lambda\_i Q\_i^T x + \Lambda\_i^{-1} Q\_i^T q\_i \|\_2^2 \leq {q\_i^T P\_i^{-1} q\_i + r\_i} }, i = 1, \dotsc, m\\\\
>    & &&{Ax = b}.\\\\
>\end{align}
>$$

위는 SOCP의 한가지 특수한 경우에 해당한다. 즉, QCQP $\subseteq$ SOCP의 관계가 성립한다.

</br> </br>

# 05-05 Semidefinite Programming (SDP)

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

General LP에서 inequality constraint가 linear matrix inequality(LMI)로 교체되면, 이는 *Semidefnite Program*(SDP)이다.

#### Semidefinite Program
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{c^T x + d} \\\\
>    &\text{subject to } &&{xF\_1 + \dotsb + x\_nF\_n + G \preceq 0} \\\\
>    & &&{Ax = b},\\\\
>&\text{where } G, F\_1, \dotsb, F\_n \in \mathbb{S}^{k} \text{ and } A \in \mathbb{R}^{\text{p x n}}.
>\end{align}
>$$

* $G, F\_1, \dotsb, F\_n$가 모두 diagonal matrices면, 위의 inequality constraint는 n개의 linear inequalities와 동일해진다. 이 경우 SDP는 LP와 같다.
* 복수의 LMI는 다음과 같이 단일의 LMI로 표현된다.
> $$
> x\_1\hat{F\_1} + \dotsb + x\_n\hat{F_n} + \hat{G} \preceq 0, \phantom{5} x\_1\tilde{F\_1} + \dotsb + x\_n\tilde{F_n} + \tilde{G} \preceq 0
> $$
> 
> <center>is equivalent to single LMI: </center>
> 
> $$
> x\_1
> \begin{bmatrix}
>     \hat{F\_1} & 0 \\\\
>     0 & \tilde{F_1} \\\\
> \end{bmatrix} + 
> x\_2
> \begin{bmatrix}
>     \hat{F\_2} & 0 \\\\
>     0 & \tilde{F_2} \\\\
> \end{bmatrix} + 
> \dotsb
> +
> x\_n
> \begin{bmatrix}
>     \hat{F\_n} & 0 \\\\
>     0 & \tilde{F_n} \\\\
> \end{bmatrix} + 
> \begin{bmatrix}
>     \hat{G\_1} & 0 \\\\
>     0 & \tilde{G_1} \\\\
> \end{bmatrix}
> \preceq 0
> $$

## SDP in Standard form
다음과 같이 표현될 때, semidefinite program의 standard form이라고 한다.

#### Standard form SDP
>$$
>\begin{align}
>    &\text{minimize}\_{X} &&{tr(CX)} \\\\
>    &\text{subject to } &&{tr(A\_iX) = b\_i, \phantom{5} i=1,\dotsc,p} \\\\
>    & &&{X \succeq 0},\\\\
>    & \text{where } C, A\_1, \dotsc, A\_p \in \mathbb{S}^n.
>\end{align}
>$$

* Recall: $tr(CX) = \sum\_{i,j=1}^n C\_{ij}X\_{ij}$

모든 SDP는 아래의 과정에 의해 standard form SDP로 변형될 수 있다.

#### Converting SDPs to standard form
**Step1.**  Slack variable S를 이용하여 inequality constraint를 equality constraint로 바꿔준다.
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{c^T x + d} \\\\
>    &\text{subject to } &&{\sum\_{l=1}^n F\_l x\_l+ S = -G} \\\\
>    & &&{Ax = b}\\\\
>    & &&{S \succeq 0}
>\end{align}
>$$

**Step2.** step1에서 유도된 equality constraint를 각 component에 대한 식으로 변형한다.
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{c^T x + d} \\\\
>    &\text{subject to } &&{\sum\_{l=1}^n (F\_l x\_l)\_{ij} + S\_{ij} = -G\_{ij}, i,j = 1, \dotsc, k} \\\\
>    & &&{Ax = b}\\\\
>    & &&{S \succeq 0}
>\end{align}
>$$

**Step3.** x를 두 개의 nonnegative variables로 치환한다.
$x = x^{+}  - x^{-}$이고, $x^{+} \text{, } x^{-} \succeq 0.$
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{c^T (x^{+}  - x^{-}) + d} \\\\
>    &\text{subject to } &&{\sum\_{l=1}^n (F\_l x^{+} \_l)\_{ij} - \sum\_{l=1}^n (F\_l x^{-} \_l)\_{ij} + S\_{ij} = -G\_{ij}, i,j = 1, \dotsc, k} \\\\
>    & &&{Ax^{+}  - Ax^{+} = b}\\\\
>    & &&{S \succeq 0}\\\\
>    & &&{x^{+} \text{, } x^{-} \succeq 0}.
>\end{align}
>$$

**Step4.** $X$, $C$, $\tilde{A}$, $\tilde{b}$를 정의.

* All the blanks are zero.

> $
> X = 
> \begin{bmatrix}
> diag(x^{+})\\\\
>  & diag(x^{-})\\\\
> && s\_{11}\\\\
> &&& s\_{12}\\\\
> &&&&\dotsc\\\
> &&&&&s\_{ij}\\\\
> &&&&&&\dotsc \\\
> &&&&&&&s\_{kk}\\\\
> \end{bmatrix}
> $,
> 
> $
> C = 
> \begin{bmatrix}
> diag(c)\\\\
> & -diag(c) &\\\\
> & & O_{k^2 \text{ x } k^2}\\\\
> \end{bmatrix}
> $, 
> 
> $
> P\_{ij} = 
> \begin{bmatrix}
> (F\_1)\_{ij}\\\\
> &(F\_2)\_{ij}\\\\
> &&\dotsc\\\\
> &&&(F\_n)\_{ij}\\\\
> &&&&-(F\_1)\_{ij}\\\\
> &&&&&-(F\_2)\_{ij}\\\\
> &&&&&&\dotsc\\\\
> &&&&&&&-(F\_n)\_{ij}\\\\
> &&&&&&&&0&\\\\
> &&&&&&&&&\dotsc\\\\
> &&&&&&&&&&1 \phantom{1} (\text{ij th position})\\\\
> &&&&&&&&&&&\dotsc\\\\
> &&&&&&&&&&&&0\\\\
> \end{bmatrix}
> $,
>
> $
> Q\_{i}= 
> \begin{bmatrix}
> diag(A\_i)\\\\
> &-diag(A\_i)\\\\
> &&O_{k^2 \text{ x } k^2}\\\\
> \end{bmatrix}
> $ ($A\_i$ is ith row of A), 
> 
> $
> \tilde{A} = 
> \begin{bmatrix}
> P\_{11}\\\\
> \dotsc\\\\
> P\_{kk}\\\\
> Q\_{1}\\\\
> \dotsc\\\\
> Q\_{p}\\\\
> \end{bmatrix}
> $,
> 
> $
> -G\_{ij} = tr(P\_{ij}X)
> $,
> 
> $
> b\_i = tr(Q\_iX)
> $,
> 
> $
> \tilde{b} = 
> \begin{bmatrix}
> -G\_{11}\\\\
> \dotsc\\\\
> -G\_{kk}\\\\
> b\_{1}\\\\
> \dotsc\\\\
> b\_{p}\\\\
> \end{bmatrix}
> $.

**Step5.** *Step3*의 문제를 $X$, $C$, $\tilde{A}$, $\tilde{b}$로 치환.

>$$
>\begin{align}
>    &\text{minimize}\_{X} &&{tr(CX)} \\\\
>    &\text{subject to } &&{tr(\tilde{A}\_iX) = \tilde{b}\_i, \phantom{5} i=1,\dotsc,k^2+p} \\\\
>    & &&{X \succeq 0}.
>\end{align}
>$$

## SOCP and equivalent SDP
Schur complement[[8](https://en.wikipedia.org/wiki/Schur_complement)]를 이용하여 SOCP의 inequality constraint를 표현하면 SOCP는 SDP의 어떤 특수한 경우로 변형된다. 즉, SOCP $\subseteq$ SDP의 관계가 성립한다.

#### Recall: Second-Order Cone Program
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{f^T x} \\\\
>    &\text{subject to } &&{\| A\_i x + b\_i \|\_2 \leq c\_i^T x + d\_i, i = 1, \dotsc, m}\\\\
>    & &&{Fx = g}.
>\end{align}
>$$

#### SOCP to SDP by Schur complement
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{f^T x} \\\\
>    &\text{subject to } 
>    &&
>    \begin{bmatrix}
>    (c\_i^T x + d)I    & A\_i x + b\_i \\\\
>    (A\_i x + b\_i)^T & c\_i^T x + d \\\\
>    \end{bmatrix} \succeq 0, i = 1, \dotsc, m\\\\
>    & &&{Fx = g}.
>\end{align}
>$$

</br> </br>

# 05-06 Conic Programming (CP)

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

General LP에서 inequality constraint가 generalized inequality constraint로 교체되면, 이는 *Conic Program*(CP)이다.

#### Conic Program
>$$
>\begin{align}
>    &\text{minimize}\_{x} &&{c^T x + d} \\\\
>    &\text{subject to } &&{Fx + g \preceq\_{K} 0} \\\\
>    & &&{Ax = b},\\\\
>&\text{where } c, x \in \mathbb{R}^{n}, A \in \mathbb{R}^{p \text{ x } n}, \text{and } b \in \mathbb{R}^{p}.
>\end{align}
>$$

* $F$: $ \mathbb{R}^n \rightarrow Y$ is a linear map, $g \in Y$, for Eucliean space Y.
* LP는 $K = \mathbb{R}\_{+}^n$일때이며, 이는 CP의 special case에 해당한다.
* SDP는 $K = \mathbb{S}\_{+}^n$일때이며, 이 또한 CP의 special case에 해당한다. 즉, SDP $\subseteq$ CP의 관계가 성립한다.

</br> </br>

# 06 Gradient Descent

</br> </br>

이 장에서는 최적화 기법 중에 가장 기본적이고 중요한 기법인 **Gradient Descent**에 대해 살펴본다. 

최적화 기법에서 알고리즘의 수렴 여부와 수렴속도를 결정짓는 매우 중요한 요소가 search direction과 step size이다. Gradient descent 방식은 gradient의 음수 방향으로 직선 탐색을 하는 방식이다. 이때, step size는 고정 크기 방식과 곡면에 따라 적응적으로 선택하는 방식이 있는데 이 장에서는 두 방식에 대해 모두 살펴볼 것이다.

Gradinet descent가 수렴하려면 몇 가지 전제 조건이 필요하다. 이런 전제 조건이 만족된다면 gradient descent가 얼마나 빠르게 수렴할 수 있는지 계산해 볼 수 있다. 또한, Strong Convexity를 만족하게 되면 수렴은 기하급수적으로 빨라지게 된다. 이 경우에 수렴 속도도 살펴볼 것이다.

Gradient descent를 응용한 방법으로 gradient boosting과 stochastic gradient decent에 대해서도 살펴보도록 하겠다.

</br> </br>

# 06-01 Gradient Descent

</br> </br>

Gradient descent는 제약조건이 없는 convex이고 differentiable한 function의 최적화 문제를 풀기위한 가장 단순한 알고리즘이다.

> $min_x f(x)$, $f$ : differentiable with $dom(f) = R^n$.

참고로, optimal value는 $f^{\*} = min_x f(x)$로 optimal은 $x^{\*}$로 표기한다.</br>


#### Gradient decent method
Gradient descent는 초기 점 $x^{(0)} \in R^n$을 선택하고 다음 식을 반복적으로 실행해서 임의의 조건을 만족하면 종료하게 된다.
> $x^{(k)} = x^{(k-1)} - t_k \nabla f(x^{(k-1)}), k = 1, 2, 3, . . .$, $t_k \gt 0$

이를 pseudocode로 정리해보면 다음과 같다.

> **give a starting point** x $\in$ $x \in$ **dom** $f$ <br>
> **repeat**  <br>
> 1. Determine a descent direction $\Delta x = -\nabla f(x)$. <br>
> 2. Line Search. Choose a step size $t \gt 0$. <br>
> 3. Update $x = x + t \Delta x$. <br>
> **until** stopping criteion is satisfied <br>

#### Examples

다음 그림에는 함수 $f$가 convex function일 때 gradient descent를 수행을 보여주고 있다. 이 경우, local minimum = global minimum에 도달할 수 있게 된다.</br>
![](https://wikidocs.net/images/page/18084/gradientdescent1.PNG)</br>
**[Fig 1] Gradient descent in convex functions[3]**</br>

반면 다음 그림에는 함수 $f$가 non-convex function일 때 gradient descent를 수행을 보여주고 있다. 이 경우 초기점이 어느 곳에 위치하느냐에 따라서 각각 다른 곳에 존재하는 local minimum으로 수렴한다. </br>
![](https://wikidocs.net/images/page/18084/gradientdescent2.PNG)</br>
**[Fig 2] Gradient descent in non-convex functions[3]**</br>


## Gradient decent interpretation
Gradient descent는 함수를 2차 식으로 근사한 후 함수의 최소 위치를 다음 위치로 선택하는 방법이다.

이 과정을 보이기 위해 함수 $f$를 2차 Taylor 식으로 전개해보자.
>\begin{align}
f(y) \approx f(x) + \nabla f(x)^T (y - x) +  \frac{1}{2} \nabla^2 f(x)  \parallel y - x  \parallel _2 ^2
\end{align}

이때 2차 항에 있는 hessian $\nabla^2 f(x)$를 $\frac{1}{t}I$로 대체하면 다음과 같이 표현된다. 여기서 $t$는 step size이다.
>\begin{align}
f(y) \approx f(x) + \nabla f(x)^T (y - x) +  \frac{1}{2t}  \parallel y - x  \parallel _2 ^2
\end{align}

따라서, gradient decent에서는 step size의 역수가 eigenvalue인 hessian 행렬을 2차 항의 계수로 갖는 2차식으로 함수를 근사했다고 볼 수 있다. 또한, 이 식에서 $f(x) + \nabla f(x)^T (y - x)$는 $f$에 대한 선형 근사로 볼 수 있으며, $\frac{1}{2t}  \parallel y - x  \parallel\_2^2$는 $x$에 대한 proximity term으로 볼 수 있다. Proximity term은 $x$에서 $y$가 얼마나 가까운지를 나타낸다.

이렇게 근사된 함수의 2차식을 최소화하는 위치를 다음 위치로 선택하게 된다.  그러기 위해 $f(y)$의 gardient를 0으로 두고 다음 위치인 $y = x^+$를 구하면 다음과 같은 식을 얻게 된다.

> $x^+ = x - t \nabla f(x)$

아래 그림에서 파란색 점은 현재 위치 $x$를 나타내며 빨간색 점은 다음 위치 $y$를 나타낸다. 아래쪽에 있는 곡선은 실제 함수 $f$의 곡선이며 윗쪽에 있는 곡선은 함수 $f$의 2차 근사 곡선이라고 볼 수 있다. 따라서, 빨간색 점은 2차 근사식에 대한 최소 지점을 나타낸다.

![](https://wikidocs.net/images/page/18084/gradientdescent3.PNG)</br>
**[Fig 3] Gradient descent algorithm : red dot is $x^+$ and blue dot $x$ [3]**</br>

현재 위치 $x$에서 다음 위치 $y$가 얼마나 가까운지는 proximity term의 weight $\frac{1}{2t}$에 따라 달라진다. 만약 $t$ 값이 작다면, proximity term의 weight는 커지게 되고 스텝은 작아지게 될 것이다. 이러한 과정은 다음 수식으로 표현된다.

> \begin{align}
x^+ = \underset{y}{\text{argmin}} \ f(x) + \nabla f(x)^T (y - x) + \frac{1}{2t} \parallel y - x \parallel_2 ^2
\end{align}

</br> </br>

# 06-02 How to choose step sizes

</br> </br>

Gradient descent를 반복할 때, **step size**는 $x$ 값을 갱신하며 그 값에 따라 optimal로 수렴하는 속도를 달라지게 만들거나 혹은 발산하게 한다. 이 절에서는 step size 값을 적절하게 도출하는 방법을 다음 세가지로 제시하면서 gradient descent 기법 안에서 더 빠르게 optimal 값을 찾을 수 있도록 한다.</br>

- Fixed step size
- Backtracking line search
- Exact line search

</br> </br>

# 06-02-01 Fixed step size

</br> </br>

Gradient decent에서 step size를 찾는 가장 단순한 방법은 모든 반복에서 t를 고정하는 것이다.  하지만 step size $t_k = t$, $k = 1, 2, 3, ...$의 크기에 따라 수렴할 수도 있으고 발산할 수도 있다. 

예를 들어 아래 그림을 보면 함수 $f(x) = (10 x_1^2 + x_2^2) / 2$에 대해 gradient descent를 수행을 보여주고 있다.

![](https://wikidocs.net/images/page/18088/gradientdescent4.PNG)</br>
**[Fig 1] Step size different scenarios [3]**

* A의 경우 step size $t$가 매우 큰 경우로 8 step 이후  발산하였다. 이 경우 절대로 minimum값에 도달할 수 없다. 
* 반면 그림 B와 같이  step size $t$가 아주 작으면 수렴의 속도가 매우 느려져서 100 step에서도 수렴하지 못한다. 즉, 최소에 가까워질수록 $\nabla f(x)$가 0에 가까워지므로 step $t \nabla f(x)$도 아주 작아져서 진행이 점점 느려지게 된다.
* (시행착오에 의해 발견한) $t$값이 "적절한 값"이라면 C와 같이 잘 수렴하게 된다. 이 때는 40 정도 진행한 상황이다. (이 "적절한 값"은 수렴 분석을 통해 찾을 수 있으며 이 장의 뒷부분에서 소개한다.)


</br> </br>

# 06-02-02 Backtracking line search

</br> </br>

Gradient descent에서 고정 step size를 사용하게 되면 진행 속도가 항상 동일하기 때문에, 경사가 가파른 구간에서는 최적점을 지나쳐서 진동할 수 있으며  경사가 평평한 구간에서는 진행이 느려질 수가 있다. 따라서, 곡면의 특성에 맞춰 속도를 조절하면서 진행해야 수렴도 보장되고 수렴 속도도 높아진다. 이와 같이 곡면의 특성에 맞춰 step size를 적응적으로 선택하는 방법 중 하나가 **backtracking line search**이다.

#### Backtracking line search 방법이란?
이 방법은 다음 위치를 결정할 때 현재 위치에서 한 step을 가보고 너무 많이 갔다고 판단하면 다시 되돌아 오는 방법이다. 다음 그림은 **backtracking line search**로 다음 step을 결정하는 방식을 보여준다. 

![](https://wikidocs.net/images/page/18184/06.02_02_01_Backtracking_Line_Search.PNG)<br>
**[Fig1] Backtracking Line Search [3]**

곡면 $f$에서 탐색 범위는 직선으로 제한된다. 아래쪽 점선은 현재 위치 $x$에서 접선 방향으로 한 step 간 경우이다. 이 경우  $f$가 항상 직선보다 위쪽에 있으므로 많이 간 것인지  적당히 간 것인지 자세히 판단하기가 어렵다. 

**Backtracking line search**에서는 위쪽 점선을 사용한다. 위쪽 점선은 접선의 기울기에 $\alpha$를 곱한 방향으로 한 step 간 경우이다. 이때, 직선은 항상 $f(x+t\Delta x)$와 교차하므로,  한 step 간 지점에서 $f(x+t\Delta x)$의 위치가 점선 위에 있으면 너무 많이 갔다고 판단하고 $f(x+t\Delta x)$의 위치가 점선 아래에 있으면 적당히 잘 갔다고 판단한다.

너무 많이 간 경우에는 되돌아 오기 위해 $t$를 줄이고 $f$가 점선 아래로 오게 만든다. 이때 $t$의 위치는 $0 \le t \le t_0$구간 안으로 들어온다.


#### Backtracking line search 알고리즘
이 내용을 알고리즘으로 정리하면 다음과 같다. (단, $\Delta x = - \nabla f(x)$)

1. 파라미터를 초기화한다. ($0 \lt \beta \lt 1$, $0 \lt \alpha \le 1/2$)
2. 각 반복에서 $t = t_{init}$로 초기화 한다. ($t_{init} = 1$)
3. 조건 $f(x - t \nabla f(x) ) \gt f(x) - \alpha t \lVert \nabla f(x) \rVert_2^2 $을 만족하면 $t = \beta t$로 줄인다. 이 조건이 만족되는 동안 3을 반복한다.
4. Gradient descent update $ x^+ = x - t \nabla f(x)$를 실행한다.
5. 종료 조건을 만족하지 않으면 2로 간다.

**Backtracking line search**은 단순하지만 매우 잘 실행된다. 
파라미터 $\alpha$는 다음 step의 방향을 결정하며, $\beta$는 다음 step을 얼마나 되돌아 올 지 결정한다.  $\beta$ 값이 작으면 크게 되돌아 오기 때문에 3번 반복 회수는 적어지지만 step size가 작아져서 한번에 멀리 가지는 못한다. 실제 파라미터 선정은 알고리즘의 성능에 크게 영향을 주지 않으며, 대부분 $\alpha = 1/2$로 $\beta$는 1에 가까운 값으로 선정한다. 


#### Backtracking line search 수렴 예시
Backtracking 방식으로 adaptive하게 step size를 선정하게 되면 fixed step size로 100 step만에 수렴했던 예제가 12 step만에 수렴한다 ($\alpha = \beta = 1/2$). 내부 backtracking step까지 포함해도 총 40 step만에 수렴한다.

![](https://wikidocs.net/images/page/18184/06.02_02_02_Convergence.PNG)<br>
**[Fig2] Convergence [3]**



#### The intuition of Backtracking line search

> 함수 $f$에 대한 quadratic approximatior는 다음과 같이 정의된다.
> $$f(y) \approx f(x) + \nabla f(x)^T(y-x) + \frac{1}{2t} \| y - x \|\_{2}^{2}$$
> 이때, $y = x - t \nabla f(x)$라 하면,</br>
> $$
> \begin{align}
> f(x - t \nabla f(x)) &\approx f(x) + \nabla f(x)^T (x - t \nabla f(x) - x) + \frac{1}{2t} \| x - t \nabla f(x) - x \|\_{2}^2 \\\\
> &= f(x) - t \| \nabla f(x) \|\_{2}^2 + \frac{1}{2t} \| -t \nabla f(x) \|\_{2}^2 \\\\
> &= f(x) - t \| \nabla f(x) \|\_{2}^2 + \frac{1}{2}t \| \nabla f(x) \|\_{2}^2 \\\\
> &= f(x) - \frac{1}{2}t \| \nabla f(x) \|\_{2}^2
> \end{align}
> $$

즉, $f(x) - \frac{1}{2}t \| \nabla f(x) \|\_{2}^2$는 $f(x - t \nabla f(x))$의 quadratic approximator이다. 이 두 함수 사이의 부등호 방향에 따른 기하학적인 의미를 살펴보자.</br>
(빨간선: $f(x - t \nabla f(x))$, 파란선: $f(x) - \frac{1}{2}t \| \nabla f(x) \|\_{2}^2$)

**(1) $f(x - t \nabla f(x)) < f(x) - \frac{1}{2}t \| \nabla f(x) \|\_{2}^2$**

![](https://wikidocs.net/images/page/18184/f_leq_app.png)</br>
**[Fig 3] f is less than the approximation of the next step**

Quadratic approximator가 $x - t \nabla f(x)$에서 더 위에 위치하는 형태이다. Quadratic approximatior의 solution에 접근하면 $f(x)$의 solution에 더 가까이 접근할 수 있음이 보장된다.

**(2) $f(x - t \nabla f(x)) > f(x) - \frac{1}{2}t \| \nabla f(x) \|\_{2}^2$**

![](https://wikidocs.net/images/page/18184/f_geq_app.png)</br>
**[Fig 4] f is greater than the approximation of the next step**

(1)의 경우와는 반대되는 양상을 보인다. Quadratic approximatior의 solution을 통해 $f(x)$의 solution에 더욱 접근할 수 있음이 보장되지 않는다.

**결론:** 매 스텝에서 t 값을 잘 조정하여 항상 $f(x - t \nabla f(x)) \leq f(x) - \frac{1}{2}t \| \nabla f(x) \|\_{2}^2$를 만족하도록 하면 훨씬 효과적으로 $f(x)$의 solution에 접근할 수 있다.

</br> </br>

# 06-02-03 Exact line search

</br> </br>

Gradient descent에서 곡면의 특성에 맞춰 step size를 적응적으로 선택하는 방법 중 또 다른 하나가  **exact line search**이다. 

#### Exact line search 방법이란?
**Exact line search** 방법에서는 gradient 음수 방향의 직선을 따라가며 가장 좋은 step size를 선택한다. 

다음 식에서 알 수 있듯이 $s$는 0보다 큰 값으로 $s$를 키우면 다음 step 위치인 $x - s \nabla f(x)$도 현재 위치에서 멀어진다. 따라서, $s$를 키우면서 $f$가 최소가 되는 지점의 step size $t$를 찾을 수 있다.

> $t = argmin_{s \ge 0}$ $f(x - s \nabla f(x) )$

**Exact line search** 방법은 변수가 하나인 최소화 문제를 푸는 비용이 검색 방향을 계산하는 비용보다 저렴할 때 사용될 수 있지만, step size를 exhaustive하게 탐색하는 방식때문에 실용적이진 않다. 실제 **backtracking** 방법보다 효율적이지 않으며 잘 사용되지 않는다.

</br> </br>

# 06-03 Convergence analysis

</br> </br>

이 절에서는 **Gradient descent**의 수렴을 분석하려고 한다. 수렴을 위한 오차 상한은 fixed step size의 경우와 backtracking의 경우에 대해서 각각 살펴볼 것이다. 또한, Strong convexity를 만족할 때에 오차 상한에 대해서도 분석할 것이다. 

</br> </br>

# 06-03-01 Convergence analysis & Proof

</br> </br>

$f$는 convex이고 differentiable하며 **dom** $f = R^n$일 때 다음 식을 만족한다고 하자.

>$ \lVert \nabla f(x) - \nabla f(y) \rVert\_2 \le L \lVert x - y \rVert\_2$  for any $x, y$ and $L \gt 0$ <br>

$\nabla f$는 Lipschitz constant $L$에 대해  Lipschitz continuous하다고 말할 수 있다.

참고 : [[(Wikipedia) Lipschitz continuity](https://en.wikipedia.org/wiki/Lipschitz_continuity)]

## Convergence Theorem
> **Gradient descent**는 fixed step size $t \le 1/L$에 대해 다음 식을 만족한다. 
>\begin{align}
f(x^{(k)}) - f^{\*} \le  \frac{ \lVert x^{(0)} - x^{\*} \rVert^2\_2 }{2tk}
\end{align}

Gradient decent가 fixed step size일때 convergence rate $O(1/k)$가 된다. 또한, $f(x^{(k)}) - f^{\*} \le \epsilon$라면 $O(1/\epsilon)$의 반복이 필요하다.

## Proof

$\nabla f$는 Lipschitz continuous하며 $f$는 Lipschitz constant $L$을 계수로 하는 2차 항으로 된 quadratic upper bound를 갖는다. (Upper bound의 증명은  [06-03-02](https://wikidocs.net/18454) 절을 참조)

> \begin{align}
f(y) \le f(x) + \nabla f(x)^T (y-x) + \frac{L}{2} \lVert y - x \rVert^2\_2  \space \space \forall x, y
\end{align}

Gradient descent를 현재 위치 $x$에서 다음 위치 $x^+ = x - t \nabla f(x)$로 진행한다고 해보자. 위의 식에서 $y = x^+$라고 하고 전개해보자.


>
\begin{align}
f(x^+) & \le f(x) +  \nabla f(x)^T (x^+ - x) + \frac{L}{2} \lVert x^+ - x \rVert^2\_2 \\\
& = f(x) +  \nabla f(x)^T (x - t \nabla f(x) - x) + \frac{L}{2} \lVert x - t \nabla f(x) - x \rVert^2\_2 \\\
& = f(x) - t \nabla f(x)^T (\nabla f(x)) + \frac{L}{2} \lVert t \nabla f(x) \rVert^2\_2 \\\
& =  f(x) - t \lVert \nabla f(x)) \rVert^2\_2 + \frac{Lt^2}{2} \lVert \nabla f(x) \rVert^2\_2 \\\
& =  f(x) - t ( 1 - \frac{Lt}{2} )\lVert \nabla f(x) \rVert^2\_2 \\\
& \le f(x) -  \frac{t}{2} \lVert \nabla f(x) \rVert^2\_2 \\\
\end{align}

마지막 라인은 $t \le 1/L$이기 때문에 $Lt/2 \lt 1/2$이 된다. 따라서 다음과 같이 정리될 수 있으며 $f(x^+) \lt f(x)$임을 알 수 있다.
>
\begin{align}
f(x^+) & \le f(x) -  \frac{t}{2} \lVert \nabla f(x) \rVert^2\_2 \\\
\end{align}

$f$는 convex이기 때문에 다음과 같이 1차 미분의 특성을 만족한다. (즉, $f$는 convex이기 때문에 $x$에서의 접선보다 항상 윗쪽에 존재한다.)

>
\begin{align}
f(y)  \ge f(x) + \nabla f(x)^T (y-x) \space \space \forall x,y \in \text{dom} (f) \\\
\end{align}


이 식에서 $y = x^{\*}$라고 하면 다음과 같이 정리된다.

>
\begin{align}
f(x)  \le f(x^{\*}) + \nabla f(x)^T (x-x^{\*}) \\\
\end{align}

이 convexity를 $f(x^+)$ 식과 합쳐서 전개해보자.

>
\begin{align}
f(x^+) & \le f(x) -  \frac{t}{2} \lVert \nabla f(x) \rVert^2\_2 \\\
& \le f(x^{\*}) + \nabla f(x)^T (x-x^{\*}) - \frac{t}{2} \lVert \nabla f(x) \rVert^2\_2 \\\
& = f(x^{\*}) + \frac{1}{2t} ( \lVert x - x^{\*} \rVert^2\_2 -  \lVert x - x^{\*} \rVert^2\_2 - t^2 \lVert \nabla f(x) \rVert^2\_2 + 2t \nabla f(x)^T (x - x^{\*}) )  \\\
& = f(x^{\*}) + \frac{1}{2t} ( \lVert x - x^{\*} \rVert^2\_2 -  (x - x^{\*})^T (x - x^{\*}) - t^2 \nabla f(x)^T  \nabla f(x) + 2t \nabla f(x)^T (x - x^{\*}) )  \\\
& = f(x^{\*}) + \frac{1}{2t} ( \lVert x - x^{\*} \rVert^2\_2 -  [(x - x^{\*})^T (x - x^{\*}) + t^2 \nabla f(x)^T  \nabla f(x) - 2t \nabla f(x)^T (x - x^{\*})] )  \\\
&= f(x^{\*}) + \frac{1}{2t} ( \lVert x - x^{\*} \rVert^2\_2 -  [(x - t \nabla f(x)^T - x^{\*})^T (x - t \nabla f(x)^T - x^{\*})] )  \\\
& = f(x^{\*}) + \frac{1}{2t} ( \lVert x - x^{\*} \rVert^2\_2 -  \lVert  x - t \nabla f(x)^T - x^{\*} \rVert^2\_2 )  \\\
& = f(x^{\*}) + \frac{1}{2t} ( \lVert x - x^{\*} \rVert^2\_2 -  \lVert  x^+ - x^{\*} \rVert^2\_2 )  \\\
\end{align}

마지막 단계는 $x^+ = x - t \nabla f(x)$이기 때문이다. 단계 $i$에 이 결과를 적용해 보면 다음과 같아진다.
>
\begin{align}
f(x^{(i)}) - f(x^{\*}) & \le \frac{1}{2t} ( \lVert x^{(i-1)}  - x^{\*} \rVert^2\_2 -  \lVert  x^{(i)} - x^{\*} \rVert^2\_2 )  \\\
\end{align}

따라서, 위의 식을 $i = 1$에서 $k$까지 더하면 다음과 같이 된다.

>
\begin{align}
\sum_{i=1}^k f(x^{(i)}) - f(x^{\*}) & \le \sum_{i=1}^k \frac{1}{2t} ( \lVert x^{(i-1)}  - x^{\*} \rVert^2\_2 -  \lVert  x^{(i)} - x^{\*} \rVert^2\_2 )  \\\
& = \frac{1}{2t} ( \lVert x^{(0)}  - x^{\*} \rVert^2\_2 -  \lVert  x^{(k)} - x^{\*} \rVert^2\_2 )  \\\
& \le \frac{1}{2t} ( \lVert x^{(0)}  - x^{\*} \rVert^2\_2 )  \\\
\end{align}

마지막 단계에서 각 $i$의 첫번째 항은 $i-1$의 두번째 항으로 소거되어 최종적으로 첫번째 항과 마지막 항만 남게 된다. $f(x^{(k)})$가 non-increasing임을 적용하여 정리해 보면 다음과 같다.

>
\begin{align}
\frac{1}{k} \sum_{i=1}^k f(x^{(i)}) - f(x^{\*}) \ge  \frac{1}{k} \sum_{i=1}^k f(x^{(k)}) - f(x^{\*}) = f(x^{(k)}) - f(x^{\*})
\end{align}

이에 따라 최종 결과는 다음과 같다.

>
\begin{align}
f(x^{(k)}) - f(x^{\*}) \le \frac{1}{2tk} ( \lVert x^{(0)}  - x^{\*} \rVert^2\_2 )  \\\
\end{align}

이로써 Gradient descent의 Convergence Theorm이 증명되었다.

</br> </br>

# 06-03-02 Convex function quardratic upper bound

</br> </br>

## Quardratic upper bound
함수 $f$가 convex이고 $\nabla f$는 Lipschitz continuous하면 다음과 같은 quadractic upper bound를 갖는다. (단, $L$은 Lipschitz constant이다.)

> \begin{align}
f(y) & \le f(x) + \nabla f(x)^T (y-x) + \frac{L}{2} \lVert y - x \rVert^2\_2  \space \space \forall x, y
\end{align}

또한, 다음 함수 $g$가 convex이면 함수 $f$는 quadractic upper bound를 갖는다.

> \begin{align}
g(x) & = \frac{L}{2} \lVert x \rVert^2\_2 - f(x) \space \text{is convex, } \space \forall x \space \space \text{with dom g = dom f }\\\
\end{align}

## Proof
#### Monotone Operator
함수 $f$는 convex이므로 다음과 같이 $\nabla f(x)$에 대한 monotone operator를 갖는다.

> $\(\nabla f(y) - \nabla f(x))^T (y-x) \ge 0$

[참고] Vector space $X$에서 operator $T : X \to X^{\*}$가 다음 조건을 만족하면 monotone operator라고 한다.

>$(Tu - Tv, u-v) \ge 0$, $\forall u. v \in X$

#### Lipschitz continuous
$\nabla f$는 다음과 같이 Lipschitz constant $L$에 대해  Lipschitz continuous하다.

>$ \lVert \nabla f(x) - \nabla f(y) \rVert\_2 \le L \lVert x - y \rVert\_2$  for any $x, y$ and $L \gt 0$

#### $g$가 convex임을 증명
이제 $g(x) = \frac{L}{2} \lVert x \rVert^2\_2 - f(x)$가 convex임을 보이도록 하자.

함수 $f$가 convex이고 $\nabla f$는 Lipschitz continuous이므로 Cauchy-Schwarz inequality를 적용해서 다음과 같이 식을 전개해 볼 수 있다.

>
\begin{align}
(\nabla f(x) - \nabla f(y))^T (x-y) & \le \lVert \nabla f(x) - \nabla f(y) \rVert \lVert x - y \rVert \le L \lVert x - y \rVert^2
\end{align}

$\nabla g(x) = Lx - \nabla f(x)$이므로 위의 식에 $\nabla f(x)$ 대신 $Lx - \nabla g(x)$를 대입해보자.

>
\begin{align}
(Lx - \nabla g(x) - Ly + \nabla g(y))^T (x-y) & = L(x-y)^T (x-y) - (\nabla g(x)  - \nabla g(y))^T (x-y) 
 \le L \lVert x - y \rVert^2 \\\
\end{align}

이제 이 식에서 $\nabla g$가 monotone operator가 되도록 좌변과 우변의 항들을 정리해보자.

>
\begin{align}
L(x-y)^T (x-y) -  L \lVert x - y \rVert^2  &\le (\nabla g(x)  - \nabla g(y))^T (x-y) \\\
\end{align}

이 식의 좌변을 정리하면 다음과 같이 0이 된다.
>
\begin{align}
L(x-y)^T (x-y) -  L \lVert x - y \rVert^2 & = L(x-y)^T (x-y)  - L(x-y)^T (x-y)  = 0 
\end{align}

따라서, $\nabla g$는 monotone operator이며 이에 따라 $g$는 convex라고 할 수 있다.
>
\begin{align}
(\nabla g(x)  - \nabla g(y))^T (x-y) \ge 0
\end{align}

#### $g$가 convex일때 $f$가 quadratic upper bound를 가짐을 증명
$g$가 convex이므로 다음과 같이 first order convexity 성질을 만족한다.
>
\begin{align}
g(y) \gt g(x) + \nabla g(x)^T (y - x)
\end{align}


$g(x)$를 좌변으로 넘기고 $g(x) = \frac{L}{2} \lVert x \rVert^2\_2 - f(x)$와 $\nabla g(x) = Lx - \nabla f(x)$를 대입해보자.
>
\begin{align}
\frac{L}{2} y^Ty - \frac{L}{2} x^Tx + f(x) - f(y) & \ge (Lx - \nabla f(x))^T (y - x) \\\
& = Lx^Ty - Lx^Tx - \nabla f(x)^T (y - x) \\\
\end{align}

$f(y)$를 우변으로 옮기고 나머지 항들을 좌변으로 옮겨보자.

>
\begin{align}
\frac{L}{2}  (y^Ty  - 2 x^Ty + x^T x) + f(x) + \nabla f(x)^T (y - x)  \ge f(y) \\\
\end{align}

이 식을 정리해 보면 다음과 같이 된다.

> \begin{align}
f(y) & \le f(x) + \nabla f(x)^T (y-x) + \frac{L}{2} \lVert y - x \rVert^2\_2  \space \space \forall x, y
\end{align}

이로써 함수 $f$가 convex이고 $\nabla f$는 Lipschitz continuous하면 quadractic upper bound를 갖는다는 것이 증명되었다.

</br> </br>

# 06-03-03 Convergence analysis for backtracking

</br> </br>

$f$는 convex이고 differentiable하며 **dom** $f = \mathbb{R}^n$일 때 다음 식을 만족한다고 하자.

>$ \lVert \nabla f(x) - \nabla f(y) \rVert\_2 \le L \lVert x - y \rVert\_2$  for any $x, y$ and $L \gt 0$ <br>

$\nabla f$는 Lipschitz constant $L$에 대해  Lipschitz continuous하다고 말할 수 있다. 
[[(Wikipedia) Lipschitz continuity](https://en.wikipedia.org/wiki/Lipschitz_continuity)]
## Convergence Theorem
>**Gradient descent**는 backtracking line search에 대해 다음 식을 만족한다. Step size는 $t_{\text{min}} = \text{min}\\{1,β/L\\}$이다.
> \begin{align}
f(x^{(k)})−f^{\star} ≤ \frac{\lVert x^{(0)} − x^{\star} \rVert_{2}^{2}}{2 t_{min}k}, \space t_{\text{min}} = \text{min}\\{1,β/L\\} \\\
\end{align}

Backtracking line search의 수렴 식은 fixsd step size 식과 거의 동일하여 분모의 step size인 $t$가 $t_{\text{min}}$으로 대체되었다고 보면 된다. 만일 $β$가 너무 작지만 않다면 fixsd step size와 비교해서 성능 차이는 크지 않다. $(β/L $ vs. $ 1/L)$

</br> </br>

# 06-03-04 Convergence analysis under strong convexity

</br> </br>

함수 $f$가 다음 조건을 만족하게 되면 strongly convex하다고 할 수 있다. (단, $f$는 2번 미분가능해야 하며 상수 $m$은 양수이어야 한다.)

> \begin{align}
f(y) &  \ge f(x) + \nabla f(x)^T(y−x) + \frac{m}{2} \lVert y−x \rVert_2^2, \space \forall x, y
\end{align}

이 조건에서 함수 $f$가 2차 lower bound를 갖는다는 것을 알 수 있다. 이때,  2차 항의 계수는 상수 $m$으로 결정된다. (상수 m은 함수 $f$의 2차 미분 계수인 hessian의 최소 engenvalue이다.)

다음과 같이 함수 $g$가 convex라면 함수 $f$를 strong-convex function이라고 할 수 있다. 이 조건은 위의 조건과 동치이다.

> \begin{align}
g(x) & = f(x) − \frac{m}{2} \lVert x \rVert_2^2  \space \space \text{is convex} , \space \forall x \space  \text{and}  \space  m \gt 0  \\\
\end{align}

## Convergence Theorem
Lipschitz continuous와 strong convexity 가정에 의하여 다음의 theorem이 성립한다. (이때, 상수 $L$은 Lipschitz constant이며 상수 $m$은 strong convexity를 만족할 때 quadratic term의 계수이다.)

> **Gradient descent**는 fixed step size($t ≤ 2/(m + L)$) 또는 backtracking line search에 대해 다음 식을 만족한다.
> \begin{align}
f(x^{(k)}) − f^{\star} ≤ c^k \frac{L}{2} \lVert x^{(0)} −x^{\star} \rVert_2^2, \text{where} \space  c = (1 - \frac{m}{L}), \space 0 \lt c \lt 1
\end{align}
## Proof
$\nabla f$는 Lipschitz continuous하며 $f$는 Lipschitz constant $L$을 계수로 하는 2차 항으로 된 quadratic upper bound를 갖는다. (Upper bound의 증명은 [06-03-02](https://wikidocs.net/18454) 절을 참조)

> \begin{align}
f(y) \le f(x) + \nabla f(x)^T (y-x) + \frac{L}{2} \lVert y - x \rVert^2\_2  \space \space \forall x, y
\end{align}

Gradient descent를 현재 위치 $x$에서 다음 위치 $x^+ = x - t \nabla f(x)$로 진행한다고 해보자. 위의 식에서 $y = x^+$라고 하고 전개해보자.


>
\begin{align}
f(x^+) & \le f(x) +  \nabla f(x)^T (x^+ - x) + \frac{L}{2} \lVert x^+ - x \rVert^2\_2 \\\
& = (x) +  \nabla f(x)^T (x - t \nabla f(x) - x) + \frac{L}{2} \lVert x - t \nabla f(x) - x \rVert^2\_2 \\\
& = f(x) - t \nabla f(x)^T (\nabla f(x)) + \frac{L}{2} \lVert t \nabla f(x) \rVert^2\_2 \\\
& =  f(x) - t \lVert \nabla f(x)) \rVert^2\_2 + \frac{Lt^2}{2} \lVert \nabla f(x) \rVert^2\_2 \\\
\end{align}

이 식을 $t$에 대해 미분을 해보면 $t = 1/L$일때 최소가 된다. 따라서, 이 식에 $t = 1/L$을 대입하면 다음 식을 얻게 된다.

>
\begin{align}
f(x^+) & \le f(x) -  \frac{1}{2L} \lVert \nabla f(x) \rVert^2\_2 \\\
\end{align}

양변에서 $f(x^{\*})$을 빼보자.

>
\begin{align}
f(x^+) - f(x^{\*}) & \le f(x) - f(x^{\*}) -  \frac{1}{2L} \lVert \nabla f(x) \rVert^2\_2 \\\
\end{align}

Gradient Descent는 아래 조건을 만족하므로 이 조건을 $2m(f(x) - f(x^{\*})) \le \lVert \nabla f(x) \rVert^2\_2 $와 같이 정리해서 위의 식에 대입한다. 
>
\begin{align}
f(x) - f(x^{\*}) \le \frac{1}{2m} \lVert \nabla f(x) \rVert^2\_2 \\\
\end{align}

그러면 다음 식과 같이 정리가 되며 이때 $c = (1 - \frac{m}{L})$라고 하자.
>
\begin{align}
f(x^+) - f(x^{\*}) & \le f(x) - f(x^{\*}) -  \frac{m}{L} ( f(x) - f(x^{\*}) ) \\\
& =  (1 -  \frac{m}{L} ) ( f(x) - f(x^{\*}) ) \\\
& = c  ( f(x) - f(x^{\*}) ) \\\
\end{align}

이 식을 반복하게 되면  다음의 관계를 얻을 수 있다.

>
\begin{align}
f(x^{(k)}) - f(x^{\*}) & \le c^k ( f(x^{(0)}) - f(x^{\*}) ) \\\
\end{align}

다음 함수의 Taylor 식에 $y = x^{(0)}$을 $x = x^{\*}$을 대입해 보자.

> \begin{align}
f(y) \le f(x) + \nabla f(x)^T (y-x) + \frac{L}{2} \lVert y - x \rVert^2\_2  \space \space \forall x, y
\end{align}

함수가 Convex이므로 $\nabla f(x^{\*})$는 0이 되며 식은 다음과 같이 정리된다.

> \begin{align}
f(x^{(0)}) & \le f(x^{\*}) + \nabla f(x^{\*})^T (x^{(0)}- x^{\*} ) + \frac{L}{2} \lVert x^{(0)} - x^{\*} \rVert^2\_2 \\\\
& =  f(x^{\*}) + \frac{L}{2} \lVert x^{(0)} - x^{\*} \rVert^2\_2 \\\\
\end{align}

$f(x^{\*})$를 좌변으로 넘기면 다음과 같이 정리된다.

> \begin{align}
f(x^{(0)}) - f(x^{\*}) & \le \frac{L}{2} \lVert x^{(0)} - x^{\*} \rVert^2\_2 \\\\
\end{align}

이 식를 위의 식에 대입해 보자. 

>
\begin{align}
f(x^{(k)}) - f(x^{\*}) & \le c^k \frac{L}{2} \lVert x^{(0)} - x^{\*} \rVert^2\_2  \\\
\end{align}

이로써 Strong Convexity를 만족할 때 Gradient descent의 Convergence Theorm이 증명되었다.

## Linear convergence
$f$가 strongly convex일 경우 convergence rate는 ($O(c^k)$)가 되어 기하급수적으로 빨라진다. 
또한, $f(x^{(k)}) - f^{\*} \le \epsilon$라면 $O(\log(1/\epsilon)$의 반복이 필요하다. 
($f$가 strongly convex가 아닐 경우 $O(1/\epsilon)$ 반복이 필요했다.)

수렴 속도 $O(c^k)$는 아래 그림과 같이 semi-log plot에서 선형처럼 보이므로 선형적 수렴(linear convergence)이라고도 부른다.

![](https://wikidocs.net/images/page/18092/06.03_01_01_Line_Convergence.PNG)<br>
**[Fig 1] Linear convergence [1]**

$O(c^k)$에서 상수 c는 $1 - \frac{m}{L}$로 condition number $L/m$에 따라 달라진다. Condition number가 커질수록 속도가 느려진다. (Condition number = largest engenvalue / smallest engenvalue이다.)



</br> </br>

# 06-03-05 A look at the conditions & Practicalities

</br> </br>

## Lipschitz continuity & Strong convexity conditions
$f(β) = \frac{1}{2} \lVert y−Xβ \rVert_2^2$를 예로 Lipschitz continuity와 Strong convexity에 대한 조건을 살펴보자

#### Lipschitz continuity of $∇f$ :
* $\nabla^2f(x) \preceq LI$를 의미한다. <br>
* $∇^2f(β) = X^TX$이므로 $L = \sigma^2_{max}(X)$ 이다.<br>


#### Strong convexity of $f$ :
* $\nabla^2f(x) \succeq mI$를 의미한다.<br>
* $\nabla^2f(β) = X^TX$이므로, $m = \sigma_{min}^2(X)$이다.<br>
* 만약 $X$가 $n \times p$ 행렬일 때 $p > n$이면 $\sigma_{min}(X) = 0$이 되어, $f$는 strongly convex일 수 없다.<br>
* $\sigma_{min}(X) > 0$이더라도 condition number $L/m = \sigma_{max}^2(X)/\sigma_{min}^2(X)$가 매우 클 수 있다.


함수 $f$가 strongly convex하고 Lipschitz gradient를 갖는다면 다음을 만족한다. $f$가 두 2차 방정식 사이에 있다고 생각하면 된다.

>$mI \preceq \nabla^2f(x) \preceq LI \text{ for all } x ∈ \mathbb{R}^n$ and $L > m > 0$


모든 $x$에 대해 두 조건을 만족한다는 것은 매우 강력한 것일 수 있다. 하지만 좀 더 고민해보면 다음의 sublevel set에 대해서만 이 조건이 필요하다는 것을 알 수 있다.

> $S = \\{x : f(x) ≤ f(x^{(0)})\\}$

## Practicalities
#### Stopping rule: $\lVert ∇f(x) \rVert_2$가 작을 때 종료한다.
$x^{\star}$가 해라면 $\nabla f(x^{\star}) = 0$이다. 만약  $f$가 strong convex라면 다음과 같다.
> $\lVert \nabla f(x) \rVert_2 ≤ \sqrt{2m \epsilon} ⇒ f(x)−f^{\star} ≤ \epsilon$ </br>

#### [참고] 유도과정
위의 식이 도출되는 과정은 다음과 같다.
$f$가 Strong Convexity를 만족하므로 다음과 같은 상수 $m \ge 0$이 존재한다.
> \begin{align}
\nabla^2 f(x) \succeq mI \\\\
\end{align}

함수 $f$를 2차 Talyor 식으로 전개해보자.
> \begin{align}
f(y) = f(x) + \nabla f(x)^T(y−x) + \frac{1}{2} (y−x)^T \nabla^2 f(x) (y−x), \space \forall x, y
\end{align}

그러면, 위의 $\nabla f(x) \succeq mI $에 따라 마지막 항을 lower bound 조건으로 정리할 수 있다.
> \begin{align}
f(y) &  \ge f(x) + \nabla f(x)^T(y−x) + \frac{m}{2} \lVert y−x \rVert_2^2, \space \forall x, y
\end{align}

$f(y)$를 $y$에 대해서 미분을 하면 $\tilde{y} = x - (1/m) \nabla f(x)$가 된다. $\tilde{y}$를 Tayor 전개에 대입해 보면 다음과 같다.

> \begin{align}
f(y) &  \ge f(x) + \nabla f(x)^T(\tilde{y}−x) + \frac{m}{2} \lVert \tilde{y}−x \rVert_2^2 \\\\
&  = f(x) - \frac{1}{2m} \lVert \nabla f(x) \rVert_2^2
\end{align}

따라서, $f(y)$를 $f^{\*}$로 대체하면 다음과 같이 정리될 수 있다.
> \begin{align}
 f^{\*}  \ge f(x) - \frac{1}{2m} \lVert \nabla f(x) \rVert_2^2
\end{align}

위의 Stopping rule이 다음과 같이 도출되었다.

> \begin{align}
f(x) - f^{\*} \le \frac{1}{2m} \lVert \nabla f(x) \rVert^2\_2 & \le \epsilon \\\\
\lVert \nabla f(x) \rVert^2\_2 & \le 2m\epsilon \\\\
\lVert \nabla f(x) \rVert\_2 & \le \sqrt{2m\epsilon} \\\\
\end{align}


### Gradient descent의 장단점

#### Pros
* 알고리즘이 단순하며 iteration의 비용이 낮다.
* Well-conditioned, strongly convex 문제에 대해서는 매우 빠르다.

#### Cons
* 많은 문제가 strongly convex이거나 well-conditioned가 아니기 때문에 일반적으로 느리다.
* 미분 불가 함수는 다룰 수 없다.

</br> </br>

# 06-03-06 Can we do better

</br> </br>

Gradient descent는 Lipschitz gradients를 가지며 convex이고 differentiable한 함수로 표현되는 문제에 대해 $O(1/\epsilon)$ 수렴 속도를 갖는다. Gradient descent보다 더 빠른 first-order method가 있을까?

#### First-order method
First-order method는 $x^{(k)}$번째 반복에서 다음과 같이 변경을 표현할 수 있다. 따라서, $x^{(k)}$번째 반복에서의 변경은 초기 위치 $x^{(0)}$와 $x^{(0)}$에서 $ x^{(k−1)}$까지의 gradient span으로 표현된다.

> $x^{(0)} + $ **span**$\\{∇f(x^{(0)}),∇f(x^{(1)}),...,∇f(x^{(k−1)})\\}$


####  Theorem (Nesterov)
Nesterov theorem은 first-order method의 수렴에 대한 lower bound를 제시한다.

> **Nesterov Theorem** 임의의 $k ≤ (n−1)/2$와 시작점 $x^{(0)}$에 대해, 임의의 first-order method가 다음 조건을 만족하게 하는 함수 $f$가 존재한다. ($n$은 차원을 의미한다.)<br>
\begin{align}
f(x^{(k)})−f^{\star} ≥ \frac{3L \lVert x^{(0)} −x^{\star} \rVert_2^2}{32(k + 1)^2 }\\\
\end{align}

Nesterov theorem의 lower bound의 분모에 $k^2$이 있으므로 수렴 속도 $O(1/k^2)$가 된다. 그리고, 반복 회수는 $O(1/\sqrt{\epsilon})$가 된다. 이에 대한 내용은 나중에 자세히 살펴볼 것이다.

</br> </br>

# 06-04 Gradient boosting

</br> </br>

**Gradient boosting**은 여러 트리로 구성된 앙상블 모델로 결과를 예측하려고 할 때,  gradient descent를 이용해서 순차적으로 트리를 만들어가며 이전 트리의 오차를 보완하는 방식으로 boosting을 하는 방법이다. **Gradient Boosting**은 회귀와 분류에 모두 사용할 수 있다. 

* 자세한 내용은 [Gradient Boosting from scratch](https://medium.com/mlreview/gradient-boosting-from-scratch-1e317ae4587d) 블로그 참조 


#### [참고] Functional gradient descent 알고리즘
**Gradient boosting**은 Llew Mason, Jonathan Baxter, Peter Bartlett and Marcus Frean에 의해 functional gradient descent 알고리즘으로 소개되었다.  Functional gradient descent 알고리즘은 함수 공간에 대해서 loss function을 최적화하는 알고리즘으로 gradient의 음수 방향을 갖는 함수를 반복적으로 선택함으로써 gradient decent를 수행한다.

* 자세한 내용은 [Gradient Boosting](https://en.wikipedia.org/wiki/Gradient_boosting) 참조

#### [참고] Boosting과 Bagging
**Boosting**은 weak learner를 순차적으로 생성해서 결과를 예측하는 앙상블 기법이다. 이전 단계의 learner가 잘못 예측한 데이터를 다음 단계의 learner가 학습해서 순차적으로 생성된 learner들의 결과를 취합해서 최종 결과로 만든다. 

**Bagging**은 weak learner를 서로 독립적으로 생성해서 결과를 예측하는 앙상블 기법이다. 따라서, 각 learner들은 병렬적으로 실행이 되고 그 결과를 취합해서 최종 결과로 만든다.

* 자세한 내용은 [What is the difference between Bagging and Boosting?](https://quantdare.com/what-is-the-difference-between-bagging-and-boosting/)  블로그 참조
## Gradient Boosting
**Gradient Boosting**이 어떻게 만들어지게 되었는지 그 배경에 대해 살펴보도록 하자. 

트리로 구성된 앙상블 모델이 있고 분류에 사용한다고 가정해 보자. 이 모델은 관측값과의 오차가 최소화 되는 결과를 예측하고자 할 것이다. 관측값은 $y_i$, $i=1,\dots,n$로, 입력 데이터는 $x_i, i=1,\dots,n$로, 예측값은 $u_i$, $i=1,\dots,n$라고 하자.

아래 그림과 같이 앙상블에 소속된 각 트리는 $x_i \in R^p$를 입력으로 받아 트리의 노드에 있는 분기 조건에 따라 결과를 출력하게 된다.

![](https://wikidocs.net/images/page/19037/tree_O9zyAlk.png)</br>
**[Fig 1] Example of Tree $T_j$ [3]**</br>

앙상블 모델의 예측값 $u_i$는 각 트리의 결과를 가중 합산해서 계산할 수 있다. (여기서 $T_j(x_i)$는 트리 $j$가 $x_i$를 입력으로 받아 출력한 결과이다.)

> 
\begin{equation}
u_i = \sum_{j=1}^M \beta_j T_j(x_i) 
\end{equation}

Loss 함수의 경우 관측값과 예측값의 오차가 최소화되도록 오차 제곱의 합 형태인 $L=(y_i,u_i)=(y_i - u_i)^2$로 정의할 수 있다.
>
\begin{equation}
\min_{\beta} \sum_{i=1}^n L\left(y_i, \sum_{j=1}^M \beta_j T_j(x_i)\right)
\end{equation}

일반적으로 앙상블 모델에서 트리 구성을 할 때는 고정 depth를 갖는 작은 트리를 아주 여러개 만든다. 왜냐하면 트리를 작게 하면 메모리도 적게 사용하고 예측도 빠르게 할 수 으며 트리의 개수가 많아질 수록 앙상블의 성능은 좋아지게 되기 때문이다. 일반적으로 트리의 depth는 5이하로 고정한다.

따라서, 이 문제의 경우 각 트리에 정의된 노드 조건이 매우 다양하고 아주 많은 트리의 결과가 선형 결합되기 때문에 트리 공간이 상당히 크다. 따라서, 최적화를 하기가 매우 어려운 문제라고 할 수 있다.

이 문제를 풀려면 최적화 문제를 좀 더 쉬운 문제로 바꿔야 한다. 원래 최적화 문제는 Loss 함수를 최소화하는 $M$개의 가중치 $\beta_j$를 찾는 문제이다. 이 문제를 예측값 $u$에 대한 함수 $f(u)$를 최소화 문제 $\min_{u} f(u)$로 생각해 보자. 함수 $f(u)$가 Loss 함수 $L(y,u)$라고 하면 Loss 함수를 최소화 하는 $u$를 찾는 것이 쉽게 재정의된 문제라고 할 수 있다. (여기서 $n$은 데이터 개수이다.)

**Gradient boosting**는 $\min_{u} f(u)$로 재정의된 최소화 문제를 gradient descent를 이용해서 풀는  기법을 말한다.

## Algorithm
**Gradient boosting** 알고리즘은 $\min_u L(y, u)$의 최적해 $u^\*$를 찾기 위해 다음과 같은 방식으로 gradient descent를 수행한다.

1. 초기 값은 임의의 트리의 결과 값으로 $u^{(0)}=T_0$와 같이 설정한다. 그리고, 다음의 2~4 단계를 반복한다. 

2. $n$개의 데이터의 가장 최근의 예측값인 $u^{(k-1)}$에 대한 음수 gradient를 계산한다.
>
\begin{equation}
d_i = - \left . \left[ \frac{\partial L(y_i,u_i)}{\partial u_i} \right] \right|_{u_i = u_i^{(k-1)}}, i=1,\dots,n
\end{equation}

3. $n$개 데이터에 대한 gradient $d_i$와 트리의 결과 $T(x_i)$가 가장 비슷한 트리 $T_k$를 찾는다.
>
\begin{equation}
\min_{\text{trees } T} \sum_{i=1}^n (d_i-T(x_i))^2
\end{equation}

4. Step size $a_k$를 계산하고 위에서 찾은 $T_k$를 이용하여 예측값을 업데이트한다. 
>
$u^{(k)}=u^{(k-1)} + \alpha_k T_k$

이 알고리즘은 gradient descent로 최적해 $u^\*$를 찾기 위해 $u$에 대한 gradient $d$를 구하고, $g$에 가장 가까운 $T_k$를 찾아서 업데이트 식에 gradient 대신 $T_k$를 대입해서 다음 위치를 구한다.

이렇게 해서 구한 최종 예측값 $u^\*$는 앞에서 정의했던 트리 결과의 가중 합산과 동일해짐을 알 수 있다. (즉, 재귀식 형태의 업데이트 식 $u^{(k)}=u^{(k-1)} + \alpha_k T_k$을 $k=0$까지 풀어보면 $u^\* = \sum_{k=1}^n \alpha_k T_k$가 되어 트리 결과의 가중 합산 형태로 만들 수 있다. )







</br> </br>

# 06-05 Stochastic gradient descent

</br> </br>

다음과 같이 함수의 합을 최소화하는 문제를 고려해보자.
>
\begin{equation}
\min_x \sum_{i=1}^m f_i(x)
\end{equation}

이 문제에 gradient descent를 적용한다면 각 함수 $f_i$에 대해 gradient를 구해서 합산을 해야 한다. (즉,  함수의 합에 대한 gradient는 각 함수의 gradient의 합과 같다.)
>
$\nabla \sum_{i=1}^m f_i(x) = \sum_{i=1}^m \nabla f_i(x)$

이 결과를 다음 식에 적용해서 다음 위치로 이동한다. 따라서, 한 step을 이동할 때마다 전체 함수에 대해 gradient를 구해야 한다는 것을 알 수 있다.
>
\begin{equation}
x^{(k)} = x^{(k-1)} - t_k \cdot \sum_{i=1}^{m} \nabla f_i (x^{(k-1)}), \,  k=1,2,3,\dots
\end{equation}

Gradient descent는 모든 함수들의 gradient를 구한 후에 한번에 업데이트를 수행하게 된다. 이런 이유로 gradient descent는 배치 업데이트 (batch update) 방식이라고 부른다. 배치 업데이트의 경우 함수의 개수 많아질수록 계산 오버헤드가 크게 증가하는 단점이 있다.

## Stochastic gradient descent
이에 반해, **Stochastic gradient descent (SGD)** 방식은 다음 위치를 찾을 때 한 함수의 gradient만을  구해서 찾는다. 다음 식에서와 같이 SGD에서는 $k$번째 iteration에서 하나의 함수 인덱스 $i_k$를 선택해서 업데이트를 한다.
>
\begin{equation}
x^{(k)} = x^{(k-1)} - t_k \cdot \nabla f_{i_k} (x^{(k-1)}), \, i_k \in \\{1,2,\dots,m\\}
\end{equation}

함수 인덱스 $i_k$는 다음 두 가지 방식으로 선택할 수 있다. 

* **순환 업데이트 (Cyclic rule)**: 모든 함수의 인덱스를 동일한 순서로 주기적으로 반복해서 선택하는 방법 $i_k = 1,2,\dots,m, 1,2,\dots,m, ... $
* **랜덤 업데이트 (Randomized rule)**: 함수의 인덱스를 균등하게 랜덤하게 선택하는 방법 $i_k \in \\{1,2,\dots,m\\}$

일반적으로 랜덤 업데이트 방식을 더 많이 사용한다.

## Convergence of stochastic graidiet descent 
**Gradient descent (GD)**와 **Stochastic graidiet descent (SGD)** 방식은 어떤 차이가 있을까? 계산적으로 보면 GD는 배치 방식으로 한번에 업데이트를 하는 반면, SGD 방식에서 $m$번의 업데이트를 하게 된다. 즉, m stochastic steps $\approx$ one batch step이 된다.

그렇다면 업데이트 진행 과정에서는 어떤 차이가 있을까?

SGD의 경우 $k$ step에서 $k+m$ step으로 m번의 업데이트를 했을 경우 다음과 같이 진행이 된다.
>
\begin{equation}
\text{SGD Cycle rule : } \quad x^{(k+1)} = x^{(k)} - t_k \cdot \sum_{i=1}^{m} \nabla f_i (x^{(k+i-1)})
\end{equation}

GD의 경우 $k$ step에서 $k+1$ step으로 한번의 업데이트를 했을 경우 다음과 같이 진행이 된다.

>
\begin{equation}
\text{GD Batch : }  \quad  x^{(k+m)} = x^{(k)} - t_k \cdot \sum_{i=1}^{m} \nabla f_i (x^{(k)})
\end{equation}

따라서, 두 업데이트 방식으로 최적값을 탐색할 경우 방향은 아래와 같은 차이를 보이게 된다. 
>
\begin{equation}
\sum_{i=1}^{m}[ \nabla f_i (x^{(k+i-1)}) - \nabla f_i (x^{(k)})]
\end{equation}

만일 각  $\nabla f_i(x)$가 $x$에 대해서 크게 변하지 않는다면 즉, Lipschitz continuous하다면 SGD는 수렴하게 되며 결과적으로 위의 두 방식은 동일한 최적해로 수렴하게 된다.

경험적으로 SGD 방식은 최적점에서 멀리 떨어져 있을 때는 효과적으로 동작하지만 최적점에 가깝게 왔을 때는 수렴에 어려움을 겪는 것으로 알려져 있다.

</br> </br>

# 07 Subgradient

</br> </br>

본 장에서는 앞장에서의 gradient 및 first-order 최적 조건을 일반화한 subgradient 및 subgradient 최적 조건의 개념을 설명하며, 몇 가지 적용예들에 대해서 살펴본다. 

</br> </br>

# 07-01 Subgradient

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

한 볼록함수(convex function) $f:\mathbb{R}^n \to \mathbb{R}$의 subgradient는 다음의 조건을 만족하는 $g \in \mathbb{R}^n$로 정의된다.  

>
\begin{equation}\label{subgradient}
f(y) \geq f(x) + g^T(y-x), \text{ for all $y$}
\end{equation}

위에서 정의된 subgradient는 

- 미분가능한 볼록함수의 gradient를 미분가능하지 않은 볼록함수에도 적용할 수 있도록 일반화 한 것이며, 


- 볼록함수에 대해서는 항상 존재하는 값으로서, 만약 $f$가 $x$에서 미분가능하면, $\nabla f(x)$를 유일하게 갖게된다.    


- 비볼록함수(non-convex function) 에 대해서도 동일하게 subgradient가 구해질 수 있으나, 이 때는 함수에 따라서 값이 존재하지 않을 수 도 있다. 



다음은 몇 가지 함수들에 대한 subgradient의 예를 보여준다. 

#### Example1
$f:\mathbb{R} \to \mathbb{R}, f(x) = |x|$

<center>
![](https://wikidocs.net/images/page/18963/subgrad-1.png)</br>
**[Fig 1] Subgradient of $f(x)=|x|$ [3]**</br>
</center>



- $x \neq 0$에 대해, $|y| \geq |x| + g^T(y-x)$를 만족해야 함. 즉, $|y|-g^Ty \geq |x|-g^Tx$. $|x|-g^Tx = 0$이면 즉, $g=\text{sign}(x)$이면, 모든 $y$에 대해 항상 만족됨. 따라서, $g=\text{sign}(x)$ 
[[(Wikipedia) Sign function](https://en.wikipedia.org/wiki/Sign_function)]
- $x=0$에 대해, $|y| \geq g^Ty$를 만족해야 함. 따라서, $g \in [-1,1]$


#### Example2
$f:\mathbb{R}^n \to \mathbb{R}, f(x) = ||x||_1$ 

<center>
![](https://wikidocs.net/images/page/18963/subgrad-3.png)</br>
**[Fig 2] Subgradient of $f(x)=|x|_1$ [3]**</br>
</center>

한 점 $x=(x_1,x_2,\dots,x_n)$에서,

- $x_i \neq 0, i \in \{1,2,\dots,n\}$에 대해, $x_i$에서 미분가능하므로 $g_i=\text{sign}(x_i)$ 

- $x_i=0, i \in \{1,2,\dots,n\}$에 대해, $g_i \in [-1,1]$


#### Example3
$f:\mathbb{R}^n \to \mathbb{R}, f(x) = ||x||_2$

<center>
![](https://wikidocs.net/images/page/18963/subgrad-2.png)</br>
**[Fig 3] Subgradient of $f(x)=|x|_2$ [3]**</br>
</center>

- $x \neq 0$에 대해, 미분가능하므로 $g=\nabla \sqrt{x^Tx} = \frac{1}{2}(x^Tx)^{-\frac{1}{2}} (2x) = \frac{x}{||x||_2}$ 

- $x=0$에 대해, $||y||_2 \geq g^Ty \Longrightarrow ||y||_2 \geq ||g||_2||y||_2 \cos \theta$. 따라서 $g \in \\{z:||z||_2 \leq 1\\}$


#### Example4
$f(x) = \max\\{f_1(x),f_2(x)\\}$, 이 때, $f_1,f_2:\mathbb{R}^n \to \mathbb{R}$이며, 모두 볼록함수이고 미분가능.  

<center>
![](https://wikidocs.net/images/page/18963/subgrad-4.png)</br>
**[Fig 4] Subgradient of $f(x)=\max\\{f_1(x),f_2(x)\\}$ [3]**</br>
</center>

- $f_1(x) > f_2(x)$에 대해, $g = \nabla f_1(x)$  
 
- $f_1(x) < f_2(x)$에 대해, $g = \nabla f_2(x)$ 
 
- $f_1(x) = f_2(x)$에 대해, $g \in \\{\theta_1 \nabla f_1(x) + \theta_2 \nabla f_2(x): \theta_1 + \theta_2 = 1, \theta_1 \geq 0, \theta_2 \geq 0\\}$  



</br> </br>

# 07-02 Subdifferentials

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

한 볼록함수 $f$의 $x$에서의 subdifferential $\partial f(x)$는 $x$에서의 모든 subgradient들의 집합을 의미한다.  

> 
\begin{equation}
\partial f(x) = \\{g \in \mathbb{R}^n | \text{$g$ is a subgradient of $f$ at $x$} \\}
\end{equation}

Subdifferential은 다음과 같은 특성이 있다.  

- $\partial f(x)$ 는 $f$가 볼록함수이든지 아니든지 항상 닫혀있는 볼록 집합이 된다.   

- $\partial f(x)$ 는 $f$가 볼록함수이면 항상 하나이상의 원소를 가지며, 볼록함수가 아닐때는 공집합이 될 수 도 있다. 

- 만약 $f$가 $x$ 에서 미분가능하고 볼록함수이면, $\partial f$는 $\{\nabla f(x)\}$ 만을 원소로 갖는다. 

- 만약 $\partial f(x) = \\{g\\}$ 이면, $f$는 $x$ 에서 미분가능하며, $\nabla f(x)$가 $g$가 된다.  



</br> </br>

# 07-02-01 Connection to a Convexity Geometry

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

한 볼록집합 (convex set) $C \subseteq \mathbb{R}^n$에 대해서, 아래와 같은 indicator 함수 $I_C: \mathbb{R}^n \to \mathbb{R}$를 정의했을 때,   

>
$$
I_C(x) = I\\{x \in C \\} =
\begin{cases}
0               &\text{if $x \in C$} \\\\
\infty         &\text{if $x \notin C$} 
\end{cases}
$$

해당 함수의 subdifferential은 다음의 기하학적 의미가 있다.  

#### Lemma
$x \in C$에 대해서, $I_C(x)$ 함수의 $\partial I_C(x)$는 $x$에서의 집합 $C$에 대한 normal cone $\mathcal{N}_C(x)$과 일치한다. 

>
\begin{equation}
\mathcal{N}_C(x) = \\{g \in \mathbb{R}^n | g^Tx \geq g^Ty \text{  for all  } y \in C \\}
\end{equation}


#### Proof 

Subgradient는 정의에 의해, 다음의 식이 만족된다. 
>
\begin{equation}
I_C(y) \geq I_C(x) + g^T(y-x) \text{ for all $y$}
\end{equation}

여기서, $x \in C$이고 $I_C(x)=0$ 이므로, 아래와 같이 된다. 

>
\begin{equation}
I_C(y) \geq g^T(y-x) \text{ for all $y$}
\end{equation}

첫째, 모든 $y \in C$에 대해서 아래의 식이 성립되어야 하므로,
>
\begin{equation}
I_C(y) = 0 \geq g^T(y-x)
\end{equation}

subgradient $g$는 $g^Tx \geq g^Ty$를 만족해야 한다.  

둘째, 모든 $y \notin C$에 대해서, $I_C(y) = \infty$ 이므로, $g$가 어떤 값이든 관계없이 
>
$$I_C(y)=\infty \geq g^T(y-x)$$

가 항상 성립된다. 

위 두 조건에 대해, subgradient는 모두 만족시켜야 하므로, 위 함수에 대한 subgradient는 
>
$$\\{g \in \mathbb{R}^n | g^Tx \geq g^Ty\\}$$

가 된다. 

<center>
![](https://wikidocs.net/images/page/18963/subgrad-5.png)</br>
**[Fig 1] Normal cone [1]**</br>
</center>

</br> </br>

# 07-02-02 Subgradient Calculus

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

볼록함수의 subdifferential에 대한 다음의 몇가지 기본적인 규칙이 성립된다.

#### Scaling
>
$$\text{만약 $a>0$이면, $\partial (af) = a\cdot \partial f$}$$

#### Addition
>
$$\partial(f_1 + f_2) = \partial f_1 + \partial f_2$$

위에서 두집합의 연산 $A+B= \\{a+b:a\in A, b \in B\\}$를 의미함. 

#### Affine composition 
>
$$\text{만약 $g(x)=f(Ax+b)$이면, $\partial g(x) = A^T \partial f(Ax+b)$}$$

#### Finite pointwise maximum
>
$$\text{만약 $f(x)=\max_{i=1,\dots,m} f_i(x)$이면, $\partial f(x) = \text{conv}\left(\bigcup_{i:f_i(x)=f(x)} \partial f_i(x)\right)$}$$

즉, $\partial f(x)$는 $x$에서 $f(x)$값을 갖는 함수들의 subdifferential의 합집합에 대한 convex hull로 정의된다. 

#### General pointwise maximum

>$$\text{만약 $f(x) = \max_{s \in S} f_s(x)$이면, $\partial f(x) \supseteq cl \left\\{ \text{conv}\left(\bigcup_{s:f_s(x)=f(x)} \partial f_s(x)\right) \right\\}$}$$


여기서, $S$는 무한집합으로서, 무한한 갯수의 집합들의 합집합은 열린집합이 될 수 있으므로, subdifferential이 닫힌집합이 될 수 있도록, closure를 취해주어야 한다. 

한편, 집합 $S$가 컴팩트하고 (closed and bounded), $f_s$ 함수들이 $s$에 대해서 연속적이면, 등호 관계가 성립된다. 

예를들어, 다음의 p-norm 함수 $f(x)$에 대해서,  
>
\begin{equation}
f(x) = ||x||\_p = \max_{||z||_q \leq 1} z^Tx, \text{ 이 때, } 1/p + 1/q =1
\end{equation}

$f_z(x)=z^Tx$라고 하면, $f(x)=f_{z^{\*}}(x)$가 되는 $z^{\*}$가 $\arg\max_{||z||_q \leq 1} z^Tx$에 속하게 된다. 

한편, $\partial f_{z^{\*}}(x)=z^*$ 이므로, $\bigcup \partial f_{z^{\*}}(x)$는 모든 $z^{\*}$의 합집합으로서, $\partial f(x) = \arg\max_{||z||_q \leq 1} z^Tx$ 가 된다.  

여기서, $S={z:||z||_q \leq 1}$는 컴팩트 집합이고, $f_z(x)=z^Tx$는 선형이므로, 

general pointwise maximum 규칙에 의해,  $\bigcup \partial f_{z^{\*}}(x)$에 대해서 convex hull을 취한후, 

closure를 취해도 추가되는 집합의 원소가 존재하지 않는다. 따라서, $f(x)$ 함수의 subgradient는 아래와 같다.
>
\begin{equation}
\partial f(x) = \arg\max_{||z||_q \leq 1} z^T x
\end{equation}



</br> </br>

# 07-03 Subgradient Optimality Condition

</br> </br>

본 절에서는 subgradient를 이용한 최적 조건을 살펴보고, 몇 가지 예를 들어 적용방법 및 유용성을 설명한다. 

</br> </br>

# 07-03-01 Subgradient Optimality Condition

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

#### Lemma 

모든 함수 $f$에 대해서, 어떤 $x^{\*}$에서 함수의 최소값을 갖는 것과 $x^{\*}$에서 subgradient가 $0$인 것은 서로 필요충분조건이다.   
>
\begin{equation}
f(x^{\*}) = \min_x f(x) \Longleftrightarrow 0 \in \partial f(x^*)
\end{equation}

#### Proof
>
$
\begin{align}
&f(x^{\*}) = \min_x f(x)\\\\
\Longleftrightarrow &f(y) \geq f(x^{\*}) \text{ for all } y\\\\
\Longleftrightarrow &f(y) \geq f(x^{\*}) + 0^T(y-x^{\*})\\\\
\Longleftrightarrow &0 \in \partial f(x^{\*})
\end{align}
$

위 증명에서 함수 $f$에 대한 볼록성은 전혀 이용되지 않았으며, 따라서 비볼록함수에서도 예외없이 적용되는 최적 조건이라고 할 수 있다.  



</br> </br>

# 07-03-02 Derivation of First-Order Optimality Condition

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

만약 $f$가 볼록함수이고 미분가능하면, subgradient 최적 조건은 first-order 최적 조건과 일치함을 아래와 같이 증명할 수 있다. 

#### Proof
>
\begin{alignat}{2}
f(x^{\*}) = \min_x f(x)  \quad & \Longleftrightarrow & & \quad f(x^{\*}) = \min_x f(x) + I_C(x) \\\\
                      \quad & \Longleftrightarrow & &\quad 0 \in \partial(f(x^{\*}) + I_C(x^{\*})) \\\\
                      \quad & \Longleftrightarrow & &\quad 0 \in \{\nabla f(x^{\*}) \} + \mathcal{N}_C(x^{\*}) \\\\
                      \quad & \Longleftrightarrow & &\quad - \nabla f(x^{\*}) \in \mathcal{N}_C(x^{\*}) \\\\
                      \quad & \Longleftrightarrow & &\quad - \nabla f(x^{\*})^Tx^{\*} \geq -\nabla f(x^{\*})^Ty, \text{ for all }  y \in C \\\\                      
					  \quad & \Longleftrightarrow & &\quad \nabla f(x^{\*})^T(y-x^{\*}) \geq 0, \text{ for all } y \in C 
\end{alignat}





</br> </br>

# 07-03-03 Example_ Lasso Optimality Condition

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

아래와 같이 주어진 lasso 문제에 대해,
>
\begin{equation}
\min_{\beta} \frac{1}{2} ||y-X\beta||_2^2 + \lambda||\beta||_1
\end{equation}

여기서 $y \in \mathbb{R}^n$, $X \in \mathbb{R}^{n \times p}$, $\lambda \geq 0$. 

위 문제의 subgradient 최적 조건은 아래와 같이 표현될 수 있다.  
>
\begin{alignat}{2}
0 \in \partial\left(\frac{1}{2}||y-X\beta||_2^2 + \lambda||\beta||_1\right) &\quad \Longleftrightarrow \quad 0 \in - X^T (y-X\beta) + \lambda \partial ||\beta||_1 \\\\
&\quad \Longleftrightarrow \quad X^T (y-X\beta)  = \lambda v 
\end{alignat}
for some $v \in \partial ||\beta||_1$

여기서, 한 점 $\beta=(\beta_1,\beta_2,\dots,\beta_p )$에 대한 subgradient를 
<center>
>
$v=(v_1,v_2,\dots,v_p)$ 라고 할 때, 
$v_i, i \in \\{1,2,\dots,p \\} = $
$\begin{cases}
\{ 1 \}  &\text{if $\beta_i > 0$} \\\\
\{-1 \}  &\text{if $\beta_i < 0$} \\\\
[-1,1]   &\text{if $\beta_i = 0$}
\end{cases}$
</center>

다음을 만족하는 $\beta$를 찾을 수 있으며, 해당 $\beta$는 최적해가 된다. 
>
\begin{equation}
X^T(y-X\beta) = \lambda v 
\end{equation}

즉, 위문제에 대한 최적 $\beta$에 대해서 다음의 조건이 성립됨을 알 수 있다. 
>
$$
\begin{cases}
X_i^T(y-X\beta) = \lambda \cdot \text{sign}(\beta_i) &\text{if $\beta_i \neq 0$} \\\\
|X_i^T(y-X\beta)| \leq \lambda                               &\text{if $\beta_i = 0$} 
\end{cases}
$$

위식에서 $X_i, i \in \\{1,2,\dots,p \\}$는 주어진 행렬 $X$의 $i$번째 열(column) 데이터를 의미한다. 


</br> </br>

# 07-03-04 Example_ Soft-Thresholding

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

$X=I$인 좀 더 간단한 lasso 문제는 아래와 같다.  
>
\begin{equation}
\min_{\beta} \frac{1}{2} ||y-\beta||_2^2 + \lambda||\beta||_1
\end{equation}
 
앞선 예제로부터 subgradient 최적 조건은 아래와 같게 된다.
>
$$
\begin{cases}
y_i-\beta_i = \lambda \cdot \text{sign}(\beta_i) &\text{if $\beta_i \neq 0$} \\\\
|y_i-\beta_i| \leq \lambda                       &\text{if $\beta_i = 0$} 
\end{cases}
$$

위 조건으로부터 $\beta = S_{\lambda}(y)$의 해를 구할 수 있다. 이때, 

>
$[S_{\lambda}(y)]_{i} =$
$\begin{cases}
y_i-\lambda   &\text{if $y_i > \lambda$} \\\\
0                  &\text{if $-\lambda \leq y_i \leq \lambda$} \ , \quad\quad i \in \\{1,2,\dots,n\\} \\\\
y_i+\lambda  &\text{if $y_i < -\lambda$}
\end{cases}$

여기서 $S_{\lambda}$를 soft-thresholding operator라 부른다. 

<center>
![](https://wikidocs.net/images/page/18963/subgrad-6.png)</br>
**[Fig 1] Soft-thresholding, y (x-axis), $\beta$ (y-axis), $\lambda=1/2$ [3]**</br>
</center>

</br> </br>

# 07-03-05 Example_ Distance to a Convex Set

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

닫힌 볼록집합 $C$까지의 거리함수를 아래와 같이 정의한다.   
>
\begin{alignat}{1}
dist(x,C) & = \min_{y \in C} ||y-x||_2 \\
           & = ||x-P_C(x)||_2 \\
           & \geq 0 
\end{alignat}

여기서 $P_C(x)$는 한 점 $x$에서 집합 $C$의 가장 가까운 곳으로의 사영(projection) 이다. 위 거리 함수의 subgradient는 아래와 같다. 
>
\begin{equation}
\partial dist(x,C) = \{\frac{x-P_C(x)}{||x-P_C(x)||_2}\}
\end{equation}

#### Proof

만약 $u=P_C(x)$라면, first-order 최적 조건에 의해, 
>
\begin{equation}
(x-u)^T(y-u) \leq 0 \ \text{ for all $y \in C$}
\end{equation}

여기서, 
>
\begin{equation}
C \subseteq H = \\{y:(x-u)^T(y-u) \leq 0 \\}
\end{equation}

(i) $y \in H$에 대해, 
>
\begin{equation}
(x-u)^T(y-u) \leq 0
\end{equation}

한편, $dist(y,C)\geq 0$ 이므로
>
\begin{equation}
dist(y,C) \geq \frac{(x-u)^T(y-u)}{||x-u||_2} \text{ for all $y \in H$}
\end{equation}

(ii) $y \notin H$에 대해, 
>
\begin{equation}
(x-u)^T(y-u) = ||x-u||_2||y-u||_2 \cos\theta,
\end{equation}

여기서 $\theta$는 $x-u$ 와 $y-u$ 가 이루는 각을 의미한다. 그러면, 

>
\begin{equation}
 dist(y,C) \geq dist(y,H) = ||y-u||_2 \cos \theta = \frac{(x-u)^T(y-u)}{||x-u||_2} \text{ for all $y \notin H$}
\end{equation}

따라서 (i)과 (ii)로부터, 모든 $y$에 대해, 
>
\begin{equation}
dist(y,C) \geq \frac{(x-u)^T(y-u)}{||x-u||_2} = \frac{(x-u)^T(y-x+x-u)}{||x-u||_2} = ||x-u||_2 + \left(\frac{x-u}{||x-u||_2}\right)^T(y-x)
\end{equation}

결론적으로, $dist(x,C)$는 $x$에서 다음의 subgradient를 갖는다. 
>
$$g=\frac{x-u}{||x-u||_2}=\frac{x-P_C(x)}{||x-P_C(x)||_2}$$

한편, 거리함수의 subdifferential 함수 $\partial dist(x,C)$는 하나의 원소만을 갖으므로 $dist(x,C)$는 미분가능하고 그 미분값이 곧 subgradient와 일치한다. 



</br> </br>

# 08 Subgradient Method

</br> </br>

본 장에서는 subgradient 개념을 이용하여 컨벡스 함수이지만 미분 가능하지 않은 함수에서도 적용할 수 있는 subgradient method를 살펴보고, subgradient method의 수렴성과 수렴도를 예시와 함께 살펴보도록 하겠다.

</br> </br>

# 08-01 Subgradient Method

</br> </br>

함수의 정의역은 ${R}^n$이며 모든 구간에서 미분 가능하지 않은 컨벡스 함수 $f$가 있다고 가정하자.

Subgradient method는 gradient descent에서 gradient를 subgradient로 바꾼 형태로 정의된다. ( $\nabla f(x^{(k-1)}) → g(x^{(k-1)})$)

>$ x^{(k)} = x^{(k-1)} - t_k ⋅ g^{(k-1)}, \quad k = 1, 2, 3, . . . $

여기서 $g^{(k-1)} \in \partial f(x^{(k-1)})$, 즉 $g^{(k-1)}$는 $x^{(k-1)}$ 지점에서 함수 $f$에 대한 임의의 subgradient이다.

## Subgradient method (not subgradient "descent")

Subgradient method는 gradient descent와 다르게 항상 하강(descent)하지 않는다는 특징이 있다 (subgradient "descent"라 명명하지 않는 이유). 그러므로 subgradient method를 사용할 때는 모든 시행(iteration)에 대해 가장 좋은 결과를 파악하고 있어야 한다. 

>$f(x_{best}^{(k)}) = \min_{i=0,...k} f(x^{(i)})$ 

$f(x^{(k)}_{best})$는 subgradient method를 $k$번 시행하였을 때 함수 $f$가 반환하는 최솟값을 의미한다. 

</br> </br>

# 08-01-01 Step size choices

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Subgradient method에서도 다양한 방법으로 **step size**를 선택할 수 있다.  

그 중에서도 다음 2가지 방식을 자세히 살펴보도록 하자. 

- **Fixed step sizes**: $t_k = t$, where $k = 1, 2, 3, ...$
- **Diminishing step sizes**: 아래의 조건을 충족하는 $t_k$

>\begin{align}
> \sum_{k=1}^{\infty} t_k = \infty, \quad \sum_{k=1}^{\infty} t_k^{2} < \infty
>\end{align}

#### Example of Diminishing step sizes

>\begin{align}
> & t_k = \frac{1}{k}, k = 1,2,3,... \\\\
> & \sum\_{k=1}^{\infty}t_k = \infty \quad \text{(Harminic series)} \\\\
> & \sum\_{k=1}^{\infty}t^2_k ≈ 1.644934 < \infty \quad \text{(Basel problem)} \\\\
>\end{align}

Subgradient method에서 사용되는 step size는 gradient descent에서와는 달리 미리 설정 되어야 한다는 것이 특징이다. 다시 말하면 gradient descent의 backtracking line search처럼 subgradient method의 step size는 곡면의 특징에 맞게 바뀌지 않는다.


</br> </br>

# 08-01-02 Basic Inequality

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>


Subgradient method의 convergence theorem과 convergence rate는 다음과 같은 basic inequality를 활용해 증명할 수 있다.

## Basic Inequality
>
\begin{align}
f_{best}^{k} - f^{\*} \quad \le \quad \frac{R^{2}+G^{2}\sum_{i=1}^{k}\alpha_{i}^{2}}{2\sum_{i=1}^{k}\alpha_{i}} 
\end{align}

## Proof
$x^*$가 함수 $f$의 optimal point라고 하면 다음과 같은 등식이 유도된다. 
>
\begin{alignat}{1}
||x^{(k+1)}-x^*||_2^{2} & \quad = \quad ||x^{(k)}-\alpha_k g^{(k)}-x^{\*}||_2^{2}  \\\\
                                   & \quad = \quad ||(x^{(k)}-x^{\*})-\alpha_k g^{(k)}||_2^{2}  \\\\
                                   & \quad = \quad ||x^{(k)}-x^{\*}||_2^2 - 2 \alpha_k g^{(k)T}(x^{(k)}-x^{\*})+\alpha_k^2||g^{(k)}||_2^2 \\\\
\end{alignat}

Subgradient의 정의에서 다음과 같은 부등식이 유도된다. 
>
\begin{alignat}{1}
f(x^{\*}) \ge f(x^{(k)}) + g^{(k)T}(x^{\*}-x^{(k)}) & \quad \Longleftrightarrow \quad f(x^{\*})-f(x^{(k)}) \ge  g^{(k)T}(x^{\*}-x^{(k)}) \\\\
                     & \quad  \Longleftrightarrow \quad f(x^{\*})-f(x^{(k)}) \le  g^{(k)T}(x^{(k)}-x^{\*}) \\\\
                     & \quad \Longleftrightarrow \quad -2\alpha_{k}(f(x^{\*})-f(x^{(k)})) \ge  -2\alpha_{k}(g^{(k)T}(x^{(k)}-x^{\*})) \\\\
                     & \quad \Longleftrightarrow \quad -2\alpha_{k}(g^{(k)T}(x^{(k)}-x^{\*})) \le -2\alpha_{k}(f(x^{\*})-f(x^{(k)})) \\\\
\end{alignat}

위의 등식과 부등식을 이용하여 아래의 부등식을 유도된다. 
>
\begin{alignat}{1}
||x^{(k+1)}-x^{\*}||_2^{2}  & \quad = \quad ||x^{(k)}-x^{\*}||_2^{2}-2\alpha_k g^{(k)T}(x^{(k)}-x^{\*})+\alpha_k^{2}||g^{(k)}||_2^{2} \\\\
                    & \quad \le \quad ||x^{(k)}-x^{\*}||_2^{2}-2\alpha_k (f(x^{(k)})-f^{\*})+\alpha_k^{2}||g^{(k)}||_2^{2} \\\\
\end{alignat}

$k=1,2,3...,n$일때, 위 부등식에 의해 다음과 같은 관계가 성립한다. 
>
\begin{alignat}{1}
||x^{(2)}-x^{\*}||_2^{2} & \quad \le \quad ||x^{(1)}-x^{\*}||_2^{2}-2\alpha_1(f(x^{(1)})-f^{\*})+\alpha_1^{2}||g^{(1)}||_2^{2} \\\\
||x^{(3)}-x^{\*}||_2^{2} & \quad \le \quad ||x^{(2)}-x^{\*}||_2^{2}-2\alpha_2(f(x^{(2)})-f^{\*})+\alpha_2^{2}||g^{(2)}||_2^{2} \\\\
||x^{(4)}-x^{\*}||_2^{2} & \quad \le \quad ||x^{(3)}-x^{\*}||_2^{2}-2\alpha_2(f(x^{(3)})-f^{\*})+\alpha_2^{2}||g^{(3)}||_2^{2} \\\\
& \quad ... \quad \\\\
||x^{(n+1)}-x^{\*}||_2^{2} & \quad \le \quad ||x^{(n)}-x^{\*}||_2^{2}-2\alpha_2(f(x^{(n)})-f^{\*})+\alpha_2^{2}||g^{(n)}||_2^{2} \\\\
\end{alignat}

위의 관계를 이용하면 아래와 같은 재귀적인 전개가 가능하다. 
>
\begin{alignat}{1}
\|x^{(2)}-x^{\*}\|\_2^{2} & \quad \le \quad \|x^{(1)}-x^{\*}\|\_2^{2}-2\alpha\_1(f^{(1)}-f^{\*})+\alpha_1^{2}\|g^{(1)}\|\_2^{2} \\\\
\|x^{(3)}-x^{\*}\|\_2^{2} & \quad \le \quad \|x^{(2)}-x^{\*}\|\_2^{2}-2\alpha\_2(f^{(2)}-f^{\*})+\alpha_2^{2}\|g^{(2)}\|\_2^{2} \\\\
& \quad \le \quad (\|x^{(1)}-x^{\*}\|\_2^{2}-2\alpha\_1(f^{(1)}-f^{\*})+\alpha_1^{2}\|g^{(1)}\|\_2^{2})-2\alpha\_2(f^{(2)}-f^{\*})+\alpha_2^{2}\|g^{(2)}\|\_2^{2} \\\\
& \quad = \quad \|x^{(1)}-x^{\*}\|\_2^{2}-2\alpha\_1(f^{(1)}-f^{\*})-2\alpha\_2(f^{(2)}-f^{\*})+\alpha_1^{2}\|g^{(1)}\|\_2^{2}+\alpha_2^{2}\|g^{(2)}\|\_2^{2} \\\\
& \quad = \quad \|x^{(1)}-x^{\*}\|\_2^{2} -2\sum\_{i=1}^{2}\alpha_i(f(x^{(i)})-f^{\*}) + \sum\_{i=1}^{2}\alpha_i^{2}\|g^{(i)}\|\_2^{2} \\\\
& \quad ... \quad & \\\\
\|x^{(k)}-x^{\*}\|\_2^{2}, & \quad k=4,...,n+1 \text{도 위와 같이 전개된다.}
\end{alignat}

위를 일반화 해보자.
>
\begin{alignat}{1}
\|x^{(k+1)}-x^{\*}\|\_2^{2} \quad = \quad \|x^{(1)}-x^{\*}\|\_2^{2} -2\sum\_{i=1}^{k}\alpha\_{i}(f(x^{(i)})-f^{\*})+\sum\_{i=1}^{k}\alpha\_{i}^{2}\|g^{(i)}\|\_2^{2}
\end{alignat}

$||x^{(k+1)}-x^{\*}||_2^{2} \ge 0$과 $R \ge ||x^{(1)}-x^{\*}||_2$라 하면, 다음과 같이 부등식이 정리된다. 
>
\begin{alignat}{2}
& \|x^{(k+1)}-x^{\*}\|\_2^{2} \quad \le \quad R^{2}-2\sum\_{i=1}^{k}\alpha\_i(f(x^{(i)})- f^{*})+\sum\_{i=1}^{k}\alpha\_i^{2}\|g^{(i)}\|\_2^{2}\\\\
\Longleftrightarrow & \quad 0 \quad \le \quad \|x^{(k+1)}-x^{\*}\|\_2^{2} \quad \le \quad  R^{2}-2\sum\_{i=1}^{k}\alpha_i(f(x^{(i)})-f^{\*})+\sum\_{i=1}^{k}\alpha_i^{2}\|g^{(i)}\|\_2^{2} \\\\
\Longleftrightarrow & \quad 0 \quad \le \quad R^{2}-2\sum\_{i=1}^{k}\alpha_i(f(x^{(i)})-f^{\*})+\sum\_{i=1}^{k}\alpha_i^{2}\|g^{(i)}\|\_2^{2} \\\\
 \Longleftrightarrow & 2\sum\_{i=1}^{k}\alpha_i(f(x^{(i)})-f^{\*}) \quad \le \quad R^{2}+\sum\_{i=1}^{k}\alpha_i^{2}\|g^{(i)}\|\_2^{2}
\end{alignat}

이때 아래의 관계를 이용하여 부등식을 다시 한번 정리한다. 
>
\begin{align}
\sum_{i=1}^{k}\alpha_{i}(f(x^{(i)})-f^{\*})  \quad \ge \quad (\sum_{i=1}^{k}\alpha_i)\min_{i=1,...,k}(f(x^{(i)})-f^{\*}) = (\sum_{i=1}^{k}\alpha_i)(f(x_{best}^{(k)})-f^{\*})
\end{align}

정리된 부등식은 다음과 같다. 
>
\begin{align}
\min_{i=1,..,k} f(x^{(i)})-f^{\*} \quad = \quad f_{best}^{(k)} - f^{\*} \le \frac{R^{2}+\sum_{i=1}^{(k)}\alpha_i^{2}||g^{(i)}||2^2}{2\sum\_{i=1}^{k}\alpha_i} 
\end{align}

$f$는 Lipschitz condition에 의해 $\|g^{(k)}\|\_2 \le G$를 만족하므로 최종적으로 basic inequality가 유도된다. 
>
\begin{align}
f_{best}^{k} - f^{\*} \quad \le \quad \frac{R^{2}+G^{2}\sum_{i=1}^{k}\alpha_i^{2}}{2\sum_{i=1}^{k}\alpha_i} \\\\
\end{align}



</br> </br>

# 08-01-03 Convergence analysis

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Gradient descent에서는 $\nabla f$가 Lipschitz continous하다고 가정하였지만 subgradient method에서는 $f$가 Lipschitz continous하다고 가정한다. (Gradient descent의 convergence theorem [06-03-01](https://wikidocs.net/18090) 절을 참조)

$f$는 convex이고 dom $f = R^n$이며 $f$가 Lipschitz condition을 만족한다고 하자.

>\begin{align}
> | f(x) - f(y) | \le G \lVert x - y \rVert\_2 \text{ for all } x, y
\end{align}

다음과 같은 가정이 주어지면 fixed step sizes와 diminishing step sizes의 convergence 공식은 각각 다음과 같다. 

## Convergence theorem for fixed step sizes 

Fixed step sizes는 다음과 같은 수렴성을 가진다.
>\begin{align}
> \lim_{k→\infty} f(x^{(k)}_{best}) \le f^{\*} + \frac{G^{2}t}{2}
\end{align}

## Convergence theorem for diminishing step sizes 
Diminishing step sizes method는 다음과 같은 수렴성을 가진다.

>\begin{align}
\lim_{k→\infty}f(x^{(k)}_{best}) = f^{\*}
\end{align}

## Proofs

Fixed step-sizes와 diminishing step-sizes의 증명은 각각 다음과 같다.

## Proof of convergence theorem for fixed step sizes

Fixed step size method는 $\sum_{i=1}^{k}t_{i} = kt$임을 이용하여 증명한다.  

>\begin{align}
> & f_{best}^{(k)} - f^{\*} \le \frac{R^{2}+G^{2}\sum\_{i=1}^{k}t_{i}^{2}}{2\sum\_{i=1}^{k}t_{i}} = \frac{R^{2}+G^{2}k t^{2}}{2kt}  = \frac{R^{2}}{2tk} + \frac{G^{2}t}{2} \\\\
> & \lim_{k→\infty}(f^{(k)}\_{best} - f^{\*}) \le 0 + \frac{G^{2}t}{2} = \frac{G^{2}t}{2} \\\\
> & \lim_{k→\infty}(f^{(k)}\_{best}) \le f^{\*} + \frac{G^{2}t}{2}
\end{align}


## Proof of convergence theorem for diminishing step sizes 

Diminishing step sizes가 만족하는 아래의 성질 (1), (2)를 이용하여 basic inequality에서부터 증명한다. 

>\begin{align}
>\text{(1)} \sum_{i=1}^{\infty} t_i = \infty, \quad \text{(2)}  \sum_{i=1}^{\infty} t_i^{2} = \beta < \infty
>\end{align}


>\begin{align}
>& f_{best}^{(k)} - f^{\*} \le \frac{R^{2}+G^{2}\sum\_{i=1}^{k}t_{i}^{2}}{2\sum\_{i=1}^{k}t_{i}} \\\\
>& \lim\_{k→\infty}(f^{(k)}_{best} - f^{\*} ) \le \frac{R^{2}+G^{2}\beta}{2\infty} = 0 \\\\
>& \lim\_{k→\infty}(f^{(k)}\_{best}) =  f^{\*} \\\\
>\end{align}

</br> </br>

# 08-01-04 Convergence rate

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Convergence rate는 알고리즘이 $\epsilon$ 오차 범위 내 suboptimal point에 도달하기까지 필요한 시행 수의 경향성을 [Big-O 표기법](https://en.wikipedia.org/wiki/Big_O_notation)으로 나타낸 것이다. 예를들어 $\epsilon$이 $10^{-2}$이고 알고리즘의 convergence rate가 $O(1/\epsilon)$라면, $\epsilon$-suboptimal point까지 도달하는데 필요한 시행 횟수의 경향성은 대략 $1/10^{-2}=10^2$를 따른다.

[Basic inequality](https://wikidocs.net/19343)를 이용하여 fixed step sizes의 subgradient method에 대한 convergence rate를 구해보자.

>$Recall:$
>\begin{align}
> f^{k}_{best} - f^{*} \quad \le \quad \frac{R^{2}}{2kt} + \frac{G^{2}t}{2}
\end{align}

임의의 $\epsilon$이 $\frac{R^{2}}{2kt} \le \frac{\epsilon}{2}$와 $\frac{G^{2}t}{2} \le \frac{\epsilon}{2}$를 만족한다고 할 때 ($\epsilon$은 suboptimality gap, $G$는 Lipschitz constant, $R$은 알고리즘의 시작점과 optimal point간의 거리),  $ \frac{R^{2}}{2kt} + \frac{G^{2}t}{2} \le \epsilon$이다. 만약 $\frac{G^{2}t}{2} \le \frac{\epsilon}{2}$이라면 $t \le \frac{\epsilon}{G^{2}}$이고 $\frac{R^{2}}{2kt} \le \frac{\epsilon}{2}$는 결국 $\frac{R^2G^2}{\epsilon^2} \le k$를 도출할 수 있다. 이는 시행 횟수가 최소 $\frac{R^2G^2}{\epsilon^2}$ 이상이 되면 $f^{k}_{best} - f^{\*} \le \epsilon$을 만족하게 된다는 의미이다.

이 알고리즘의 convergence rate는 $O(1/\epsilon^2)$이므로 이는 gradient descent method의 convergence rate인 $O(1/\epsilon)$보다 현저히 많은 시행 횟수가 필요로 한다는 것을 시사한다.

</br> </br>

# 08-01-05 Example_ Regularized Logistic Regression

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>


만약 $i=1,...,n$에 대해서 $(x_i,y_i) \in R^p × ${$0, 1$}가 주어졌을때, logisitc regression loss는 다음과 같다.
>
\begin{align}
f(\beta) = \sum_{i=1}^n\big(-y_ix_i^T\beta + log(1+exp(x_i^T\beta))\big)
\end{align}

이 함수는 linear 함수와 log-sum-exp 함수의 finite sum의 형태로서 미분 가능한 컨벡스 함수이다.

이때 우리가 $\beta$에 대한 regularization problem은 다음과 같이 정리된다. 

>
\begin{align}
min_{\beta} \text{ } f(\beta) + \lambda ⋅ P(\beta)
\end{align}

여기서 $P(\beta)가 ||\beta||_2^2$(ridge penalty) 또는 $||\beta||_1$(lasso penalty)로 정의된다고 해보자.

Ridge penalty를 적용한 loss 함수는 여전히 미분 가능한 컨벡스 함수이지만 lasso penalty를 적용한 loss 함수는 미분 불가능한 컨벡스 함수가 된다. 

이러한 두 loss 함수에 대해 gradient descent for ridge와 subgradient method for lasso를 적용하여 시행 횟수 $k$에 대한 objective function의 값을 출력해보면 두 방정식의 수렴 특징을 관찰할 수 있다.

<center>
![](https://wikidocs.net/images/page/19145/grad_vs_subgrad.PNG)</br>
**[Fig 1] Gradient descent vs Subgradient method [3]**</br>
</center>

위 실험은 gradient descent가 subgradient method보다 수렴속도가 훨씬 빠르다는 것을 보여준다. 

</br> </br>

# 08-01-06 Polyak step sizes

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

**Polyak step sizes**는 optimal value가 알려져 있을때 step size를 설정하는 방법이다. 만약 $f^{\*}$가 알려져 있을 때 다음과 같이 Polyak step sizes를 정의 할 수 있다. 

## Convergence theorem for Polyak step-sizes
>
\begin{align}
t_k = \{\frac{f^{(k-1)}-f^{\*}}{||g^{(k-1)}||\_2^{2}}\}, \quad k = 1,2,3...
\end{align}


## Proof of convergence theorem for Polyak step-sizes
증명은 [basic inequality](https://wikidocs.net/19343)의 유도과정에 이용된 부등식으로부터 증명할 수 있다. 

>
\begin{align}
||x^{(k)}-x^{\*}||_2^{2}  \quad \le \quad ||x^{(k-1)}-x^{\*}||_2^{2}-2t_k (f(x^{(k-1)})-f^{\*})+t_k^{2}||g^{(k-1)}||_2^{2} \\\\
\end{align}

위 부등식의 오른쪽 항을 $t_k$에 대해서 미분하여 0과 같게 하면 오른쪽 항을 최소화시키는 Polyak step size를 도출할 수 있다. 
>
\begin{align}
& \frac{\partial}{\partial t_k} \|x^{(k-1)}-x^{\*}\|\_2^{2}-2t_k (f(x^{(k-1)})-f^{\*})+t_k^{2}\|g^{(k-1)}\|\_2^{2} \quad = \quad 0 \\\
 \Longleftrightarrow \quad & -2(f(x^{(k-1)})-f^{\*})+2t_k\|g^{(k-1)}\|\_2^{2}  \quad = \quad 0 \\\\
 \Longleftrightarrow \quad & 2(f(x^{(k-1)})-f^{\*})  \quad = \quad 2t_k\|g^{(k-1)}\|\_2^{2} \\\\
 \Longleftrightarrow \quad & f(x^{(k-1)})-f^{\*} \quad = \quad t_k\|g^{(k-1)}\|\_2^{2} \\\\
 \Longleftrightarrow \quad & t_k = \frac{f(x^{(k-1)})-f^{\*}}{\|g^{(k-1)}\|\_2^{2}} \quad \text{(Polyak step size at k)}
\end{align}

Polyak step size의 convergence rate도 [basic inequality](https://wikidocs.net/19343)에서 유도된 부등식으로부터 유도할 수 있다. 

## Congervence rate for Polyak step-sizes 

[Basic inequality](https://wikidocs.net/19343)에서 유도된 부등식에 Polyak step size $t_i$를 대입해보자. 
>
\begin{align}
& 2\sum_{i=1}^{k}t_i(f(x^{(i)})-f^{\*}) \le R^2 + \sum_{i=1}^kt_i^2\|g^{(i)}\|\_2^2 \\\\
 \Longleftrightarrow \quad & 2\sum_{i=1}^{k}\frac{(f(x^{(i)})-f^{\*})^2}{\|g^{(i)}\|\_2^2} \le R^2 + \sum_{i=1}^k\frac{(f(x^{(i)})-f^{\*})^2}{\|g^{(i)}\|\_2^2} \\\\
 \Longleftrightarrow \quad & \sum_{i=1}^{k}\frac{(f(x^{(i)})-f^{\*})^2}{\|g^{(i)}\|\_2^2} \le R^2 \\\\
\end{align}

Lipschitz condition $\|g^{(i)}\|\_2 \le G$를 항상 만족한다고 가정하면, 위의 부등식은 아래와 같이 정리된다.
>
\begin{align}
& \sum_{i=1}^{k}\(f(x^{(i)})-f^{\*})^2 \le R^2G^2 \\\\
 \Longleftrightarrow \quad & k ⋅ (f(x^{(i)})-f^{\*})^2 \le R^2G^2 \\\\
 \Longleftrightarrow \quad & \sqrt{k} ⋅ (f(x^{(i)})-f^{\*}) \le RG \\\\
 \Longleftrightarrow \quad & (f(x^{(i)})-f^{\*}) \le \frac{RG}{\sqrt{k}} \\\\
\end{align}

$\frac{RG}{\sqrt{k}}=\epsilon$이라 하면, $k=\big(\frac{RG}{\epsilon}\big)^2$이므로 $\epsilon$에 대한 suboptimal point에 도달하는 것이 보장되기 위해서는 $\big(\frac{RG}{\epsilon}\big)^2$만큼의 시행 횟수가 필요하다. 즉, convergence rate는 $O(1/\epsilon^{2})$으로 다른 subgradient method와 동일하다. 

</br> </br>

# 08-01-07 Example_ Intersection of sets

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

닫힌 컨벡스 집합(closed convex set)들의 교차점을 찾고 싶다고 하자. 

우선, 임의의 점 $x$로 부터 집합 $C_i$까지의 거리를 나타내는 $f_i(x)$와 점 $x$에서 모든 집합 $C_i, i=1,...,m$에 대해 가장 먼 거리를 나타내는 $f$를 정의해보자.
>
\begin{align}
f_i(x) & = dist(x, C_i), i=1,...,m \\\\
f(x) & = max_{1,...,m}\text{ }f_i(x)
\end{align}

위의 두 함수를 이용하면 다음과 같이 컨벡스 집합들의 교차점을 찾는 최적화 문제로 정의할 수 있다. 

>
\begin{align}
min_{x}\text{ }f(x)
\end{align}

컨벡스 집합의 교차점을 구하는 문제는 임의의 점 $x$와 가장 먼 컨벡스 집합 $C_i$의 거리 $f_i(x)$를 최소화하는 $x$를 구하는 문제로 바뀐다. 이때, 위 문제의 목적 함수인 $f(x)$는 컨벡스이다. 만약 모든 집합의 동시적인 교차점이 존재한다면 $f^{\*} = 0 $이 될 것이고 optimal point는 $x^{\*} \in C_1 \cap C_2 \cap ... \cap C_m$로 표현할 수 있다.

## Gradient of distance function

[이전 장](https://wikidocs.net/18720)에서 컨벡스 집합과의 거리를 $dist(x, C_i) = \min_{y \in C} \lVert y-x \lVert _2$로 정의했고 이 함수의 gradient는 다음과 같음을 보였다. 

>
\begin{align}
\partial dist(x,C) = \{\frac{x-P_C(x)}{||x-P_C(x)||_2}\}
\end{align}

여기서 $P_C(x)$는 점 $x$에서 집합 $C$으로의 projection이다. 

## Subdifferential of finite pointwise maximum

Finite pointwise maximum 함수 $f(x)=max_{i=1,...,m}\text{ }f_i(x)$에 대한 subdifferential은 다음과 같이 정의 된다. 

>
\begin{align}
\partial f(x) = \text{conv}\left(\bigcup_{i:f_i(x)=f(x)} \partial f_i(x)\right)
\end{align}

즉, $x$의 subdifferential은 그 지점의 모든 subdifferential $\partial f_i(x), i=1,...,m$의 합집합에 대한 convex hull로 정의된다. 

만약 $f_i(x) = f(x)$ 이고 $g_i \in \partial f_i(x)$이라면 $g_i \in \partial f(x)$이다.

## Deriving subgradient updating steps

[이전 장](https://wikidocs.net/18720)에서 보았던 $dist(x, C_i)$는 다음과 같은 subgradient를 가진다.

>$Recall:$
\begin{align}
g_i = \nabla f_i(x) = \{\frac{x-P_{C_i}(x)}{||x-P_{C_i}(x)||_2}\}
\end{align}

만약 컨벡스 집합의 교차점이 있다면 우리는 $f^{\*}=0$임을 바로 알 수 있기에 Polyak step sizes를 사용할 수 있다. 위 subgradient 수식을 보면 $x-P_{c_i}(x)$가 정규화된 형태이므로 $\|g\|\_2^{2}=1$이다. 결국 Polyak step size $t_k = \{\frac{f^{(k-1)}-f^{\*}}{||g^{(k-1)}||\_2^{2}}\}$에 우리가 알고 있는 값을 대입하면 다음과 같은 subgradient method 공식을 도출할 수 있다.

>
\begin{align}
x^{(k)} & = x^{(k-1)} - t_{k}⋅g_{k-1} \\\\
& = x^{(k-1)} - \{\frac{f^{(k-1)}-f^{\*}}{||g^{(k-1)}||\_2^{2}}\} \{\frac{x^{(k-1)}-P_{C_i}(x)}{\|x^{(k-1)}-P_{C_i}(x)\|\_2}\}  \\\\
& = x^{(k-1)} - f(x^{k-1}) \{\frac{x^{(k-1)}-P_{C_i}(x)}{\|x^{(k-1)}-P_{C_i}(x)\|\_2}\}  
\end{align}


여기서 Polyak size인 $f(x^{(k-1)})$는 $dist(x_i^{(k-1)}, C_i) = ||x^{(k-1)}-P_{C_i}(x)||_2$ 이므로 subgradient method는 아래와 같이 정리된다.

>
\begin{align}
x^{(k)} = P_{C_i}(x^{(k-1)})
\end{align}

이 문제는 그림으로 표현하면 각 스텝에서 가장 가까운 컨벡스 함수에 projection을 반복하는 형태이다.

<center>
![](https://wikidocs.net/images/page/18975/projection.PNG)</br>
**[Fig 2] Alternating Projection Algorithm [10]**</br>
</center>


</br> </br>

# 08-01-08 Projected Subgradient Method

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

[앞서 본 예제](https://wikidocs.net/edit/page/18975)의 방법을 projected subgradient method라고 한다. 이 알고리즘은 제약조건이 있는 convex problem에서 이용할 수 있다.  

제약 조건을 만족하는 domain을 집합 $C$라고 할 때, 제약조건이 있는 컨벡스 문제는 다음과 같이 정의된다.

>
\begin{align}
min_x \text{ }f(x) \quad \text{subject to } x \in C
\end{align}

Projected subgradient method를 사용하면 위와 같은 문제를 비교적 쉽게 풀 수 있다. Projected subgradient method는 일반적인 subgradient method과 동일하지만 각 시행 마다 집합 $C$로 결과 값을 projection 해주는 형태이다. 

>
\begin{align}
x^{(k)} = P_c(x^{(k-1)} - t_k ⋅ g^{(k-1)}), \quad k = 1,2,3,...
\end{align}

만약 projection이 가능하다면 이 방법은 subgradient method와 동일한 수렴성과 수렴도를 가진다. 

Projected subgradient method에서 주의할 점은 $C$가 단순한 형태의 컨벡스 집합 일지라도 $P_c$ 연산이 어려우면 전체 문제 또한 풀기 어려워진다는 것이다. 일반적으로 다음과 같은 집합 $C$은 비교적 쉽게 projection할 수 있다:

- Affine images: {$Ax=b : x \in R^{n}$} 
 
- Solution set of linear system: {$x: Ax=b$}

- Nonnegative orthat: $R_+^{n} =  ${$x: x\ge 0$} 

- Some norm balls: {$x: \lVert x \lVert _p \le 1 $} for $p=1,2,\infty$

- Some simple polyhedra and simple cones 


</br> </br>

# 08-02 Stochastic Subgradient Method

</br> </br>

Stochastic subgradient method는 앞서 보았던 stochastic gradient descent에서 gradient를 subgradient로 바꾼 것과 동일한 형태이다.

</br> </br>

# 08-02-01 Stochastic Subgradient Method

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

다음과 같이 함수의 합을 최소화하는 문제를 고려해보자.

>
\begin{equation}
\min_x \sum_{i=1}^m f_i(x)
\end{equation}

이 문제에 subgradient method를 적용하면 각 함수 $f_i$에 대해 subgradient를 구해서 합산을 해야 한다. ([stochastic gradient descent](https://wikidocs.net/19038)에서 도출한 방법과 동일)

정리하면 stochastic subgradient method는 다음과 같은 형태를 가진다. 

>
\begin{align}
x^{(k)} = x^{(k-1)} - t_k ⋅ g_{i_k}^{(k-1)}, \quad k = 1, 2, 3, . . . 
\end{align}

여기서 $i_k \in {1,...,m}$는 $k$번째 시행에서 선택된 하나의 인덱스 값이며, 이는 뒷장에서 stochastic subgradient method의 convergence rate에서 살펴볼  cyclic method 또는 random method에 따라 다르게 결정된다. $g_{i}^{(k-1)} \in \partial f_{i}(x^{k-1}) $이며 이 업데이트 방향은 모든 데이터를 사용하는 일반적인 [subgradient method](https://wikidocs.net/18953) (batch subgradient method 또는 full batch subgradient method라고 부름)에서의 $\sum_{i=1}^{m} g_i^{(k-1)}$를 대체한다.

만약 각 $f_i, i = 1,...,m$이 모두 미분 가능하다면 이 알고리즘은 stochastic gradient descent이 된다. (stochastic subgradient method가 좀 더 일반적인 형태)

</br> </br>

# 08-02-02 Convergence of Stochastic Methods

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

각 함수 $f_i, i = 1,...,m$는 컨벡스이고 Lipschitz continuous with constant G 하다고 가정하자.

Stochastic subgradient method에서 fixed step sizes와 diminishing step sizes에 대해 각각 다음의 성질을 가진다.

- **Fixed step sizes** for $t_k = t$, $k = 1, 2, 3, ...$

>$\text{Cyclic과 randomized method는 fixed step sizes일 경우 아래를 만족한다:}$
\begin{align}
lim_{k→\infty} f(x_{best}^{(k)}) \le f^{\*} + 5m^{2}G^{2}t/2
\end{align}

여기서 $mG$는 $\sum_{i=1}^{m} f_i$의 Lipschitz constant이다.

- **Diminishing step sizes**

>$\text{Cyclic과 randomized method는 diminishing step sizes일 경우 모두 아래를 만족한다:}$
\begin{align}
\lim_{k→\infty} f(x_{best}^{(k)}) = f^{\*}
\end{align}



</br> </br>

# 08-02-03 Convergence Rate of Stochastic Method

</br> </br>

Cyclic 방법과 randomized 방법은 convergence rate의 차이를 보인다.

[Batch subgradient method](https://wikidocs.net/18974)의 convergence rate는 $O(G_{batch}^{2}/\epsilon^{2})$이다. ($G_{batch}$는 $\sum\text{ }f_i$에 대한 Lipschitz constant)

- **Cyclic method**: Cyclic method의 iteration complexity는 $O(m^{3}G^{2}/\epsilon^{2})$이다. 만약 $m$번의 cyclic stochastic subgradient method를 한 번의 batch subgradient method로 가정한다면 각 cycle에서 $O(m^{2}G^{2}/\epsilon^{2})$ 만큼의 시행이 필요하다. ($G$는 하나의 함수 $f_i$의 Lipschitz constant)

- **Randomized method**: Randomized method의 iteration complexity는 $O(m^{2}G^{2}/\epsilon^{2})$이다. 즉, randomized method는 $O(mG^{2}/\epsilon^2)$번의 시행이 필요하므로 batch method와 cyclic method의 $O(m^2G^2/\epsilon^2)$보다 $m$배 빠르게 수렴하는 것을 알 수 있다. 결과적으로 Big-O 표기법으로는 $m$의 값이 크면 randomized method이 convergence rate가 더 빠르다고 할 수 있다.

Randomized method와 cyclic method의 convergence rate는 Big-O 표기법으로는  $m$ 배 만큼의 차이가 있지만 사실 cyclic method의 Big-O표현은 worst-case bounded이고 randomized method은 average-case bounded이다. 즉, 어떠한 경우엔 두 방식의 convergence rate의 차이가 Big-O 표기법에서 보이는 것과 같이 그리 크게 차이나지 않을 수 도 있다는 점을 기억하자.


</br> </br>

# 08-02-04 Batch vs Stochastic Methods

</br> </br>

Batch method와 stochastic method의 수렴은 다음과 같은 성질을 띈다. 

일반적으로 stochastic method는 초반에 빠르게 optimal point 근처로 접근하지만, optimal point 근처에서 어느 순간 더 이상의 수렴을 잘하지 못한다. 반면 batch method는 느리지만 비교적 정확하게 optimal point로 점차 수렴해가는 것을 관찰 할 수 있다.

아래는 [logistic regression](https://en.wikipedia.org/wiki/Logistic_regression)을 batch 방식과 stochastic 방식을 사용했을때, 각각의 수렴성을 비교한 그림이다. (regularizaton은 사용하지 않음)

<center>
![](https://wikidocs.net/images/page/18973/stochastic_vs_batch.PNG)</br>
**[Fig 3] Batch vs Stochastic Gradient Descent [2]**</br>
</center>


</br> </br>

# 08-03 Improving on the Subgradient Method

</br> </br>

Subgradient method는 미분할 수 없는 컨벡스 함수에도 사용할 수 있다는 점에서 범용성이 큰 것이 장점이다 (more general). 하지만 convergence rate가 $O(1/\epsilon^{2})$이므로 gradient descent의 convergence rate인 $O(1/\epsilon)$보다 훨씬 느리다. 

Gradient descent와 subgradient method 각각의 장점을 잘 조합하는 방법은 없을까?

다음 장에서는 이 두 알고리즘의 장점을 결합한 proximal gradient descent란 방법을 알아보도록 하겠다.

</br> </br>

# 09 Proximal Gradient Descent and Acceleration

</br> </br>

Non-differentiable한 함수에 대해 최적화를 하기 위해 subgradient method를 사용하게 되면 성능이 다소 느리다는 단점이 있다. 이 성능 문제를 해결하기 위해 제시된 방법이 **proximal gradient descent**이다.

**Proximal gradient descent**는 objective 함수를 미분 가능(differentiable)한 함수와 미분 불가능(non-differentiable)한 함수로 분리한다. 그리고, differentiable한 함수의 다음 위치를 gradient descent로 에측해서 그 위치와 가까우면서 non-differentiable한 함수가 동시에 작아지게 만들 수 있는 가장 좋은 위치로 조정한다.

이 방법은 분석적으로 최적해를 구할 수 있기 때문에 gradient descent와 같은 수렴 속도를 갖게 되며 non-differentiable한 함수가 "simple" 할수록 계산 비용도 gradient descent와 유사해진다.

이 장에서는 **proximal gradient descent**에 전반적인 내용을 살펴보고 추가적인 성능 향상을 위한 여러 **aceleration** 방법들에 대해 살펴보도록 하겠다.

</br> </br>

# 09-01 Proximal gradient descent

</br> </br>

**Proximal gradient descent**는 objective 함수를 differentiable한 함수와 non-differentiable한 함수로 분리해서 최적해를 찾는 방법이다. 이 절에서는 proximal gradient descent에서 함수를 정의하는 방식과 최적해를 구하는 방식을 살펴보도록 하겠다.

## Decomposable functions
Objective 함수 $f$를 두 개의 함수 $g$와 $h$로 분리할 수 있다고 가정하자.

>$f(x) = g(x) + h(x)$ 

이떄, 두 함수 함수 $g$와 $h$는 다음과 같은 성질을 갖는다. <br>

* $g$는 convex이고 differentiable하다. (**dom**$(g) = \mathbb{R}^n$)
* $h$는 convex이고 non-differentiable하다. 

만일 $f$가 differentiable하다면 gradient descent로 다음 위치를 찾을 수 있을 것이다. 

>$x^+ = x - t \cdot \nabla f(x)$

**[참고]** Gradient descent에서는 함수 $f$를 $x$ 근처에서 Tayler 2차식으로 근사하고 2차 항의 hessian $\nabla^2 f(x)$를 $\frac{1}{2t} I$로 대체해서 정의한다. 그리고, 이 근사식의 최소 위치를 다음 위치로 선정한다. (자세한 내용은 6장 Gradient descent 참조)

> \begin{align}
x^+ = \underset{z}{\text{argmin}} \, \underbrace{ f(x) + \nabla f(x)^T (z - x) + \frac{1}{2t} \parallel z - x \parallel_2 ^2}\_{\tilde{f}_t(z)}
\end{align}

하지만, 함수 $f$가 differentiable하지 않다면 gradient descent를 사용할 수 없다. 그런데, 함수 $f$가 $f = g + h$로 구성된다면 differentiable한 함수 $g$는 이차식으로 근사할 수 있지 않을까? 

이런 아이디어에서 나온 방법이 **Proximal gradient descent**이다. 이 방법에서는 $g$의 gradient descent로 예측된 위치와 가까우면서 non-differentiable한 함수 $h$를 동시에 작아지게 만들 수 있는 가장 좋은 위치로 조정하는 방식이다. 이런 과정은 다음 식과 같이 표현될 수 있다.

> \begin{align}
x^+ & = \underset{z}{\text{argmin}} \,  \tilde{g}_t(z) + h(z) \\\\
& = \underset{z}{\text{argmin}} \ g(x) + \nabla g(x)^T (z - x) + \frac{1}{2t} \parallel z - x \parallel_2 ^2 + h(z) \\\\
& = \underset{z}{\text{argmin}} \, \nabla g(x)^T (z - x) + \frac{1}{2t} \parallel z - x \parallel_2 ^2 + \frac{t}{2} \parallel \nabla g(x) \parallel_2 ^2  + h(z) \\\\
& = \underset{z}{\text{argmin}} \, \frac{1}{2t} \left\( 2t \nabla g(x)^T (z - x) + \parallel z - x \parallel_2 ^2 + t^2 \parallel \nabla g(x) \parallel_2 ^2 \right\)  + h(z) \\\\
& = \underset{z}{\text{argmin}} \, \frac{1}{2t} \left\( \parallel z - x \parallel_2 ^2 + 2t \nabla g(x)^T (z - x) + t^2 \parallel \nabla g(x) \parallel_2 ^2 \right\) + h(z) \\\\
& = \underset{z}{\text{argmin}}  \, \frac{1}{2t} \parallel z - (x - t \nabla g(x) )\parallel_2 ^2 + h(z) \\\\
\end{align}

2줄에서 3줄로 갈 때 y에 대한 상수항으로서 $g(x)$는 삭제되고 $\frac{t}{2} \parallel \nabla g(x)^T \parallel_2 ^2 $ 항이 추가되었다. 최종 식에서 첫번째 항 $\frac{1}{2t} \parallel z - (x - t \nabla g(x) )\parallel_2 ^2$은 $g$의 gradient update 위치에 가까워지게 만드는 항이고 두번째 항인 $h(z)$는 $h$를 작아지게 만드는 항이다.

## Proximal gradient descent
Proximal gradient descent는 시작점 $x^{(0)}$에서 시작해서 다음 과정을 반복한다.

>$x^{(k)} = \text{prox}_{t_k}(x^{(k-1)} - t_k \nabla g(x^{(k-1)}) )$, $k=1,2,3,...$

여기서 $\text{prox}\_{t}$는 proximal mapping으로 다음과 같이 정의된다.

> \begin{align}
\text{prox}\_{t}(x) = \underset{z}{\text{argmin}}  \frac{1}{2t} \parallel x - z \parallel_2^2 + h(z)
\end{align}

이 식을 그동안 봐왔던  update 형태로 변경해 보면 다음과 같다. 여기서 $G_{t}$는 $f$의 generalized gradient이다.

> \begin{align}
x^{(k)} = x^{(k-1)} - t_k \cdot G_{t_k}(x^{(k-1)}), \space \space \text{where} \space G_{t}(x) = \frac{x-\text{prox}_{t} (x - t \nabla g(x))}{t} \\\\
\end{align}

##  What good did this do?
이렇게 하면 무엇이 좋아지는가? 단지 문제를 다른 형태의 minimization 문제로 바꾼 것이 불과하지 않은가?라고 의문을 가질 수 있다.

핵심 포인트는 대부분의 주요 $h$ 함수에 대해 $\text{prox}\_{t}(\cdot)$가 분석적으로 계산될 수 있다는 것이다. 즉, 다음과 같이 계산된다.

* 맵핑 함수 $\text{prox}\_{t}(\cdot)$는 $g$가 아닌 $h$에만 의존한다.
* 함수 $g$는 매우 복잡한 함수일 수 있는데 여기서는 gradient $\nabla g$만 계산하면 된다.

수렴 분석은 알고리즘의 반복 횟수에 대해 이뤄지게 될 것이다. 각 반복에서 $\text{prox}\_{t}(\cdot)$를 계산하며 $h$에 따라 계산 비용이 작거나 커질 수 있다는 점을 유의해야 한다.

##  Example: ISTA
Proximal gradient descent의 예제를 살펴보자. 이전 장에서 $y \in \mathbb{R}^n$, $X \in \mathbb{R}^{n \times p}$일 때, lasso criterion은 다음과 같이 정의되었다.

> \begin{align}
f(\beta) = \frac{1}{2} \parallel y - X\beta \parallel_2^2 + \lambda \parallel \beta \parallel_1 \\\\
\end{align}

여기서 $g(\beta) = \frac{1}{2} \parallel y - X\beta \parallel_2^2$이고 $h(\beta) = \lambda \parallel \beta \parallel_1$이다. 이때, proximal mapping은 다음과 같이 정의된다.

> \begin{align}
\text{prox}\_{t}(\beta) & = \underset{z}{\text{argmin}}  \frac{1}{2t} \parallel \beta - z \parallel_2^2 + \lambda \parallel z \parallel_1 \\\\
& = S_{\lambda t}(\beta) \\\\
\end{align}

$S_{\lambda t}(\beta)$는 soft-thresholding operator로 다음과 같이 정의된다. (자세한 내용은 7장 Subgradient 참조)

> \begin{align}
[S_{\lambda t}(\beta)]_\{i} =  
\begin{cases}
\beta_i - \lambda & \mbox{if } \beta_i \gt \lambda \\\\
0 & \mbox{if } \lambda \le \beta_i \le \lambda, i = 1, ..., n \\\\ 
\beta_i + \lambda & \mbox{if } \beta_i \lt -\lambda \\\\ 
\end{cases}
\\\\
\end{align}

$g$의 gradient가 $\nabla g(\beta) = -X^{T} (y - X \beta)$이므로 proximal gradient update는 다음과 같이 정의된다.

>$\beta^+ = S_{\lambda t}(\beta + tX^{T} (y - X \beta) )$

이 알고리즘은 **iterative soft-thresholding algorithm (ISTA)** 라고 하는 매우 간단한 알고리즘이다. (Beck and Teboulle (2008), "A fast iterative shrinkage-thresholding algorithm for linear inverse problems")

다음 그림을 보면 subgradient method와 proximal gradient descent의 확연한 성능 차이를 확인할 수 있다. 반복 횟수 측면에서 proximal gradient descent의 성능은 gradient cescent의 성능과 동일하다.

![](https://wikidocs.net/images/page/19032/09.01_01_ISTA.PNG)<br>
**[Fig 1] Example of proximal gradient (ISTA) vs. subgradient method coonvergence rate [3]**

</br> </br>

# 09-02 Convergence analysis

</br> </br>

이 절에서는 proximal gradient descent의 수렴을 분석한다. 

## Convergence Analysis
Objective 함수 $f(x) = g(x) + h(x)$에 대해 다음 사항을 가정한다.

* $g$는 convex, differentiable하며 **dom**$(g) = \mathbb{R}^n$, $\nabla g$는 Lipschitz continuous하다 ($L \gt 0$).
* $h$는 convex이고 $\text{prox}\_{t}(x) = \underset{z}{\text{argmin}} \left\\{ \parallel x - z \parallel_2^2/ (2t) + h(z) \right\\}$가 계산되어야 한다.

#### Convergence Theorem
> **Proximal gradient descent**는 fixed step size $t \le 1/L$에 대해 다음 식을 만족한다. 
>\begin{align}
f(x^{(k)}) - f^{\*} \le  \frac{ \lVert x^{(0)} - x^{\*} \rVert^2\_2 }{2tk}
\end{align}

Proximal gradient descent는 $O(1/k)$ 또는 $O(1/\epsilon)$의 수렴 속도를 갖는데 이는 gradient descent와 동일한 성능이다. 단, 이 성능은 반복 횟수 기준이지 연산 횟수 기준이 아니라는 점을 유념하자. (연산 횟수는 함수 $h$에 따라 적을수도 많을 수도 있다.)

## Backtracking line search
Proximal gradient descent의 backtracking line search 방법은 gradient descent와 비슷하지만 함수 $f$가 아닌 smooth 파트인 $g$에 대해서만 작동한다. 

먼저 파라미터를 $0 \lt \beta \lt 1$로 설정하고 $t=1$로 시작한다. 각 반복에서 다음 조건을 만족하는 동안 $t$를 $t = \beta t$로 줄이고, 다음 조건을 만족하지 않으면  proximal gradient descent를 update한다.
> \begin{align}
g(x - tG_t(x)) \gt g(x) - t \nabla g(x)^T G_t(x) + \frac{t}{2} \parallel G_t(x) \parallel_2 ^2
\end{align}

이 backtracking 조건은 다음 step 위치인 $x - tG_t(x)$에서의 함수 $g$의 값이 함수 $g$의 Tayor 2차 근사 함수의 값보다 클 때를 의미한다.

이 식에서 $G_t(x) = \nabla g(x)$이라면 $g(x - t \nabla g(x)) \gt g(x) - \alpha t \lVert \nabla g(x) \rVert_2^2 $가 되므로 gradient descent의 backtracking 조건과 동일해진다는 것을 알 수 있다. 

**참고 :** Gradient descent의 backtracking에 대한 자세한 내용은 [06-02-02 backtracking line search](https://wikidocs.net/18184) 참조

#### Backtracking line search 알고리즘
이 내용을 알고리즘으로 정리하면 다음과 같다. (단, $\nabla x = - t G_t(x)$)

1. 파라미터를 초기화한다. ($0 \lt \beta \lt 1$, $0 \lt \alpha \le 1/2$)
2. 각 반복에서 $t = t_{\text{init}}$로 초기화 한다. ($t_{\text{init}} = 1$)
3. 조건 $g(x - tG_t(x)) \gt g(x) - t \nabla g(x)^T G_t(x) + \frac{t}{2} \parallel G_t(x) \parallel_2 ^2 $을 만족하면 $t = \beta t$로 줄인다. 이 조건이 만족되는 동안 3을 반복한다.
4. Gradient descent update $ x^+ = x - t G_t(x) = \text{prox}_t(x - t \nabla g(x))$를 실행한다.
5. 종료 조건을 만족하지 않으면 2로 간다.

Proximal gradient descent에서 backtracking을 할 때 $G_t(x)$이 반복적으로 계산되기 때문에 실제  $G_t(x)$ 안에 포함된 proximal mapping이 반복적으로 계산된다. Proxmal mapping은 계산 비용이 매우 높기 때문에 전체적인 backtracking 계산 비용은 높다고 할 수 있다.

#### Convergence Theorem
앞의 가정과 동일한 가정 하에 backtracking line search 방식도 같은 성능을 구할 수 있다.

>**Proximal gradient descent**는 backtracking line search에 대해 다음 식을 만족한다. Step size는 $t_{\text{min}} = \text{min}\\{1,β/L\\}$이다.
> \begin{align}
f(x^{(k)})−f^{\star} ≤ \frac{\lVert x^{(0)} − x^{\star} \rVert_{2}^{2}}{2 t_{min}k}, \space t_{\text{min}} = \text{min}\\{1,β/L\\} \\\
\end{align}


</br> </br>

# 09-03 Example_ matrix completion

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

여러 응용에서 측정된 데이터를 행렬로 표현하게 되는데, 이때 행렬의 대부분의 항목들에는 값이 없고 소수의 항목에만 관측 데이터가 있는 희소 행렬인 경우가 있다. 이와 같은 행렬에서 값이 없는 항목(missing entry)들의 값을 채우는 문제를 **Matrix completion** 문제라고 한다. 

예를 들어, 추천 시스템에서 아직 구매를 하지 않은 상품이나 서비스를 고객에게 추천할 때 이런 문제가 발생할 수 있다.

## Maxtrix Completion Problem
**Matrix completion** 문제는 다음과 같이 정의할 수 있다. 

행렬 $Y ∈ \mathbb{R}^{m×n}$는 관측 데이터를 갖고 있는 행렬이며, 관측 데이터가 있는 항목을 $Y_{ij}, (i,j) ∈ \Omega$라고 하자. 행렬 $B$는 관측 값이 없는 항목들을 추정하기 위한 추정 행렬이다.

> $$\min_B \frac{1}{2} \sum_{(i,j)∈\Omega} (Y_{ij} −B_{ij})^2 + λ\lVert B \rVert_{tr}$$

Objective 함수의 첫번쨰 항은 행렬 $B$와 관측 데이터와의 오차를 최소화하며, 두번쨰 항은 행렬 $B$를 저차원(low rank) 행렬로 만들어 준다. (여기에는 행렬 B는 저차원의 manifold에 있다고 가정한다.) 따라서, 행렬 $B$는 관측 데이터는 그대로 유지하면서 관측 데이터가 형성하고 있는 가장 낮은 차원의 값으로 나머지 부분을 채우는 행렬이 된다.

#### [참고] Trace Norm
행렬의 trace norm은 행렬의 sigular value들의 합이다.

> $$\lVert B \rVert_{tr} = \text{trace}(\sqrt{B^\* B}) = \sum_{i=1}^r \sigma_i(B), \quad r = rank(B)$$

$B^\* B$는 positive semi-definite이고 $\sigma_1(X) ≥ ... ≥ \sigma_r(X) ≥ 0$는 singular value이다.

#### [참고] **L1** Norm Regularizer vs. Trace Norm Regularizer
이 문제는 matrix soft-thresholding로 원래 soft-thresholding에서의 벡터가 행렬로 대체되었다고 보면 된다. Regularizer 항을 보면 벡터에 대한 **L1** norm regularizer ( $\lVert \cdot \rVert_{1}$)가 행렬에 대한 trace norm regularizer ($\lVert \cdot \rVert_{tr}$)로 대체되었는데 실제 두 regularizer의 역할은 같다고 볼 수 있다.

**L1** norm regularizer가 벡터를 sparse하게 만들어 주는데,  trace norm regularizer도 행렬의 sigular value vector를 sprase하게 만들어 주기 때문이다. 즉, 행렬이 diagonal일 때 diagonal을 singular value vector로 볼 수 있으며 trace norm regularizer는 singular value의 합을 최소화 하기 때문에 singular value vector를 sparse하게 해준다.

이 문제에서 trace norm $\lVert B \rVert_{tr}$는 $\text{Rank}(B)$의 approximation으로 사용되었다고 볼 수 있다.

## Proximal gradient descent
이 문제를 projection operator를 이용해서 정의하면 proximal gradient descent를 Nice하게 적용할 수 있다.
#### Projection Operator
관측값에 대해 projection operator $P_\Omega$를 다음과 같이 정의해보자.

> $$[ P_\Omega(B) ] \_{ij} =
> \begin{cases}
B_{ij}, & (i,j) ∈ \Omega \\\
0, & (i,j) \notin \Omega
\end{cases}$$

#### Objective Function
Projection operator를 이용해서 objective 함수를 정의하면 다음과 같다.

>$$f(B) = \underbrace{ \frac{1}{2} \lVert P_\Omega(Y) − P_\Omega(B) \rVert_F^2 }\_{g(B)} + \underbrace{ \lambda \lVert B \rVert_{tr} }\_{h(B)}$$

이제 함수 $f(B)$는 differentiable 파트인 $g(B)$와 non-differentiable 파트로 $h(B)$로 구성되었다. 

#### Proximal Mapping
이제 proximal gradient descent를 적용하기 위해 함수 $g(B)$의 gradient를 구하고 proximal mapping를  정의해보자.

* 함수 $g(B)$의 gradient : $\nabla g(B) = −(P_\Omega(Y )−P_\Omega(B))$</br>
* Proximal mapping : 

> $$\begin{align}
\text{prox}\_t(B) = \underset{Z}{\text{argmin}\} \frac{1}{2t} \lVert B−Z \rVert_F^2 + \lambda \lVert Z \rVert_{tr}
\end{align}$$

#### Matrix SVD & Soft-thresholding
Proximal mapping은 $\lambda$ 레벨에서의 matrix soft-thresholding로 $\text{prox}\_t(B) = S_{\lambda t}(B)$이다.

일반적으로 행렬 $B$는 매우 크기 때문에 Singular Vector Decompoisition(SVD)를 해서 연산량을 최소화 해야만 한다. 따라서, $B = U \Sigma V^T$와 같이 SVD를 했다면 $S_\lambda(B)$는 다음과 같이 정의할 수 있다.

> $$ S_\lambda(B) = U \Sigma_\lambda V^T$$

이때, $\Sigma_\lambda$는 다음과 같은 대각 행렬이다.

> $$(\Sigma_\lambda)\_{ii} = \max \\{ \Sigma_{ii} −\lambda,0 \\}$$
 

#### [참고] $(\Sigma_\lambda)\_{ii} = \max \\{ \Sigma_{ii} −\lambda,0 \\}$  inducement
이 식이 어떻게 도출되었을까? $\text{prox}\_t(B) = Z$라고 하면 $Z$는 다음과 같다.
($\text{prox}\_t(B)$의 우변을 Z에 대해 미분하면 다음 결과를 얻을 수 있다.)

> $$0 ∈ Z − B + \lambda t \cdot \partial \lVert Z \rVert_{tr}$$

이 식을 정리해 보면 다음과 같다.
>$$\begin{align}
Z & = B - \lambda t \cdot \partial \lVert Z \rVert_{tr} \\\\
 & = U \Sigma V^T - \lambda t \cdot (UV^T + W) \\\\
 & = U (\Sigma - \lambda t) V^T - \lambda t  W \\\\
 & = U (\Sigma - \lambda ) V^T  \\\\
\end{align}$$

최종 수식은 Lipschitz constant $L=1$일 경우 $t=1$이고 $W$가 0일 경우에 도출될 수 있다.

따라서, $\text{prox}\_t(B) = S_\lambda(B) = Z$이므로 다음 식이 도출된다..

> $$(\Sigma_\lambda)\_{ii} = \max \\{ \Sigma_{ii} −\lambda,0 \\}$$

#### [참고] Derivative of Trace Norm
만약 $Z = U \Sigma V^T$라면 trace norm이 미분은 다음과 같다. 
> $$\partial \lVert Z \rVert_{tr} = \\{UV^T + W : \lVert W \rVert_{op} ≤ 1, U^TW = 0, WV = 0 \\}$$

$\lVert W \rVert_{op}$는 operator norm으로 biggest singular value가 1보다 작다. 그리고, $W$는 $U^T$와 $V$와 orthogonal하다.

* 증명은 [Derivative of the nuclear norm with respect to its argument](https://math.stackexchange.com/questions/701062/derivative-of-the-nuclear-norm-with-respect-to-its-argument) 참조

#### Proximal gradient update
이제 proximal gradient 업데이트 식을 정의해 보자.

> $$B^+ = S_{\lambda t} ( B + t( P_\Omega(Y) − P_\Omega(B) ) )$$

$L = 1$일 때 $\nabla g(B)$는 Lipschitz continuous이므로 ﬁxed step size $t = 1$로 선택할 수 있다.

따라서, 업데이트 식이 다음과 같이 간단해졌다.
> $$B^+ = S_\lambda (P_\Omega(Y) + P_\Omega^\bot (B) )$$

$P_\Omega^\bot$는 미관측 값에 대한 사영(projection)이며 $P_\Omega(B) + P_\Omega^\bot (B) = B$를 만족한다.

이 식에서 $P_\Omega(Y)$는 observed 파트이고 $P_\Omega^\bot (B)$는 missing 파트이다. $S_\lambda$ 함수는 입력 행렬을 SVD를 해서 $(\Sigma_\lambda)\_{ii} = \max \\{ \Sigma_{ii} −\lambda,0 \\}$만 계산하면 되므로 매우 간단하다.

## Soft-Impute Algorithm
이 알고리즘을 **Soft-Impute**이라고 하며 matrix completion에 간단하고 효과적으로 할 수 있다. 일반적으로 행렬이 큰 경우 SVD 계산 비용은 매우 높은데, 이 알고리즘에서는 $P_\Omega(Y)$가 sparse하고 $P_\Omega^\bot (B)$가 low rank이기 때문에 SVD를 효율적으로 할 수 있게 된다.

* 자세한 내용은 논문 참조 : Mazumder et al. (2011), "Spectral regularization algorithms for learning
large incomplete matrices"



</br> </br>

# 09-04 Special cases

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Proximal gradient descent는 composite gradient descent 또는 generalized gradient descent라고도 한다. 

그렇다면 왜 **"generalized”**라고 할까? 그 이유는 Proximal gradient descent가 다음과 같은 특별 케이스들을 모두 포함하기 때문이다.

• $h = 0 \to$ gradient descent</br> 
• $h = I_C \to$ projected gradient descent </br>
• $g = 0 \to$ proximal minimization algorithm</br>

따라서 이 알고리즘들은 모두 $O(1/\epsilon)$의 수렴 속도를 갖는다.

## Projected gradient descent
$I_C(x)$가 closed convex set $C ∈ \mathbb{R}^n$의 Indicator 함수일 때  $g(x)$를 집합 $C$에 대해 최소화 하는 문제는 다음과 같이 재정의하여 표현할 수 있다. (참고로 $C$가 closed set이어야 하는 이유는 closed set이어야 projection이 잘 정의될 수 있기 때문이다.)

> $$ \min_{x \in C} g(x) \iff \min_x g(x) + I_C(x)$$
> $$I_C(x) = \begin{cases}
0, & x \in C \\\
&infin;, & x \notin C
\end{cases}$$

이때 proximal mapping은 다음과 같이 정의된다.

>
\begin{align}
\text{prox}\_t(x)  &= \underset{z}{\text{argmin}} \frac{1}{2t} \lVert x−z \rVert_2^2 + I_C(z) \\\
& = \underset{z \in C}{\text{argmin}} \lVert x−z \rVert_2^2
\end{align}

결과적으로 proximal mapping $\text{prox}\_t(x) = P_C(x)$는 $C$에 대한 사영 오퍼레이터 (projection operator)라고 할 수 있다.

Proximal gradient 업데이트 단계는: $x^+ = P_C (x−t \nabla g(x) )$와 같이 정의된다. 풀어서 설명하면 gradient descent로 업데이트를 수행 한 후 $C$에 대해 사영(project)을 수행한다고 보면 된다.

아래 그림을 보면 분홍색 사각형이 feasible set  $C$이며 현재 위치는 사각형 아래의 두 점 중 윗쪽 점이다. Gradient descent로 한 스텝을 이동하게 되면 $C$를 벗어나게 되므로 다시 $C$에 대해 사영을 해서 feasible set 안쪽으로 들어오게 됨을 알 수 있다.

<center>
![](https://wikidocs.net/images/page/20230/projected_gradient_descent.png)

**[Fig1] Projected Gradient Descent [3]**
</center>

## Proximal minimization algorithm

다음가 같이 Convex $h$를 최소화하는 문제를 고려해보자. 이때, $h$는 미분가능할 필요는 없으며  $g(x) = 0$이다.
>
\begin{align}
\min_x h(x)
\end{align}

Proximal mapping은 다음과 같이 정의된다.
> 
\begin{align}
x^{(k)} &= \text{prox}\_{t_k} \big(x^{(k-1)} - t_k \nabla g ( x^{(k-1)} ) \big) , \qquad k = 1, 2, 3, ... \\\
&= \text{prox}\_{t_k} \big(x^{(k-1)} \big) ,  \qquad \qquad \qquad \qquad \; k = 1, 2, 3, ... \\\
\end{align}

따라서 proximal gradient 업데이트 단계는 다음과 같다:
> $x^+ = \underset{z}{\text{argmin}} \frac{1}{2t} \lVert x−z \rVert_2^2 + h(z)$

이와 같이 $g$는 $0$이고 $h$로만 정의되는 proximal gradient 방법을 **proximal minimization algorithm(PMA)** 라고 한다.
이 방법은 subgradient보다는 빠르지만 proximal mapping이 closed form이 아니면 구현이 불가능하다.

## What happens if we can't evaluate prox?
이론적으로는 $f = g + h$에 대해 proximal gradient을 적용할 때는 prox 함수가 정확히 계산될 수 있다고 가정한다. 즉, proximal mapping을 통해 최소값을 정확히 구할 수 있다고 가정한다.
>  $\text{prox}\_t(x )= \underset{z}{\text{argmin}} \frac{1}{2t} \lVert x−z \rVert_2^2 + h(z)$

일반적으로 최소값을 근사할 경우 어떤 일이 일어나는지는 정확히 알 수 없다.
하지만 prox operator를 근사할 때 에러를 정확히 제어 할 수 있다면 원래의 수렴 속도를 가질 수 있음이 밝혀져 있다. (Schmidt et al. (2011), Convergence rates of inexact proximal-gradient methods for convex optimization")

실제 prox가 근사적으로 계산될 수 있다면 높은 정확도로 수행될 것이다.







</br> </br>

# 09-05 Acceleration

</br> </br>

이 장에서는 **proximal gradient descent**를 가속화하는 방법을 살펴볼 것이다.
그리고, 수렴 분석과 FISTA 예시를 살펴보며 가속화가 항상 유용한지를 분석해 본다.


</br> </br>

# 09-05-01 Accelerated proximal gradient method

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "Center"
});
</script>

Proximal gradient descent를 가속화(accerleration)하게 되면 최적의 수렴 속도인  $O(1/\sqrt{\epsilon})$를 달성할 수 있다. Nesterov는 다음과 같은 네 가지 방식을 제안했으며 이 중 세 가지가 가속화 방법이다.

* 1983 : Smooth function에 대한 원래 가속화 방법 </br> 
* 1988 : Smooth function에 대한 다른 가속화 방법 </br>
* 2005 : 원래 가속화 방법과 함께 nonsmooth function을 smoothing하는 기법</br>
* 2007 : Composite function에 대한 가속화 방법</br>

이제 Nesterov(1983)의 composite function에 대한 방법을 확장한 Beck과 Teboulle(2008)의 방법을 살펴보자.

## Accelerated proximal gradient method
이전과 동일하게 $g$가 convex이고 미분가능하며 $h$는 convex일 때 다음과 같이 문제가 정의된다고 하자.
> 
\begin{align}
\min_x g(x) + h(x)
\end{align}

**Accelerated proximal gradient method**는 $x$에서 다음 위치로 갈 때 방향이 급격히 바뀌지 않도록 $x$가 진행하던 방향을 고려하는 방식이다. 즉, 진행 방향에 모멘텀(momentum)을 주어 지금까지 진행하던 방향으로 계속 진행하려는 관성을 갖게 만든다.

알고리즘의 초기값은 $x^{(0)} = x^{(−1)} \in \mathbb{R}^n$로 둔다. 그리고, 모멘텀을 고려한 위치 $v$를 계산한 후 proximal gradient를 실행한다.

> 
\begin{align}
v & = x^{(k−1)} + \frac{k−2}{k + 1}  (x^{(k−1)} −x^{(k−2)}) \\\
x^{(k)} & = \text{prox}\_{t_k} (v − t_k \nabla g(v)), k = 1,2,3,...  \\\
\end{align}

</br>
• 첫번째 스텝 $k = 1$에서는 $x^{(k−1)} −x^{(k−2)}$가 0이기 때문에 proximal gradient update와 동일하다.</br> 
• 그 다음 단계에서는 $v$는 이전 진행 방향인 $x^{(k−1)} −x^{(k−2)}$로 모멘텀을 갖는다. 이때, $k$가 작을수록 모멘텀 가중치는 작으며 $k$가 클수록 모멘텀 가중치는 커져서 1로 수렴한다. </br>
• $h = 0$인 경우 **accelerated gradient method**와 같다.</br></br>

아래 그림에는 $k$의 변화에 따른 모멘텀 가중치의 변화를 보여주고 있다.

이 그림을 보면 k = 0일 때 값이 음수인데 이때 모멘텀 항이 0이 되기 때문에 문제가 되지는 않는다. k값이 증가할수록 가중치가 1에 가까워 지므로 값이 갱신될 때 좀 더 멀리 나아가면서 빠르게 수렴할 수 있도록 도와준다.</br></br>

<center>
![](https://wikidocs.net/images/page/19403/momentum_weight.png)

**[Fig1] Momentum weights [3]**
</center>

## Lasso example
이전에 보았던 Losso 예시에 accelerated proximal gradient를 적용해 보면 다음 그림과 같은 결과를 얻을 수 있다. Accelerated proximal gradient subgradient나 proximal gradient에 비해 매우 빠른 성능을 갖고 있음을 알 수 있다. 

그래프의 중간에 튀는 부분이 보이는데 이를 “Nesterov ripples”이라고 부른다. 따라서, accelerated proximal gradient는 monotonic decreasing하지 않기 때문에 descent 방법이 아니다.

<center>
![](https://wikidocs.net/images/page/19403/accelerated_proximal_gradient.png)

**[Fig2] Accelerated Proximal Gradient [3]**
</center>

</br> </br>

# 09-05-02 Convergence analysis

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>
이 절에서는 accelerated proximal gradient method의 수렴을 분석한다.

## Convergence analysis
Objective 함수 $f(x) = g(x) + h(x)$에 대해 다음 사항을 가정한다.

* $g$는 convex, differentiable하며 **dom**$(g) = \mathbb{R}^n$, $\nabla g$는 Lipschitz continuous하다 ($L \gt 0$).
* $h$는 convex이고 $\text{prox}\_{t}(x) = \underset{z}{\text{argmin}} \left\\{ \parallel x - z \parallel_2^2/ (2t) + h(z) \right\\}$가 계산되어야 한다.

#### Convergence Theorem
> **Accelerated proximal gradient method**는 fixed step size $t \le 1/L$에 대해 다음 식을 만족한다. 
>\begin{align}
f(x^{(k)}) − f^{\star} ≤ \frac{2 \lVert x(0) −x^{\star} \rVert_2^2 }{ t(k + 1)^2}
\end{align}

Frst-order method의 optimal rate인 $O (1 / k^2)$의 성능을 가지며 이는 $O(1/ \sqrt {\epsilon})$이다.  Subgradient method의 성능은 $O(1/\varepsilon^{2})$, proximal gradiant의 성능은 $O(1/\varepsilon)$, accelerated proximal gradient의 성능은 $O(1/\sqrt{ \varepsilon})$이다.

## Backtracking line search
가속(acceleration)을 사용할 때 Backtracking line search를 하는 복잡한 방법들도 있지만, 여기에서 좀 더 간단한 방법을 알아보자.
 
먼저 $β <1, t_0 = 1$로 고정한다. 그리고, $k$번째 반복에서 $t = t_{k-1}$로 시작을 한다. (Gradient descent에서는 $t=1$로 시작을 하는데 accelerated proximal gradient method에서는 이전 단계의 step size부터 시작한다는 점을 유의하라.) 

> $$g(x^+) > g(v) +\nabla g(v)^T(x^+ − v) + \frac{1}{2t} \lVert x+ −v \rVert_2^2$$

그리고 위 수식을 만족하는 동안 $t = βt$를 줄이고, $x^+ = \text{prox}\_t(v − t \nabla g(v))$를 갱신한다. 그 외에는 $x^+$를 유지한다.

#### Convergence Theorem
동일한 가정 하에서 같은 성능을 얻을 수 있다.

>**Accelerated proximal gradient method**는 backtracking line search에 대해 다음 식을 만족한다. Step size는 $t_{\text{min}} = \text{min}\\{1,\beta/L\\}$이다.
> \begin{align}
f(x^{(k)})−f^{\star} ≤ \frac{2 \lVert x(0) −x^{\star} \rVert_2^2 }{ t_{min} (k + 1)^2}, \space t_{\text{min}} = \text{min}\\{1,β/L\\} \\\
\end{align}

</br> </br>

# 09-05-03 Example _ FISTA

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>
이 절에서는 Accelerated proximal gradient method의 예제로서 **FISTA**를 살펴볼 것이다.  **FISTA**는 **ISTA**(Iterative Soft-thresholding Algorithm)의 accerated version이라고 할 수 있다.

## FISTA (Fast Iterative Soft-thresholding Algorithm)
이전에 정의했던 Lasso problem을 기억해보자. $y \in \mathbb{R}^n$, $X \in \mathbb{R}^{n \times p}$일 때, lasso criterion은 다음과 같이 정의되었다.


> $$min_\beta \frac{1}{2} \lVert y−X\beta \rVert_2^2 + \lambda \lVert \beta \rVert_1$$

그리고, ISTA의 정의도 기억해 보자.  $S_\lambda (·)$는 vector soft-thresholding일 떄 Proximal gradient update가 다음과 같이 정의되었었다. ([09-01 Proximal gradient descent](https://wikidocs.net/19032) 참조)
> $$\beta^{(k)} = S_{\lambda t_k} (\beta^{(k−1)} + t_kX^T(y − X\beta^{(k−1)})), k = 1,2,3,...$$

이 식에 acceleration을 적용하면 $\beta$ 대신에 $v$를 계산해서 proximal gradient update를 한다.
> $$v = \beta^{(k−1)} + \frac{k − 2}{k + 1} (\beta^{(k−1)} − \beta^{(k−2)})$$
> $$β(k) = S_{\lambda t_k} (v + t_kX^T(y−Xv) ), k = 1,2,3,...,$$

다음 그림은  lasso regression에 FISTA를 적용한 결과로 100개의 instance에 대해 실행하였다.
<center>
![](https://wikidocs.net/images/page/19403/FISTA.png)

**[Fig1] Lasso Regresssion : 100 instances (with $n$ = 100, $p$ = 500) [3]**
</center>

다음 그림은  lasso logistic regression에 FISTA를 적용한 결과이다.

<center>
![](https://wikidocs.net/images/page/19403/FISTA2.png)

**[Fig2] Lasso Logistic Regression : 100 instances ($n$ = 100, $p$ = 500) [3]**
</center>


100가지의 샘플을 토대로 Lasso regression, lasso logistic regression 에 대해 평균을 낸 결과, $k$값이 증가할수록 FISTA 기법이 훨씬 더 빠르게 수렴하는 것을 확인할 수 있다.</br>




</br> </br>

# 09-05-04 Is acceleration always useful

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>
Acceleration은 매우 효과적인 속도 향상의 도구일 수 있다. 하지만 항상 사용하는 것이 좋을까?

## 성능 향상에 도움이 되지 않는 경우
실제로 **Warm start**를 적용할 때 acceleration을 사용하면 속도가 향상되지 않을 수 있다.
예를 들어, 파라미터를 튜닝하면서 lasso problem을 푼다고 가정해 보자.

> $$\lambda_1 > \lambda_2 > ... > \lambda_r $$

* $\lambda_1$에 대해 문제를 풀 때, $x^{(0)} = 0$로 초기화를 하고 해 $\hat{x}(\lambda_1)$를 저장해둔다. </br>
* $\lambda_j$에 대해 문제를 풀 때, $\lambda_{j−1}$에 대해 저장된 해로 $x^{(0)} = \hat{x} (\lambda_{j−1})$와 같이 초기화를 한다. </br>


$\lambda$값이 충분히 튜닝된 경우 proximal gradient descent는 가속 없이도 좋은 성능으로 실행된다. 이 경우 가속을 하게 되면 성능을 저하시키지는 않지만 성능 향상에 크게 도움이 되지는 않는다.

## 성능이 저하되는 경우
어떤 경우에는 acceleration을 사용하면 성능을 저하될 수도 있다. 예를 들어 backtracking에 acceleration을 사용할 경우가 그런 경우이다. Matrix completion problem의 proximal gradient 업데이트에 backtracking을 할 경우를 고려해보자.

> $$B^+ = S_\lambda ( B + t (P_\Omega(Y ) − P^\bot (B) ) )$$

여기서 $S_\lambda$는 matrix soft-thresholding operator로 SVD를 실행한다.

* $t$를 감소시키면서 backtracking을 할 때마다 generalized gradient $G_t (x)$를 계산해야 하는데 이는 내부적으로 행렬 SVD 계산을 포함하는 $\text{prox}\_t (x)$의 계산을 의미한다. 이는 성능을 약화시키는 원인이 된다.

* 또한, acceleration은 prox로 전달하는 argument를 변경한다. Matrix completion을 위해 $x-t \nabla g (x)$ 대신 $ v-t \nabla g (v)$를 사용하게 되는데, $v$를 계산하면서 행렬이 더 이상 low rank가 아니게 바뀔 수 있어서 SVD 연산이 더 느려질 수 있다.

> $B−\nabla g(B) = \underbrace{P_\Omega(Y)}\_{\text{sparse}} + \underbrace{P_\Omega^\bot (B)}\_{\text{low rank}}$ ⇒ **fast SVD**

> $V−\nabla g(V) = \underbrace{P_\Omega(Y)}\_{\text{sparse}} + \underbrace{P_\Omega^\bot (V)}\_{\text{not necessarily low rank}}$ ⇒ **slow SVD**

따라서, matrix completion에서는 acceleration과 backtracking line search 방식을 사용하게 되면 오히려 좋지 않다.

</br> </br>

# 10 Duality in Linear Programs

</br> </br>

 이번 장에서부터는 최적화 이론에서 큰 비중을 차지하는 duality에 대해서 살펴본다. 최적화 관점에서 duality를 간단히 말하자면, 하나의 최적화 문제를 primal problem과 dual problem 두 가지 시각으로 볼 수 있다는 개념이다. 

이 장에서는 특히 linear program에 대한 duality를 알아본다. 일반적인 convex 문제에 바로 적용하기보다는 linear program에 적용함으로써 primal problem에서 dual problem을 유도하고, 이 둘의 관계가 어떻게 이루어지는지, 또한 특정한 조건 하에 어떤 성질을 가지는지 정리해보고자 한다. 

</br> </br>

# 10-01 Lower Bounds in Linear Programs

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>
## Example 1 : Constraint에 objective function이 포함된 형태
주어진 convex 문제에 대하여 최적값의 lower bound(하한) 값 B를 찾고자 한다고 하자.
>$$
>\begin{align}
>B \leq \min_{x} f(x).
>\end{align}
>$$

특히 linear program의 lower bound를 생각해보자. 간단한 케이스에서부터 일반화된 형태까지 차례로 살펴본다.
첫 번째로, 가장 간단한 형태의 LP 문제를 예시로 들면
>$$
>\begin{align}
>&\min_{x, y}  
>& &{x+y} \\\\
>&\text{subject to} 
>& &{x + y \geq 2}\\\\
>& & &{x, y \geq 0.}\\\\
>\end{align}
>$$

위의 문제는 constraint에 이미 objective function의 lower bound를 포함하므로 쉽게 $B=2$임을 알 수 있다.

나아가 constraint에 lower bound가 포함되어 있지 않은 경우를 살펴보자.

## Example 2 : Constraint들의 Linear combination으로 objective function이 표현 가능한 형태(1)
>$$
>\begin{align}
>&\min_{x, y}  
>& & {x+3y} \\\\
>&\text{subject to} 
>& &{x + y \geq 2}\\\\
>& & &{x, y \geq 0.}\\\\
>\end{align}
>$$

$x,\, y$가 feasible하다면, 세 constraint에 scalar 값을 곱해 더하거나 빼더라도 세 constraint를 그대로 만족한다. 따라서, 위와 같은 LP 문제가 있다면, constraint에 scalar 값을 곱해 더하거나 빼는 과정, 즉 constraint들의 선형 결합(linear combination)으로 objective function에 대한 표현이 가능하고, 그 결과로 $B$를 알 수 있다. 

>$$
>\begin{align}
>& &{x + y \geq 2}\\\\
>&{+} &{0x \geq 0}\\\\
>&{+} &{2y \geq 0}\\\\
>&{=} &{x + 3y \geq 2}\\\\
>\\\\
>& &{\text{Lower bound}\\ B = 2.}
>\end{align}
>$$

좀 더 일반화하여 임의의 변수를 적용하여 objectvie function을 나타내면 다음과 같다.
>$$
>\begin{align}
>&\min_{x, y}  
>& &{px+qy} \\\\
>&\text{subject to} 
>& &{x + y \geq 2}\\\\
>& & &{x, y \geq 0.}\\\\
>\end{align}
>$$

두 번째 예시와 동일하게, constraint에 대하여 각각 scalar 값 a, b, c를 곱하면, 이 셋의 선형 결합으로 objective function에 대한 표현이 가능하다.
>$$
>\begin{align}
>& &{a(x+y) \geq 2a} \\\\
>&{+} &{bx \geq 0} \\\\
>&{+} &{cy \geq 0} \\\\
>&{=} &{(a+b)x+(a+c)y \geq 2a} \\\\
>\\\\
>& &{\text{Lower bound} \\ B=2a, \\\\
>\text{for any satisfying a,b,c below}}\\\\
>& &{a + b = p}\\\\
>& &{a + c = q}\\\\
>& &{a,b,c \geq 0.}\\\\
>\end{align}
>$$

lower bound가 위에서처럼 2a임을 만족하기 위해서는, scalar 값을 곱하는 과정에서 부등호가 바뀌어선 성립하지 않기 때문에, $a, b, c$가 양수라는 조건과 scalar 값의 합이 obejctive function과 동일하다는 조건인 $a+b = p$, $a+c = q$라는 조건을 만족해야만 한다.

위와 같이 얻은 lower bound 결과를 최대화하는 것으로 새로운 최적화 문제를 정의할 수 있다. 이때 lower bound를 만족하게 하는 조건들이 이 문제에서의 constraint가 된다. 

>$$
>\begin{align}
>&\max_{a, b, c}  
>& &{2a} \\\\
>&\text{subject to} 
>& &{a + b = p}\\\\
>& & &{a + c = q}\\\\
>& & &{a, b, c \geq 0}\\\\
>\end{align}
>$$

위의 원 LP문제를 primal LP라 부르고, primal LP에서의 lower bound를 최대화하는 것으로 최적화 문제를 재정의한 형태를 dual LP라고 부른다. 이 때, dual 문제의 optimization variable의 개수는 primal 문제에서의 constraint의 개수와 같다는 것을 유념하자.

>$$
>\begin{align}
>\text{Primal LP}\qquad
>&\qquad \min_{x, y}  &{px+qy} \\\\
>&\qquad \text{subject to} &{x + y \geq 2}\\\\
>&\qquad &{x, y \geq 0}\\\\
>\\\\
>\\\\
>\text{Dual LP}\qquad
>&\qquad \max_{a, b, c}  &{2a} \\\\
>&\qquad \text{subject to} &{a + b = p}\\\\
>&\qquad &{a + c = q}\\\\
>&\qquad &{a, b, c \geq 0}\\\\
>\end{align}
>$$

## Example 2 : Constraint들의 Linear combination으로 Objective function이 표현 가능한 형태(2)
마지막 예시로  constraint의 부등호가 반대로 되어있고, 등호가 포함 되어있는 형태를 살펴보자.

>$$
>\begin{align}
>&\min_{x, y}  &{px+qy} \\\\
>&\text{subject to} &{x \geq 0}\\\\
>& &{y \leq 1}\\\\
>& &{3x + y = 2}\\\\
>\\\\
>& &{ax \geq 0}\\\\
>&{+} &{-by \geq -b}\\\\
>&{+} &{3cx + cy = 2c}\\\\
>&{=} &{(a+3c)x+(-b+c)y \geq 2c-b}
>\\\\
>\\\\
>& &{\text{Lower bound} \\ B=2c-b, \\\\
>\text{for any satisfying a,b,c below}}\\\\
>& &{a + 3c = p}\\\\
>& &{-b + c = q}\\\\
>& &{a,b \geq 0}\\\\
>\end{align}
>$$

이때, c는 등호의 양변에 곱해진 scalar 값으로 어떤 값을 곱해도 무방하다.

결과적으로, dual LP를 다음과 같이 정의할 수 있다.
>$$
>\begin{align}
>&\qquad \max_{a, b, c}  &{2c-b} \\\\
>&\qquad \text{subject to} &{a + 3c = p}\\\\
>&\qquad &{-b + c = q}\\\\
>&\qquad &{a, b \geq 0}\\\\
>\end{align}
>$$

</br> </br>

# 10-02 Duality in general LPs

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

[10-01](https://wikidocs.net/19931)에서 단일 차원의 변수의 LP 문제에 대한 primal, dual을 살펴보았다. 10-02에서는 general form(일반형)을 가지는 LP에 대한 dual을 살펴보고자 한다.

LP의 general form은 다음과 같다.

$c\in\mathbb{R}^{n},\, A\in\mathbb{R}^{m\times n},\, b\in\mathbb{R}^{m},\, G\in\mathbb{R}^{r\times n},\, h\in\mathbb{R}^{r}$ 라 주어졌을 때,
>$$
>\begin{align}
>&\min_{x} &c^{T}x\\\\
>&\text{subject to} &Ax = b\\\\
>& &Gx \leq h.\\\\
>\end{align}
>$$

앞 10-01의 예시와 동일하게, constraint 개수와 동일한 수의 dual variable $u, v$를 정의하고,
constraint와 각 dual variable의 곱의 합으로 dual 문제의 objective function을 정의하고, constraint를 정의할 수 있다.  
>$$
>\begin{align}
>& &u^{T}(Ax-b) = 0\\\\
>&{+} &v^{T}(Gx-h)\leq 0\\\\
>&{=} &u^{T}(Ax-b) + v^{T}(Gx-h)\leq 0.\\\\
>\end{align}
>$$

등호에 대한 dual variable $u$는 조건이 없고, $v$는 부등호에 대한 dual variable이기 때문에 양수라는 조건이 추가됨을 기억하자.
마지막 식을 정리하여 primal LP의 objective function을 나타내면, dual LP가 된다.
>$$
>\begin{align}
>u^{T}(Ax-b) + v^{T}(Gx-h)\leq 0 \\\\
>\underbrace{(-A^{T}u-G^{T}v)^{T}}_{=c^{T}}x\geq-b^{T}u-h^{T}v \\\\
>\text{Lower bound is} -b^{T}u-h^{T}v \\\\ 
>\text{for } x \text{ primal feasible, and any u, v satisfies,} \\\\
>c = -A^{T}u-G^{T}v \\\\
>v\geq 0. \\\\
>\end{align}
>$$

즉, $c = -A^{T}u-G^{T}v$ 일 때, primal의 optimal value는 $-b^{T}u-h^{T}v$의 하한을 가진다.

결과적으로, dual LP는 다음과 같이 정의할 수 있다.
>$$
>\begin{align}
>&\max_{u,v} &-b^{T}u-h^{T}v \\\\
>&\text{subject to} &c = -A^{T}u-G^{T}v \\\\
>& &v\geq 0.
>\end{align}
>$$




</br> </br>

# 10-03 Max flow and min cut

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Linear program의 duality에 대한 예시로 max flow min cut 문제에 대해 살펴보고자 한다.

## Directed Graph, Condition of flow
<center>
![](https://wikidocs.net/images/page/20588/max_flow.png)</br>
**[Fig 1] Directed Graph[3]**</br>
</center>

위와 같이 방향이 있는(directed) graph $G = (V, E)$가 있고, vertex i와 vertex j를 잇는 edge, $(i,j)\in E$, 즉 i에서 j로 흐르는 flow(유량)를 $f_{ij}$라고 하자. 각 edge에는 capacity, 즉 흐를 수 있는 최대 flow가 정해져있다. 이를 $c_{ij}$라 하자. 

쉬운 예시로, source(s)에서 나오는 어떤 flow가 sink(t)로 흘러나가는 과정을 그래프로 나타낸 것이라 이해할 수 있다. 도시 배수/송전 계획, 물자 수송 등 다양한 문제에 적용될 수 있는 그래프 형태이다.

여기서 flow는 3가지 조건을 만족한다.

1. $f_{ij}$는 항상 0과 같거나 큰 양수이다 : $f_{ij} \geq 0,\, (i,j)\in E$
2. $f_{ij}$는 edge에 정해져 있는 최대 flow, 즉 capacity(한계 용량) $c_{ij}$보다 작아야 한다 : $f_{ij}<c_{ij}, \, (i,j)\in E$
3. source(flow가 나오는 지점, s) 또는 sink(flow가 나가는 지점, t)을 제외한 vertex k에 대해서, k로 들어가는 flow의 총량과 k에서 나오는 flow의 총량은 같다 : $\sum_{(i,k)\in E}f_{ik} = \sum_{(k,j)\in E}f_{kj}, \, k\in V\backslash{s,t}$

## Relationship between Max flow and Min cut problem(1)
위처럼 정의된 graph와 flow에 대하여 대표적으로 알려진 두 가지 문제, max flow 문제, min cut 문제와 이 둘의 관계에 대해 살펴볼 것이다. 

결론부터 말하자면, max flow 문제는 LP 문제이고, min cut 문제는 integer program인데, max flow 문제의 dual은 min cut 문제를 LP relaxation한 것과 동일한 문제형태를 갖는다.

>$$
>\begin{align}
>\text{Value of max flow} \leq \text{dual LP of max flow = Optimal value for LP relaxed min cut}\leq \text{Capacity of min cut}\\\\
>\end{align}
>$$

이 페이지에서는 dual과 relaxation의 역과정(LP 문제에 제약 조건을 추가하여, integer program으로 변환)으로 다음과 같은 부등호 관계를 보일 것이다, 여기선 다루지 않지만, 실제론 이 세 결과가 모두 같다. 

이를 max flow min cut theorem이라 부르며, 네트워크의 최대 flow는 cut의 최소 capacity와 같다는 정리이다. 

좀 더 일반화하여 보면, 특정 조건에서 primal 문제와 dual 문제의 optimal value가 동일한 값을 가지는 경우가 있는데 이때를 strong duality 관계에 있다고 한다. 

LP 문제에서는 두 primal, dual 문제 모두가 infeasible한 경우를 제외하고는 strong duality를 가진다. 이에 대한 내용은 11장에서 다루게 된다.

먼저 두 가지 문제에 대하여 살펴보고, max flow 문제에서 dual을 유도하고, 이 dual 문제에서 문제에 특정 조건을 추가함으로써(relaxation의 역과정) min cut 문제로 변환 됨을 보인다.

## Max flow problem
Max flow problem이란 위 조건을 만족하는 그래프에 대해서 s에서 t로 흘러가는 flow의 최댓값을 찾는 문제이다.

>$$
>\begin{align}
>&\text{Max flow problem}\qquad
>& &\max\_{f\in {\mathbb{R}^{|E|}}}  &{\sum\_{(s,j)\in E} f\_{sj}}    \\\\
>& & &\text{subject to} &{f\_{ij}\geq 0,\,f\_{ij}\leq c\_{i,j}\,\, \text{for all }(i, j)\in E}\\\\
>& & & &{\sum_{(i, k)\in E}f_{ik}=\sum_{(k,j)\in E}f_{kj}}\,\, \text{for all }k\in V \backslash \\{s,t\\}.\\\\
>\end{align}
>$$

## Min cut problem
<center>
![](https://wikidocs.net/images/page/20588/min_cut.png)</br>
**[Fig 2] Graph Cut Example[3]**</br>
</center>

  Min cut 문제는 graph의 전체 vertex를 그림에서처럼 색칠된 영역, 색칠되지 않은 영역 두 집합에 나눠서 속하게 하는데, 한 집합에는 source를 포함하고, 나머지 집합에는 sink를 포함하되, 나머지 vertex는 임의로 두 집합 중 하나에 속하게 나눈다(여기서는 source를 포함하는 집합을 A, sink를 포함하는 집합을 B라고 할 것이다),이때 집합 A에서 B로 진행하는 방향의 edge들의 capacity 총합을 cut이라고 정의한다. 
  
  다시 말해, cut은 source와 sink를 각각 다른 partition에 존재하게 구분하는 graph의 vertex partition이다. min cut은 graph가 주어졌을 때 이 cut의 최솟값을 찾는 문제이다. 일반적으로 정의되는 min cut 문제의 경우 directed graph 상에서 정의되기 때문에, 항상 source $x_{s}=1$, sink $x_{t}=0$을 만족한다. 아래의 문제 정의에는 이 부분이 생략되어 있다.

>$$
>\begin{align}
>\text{Min cut problem}\qquad
>&\qquad \min_{b\in {\mathbb{R}^{|E|}},\, x\in{\mathbb{R}^{|V|}} } &{\sum_{(i,j)\in E} b_{ij}c_{ij}}\\\\
>&\qquad \text{subject to} &{b_{ij} \geq x_{i}-x_{j}} \\\\
>&\qquad  &{b_{ij},\,x_{i},\,x_{j}\,\in \\{ 0,1 \\} }\\\\
>&\qquad &\text{for all }i, j.\\\\
>\end{align}
>$$

  직관적으로 생각하면, max flow 문제는 source에서 나오는 flow의 최댓값을 찾는 문제이고, min cut 문제는 source 집합에서 sink 집합으로 보낼 수 있는 전체 capacity의 최솟값을 찾는 문제이므로, 어렴풋이나마 이 둘의 문제가 비슷함을 알 수 있다.

## Dual of Max flow problem
Max flow의 최적화 문제에 대하여 dual을 구해보자.

  먼저 constraint에 대하여 dual variable을 순서대로 $a_{ij}, b_{ij}, c_{k}$로 정의한다.  max 문제의 dual의 경우 upper bound를 minimize하는 형태가 될 것이므로, 정리한 형태가 primal objective의 upper bound를 가지는 primal objective $\leq$ sth의 형태가 되어야 한다. 따라서, constraint에 대하여 $f_{ij}$의 upper bound를 찾는 방향으로 식을 정리한다.
이를 정리하면 다음과 같다.

>$$
>\begin{align}
>\sum_{(i,j)\in E} {\Big(-a_{ij}f_{ij}+b_{ij}(f_{ij}-c_{ij})\Big)} + \sum_{k \in V\backslash \\{s,t\\}} x_{k}\Big( \sum_{(i,k)\in E} f_{ik} - \sum_{(k,j)\in E } f_{kj} \Big)\leq 0\\\\
>\text{for any }a_{ij}, b_{ij} \geq 0, (i, j)\in E, \text{ and } x_{k}, k\in V \backslash \\{s,t\\}.
>\end{align}
>$$

primal LP의 목적함수와 관계된 $f$항을 좌항으로, 그 나머지는 우항으로 정리한다. 

그 다음, 이 과정에서 우리가 원하는 것은 primal LP의  상한(upper bound)이므로, 좌항의 $f$앞에 곱해져 있는 항들의 결과가 primal LP의 목적함수와 일치하도록 만드는 식을 찾는다. 

이 식을 만족하도록 하는 조건이 dual LP에서의 constraint가 된다. 

즉, $f_{ij}$의 식이 $\sum_{(s,j)\in E}f_{sj}$에서만 1을 갖고 나머지가 0이 되도록 정리한다.

이 과정을 조금 더 자세히 보면 다음과 같다.

>$$
>\begin{align}
>\sum_{(i,j)\in E}{\Big((b_{ij}-a_{ij})f_{ij}\Big)}+\sum_{k\in V\backslash \\{s,t\\}}{x_{k}\Big(\sum_{(i,k)\in E}{f_{ik}}-\sum_{(k,j)\in E}{f_{kj}}\Big)} \leq \sum_{(i,j)\in E}b_{ij}c_{ij}.
>\end{align}
>$$

여기서, 우리는 $i=s$인 경우에 좌항의 결과가 $\sum_{(s,j)\in E}f_{sj}$이 되고, 다른 경우에 대해서는 0이 되게 식을 정리하는 것이 목표이다. 

두 번째 시그마의 x항의 k는 source와 sink에 대해서는 포함되지 않음을 유의하면서, $i=s, j\neq t$인 경우, $i\neq s, j=t$인 경우, $i\neq s,j\neq t$가 아닌 경우로 나누어 좌항을 정리할 수 있다.

>$$
>\begin{align}
>&\text{Case 1. } i = s, j \neq t.&\\\\ 
>&\text{$x_{k}$에 곱해진 항에 대해서 $k=j$인 경우를 제외하고는, flow의 세번째 조건에 의해 소거된다.}\\\\ 
>&\text{따라서, 두 번째 항의 $x$항에 대한 시그마를 다음과 같이 정리할 수 있다.}  \\\\
>&=\sum_{(s,j)\in E}{\Big((b_{sj}-a_{sj})f_{sj}\Big)}+x_{j}\sum_{(s,j)\in E}{f_{sj}}+\sum_{k\in V\backslash \\{s,t,j\\}}{x_{k}\Big(\underbrace{\sum_{(s,k)\in E}{f_{sk}}-\sum_{(k,j)\in E}{f_{kj}}}\_{=0}\Big)} \\\\
>&=\sum_{(s,j)\in E}{\Big(b_{sj}-a_{sj}+x_{j}\Big)f_{sj}}, \\ j \in V \backslash \\{s, t\\},\\\\
>\, \\\\
>\, \\\\
>&\text{Case 2. } i \neq s, j = t.&\\\\ 
>&\text{$x_{k}$에 곱해진 항에 대해서 $k=i$인 경우를 제외하고는, flow의 세 번째 조건에 의해 소거된다.}\\\\ 
>&\text{따라서, 두 번째 항의 $x$항에 대한 시그마를 다음과 같이 정리할 수 있다.}  \\\\
>&=\sum_{(i,t)\in E}{\Big((b_{it}-a_{it})f_{it}\Big)}-x_{i}\sum_{(i,t)\in E}{f_{it}}+\sum_{k\in V\backslash \\{s,t,i\\}}{x_{k}\Big(\underbrace{\sum_{(i,k)\in E}{f_{ik}}-\sum_{(k,t)\in E}{f_{kt}}}\_{=0}\Big)} \\\\
>&=\sum_{(i,t)\in E}{\Big(b_{it}-a_{it}-x_{i}\Big)f_{it}}, \\ i \in V\backslash \\{s, t\\},\\\\
>\, \\\\
>\, \\\\
>&\text{Case 3. } i \neq s, j \neq t.&\\\\ 
>&\text{$x_{k}$에 곱해진 항에 대해서 $k=i, k=j$인 경우를 제외하고는, flow의 세 번째 조건에 의해 소거된다.}\\\\ 
>&\text{따라서, 두 번째 항의 $x$항에 대한 시그마를 다음과 같이 정리할 수 있다.}  \\\\
>&=\sum_{(i,j)\in E}{\Big((b_{ij}-a_{ij})f_{ij}\Big)}+x_{j}\sum_{(i,j)\in E}{f_{ij}}-x_{i}\sum_{(i,j)\in E}{f_{ij}}+\sum_{k\in V\backslash \\{s,t,i,j\\}}{x_{k}\Big(\underbrace{\sum_{(i,k)\in E}{f_{ik}}-\sum_{(k,j)\in E}{f_{kj}}}\_{=0}\Big)} \\\\
>&=\sum_{(i,j)\in E}{\Big(b_{ij}-a_{ij}+x_{j}-x_{i}\Big)f_{ij}}, \\ i, j \in V \backslash \\{s,t\\}. \\\\
>\end{align}
>$$

primal LP의 목적함수는 이 세 가지 케이스 중 첫 번째 케이스에 $b_{sj}-a_{sj}+x_{j}$ 항이 1이 되는 경우와 일치한다. 또한 나머지 케이스에 대해서는 곱해진 항을 0으로 만들어 주어 primal LP와 해당 식을 일치시켜주어, 좌항이 objectvie function, 우항이 upper bound인 형태를 완성할 수 있다.

>$$
>\begin{align}
>&b_{sj}-a_{sj}+x_{j} = 1\\\\
>&b_{it}-a_{it}-x_{i} = 0\\\\
>&b_{ij}-a_{ij}+x_{j}-x_{i} = 0\\\\
>&\text{Result in,} \\\\
>&\sum_{(s,j)\in E}{f_{sj}} \leq \sum_{(i,j)\in E}{b_{ij}c_{ij}}.
>\end{align}
>$$

따라서, dual 문제는 dual variable $a, b, x$에 대하여 위에서 구한 upper bound(dual LP의 목적 함수)의 최소값을 찾는 형태이고, 이 최소값이 가장 좋은 upper bound가 된다. 일종의 dummy variable인 $a$를 조건을 유지하며 소거한다. 추가로, directed graph에서의 flow 조건을 추가하여 source에서 sink로 flow가 흘러간다는 조건을 constraint에 명시하면, 식은 다음과 같다.
>$$
>\begin{align}
>&\min_{b\in {\mathbb{R}^{|E|}},\, x\in{\mathbb{R}^{|V|}}}  &{\sum_{(i,j)\in E} b_{ij}c_{ij}} \\\\
>&\text{subject to} &{b_{ij}+x_{j}-x_{i}\geq 0 \,\, \text{for all } (i,j)\in E}\\\\
>& &{b\geq 0, x_{s}=1,x_{t}=0}.\\\\
>\end{align}
>$$

## Dual LP to Integer program
이제 이 dual LP가 min cut 문제의 LP relaxation과 동일해짐을 보이고자 한다. 따라서 위 문제에 조건을 추가함으로써 integer program으로 바꾸는 과정을 거칠 것이다.
  위 dual LP 문제에 대해서, $x$는 vertex가 s, t일 때를 제외하고 정의되어 있지 않은 형태이다. 따라서 문제의 scope를 좁히고자, s, t를 제외한 나머지의 vertex가 s 또는 t의 그룹에 속한다는 조건을 추가하여 문제를 해결해보자. 다시 말하면, 모든 vertex가 0 또는 1의 그룹에 속한다고 가정하자. 이는 min cut의 vertex partition을 정하는 것과 동일하다.
>$$
>\begin{align}
>x_{i}\in\\{0,1\\}\,\,\,\text{for all }i\in V.\\\\
>\end{align}
>$$

1에 속하는 그룹을 집합 A로 정의하고, 0에 속하는 그룹을 집합 B로 정의하자. 또한 source(s)는 A에, sink (t)는 B에 속한다고 정하자.

위와 같이 정하면, $b_{ij}$는 집합 A에서 집합 B로 향하는 edge에 대해서는 1, 나머지에 대해선 0을 가지는 일종의 on/off의 역할을 한다. 

이를 정리하면 다음과 같다.

>$$
>\begin{align}
>\text{Let } A= \\{ i:x_{i}=1 \\} ,\, B= \\{ i:x_{i}=0 \\} \\\\
\text{note that  } s \in A, \,t \in B, \text{ and  }b_{ij}\geq x_{i}-x_{j} \,\,\,\, \text{for }\,(i,j) \in E, \,\, b\geq 0,\\\\
>\end{align}
>$$
>$$
>\begin{align}
>\text{Simply say, } \qquad \begin{cases} b_{ij}=1 \qquad \text{if } i\in A, j\in B\\\\
>0 \qquad\qquad \text{otherwise}.\end{cases}
>\end{align}
>$$

위의 결과는 min cut 문제의 formulation과 동일하다.

## Relationship between Max flow and Min cut problem(2)
즉, max flow problem의 dual problem은, min cut 문제에서 $x$의 s, t를 제외한 vertex를 0, 1로 포함된다는 조건을 없앤(relaxation)한 결과이다. optimal value of max flow $\geq$ dual LP(upper bound)이고, 이 relaxation은 optimization variable의 domain scope를 확장시키므로, optimal value LP relaxed min cut $\geq$ capacity of min cut의 관계를 가진다. 이 세 가지 결과를 정리하면 아래의 결과를 얻을 수 있다.
>$$
>\begin{align}
>\text{Value of max flow} \leq \text{Dual LP of max flow = Optimal value for LP relaxed min cut}\leq \text{Capacity of min cut}\\\\
>\end{align}
>$$

이 세 가지 결과가 모두 같음에 대해서는 max-flow min-cut theorem[11]
에서, max flow min cut 문제를 푸는 대표적인 알고리즘으로는 Ford-Fulkerson algorithm[12]을 참고할 수 있다.

</br> </br>

# 10-04 Another Perspective on LP duality

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>
앞에서 다룬 duality의 경우, LP에 대하여, primal 문제의 constraint에 dual variable을 곱하고, 이들의 선형 결합(linear combination)을 구한 뒤, 정리하여 primal의 objective function을 분리해내어 bound를 구하는 형태였다. 분리된 나머지 항(아래 수식의 something)이 primal 문제의 bound 역할을 하였다. 즉, dual 문제의 objective function이 되고, 수식 전개 과정에서 만들어진 조건들이 dual 문제의 constraint가 되었다.
이 일부 과정(위의 내용 중 primal objective function을 분리해 내어 bound를 구하는 부분)을 수식으로 적어보면 다음과 같다.

>\begin{align}
>&\min_{x} &f(x)\\\\
>&\text{subject to} &Ax = b\\\\
>& &Gx \leq h\\\\
>\end{align}

>$$
>\begin{align}
>& &\text{for any }u,\, v\geq 0,\\\\
>& &u^{T}(Ax-b) = 0\\\\
>&{+} &v^{T}(Gx-h)\leq 0\\\\
>&{=} &u^{T}(Ax-b) + v^{T}(Gx-h)\leq 0\\\\
>&{\approx} &f(x)+\text{something}. \\\\
>\end{align}
>$$

하지만 linear program이 아닌 최적화 문제의 경우, 대부분이 constraint의 선형 결합으로 objective function을 표현할 수 없다. 

이 장에서는 좀 더 보편적으로 통용되는 문제(모든 convex, 대부분의 non-convex)에 적용가능한 duality의 관점에 대해 살펴본다. lagrangian으로 불리는 이 방법으로 LP의 duality를 구하고, 좀 더 자세한 논의에 대해서는 11장에서 살펴보자.

위에 서술되었던 primal LP 문제에 대하여 선형 결합 형태까지의 식을 보게 되면, 다음과 같은 관계를 알 수 있다.
>$$
>\begin{align}
>c^{T}x\geq c^{T}x+\overbrace{u^{T} \underbrace{(Ax-b)} _ {=0}+\underbrace{v^{T}} _ {\geq 0} \underbrace{(Gx-h)} _ {\leq 0}} ^ {\leq 0} := L(x,u,v).
>\end{align}
>$$

부등호의 우항은 조건들에 의하여 좌항보다 작거나 같은 값을 가진다. 또한 이 식을 $L(x, u, v)$라는 x, u, v에 대한 함수로 정의한다.
여기서 primal LP의 constraint를 만족하는 집합(primal feasible set)을 C라 칭하면, 다음과 같은 관계를 알 수 있다.

>$$
>\begin{align}
>C =  \\{ x: Ax=b, Gx\leq h \\},
>\end{align}
>$$
>$$
>\begin{align}
>f^{*}=\min_{x\in C} f(x) \geq \min_{x\in C}L(x,u,v)\geq \min_{x}L(x,u,v):=g(u,v).\\\\
>\end{align}
>$$

다시말해서, $g(u,v)$는 어떤  u나 $v\geq0$을 만족하는 $v$에 대해서 $f^{\*}$의  Lower bound가 된다.
이때 $g(u,v)$로 결정되는 Lower bound 값을 살펴보자.

>$$
>\begin{align}
g(u,v) = \min_{x} c^{T}x+u^{T}(Ax-b) + v^{T}(Gx-h) \\\\
= \min_{x} (c+A^{T}u+G^{T}v)^{T}x - b^{T}u-h^{T}v \\\\
\begin{cases}= -b^{T}u-h^{T}v \qquad &\text{if }\\ c = -A^{T}u-G^{T}v \\\\
-\infty \qquad &\text{otherwise}.
\end{cases}
>\end{align}
>$$


식에서도 알 수 있다시피, $c = -A^{T}u-G^{T}v$를 만족하지 않을 때엔 $x$항으로 인하여 $-\infty$의 값을 갖는다.
우리는 $f^{\*}$에 가장 가까운 Lower bound를 찾길 원하므로, $g(u, v)$를 Maximize(최대화)하는 값을 찾고자 한다. 이는 $c = -A^{T}u-G^{T}v$를 만족할때의 값인 $-b^{T}u-h^{T}v$이고, 이는 우리가 첫 번째 방법으로 구했던 Dual LP와 일치한다.

>$$
>\begin{align}
>f^{*} \geq g(u,v), \qquad \text{provided } v \geq 0\\\\
>\text{find the biggest lowerbound  } g(u,v)\\\\
>\max_{u,v} g(u,v)\\\\
>\text{s.t. }v \geq 0. 
>\end{align}
>$$

이 방법은 LP형태가 아닌 다른 형태의 최적화 문제에 대해서도 적용 가능하다.

</br> </br>

# 10-05 Matrix Games

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

이번 장에서는 게임이론에서의 primal LP, dual LP의 예시인 mixed strategies for matrix games에 대해서 살펴본다. 설정은 두명의 player, J와 R, 그리고 payout matrix $P$가 있다고 하자.
## Game Setup
<center>
![](https://wikidocs.net/images/page/19936/matrix_game.png)
**[Fig 1] Game Setup[3]**</br>
</center>

payout matrix는 만약 J가 전략 $i$를 선택하고(row), R이 전략 $j$를 선택했을때(column), J가 R에게 주어야 하는 보상의 크기이다($P_{ij}$). 하지만 이 값이 양수라면, J가 R에게 해당 matrix의 크기만큼의 보상을 주고, 음수라면 R이 J에게 해당 matrix의 크기만큼의 보상을 주게 된다. 

이러한 setting을 zero-sum setting이라고도 하는데, R이 받게 될 혹은 지불해야할 보상을 $r_{R}$, J의 보상을 $r_{J}$라 할 때, 매 게임에서 보상의 결과는 $r_{R} = - r_{J}$이고, 두 보상의 총합은 항상 0이 된다.  

또한 두 명의 player가 모두 mixed strategies를 사용한다고 가정한다, mixed stratigies는 각자의 선택이 특정한 확률분포를 따른다는(혹은 특정한 확률분포에서 sampling 된다는) 가정이다. 

>$$
>\begin{align}
>x : P(\text{J chooses i}) = x_{i}, \qquad i=1,...m\\\\
>y : P(\text{R chooses j}) = y_{j}, \qquad j=1,...n.\\\\
>\end{align}
>$$

서로가 서로의 mixed strategy, 즉 확률분포를 알고 있다면, 각자는 각자가 얻을 것으로 기대하는 payout, 즉 expected payout을 계산할 수 있다.

>$$
>\begin{align}
>\sum_{i=1}^{m}\sum_{j=1}^{n}x_{i}y_{j}P_{ij} = x^{T}Py.\\\\
>\end{align}
>$$

payout matrix의 부호가 J가 R에게 주는 크기로 정의되어 있음을 생각할 때, J는 R에게 최대한 주지 않으려 하기 때문에, 이 expected payout을 최소화(minimize)하려 할 것이고, R은 J에게서 최대한 받고 싶어하기 떄문에, 이 expected payout을 최대화(maximize)하려 할 것이다.

이제 두 player의 입장에서 각자가 상대의 mixed strategy를 고려하여, 이 expected payout을 최대화(R의 입장) 혹은 최소화(J의 입장)하려는 관점을 살펴보고, 서로가 서로를 optimal하게 행동하는 전제하에, 두 입장에서 유도되는 optimal strategy를 구하고, 결과적으론 Von Neumman's minimax theorem에 의해 두 결과가 같다는 것을 확인할 것이다.

## Minimizing Expected Payout : J's Perspective
먼저 R이 J의 strategy $x$를 알고 있다고 가정하자. R은 expected payout $x^{T}Py$를 maximize하고자 할 것이다. 

>$$
>\begin{align}
>\max\\{x^{T}Py : y\geq0, 1^{T}y = 1\\} = \max_{i=1,...n}(P^{T}x)_{i}.\\\\
>\end{align}
>$$

이때 R은 식의 내용처럼 $(P^{T}x){i}$ 중 가장 큰 값을 갖는 i(row index)를 찾게되고, 이 i에 대응되는 $y{i} $를 1로 가지고 나머지의 row index에 대해선 0을 가지는 strategy가 R에게 있어서 expected payout을 maximize하는 strategy일 것이다.

R이 위처럼 최적으로 행동할 것을 알고 있을 때, J의 최적의 strategy는 밑의 식을 만족하는 distribution $x$일 것이다.

>$$
>\begin{align}
>& \min_{x}
>& &\max_{i=1,...n} (P^{T}x)_{i}\\\\
>& \text{subject to}
>& & x\geq 0, 1^{T}x =1.\\\\
>\end{align}
>$$

Convex function의 maximization 또한 convex function이 된다.  이를 첫 번째 관점의 문제 정의라고 칭할 것이다. 또한 이 최적화 문제의 해를 optimal expected payout $f^{\*}\_{1}$이라고 정하자. 또 하나 유념할 점은 게임참가자, 즉 player들이 모두 최적으로 행동한다는 가정이 기본적인 형태의 게임이론 formulation에서 가정이 된다.

## Maximizing Expected Payout : R's Perspective
두 번째 관점으로 J가 R의 strategy $y$를 알고 있다고 가정하자. J는 expected payout을 minimize하고자 할 것이다.

>$$
>\begin{align}
>\min \\{x^{T}Py : x\geq0, 1^{T}x = 1\\} = \min\_{j=1,...n}(Py)\_{j}.\\\\
>\end{align}
>$$

같은 논리로, J가 위처럼 최적으로 행동할 것을 알고 있을 때 R의 최적의 strategy는 밑의 식을 만족하는 distribution $y$이다.

>$$
>\begin{align}
>& \max_{y}  
>& & \min_{j=1,...m} (Py)\_{j}\\\\
>&\text{subject to}
>& &y\geq 0, 1^{T}y =1.\\\\
>\end{align}
>$$

위와 마찬가지로 이를 두 번째 관점의 문제 정의라고 칭하고, 이 최적화 문제의 해를 $f^{\*}\_{2}$ 라고 하자. player R이 이 expected payout을 maximize하고자 하기 때문에, 첫 번째, 즉, R이 J의 strategy를 미리 알고 있다는 가정 하에 결정되는 expected payout $ f^{\*}\_{1} $이 두 번째 가정보다 더 크거나 같은 값을 가질 것이라 쉽게 예상할 수 있다. ($f^{\*}\_{1}\geq f^{\*}\_{2}$)
  
## Von Neumann's minimax theorem
  하지만,  Von Neumann's minimax theorem에 따르면 $ f^{\*}\_{1} = f^{\*}\_{2} $가 된다. 실제 minimax theorem은 다음과 같다. 
  
>$$
>\begin{align}
>&\text{Let } X\subset \mathbb{R}^{N} \text{ and }Y\subset \mathbb{R}^{m} \text{ be compact convex sets. }\\\\
> &\text{If } f:X\times Y\rightarrow \mathbb{R} \text{ is a continuous function that is convex-concave, i.e.}\\\\
> &\qquad f(\cdot, y): X\rightarrow\mathbb{R} \text{ is convex for fixed }y, \text{ and}\\\\
> &\qquad f(x, \cdot): Y\rightarrow\mathbb{R} \text{ is concave for fixed }x.\\\\
> &\text{Then we have that} \\\\ 
>&\min_{x\in X} \max_{y\in Y} f(x,y) = \max_{y\in Y} \min_{x\in X} f(x,y).\\\\
>\end{align}
>$$

해당 내용의 증명은 생략한다.

## Proof of each perspective having Primal and Dual relationship
  이제 위 두 가지 관점의 경우에 대한 expected payout이 LP 문제로써 서로 primal, dual 관계이고, Von Neumman's minimax theorem에 의하여 두 결과가 같다는 점을 이용하여, strong duality를 만족함을 보이고자 한다.
  
먼저 첫 번째 관점의 문제를 다음과 같이 reformulate 할 수 있다.

>\begin{align}
>& \min_{x} \max_{i=1,...m} 
>& &(P^{T}x)_{i}\\\\
>&\text{subject to } 
>& &x\geq 0, 1^{T}x = 1\\\\
>\end{align}
>\begin{align}
>\Leftrightarrow{} \\\\
>& \min\_{x,t}
>& & t \\\\
>&\text{subject to } 
>& &x\geq0, 1^{T}x = 1, P^{T}x \preceq t. \\\\
>\end{align}

$t$를 $P^{T}x$의 항들 중 가장 큰 값과 같게 만들어주는 문제로 refomulate 하였다.

이제 여기에 앞서 배운 duality의 두 번째 방법인 lagragian을 구하고,  lagrange dual function $g$를 구하면, 

>$$
>\begin{align}
>L(x, t, u, v, y) &= t-u^{T}x+v(1-1^{T}x)+y^{T}(P^{T}x-t1)\\\\
>g(u, v, y) &= \min_{x,t} \quad L(x, t, u, v, y)\\\\
>&= \begin{cases} v \qquad &\text{if } 1-1^{T}y = 0, Py-u-v1=0\\\\
-\infty \qquad &\text{otherwise.} \end{cases}
>\end{align}
>$$

$u$는 slack variable이므로, 이를 제거하고 식을 정리하면 다음과 같다.

>$$
>\begin{align}
>\max_{y,v} \qquad \quad & v\\\\
>\text{subject to }\quad & y\geq0, 1^{T}y = 1\\\\
>& Py\geq v.
>\end{align}
>$$

이는 두 번째 관점의 문제의 primal LP이다. 따라서 두 관점은 dual 관계에 있고 두 문제의 optimal value는 같으므로, strong duality가 성립한다.

일반적으로 LP문제에서는, 향 후의 내용에서 다루지만, primal과 dual 중 하나만 feasible하다면 strong duality가 성립한다.

</br> </br>

# 11 Duality in General Programs

</br> </br>

### Review: duality in linear program

$c \in \mathbb{R}^n$, $A \in \mathbb{R}^{m \times n}$, $b \in \mathbb{R}^m$, $G \in \mathbb{R}^{r \times n}$, $h \in \mathbb{R}^r$ 일 때, 

##### Primal LP: 
>
$$
\begin{alignat}{1}
min_{x} & \quad c^T x   \\\\ 
  s.t.   & \quad Ax = b  \\\\
         & \quad Gx \leq h 
\end{alignat}
$$


##### Dual LP: 
>
$$
\begin{alignat}{1}
max_{u,b} & \quad -b^T u - h^T v   \\\\
         s.t. & \quad - A^T u - G^T v = c  \\\\
             & \quad v \geq 0 
\end{alignat}
$$

#### Explanantion 1: 

모든 $u$와 $v \geq 0$, 그리고 primal feasible $x$에 대해 다음이 성립된다. 
>
$$
\begin{equation}
u^T (Ax-b) + v^T(Gx-h) \leq 0
\end{equation}
$$

즉,

>
$$
\begin{equation}
(-A^Tu - G^Tv)^T x \geq -b^Tu - h^T v
\end{equation}
$$

위 관계에 의해, 만약, $c=-A^Tu - G^Tv$이면, primal 최적해에 대한 lower bound를 얻을 수 있다. 


#### Explanation 2: 

모든 $u$와 $v \geq 0$, 그리고 primal feasible $x$에 대해,

>
$$
\begin{equation}
c^T x \geq c^T x + u^T (Ax-b) + v^T (Gx -h) := L(x,u,v)
\end{equation}
$$

그래서, 만약 $C$가 primal feasible set이고, $f^*$가 primal 최적해라면, 

>
$$
\begin{equation}
f^* \geq \min_{x \in C} L(x,u,v) \geq \min_x L(x,u,v) := g(u,v)
\end{equation}
$$

다시말해, $g(u,v)$는 $f^*$에 대한 lower bound이다. 

>
$$
g(u,v) =
\begin{cases}
-b^T u - h^T v & \text{if $c=-A^Tu - G^T v$} \\\\
-\infty            & \text{otherwise} 
\end{cases}
$$

두번째 설명은 첫번째와 같은 dual을 가져오지만, completely general하고 (convex하지 않은 문제를 포함한) 임의의 모든 최적 문제에 적용된다.

</br> </br>

# 11-1 Lagrangian

</br> </br>

다음은 다음 최적화 문제에 대한 Lagrangian 형태를 살펴본다. 여기서, 최적화 문제는 반드시 convex일 필요는 없다.

>
\begin{alignat}{1}
\min_x & \quad f(x)  \\\
s.t.   & \quad h_i(x) \leq 0, i = 1,\dots,m \\\
       & \quad l_j(x) = 0, j=1,\dots,r 
\end{alignat}


이 때, Lagrangian은 아래와 같이 정의한다. 
>
$$
\begin{equation}
L(x,u,v) = f(x) + \sum_{i=1}^m u_i h_i(x) + \sum_{j=1}^r v_j l_j(x) 
\end{equation}
$$
여기서, $u \in \mathbb{R}^m$, $v \in \mathbb{R}^r$, $u \geq 0$ (implicitly, $L(x,u,v) = - \infty$ for $u <0$). 

위 Lagrangian에서, $h_i(x) \leq 0$, $l_j(x)=0$ 이므로, 

>
$$
\begin{equation}
L(x,u,v) =  f(x) + \sum_{i=1}^{m} u_i \underbrace{h_i(x)}\_{\leq 0} + \sum_{j=1}^r v_j \underbrace{l_j(x)}\_{=0} \leq f(x)
\end{equation}
$$

즉, Lagrangian은 다음의 중요한 성질을 갖는다. 
>
모든, $u \geq 0$, $v$에 대해, $f(x) \geq L(x,u,v) \text{ at each feasible $x$}$


예를 들면, 아래 그림에서, 
<center>
![](https://wikidocs.net/images/page/20579/dual-gen_6.PNG)</br>
**[Fig 1] Example of Lagrangian[1]**</br>
</center>

* Solid line은 함수 $f$를 의미
* Dashed line은 함수 $h$를 의미함. 여기서 feasible set 대략 $[-0.46,0.46]$임
* 각 Dotted line은 $u \geq 0$, $v$에 대한 함수 $L(x,u,v)$를 의미


</br> </br>

# 11-2 Lagrange dual function

</br> </br>

$C$를 primal feasible set 이라 하고, $f^\*$는 primal 최적값이라 하자. 모든 $x$에 대해 $L(x,u,v)$를 최소화하면 다음과 같은 lower bound를 갖는다. 

>
\begin{equation}
f^* \geq \min_{x \in C} L(x,u,v) \geq \min_x L(x,u,v) := g(u,v)
\end{equation}

여기서, $g(u,v)$를 Lagrange dual function이라고 하며 임의의 dual feasible $u\geq 0$, $v$에 대해 $f^\*$의 lower bound를 제공한다. 

예를 들면, 아래 그림에서
<center>
![](https://wikidocs.net/images/page/20583/dual-gen_7.png)</br>
**[Fig 2] Example of Lagrangian dual function[1]**</br>
</center>

* Dashed horizontal line은 함수 $f^\*$을 의미
* Dual 변수는 $\lambda$이며 (위 수식에서 $u$에 해당)
* Solid line은 $g(\lambda)$를 의미



## Example: Quadratic Program
####  1) Positive Definite ($Q \succ 0$)
다음 quadratic 문제를 가정하자.  (여기서 $Q \succ 0$)
>
\begin{alignat}{1}
\min_x  & \quad \frac{1}{2}x^T Q x + c^T x \\\\
       s.t. & \quad Ax = b, \\\\
            & \quad x \geq 0
\end{alignat}

그러면, 

##### Lagrangian: 
>
$$
\begin{equation}
L(x,u,v) = \frac{1}{2}x^T Q x + c^T x - u^Tx + v^T (Ax-b)
\end{equation}
$$

##### Lagrangian dual function: 

위 식에서, Lagrangian 함수를 최소화하기 위해, $x$에 대해서 미분을 해서 미분값이 $0$이 되는 $x^\*$를 찾는다.  
\begin{equation}
Qx - (c-u+A^T v) = 0, 
\end{equation}
즉, 
\begin{equation}
Qx = (c-u+A^T v) 
\end{equation}
이 때, $Q$는 positive definite하므로 역행렬이 존재하므로, $x^\*$를 찾으면, $x^\* = Q^{-1}(c + u + A^Tv)$ 임을 알 수 있다. 따라서, $x^\*$를 Lagrangian 함수에 대입을 하면, 아래를 얻을 수 있다. 

\begin{alignat}{1}
& (c - u + A^T v)^T (Q^{-1})^T Q Q^{-1}(c - u + A^T v) - (c - u + A^T v)^T Q^{-1} (c - u + A^T v) - b^T v \\\
= & (c - u + A^T v)^T Q^{-1}(c - u + A^T v) - (c - u + A^T v)^T Q^{-1} (c - u + A^T v) - b^T v \\\
= & -\frac{1}{2} (c-u+A^Tv)^T Q^{-1} (c-u+A^T v) - b^T v
\end{alignat}

따라서, 
>
$$
\begin{equation}
g(u,v) = \min_x L(x,u,v) = -\frac{1}{2} (c-u+A^Tv)^T Q^{-1} (c-u+A^T v) - b^T v
\end{equation}
$$

모든 $u \geq 0$과 $v$에 대해, 이것은 primal 최적값 $f^*$에 대한 lower bound에 해당된다. 

#### 2) Positive Semidefinite ($Q \succeq 0$)
위와 같은문제이나, 이번에는 $Q \succeq 0$ 이면,  

##### Lagrangian: 
>
$$
\begin{equation}
L(x,u,v) = \frac{1}{2}x^T Q x + c^T x - u^Tx + v^T (Ax-b)
\end{equation}
$$

##### Lagrangian dual function:
$Q$가 positive definite 할 때 처럼, 아래 식을 만족하는 $x^\*$를 찾아야 한다. 
\begin{equation}
Qx = (c-u+A^T v) 
\end{equation}
이 때, $Q$는 positive semi-definite이므로 역행렬이 존재하지 않을 수 있다. 따라서, 다음의 두가지 경우를 고려해야 한다.  

(1) $c-u+A^T v \in col(Q)$. 이 경우는 위 $Qx = (c-u+A^T v)$를 만족시키는 $x^\*$가 존재하는 것을 의미하며, 이는 generalized inverse $Q^+$를 이용하여 찾을 수 있다. (참고로, generalized inverse는 Moore-Penrose Pseudo Inverse로 $Q^+ = (Q^TQ)^{-1}Q^T)$이다.)

(2) $c-u+A^T v \notin col(Q)$. 이 경우는 위 $Qx = (c-u+A^T v)$를 만족시키는 $x^\*$가 존재하지 않는 것을 의미하며, 즉 $L(x,u,v)$가 최소값을 갖도록 하는 $x^\*$를 갖지 않는 다는 것은 $L(x,u,v)$의 최소값이 $-\infty$임을 의미함.  

위 두 경우로부터, Lagrangian dual function을 아래와 같이 정리할 수 있다. 
>
$$
g(u,v) = 
\begin{cases}
-\frac{1}{2} (c-u+A^T v)^T Q^{+} (c - u + A^T v) - b^T v  & \text{if $c-u+A^T v \perp \text{null}(Q)$} \\\\
-\infty  & \text{otherwise}
\end{cases}       
$$

모든 $u\geq 0$, $v$, $c-u+A^Tv \perp \text{null}(Q)$에 대해서, $g(u,v)$는 $f^*$에 대한 nontrivial lower bound 이다. 

## Example: Quadratic Program in 2D

예를 들면, 아래 그림에서 $f(x_1,x_2)$는 0보다 큰 값들을 변수($x\ge0$)로 갖는 이차함수이며, dual 함수 $g(u_1,u_2)$는 0보다 큰 값을 변수($u\ge0$)로 갖는 이차함수이다
<center>
![](https://wikidocs.net/images/page/20583/dual-gen_10.png)</br>
**[Fig 3] Example of quadratic program in 2D**</br>
</center>

* 파란점은 최적 dual value 이고, 빨간점은 최적 primal value 이다. 
* Dual 함수 $g(u)$는 0보다 큰 모든 $u$에 대해서, $f^\*$에 대한 lower bound를 제공한다. 
* Dual 함수 $g(u)$의 가장 큰 값이 정확히 $f^\*$값과 일치함을 보인다. 

</br> </br>

# 11-3 Lagrange dual problem

</br> </br>

다음과 같이 문제가 주어졌다고 하자.  
>
\begin{alignat}{1}
\min_x & \quad f(x)  \\\\
s.t.   & \quad h_i(x) \leq 0, i=1,\dots,m  \\\\
       & \quad l_j(x) = 0, j=1,\dots,r
\end{alignat}

Dual function $g(u,v)$는 모든 $u\geq 0$와 $v$에 대해 $f^* \geq g(u,v)$를 만족한다. 따라서, 모든 feasible한 $u$, $v$에 대해서 $g(u,v)$를 최대화함으로써 가장 좋은 lower bound를 구할 수 있다. 이를 Lagrange dual problem 이라 한다. 
>
\begin{alignat}{1}
\max_{u,v} & \quad g(u,v)   \\\\
           s.t. & \quad u \geq 0
\end{alignat}

여기서, dual 최적값을 $g^\*$라고 하면 $f^\* \geq g^\*$이다. 이를 weak duality라 한다. 이 성질은 primal 문제가 convex가 아니어도 항상 성립한다. 또한, dual problem은 primal problem이 convex가 아니더라도 항상 convex optimizaton problem이 된다.

정의에 의해 $g$는 $(u,v)$에 대해 concave 하고, $u>0$는 convex 제약조건이다. 따라서, dual 문제는 concave maximization 문제에 해당된다. 

>
\begin{alignat}{1}
g(u,v) & = \min_x \\{ f(x) + \sum_{i=1}^m u_i h_i(x) + \sum_{j=1}^r v_j l_j(x) \\}  \\\\ 
        & = - \underbrace{\max_x \\{ -f(x) - \sum_{i=1}^m u_i h_i(x) - \sum_{j=1}^r v_j l_j(x) \\}}_{\text{pointwise maximum of convex functions in $(u,v)$}}
\end{alignat}




## Example: nonconvex quartic minimization
다음 함수 $f(x)=x^4 - 50 x^2 + 100 x$를 $x \geq -4.5$에 대해 최소화 해 보자.  

<center>
![](https://wikidocs.net/images/page/20584/dual-gen_13.png)</br>
**[Fig 4] Example of nonconvex quadratic minimization**</br>
</center>

이 때, Dual 함수 $g$는 아래와 같다. 
>
$$
\begin{equation}
g(u) = \min_{i=1,2,3} \{F_i^4(u) - 50 F_i^2(u) + 100 F_i(u) \}
\end{equation}
$$

여기서, $i=1,2,3$에 대해, 
>
$$
\begin{alignat}{1}
F_i(u) = & \frac{- a_i}{12\cdot 2^{1/3}} \left( 432(100-u)-(432^2(100-u)^2 - 4\cdot 1200^3)^{1/2} \right )^{1/3} \\\\ 
           & - 100 \cdot 2^{1/3} \frac{1}{\left( 432(100-u)-(432^2(100-u)^2 - 4\cdot 1200^3)^{1/2} \right )^{1/3}}
\end{alignat}
$$

그리고, $a_1=1, a_2 = (-1+i\sqrt{3})/2, a_3 = (-1-i \sqrt{3})/2$이다.

함수만 보면 $g$가 concave인지 알기어렵지만, duality의 convexity 하에  $g$가 concave라는 것을 알 수 있다.


</br> </br>

# 11-4 Strong duality

</br> </br>

어떤 문제에서 $f^\* = g^\*$를 만족하면 이를 **strong duality**라 한다. **Slater 조건**은 strong duality를  만족하기 위한 충분조건이다. 

## Slater 조건: 
만약 primal 문제가 convex이고  strictly feasible한 $x \in \mathbb{R}^n$가 하나 이상 있으면 strong duality가 만족된다.
>
\begin{equation}
h_1(x)<0,\dots,h_m(x)<0, \text{ and } l_1(x) = 0,\dots,l_r(x) = 0,
\end{equation}

Important Refinement : Strict inequality는 affine인 경우에는 만족하지 않아도 된다.
## Example: Support Vector Machine Dual 
$y \in \\{-1,1\\}^n$, $X \in \mathbb{R}^{n \times p}$ ($X$의 열은 $x_1, ..., x_n$)라고 할 때, SVM(Support Vector Maine) 문제는 다음과 같이 정의된다.

>
\begin{alignat}{1}
\min_{\beta, \beta_0, \xi} & \quad \frac{1}{2}\parallel\beta\parallel\_2^2 + C \sum_{i=1}^n \xi_i   \\\\
                                  s.t. & \quad \xi_i \geq 0, i=1,\dots,n   \\\\
                                       & \quad y_i(x_i^T \beta + \beta_o) \geq 1 - \xi_i, i=1,\dots,n
\end{alignat}


Dual 변수, $v, w \geq 0$를 사용하여 Lagrangian을 정의해보자.
>
\begin{equation}
L(\beta,\beta_0,\xi,v,w) = \frac{1}{2} \parallel\beta\parallel\_2^2 + C\sum_{i=1}^n \xi_i - \sum_{i=1}^n v_i \xi_i +  \sum_{i=1}^n w_i (1-\xi_i - y_i(x_i^T\beta + \beta_o))
\end{equation}


$\beta, \beta_0, \xi$에 대해 최소화해서 다음과 같은 Lagrangian dual function을 구할 수 있다.
>
$$
g(v,w) = 
\begin{cases}
-\frac{1}{2} w^T\tilde{X}\tilde{X}^T w +  1^Tw, &\text{if $w=C1-v, w^Ty=0$} \\\\
-\infty, &\text{otherwise}
\end{cases}
$$

여기서 $\tilde{X}=\text{diag}(y) X$임. 따라서, SVM dual 문제는 (slack 변수 $v$를 제거하면) 아래와 같이 된다. 
>
$$
\begin{alignat}{1}
\max_{w}  & \quad -\frac{1}{2} w^T\tilde{X}\tilde{X}^T w +  1^Tw \\\\
     s.t. &  \quad 0 \leq w \leq C1, w^Ty = 0
\end{alignat}
$$

Primal 문제가 slater조건을 만족하므로 strong duality가 성립된다. (즉, Objective function이 convex이고 inequality constraint가 $\beta, \beta_0, \xi$에 대해 affine이므로 slater 조건을 만족한다.)





</br> </br>

# 11-5 Duality gap

</br> </br>

Primal 문제가 $x$에서 $f(x)$의 값를 갖고, dual 문제는 $u,v$에서 $g(u,v)$의 값을 갖는다고 할 때, 두 값의 차이 $f(x) - g(u,v)$를 duality gap이라 한다. 

한편, 위 feasible한 값들은 다음의 관계를 항상 만족하므로
>
$$
\begin{equation}
f(x) - f^* \leq f(x) - g(u,v), 
\end{equation}
$$

duality gap이 $0$이 되면, $x$는 primal 문제의 최적 해가 되고, $u,v$는 dual 문제의 최적 해가 된다. 

또한, Duality gap이 $f(x)-g(u,v) \leq \epsilon$ 이면, $f(x) -f^* \leq \epsilon$ 인 것을 의미하므로,  

iterative 방식으로 문제를 푸는 알고리즘에서, duality gap을 stopping 판별 조건으로 사용 할 수도 있게 된다.  

</br> </br>

# 12 KKT conditions

</br> </br>

Primal problem이 convex일 때, Karush–Kuhn–Tucker (KKT) conditions는 zero duality gap인 primal & dual optimal points에 대한 충분조건이 된다. 또한 primal problem의 목적함수 및 제약함수들이 미분 가능하며 strong duality를 만족할때는 primal & dual optimal points에서 항상 KKT conditions를 만족하게 된다. KKT conditions는 최적화에서 상당히 중요한 위치를 차지하고 있다. 이 조건은 몇몇 특수한 문제들을 해석적으로(analytically) 풀 수 있게끔 해주기도 하며, 또한 컨벡스 최적화의 많은 알고리즘들이 KKT conditions를 풀기 위한 방법으로 해석되기도 한다 [1]. 이번 장에서는 KKT conditions의 정의와 성질을 알아보고 이에 기반한 몇 가지 예시를 살펴보도록 한다.

*여담으로* KKT conditions는 본래 Harold W. Kuhn과 Albert W. Tucker에 의해 1951년에 세상에 알려졌고, 당시에는 KT (Kuhn-Tucker) conditions로 불렸다. 그리고 이후 학자들에 의해 이 문제의 necessary conditions가 1939년 William Karush의 석사 논문에 의해 다루어졌음이 발견되었는데, 그 때부터 Karush의 이름이 포함되어 KKT (Karush–Kuhn–Tucker) conditions로 불리게 된다 [3].

</br> </br>

# 12-01 Karush-Kuhn-Tucker conditions

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

다음과 같은 일반적인 최적화 문제가 주어졌다고 하자.

>$$
>\begin{align}
>    &\min\_{x} &{f(x)} \\\\
>    &\text{subject to } &{h\_i(x) \le 0, \text{ } i=1,\dots,m} \\\\
>    & &{l\_j(x) = 0, \text{ } j=1,\dots,r}.\\\\
>\end{align}
>$$

이때 **Karush–Kuhn–Tucker (KKT) conditions** 또는 **KKT conditions**는 다음과 같은 조건들로 구성된다 [3].

* $0 \in \partial \big( f(x) + \sum\_{i=1}^{m} \lambda\_i h\_i(x) + \sum\_{j=1}^{r} \nu\_j l\_j(x) \big)$ (Stationarity): $\lambda, \nu$를 고정했을 때 $x$에 대한 subdifferential이 0을 포함하고 있음을 의미한다. 
* $\lambda\_i \cdot h\_i(x) = 0 \text{ for all } i$ (Complementary Slackness):  $\lambda\_i$와 $h\_i$ 중 적어도 하나의 값은 0을 가짐을 의미한다.
* $h\_i(x) \le 0, l\_j(x) = 0 \text{ for all } i, j$ (Primal Feasibility): Primal problem의 제약조건들에 대한 만족여부를 나타낸다.
* $\lambda\_i \ge 0 \text{ for all } i$ (Dual Feasibility): Dual problem의 제약조건들에 대한 만족여부를 나타낸다.

## Sufficiency
Convex인 primal problem에 대해 KKT conditions를 만족하는 $x^\star, \lambda^\star, \nu^\star$가 있을때, 다음의 과정은 $x^\star, \lambda^\star, \nu^\star$가 zero duality gap의 primal & dual solutions임을 보인다.

>$$
>\begin{align}
>    g(\lambda^\star, \nu^\star) &= \min\_x L(x, \lambda^\star, \nu^\star) \\\\
>                                &= L(x^\star, \lambda^\star, \nu^\star) \\\\
>                                &= f(x^\star) + \sum\_{i=1}^m \lambda\_i^\star h\_i(x^\star) + \sum\_{j=1}^r \nu\_j^\star l\_j(x^\star) \\\\
>                                &= f(x^\star)
>\end{align}
>$$

1. $L(x,\lambda^\star,\nu^\star) = f(x) + \sum\_{i=1}^{m} \lambda\_i^\star h\_i(x) + \sum\_{j=1}^{r} \nu\_j^\star l\_j(x)$는 convex 함수다. (convex함수들의 합) 
2. $0 \in \partial \big( f(x^\star) + \sum\_{i=1}^{m} \lambda\_i^\star h\_i(x^\star) + \sum\_{j=1}^{r} \nu\_j^\star l\_j(x^\star) \big)$이므로 $\min\_x L(x, \lambda^\star, \nu^\star) = L(x^\star, \lambda^\star, \nu^\star)$이다.
3. Complementary slackness와 primal feasibility에 의해 $f(x^\star) + \sum\_{i=1}^m \lambda\_i^\star h\_i(x^\star) + \sum\_{j=1}^r \nu\_j^\star l\_j(x^\star) = f(x^\star)$이다.

## Neccessity
$x^\star, \lambda^\star, \nu^\star$가 zero duality gap(가령, Slater's condition을 만족)의 primal & dual solutions일때, 다음의 부등호들이 전부 등호가 되므로 이 문제에서 $x^\star, \lambda^\star, \nu^\star$는 KKT conditions를 만족하게 된다.
>$$
>\begin{align}
>    f(x^\star) &= g(\lambda^\star, \nu^\star) \\\\
>                   &= \min\_x  \big( f(x) + \sum\_{i=1}^{m} \lambda\_i^\star h\_i(x) + \sum\_{j=1}^{r} \nu\_j^\star l\_j(x) \big) \\\\
>                   &\le f(x^\star) + \sum\_{i=1}^m \lambda\_i^\star h\_i(x^\star) + \sum\_{j=1}^r \nu\_j^\star l\_j(x^\star) \\\\
>                   &\le f(x^\star)
>\end{align}
>$$

1. $f(x^\star) = g(\lambda^\star, \nu^\star)$는 zero duality gap을 의미한다.
2. $f(x^\star) + \sum\_{i=1}^m \underbrace{\lambda\_i^\star h\_i(x^\star)}\_{0} + \sum\_{j=1}^r \underbrace{\nu\_j^\star l\_j(x^\star)}\_{0} = f(x^\star)$를 만족하기 위해서는 complementary slackness와 primal feasibility를 만족해야 한다.
3. $f(x^\star) + \sum\_{i=1}^m \lambda\_i^\star h\_i(x^\star) + \sum\_{j=1}^r \nu\_j^\star l\_j(x^\star) = f(x^\star)$를 만족하면 위 전개의 모든 부등호는 등호가 된다.

## Putting it together
요약하자면 KKT conditions는:

* Zero duality gap의 primal & dual solutions에 대한 충분조건이다.
* Strong duality를 만족한다면 primal & dual solutions에 대한 필요조건이 된다.

즉, strong duality를 만족하는 문제에 대해 다음과 같은 관계가 성립한다.
>$$
>\begin{align}
>    x^\star, \lambda^\star, \nu^\star \text{ are primal and dual solutions} \\\\
>    \Leftrightarrow x^\star, \lambda^\star, \nu^\star \text{ satisfy the KKT conditions} \\\\
>\end{align}
>$$

</br> </br>

# 12-02 Example_ quadratic with equality constraints

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Equality constraint만을 가진 [quadratic program](https://wikidocs.net/17852)은 다음과 같다.
>$$
>\begin{align}
>    &\min\_{x} &&{(1/2)x^T P x + q^T x + r} \\\\
>    &\text{subject to} &&{Ax = b},\\\\
>&\text{where } P \in \mathbb{S}\_{+}^n \text{ and } A \in \mathbb{R}^{\text{p x n}}.
>\end{align}
>$$

위 문제는 convex이고 inequality constraint가 없으므로 이 문제는 Slater's condition을 만족한다 (Strong duality). 이때, primal & dual solutions가 $x^\star, \nu^\star$라고 하면 KKT conditions에 의해 아래의 조건들을 만족한다 [1].

* Stationarity: $Px^\star + q + A^T\nu^\star = 0$
* Complementary Slackness: Inequality constraint가 없으므로 고려하지 않아도 된다.
* Primal & dual feasibility: $Ax^\star = b$

위 조건들은 block matrix를 이용하여 간략하게 표현할 수 있으며, 이를 KKT matrix라고 부른다 [3].
> $$
> \begin{bmatrix}
>     P       & A^T  \\\\
>     A       & 0  \\\\
> \end{bmatrix}
> \begin{bmatrix}
>     x^\star  \\\\
>     \nu^\star  \\\\
> \end{bmatrix}
> =
> \begin{bmatrix}
>     -q  \\\\
>     b  \\\\
> \end{bmatrix}
> $$

이 matrix곱을 풀면 주어진 문제에 대한 primal & dual solutions를 구할 수 있다.

흥미로운 사실은 이 문제는 equality constrained problem에 대한 Newton step을 구하는 것과 같다고도 볼 수 있다는 것이다 [3]. $min\_x f(x) \text{ subject to } Ax = b$ 라는 문제에 대해 P, q, r을 다음과 같이 설정하면 quadratic program의 목적함수는 $f(x)$의 second-order Taylor expansion과 동일해진다.<br/>
> $P = \nabla^2 f(x^{(k-1)})$, $q = \nabla f(x^{(k-1)})$, $r = f(x^{(k-1)})$

</br> </br>

# 12-03 Example_ water-filling

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

다음과 같은 컨벡스 최적화 문제가 주어졌다고 하자.
>$$
>\begin{align}
>    &\min\_{x} &&{- \sum\_{i=1}^n log(\alpha\_i + x\_i)} \\\\
>    &\text{subject to} &&{x \succeq 0, 1^Tx = 1},\\\\
>&\text{where } \alpha\_i > 0.
>\end{align}
>$$

이 문제는 n개의 communication channels에 전력을 할당하는 문제이며, 정보이론(information theory)에서 대두되었다. 변수 $x\_i$는 i번째 채널에 할당되는 송신기의 출력을 나타내며, $log(\alpha\_i + x\_i)$는 해당 채널의 capacity 또는 communication rate를 나타낸다. 즉, 이 문제는 communication rate의 총합을 최대화하기 위해 각 채널에 얼마만큼의 전력을 할당해야 하는지 결정하기 위한 문제이다 [1].

Inequality constraint $x^\star \succeq 0$와 equality constraint $1^Tx^\star = 1$에 대한 Lagrange multipliers를 각각 $\lambda^\star \in \mathbb{R}^n$, $\nu^\star \in \mathbb{R}$라고 하자. 이때 주어진 문제에 대한 KKT conditions는 다음과 같다.
>$$
>x^\star \succeq 0, \text{    } 1^Tx^\star = 1, \text{    } \lambda^\star \succeq 0, \text{    } \lambda\_i^\star x\_i^\star = 0, \text{    } i = 1, \dots, n, \\\\
> -1 / (\alpha\_i + x\_i^\star) - \lambda\_i^\star + \nu^\star = 0,  \text{    } i= 1, \dots, n.
> $$

KKT conditions를 통해 얻은 수식들을 이용하면 $x^\star, \lambda^\star, \nu^\star$를 해석적으로(analytically) 구할 수 있다. 일단 $\lambda^\star$를 slack variable로 사용하여 위 수식에서 $\lambda^\star$를 제거한다.
>$$
>x^\star \succeq 0, \text{    } 1^Tx^\star = 1, \text{    } x\_i^\star(\nu^\star - 1 / (\alpha\_i + x\_i^\star)) = 0, \text{    } i = 1, \dots, n, \\\\
> \nu^\star \ge 1/(\alpha\_i + x\_i^\star),  \text{    } i= 1, \dots, n.
> $$

이는 stationarity와 complementary slackness에 의해 다음과 같이 정리된다.
> $$
> x\_i^\star = 
> \begin{cases}
> 1 / \nu^\star - \alpha\_i &\nu^\star < 1/\alpha\_i \ \\\\
> 0 &\nu^\star \ge 1/\alpha\_i\\\\
> \end{cases}
> = max\\{0, 1/\nu^\star - \alpha\_i \\}, \quad i = 1, \dots, n.
> $$

또한 조건 $1^T x^\star = 1$에 의해 $x\_i^\star, i = 1, \dots, n$은 합산하여 1이 된다.
> $$
> \sum\_{i=1}^n max\\{0, 1/\nu^\star - \alpha\_i \\} = 1.
> $$

위 등식의 좌항은 $1/\nu^\star$에 대한 piecewise-linear increasing function이므로 이 등식은 고정된 $\alpha\_i$에 대해 unique solution을 갖는다.

이 solution method를 일컬어 water-filling이라고 부른다. 이 문제는 $\alpha\_i$가 patch $i$에 대한 ground level이라고 할 때, 아래 그림과 같이 물의 높이가 $1/\nu^\star$가 되도록 각 영역에 물을 붓는 것으로 생각할 수 있다. 우리는 전체 물의 양이 1이 될 때까지 물을 붓도록 한다. 
<center>
![](https://wikidocs.net/images/page/20961/water-fill.png)<br/>
**[Fig1] Illustration of water-filling algorithm [1]**
</center>

</br> </br>

# 12-04 Example_ support vector machines

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Non-separable set에 대한 support vector machine 문제는 다음과 같다.

>$$
>\begin{align}
>    &\min\_{\beta, \beta\_0, \xi} &&{\frac{1}{2} \|\beta\|\_2^2 + C\sum\_{i=1}^n \xi\_i} \\\\
>    &\text{subject to} &&{\xi\_i \ge 0, \quad i = 1, \dots, n}\\\\
>    & && y\_i (x\_i^T \beta + \beta\_0) \ge 1 - \xi\_i, \quad i = 1, \dots, n,\\\\
>&\text{given } y \in \\{-1, 1\\}^n \text{ and } X \in \mathbb{R}^{n \times p}.
>\end{align}
>$$

주어진 문제의 두 inequality constraints에 대한 0 이상의 Lagrange multipliers를 각각 $v^\star, w^\star$이라 할때, Lagrangian function은 다음과 같다.
>$L(\beta, \beta\_0, \xi, v^\star, w^\star) = \frac{1}{2} \|\beta\|\_2^2 + C\sum\_{i=1}^n \xi\_i - \sum\_{i=1}^n v\_i^\star \xi\_i + \sum\_{i=1}^n w\_i^\star (1 - \xi\_i - y\_i ( x\_i^T \beta + \beta_0))$

위 Lagrangian function을 이용하여 이 문제가 KKT stationarity condition을 만족하게 하는 다음의 조건들을 구할 수 있다. (Lagrangian function을 $\beta, \beta\_0, \xi$에 대해 각각 미분하여 0이 되는 조건을 유도)
>$$
>0 = \sum\_{i=1}^n w\_i^\star y\_i, \quad \beta = \sum\_{i=1}^n w\_i^\star y\_i x\_i, \quad w^\star = C \cdot 1 - v^\star
>$$

또한 두 개의 inequality constraints에 대한 complementary slackness는 다음과 같다.
> $$
> v\_i^\star \xi\_i = 0, \quad w_i^\star (1 - \xi\_i - y\_i (x\_i^T \beta + \beta\_0)) =0, \quad 1 = 1, \dots, n.
> $$

즉, 최적점(optimality)에서 $\beta^\star = \sum\_{i=1}^n w\_i^\star y\_i x\_i$를 만족하며, $y\_i (x\_i^T \beta^\star + \beta\_0^\star) = 1 - \xi\_i^\star$일때 $w\_i^\star$는 nonzero가 되는데, 이런 지점  i를 **support points**라고 부른다.

* 어떤 support point i에 대해, $\xi\_i^\star = 0$이면 $x_i$는 hyperplane 위에 위치하게 되며 이때 $w\_i^\star \in (0, C]$이다.
* 어떤 support point i에 대해, $\xi\_i^\star \neq 0$이면 $x_i$는  hyperplane의 반대쪽에 위치하게 되며 이때 $w\_i^\star = C$다.
<center>
![](https://wikidocs.net/images/page/20962/svm.png)<br/>
**[Fig1] Illustration of support points with $\xi^\star \neq 0$  [3]**
</center>

SVM문제를 최적화 하기 전, non-support points를 걸러내는데 위 방법을 이용할 수 있다 (non-support points를 걸러냄으로써 계산 효율을 높일 수 있다). 사실 KKT conditions는 이 문제의 solution을 도출하기 위한 직접적인 역할을 하지는 않지만, 우리는 이를 통해 SVM 문제를 더 잘 이해하기 위한 직관을 얻을 수 있다 [3].

</br> </br>

# 12-05 Constrained and Lagrange forms

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

통계학과 기계학습에서는 종종 **constrained form**과 **Lagrange form** 사이를 오가곤 한다. Constrained form과 Lagrangian form을 다음과 같이 정의해보자.

#### Constrained Form (이하 (C))
>$$ 
>\min_x \: f(x) \quad \text{ subject to } h(x) \le t,\\\\
>\text{where } t \in \mathbb{R} \text{ is a tuning parameter.}
>$$

#### Lagrange Form (이하 (L))
>$$ 
>\min_x \: f(x) + \lambda \cdot h(x),\\\\
>\text{where } \lambda \ge 0 \text{ is a tuning parameter.}
>$$

$f, h$가 convex라고 가정할때, 두 문제가 동일한 solution을 도출하는 경우에 대해 알아보도록 하자.

1. **(C) to (L):** (C)가 strictly feasible (Slater's condition을 만족)하여 strong duality를 만족할 때, (C)의 solution인 $x^\star$에 대해 다음의 목적함수를 최소화하는 dual solution $\lambda^\star \ge 0$가 존재한다면 $x^\star$는 또한 (L)의 solution이다. <br/> $$f(x) + \lambda \cdot (h(x) - t)$$
2. **(L) to (C):** 만약 $x^\star$가 (L)의 solution이고, $t = h(x^\star)$인 (C)가 KKT conditions를 만족하면, $x^\star$는 또한 (C)의 solution이다. (L)의 KKT conditions를 만족하는 $\lambda^\star, x^\star$는 $t = h(x^\star)$인 (C)의 KKT conditions를 또한 만족하기 때문이다.


>**$\rightarrow$ (L)의 KKT conditions:**
> $$
> \begin{align}
> \nabla\_x f(x^\star) + \lambda^\star \nabla\_x h(x^\star) &= 0\\\\
> \lambda^\star &\ge 0\\\\
> \end{align}
> $$


>**$\rightarrow$ $t = h(x^\star)$인 (C)의 KKT conditions:**
> $$
> \begin{align}
> \nabla\_x f(x^\star) + \lambda^\star \nabla\_x h(x^\star) &= 0\\\\
> \lambda^\star &\ge 0\\\\
> \lambda^\star (\underbrace{h(x^\star) - h(x^\star)}\_{=0}) &= 0
> \end{align}
> $$


결론적으로 1과 2는 각각 다음과 같은 관계를 보인다.
<center>
![](https://wikidocs.net/images/page/20963/conclusion.png)
**[Fig1] Conclusion [3]**
</center>

그렇다면 어떤 상황에서 (C)와 (L)이 perfect equivalence를 보이게 될까?<br/>
가령, $h(x) \ge 0$ (예를 들어 norm), $t = 0$이고, $\lambda = \infty$인 경우에는 perfect equivalence를 보인다. 주어진 조건에 의해 (C)에서의 제약조건은 $h(x) = 0$이 되는데, $\lambda$를 $\infty$으로 설정하게되면 (L)에서 또한 동일한 제약조건($h(x) = 0$)을 거는 것과 같은 효과를 보인다. 

</br> </br>

# 12-06 Uniqueness in L1 penalized problems

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

다음의 $L1$ penalized linear regression 문제는 lasso problem이란 이름으로도 잘 알려져 있다.
>$$
>\hat{\beta} \in \text{argmin}\_{\beta \in \mathbb{R}^p} \frac{1}{2} \| y - X\beta \|^2\_2 + \lambda \|\beta\|\_1, \qquad \text{ --- (1) }\\\\
>\text{given } y \in \mathbb{R}^n, \text{ a matrix } X \in \mathbb{R}^{n \text{ x } p} \text{ of predictor variables, and a tuning parameter } \lambda \ge 0.
>$$

위 Lasso problem은 $rank(X) = p$일 때 strictly convex가 되면서 유일한 solution을 갖는다. 반면, $rank(X) < p$일때(strictly convex가 아닐때)는 무수히 많은 solution을 갖을 수도 있게된다 (Reference: [
Underdetermined system](https://en.wikipedia.org/wiki/Underdetermined_system)). - 참고로 변수(p)의 갯수가 관측(n)의 갯수보다 크다면, $rank(X)$는 반드시 $p$보다 작아진다.<br/>
흥미롭게도 어떤 특수한 경우에 대해서는 $X$의 차원에 상관없이 Lasso problem이 유일한 해를 가짐이 보장된다 [13].

>**Theorem:** 함수 $f$가 미분가능하며 strictly convex이고, $\lambda > 0$이며 $X \in \mathbb{R}^{n  \text{ x } p}$가 $\mathbb{R}^{np}$에 대한 어떤 continuous probability distribution을 따를 때, 다음 최적화 문제는 항상 유일한(unique) solution을 갖는다. 또한 그 solution은 많아봐야 $min\\{n,p\\}$만큼의 nonzero components로 구성된다. 이때, $X$의 차원에 대한 제약은 없다. (즉, p >> n일때도 유효)

## Basic facts and the KKT conditions

> **Lemma 1.** 임의의 $y, X, \lambda \ge 0$에 대해 lasso problem (1)은 다음과 같은 성질을 갖는다.
> 
> 1. 유일한 solution을 갖거나 혹은 무한히 많은 수의 solution을 갖는다.
> 2. 모든 lasso solution $\hat{\beta}$는 같은 $X\hat{\beta}$값을 갖는다.
>3. $\lambda > 0$일때, 모든 lasso solution $\hat{\beta}$는 같은 $l\_1$ norm을 갖는다 ($\|\hat{\beta}\|\_1$).

$$\text{ }$$

> **Proof.**<br/>
> 1. 만약 (1)이 두 개의 solution $\hat{\beta}^{(1)}$, $\hat{\beta}^{(2)}$를 가질때, 임의의 $0 < \alpha < 1$에 대해 $\alpha \hat{\beta}^{(1)} + (1 - \alpha) \hat{\beta}^{(2)}$ 또한 solution이 되므로 무수히 많은 solution이 존재하게 된다.<br/>
> 2. & 3. 두 개의 solution $\hat{\beta}^{(1)}$, $\hat{\beta}^{(2)}$가 있다고 가정해보자. 이때 optimal value를 $c^\star$라고 하면, 어떤 임의의 solution인 $\alpha \hat{\beta}^{(1)} + (1 - \alpha) \hat{\beta}^{(2)}$ ($0 < \alpha < 1$)에 대해 아래의 등식을 항상 만족해야만 한다.
>  $$\frac{1}{2} \| y - X(\alpha \hat{\beta}^{(1)} + (1 - \alpha) \hat{\beta}^{(2)}) \|\_2^2 + \lambda \| \alpha \hat{\beta}^{(1)} + (1 - \alpha) \hat{\beta}^{(2)} \|\_1 = \alpha c^\star + (1-\alpha) c^\star = c^\star$$
> 위 등식을 만족하기 위해서는 임의의 solution $\hat{\beta}$에 대해 $X\hat{\beta}$은 항상 같은 값을 가져야 하고, $\lambda > 0$일때 $\| \hat{\beta} \|\_1$ 값 또한 항상 같아야 한다.


다시 처음으로 돌아가, lasso problem (1)에 대한 KKT conditions는 아래와 같다.
>$$
>X^T (y - X\hat{\beta}) = \lambda \gamma, \qquad \text{ --- (2)} \\\\
>\gamma\_i \in 
> \begin{cases}
> \\{ sign(\hat{\beta\_i}) \\} & if \hat{\beta\_i} \neq 0 \\\\
> [-1, 1] & if \hat{\beta\_i} = 0,
> \end{cases}
> \text{for } i = 1, \dots, p. \text{ --- (3)} \\\\
> \text{Here } \gamma \in \mathbb{R}^p \text{ is called a subgradient of the function } f(x) = \|x\|\_1 \text{ evaluated at } x = \hat{\beta}.
>$$

즉, (1)의 solution인 $\hat{\beta}$는 어떤 $\gamma$에 대해 (2) 와 (3)을 만족한다. 

위에서 얻은 KKT conditions를 이용하여 lasso solution에 대한 조건을 좀 더 명시적인 형태로 변환해보도록 하자. 이후의 진행에서는 유도의 간결함을 위해 $\lambda > 0$를 가정하도록 한다. 우선 equicorrelation set $\mathcal{E}$을 다음과 같이 정의한다. $\mathcal{E}$는 $\hat{\beta}\_i \neq 0$인 모든 인덱스 $i$와 $\hat{\beta}\_j = 0$이면서 $|\gamma\_j| = 1$인 모든 인덱스 $j$를 원소로 가진 집합이다.
$$
\mathcal{E} = \\{ i \in \\{1, \dots, p \\}  : |X\_i^T (y - X\hat{\beta}) | = \lambda \\}. \qquad \text{ --- (4)}
$$

또한 equicorrelation sign $s$를 다음과 같이 정의한다. 여기서 $X\_\mathcal{E}$는 행렬 X에서 $i \in \mathcal{E}$인 column $i$ 외의 모든 column을 0 벡터로 교체한 행렬을 의미한다.
$$
s = sign(X^T\_\mathcal{E} (y -X\hat{\beta}). \qquad \text{ --- (5)}
$$

여기서 $\mathcal{E}, s$는 $\gamma$에 대해 다음과 같이 표현할 수 있다: $\mathcal{E} = \\{i \in \\{1, \dots, p \\} : | \gamma\_i | = 1 \\}$ and $s = \gamma\_\{\mathcal{E}}$. 또한 Lemma1-2에 의해 $X\hat{\beta}$는 유일한 값을 가지므로 이는 $\mathcal{E}$, $s$이 유일함을 암시한다.

(3)의 subgradient $\gamma$에 대한 정의에 의해 모든 lasso solution $\hat{\beta}$에 대해 $\hat{\beta}\_{-\mathcal{E}} = 0$임을 알 수 있다. 그러므로 (2)를 $\mathcal{E}$ 블록에 대해 표현하면 다음과 같다.
$$
X^T\_\mathcal{E} ( y - X\_\mathcal{E} \hat{\beta\_\mathcal{E}} ) = \lambda \gamma\_\{\mathcal{E}} =  \lambda s. \qquad \text{ --- (6)}
$$

(6)의 양변에 $X^T\_\mathcal{E} (X^T\_\mathcal{E})^+$를 곱하면 다음과 같이 정리된다 ($(X^T\_\mathcal{E})^+$는 $X^T\_\mathcal{E}$의 pseudoinverse matrix).
$$
\begin{align}
& X^T\_\mathcal{E} X\_\mathcal{E} \hat{\beta\_\mathcal{E}} = X^T\_\mathcal{E} ( y - (X^T\_\mathcal{E})^+  \lambda s) \\\\
\Leftrightarrow
& X\_\mathcal{E} \hat{\beta\_\mathcal{E}} = X^T\_\mathcal{E} (X^T\_\mathcal{E})^+ ( y - (X^T\_\mathcal{E})^+  \lambda s).
\end{align}
$$

$X\hat{\beta} = X\_\mathcal{E} \hat{\beta\_\mathcal{E}}$이므로 위 등식은 곧 아래와 같다.
$$
X \hat{\beta} = X^T\_\mathcal{E} (X^T\_\mathcal{E})^+ ( y - (X^T\_\mathcal{E})^+  \lambda s), \qquad \text{ --- (7)}
$$

그리고 임의의 lasso solution $\hat{\beta}$는 다음과 같다.
$$
\hat{\beta\_{-\mathcal{E}}} = 0 \text{ and } \hat{\beta\_{\mathcal{E}}} = (X^T\_\mathcal{E})^+ ( y - (X^T\_\mathcal{E}) + b, \qquad \text{ --- (8)}\\\\
\text{where } b \in null(X\_\mathcal{E}).
$$

## Sufficient conditions for uniqueness

(8)의 $\hat{\beta\_{\mathcal{E}}}$의 유일함이 보장되기 위해서는 $b=0$이 되어야 한다 ( $(X^T\_\mathcal{E})^+ ( y - (X^T\_\mathcal{E})$은 유일하기 때문에). $b=0$이어야 함을 주지하고 (8)의 등식을 변형하면 다음의 결론을 얻게 된다.

>**Lemma 2.** 임의의 $y, X, \lambda > 0$에 대해, 만약 $null(X\_\mathcal{E}) = {0}$, 또는 $rank(X\_\mathcal{E}) = |\mathcal{E}|$ ([참고](https://www.quora.com/When-the-null-space-of-a-matrix-is-the-zero-vector-the-matrix-is-invertible-Why/answer/Alexander-Farrugia)),이면 lasso solution은 유일(unique)해지며, 이는 곧 다음과도 같다.
>$$
>\hat{\beta\_{-\mathcal{E}}} = 0 \text{ and } \hat{\beta\_{\mathcal{E}}} = (X^T\_\mathcal{E}X^T\_\mathcal{E})^{-1} ( X^T\_\mathcal{E} y - \lambda s), \qquad \text{ --- (9)}\\\\
>\text{where } \mathcal{E} \text{ and } s \text{ are the equicorrelation set and signs as defined in (4) and (5)}.
>$$

참고로 이 solution은 많아 봐야 $min\\{n, p\\}$의 nonzero components로 구성된다.

그렇다면 $null(X\_\mathcal{E}) = {0}$을 암시하는 ($X$에 대한) 좀 더 자연스러운 조건에 대해 알아보도록 하자. 이를 알아보기에 앞서 우선 $null(X\_\mathcal{E}) \neq {0}$이라 가정해보겠다. 이 경우, 어떤 $i \in \mathcal{E}$에 대해 다음과 같은 등식을 만족한다.
$$
X\_i = \sum\_{j \in \mathcal{E} \backslash \\{i\\} } c\_j X\_j,\\\\
\text{where } c\_j \in \mathbb{R}, j \in \mathcal{E}.
$$

위 등식의 양변에 $s\_i$를 곱해주고, 우항에 $s\_j s\_j = 1$을 곱해준다.
$$
s\_i X\_i = \sum\_{j \in \mathcal{E} \backslash \\{i\\} } (s\_i s\_j c\_j) \cdot (s\_j X\_j). \qquad \text{ --- (10)}
$$

$r = y - X \hat{\beta}$로 r(lasso residual)을 정의하면 임의의 $j \in \mathcal{E}$에 대해 $X\_j^T r = s\_j \lambda$를 만족한다. r을 위 (10)의 양변에 곱해주면 $\lambda$에 대한 부등식을 얻을 수 있다. ($\lambda > 0$이라 가정)
$$
\lambda = \sum\_{j \in \mathcal{E} \backslash \\{i\\} } (s\_i s\_j c\_j) \lambda \quad \text{ and } \quad \sum\_{j \in \mathcal{E} \backslash \\{i\\} } (s\_i s\_j c\_j) = 1.
$$

즉, $null(X\_\mathcal{E}) \neq {0}$이면, 어떤 $i \in \mathcal{E}$에 대해 다음 등식이 성립한다.
$$
s\_iX\_i = \sum\_{j \in \mathcal{E} \backslash \\{i\\} } a\_j \cdot s\_j X\_j, \text{ with } \sum\_{j \in \mathcal{E} \backslash \\{i\\} } a\_j = 1.
$$

위 등식은 $s\_iX\_i$이 $s\_j X\_j, j \in \mathcal{E} \backslash \\{i\\}$의 affine span 위에 존재한다는 의미와도 같다. 또한 이는 어떤 k+2개의 원소를 포함한 subset으로는 최대 k dimensional affine space만을 표현할 수 있다는 것과도 같다. 
<center>
![](https://wikidocs.net/images/page/20964/l1_uniqueness.png)<br/>
**[Fig 1] 4 elements on 2-dimensional affine space [3]**
</center>

우리가 원하는 것은 행렬 $X \in \mathbb{R}^{n \text{ x } p}$가 $null(X\_\mathcal{E}) = {0}$을 만족하는 것이며, 이는 곧 행렬 $X$의 column들이 [general position](https://en.wikipedia.org/wiki/General_position)에 있는 것과도 같다. 바꿔말하면, 그 어떤 k-dimensional affine subspace도 set 안의 k+1개보다 더 많은 element를 포함하지 않는다는 것이다.

>**Lemma 3.** 만약 행렬 $X$의 column들이 general position에 있으면, 임의의 $y$와 $\lambda > 0$에 대한 lasso solution은 유일(unique)하며 또한 이 solution은 (9)를 만족한다.

그렇다면 어떤 행렬 $X$가 항상 위 조건을 만족할 수 있을까? 결론부터 말하자면 다음과 같다.

>**Lemma 4.** 행렬 $X \in \mathbb{R}^{n \text{ x } p}$의 모든 원소가 $\mathbb{R}^{np}$ 상의 continuous probability distribution을 따른다면, 임의의 $y$와 $\lambda > 0$에 대해 lasso solution은 unuque하고 항상 (9)를 만족한다.

왜냐하면 continuous probability distribution을 따를때, 모든 column vector들은 linearly independent하기 때문이다. ([참고](https://math.stackexchange.com/questions/432447/probability-that-n-vectors-drawn-randomly-from-mathbbrn-are-linearly-ind?rq=1))

## General convex loss functions

좀 더 일반적인 lasso problem에 대해서도 같은 내용을 적용할 수 있다 [13].
$$
\hat{\beta} \in \text{argmin}\_{\beta \in \mathbb{R}^p} f(X\beta) + \lambda \|\beta\|\_1, \qquad \text{ --- (11) }
$$

>**Lemma 5.** 만약 행렬 $X \in \mathbb{R}^{n \text{ x } p}$의 모든 원소가 $\mathbb{R}^{np}$ 상의 continuous probability distribution을 따를때, 미분 가능하고 strictly convex인 임의의 함수 $f$는 임의의 $\lambda > 0$에 대해 (11)의 문제에서 항상 유일(unique)한 solution을 보장한다. 이 solution은 많아봐야 $min\\{n,p\\}$개의 nonzero components로 구성된다.

</br> </br>

# 13 Duality uses and correspondences

</br> </br>

우리는 앞 장에서 Duality와 KKT 조건에 대해 살펴보았다. 
이 장에서는 Duality의 사용 예와 더불어 관련성에 대해 알아보고자 한다.

#### [Notice]
본 장에서는 $x$의 optimal solution $x^{\star}$와 $x$의 conjugate을 $x^{\*}$로 구분지어 표기한다.

</br> </br>

# 13-01 Uses of duality

</br> </br>

### Two key uses of duality
앞서 11장에서 다룬 duality의 두가지 핵심적인 특징에 대해 다시 살펴보자.

• $x$가 primal feasible 이고 $u,v$가 dual feasible 일 때, primal 문제 $f(x)$와 dual 문제 $g(u,v)$ 간의 차이를 $x$와 $u,v$간의 **duality gap**이라 부른다. 
> $f(x)-f^{\star}  \le f(x)-g(u, v)$

duality gap이 0일 때 이를 zero duality gap이라 하며 이는 dual 문제의 해가 optimal임을 의미 한다.
또한 upper bound인 $g(u, v)$는 최적값인 $f^{\star}$보다는 항상 작거나 같다. 자세한 이유는 앞의 [[11장]](https://wikidocs.net/20582)의 내용을 참고하기 바란다.
따라서 아래와 같이 유도가 가능하다.

##### [Proof]
> $$f^{\star} \ge g(u, v)$$
> $$-f^{\star} \le -g(u, v)$$
> $$f(x)-f^{\star} \le \underbrace{f(x)-g(u, v)}\_{\text{dualityh gap}}$$
> also,
> $$g^{\star}-g(x) \le \underbrace{f(x)-g(u, v)}\_{\text{dualityh gap}}$$


그리고, duality gap은 알고리즘의 중지 기준(stopping criterion)으로 사용될 수도 있다. 

• Dual optimal $u^{\star}, v^{\star}$이 주어졌을 때 Strong duality의 조건하에서, primal solution은 모든 $x$에 대해 라그랑지안 $L (x, u^{\star}, v^{\star})$을 최소화 시킨다. (즉, stationarity condition을 만족시킨다).

이를 primal solution 계산에 이용할 수 있다.



</br> </br>

# 13-02 Solving the primal via the dual

</br> </br>

### An important consequence of stationarity
Strong duality의 조건하에서 Dual solution $u^{\star}, v^{\star}$가 주어졌을 때, primal solution $x^{\star}$으로 다음의 라그랑지안을 풀 수 있다.

> $$ \min_x f(x) + \sum_{i=1}^m u_i^{\star} h_i(x) + \sum_{j=1}^r v^{\star}\_i l_j(x)$$

종종 이러한 제약 없는 문제(unconstrained problem)의 솔루션은 dual solution을 통해 primal solution의 특징을 명시적으로 가져다 씀으로써 나타낼 수 있다.

게다가, 이 문제의 해가 유일하다면, dual solution이 primal solution $x^{\star}$가 된다.
즉, primal 문제를 직접 풀 때보다 dual 문제로 푸는 것이 더 쉬울 때 매우 유용하다.



### Example from B & V page 249:
> $$ \min_x \sum_{i=1}^n f_i(x_i) \qquad \text{ subject to }\qquad a^Tx = b$$

각각의 $f_i : \mathbb{R} → \mathbb{R}$ 가 smooth하고, strictly convex이면 Dual function은 아래와 같다.

> $$\begin{align}
> g(v) &= \min_x \sum_{i=1}^n f_i(x_i) + v(b−a^Tx) \\\
> &= bv + \min_x \sum_{i=1}^n f_i(x_i) −va^Tx \\\
> &= bv + \min_x \sum_{i=1}^n f_i(x_i) −v \sum_{i=1}^n a_ix_i \\\
> &= bv + \sum_{i=1}^n (\underbrace{\min_{x_i} \\{ f_i(x_i) − a_ivx_i \\}}\_{-f^{\*}\_i(a_iv)}) \\\
> &= bv − \sum_{i=1}^n f^{\*}\_i (a_iv)
> \end{align}$$
 
여기서 $f^{\*}$는 $f_i$의 conjugate를 의미 한다.

그러므로 dual problem은 다음과 같이 나타낼 수 있다.
> $$ \max_v bv − \sum^n_{i=1} f^{\*}\_i (a_iv)$$

또한 마이너스(-)를 곱해 maximum 문제를 다음과 minimum 문제로 나타낼 수도 있다.
> $$ \min_v \sum^n_{i=1} f^{\*}\_i (a_iv) − bv$$

이것은 스칼라 변수의 볼록 최소화 (convex minimization) 문제로 primal 문제보다 훨씬 쉽게 풀 수 있다.

$v^{\star}$가 주어졌을 때 primal solution $x^{\star}$은 아래와 같이 풀 수 있다.
> $$ \min_{x} \sum^n_{i=1} (f_i(x_i) − a_iv^{\star}x_i)$$

각 $f_i$의 Strict convexity는 이것이 유일한 솔루션을 가진다는 것을 의미한다.
즉, $x^{\star}$는 각 $i$에 대해 $∇f_i(x_i) = a_iv^{\star}$의 계산을 통해 얻어진다.



</br> </br>

# 13-03 Dual norms

</br> </br>

임의의 **norm** $\lVert x \rVert$를 살펴보자

> $$ l_p \text{ norm: } \lVert x \rVert_p = (\sum^n_{i=1} |x_i|\_p)^{1/p}, \text{ for } p ≥ 1$$
> $$ \text{Trace norm: } \lVert X \rVert_{tr} = \sum^r_{i=1} σ_i(X)$$


norm $\lVert x \rVert$의 **dual norm**은 $\lVert x \rVert_{∗}$와 같이 나타내며 다음과 같다.
 >$$\lVert x \rVert_{∗} = \max_{\lVert z \rVert ≤1} z^Tx$$

   
여기서 어떤 임의의 $y$가 있다고 가정해보자. 그려면 $\frac{y}{\| y \|}$를 $z$라고 할때 $\| z \| = 1$이 된다. 또한 $| z^Tx | \le \| x \|\_{\*} $이 되며,</br>
그러므로 *Cauchy-Schwartz inequality*와 유사한 형태의 $ | y^Tx | \le \|y \| \| x \|\_{\*} $가 성립한다.

특정 조건에서의 Dual Norm의 예제를 살펴보자.
> $$ l_p \text{ norm dual: } (\lVert x \rVert_p)\_{\*} = \lVert x \rVert_{q}, \text{ where } 1/p + 1/q = 1$$
> $$ \text{Trace norm dual: } (\lVert X \rVert_{tr})\_{\*} = \lVert X \rVert_{op}) = σ_1(X)$$

##### [Proof]
> $ l_p$ norm dual에서 다음이 성립함을 증명해보자
> $$(\lVert x \rVert_p)\_{\*} = \lVert x \rVert_{q}, \text{ where } 1/p + 1/q = 1 \qquad \text{(1)}$$
> 
> *Proof* 
> $$ (\lVert x \rVert_p)\_{\*} = \sup\\{ z^Tx : x \in \mathbb{R}^n, \| x \|\_q \le 1 \\} \qquad  \text{(2)}$$
> 한편, Holder inequality에 의해서, 다음이 성립한다. </br>
> $$z^T x ≤ \| z^tx \| 1 ≤ \| z \|\_p \| x \|\_q (\text{ where }, 1/p + 1/q = 1)\qquad \text{(3)}$$ 
> 
> 위 (1)은 아래와 같은 관계가 성립한다.
> $$(\| z \|\_q)\_∗ ≤  \| z \|\_p\qquad \text{(4)}$$
> 따라서, $\| x \|\_q ≤ 1$ 이면서,  $z^Tx$가 $\| z \|\_p$ 을 만족시키는 $x$를 찾으면 $(\| z \|\_q)\_∗ = \| z \||\_p$ 가 성립함을 알 수 있다.</br>
> 한편, $y := sign(z) |z|^{p−1} \left( y_i = sign(z_i)|z_i|^{p−1} \right)$로 놓고, $x = y$ 로 놓으면, $\| y \|\_q$
> $\| x \|\_q =1$을 만족하고, $z^Tx = \| z \|\_p$ 임을확인할수있다. </br>
> 
> 따라서,다음이성립된다.
> $$( \| z \|\_ q)\_∗ = \| z \|\_p, (1/p+1/q=1)\qquad \text{(5)}$$


Dual norm의 dual norm은 다시 orignal norm이 된다.
> $\lVert x \rVert_{\*\*} = \lVert x \rVert$


다음 문제를 살펴보자.
> $$ \min_y \lVert y \rVert \qquad \text{ subject to } y = x$$

Optimal value가 $\| x \|$ 라고 할때, 라그랑지안은 다음과 같이 표현 된다.

> $$L(y,u) = \| y \|+ u^T(x−y) = \| y \| − y^Tu + x^Tu$$

Dual norm $(\lVert · \rVert_{∗})$으로 나타내면, 다음과 같다.
> $$ \text{If } \| u \|\_{∗} ≤ 1,\text{ then}  \qquad \min_y \\{ \| y \| − y^Tu \\} = 0 $$
> $$ \text{If } \| u \|\_{∗} > 1, \text{ then}  \qquad \min_y \\{ \| y \| − y^Tu \\} = −∞ $$

#### [Note]
> $$ \text{If } \| u \|\_{∗} ≤ 1, \text{ then}  \qquad \min_y \\{ \| y \| − y^Tu \\} = 0 $$
> $$- \max_y (y^Tu - \| y \| ) = 0$$
> $$y^Tu \le \| y \| \| u \|\_* \le \| y \| $$

> $$ \text{If } \| u \|\_{∗} > 1, \text{ then}  \qquad \min_y \\{ \| y \| − y^Tu \\} = −∞ $$
> $\text{Can always find} \qquad $ $z$  with $\| z \| = 1 \qquad \text{ subject to }\qquad z^Tu = \| u \|\_{\*} \qquad ( argmax_{\| z \| \le 1}  z^Tu )$

> $ \text{take} $ $y = t \cdot z, \qquad t > 0 $
> $$ y^Tu = t \cdot \| u \|\_{\*} $$
> $ \text{ for this } y, \qquad y^Tu - \| y \| = t \cdot \| u \|\_{\*} - t \rightarrow ∞ \text{ as } t \rightarrow ∞ $
> $$ \text{ so therefore }  g(u) = \min_y L(y, u) = x^Tu - I(\| u \|\_{\*} \le 1)$$ </br>
> dual problem</br>
> $\max_u g(u) \iff \max_{\| u \|\_{\*} \le 1} x^Tu$
 



그러므로 Lagrange dual 문제는 다음과 같다.

> $$ \max_u u^Tx \qquad \text{ subject to }\qquad \| u \|\_{∗} ≤ 1$$
 
Inequality constraint 가 존재하지 않기 때문에, Slater's condition을 만족하며, Strong duality에 따라서 $f^{\star} = g^{\star}$가 된다.
즉, $\| x \| = \| x \|\_{∗∗}$ 이다. 


</br> </br>

# 13-04 Conjugate function 

</br> </br>

주어진 함수 $f : \mathbb{R}^n → \mathbb{R}$, 에 대하여 conjugate $f^{∗} : \mathbb{R}^n → \mathbb{R}$는 다음과 같이 정의 한다.

> $f^{∗}(y) = \max_x y^Tx−f(x)$

<center>
![](https://wikidocs.net/images/page/21001/conjugate_function.png)

**[Fig1] Illustration of conjgate function [1]**
</center>


#### [Note] 
$f^{∗}$는 convex(affine) 함수  $y^Tx - f(x)$의 pointwise maximum이므로 항상 convex이다.
(여기서 $f$는 반드시 convex일 필요는 없다.)

$f^{∗}(y)$는 선형 함수 $y^Tx$와 $f(x)$ 간의 maximum gap이다.
(From B & V page 91)

미분 가능한 $f$에 대한 conjuagation을 Legendre 변환이라고 부른다.

##### Properties: 
• Fenchel’s inequality: for any $x,y, f(x) + f^{∗}(y) ≥ x^Ty$</br>
> $f(x) + f^{∗}(y) ≥ x^Ty \iff f^{\*}(y) \ge x^Ty - f(x)$</br>
> $ f^{\*}(y) = \max_z z^Ty - f(x)$</br>

• conjugate의 conjugate은 $f^{∗∗}$이므로 $f^{∗∗} ≤ f$ 가 성립한다.</br>
• 여기서 만약$f$가 closed이고 convex 이면, $f^{∗∗} = f$과 같다. </br>
•$f$가 closed이고 convex 이면, 모든 $x,y$에 대해 다음이 성립한다.
> $$\begin{align}
> x ∈ ∂f^{∗}(y) &\iff y ∈ ∂f(x) \\\
> &\iff f(x) + f^{∗}(y) = x^Ty \\\
> \end{align}$$

• $f(u,v) = f_1(u) + f_2(v)$이면, $f^{∗}(w,z) = f_1^{∗}(w) + f_2^{∗}(z)$이 성립한다. </br>



##### Examples: 
• $f(x)$가 아래와 같은 Simple quadratic일 경우를 살펴보자</br>
> $f(x) = \frac{1}{2}x^TQx$, where $Q \succ 0$

그러면 $y^Tx− \frac{1}{2}x^TQx$는 $y$에 strictly concave이고and is maximized at $x = Q^{−1}y$, so $f^{∗}(y) = \frac{1}{2}y^TQ^{−1}y$ </br>



#### [Proof]
> $\begin{align}
> f^{\*}(y) & =  \max_x \left( y^Tx -\frac{1}{2}x^TQx \right) \\\
> & = -\min_x \left(\frac{1}{2}x^TQx- y^Tx \right), x^{\star} = Q^{-1}y  \\\
> & = -\frac{1}{2}y^TQ^{-1}QQ^{-1}y + y^TQ^{-1}y \\\
> & = \frac{1}{2}y^TQ^{-1}y  \\\
> \end{align}$

> Fenchel's inequality: for any $x, y$</br>
> $$\frac{1}{2} x^TQx + \frac{1}{2} y^TQ^{-1}y \ge x^Ty$$

• Indicator function: $f(x) = I_C(x)$이면, 그 conjugate 은 다음과 같다. </br>

> $f^{∗}(y) = I^{∗}\_C(y) = \max_{x ∈ C} y^Tx$ called the **support function** of $C$

• Norm: $f(x) = \| x \|$이면, 그 conjugate은 다음과 같다. </br>
> $f^{∗}(y) = I_{\\{ z : \| z \|\_{∗} ≤ 1 \\}}(y)$ where $\| · \|\_{∗}$ is the dual norm of $\| · \|$ 


</br> </br>

# 13-04-01 Example_ lasso dual 

</br> </br>

$y ∈ \mathbb{R}^n, X ∈ \mathbb{R}^{n×p}$인 lasso 문제를 다시 살펴보자

> $$ \min_β \frac{1}{2} \| y−Xβ \|^2_2 + λ\| β \|\_1$$

> $$f(β) = \frac{1}{2} \| y - Xβ \|^2_2 +  λ\| β \|\_1$$
> $$L(β) = f(β)$$
>  $$ \min_β L(β) = f^{\star}$$

위 수식의 dual 함수는 constant 이다. (= $f^{\*}$). 
그러므로 primal 문제를 다음과 같이 변형할 수 있다.

> $$ \min_{β,z} \frac{1}{2} \| y−z \|^2_2 + λ \| β \|\_1 \text{ subject to } z = Xβ$$

변형된 dual 함수는 아래와 같다.
> $$\begin{align}
> g(u) &= \min_{β,z} \frac{1}{2} \| y−z \|^2_2 + λ \| β \|\_1 + u^T(z−Xβ) \\\
> &= \frac{1}{2} \|y\|^2_2 - \frac{1}{2} \| y−u \|^2_2 − I_{\\{ v : \| v \|\_∞ ≤ 1 \\}}(X^Tu/λ) \\\
> \end{align}$$
> 

##### [Proof]
> $$\begin{align}
> g(u) &= \min_{β,z} \frac{1}{2} \| y−z \|^2_2 + λ \| β \|\_1 + u^T(z−Xβ) \\\
> &= \underbrace{ \left( \min_z \frac{1}{2} \| y - z \|^2_2 + u^Tz \right)}\_{①} + \underbrace{\left( \min_β  λ \| β \|\_1 + u^TXβ \right)}\_{②} \\\
> \end{align}$$
> $$ z^{\star} = y - u$$
> $$\begin{align}
> \text{①} \cdots \left( \min_z \frac{1}{2} \| y - z \|^2_2 + u^Tz \right)
> &= \frac{1}{2} \| u \|^2_2 + u^T(y - u) \\\
> &= -\frac{1}{2} \| y - u \|^2_2 + \frac{1}{2} \| y \|^2_2 \\\
> \end{align}$$
> $$\begin{align}
> \text{②} \cdots \left( \min_β  λ \| β \|\_1 + u^TXβ \right) 
> &= - λ \max_β \frac{u^Tx}{λ} β - \| β \|\_2 \\\
> &= - λ \left( \lVert \frac{u^Tx}{λ} \rVert_∞ ≤ 1 \right) \\\
> &= - λ \left( \lVert u^Tx \rVert_∞ ≤ λ \right) \\\
> \end{align}$$
> $$\begin{align}
> \therefore g(u) &= -\frac{1}{2} \| y - u \|^2_2 + \frac{1}{2} \| y \|^2_2 + - λ \left( \lVert u^Tx \rVert_∞ ≤ λ \right) \\\
> &= \frac{1}{2} \| y \|^2_2 - \frac{1}{2} \| y−u \|^2_2 − I_{\\{ v : \| v \|\_∞ ≤ 1 \\}}(X^Tu/λ) \\\
> \end{align}$$

따라서, lasso dual 문제는 아래와 같다.

> $$ \max_u \frac{1}{2} \left( \| y \|^2_2 − \| y−u \|^2_2 \right) \text{ subject to } \|X^Tu \|\_∞ ≤ λ$$

다음은 위식과 동치이다.

> $$ \min_u \| y−u \|^2_2 \text{ subject to } \|X^Tu \|\_∞ ≤ λ$$

#### [Check]
Slater’s condition을 을 충족하여 strong duality를 만족한다. 
> $$ \text{strong duality } \implies (β^{\star}, z^{\star})$$
> $$ \text{ must minimize  } L( β, z, u^{\star} ) \text{ over } -u, β, z$$

#### [note]
지난 문제에서의 최적값(optimal value)은 optimal lasso objective 값이 아니었다.
게다가, 주어진 dual solution $u$와 lasso solution $β$는 $Xβ = y−u$를 만족한다.

이는 KKT stationarity condition을 통해 만족한다.
$z (즉, z−y + β = 0)$. 

따라서 lasso는 dual residual을 만족한다.

<center>
![](https://wikidocs.net/images/page/21003/Conjugate_LassoDual_Example.png)

**[Fig2] Lasso Dual [1]**
</center>

</br> </br>

# 13-04-02 Conjugates and dual problems

</br> </br>

다음과 같은 Lagrangian의 최소화 문제의 Dual 문제 유도를 통해 종종 Conjuagte를 나타낼 수 있다.

> $$−f^{∗}(u) = \min_x f(x)−u^Tx$$

  예를 들면, 다음과 같은 수식을 고려해 보자

> $$ \min_x  f(x) + g(x)$$

다음 수식은 위 수식에 제약 조건이 추가되었으며 위식과 동치이다.

> $$ \min_{x,z} f(x) + g(z) \text{ subject to } x = z $$

이를 라그랑지 듀얼 함수로 바꾸면 아래와 같다.

> $$g(u) = \min_x f(x) + g(z) + u^T(z−x) = −f^{∗}(u)−g^{∗}(−u)$$

따라서 처음 수식의 dual 문제는 아래와 같이 정의 할 수 있다.
> $$ \max_u −f^{∗}(u)−g^{∗}(−u)$$

##### [Examples]
• Indicator function: $ \min_x f(x) + I_C(x)$의 dual은 다음과 같다.
> $$ \max_u −f^{∗}(u)−I^{∗}\_C(−u)$$
> where $I^{∗}\_C$ is the support function of $C$

• Norms: $$ \min_x f(x) + \| x \| \text{의 dual은 다음과 같다.}$$
$$ \max_u −f^{∗}(u) \text{ subject to } \| u \|^{∗} ≤ 1 \text{ where } \| · \|\_{∗} \text{ is the dual norm of } \| · \|$$

</br> </br>

# 13-04-03 Shifting linear transformations

</br> </br>

Dual formulation은 목적 함수의 일부와 또 다른 영역 사이의 선형 변환의 shifting으로 도움이 된다.

다음을 살펴보자
> $$ \min_x f(x) + g(Ax)$$

아래 수식은 위의 식과 동치 이다.
> $min_{x,z} f(x) + g(z) \text { subject to } Ax = z$

이는 다음의 유도 과정을 거친다.
> $$\text {g(u)} = min_{x,z} f(x) + g(z) + u^T(z - Ax)$$
> $$\qquad  = -\max_{x} (A^T u)^T x - f(x) - max_{z} (-u)^T z - g(z)  $$
> $$\qquad = -\ f^{∗} (A^T u) - g^{∗} (-u) $$

그리고 dual은 다음과 같다.
> $$max_u −f^{∗}(A^Tu) − g^{∗}(−u)$$

##### [Example]
norm과 그 norm의 dual norm은 다음의 관계에 있다. $\| · \|, \| · \|\_{∗}$, the problems 

> $$ \min_x f(x) +\| Ax \|$$
> $$ \max_u −f(A^Tu) \text{ subject to } \| u \|\_{∗} ≤ 1$$

첫번째 수식은 primal이며 두번째 수식은 dual로, 쌍으로 나타내어 질 수 있다.


</br> </br>

# 13-05 Dual cones

</br> </br>

## Dual cones
Cone $K ⊆ \mathbb{R}^n$ 가 존재 한다.
(앞서 [02-06-01](https://wikidocs.net/17422)에서 다루었던 내용을 다시 되짚어 보면 그 뜻은 $x ∈ K, t ≥ 0 \to tx ∈ K$와 같다.)

> $$ K∗ = \\{ y : y^Tx ≥ 0 \text{ for all } x ∈ K \\} $$

이를 일컬어 **dual cone** 이라 하며, 이는 항상 convex cone이다.  (심지어 $K$ 가 convex가 아니어도 성립한다.) 

<center>
![](https://wikidocs.net/images/page/21005/dual_cone.png)

**[Fig3] Dual Cones [1]**
</center>

###### [주의]
$y ∈ K∗ \iff \text{ the halfspace } \\{ x : y^Tx ≥ 0 \\} \text { contains } K$
(From B & V page 52)

여기서 중요한 성질은 $K$가 closed이고 convex cone이면 $K^{∗∗} = K$이다.

##### Examples:
• Linear subspace의 dual cone $V$는 $V^{⊥}$이다. 즉,  orthogonal complement이다.
E.g., $(row(A))^{∗} = null(A) $</br>

• Norm cone의 dual cone $K = \\{ (x,t) ∈ \mathbb{R}^n+1 : \| x \|≤ t \\}$은 그 dual norm $K^{∗} = \\{ (y,s) ∈ \mathbb{R}^{n+1} : \| y \|\_{∗} ≤ s \\} $의 norm cone 이다.</br>

• Positive semideﬁnite cone $\mathbb{S}^n_+$은 self-dual의 convex cone 이다. 즉$(\mathbb{S}^n_+)^{∗} = \mathbb{S}^n_+$라는 뜻이다.</br>


과연 왜 그럴까? 확인해보자
> $$ Y \succeq 0 \iff tr(Y X) ≥ 0 \text{ for all } X \succeq 0$$

$X$의 eigenvalue decomposition

## Dual cones and dual problems
Consider the cone constrained problem
제약 조건이 있는 cone을 살펴보자.

> $$ \min_x f(x) \text{ subject to } Ax ∈ K$$

$I^{∗}\_K(y) = \max_{z∈K} z^Ty$가 $K$의 support function 일때
위 수식의 dual problem은 다음과 같다.
> $$ \max_u −f^∗(A^Tu)−I^∗_K(−u)$$


여기서 $K$가 cone일 경우 다음 처럼 쉽게 정의 할 수 있다.
> $$ \max_u −f^∗(A^Tu) \text{ subject to } u ∈ K^{∗} $$

여기서 $K^{∗}$는 $K$의 dual cone 이다. because $= I_K^{\*}(-u) \ I_{K^{\*}}(−u) $ 

많은 다른 유형의 제약 조건이 cone의 제약 조건으로 나타날 수 있기 때문에 이것은 꽤 유용하다.



</br> </br>

# 13-06 Dual subtleties & Double dual

</br> </br>

## Dual subtleties
• 때로는 우리는 dual 문제를 동치의 문제로 바꿀 수 있고 이를 여전히 dual 문제라 부른다. 또한 Strong Duality에서, Primal 솔루션의 특징 분석이나 계산을 위해 변형된 dual 문제의 솔루션을 사용할 수 있다.

##### [주의]
변형된 dual 문제의 최적값은 반드시 primal의 최적값은 아니다.


• 제약 조건이 없는 문제에 대해 dual 문제를 유도하는 일반적인 방법은 먼저 더미 변수와 equality 제약 조건을 추가함으로써 primal을 변형시키는 것이다.

일반적으로 이것을 어떻게 하는지는 모호하다. 다양한 선택으로 다른 dual 문제들을 이끌어 낼 수 있다.


## Double dual
선형 제약 조건에서 일반적인 최소화 문제를 고려해보자

> $$ \min_x f(x) \text{ subject to } Ax ≤ b, Cx = d$$

라그랑지안은 다음과 같다.
> $$L(x,u,v) = f(x) + (A^Tu + C^Tv)^Tx−b^Tu−d^Tv$$

그러므로 dual 문제는 다음과 같다.

> $$ \max_{u,v} −f^∗(−A^Tu−C^Tv)−b^Tu−d^Tv \text{ subject to } u ≥ 0 $$

##### Recall property
만약 $f$가 closed이고 convex라면, 이 경우에 dual의 dual은 primal임을 앞서 설명하였다.($f^{∗∗} = f$)

실제로, 선형 제약 조건을 넘어(dual과 dual의 conjugate 사이의)연결이 이보다 훨씬 더 깊다.
다음을 살펴보자

> $$ \min_x f(x) $$
> $$\begin{align}
> \text{ subject to } \qquad & h_i(x) ≤ 0, i = 1,...m \\\
> & l_j(x) = 0, j = 1,...r
> \end{align}$$


$f$와 $h_1,...h_m$가 closed이고 convex이고, $1,...r$ 은 aﬃne이면, then dual의 dual은 primal이다.

이것은 bifunction의 관점에서 최소화 문제로 제공되어 진다.
이 프레임 워크에서 dual 함수는이 dual 함수의 conjugate에 해당 한다.

(for more, read Chapters 29 and 30 of Rockafellar)


</br> </br>

# 14 Newton's Method

</br> </br>

이 장에서는 Newton's Method에 대해 살펴본다.

Newton's method는 두 번 미분가능한 함수에 대하여 second-order Taylor expansion으로 함수를 근사한 뒤, 근사 함수의 최솟값을 찾으며 해에 접근하는 방법이다. 해의 근처에서는 quadratic convergence를 만족하며, gradient descent에 비하여 무척 빠른 수렴속도를 보인다.

## References and further readings
* S. Boyd and L. Vandenberghe (2004), "Convex optimization", Chapter 9 and 10
* Y. Nesterov (1998), “Introductory lectures on convex optimization: a basic course”, Chapter 2
* Y. Nesterov and A. Nemirovskii (1994), “Interior-point polynomial methods in convex programming”, Chapter 2
* J. Nocedal and S. Wright (2006), “Numerical optimization”, Chapters 6 and 7
* L. Vandenberghe, Lecture notes for EE 236C, UCLA, Spring 2011-2012

</br> </br>

# 14-01 Newton's method

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

 제약조건이 없고(unconstrained), 두 번 미분 가능하고 convex이며, dom($f$) = $\mathbb{R}^{n}$인 함수 $f$에 대한 최적화 문제를 살펴보자.

>$$
>\begin{align}
>\min_{x} f(x)
>\end{align}
>$$

 [Gradient descent](https://wikidocs.net/18083)에서는 이 함수 $f$에 대해 아래와 같은 과정을 수행하였다.
 
1. 2차 테일러 근사를 수행
2. 2차 미분 항에 해당하는 Hessian matrix를 $I/t$, 즉 정방행렬에 t(step size)를 나눈 값으로 가정 
3. Quadratic approximation을 수행하여 update step를 진행

자세한 과정은 다음 페이지의 gradient descent update step에서 설명한다. 이 때의 매 update step 식은 다음과 같다. 

>$$
>\begin{align}
>&\text{choose initial } x^{(0)} \in \mathbb{R}^{n},\\\\
>&x^{(k)} = x^{(k-1)} - t_{k} \cdot \nabla f(x^{(k-1)}), \qquad k = 1,2,3,...
>\end{align}
>$$

Newton's method(pure Newton's method)는 기존 gradient descent에서 $\frac{1}{t}I$로 가정했던 2차 미분항을 실제로 계산하여 quadratic approximation을 수행하고, update step 를 진행한다. 이 과정 또한 다음 페이지의 Newton's method update step에서 설명한다. 이 때의 매 update step 식은 다음과 같다.

>$$
>\begin{align}
>&\text{choose initial } x^{(0)} \in \mathbb{R}^{n},\\\\
>&x^{(k)} = x^{(k-1)} - \Big(\nabla^{2}f(x^{(k-1)})\Big)^{-1} \nabla f(x^{(k-1)}), \qquad k = 1,2,3,...
>\end{align}
>$$

</br> </br>

# 14-01-01 Newton's method interpretation

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

이 페이지에서는 앞서 다루었던 update step이 원 함수 $f$의 quadratic approximation으로부터 어떻게 유도되는지 살펴본다. 또한 [6장](https://wikidocs.net/edit/page/18083)에서 다룬 gradient descent의 update step와 비교해본다.

## Newton's method update step
함수 $f$의 2차 테일러 근사(quadratic approximation)은 다음과 같다.

>$$
>\begin{align}
>f(y)	\approx f(x) + \nabla f(x)^{T}(y-x) +\frac{1}{2}(y-x)^{T}\nabla^{2}f(x)(y-x),\\\\
>f_{approx}(y)	= f(x) + \nabla f(x)^{T}(y-x) +\frac{1}{2}(y-x)^{T}\nabla^{2}f(x)(y-x).
>\end{align}
>$$

여기서 $y$는 다음 스텝의 $x$ 값인 $x^{+}$이다. 또한 quadratic approximation을 $f_{approx}$로 정한다.

우리는 이 $f_{approx}$ 즉, quadratic approximation을 최소로 만드는 입력 $y$를 찾으려 한다. 이때 $f_{approx}$는 convex이므로 위 식의 gradient를 0로 만드는 입력 $y$가 $f_{approx}$를 최소로 만들 것이다. 이 결과가 Newton's method에서의 step update 식이 된다. 아래 식의 미분은 y에 대한 미분 임을 기억하자.

>$$
>\begin{align}
>\nabla f_{approx}(y)	&= \nabla f(x) +\frac{1}{2} \Big((\nabla^{2} f(x))^{T}(y-x)+(y-x)^{T}\nabla^{2}f(x)\Big)\\\\
>&=\nabla f(x) +\nabla^{2} f(x)(y-x)\\\\
>& = 0,\\\\
>\Leftrightarrow y &= x-(\nabla^{2}f(x))^{-1}\nabla f(x).
>\end{align}
>$$

## Gradient descent update step
gradient desent에서는 함수 $f$의 2차 테일러 근사 항을 사용하고, 2차 항의 경우 실제 2차 미분 결과가 아닌, 정방행렬(identity matrix)과 이를 $t$로 나눈 값으로 가정한다.

>$$
>\begin{align}
>f(y)	\approx f(x) + \nabla f(x)^{T}(y-x) +\frac{1}{2t}\|{y-x}\|\_{2}^{2},\\\\
>f_{approx}(y)	= f(x) + \nabla f(x)^{T}(y-x) +\frac{1}{2t}\|{y-x}\|\_{2}^{2}.\\\\
>\end{align}
>$$

Newton's method와 동일하게 위 근사식의 gradient가 0인 $y$값, 즉 $x^{+}$를 정할 수 있다.
>$$
>\begin{align}
>\nabla f(y) &= \nabla f(x) + \frac{1}{t}(y-x), \\\\
> &= 0,\\\\
>y &= x-t\nabla f(x).
>\end{align}
>$$

이 결과는 gradient descent의 step update와 동일하다.

gradient descent의 자세한 내용은 [gradient descent 장](https://wikidocs.net/18084)에서 참고할 수 있다.

## Example
예시로써, 함수 $f = (10x_{1}^{2}+x_{2}^{2})/2+5log(1+e^{-x_{1}-x_{2}})$에 대하여 거의 동등한 길이의 step을 진행한다고 가정하고, 즉 newton's method의 업데이트 크기만큼 매번 gradient descent에서의 step size를 정하고, gradient descent(검정)와 Newton's method(파랑)의 step에 따른 수렴 방향을 비교해본다.

<center>
![](https://wikidocs.net/images/page/21331/gd.JPG)

**[Fig 1] Comparison between gradient descent(black) and Newton's method(blue)[3]**</br>
</center>

Fig 1에서도 알 수 있다시피, gradient descent는 2차 미분 항을 정방행렬에 상수가 곱해진 값으로 가정하고 gradient를 계산하기 때문에, 등고선(contour)의 접선 방향에 수직하게(perpendicular) 수렴함을 확인할 수 있고, Newton's method에 비해 느린 수렴 속도를 보인다. 이 후의 나머지 장에서는 Newton's method의 성질과 특징, 수렴성, 예시 등을 다룬다.

</br> </br>

# 14-02 Interpretation & Properties

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

이 장에서는 Newton's method의 성질에 앞서 목적함수의 근을 찾는(root finding) 문제에 Newton's method를 적용해보는 방법에 대하여 알아본다.

후에, Newton's method의 두 가지 중요한 성질인 Affine invariance와 Local convergence에 대해서 살펴보고자 한다.

</br> </br>

# 14-02-01 Root finding

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>
이 장에서는 root finding 문제에 Newton's method를 적용해본다. 우리가 논하는 최적화 문제에서의 Newton's method와 약간의 차이가 있으므로 이를 설명한다.[[최적화 문제에서의 Newton's method](https://en.wikipedia.org/wiki/Newton%27s_method_in_optimization)][[root finding에서의 newton's method](https://en.wikipedia.org/wiki/Newton%27s_method)]

## Newton's method for root finding
$F:\mathbb{R}^{n}\rightarrow \mathbb{R}^{n}$인 벡터 함수(vector function)가 있다고 하자. 또한, 이 함수의 근, 즉 함수값을 0으로 만드는 $x$값을 찾는 문제(root-finding)를 생각해보자.

>$$
>\begin{align}
>F(x) = 0.
>\end{align}
>$$

 이 문제는 초기값 $x^{(0)}$를 정한 뒤, 반복적으로 Newton's method를 적용하여 해에 접근해갈 수 있다.

>$$
>\begin{align}
>&\text{choose initial }x^{(0)}\in \mathbb{R}^{n},\\\\
>&x^{(k)}=x^{(k-1)}-\nabla F(x^{(k-1)})^{-1}F(x^{(k-1)}), \qquad k=1,2,3,...\\\\
>\end{align}
>$$

여기서 $\nabla F(x^{(k-1)})$은 $x^{(k-1)}$일때의 $F$의 Jacobian 행렬이다. Newton step인 $x^{+}=x-\nabla F(x)^{-1}F(x)$는 아래와 같이 F를 선형근사(linear approximation)함으로써 계산할 수 있다.

>$$
>\begin{align}
>F(y)\approx F(x) + F^{'}(x)(y-x) = 0\\\\
>y = x^{+}=x-F^{'}(x)^{-1}F(x).
>\end{align}
>$$

## Newton's method for optimization problem
Newton's method를 아래와 같은 최적화 문제에 적용한다고 보면,

>$$
>\begin{align}
>\min_{x} F(x)
>\end{align}
>$$

이는 목적함수 $F(x)$의 gradient, $\nabla{F(x)}=0$, 즉 $\nabla F(x) $의 root finding 문제에 Newton's method를 적용하는 것과 동일하다.

정리하면, 최적화 문제에서 주어진 함수 도함수의 근($\nabla F=0$)을 Newton's method를 이용해서 찾는 것과 달리, 근을 찾는 문제는 함수 값 자체의 근($F=0$)을 Newton's method를 이용해서 찾아야 하므로 각 문제에 대하여 Newton's method의 x에 대한 update 식에서 미분항에 한 차수 차이가 발생한다. 

## Root finding example
$F:\mathbb{R}\rightarrow\mathbb{R}$이 다음과 같이 정의된다고 하자.

>$$
>\begin{align}
>F(x)=x^{2}-2
>\end{align}
>$$

$x^{(0)}=1$으로 정하고, pure Newton's method를 적용하면 다음과 같다.
<center>
![](https://wikidocs.net/images/page/21332/table1.JPG)

**[Fig 1] Newton's method applied on example[3]**</br>
</center>

k(iteration 횟수)가 증가함에 따라 $x$가 근인 $\sqrt 2 $에 가까워짐을 확인할 수 있다.

</br> </br>

# 14-02-02 Affine invariance of Newton's method

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Newton's method의 중요한 성질 중 하나는 affine invariance하다는 것이다. 이는 update의 방향이 좌표계의 affine한 변환에 대하여 독립적이라는 의미이다. 예를 들어, gradient descent의 경우 affine 변환에 variant 하기 때문에, 좌표계 공간에 따라 수렴 속도가 다르다.

이 페이지에서는 affine invariance를 유도해본다.

## Affine invariance : proof
$f:\mathbb{R}^{n}\rightarrow \mathbb{R}$이 두 번 미분 가능하고, $A\in \mathbb{R}^{n\times n}$은 nonsingular하다고 하자. 또한 $g(y)$를 $f(Ay)$로 정의하자. $g(y):=f(Ay)$. 이는 $y$를 입력으로 받는 어떤 함수 $g$와, $y$에 대해서 $A$로 affine transformation된 $Ay$를 입력으로 받는 함수 $f$의 출력값이 같음을 의미한다. Notation과 gradient의 인자에 대한 혼선을 줄이고자, $x:=Ay$로 정의한다.

Chain rule을 활용하여 양변을 미분, 두 번 미분한 결과를 정리하면 다음과 같다.

>$$
>\begin{align}
>\nabla g(y) &= A^{T} \nabla f(x)\\\\
>\nabla^{2} g(y) &= A^{T}\nabla^{2}f(x)A,
>\end{align}
>$$

 $y$에 대한 $g$의 Newton step은 다음과 같다.

>$$
>\begin{align}
>y^{+}  = y-(\nabla^{2}g(y))^{-1}\nabla g(y).
>\end{align}
>$$

여기서 함수 $g$ 대신에, $x$에 대한 함수 $f$로 변환하고 정리하면, $x$와 $f$에 대한 Newton step을 유도할 수 있다.

>$$
>\begin{align}
>y^{+} &= y-(A^{T}\nabla^{2}f(x)A)^{-1}A^{T} \nabla f(x)\\\\
>\Leftrightarrow y^{+} &= y-A^{-1}(\nabla^{2}f(x))^{-1}(A^{T})^{-1}A^{T} \nabla f(x)\\\\
>\Leftrightarrow Ay^{+} &= Ay-(\nabla^{2}f(x))^{-1}\nabla f(x)\\\\
>\Leftrightarrow x^{+} &= x - \nabla^{2}f(x)^{-1}\nabla f(x).
>\end{align}
>$$

이는 Newton step이 non singular한 matrix로 표현되는 affine transformation에 대하여 좌표변환된 좌표계에서의 update가 서로 같다는 것, 즉 affine invariant함을 의미한다.

동일한 방법으로 gradient descent의 affine invariacne를 확인해보고자 step update에 대하여 유도해보면, 다음과 같은 결과를 얻을 수 있다.

>$$
>\begin{align}
>y^{+} &= y-t_{k}\cdot \nabla g(y)\\\\
>\Leftrightarrow y^{+} &= y-t_{k}\cdot \nabla f(x)A^{T}\\\\
>\Leftrightarrow x^{+} &= x - t_{k}\cdot A\nabla f(x)A^{T}. 
>\end{align}
>$$

Gradient descent의 경우 Hessian matrix를 $\frac{1}{t}I$로 근사하여 업데이트하기 때문에, affine transformation된 coordinate에 대하여 update의 방향이 달라짐을 알 수 있다.

</br> </br>

# 14-02-03 Local convergence analyisis

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Newton's method의 두 번째 중요한 성질로는 특정 조건들을 만족하면, 해의 근처에서 수렴성이 보장된다는 것이다. 이를 local convergence라고 명명한다.  [14-01](https://wikidocs.net/edit/page/21330)에서부터 우리가 논해온 pure Newton's method의 경우 수렴성이 보장되지 않기 때문에, 후에 이전에 [6장](https://wikidocs.net/18184)에서 다루었던 backtracking line search를 동일하게 적용하여 step size를 조절하여 수렴성을 보장하는 damped Newton's method를 고안하고, 이에 대한 수렴성을 분석한다.


>정리 : $F : \mathbb{R}^{n}\, \rightarrow  \, \mathbb{R}^{n}$ 가 연속으로 미분가능(continuosly differentiable)하고,  $x^{\star} \in \mathbb{R}^{n}$ 가 함수 $F$의 근이라고 하자, 즉, $F(x^{\star})=0$이다.
>이때  $F^{'}(x^{\star}) $이 non-singular 하다면 아래의 (a), (b)를 만족한다.

>(a) 만약 $\| x^{(0)}-x^{\star} \|<\delta$를 만족하는 양수의 $\delta$\(>0)가 존재하고, Newton's method가 정의되어 있으면 밑의 식(converges superlinearly)을 만족한다.  
>\begin{align} 
>\lim_{ k \rightarrow \infty } \frac{ \| x^{ (k+1) }-x^{ \star } \| } { \| x^{ (k) }-x^{ \star } \| } =0.
>\end{align}

>(b) 만약 $F^{'}$가 $x^{\star}$의 근처에서 Lipshitz continuous하면, 밑의 식(quadratic convergence)을 만족하는 양수 K(>0)가 존재한다.
>\begin{align}
>\|x^{ (k+1) } - x^{ \star }\| \leq K \| x^{ (k) }-x^{ \star }\|^{2}.
>\end{align}

## Proof of (a)
>Taylor expansion으로 $F(x^{\star})$를 1st order까지 정리한다. 2nd order 이상의 항은 1st order의 norm의 상수배에 bound 되므로, little-o notation을 사용하여 다음과 같이 나타낼 수 있다.  
>\begin{align}
>0=F(x^{\star}) = F(x^{k}) +\nabla F(x^{k})(x^{\star}-x^{k})+o(\|x^{k}-x^{\star}\|).\\\\
>\end{align}
>양변에 $\nabla F(x^{k})^{-1}$를 곱하고 정리한다. little-o의 경우 상수항 취급되므로 이를 무시할 수 있다.
>\begin{align}
>x^{k}-x^{\star}-\nabla F(x^{k})^{-1} F(x^{k}) = o(\|x^{k}-x^{\star}\|).
>\end{align}
>Newton's method $x^{k+1}=x^{k}-\nabla F(x^{k})^{-1}F(x^{k})$를 이용하여 아래와 같은 결과를 얻을 수 있다.
>\begin{align}
>x^{k+1}-x^{\star}=o(\|x^{k}-x^{\star}\|),
>\end{align}
>따라서, $x^{k} \neq x^{\star}$ 일 때, little-o의 limit-definition[[wikipedia](https://en.wikipedia.org/wiki/Big_O_notation)]를 이용하여 (a)를 보일 수 있다.

>\begin{align}
>\lim_{k\rightarrow \infty} \frac{\|x^{k+1}-x^{\star}\|}{\|x^{k}-x^{\star}\|} = \lim_{k\rightarrow \infty}\frac{o(\|x^{k}-x^{\star}\|)}{\|x^{k}-x^{\star}\|}.
>\end{align}

## Proof of (b)
과정이 [[14-05](https://wikidocs.net/21751)]의 Damped phase에서의 수렴 속도가 quadratic함을 증명하는 과정과 동일하다. 따라서 생략한다.

## Example : divergence case
pure Netwon's method로 수렴이 보장되지 않는 예시를 간략하게 살펴본다.
<center>
![](https://wikidocs.net/images/page/21708/1.png)

**[Fig 1] pure Newton's method applied on root finding : divergence case [[image-link](https://www.quora.com/What-is-convergence-and-divergence-in-Newton-Rhapson-Method-What-is-use-of-this-method)]**</br>
</center>
그림에서와 같이 initial point $x_0$에 따라서, 해가 발산할 수 있음이 확인된다.

</br> </br>

# 14-03 Newton decrement

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

이 장에서는 Newton decrement를 정의하고, 이 값의 의미를 살펴본다.

최적화 문제를 아래와 같이 정의할때, $x$에서의 Newton decrement를 $\lambda(x)$로 정의한다.

>\begin{align}
>\min_{x} \quad f(x),\\\\
>\end{align}
>\begin{align}
>\lambda(x) = (\nabla f(x)^{T}(\nabla^{2}f(x))^{-1}\nabla f(x))^{1/2}.
>\end{align}

## Characteristics of Newton decrement
첫번째로, Newton decrement는 함수 $f(x)$와 이 함수의 이차 근사(quadratic approximation)의 최소값의 차이와 관계가 있다.
이 차이를 구해보면 다음과 같다.
>\begin{align}
>f(x)-&\min_{y} \big( f(x)+\nabla f(x)^{T}(y-x)+\frac{1}{2}(y-x)^{T}\nabla^{2}f(x)(y-x)\big),\\\\
>f(x)-&\bigg( f(x) + \nabla^{T}f(x)\big( -(\nabla^{2} f(x) )^{-1} \nabla f(x)\big) + \frac{1}{2}\big( -(\nabla^{2}f(x))^{-1} \nabla f(x) \big)^{T} \nabla ^{2}f(x) \big( -(\nabla^{2}f(x))^{-1}\nabla f(x) \big) \bigg) \\\\ 
>&= \frac{1}{2}\nabla f(x)^{T}(\nabla^{2} f(x) )^{-1}\nabla f(x) = \frac{1}{2}\lambda(x)^{2}.
>\end{align}

즉, 우리는 $\frac{1}{2}\lambda^{2}(x)$를 suboptimality gap인 $f(x)-f^{\star}$의 approximate bound로 생각할 수 있다.

두 번째로는 Newton direction을 Newton method에서 매 iteration의 update 방향 $v = -(\nabla^{2}f(x))^{-1}\nabla f(x)$라고 할 때, Newton decrement는 $f(x)$의 hessian인 $\nabla^{2}f(x)$로 정의된 norm에서의 Newton step의 길이라고 볼 수 있다. 

또는 달리 말해서, 이를 일종의 mahalanobis distance[[Wikipedia](https://en.wikipedia.org/wiki/Mahalanobis_distance)]로 볼 수 있는데, 즉 새롭게 이동할 step $y$를 observation이라하고, 현재의 위치 $x$를 mean, $f(x)$의 hessian을 covariance로 보는 관점이다. 

Mahalanobis distance가 어떤 point와, 분포의 평균과의 거리를 해당 방향의 표준편차의 크기로 나눈 결과라는 정의로 생각하면, 현재의 위치를 mean으로 가지고 hessian을 covariance로 가지는 distribution에 대하여, 새로운 step의 point에 대한 distance를 구한 것이다.

P-quadratic norm([1]의 A1.3)의 형태를 가지는 이 식을 정리하면 다음과 같다.

>\begin{align}
>\lambda(x) = (v^{T}\nabla^{2} f(x)v)^{1/2} = \|v\|\_{\nabla^{2}f(x)}
>\end{align}

세번째로 Newton's method의 step update의 크기 $\Delta x_{nt}$로 Newtond decrement를 나타낼 수 있다.
>\begin{align}
>x^{+} = x-\big(\nabla^{2} f(x) \big)^{-1} \nabla f(x)\\\\
>\Delta x_{nt} = -\big(\nabla^{2} f(x) \big)^{-1} \nabla f(x)\\\\
>\nabla f(x)^{T} \Delta x_{nt} = -\lambda (x)^{2}
>\end{align}

이 식의 중간과정을 활용하면 Newton decrement를 증분과 Hessian에 관한 식으로도 표현할 수 있다.
>\begin{align}
>\lambda(x) = (\Delta x_{nt}^{T}\nabla^{2} f(x) \Delta x_{nt})^{1/2}.
>\end{align}


마지막으로, Newton decrement 또한, Newton step와 동일하게 affine invariant하다. 다시 말해, 어떤 nonsingular matrix에 대하여 $g(y) = f(Ay)$이 함수가 정의되어있다면, $x = Ay$에서 $\lambda_{g(y)} = \lambda_{f(x)}$이다.

</br> </br>

# 14-04 Backtracking line search

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

지금까지 우리는 pure Newton's method에 대해 살펴보았다. 하지만. 이 방법은 수렴이 보장되지 않으므로 backtracking line search를 활용하여 수렴을 보장하는 damped Newton's method에 대해 살펴본다.

## Damped Newton's method
기존의 pure Newton's method는 다음과 같은 update식을 반복하였다. (여기서 $t=1$이다.)

>\begin{align}
>x^{+} = x -t(\nabla^{2}f(x))^{-1}\nabla f(x).
>\end{align}

Damped Newton's method는 이전의 backtracking line search와 동일하게, update 과정에서 발산할 가능성이 있는 경우, 즉 update된 위치에서의 원함수 $f$의 값이 근사 함수의 값보다 크게되면 발산할 가능성이 존재하므로, step size $t$를 줄이는 과정을 거친다.

따라서 다음과 같은 과정을 추가하여 $t$의 update 여부를 결정한다.
>\begin{align}
>&\text{with parameters }0<\alpha \leq \frac{1}{2}, 0<\beta<1, \\\
>&\text{while } f(x+tv)>f(x)+\alpha t \nabla f(x)^{T}v\\\\
>&\text{shrink }t=\beta t
>\end{align}

여기서 $v=-(\nabla^{2}f(x))^{-1}\nabla f(x)$이고, $\nabla f(x)^{T}v = -\lambda^{2}(x)$ 이다.

## Example : logistic regression
예제로, n = 500, p = 100인 logistic regression에 대해 각각 backtracking을 적용한 gradient descent와 newton's method의 iteration에 따른 수렴속도를 비교해본다.

<center>
![](https://wikidocs.net/images/page/21334/2.jpg)

**[Fig 1] Logistic regression [3]**</br>
</center>

Newton's method는 gradient descent보다 훨씬 더 빠른 수렴속도를 보인다. 다음 장에서 부터는 이 수렴속도에 대하여 살펴본다.

</br> </br>

# 14-05 Convergence analysis

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
    });
</script>

지금까지 우리는 local convergence 성질 만을 가지는 pure Newton's method와 여기에 backtracking line search를 적용하여, convex일때 global convergence를 보장하는 damped Newton's method(Newton's method with backtracking line search)에 대하여 살펴보았다. 

이 장에서는 damped Newton's method의 수렴속도를 분석(convergence anaylsis)하고자 한다. damped Newton's method의 경우 backtracking이 적용되는 phase(damped phase : slow progress), bactracking이 더 이상 필요없는 local convergence한 phase(pure phase : quadratic convergence)로 나뉘어 convergence bound를 살펴보게 된다.

## Conditions of $f$ for convergence analysis
$f$는 convex이고, 두 번 미분 가능하며, $dom(f)=\mathbb{R}^{n}$을 가지고, 다음 세가지 조건을 만족한다고 가정하자.

1. $\nabla f $는 parameter L에 대하여 Lipschitz continuous이다.
>\begin{align}
>\|\nabla f(x) - \nabla f(y)\|\_{2} \leq L\|x-y\|\_{2} \quad \forall x,y.
>\end{align}
2. $f$는 parameter m에 대하여 strongly convex하다. (upper bound $L$과 Lipschitz continuous의 관계 : [출처](https://xingyuzhou.org/blog/notes/strong-convexity), [본서 : 06-03-05](https://wikidocs.net/18093))
>\begin{align}
>mI\preceq\nabla^{2}f(x)\preceq LI.
>\end{align}
3. $\nabla^{2} f $는 parameter M에 대하여 Lipschitz continuous하다.
>\begin{align}
>\|\nabla^{2}f(x)-\nabla^{2}f(y)\|\_{2} \leq M\|x-y\|\_{2} \quad \forall x,y.
>\end{align}

## Convergence analysis
위 세가지 조건을 만족하면, $0<\eta \leq m^{2}/M$와 $\gamma>0$을 만족하는 $\eta, \gamma$에 대하여 각각의 phase에 대한 convergence를 아래와 같이 구할 수 있다.

>Phase I : "Damped" phase, $\|\nabla f(x)^{(k)}\|\_{2} \geq \eta$,
>\begin{align}
>f(x^{(k+1)})-f(x^{(k)}) \leq -\gamma
>\end{align}
>Phase 2 : "Pure" phase, $\|\nabla f(x^{(k)}\|\_{2}<\eta$, bactracking selects $t = 1$,
>\begin{align}
>\frac{M}{2m^{2}}\|\nabla f(x^{(k+1)})\|\_{2} \leq \bigg( \frac{M}{2m^{2}}\|\nabla f(x^{(k)})\|\_{2} \bigg)^{2}.
>\end{align}

처음의 $k$번째 iteration에서 $\|\nabla f(x^{(k)}\|\_{2}<\eta$를 만족하여 Pure phase에 도달하게 되면, 이 후의 iteration에 대해서는 항상 이 조건을 만족함을 유념하자. 

## Convergence analysis : written in optimal value term
이제 각각의 phase의 convergence를 optimal value와의 차이로 비교해보고자 한다.

Phase1에서의 경우, $x^{(0)}$에서부터 k번의 iteration을 진행했다고 하면, 매 스텝마다의 식을 정리하여 다음과 같이 나타낼 수 있다.

>\begin{align}
>\require{cancel}
>& &\cancel{f(x^{(1)})}-f(x^{(0)}) \leq -\gamma \\\\
>& &\cancel{f(x^{(2)})}-\cancel{f(x^{(1)})} \leq -\gamma \\\\
>& &\vdots \\\\
>&+ &f(x^{(k)})-\cancel{f(x^{(k-1)})} \leq -\gamma \\\\
>&= &f(x^{(k)})-f(x^{(0)})\leq -k\gamma.
>\end{align}

양변에 $f^{\star}$를 빼주면 다음과 같은 결과를 얻을 수 있다. $\nabla f(x^{(k+1)})\|<\eta$를 처음 만족하는 $k$를 $k_{0}$라 하자.
>\begin{align}
>f(x^{(k)})-f^{\star} \geq (f(x^{(0)})-f^{\star})-\gamma k \qquad \text{if }k \geq k_{0}
>\end{align}

Phase 2에서는 $k_{0}$에서 iteration을 시작하여, step을 $k-k_{0}$번 진행했다고 가정한다. 또한 앞에서 $\|\nabla f(x^{(k)})\|\_2<\eta \leq m^{2}/M$, 그리고 strong convexity를 활용하여 식을 정리할 수 있다. 
>\begin{align}
>& &\frac{M}{2m^{2}}\|\nabla f^{(k_{0}+1)}\|\_{2} \leq \big( \frac{M}{2m^{2}}\|\nabla f^{(k_{0})}\|\_{2} \big) ^{2}.\\\\
>&\Leftrightarrow &\frac{M}{2m^{2}}\|\nabla f^{(k_{0}+(k-k_{0}))}\|\_{2} \leq \bigg( \big( \frac{M}{2m^{2}}\|\nabla f^{(k_{0}+1)}\|\_{2} \big) ^{2} \bigg)^{k-k_{0}} \leq (\frac{1}{2})^{2^{(k-k_{0})}}.\\\\
>&\Leftrightarrow &f(y)\geq f(x)+\nabla f(x)^{T}(y-x)+\frac{m}{2}\|y-x\|^{2}\_{2}\geq f(x)-\frac{1}{2m}\|\nabla f(x)\|^{2}\_{2}, \text{ for all }y,\\\\
>&\Leftrightarrow &f(x^{(k)})-f^{\star} \leq \frac{1}{2m}\|\nabla f(x^{k})\|\_{2}^{2}\leq \frac{2m^{3}}{M^{2}}(\frac{1}{2})^{2^{k-k_{0}+1}}.
>\end{align}

따라서 $k_{0}$번째를 분기로 step에 따른 convergence를 아래와 같이 정리할 수 있다.

>Theorem : backtracking line search를 사용하는 Netwon's method는 두 단계의 convergence bounds를 가진다.
>\begin{align}
>&f(x^{(k)})-f^{\star} \leq \begin{cases} (f(x^{(0)})-f^{\star})-\gamma k \qquad &\text{if }k\leq k_{0}\\\\
\frac{2m^{3}}{M^{2}}(\frac{1}{2})^{2^{k-k_{0}+1}} \qquad &\text{if }k>k_{0}.
\end{cases}
>\end{align}
>여기서 $\gamma = \frac{\alpha \beta^{2}\eta^{2}m}{L^{2}}$, $\eta = \min\\{1, 3(1-2\alpha)\\}\frac{m^{2}}{M}$, $k_{0}$는 $\|\nabla f(x^{k_0+1}))\|\_{2}<\eta$를 만족하기 시작하는 step이다.

## Proof 1. Damped phase
먼저, $\|\nabla f(x)\|\_{2} \geq \eta$를 만족하는 damped phase 부터 유도한다. 첫째로 backtracking line search 과정으로 결정되는 step size의 lower bound를 통하여 damped phase의 convergence를 유도하게 된다. 증명과정에서 Newton decrement의 관계식이 자주 활용된다.

>$f$의 taylor approximation에서 $y=x+t\Delta x_{nt}$로 두고, Lipschitz condition의 upper bound로 적용한 아래 식에서부터 시작한다.
>\begin{align}
>f(x+t\Delta x_{nt}) \leq f(x)+t\nabla f(x)^{T}\Delta x_{nt} + \frac{L \|\Delta x_{nt} \|^{2}\_{2} }{2}t^{2},
>\end{align}
Newton decrement, 증분과 hessian matrix와의 관계와 Strong convexity의 관계를 이용하여 다음과 같이 전개할 수 있다.
>\begin{align}
>&\text{ Since, }\lambda(x)^{2}=\Delta x_{nt}^{T} \nabla^{2} f(x) \geq m\|\Delta x_{nt}\|^{2}\_{2},\\\\
>&f(x)+t\nabla f(x)^{T}\Delta x_{nt} + \frac{L \|\Delta x_{nt} \|^{2}\_{2} }{2}t^{2} \leq f(x)-t\lambda(x)^{2} + \frac{L}{2m}t^{2}\lambda(x)^{2},
>\end{align}
>이 때, backtracking line search의 조건을 만족하기 위해서는 아래를 만족해야 한다.
>\begin{align}
>f(x+t\Delta x_{nt}) \leq f(x)-(1-\frac{L}{2m}t)t \lambda(x)^{2}, \qquad \text{ where, }0<1-\frac{L}{2m}t \leq \frac{1}{2}
>\end{align}
>위를 만족하는 t의 최소값을 $\hat{t}$라 할 때, $\hat{t} = \frac{m}{L}$이 되고, 이를 원 식에 대입하면 다음과 같다.
>\begin{align}
>f(x+\hat{t}\Delta x_{nt})\leq f(x)-\frac{m}{2L}\lambda(x)^{2} \leq f(x) -\alpha \hat{t} \lambda(x)^{2},
>\end{align}
>backtracking line search에서 $0<\beta\leq 1$이므로, $t\geq \beta \frac{m}{L}$를 만족하고, 이를 정리하여 최종 결과를 유도할 수 있다.
>\begin{align}
>f(x^{+})-f(x) &\leq -\alpha t \lambda(x)^{2}\\\\
> &\leq -\alpha\beta \frac{m}{L}\lambda(x)^{2}\\\\
> &\leq -\alpha\beta \frac{m}{L^{2}}\|\nabla f(x)\|^{2}\_{2}\\\\
> &\leq -\alpha\beta \eta^{2}\frac{m}{L^{2}},\\\\
> &\gamma = \alpha\beta \eta^{2}\frac{m}{L^{2}}.
>\end{align}



## Proof 2. Pure phase
이제 $\|\nabla f(x)\|\_{2} < \eta$일 때를 가정하고, Damped phase(quadratically convergent phase)를 살펴본다. 증명은 두가지 과정으로 나뉜다. backtracking line search의 t 업데이트가 필요하지 않음을 보이고, 수렴속도가 quadratic함을 보이게 된다.

>Backtracking line seach로 부터 다음과 같은 식이 유도된다.
>\begin{align}
>\eta \leq 3(1-2\alpha)\frac{m^{2}}{M}.
>\end{align}
>또한, Lipschitz conditon에 따라 $t \geq 0$에 대하여, 다음 조건을 만족한다.
>\begin{align}
>\|\nabla^{2}f(x+t\Delta x_{nt})-\nabla^{2}f(x)\|\_{2} \leq tM \|\Delta x_{nt} \|\_{2},\\\\
>| \Delta x_{nt}^{T} \big( \nabla^{2}f(x+t\Delta x_{nt})-\nabla^{2}f(x) \big) \Delta x_{nt}| \leq tM \|\Delta x_{nt} \|\_{2}^{3}.
>\end{align}
>$\tilde{f} = f(x+t\Delta x_{nt}$)라 두면, $\tilde{f}''(t) = \Delta x_{nt}^{T} \nabla^{2}f(x+t\Delta x_{nt})\Delta x_{nt}$이고, 이를 대입한다.
>\begin{align}
>\tilde{f}''(t) \leq \tilde{f}''(0)+tM\|\Delta x_{nt}\|^{3}\_{2} \leq tM\|\Delta x_{nt} \|^{3}\_{2}
>\end{align}
>$\tilde{f}''(0) = \lambda(x)^{2}$이고, $\lambda(x)^{2} \geq m\|\nabla x_{nt}\|\_{2}^{2}$ 임을 이용하고, 부등식을 합친다. $\tilde{f}'(0) = -\lambda(x)^{2}$이므로 다음과 같이 정리할 수 있다.
>\begin{align}
>\tilde{f}''(t) \leq \tilde{f}''(0) + tM \| \Delta x_{nt} \| ^{3}\_{2} \leq \lambda(x)^{2} + t\frac{M}{m^{3/2}}\lambda(x)^{3},
>\end{align}
>\begin{align}
>\tilde{f}'(t) &\leq \tilde{f}'(0)+t\lambda(x)^{2} +t^{2}\frac{M}{2m^{3/2}}\lambda(x)^{3},\\\\
>&= -\lambda(x)^{2}+t\lambda(x)^{2} + t^{2}\frac{L}{2m^{3/2}}\lambda(x)^{3}.
>\end{align}
>이제 양변을 적분한다.
>\begin{align}
>\tilde{f}(t) \leq \tilde{f}(0) - t\lambda(x)^{2} + t^{2} \frac{1}{2}\lambda(x)^{2} + t^{3}\frac{M}{6m^{3/2}}\lambda(x)^{3}.
>\end{align}
>t = 1로 두면, 아래와 같은 결과를 얻을 수 있다. 
>\begin{align}
>f(x+\Delta x_{nt}) \leq f(x) -\frac{1}{2}\lambda(x)^{2} + \frac{M}{6m^{3/2}}\lambda(x)^{3}.
>\end{align}
>이제 $\|\nabla f(x)\|\_{2}\leq \eta \leq 3(1-2\alpha)\frac{m^{2}}{M}$이라 가정하면, strong convexity 조건에 의해 $\lambda(x) \leq 3(1-2\alpha)m^{3/2}/L$이다. 이를 위에 부등식에 대입하면 아래와 같은 결과를 유도할 수 있다.
>\begin{align}
>f(x+\Delta x_{nt}) &\leq f(x) - \lambda(x)^{2}( \frac{1}{2}- \frac{M\lambda(x)}{6m^{3/2}} )\\\\
> &\leq f(x) -\alpha \lambda(x)^{2}\\\\
> &= f(x) + \alpha \nabla f(x)^{T} \Delta x_{nt},
>\end{align}
>이 결과는 $t=1$일때 backtracking line search를 수행하더라도 항상 조건을 만족하기 때문에, $t$를 감소시키지 않음을 의미한다. 

이제 우리는 수렴속도가 quadratic하게 줄어듬을 증명해본다.
>$x_{nt} = -(\nabla^{2}f(x))^{-1}\nabla f(x)$임을 이용한 뒤, 적분의 성질 중 하나인 $f(t, u) - f(t, v) = \int^{u}\_{v}{\frac{\partial f}{\partial x}(t, x) dx} $를 이용하여 정리하고, Hessian의 Lipschitz 조건을 적분식에 적용하고 정리한다. 마지막으로 strong convexity 조건을 적용하면 증명이 완료된다. 과정을 수식으로 나타내면 아래와 같다.
>\begin{align}
>\| \nabla f(x^{+}) \| \_{2} &= \| \nabla f(x+\Delta x_{nt}) - \nabla f(x) - \nabla^{2}f(x)\Delta x_{nt} \|\_{2}\\\\
>&=\| \int^{1}\_{0}{ \big( \nabla^{2}f(x+t\Delta x_{nt})-\nabla^{2} f(x) \big) \Delta x_{nt} dt } \|\_{2}\\\\
> & \leq \frac{M}{2}\|\Delta x_{nt} \|^{2}\_{2}\\\\
> & = \frac{M}{2}\|\nabla^{2}f(x)^{-1}\nabla f(x)\|^{2}\_{2}\\\\
> & \leq \frac{M}{2m^{2}}\|\nabla f(x)\|^{2}\_{2}.
>\end{align}

결론을 다시 정리하면, $\eta = \min \\{1, 3(1-2\alpha)\\}\frac{m^{2}}{M}$ 일 때, $\|\nabla f(x^{(k)}) \|\_{2}<\eta$를 만족하는 조건에서는 Newton's method는 backtracing line search에서의 업데이트가 더이상 필요하지 않고, quadratic하게 converge 한다.

## Estimating total complexity
이제, 우리는 전체 과정에서의 complexity, 달리 말해 초기 값으로부터 최적값까지 도달하는데 걸리는 iteration 횟수에 대한 bound를 추정할 수 있다.
우선, 위의 damped Newton phase에서 $f$는 매 iteration마다 $\gamma$를 넘지 않는 선에서 값이 감소하므로, damped Newton step의 전체 step 수는 다음의 식의 결과값을 넘지 못한다.
>\begin{align}
>\frac{f(x^{(0)})-p^{\star}}{\gamma}.
>\end{align}

pure Newton phase에서의 iteration 횟수의 bound 또한 계산할 수 있다. 위의 식을 $f(x)-p^{\star}\leq \epsilon$, $\epsilon_{0} = \frac{2m^{3}}{M^{2}}$로 두고, iteration 횟수로 식을 정리하면 다음과 같은 값을 계산할 수 있다.
>\begin{align}
>& &\epsilon = \epsilon_{0} (\frac{1}{2})^{2^{k-k_{0}+1}}\\\\
>&\Leftrightarrow &\frac{\epsilon_{0}}{\epsilon} = 2^{2^{k-k_{0}+1}}\\\\
>&\Leftrightarrow &k-k_{0}+1 = log_{2}log_{2}(\frac{\epsilon_{0}}{\epsilon})
>\end{align}

따라서 pure Newton phase에서 iteration 횟수는 $\log \log(\frac{\epsilon_{0}}{\epsilon})$로 bound 된다.

이 두 결과를 더하면, Newton method를 통하여 원하는 정밀도의 해를 얻는데 필요한 iteration 횟수의 upper bound를 정의할 수 있다.
>\begin{align}
>\frac{f(x^{(0)})-p^{\star}}{\gamma} + \log \log (\frac{\epsilon_{0}}{\epsilon}).
>\end{align}

문제를 해결할때 요구되는 정밀도 $\epsilon$의 변화에 비해 우변의 두번째 항은 매우 작은 변화를 보이므로, 실제 응용에서는 이를 상수로 두고 추정을 하게 된다. 일반적으로 6번의 iteration은 $\epsilon \approx 5\cdot 10^{-20}\epsilon_{0}$의 정밀도를 보인다고 알려져 있다.

일반적으로 말해서, 목적함수 $f$를 최소화하는데 있어서 필요한 iteration 횟수는 다음과 같다.
>\begin{align}
>\frac{f(x^{(0)})-p^{\star}}{\gamma} + 6.
>\end{align}

</br> </br>

# 14-06 Self concordance

</br> </br>

앞서 살펴본 Newton's method의 convergence analysis에서는 크게 두 가지의 단점이 존재한다. [1]

첫 번째로는, 현실상의 문제에서는 찾기 어려운 Lipschitz constant L, strong convexity의 lower bound, upper bound m, M 등이 수식에 포함되기 때문이다. 이 때문에, 수렴성과 수렴속도를 보일 수는 있지만, 구체적으로 해를 찾는 데 있어 얼마만큼의 Newton step이 필요한가 등의 분석은 거의 불가능하다.

두 번째로는, Newton's method 자체는 affine invariant 하지만, Newton's method의 convergence analysis에 있어서는 affine invariant 하지 않다. 이는 일반적인 함수에 대해서는 좌표축의 변화에 따라 Lipschitz constant나 strong convexity의 bound value들이 바뀌기 때문이다.

따라서 이 장에서는 위 두 가지 단점을 보완하는 Self-concordant function에 대해서 알아보고자 한다.

Self-concordant function이 중요하고, 의미 있는 이유는 크게 3가지로 정리할 수 있다.

1. 뒷장에서 다룰 interior-point methods에 있어 중요한 역할을 하는 log barrier function들이 Self-concordant function에 속한다.
2. Self-concordant function들의 Newton's method analysis에서는 상수들에 대한 term이 존재하지 않는다.
3. Self-concordance는 affine-invariant 하다. 즉, Newton's method의 iteration 횟수 등의 추정에 있어, 좌표축의 affine transformation에 대하여 독립적이다.

</br> </br>

# 14-06-01 Definition of self-concordant functions

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
    });
</script>
## Self-concordant on $R$
Convex 함수 $f : R \rightarrow R$ 은 아래의 식을 만족할때 self-concordant 하다고 정의한다.
>\begin{align}
>\|f^{'''}(x)\| \leq 2f^{''}(x)^{3/2} \qquad \text{for all }x\in \text{dom }f.
>\end{align}

쉬운 예시로, 선형 함수($ax+b$), (convex한) 2차 함수는 3계도함수(3차 미분) 값이 0이므로, self-concordant하다.

## Self-concordant on $R^{n}$
$f : R^{n}\rightarrow R$은 정의역 안에서 임의의 방향의 선분 영역에 대하여, 다시 말해 정의역에 포함되는 모든 방향의 선분 영역에 대하여, self-concordant 할 때 이 함수를 self-concordant하다고 정의한다. 예를 들어, 모든 $x\in dom\, f$ 와 모든 $v$에 대하여, $g(t) = f(x+tv)$로 정의될 떄, $g(t)$가 self-concordant하면, f를 domain of $\mathbb{R}^{n}$에서 self-concordant function이라고 정의한다.

## Example of self-concordance function

1) $f : \mathbb{R}^{n}\_{++}\rightarrow \mathbb{R}$, $f(x) = -\sum^{n}\_{i=1}log(x_{i})$.

$f(t) = -\log{t}$ 임은 쉽게 확인할 수 있다. 더불어 self-concordant 함수의 합 또한 self-concordant 함을 이용한다. Self-concordant한 함수 $f_{1}, f_{2} : R\rightarrow R$이 있다고 할 때, self-concordant 함수의 합 또한 self-concordant 함은 다음과 같이 보인다.[3]
>\begin{align}
>|f_{1}^{'''}(x)+f_{2}^{'''}(x)|  \leq & |f^{'''}\_{1}(x)|+|f^{'''}\_{2}(x)|\\\\
> \leq &2\big( f^{''}\_{1}(x)^{3/2}+f^{''}\_{2}(x)^{3/2}\big)\\\\
>\leq &2\big( f^{''}\_{1}(x)+f^{''}\_{2}(x) \big)^{3/2}.
>\end{align}

맨 마지막 단계의 경우 아래의 성질을 이용한다.
>\begin{align}
>(u^{3/2}+v^{3/2})^{2/3} \leq u+v, \qquad u, v \geq 0.
>\end{align}



</br> </br>

# 14-06-02 Convergence analysis for self-concordant functions

</br> </br>

Self-concordant function들에 대하여, Convergence analysis의 결과는 다음과 같다.

>Theorem(Nestrov and Nemirovskii) : backtracking line search를 사용하는 Newton's method는 $f(x^{(k)})-f^{\star}\leq \epsilon$에 도달함에 있어 아래 만큼의 iteration을 필요로 한다.
>\begin{align}
>C(\alpha, \beta)\big( f(x^{(0)}-f^{\star} \big) + \log\log{(1/\epsilon)},
>\end{align}
여기서 $C(\alpha, \beta)$는 $\alpha, \beta$에 결정되는 상수이다.

위의 과정에 대한 증명은 원래 Newton's method에 대한 convergence anaylsis 증명과정과 유사하다. 다만 과정 중간에  self-concordant 성질을 이용하여 식들을 추가적으로 정리한다.([1]의 p.503)

</br> </br>

# 14-07 Comparison to first-order method

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
    });
</script>

이 장에서는 개괄적인 관점에서 Newton's method와 gradient descent를 비교해본다. 정의역의 dimension은 $n$이라 하자.

| 항목 | Newton's method | Gradient descent |
| -------- | -------- | -------- |
| Memory     | $O(n^{2})$($n \times n$의 hessian matrix) storage     | $O(n)$($n$-dimensional gradient) storage |
| Computation     | $O(n^{3})$ flops($n \times n$의 선형시스템 계산)     | $O(n)$ flops($n$-dimensional vector의 선형 결합)     |
| Backtracking     | $O(n)$ | $O(n)$  |
| Conditioning     | Affine invariant 등, conditioning에 크게 영향받지 않음  | 큰 영향을 받을 가능성 존재 |
| Fragility     | bugs나 numerical errors에 민감 | newton's method보다 비교적 강건 |

## Example

<center>
![](https://wikidocs.net/images/page/21755/gd.JPG)

**[Fig 1] Logistic regression [3]**</br>
</center>
위의 figure 1은 앞서 [14-04](https://wikidocs.net/edit/page/21334)에서 다룬 logistic regression 예시이다. x축을 실제로 연산에 걸린 시간으로 바꿔서 보면 다음과 같다. 
Convergence analysis에서 다룬 바와 같이 Newton's method는 두가지 phase를 가진다. 그래프에서도 일정 시간 후, 빠른 수렴(quadratic convergence)을 보이는 것을 확인할 수 있다. iteration 초반부인 Newton's method의 damped phase에서는 gradient descent와 동일한 scale의 수렴속도를 보인다. 하지만, $O(n^{3})$의 연산을 수행해야하기 떄문에 실제 연산시간 상에선 더 느린 수렴을 보인다. 이 후 backtracking line search가 더 이상 필요하지 않은 iteration에 도달하면, quadratic convergence의 속도를 보이며 매우 빠르게 수렴함을 확인할 수 있다.

</br> </br>

# 14-08 Special cases

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
    });
</script>

## Sparse, structured problems
우리가 해결하려는 문제의 linear system matrix가 $O(n^{3})$의 연산시간을 가지는 Hessian의 역행렬의 계산을 효과적으로 할 수 있는 조건을 만족하면, 우리는 이 문제를 좀 더 효율적으로 해결할 수 있다.

예를들어, $\nabla^{2}f(x)$가 모든 $x$에 대하여 sparse하고 structured 되어 있는 matrix 형태, 예를 들면 [band matrix](https://en.wikipedia.org/wiki/Band_matrix)의 경우, Newton's method를 적용하면서 memory와 computation에서 O(n)의 성능을 가진다. (Band matrix는 대각행과의 거리가 일정 범위 이내에 0이 아닌 항들이 모두 존재하는 형태, 즉 대각행 근처에만 값을 가지는 matrix를 의미한다.)

Structured Hessian을 만드는 대표적인 두가지 함수의 예를 알아보자.

*  $g(\beta) = f(X\beta)$이면, $\nabla^{2}g(\beta)=X^{T}\nabla^{2}f(X\beta)X$이다. 또한 만약 X가 structured predictor matrix 이고 $\nabla^{2}f$, 즉 $f$의 hessian이 digonal이면, $\nabla^{2}g$는 structured 되어있다.

* 만약 $\nabla^{2}f$가 diagonal이고, $g$가 non smooth일때, $f(\beta)+g(D\beta)$를 최소화하고자 한다고 하자. 또한 $D$는 structured penalty matrix이다. 이때 Lagrange dual은 $-f^{\*}(-D^{T}u)-g^{\*}(-u)$이다. 일반적으로 $-D\nabla^{2}f^{\*}(-D^{T}u)D^{T}$는 structured 될 수 있다.

## Equality-constrained Newton's method
이제 등호 조건(equallity constraints)이 있는 최적화 문제를 살펴보자. 우리는 일반적으로 이 문제를 아래와 같이 나타내었다.
>\begin{align}
>&\min_{x} f(x) & \text{subject to }Ax=b.
>\end{align}

이 문제의 해결에 대하여 크게 세가지 방법으로 접근해볼 수 있다.

1) 등호 조건의 제거(reduced-space approach) :  정의역 자체를 equality constraint를 만족하는 space로 제한하여 문제를 해결한다. 위의 문제라면, x를 A의 null space를 span하는 F와 $Ax_{0}=b$의 합으로 표현한다. 즉, $x=Fy+x_{0}$로 나타내고 y에 관하여 문제를 해결하는 방식이다.

2) 등호 제약조건을 만족하는 Newton's method(Equality-constrained Newton)[4] : 기본적으로 unconstrained Newton's method와 동일하나 두가지 차이가 있다. 첫째로는 초기값이 feasible해야하고($x \in dom (f)$이고, $Ax = b$)를 만족하고, 두 번째로는 Newton step의 과정에서 equality constraints를 고려한다는 것이다. 즉, Newton step $\Delta x_{nt}$를 $A\Delta x_{nt}=0$을 만족하도록 값을 결정한다. 아래에서 자세히 살펴보도록 한다.

3) Dual의 유도를 통한 해결 : Fenchel dual은 $-f^{\*}(-A^{T}v)-b^{T}v$로 정의되고, strong duality를 만족한다. ([16-03](https://wikidocs.net/22014)에서 자세히 다루도록 한다.) 간략하게 conjugate function의 정의를 활용하여 dual 문제의 목적함수를 유도해보도록 하자. 여기서의 $f^{\*}$는 f의 conjugate이다. 
>\begin{align}
>g(v) &= -b^{T}v + \min_{x}(f(x)+v^{T}Ax)\\\\
> &= -b^{T}v - \max_{x}\big( (-A^{T}v)^{T}x - f(x) \big)\\\\
> &= -b^{T}v - f^{\*}(-A^{T}v),
>\end{align}

이 되므로, dual 문제는 다음과 같다.

>\begin{align}
>\max -b^{T}v-f^{\*}(-A^{T}v). 
>\end{align}

최적값이 존재한다고 가정하기에, 이 문제는 strictly feasible하고, slater's condition을 만족한다. 따라서 위에서 언급했듯이 strong duality를 만족하고, $g(v^{\*})=p^{\*}$인 $v^{\*}$가 존재한다.[1, p.525]

이제 2)의 방법을 살펴보자.
feasible한 Newton step $\Delta x_{nt}$을 유도하기 위하여, 원래의 문제에서의 목적 함수를 x 근처의 2차 taylor 근사를 한 식으로 대체한다. 이를 나타내면 다음과 같다.
>\begin{align}
>\text{minimize}\quad &\hat{f}(x+v) = f(x) + \nabla f(x)^{T}v + \frac{1}{2}v^{T}\nabla^{2} f(x) v\\\\
>\text{subject to}\quad &A(x+v) = b,
>\end{align}

위의 식을 아래의 식으로도 표현할 수 있다.
>\begin{align}
>x^{+} = x + tv,\,\, \text{where}\\\\
>v = \underset{A(x+z)=b}{\operatorname{argmin}}\\big( f(x)+\nabla f(x)^{T}z+\frac{1}{2}z^{T}\nabla^{2} f(x)z \big)\\\\
>\end{align}

$Ax^{+} = Ax+tAv = b$이므로, 
식을 반복하는 과정에서도 다음 스텝의 solution $x$가 계속 constraint 안에 존재하도록 유지한다.

이 문제에 대한 KKT를 아래와 같이 나타내고, linear system인 아래의 문제를 풀면 solution을 구할 수 있다. $v$가 Newton step $\Delta x_{nt}$임을 상기하자.
>\begin{align}
>\begin{bmatrix}
> \nabla^{2} f(x) & A^{T}\\\\
> A & 0
>\end{bmatrix}
>\begin{bmatrix}
>v\\\\
>w
>\end{bmatrix}
>=-
>\begin{bmatrix}
>\nabla f(x)\\\\
>Ax-b
>\end{bmatrix}
>\end{align}

$w$는 위의 quadratic problem에 대한 optimal dual variable이다.

</br> </br>

# 14-09 Quasi-Newton methods

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
    });
</script>

만약 우리가 구해야하는 Hessian의 연산량이 너무 크거나, singular한 경우, quasi-Newton method를 사용하여 Hessian matrix, 즉 $\nabla^{2}f(x)$를 $H>0$로 근사할 수 있고, 이 $H$를 사용하여 update를 수행할 수 있다.

>\begin{align}
>x^{+} = x - tH^{-1}\nabla f(x)
>\end{align}

아래는 Quasi-Newton method의 특징이다. 조금 더 자세한 내용은 [18장](https://wikidocs.net/edit/page/21979)에서 다룬다.

* Hessian을 approximate하는 $H$는 매 스텝마다 갱신하여 계산된다. 목표는 $H^{-1}$을 비교적 적은 연산으로 구하여 적용하는 것이다.
* 수렴속도가 superlinear로 빠르다. 하지만 Newton과 같은 수렴속도를 갖지는 않는다. 일반적으로 $n$ steps의 quasi-Newton은 1 step의 Newton과 동일한 수렴의 크기를 보인다. 
* 많은 quasi-Newton methods는 iteration마다 $H$를 업데이트(propagate)해나가는 방식을 사용한다.




</br> </br>

# 15 Barrier Method

</br> </br>

이 장에서는 2nd-order method 중 하나인 **Barrier Method**에 대해 살펴보도록 하겠다.

**Barrier Method**는 2nd-order method 문제 중에 가장 어려운 문제라고 할 수 있는 **Inequality constraint와 equality constrained smooth problem**을 풀기 위한 방법이다.

(참고로, 최적화 문제를 풀 때 gradient를 사용하면 1st-order method라고 하며 hessian을 사용하면 2nd-order method라고 한다.)

## References and further readings
* S. Boyd and L. Vandenberghe (2004), "Convex optimization", Chapter 11
* A. Nemirovski (2004), "Interior-point polynomial time methods in convex programming", Chapter 4
* J. Nocedal and S. Wright (2006), "Numerical optimization", Chapters 14 and 19

</br> </br>

# 15-01 Barrier method and log barrier function

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

앞 장에서 **equality constrained smooth problem**을 newton's method를 이용해서 푸는 방법을 살펴보았다. 이 장에서는 **inequality and equality constrained smooth problem**를 풀기 위한 방법을 살펴볼 것이다. 

기본 아이디어는 문제를 equality constrained smooth problem으로 변환해서 newton's method로 푸는 것이다. 이와 같은 방법을 **interior method**라고 하는데 이 장에서는 interior method 중 하나인 **barrier method**에 대해 살펴보도록 하겠다.


</br> </br>

# 15-01-01 Inequality constrained minimization problems

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>
다음과 같은 convex optimization 문제를 고려해보자.
>
\begin{align}
\min_{x} & \quad f(x) \\\
\text{subject to } & \quad Ax = b \\\
                        & \quad h_{i}(x) \leq 0, i = 1, \dotsc, m
\end{align}

이와 같이 inquality가 포함된 문제에서는 binding contraints와 non-binding contraints를 파악하기 어려우며, 특히 feasible region의 boundary에서 이러한 어려움이 발생한다. 참고로, Binding constraints란 solution을 찾을 때 영향을 주는 제약조건을 의미한다.

따라서, **interior method**는 feasible region의 boundary가 아닌 interior에서 문제를 풀어보자는 접근 방법이다.

## Background of interior method
General problem에 대한 **interior method**는 1960년대에 Anthony V. Fiacco과 Garth P. McCormick이  제안했다. Interior method는 제안 당시 인기있었던 sequential quadratic programming나 active set method에 밀려서 주목을 받지 못하다가 1980년대에 이르러서야 주목을 받기 시작했다.

Active set method의 경우 최적화 결과에 영향을 주는 constraints가 무엇인지 결정하는 이론이다. Active set method에서는 constraint가 0이면 active로 판단하며 이런 constraints들을 active set이라고 한다. 그런데, active set을 구하려면 feasible region의 boundary를 계산해야 하며 constraint 수가 많이질 수록 계산량이 많아지는 문제가 있다.

이런 방식의 문제점을 파악하고 boudnary가 아닌 interior에서 문제를 풀어보자는 접근한 방식이 바로 Interior point method라고 할 수 있다. 예를 들어 LP에서 constrant수가 $m$개라면 boundary를 계산하기 위해 총 $O(m^2)$의 계산이 필요한데 interior method의 경우 $m$이 아주 커지더라도 newton step 20~30번 내에서 해를 찾는다. 성능에 대한 자세한 사항은 뒷부분에서 다시 다룰 예정이다.

* 참고 : [Interior point method](https://en.wikipedia.org/wiki/Interior-point_method)
* 참고 : [Active set method](https://en.wikipedia.org/wiki/Active_set_method)

## Reducing equality constrained minimization problem
위의 문제는 $C := \\{x : h_i(x) \le 0, i = 1, \cdots , m \\}$라고 하면 다음과 같이 다시 작성해 볼 수 있다. Inequality constraints는 Indicator function 형태로 objective function에 포함시킬 수 있다.

>
\begin{align}
\min_{x} & \quad f(x) + I_C(x) \\\
\text{subject to } & \quad Ax = b \\\
\end{align}

이와 같이 문제를 equality constrained minimization problem으로 변환할 수 있다. 하지만, Indicator function의 경우 여전히 boundary를 포함하고 있기 때문에 원래 문제의 boundary 계산의 어려움을 여전히 갖고 있으며 differentiable하지 않기 때문에 newton's method를 적용하기는 어렵다.

indicator function $I_C$를 **barrier function**으로 근사하면 어떨까? 그럴 경우 boundary는 포함하지 않게 되며 differentiable하기 때문에 newton's method를 적용할 수 있게 된다. 

이와 같이 barrier function으로 재정의한 문제를 푸는 방법을 barrier method라고 하는데 다음 절에서 자세히 소개하고 있다.

</br> </br>

# 15-01-02 Log barrier function & barrier method

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>
Barrier method를 소개하기 전에 먼저 indicator function을 barrier function으로 어떻게 근사할 수 있는지 살펴보도록 하자.

## Approximation of indicator function
다음 그림을 보면 indicator function과 barrier function을 확인할 수 있다. 점선은 indicator function인 $I_C$이며 실선은 $t = 0.5, 1, 2$에 대한 barrier function $\phi(x) = -1/t\log(-x)$이다. Barrier function은 indicator function을 smooth하게 근사하고 있으며 $t=2$일 때 가장 좋은 근사를 보여주고 있다.

![](https://wikidocs.net/images/page/21305/15_barrier_function_01.PNG)<br>
**[Fig 1] barrier function $\phi(x) = -1/t\log(-x)$ [1]**


## Logarithmic barrier function
$h_1, \cdots , h_m : \mathbb{R}^n \to \mathbb{R}$가 convex이고 두번 미분가능하다고 하자.  set $ \\{x : h_i(x) \lt 0, i = 1, \cdots , m \\}$에 대해 다음 함수를 logarithmic barrier function이라고 한다.

>
\begin{align}
\phi(x) = - \sum_{i=1}^{m} \log(-h_i(x))
\end{align}

여기서 set은 interior of feasible set $C$로 non-empty라고 가정한다.

## Barrier method

Barrier function을 사용해서 원래 문제를 다음과 같이 근사할 수 있다. 단, $t\gt 0$이다.
>
\begin{align}
\min_{x} & \quad f(x) + \frac{1}{t} \phi(x) & & \min_{x} & \quad tf(x) + \phi(x) \\\
\text{subject to } & \quad Ax = b & \iff \qquad & \text{subject to } & \quad Ax = b \\\
\end{align}

이와 같이 정의된 문제를 newton's method로 푸는 방법을 **barrier method**라고 한다.


</br> </br>

# 15-01-03 Log barrier calculus

</br> </br>

Log barrier function의 gradient와 hessian은 다음과 같다.
>
\begin{align}
\phi(x) = - \sum_{i=1}^{m} \log(-h_i(x))
\end{align}

Gradient :
>
\begin{align}
\nabla \phi(x) = - \sum_{i=1}^{m} \frac{1}{h_i(x)} \nabla h_i(x)
\end{align}

Hessian : 

>
\begin{align}
\nabla^2 \phi(x) = \sum_{i=1}^{m} \frac{1}{h_i(x)^2} \nabla h_i(x) \nabla h_i(x)^T -  \sum_{i=1}^{m} \frac{1}{h_i(x)} \nabla^2 h_i(x)
\end{align}

## Example : $\phi(x) = -\sum_{i=1}^{n} \log(-x_i)$
Barrier function $\phi(x) = -\sum_{i=1}^{n} \log(-x_i)$에 대한 gradient와 hessian을 구해보면 다음과 같은 결과를 얻을 수 있다.
>
\begin{align}
\phi(x) = -\sum_{i=1}^{n} \log(x_i)
\end{align}
따라서, $h_i(x) =  -x_i$이고 $x_i \ge 0$이다.

Gradient : 
>
$
\nabla \phi(x) = - 
\begin{bmatrix}
1/x_1 \\\
\vdots \\\
1/x_n \\\
\end{bmatrix}
 = -X^{-1} \mathbb{1}, \qquad X = \text{diag}(x)$
 
Hessian :
>
$
\nabla^2 \phi(x) = 
\begin{bmatrix}
1/x_1^2 & \cdots & \\\
\vdots & \ddots & \vdots  \\\
& \cdots & 1/x_n^2 \\\
\end{bmatrix}
 = X^{2}$

</br> </br>

# 15-02 Central path

</br> </br>

다음과 같은 barrier problem ($t \gt 0$)의 solution을 $x^\*(t)$라고 하면 **central path**는 set $\\{x^\*(t) | t \gt 0 \\}$을 말한다. 

>
\begin{align}
 \min_{x} & \quad tf(x) + \phi(x) \\\
 \text{subject to } & \quad Ax = b \\\
\end{align}

적합한 조건이 주어지면  **central path** 집합은 $\mathbb{R}^n$에서 smooth path가 되며 $t \to \infty$일 때 $x^\*(t) \to x^\*$가 된다. ($x^\*$는 원래 문제의 solution이다.)

**Central path**는 boundary에 있는 optimal을 한번에 구하기 어려울 때 interior에서 boundary쪽으로 점진적으로 새로운 $t$에 대한 문제로 재정의해서 풀어나가게 되는데, 이 때 각 단계의 해가 이루는 집합이라고 볼 수 있다.

## Example : central path for an LP
다음의 LP 문제에 대한 central path를 구해보자.
>
\begin{align}
 \min_{x} & \quad c^Tx \\\
 \text{subject to } & \quad a_i^Tx = b_i^T, i = 1, \cdots , 6 \\\
\end{align}

다음 그림에서 점선은 logarithmic barrier function $\phi$를 나타낸다. <br>
![](https://wikidocs.net/images/page/21298/15_central_path_02.PNG)<br>
**[Fig 1] Central path [1]**

Central path가 $t \to \infty$일때 optimal $x^\*$로 수렴하는 것을 볼 수 있다.  이때, hyperplane $c^Tx = c^Tx(t)$는 $c^Tx(t)$를 지나는 $\phi$의 level curve의 접선이다.


</br> </br>

# 15-03 Properties and interpretation

</br> </br>

이 절에서는 barrier problem과 original problem의 KKT condition을 구해서 어떤 차이가 있는지 확인해 볼 것이다. 그리고, 두 문제의 solution에 대한 suboptimality gap을 구해보려고 한다.

</br> </br>

# 15-03-01 Perturbed KKT conditions

</br> </br>

Barrier problem과 원래 식에서 KKT condition을 도출해 보면 다음과 같다.
## KKT conditions for barrier problem
Barrier problem의 KKT condition의 두번째 항은 log berrier function의 gradient를 사용해서 도출되었다.
>
\begin{align}
t \nabla f(x^\*(t)) - \sum_{i=1}^{m} \frac{1}{h_i(x^\*(t))} \nabla h_i(x^\*(t)) + A^Tw = 0  \\\ 
 Ax^\*(t) = b, \quad h_i(x^\*(t)) \lt 0, \quad i = 1, \cdots , m \\\
\end{align}

##  KKT conditions for the original problem
원래 문제의 KKT condition을 보면 complementary slackness에 의해서 $h_i(x^\*) \cdot u_i^\* = 0$이 도출되었는데 실제 이 boundary condition을 알기가 매우 어렵다.
>
\begin{align}
\nabla f(x^\*) + \sum_{i=1}^{m} u_i^\* \nabla h_i(x^\*) + A^Tv^\* = 0 \\\ 
Ax^\* = b, \quad h_i(x^\*) \le 0, \quad u_i^\* \ge 0,   \\\ 
h_i(x^\*) \cdot u_i^\* = 0,  \quad i = 1, \cdots , m \\\
\end{align}


## Redefinition of KKT conditions for barrier problem
그렇다면 두 KKT condition 사이에는 어떤 관계가 있을까? 

먼저 $u_i(t)$와 $v$를 다음과 같이 두고 
>
\begin{align}
u_i(t) = - \frac{1}{t h_i(x^\*(t))}, \quad v = \frac{1}{t}w
\end{align}

KKT conditions for barrier problem을 재정의해보자.

재정의된 문제를 보면 KKT conditions for the original problem과 거의 유사한 모양임을 알 수 있다. 이 식에서 $u_i(t) \cdot   h_i(x^\*(t)) = - \frac{1}{t}$이 $t \to \infty$일 경우 0이 되는데 원래 식의 $h_i(x^\*) \cdot u_i^\* = 0$과 일치하게 된다.

>
\begin{align}
& \nabla f(x^\*(t)) + \sum_{i=1}^{m} u_i(t) \nabla h_i(x^\*(t)) + tA^Tv = 0  \\\ 
& Ax^\*(t) = b, \quad u_i(t) \cdot   h_i(x^\*(t)) = - \frac{1}{t}, \quad h_i(x^\*(t)) \lt 0, \quad u_i(t) \gt 0 , \quad i = 1, \cdots , m \\\
\end{align}

</br> </br>

# 15-03-02 Suboptimality gap

</br> </br>

앞 절에서 구한 barrier problem과 original problem의 solution인 $f(x^\*(t))$와 $f(x^\*)$의 suboptimality gap은 어떻게 될까?

## Convexity of $f$ and $h_i$
Convexity가 보장되면 함수가 접선(tangent)보다 항상 크므로 $f(x^\*) \ge f(x^\*(t)) + \nabla f(x^\*(t))^T (x^\* - x^\*(t))$가 성립한다. (Tangent는 Talyor 1차 근사식)
따라서, 다음의 식을 구할 수 있다. 
>
\begin{align}
f(x^\*(t)) - f(x^\*) \le \nabla f(x^\*(t))^T (x^\*(t) - x^\*)
\end{align}


비슷하게 $h_i(x^\*) \ge h_i(x^\*(t)) + \nabla h_i(x^\*(t))^T (x^\* - x^\*(t))$가 성립하므로 다음의 식을 구할 수 있다. 

>
\begin{align}
h_i(x^\*(t)) - h_i(x^\*) \le \nabla h_i(x^\*(t))^T (x^\*(t) - x^\*), \quad i = i, \cdots , m
\end{align}


## Derivation of suboptimality gap
이 두 식에서 suboptimality gap을 유도해 보도록 하겠다. 오른쪽 항은 위의 두 convexity 조건에 의해 도출된다.

>
\begin{align}
f(x^\*(t)) - f(x^\*) + \sum_{i=1}^{m}  u_i(t) (h_i(x^\*(t)) - h_i(x^\*) ) 
    & \le 	\left\langle \nabla  f(x^\*(t))  + \sum_{i=1}^{m} u_i(t) \nabla h_i(x^\*(t)), \quad x^\*(t) - x^\* \right\rangle \\\
    & = \left\langle -tA^Tv,  \quad x^\*(t) - x^\* \right\rangle \\\
\end{align}

이 식에서 오른쪽 항을 내적해 보면 $Ax^\*(t) = b$이고 $Ax^\* = b$이므로 전체가 0이 된다.
따라서, 첫번째 식의 세번째 항을 오른쪽으로 넘겨서 정리해 보면 다음과 같은 결과를 얻을 수 있다.

>
\begin{align}
f(x^\*(t)) - f(x^\*) & \le - \sum_{i=1}^{m}  u_i(t) (h_i(x^\*(t)) - h_i(x^\*) )  \\\
    & = \frac{m}{t} +  \sum_{i=1}^{m} u_i(t) h_i(x^\*) \\\
    & \le \frac{m}{t}   
\end{align}

두번째 라인의 첫번째 항은 KKT condition에서 $u_i(t) \cdot   h_i(x^\*(t)) = - \frac{1}{t}$를 만족하므로  $\frac{m}{t}$가 된다.  두번째 항도 KKT condition에서 $\sum_{i=1}^{m} u_i(t)  h_i(x^\*) \le 0$이므로 제거할 수 있다.


결과적으로 다음과 같은 suboptimality gap을 구할 수 있으며 이는 유용한 stopping criterion이 된다. 참고로, 이 결과는 다음 장에서 duality gap으로도 유도할 수 있다.

>
\begin{align}
f(x^\*(t)) - f(x^\*) \le \frac{m}{t}
\end{align}

</br> </br>

# 15-04 Barrier method v.0 and v.1

</br> </br>

## Barrier method v.0
**Barrier method v.0**은 $\epsilon \gt 0$일 때 $t = m/\epsilon$로 선택해서 다음 barrier problem을 풀어서 $f(x^\*(t)) - f(x^\*) \le \epsilon $를 구한다. 
>
\begin{align}
 \min_{x} & \quad tf(x) + \phi(x) \\\
 \text{subject to } & \quad Ax = b \\\
\end{align}

이때, $m$은 constraint개수이고 $t$는 $1/\epsilon$의 배수이기 때문에 $\epsilon$이 작을 수록 $t$가 매우 커지게 되며 결국 central path의 끝부분이 되므로 문제는 original problem과 같아진다. 따라서, 매우 느리고 구하기 힘든 문제가 될 수 있다.

따라서, central path를 따라 solution을 구하는 것이 더 나은 방법으로 **barrier method v.1**이 정의될 수 있다.

## Barrier method v.1
**Barrier method v.1**은 $t$ 값을 증가시키면서 다음의 barrier problem을 점진적으로 여러번 푸는 방법이다.
>
\begin{align}
 \min_{x} & \quad tf(x) + \phi(x) \\\
 \text{subject to } & \quad Ax = b \\\
\end{align}

#### Algorithm
알고리즘을 설명하면 다음과 같다.

1. $t^{(0)} \gt 0$이고 $k := 0$을 선택한다.
2. $t = t^{(0)}$에서 barrier problem을 풀어서 $x^{(0)} = x^\*(t)$을 구한다.
3. While $m/t \gt \epsilon$ <br>
  3-1. $t^{(k+1)} \gt t^{(k)}$를 선택한다. <br>
  3-2. Newton's method를 $x^{(k)}$로 초기화한다. (warm start)<br>
        $t = t^{(k+1)}$에서 barrier problem을 풀어서 $x^{(k+1)} = x^\*(t)$을 구한다.<br>
  end while<br>

#### Comments
* **Common update 방법** : $t^{(k+1)} = \mu t^{(k)}$, ($\mu \gt 1$)
* **Warm start** :  단계 3-2에서는 이전 단계의 solution을 다음 단계의 초기값으로 사용하는데 이를 warm start라고 한다.
* **Centering step** :  알고리즘에서 barrier problem을 푸는 단계인 2와 3-2를 centering step이라고 한다.

#### Considerations
$\mu$와 $t^{(0)}$의 선택에 있어서, 다음의 trade off를 고려해야 한다.
###### $\mu$의 선택
* $\mu$가 너무 작다면, outer iteration이 많아진다. (이 경우 warm start가 도움이 된다.)<br>
* $\mu$가 너무 크다면, 모든 centering step에서 newton method가 수렴할 때까지 iteration을 많이 해야 한다. 

###### 알고리즘 초기값 선택
* $t^{(0)}$가 너무 작다면, outer iteration이 많아진다.<br>
* $t^{(0)}$가 너무 크다면, v.0과 같은 문제가 된다. 따라서, 첫번째 centering step에서 newton method가 $x^{(0)}$을 구하기 위해 iteration을 많이 해야 한다. 

다행히도 실제 barrier method의 성능은 $\mu$와 $t^{(0)}$의 선택에 매우 robust한 편이다. 그리고, 이들 parameter의 적절한 범위는 문제의 크기에 따라 달라진다.

## Example of small LP
다음 그릠에는 n=50 dimensions, m=100 inequality constraints 조건의 LP 문제를 barrier method로 실행했을 때 성능을 보여주고 있다. $\mu = 2$인 경우 outer iteration이 커지고 $\mu=150$인 경우에 centering step이 $\mu=50$일 때보다 상대적으로 증가했음을 확인할 수 있다.

![](https://wikidocs.net/images/page/21300/15_barrier_method_03.PNG) <br>
**[Fig 1] Example of small LP [3]**

</br> </br>

# 15-05 Convergence analysis

</br> </br>

Barrier method는 centering step을 정확히 푼다고 가정하면 다음의 수렴 결과를 얻을 수 있다.

## Convergence Theorem
**Barrier method**는 $k$ centering step후 다음 식을 만족한다. (단, $k$는 outer iteration 수이다.)
>\begin{align}
f(x^{(k)}) - f^{\*} \le  \frac{m}{\mu^k t^{(0)}}
\end{align}

즉, barrier method로 원하는 accuracy level $\epsilon$에 도달하려면 다음 centering step 수에 첫번째 centering step인 1을 더한 횟수의 step이 필요하다.

>\begin{align}
\frac{log(m/(t^{(0)}\epsilon))}{\log \mu} + 1
\end{align}

따라서, $O(\log 1/\epsilon )$으로 linear convergence임을 알 수 있다. 

Newton's method는 $O(\log \log 1/\epsilon ) $로 quadratic convergence이지만 이 경우 문제가 매우 어렵기 때문에 linear convergence가 그렇게 나쁜 결과는 아니다.

Linear convergence와 quadratic convergence의 정의는 Wiki를 참고하라.<br>
* 참고 : [Rate of convergnece](https://en.wikipedia.org/wiki/Rate_of_convergence)

</br> </br>

# 15-06 Barrier method v.2

</br> </br>

이전 알고리즘에서는 central path에 있는 solution을 생성했는데, 실제 centeral path는 optimal로 가는 과정("means to an end")일 뿐이다. 따라서, 문제를 정확히 풀 필요는 없다.

## Barrier method v.2
이런 이유로 Barrier method v.2은 barrier problem을 approximation해서 풀게 된다.

#### Algorithm
알고리즘의 단계는 Barrier method v.1과 동일하다. 

단, 단계 2의  $x^{(0)} \approx x^\*(t)$와 단계 3-2의 $x^{(k+1)} \approx x^\*(t)$ 부분이 approximation으로 바뀌었다.

1. $t^{(0)} \gt 0$이고 $k := 0$을 선택한다.
2. $t = t^{(0)}$에서 barrier problem을 풀어서 $x^{(0)} \approx x^\*(t)$을 구한다.
3. While $m/t \gt \epsilon$ <br>
  3-1. $t^{(k+1)} \gt t^{(k)}$를 선택한다. <br>
  3-2. Newton's method를 $x^{(k)}$로 초기화한다. (warm start)<br>
        $t = t^{(k+1)}$에서 barrier problem을 풀어서 $x^{(k+1)} \approx x^\*(t)$을 구한다.<br>
  end while<br>


#### Important issues (can be formalized):
Barrier method v.2에서는 다음 두 가지 사항이 매우 중요하다.<br>

* 얼마나 근사를 잘 할 수 있는가? (How close should each approximation be?)
* Centering step 별로 얼마나 많은 newton step이 필요한가? (How many Newton steps suffice at each centering step?)

## Example of LP
다음 그림을 보면 $m$개 constraint를 갖는 문제에 대해 barrier method를 실행해 보면 $m$의 크기가 커지더라도 linear convergence를 한다는 것을 볼 수 있다. 즉, $m$에 대해 log scale을 갖는다.

![](https://wikidocs.net/images/page/21320/15_barrier_methodv2_04.PNG) <br>
**[Fig 1] $m$에 대해 newton iteration과 suboptimality gap 분석 [1]**

다르게 보면 ($10^4$인 초기 suboptimal gap (duality gap)을 줄이기 위해 필요한) newton step은 $m$에 대해 천천히 증가한다. 아래 그림을 보면 $m$이 크게 증하하더라도 각 centering step 별로 20~30 newton step 정도만 필요하다. 단, 한 newton step은 문제의 크기에 따라 크게 달라진다.

![](https://wikidocs.net/images/page/21320/15_barrier_methodv2_05.PNG)  <br>
**[Fig 2] $m$의 증가와 newton iteration 수 분석 [1]**

</br> </br>

# 15-07 Feasibility methods

</br> </br>

지금까지 첫번째 centering step($t = t^{(0)}$)에서 $x^{(0)} = x^\*$를 계산하기 위해 strictly feasible point에서 시작한다고 암묵적으로 가정을 했다. 

이 점은 $x$는 다음과 같은 조건을 만족하는 strictly feasible point이다.
>$ h_i(x) \lt 0, \quad i = 1, \cdots, m, \quad Ax = b$

## Maximum infeasibility
어떻게 $x$를 구할까? 다음 문제를 풀어서 구할 수 있다.

>
\begin{align}
\min_{x, s} & \quad s \\\
\text{subject to } & \quad h_i(x) \le s, \quad i = 1, \cdots, m \\\
                        & \quad Ax = b \\\
\end{align}

목표는 solution $s$이 음수가 되게 하는 것이다. 이 문제를 **feasibility method**라고 한다.

Strictly feasible starting point를 구하는 것은 쉽기 때문에 barrier method를 이용해서 풀 수도 있다. 즉, inequality constraint인 $h_i(x) \le s$에 slack 변수를 추가해서 equality constraint로 바꾸어 풀면 된다.

이 문제를 풀 때 high accuracy를 만족할 필요는 없으며 feasible $s < 0$인 $(x,s)$를 찾기만 하면 된다.

## Infeasibility for each inquality contstraint
다음과 같이 문제를 정의해서 풀 수도 있다. 앞에 방법은 모든 inequality의 maximum infeasbility를 찾는 문제였다면 이 문제는 각 inequality 별로  infeasible variable $s_i, i = 1, \cdots, m$를 찾는 문제이다.
>
\begin{align}
\min_{x, s} & \quad 1^Ts \\\
\text{subject to } & \quad h_i(x) \le s_i, \quad i = 1, \cdots, m \\\
                        & \quad Ax = b \\\
\end{align}

이 방법의 장점은 solution인 $s$를 보면 문제가 infeasible한지 알 수 있다는 것이다. 즉, $s$의 요소가 0이상이면 해당 constraint는 만족되지 않는다.

</br> </br>

# 15-08 Formal barrier method

</br> </br>

Open convex set $D \subset \mathbb{R}^n$로 정의되는 convex function $\phi : D \to \mathbb{R}$가 다음의 조건을 만족시키면, 그 function은 파라미터 $\nu$를 갖는 **self-concordant barrier**이다.

* $\phi$는 self-concordant
* 모든 $x \in D$에 대해 다음과 같이 상수 $\nu$에 bound되는  newton decrement를 갖는다.

> $\lambda(x)^2 = \nabla \phi(x) (\nabla^2 \phi(x))^{-1} \nabla \phi(x) \le \nu$

다음 LP 문제를 고려해보자. (여기서 $\bar{D}$는 domain $D$의 closure이다.)
>
\begin{align}
\min_{x} & \quad c^Tx \\\
\text{subject to } & \quad x \in \bar{D}  \\\
\end{align}

이 문제는 다음과 같은 문제로 근사된다.
>
\begin{align}
\min_{x} & \quad tc^Tx + \phi(x) \\\
\end{align}

여기서, $\phi_t(x) := tc^Tx + \phi(x)$라고 하고 이에 해당하는 newton decrement를 $\lambda_t(x)$라고 하자.

Key observation : $t^+ \gt t$의 경우
>
\begin{align}
\lambda\_t^+(x) \le \quad \frac{t^+}{t}\lambda_t^+(x) + \left ( \frac{t^+}{t} -1 \right ) \sqrt{\nu}  \\\
\end{align}

## Theorem

>
\begin{align}
& \text{if} \quad \lambda\_t(x) \le \frac{1}{9} \quad \text{and} \quad \frac{t^+}{t} \le 1 + \frac{1}{8 \sqrt{\nu}} \quad \text{then} \quad \lambda\_t^+(x^+) \le \frac{1}{9}  \\\
& \qquad \qquad \text{for} \quad x^+ = x - (\nabla^2 (\phi_{t^+}(x))^{-1} \nabla (\phi_{t^+}(x)
\end{align}

결론적으로 $\lambda_{t^{(0)}}(x^{(0)}) \lt \frac{1}{9}$가 되도록 $x^{(0)}, t^{(0)}$으로 시작하고 $\mu := 1 + \frac{1}{8 \sqrt(\nu)}$으로 선택한다면, 각 centering step마다 한 newton step이면 충분하다.


</br> </br>

# (비공개) 참고 _ conic programming by 윤성진

</br> </br>

>
\begin{align}
\min_{x, z} & \;  f(x) + g(z)  \; \text{for} \;  f(x) = c^Tx + I_K(x), \; g(z) = I_{\\{b\\}}(z) \\\
\text{subject to} & \; z  =Ax \\\
\end{align}

이므로 

>
\begin{align}
\min_{x, z} & \; c^Tx + I_K(x) + I_{\\{b\\}}(z)  \\\
\text{subject to} & \;  z   =Ax \\\
\end{align}

이 식에서 Lagrange를 구해서 x에 대해서 minimization을 하면 다음과 같다.
>
\begin{align}
& \max_{y} \; \min_{x, z} \;  L(x, z, y) \\\
= \; & \max_{y} \; \min_{x, z} \;  c^Tx + I_K(x) + I_{\\{b\\}}(z) + y^T(z-Ax) \\\
= \; & \max_{y}  \;\min_{x, z} \; (c - y^TA)^Tx  + I_K(x) \;+ \;  y^Tz + I_{\\{b\\}}(z) \\\
= \; & \max_{y} \;  \min_{x, z} \; -( (y^TA - c)^Tx  - I_K(x)) \;  - \; ( - y^Tz - I_{\\{b\\}}(z) ) \\\
= \; & \max_{y} \; - I_K^\*(y^TA - c)  -  I_{\\{b\\}}^\*(-y)  \\\
= \; & \max_{y} \; - I_{-K^\*}(y^TA - c)  - I_{-\\{b\\}^\*}(-y)  \\\
\end{align}

$I_{-K^\*}(y^TA - c)$는 다음과 같이 constraint로 표현될 수 있다. (의견 : 아래 $y^TA - c = -s$ 표현이 조금 어색한데 괜찮을지 모르겠네요.)
>
\begin{align}
y^TA - c & = -s, \; -s \in -K^\* \\\
y^TA + s & = c, \; s \in K^\* \\\
\end{align}

나머지는 다음과 같이 정리해 볼 수 있다. (의견 : 아래 $I_{\\{b\\}}(b)$ 부분 표기가 set 이름도 b이고 변수고 b이어서 조금 애매하네요. $b^Ty$랑 변수 명 맞추려다 보니 이렇게 됐는데 어떻게 해야 좋을까요? )
>
\begin{align}
\max_{y, s} \;  & -(-b^Ty - I_{\\{b\\}}(b)) \\\
\text{subject to} & \; y^TA + s = c \\\
&  \; s \in K^\* \\\
\end{align}

$I_{\\{b\\}}(b)$는 제거할 수 있으므로 다음과 같이 정리할 수 있다. (의견 : $I_{\\{b\\}}(b)$는 제거할  때 b에 대한 제약조건이 붙어야 할 것 같은데 그냥 제거해도 되는지... 이 부분 조금 헷갈립니다.)

>
\begin{align}
\max_{y, s} &  \;  b^Ty  \\\
\text{subject to} & \; y^TA + s = c \\\
&  \; s \in K^\* \\\
\end{align}

</br> </br>

# 16 Duality Revisited

</br> </br>

이번 장에서는 Primal-Dual Interior-Point method를 다루기에 앞서 duality에 대한 필수적인 사전지식을 정리한다. Primal-Dual Interior-Point method는 Barrier method의 확장판이라 볼 수 있으며, 내용을 풀어가는 과정에서 duality의 개념이 핵심적인 주제로 등장한다.

## References and further readings

* O. Guler (2010), “Foundations of Optimization”, Chapter 11.
* J. Renegar (2001), “A mathematical view of interior-point methods in convex optimization,” Chapters 2 and 3.
* S. Wright (1997), “Primal-dual interior-point methods”, Chapters 5 and 6.

</br> </br>

# 16-01 Lagrangian duality revisited

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

이번 절에서는 Lagrangian을 이용하여 primal problem과 dual problem을 정의할 수 있음을 보이고, 이 정의를 이용하여 standard form의 linear programming 및 quadratic programming의 dual problem을 유도해볼 것이다. 나아가 barrier problem이 적용된 linear programming의 dual problem을 유도해봄으로써, 그 형태가 linear programming의 dual problem에 대한 barrier problem과 같음을 보일 것이다.

<br/>
우선 primal problem과 Lagrangian을 다음과 같이 정의해보자.

#### Primal problem
>$$
>\begin{align}
>    \mathop{\text{minimize}}\_x &\quad f(x) \\\\
>    \text{subject to} &\quad h\_i(x) \leq 0, i = 1, \ldots, m \\\\
>    &\quad l_j(x) = 0, j = 1, \ldots, r
>\end{align}
>$$

#### Lagrangian
>$$
>L(x,u,v) = f(x) + \sum_{i=1}^m u_i h_i (x) + \sum_{j=1}^r v_j l_j (x)
>$$

<br/>
이때 primal problem과 dual problem은 Lagrangian에 대한 문제로 재정의할 수 있다.

#### Rewrited primal problem
>$$
>\min_x \mathop{\max_{u,v}}\_{u \geq 0} L(x,u,v)
>$$

재정의된 primal problem은 제약조건을 명시하고 있지 않지만, 제약조건을 위반하는 임의의 infeasible $x$에 대해 indicator function처럼 동작하는 효과가 있다.

1. 어떤 $i \in [1, m]$에 대해 $h_i(\hat{x}) \gt 0$이면 $\hat{x}$는 infeasible point다. 이때 $\max_{u,v}$에 의해 $u_i h_i(\hat{x})$는 $\infty$로 발산하므로 inequality constraint를 위반하는 임의의 $\hat{x}$에 대해 indicator function으로 동작한다.
2. 어떤 $i \in [1, r]$에 대해 $l_i(\hat{x}) \neq 0$이면 $\hat{x}$는 infeasible point다. 이때 $\max_{u,v}$에 의해 $v_i l_i(\hat{x})$는 $\infty$로 발산하므로 equality constraint를 위반하는 임의의 $\hat{x}$에 대해 indicator function으로 동작한다.

#### Rewrited dual problem
>$$
>\mathop{\max_{u,v}}\_{u \geq 0} \min_x L(x,u,v)
>$$

Dual problem에서는 정의역에 대한 relaxation이 필요하므로 primal problem의 제약조건에 대해 indicator function으로 동작해서는 안된다. 고정된 $u, v$에 대해 $\min_x$를 하는 것으로는 primal problem의 제약조건을 강제할 수 없기 때문에 재정의된 dual problem에서 또한 정의역을 relaxation하는 효과가 있다. (참고: [11-02 Lagrange dual function](https://wikidocs.net/20583))

## Weak and strong duality
Weak duality와 strong duality에 대해 다시 살펴보도록 한다.

#### Theorem: weak duality
$p$와 $d$가 primal problem과 dual problem에 대한 각각의 optimal value라고 할때, 항상 다음을 만족한다.
$$
p \ge d
$$

#### Theorem: strong duality (refined Slater's condition)
정의역 집합 $D$에 대해, $f, h_1, \dots, h_p$가 convex이고 $h_{p+1}, \dots, h_m, l_1, \dots, l_r$이 affine이라고 가정해보자. 만약 다음을 만족하는 $\hat{x} \in \text{relint}(D)$가 존재하면,
$$
h_i(\hat{x}) \lt 0, i=1, \dots, p\\\\ 
h_i(\hat{x}) \le 0, i=p+1, \dots, m\\\\
l_j(\hat{x}) = 0, j = 1, \dots, r
$$
primal problem과 dual problem의 optimal value $p, d$에 대해 $p = d$가 보장된다.

## Example: linear programming
앞서 정의한 dual problem을 이용하여 linear programming의 dual problem을 유도해보자.

#### Primal problem of LP in standard form
>$$
>\begin{align}
>    \mathop{\text{minimize}}\_x &\quad c^Tx \\\\
>    \text{subject to} &\quad Ax = b \\\\
>    &\quad x \ge 0
>\end{align}
>$$

앞선 정의에 따라 위 문제의 dual problem은 다음과 같다.
$$\mathop{\max_{s,y}}\_{s\ge0} \min_{x} \: L(x,s,y) = \mathop{\max_{s,y}}\_{s\ge0} \min_{x} \: c^Tx - s^Tx + (b-Ax)^T y$$

$\nabla_x L = 0$을 정리하여 얻은 관계식 $c=A^Ty +s$를 dual problem에 대입한다.

$$\mathop{\max_{s,y}}\_{s\ge0} \: (A^Ty + s)^Tx - s^Tx + (b-Ax)^Ty \quad \text{ s.t. } c=A^Ty +s$$

이는 아래와 같이 정리된다.

#### Dual problem of LP
>$$
>\begin{align}
>    \mathop{\text{maximize}}\_{s,y} &\quad b^Ty \\\\
>    \text{subject to} &\quad A^Ty +  s = 0 \\\\
>    &\quad s \ge 0
>\end{align}
>$$


## Example: convex quadratic programming
이번엔 앞서 정의한 dual problem을 이용하여 quadratic programming의 dual problem을 유도해보겠다.

#### Primal problem of QP in standard form
>$$
>\begin{align}
>    \mathop{\text{minimize}}\_x &\quad \frac{1}{2} x^T Q x + c^Tx \\\\
>    \text{subject to} &\quad Ax = b \\\\
>    &\quad x \ge 0,
>\end{align}
>$$
><center>where $Q$ is symmetric and positive semidefinite.</center>

앞선 정의에 따라 위 문제의 dual problem은 다음과 같다.
$$\mathop{\max_{s,y}}\_{s\ge0} \min_{x} \: L(x,s,y) = \mathop{\max_{s,y}}\_{s\ge0} \min_{x} \:  \frac{1}{2} x^T Q x + c^Tx - s^Tx + (b-Ax)^T y$$

$\nabla_x L = 0$을 정리하여 얻은 관계식 $Qx = A^Ty +s - c$를 dual problem에 대입한다.

$$
\begin{align}
&\mathop{\max_{s,y,x}}\_{s\ge0} \: \frac{1}{2} x^T (A^Ty +s - c) + c^Tx - s^Tx + (b-Ax)^T y \quad \text{ s.t. } Qx = A^Ty +s - c\\\\
&= \mathop{\max_{s,y,x}}\_{s\ge0} \: x^T (A^Ty +s - c) + c^Tx - s^Tx + (b-Ax)^T y -  \frac{1}{2} x^T (A^Ty +s - c) \quad \text{ s.t. } Qx = A^Ty +s - c\\\\
&= \mathop{\max_{s,y,x}}\_{s\ge0}  \: b^Ty - \frac{1}{2} x^T (A^Ty +s - c) \quad  \text{ s.t. } Qx = A^Ty +s - c\\\\
&= \mathop{\max_{s,y,x}}\_{s\ge0}  \: b^Ty - \frac{1}{2} x^T Q x \quad \text{ s.t. } Qx = A^Ty +s - c
\end{align}
$$

이는 아래와 같이 정리된다.

#### Dual problem of QP
>$$
>\begin{align}
>    \mathop{\text{maximize}}\_{s,y,x} &\quad b^Ty - \frac{1}{2} x^T Q x\\\\
>    \text{subject to} &\quad A^Ty +  s - c = Qx \\\\
>    &\quad s \ge 0
>\end{align}
>$$

Quadratic 문제의 dual problem은 또한 quadratic 문제가 된다.

## Example: barrier problem for linear programming
Linear programming에 대한 barrier problem은 다음과 같이 정의한다.

#### Barrier problem for LP
>$$
>\begin{align}
>    \mathop{\text{minimize}}\_x &\quad c^Tx - \tau \sum\_{i=1}^n \log(x_i)\\\\
>    \text{subject to} &\quad Ax = b, \\\\
>\end{align}
>$$
><center> where $\tau > 0$. </center>

앞선 정의에 따라 위 문제의 dual problem은 다음과 같다.
$$
\begin{align}
\max_{y} \min_{x} \: L(x,y) &= \max_{y} \min_{x} \:  c^Tx - \tau \sum\_{i=1}^n \log(x_i) + (b-Ax)^T y\\\\
&=  \max_{y} \min_{x} \:  \underbrace{(c-A^Ty)}\_{s \doteq c-A^Ty}x - \tau \sum\_{i=1}^n \log(x_i) + b^Ty\\\\
&= \max_{y} \min_{x} \: \sum\_{i=1}^n \big( s\_i^Tx\_i - \tau  \log(x_i) \big) + b^Ty  \quad \text{ s.t. } A^Ty +s = c
\end{align}
$$

여기서 $\sum\_{i=1}^n \big( s\_i^Tx\_i - \tau  \log(x_i) \big) + b^Ty$는 $x_i = \frac{\tau}{s\_i}$일때 최소화될 것이다. 그러므로 $\frac{\tau}{s\_i}$를 dual problem의 $x\_i$에 대입해보자.

$$
\begin{align}
&\max_{s,y} \: b^Ty + n\tau - \tau \sum\_{i=1}^n log(\frac{\tau}{s\_i}) \quad \text{ s.t. } A^Ty +s = c\\\\
&= \max_{s,y} \: b^Ty + \tau \sum\_{i=1}^n log(s\_i) + n\tau - n\tau\log(\tau) \quad \text{ s.t. } A^Ty +s = c\\\\
\end{align}
$$

$n\tau - n\tau\log(\tau)$는 문제에서 생략되어도 무방하므로, dual problem은 다음과 같이 정리된다.

#### Dual problem of Barrier problem for LP
>$$
>\begin{align}
>    \mathop{\text{maximize}}\_{s,y} &\quad b^Ty + \tau \sum\_{i=1}^n log(s\_i)\\\\
>    \text{subject to} &\quad A^Ty +  s = c \\\\
>\end{align}
>$$

Linear programming의 dual problem에 대한 barrier problem과 문제가 동일함을 알 수 있다.

</br> </br>

# 16-02 Optimality conditions

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

이번 절에서는 primal problem과 barrier problem에 대한 KKT optimality conditions를 각각 살펴보고 나아가 둘의 차이점을 비교해보도록 한다.
<br/>

## KKT optimality conditions

12장에서 다루어 보았던 KKT conditions를 다시 한 번 정리해보도록 하겠다. KKT conditions는 optimality를 판정하는 조건으로써 사용된다.

#### Primal problem
>$$
>\begin{align}
>    \mathop{\text{minimize}}\_x &\quad f(x) \\\\
>    \text{subject to} &\quad h\_i(x) \leq 0, i = 1, \ldots, m \\\\
>    &\quad l_j(x) = 0, j = 1, \ldots, r
>\end{align}
>$$

주어진 primal problem이 convex일때, KKT conditions는 primal & dual optimal에 대한 충분조건이 된다. 즉, $f, h_1, \dots, h_m$가 convex이고 $l_1, \dots, l_r$가 affine일때, $x^\star, u^\star, v^\star$가 다음의 KKT conditions를 만족한다면 $x^\star$와 $(u^\star, v^\star)$는 zero duality gap인 primal & dual optimal이다. ($f, h_1, \dots, h_m, l_1, \dots, l_r$는 미분 가능하다고 가정한다.) </br>

* 참고: [12-01 KKT conditions](https://wikidocs.net/20959)

#### KKT conditions for the given primal problem
>$$
>\begin{align}
>l\_i &= 0, \quad i=1, \dots, r\\\\
>u\_i^\star, -h\_i(x^\star) &\ge 0, \quad i=1, \dots, m\\\\
>u\_i^\star h\_i(x^\star) &= 0, \quad i=1, \dots, m\\\\
>\nabla f(x^\star) + \sum\_{i=1}^m \nabla h\_i(x^\star) u^\star\_i + \sum\_{i=1}^r \nabla l\_i(x^\star) v\_i^\star &= 0.\\\\
>\end{align}
>$$

## Central path equations

Barrier problem의 optimality를 판정하는 조건 또한 살펴보도록 하자.

#### Barrier problem

>$$
>\begin{align}
>    \mathop{\text{minimize}}\_x &\quad f(x) + \tau \phi(x) \\\\
>    &\quad l_j(x) = 0, j = 1, \ldots, r
>\end{align}
>$$
><center> where $\phi(x) = - \sum\_{i=1}^m \log \big( -h\_i(x) \big).$ </center>

Barrier problem에 대한 KKT conditions를 정리하면 아래와 같은 optimality conditions를 유도할 수 있다. 앞서 살펴본 primal problem에 대한 KKT optimality conditions의 inequality constraint, complementary slackness 조건에 대해 차이가 있는 것을 주목하자. (참고: [15-03-01 Perturbed KKT conditions](https://wikidocs.net/21311))

#### Optimality conditions for barrier problem (and its dual)

>$$
>\begin{align}
>l\_i &= 0, \quad i=1, \dots, r\\\\
>u\_i(t), -h\_i(x^\star(t)) &\gt 0, \quad i=1, \dots, m\\\\
>u\_i(t) h\_i(x^\star(t)) &= -\tau, \quad i=1, \dots, m\\\\
>\nabla f(x^\star(t)) + \sum\_{i=1}^m \nabla h\_i(x^\star(t)) u\_i(t) + \sum\_{i=1}^r \nabla l\_i(x^\star(t)) \hat{v}\_i^\star &= 0,\\\\
>\end{align}
>$$
><center> where $\tau = \frac{1}{t}, u_i(t) = - \frac{1}{t h_i(x^\star(t))}, \quad \hat{v} = \frac{1}{t}v.$ </center>

## Special case: linear programming

#### Recall: Primal problem of LP in standard form
>$$
>\begin{align}
>    \mathop{\text{minimize}}\_x &\quad c^Tx \\\\
>    \text{subject to} &\quad Ax = b \\\\
>    &\quad x \ge 0
>\end{align}
>$$

#### Recall: Dual problem of LP
>$$
>\begin{align}
>    \mathop{\text{maximize}}\_{s,y} &\quad b^Ty \\\\
>    \text{subject to} &\quad A^Ty +  s = c \\\\
>    &\quad s \ge 0
>\end{align}
>$$

Linear programming은 inequality constraint가 affine이므로 refined Slater's condition에 의해 항상 strong duality를 만족하는 좋은 성질을 지니고 있다. LP에 대한 optimality conditions는 다음과 같다.

>$$
>\begin{align}
>A^T y^\star + s^\star &= c\\\\
>Ax^\star &= b\\\\
>X S \mathbb{1} &= 0\\\\
>x^\star, s^\star &\ge 0,\\\\
>\end{align}
>$$
> <center>where $X = Diag(x^\star), S = Diag(s^\star)$.</center>

참고로 $X S \mathbb{1} = 0$는 $Xs^\star=(x\_1^\star s\_1^\star, \dots, x\_n^\star s\_n^\star)=0$와 같다. 차후 소개될 알고리즘에서의 편의성을 위해 $X, S$를 사용하여 표현하였다.

#### Algorithms for linear programming

Optimality conditions를 이용하여 LP를 푸는 대표적인 두 가지 방식을 소개한다.

1. Simplex: 1,2,3번째 조건을 유지하면서 4번째 조건을 차츰 만족하도록 하는 방식.
2. Interior-point methods: 4번째 조건을 유지하면서 1,2,3번째 조건을 점차 만족하도록 하는 방식. 다음 챕터에서 다루게 될 것이다.

## Central path for linear programming

#### Recall: Barrier problem for LP
>$$
>\begin{align}
>    \mathop{\text{minimize}}\_x &\quad c^Tx - \tau \sum\_{i=1}^n \log(x_i)\\\\
>    \text{subject to} &\quad Ax = b, \\\\
>\end{align}
>$$
><center> where $\tau > 0$. </center>

#### Recall: Dual problem of Barrier problem for LP
>$$
>\begin{align}
>    \mathop{\text{maximize}}\_{s,y} &\quad b^Ty + \tau \sum\_{i=1}^n log(s\_i)\\\\
>    \text{subject to} &\quad A^Ty +  s = c \\\\
>\end{align}
>$$

LP의 barrier problem에 대한 optimality conditions는 다음과 같다.

>$$
>\begin{align}
>A^T y^\star + s^\star &= c\\\\
>Ax^\star &= b\\\\
>X S \mathbb{1} &= \tau \mathbb{1}\\\\
>x^\star, s^\star &\gt 0,\\\\
>\end{align}
>$$
> <center>where $X = Diag(x^\star), S = Diag(s^\star)$.</center>

3, 4번째 조건에서 primal LP의 KKT conditions와 차이를 보인다.

</br> </br>

# 16-03 Fenchel duality

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

[13-04 Conjugate function](https://wikidocs.net/21001)에서 conjugate function을 이용해 dual problem를 유도하는 방법에 대해 알아보았다. Fenchel duality는 conjugate function으로 유도되는 dual problem 중에서도 아래의 형태를 한 것을 지칭한다.

$$
\max\_{v} -f^\*(A^Tv) - g^\*(-v)
$$

이 형태의 문제가 어디서부터 유도되는 것인지 알아보도록 하자.

#### Primal problem

> $$
> \min\_{x} \quad f(x) + g(Ax)
> $$

주어진 문제는 equality constraint가 추가된 형태로 재정의 할 수 있다.

#### Primal problem rewrited
> $$
> \begin{align}
> \min\_{x,z} &\quad f(x) + g(z)\\\\
> \text{subject to} &\quad Ax = z.
> \end{align}
> $$

Conjugate function을 이용하여 재정의한 primal problem의 dual problem을 유도해보자. <br/>

* **Recall:** $f^\*(s) \doteq  \max\_{x} \big( s^Tx - f(x) \big) = \min\_{x} \big( f(x) - s^Tx \big)$

<br/>
$$
\begin{align}
&\max\_{v} \min\_{x, z} \quad L(x,z,v)\\\\
= &\max\_{v} \min\_{x, z} \quad f(x) + g(z) + v^T (z - Ax) \\\\
= &\max\_{v} \min\_{x, z} \quad v^Tz + g(z) - (A^Tv)^Tx + f(x)\\\\
= &\max\_{v} \quad  -f^\*(A^Tv) - g^\*(-v)\\\\
\end{align}
$$

#### Fenchel duality
> $$
> \max\_{v} -f^\*(A^Tv) - g^\*(-v)
> $$

* **Nice Property:** $f, g$가 convex이고 닫혀있으면(closed), dual의 dual은 다시 primal이 된다. (Symmetric)

## Example: conic programming

#### Primal problem of CP in standard form
>$$
>\begin{align}
>    \mathop{\text{minimize}}\_x &\quad c^Tx \\\\
>    \text{subject to} &\quad Ax = b \\\\
>    &\quad x \in K
>\end{align}
>$$

위 문제는 두 함수 $f(x) = c^Tx + I_K(x)$와 $g(z) = I_{\\{b\\}}(z)$를 이용하여 재정의할 수 있다.<br/>

* **Note:** $\begin{equation}
    f(x) + g(Ax) = 
    \begin{cases}
      0, & \text{if}\ Ax=b, x \in K \\\\
      \infty, & \text{otherwise}
    \end{cases}
  \end{equation}$

#### Primal problem of CP rewrited

> \begin{align}
> \min_{x, z} &\quad  f(x) + g(z)\\\
> \text{subject to} &\quad z  =Ax \\\
> \end{align}

#### Deriving dual problem of CP

재정의된 CP의 primal problem으로부터 dual problem을 유도해보자. 우선 함수 $f$와 $g$를 전개하면 아래와 같다.
> $$
> \begin{align}
> \min_{x, z} & \; c^Tx + I_K(x) + I_{\\{b\\}}(z)  \\\
> \text{subject to} & \;  z   =Ax \\\
> \end{align}
> $$

Dual problem의 정의로부터 conjugate function을 이용하여 문제를 전개해보자.

> $$
> \begin{align}
> & \max_{y} \; \min_{x, z} \;  L(x, z, y) \\\
> = \; & \max_{y} \; \min_{x, z} \;  c^Tx + I_K(x) + I_{\\{b\\}}(z) + y^T(z-Ax) \\\
> = \; & \max_{y}  \;\min_{x, z} \; (c - A^Ty)^Tx  + I_K(x) \;+ \;  y^Tz + I_{\\{b\\}}(z) \\\
> = \; & \max_{y} \;  \min_{x, z} \; -( (A^Ty - c)^Tx  - I_K(x)) \;  - \; ( - y^Tz - I_{\\{b\\}}(z) ) \\\
> = \; & \max_{y} \; - I_K^\*(A^Ty - c)  -  I_{\\{b\\}}^\*(-y)  \\\
> = \; & \max_{y} \; - I_{-K^\*}(A^Ty - c)  - I_{\\{b\\}}^\*(-y)  \\\
> \end{align}
> $$

$I_{-K^\*}(A^Ty - c)$는 constraint로 표현될 수 있다.

> $$
> \begin{align}
> A^Ty - c & = -s, \; -s \in -K^\* \\\
> \Leftrightarrow A^Ty + s & = c, \; s \in K^\* \\\
> \end{align}
> $$

$I\_{\\{b\\}}^\*(-y) = \max\_{b} -b^Ty - I\_{\\{b\\}}(b)$이므로 문제는 다음과 같이 정리된다.
> $$
> \begin{align}
> \max_{y, s} \;  & -(-b^Ty - I_{\\{b\\}}(b)) \\\
> \text{subject to} & \; y^TA + s = c \\\
> &  \; s \in K^\* \\\
> \end{align}
> $$

$I_{\\{b\\}}(b) = 0$이므로 문제에서 제거할 수 있다.

#### Dual problem of CP

> $$
> \begin{align}
> \max_{y, s} &  \;  b^Ty  \\\
> \text{subject to} & \; y^TA + s = c \\\
> &  \; s \in K^\* \\\
> \end{align}
> $$ 

* Primal problem과 dual problem중 하나라도 strictly feasible하다면 strong duality를 만족한다.
* Primal problem과 dual problem 둘 다 strictly feasible하다면 strong duality를 만족하고 primal & dual optima가 존재한다.

## Example: semidefinite programming
SDP에 대한 primal & dual problem과 SDP의 barrier problem에 대한 primal & dual problem의 형태를 살펴보도록 하자.

#### Primal problem of SDP
>$$
>\begin{align}
>    &\mathop{\text{minimize}}\_{X} &&{tr(CX)} \\\\
>    &\text{subject to } &&{tr(A\_iX) = b\_i, \phantom{5} i=1,\dotsc,p} \\\\
>    & &&{X \succeq 0},\\\\
>    & \text{where } C, A\_1, \dotsc, A\_p \in \mathbb{S}^n.
>\end{align}
>$$

* **Recall:** $tr(CX) = \sum\_{i,j=1}^n C\_{ij}X\_{ij}$
* **Note:** SDP는 LP와 달리 항상 strong duality를 만족하는 것은 아님을 유의하자.

#### Dual problem of SDP
>$$
>\begin{align}
>    &\mathop{\text{minimize}}\_{y} &&{b^Ty} \\\\
>    &\text{subject to } &&{\sum\_{i=1}^m y\_i A\_i + S = C} \\\\
>    & &&{S \succeq 0}.\\\\
>\end{align}
>$$

* **Note:** Positive semidefinite cone은 self-dual cone이다. ($(\mathbb{S}\_{+}^n)^\* = \mathbb{S}\_{+}^n$)

#### Primal problem of Barrier problem for SDP
>$$
>\begin{align}
>    &\mathop{\text{minimize}}\_{X} &&{tr(CX) - \tau \log \big( det(X) \big)} \\\\
>    &\text{subject to } &&{tr(A\_iX) = b\_i, \phantom{5} i=1,\dotsc,p} \\\\
>    & \text{where } C, A\_1, \dotsc, A\_p \in \mathbb{S}^n.
>\end{align}
>$$

#### Dual problem of Barrier problem for SDP
>$$
>\begin{align}
>    &\mathop{\text{minimize}}\_{y, S} &&{b^Ty +  \tau \log \big( det(S) \big)} \\\\
>    &\text{subject to } &&{\sum\_{i=1}^m y\_i A\_i + S = C}.
>\end{align}
>$$

</br> </br>

# 17 Primal-Dual Interior-Point Methods

</br> </br>

본 장에서는 앞서 배운 Barrier method의 centering step을 한 단계로 줄여서 성능을 개선한 **Primal-Dual Interior-Point Method**를 살펴볼 것이다. 

**Primal-Dual Interior-Point Method**는 centering step에서 반드시 feasible해야 한다는 제약조건을 완화하고  Newton's Method의 root finding 버전을 이용하여 비선형 방정식을 선형 방정식으로 근사하여 해를 구하는  방식으로 Barrier method에 비해 빠르고 정확도가 높다.

## References and further readings
* S. Boyd and L. Vandenberghe (2004), “Convex optimization,” Chapter 11
* S. Wright (1997), “Primal-dual interior-point methods,” Chapters 5 and 6
* J. Renegar (2001), “A mathematical view of interior-point methods”
* Y. Nesterov and M. Todd (1998), “Primal-dual interior-point methods for self-scaled cones.” SIAM J. Optim.

</br> </br>

# 17-01 Barrier method & duality & optimality revisited

</br> </br>

15장에서 barrier method에 대해, 13장과 16장에서는 duality에 대해 살펴보았다.
본 장의 내용을 다루기 전에 barrier method와 duality에 대해 간단하게 다시 정리해 보고자 한다.



## Barrier method
아래와  같은 primal 문제가 convex이고 $f, h_i , i = 1, . . . m$가 미분가능 할 때,   
> $$\begin{align}
\min_{x} & \quad f(x) \\\
\text{subject to } & \quad h_{i}(x) \leq 0, i = 1, \dotsc, m \\\
& \quad Ax = b \\\
\end{align}$$

Log barrier function을 사용하여 다음과 같이 primal 문제를 barrier 문제로 바꿀 수 있다.

> $$\begin{align}
\min_{x} & \quad f(x) + \frac{1}{t} \phi(x) & & \min_{x} & \quad tf(x) + \phi(x) \\\
\text{subject to } & \quad Ax = b & \iff \qquad & \text{subject to } & \quad Ax = b \\\
\end{align}$$

> where $\begin{align}
\phi(x) = - \sum_{i=1}^{m} \log(-h_i(x))
\end{align}$

알고리즘은 $t > 0$를 만족하는 $t = t^{(0)}$에서 시작해서 $\frac{m}{t}$가 $\epsilon$보다 작거나 같아질 때까지 증가시킨다. 이때, Newton's method를 이용해 초기값 $x^{(0)}$에 대한 $x^{\star}(t)$를 구하고 $k = 1, 2, 3, . . .$에 대해 각 단계에서  $x^{(k+1)} = x^{\star}(t)$를 구하는 과정을 반복 한다.

알고리즘을 간략히 정리하면 다음과 같다.

1. $t^{(0)} \gt 0$이고 $k := 0$을 선택한다.
2. $t = t^{(0)}$에서 barrier problem을 풀어서 $x^{(0)} = x^{\star}(t)$을 구한다.
3. While $m/t \gt \epsilon$ <br>
  3-1. $t^{(k+1)} = µt$로 업데이트 한다. $(µ > 1)$ <br>
  3-2. Newton's method를 $x^{(k)}$로 초기화한다. (warm start)<br>
        $t = t^{(k+1)}$에서 barrier problem을 풀어서 $x^{(k+1)} = x^{\star}(t)$을 구한다.<br>
  end while<br>

* 자세한 내용은  [15-01-02 Log barrier function & barrier method](https://wikidocs.net/21305) 참조
## Duality
다음과 같은 primal 문제가 주어졌을 때, 
>$$
>\begin{align}
>    \mathop{\text{minimize}}\_x &\quad f(x) \\\\
>    \text{subject to} &\quad f Ax = b \\\\
>    &\quad h(x) \le 0
>\end{align}
>$$

이를 Lagrangian 형태로 바꾸면 다음과 같이 바꿀 수 있다.
>$$
>L(x,u,v) = f(x) + u^Th(x) + v^T(Ax - b)
>$$

이와 같이 정의된 Lagrangian을 이용해서 primal과 dual problem을 다음과 같은 형태로 다시 정의할 수 있다. 자세한 내용은 16장을 다시 살펴보기 바란다.</br>
#### Primal Problem
>$$
>\min_x \mathop{\max_{u,v}}\_{u \geq 0} L(x,u,v)
>$$

#### Dual problem
>$$
>\mathop{\max_{u,v}}\_{u \geq 0} \min_x L(x,u,v)
>$$

## Optimality conditions

$f,h_1,...h_m$은 convex 이고 미분 가능하고, 또한 주어진 문제가 strong duality를 만족한다고 가정할 때, 이 문제에 대한 KKT 최적 조건(optimality condition)은 아래와 같다.

> $$
> \begin{array}{rcl}
> ∇f(x) +∇h(x)u + A^Tv & = & 0 & \text{(Stationarity)}\\\
>  Uh(x) & = & 0 & \text{(Complementary Slackness)} \\\
> Ax & = & b & \text{(Primal Feasibility)}\\\
> u,−h(x)  & ≥ & 0 & \text{(Dual Feasibility)}
> \end{array}
> $$

여기서 $U$는 $\text{diag}(u)$를 뜻하며, $∇h(x)$는 $ \[ ∇h_1(x) ··· ∇h_m(x) \]$를 의미한다.

* 자세한 내용은 [12장 KKT conditions](https://wikidocs.net/20959) 참조

## Central path equations
함수 $f(x)$를 barrier 문제로 아래와 같이 재정의 할 수 있다.</br>
아래 수식에서 $τ$는 $\frac{1}{t}$이며 $\tau$를 점점 0에 가깝게 해서 반복적으로 해를 구함으로써 최종적으로 원래 문제의 해를 구하게 된다.

>$$
>\begin{align}
>    &\min_{x} && {f(x) + τ\phi(x)} \\\\
>    & &&{Ax = b} \\\
>\end{align}
>$$
> $$\text{where } \phi(x) = −\sum_{i=1}^m \log(−h_i(x)).$$

즉, 위 식에서 $τ$에 따라 primal 문제와의 차이가 발생하며, $τ$에 따라 생기는 궤적 즉, barrier 문제에 대한 해의 집합을 central path라고 한다.

그리고 이 barrier 문제에 대한 optimality conditions은 다음과 같다.
> $$
> \begin{array}{rcl}
> ∇f(x) +∇h(x)u + A^Tv  & = & 0 \\\
> Uh(x) & = & −τ\mathbb{1} \\\
> Ax & = & b \\\
> u,−h(x)  & > & 0
> \end{array}
> $$
 
* 자세한 내용은 [16-02 Optimality conditions](https://wikidocs.net/22012) 참조

이번 장에서 소개할 **Primal-Dual interior point method**는 위의 처음 세 가지 식을 residual로 정의하고 이를 $0$으로 줄이면서 해를 구하는 방식이다.

##### Useful fact
솔루션 $(x(τ),u(τ),v(τ))$는 다음의 $mτ$ 즉 $\frac{m}{t}$ 크기 만큼의 duality gap을 갖는다.
> $f(x(τ))−\min_x L(x,u(τ),v(τ)) = mτ= \frac{m}{t}$



</br> </br>

# 17-02 Primal-dual interior-point method

</br> </br>

Barrier method와 같이 **primal-dual interior-point method**도 central path 위의 점을 (근사적으로) 계산하는 것을 목표로 한다. 그러나 두 가지 방법은 여러 차이점이 있다.

## Primal-dual interior-point method와 barrier method의 차이점
* 일반적으로 iteration 별로 **한 번의 뉴턴 스텝**을 실행한다. (즉, 센터링 스텝을 위한 추가 반복문이 없다.)
* **반드시 feasible일 필요는 없다**.  (Backtracking line search를 통해 feasible한 곳으로 밀어준다.)
* 일반적으로 **더 효과적**이다. 특히 적절한 조건 위에서 linear convergence보다 뛰어난 성능을 보인다.
* Barrier method에 비해 조금은 덜 직관적이다.


</br> </br>

# 17-02-01 Central path equations and Newton step

</br> </br>

**Primal-dual interior-point method**는 barrier method와 마찬가지로 central path를 찾아서 해를 구하는 방식이다. 그러기 위해 perturbed KKT conditions를 residual 함수로 정의하고 이를 0으로 만드는 해를 찾는다. 이 절에서는 이와 같은 접근 방식을 설명하려고 한다.

## Central path equations
앞의 [17-01 Optimality conditions](https://wikidocs.net/21644)에서 설명했던 central path equations에서 우항을 좌항으로 옮기면 다음과 같이 정리할 수 있다. (Central path equations의 optimality condition을 perturbed KKT conditions라고도 한다.)
> $$
> \begin{array}{rcl}
> ∇f(x) +∇h(x)u + A^Tv & = & 0 \\\
>  Uh(x) + \tau\mathbb{1}  & = & 0 \\\
> Ax−b & = & 0 \\\
> u,−h(x)  & > & 0
> \end{array}
> $$

원래 문제에 대한 KKT conditions에서의 complementary slackness와 inequality constraint가 perturbed KKT conditions에서와 다르다는 점을 유의해서 보자. 원래 문제의 경우 $Uh(x) = 0$ 그리고 $u,−h(x)  \ge 0$이지만, perturbed KKT conditions에서는 $Uh(x) = - \tau\mathbb{1}$ 그리고 $u,−h(x)  \gt 0$이다.

이렇게 정리된 비선형 방정식인 perturbed KKT conditions는 Newton's method의 root finding 버전을 이용해서 선형 방정식으로 근사해서 해를 구할 수 있다.

## Newton step
그러면 perturbed KKT conditions를 선형으로 근사하여 해를 구해는 방법에 대해 알아보자. Perturbed KKT conditions 식을 다음과 같은 residual의 함수 $r(x, u, v) = 0$로 정의할 수 있다. (함수 이름이 residual인 이유는 이 값들이 0이 되어야 optimal이 되기 때문이다.)

> $$r(x,u,v) :=
> \begin{bmatrix}
> ∇f(x) +∇h(x)u + A^Tv \\\
> Uh(x) + τ\mathbb{1} \\\
> Ax−b
> \end{bmatrix}, H(x) = \text{Diag}(h(x))$$

함수의 근을 찾기 위해 $r(x, u, v)$을 Taylor 1차식으로 근사하면 다음과 같다. (이 과정은 non-linear equation을 linear equation으로 근사하는 과정으로 자세한 내용은 [14-02-01 Root finding](https://wikidocs.net/21332)을 참조)
>\begin{align}
0 & = r(x + \Delta x, u + \Delta u, r + \Delta v)  \\\\
  & \approx r(x, u, v) + \nabla r(x, u, v) 
\begin{pmatrix}
\Delta x \\\\
\Delta u \\\\
\Delta v \\\\
\end{pmatrix} \\\\
\end{align}

이에 따라 함수 $r(x, u, v)$은 다음과 같이 정리할 수 있다.

>\begin{align}
\nabla r(x, u, v) 
\begin{pmatrix}
\Delta x \\\\
\Delta u \\\\
\Delta v \\\\
\end{pmatrix} = -r(x, u, v) \\\\
\end{align}

$r(x, u, v)$을 $x, u, v$에 대해 미분하여 Jacobian matrix $\nabla r(x, u, v)$을 구한 후 위의 식을 대입해 보면 아래와 같다.
> $$\begin{bmatrix}
> \nabla^2f(x) + \sum_i u_i \nabla^2h_i(x) & \nabla h(x) & A^T \\\
>  U \nabla  h(x)^T & H(x) & 0 \\\
> A & 0 & 0
> \end{bmatrix}
> \begin{bmatrix}
> \Delta x \\\
> \Delta u \\\
> \Delta v
> \end{bmatrix} = −r(x,u,v)$$
> where
> $$r(x,u,v) :=
> \begin{bmatrix}
> \nabla f(x) +\nabla h(x)u + A^Tv \\\
> Uh(x) + τ\mathbb{1} \\\
> Ax−b
> \end{bmatrix}, H(x) = \text{Diag}(h(x))$$

이 식의 해인 $(\Delta x, \Delta u, \Delta v)$는 primal, dual 변수의 업데이트 방향이다. 이 장에서 소개할 방법을 **Primal-Dual** interior point method라고 부르는 이유는 residual 함수를 이용해서 primal, dual 변수를 동시에 업데이트하기 때문이다.

</br> </br>

# 17-02-02 Surrogate duality gap, residuals

</br> </br>

Primal-Dual 알고리즘을 정의하기 위해 먼저 세 가지 residual 종류와 surrogate duality gap을 정의해보자. Residual과 surrogate duality gap은 Primal-Dual 알고리즘에서 최소화해야 할 목표이다.

## Residuals
$(x,u,v)$에서의 dual, central, primal residual는 다음과 같이 정의된다. 

> $$r_{dual} = \nabla f(x) +\nabla h(x)u + A^Tv$$
> $$r_{cent} =  Uh(x) + τ\mathbb{1}$$ 
> $$r_{prim} = Ax−b$$

이들은 함수 $r(x,u,v)$의 각 row에 해당된다. **Primal-dual interior point method**는 이 세 가지 residual이 계속해서 0이 되게하기 보다는 0을 만족하는 방향으로 실행한다. 즉, 실행 과정에서 반드시 feasible일 필요는 없다는 이야기이다.

$r_{dual}$를 dual residual이라고 부르는 이유는 아래 식에서와 같이 $r_{dual} = 0$이면 $u, v$가 $g$의 domain에 있다는 것을 보장하게 되며 이는 곧 dual feasible임을 의미하기 때문이다.

>\begin{align}
& r_{dual} = \nabla f(x) +\nabla h(x)u + A^Tv = 0 \\\\
& \iff \min_{x} L(x,u.v) = g(u,v) \\\\
\end{align}

비슷하게 $r_{prim}=0$을 만족하면 primal feasble하기 때문에 $r_{prim}$을 primal residual이라고 부른다.

## Surrogate duality gap
Barrier method는 feasible하기 때문에 duality gap이 존재하지만, primal-dual interior-point method는  반드시 feasible할 필요가 없기 때문에 **surrogate duality gap**을 사용한다. **Surrogate duality gap**은 다음 식으로 정의된다.

> $$−h(x)^Tu  \quad \text{for} \quad h(x) \le 0, u \ge 0$$ 

만일 $r_{dual} = 0$이고  $r_{prim} = 0$라면 surrogate duality gap은 true duality gap이 된다. 즉, primal and dual feasible하면 surrogate duality gap은 실제 duality gap $\frac{m}{t}$과 같아진다.

**[참고] Perturbed KKT 조건과 파라미터 t** <br>

* Perturbed KKT 조건에서 파라미터 t는 $t = −\frac{m}{h(x)^Tu}$이다. 
* 자세한 내용은 [15-03-01 Perturbed KKT conditions](https://wikidocs.net/21311)와 [15-03-02 Suboptimality gap](https://wikidocs.net/21312)을 참조

그리고, $u > 0,h(x) < 0$이고 아래의 조건을 만족하면 $(x,u,v)$는 central path 상에 존재하게 된다.

> $r(x,u,v) = 0$ for $\tau = -\frac{h(x)^Tu}{m}$

즉, central path 상에 존재하는 점에서 residual은 0이다.



</br> </br>

# 17-02-03 Primal-Dual Algorithm 

</br> </br>

Primal-Dual 알고리즘을 정의하기 위해 먼저 $\tau(x,u)$를 다음과 같이 정의하자
> $$\tau(x,u) := -\frac{h(x)^Tu}{m} \quad \text{with} \quad h (x) \le 0, u \ge 0$$

참고로 Barrier method에서의 $t$와 $\mu$를 Primal-Dual 알고리즘에서는 $\tau$와 $\sigma$로 재정의하여 표기한다.
> $$\tau = \frac{1}{t}, \quad \sigma = \frac{1}{\mu}$$
## Primal-Dual Algorithm 
Primal-Dual 알고리즘은 다음과 같다.
> 1. $\sigma$를 선택 ($\sigma ∈ (0,1)$)</br>
> 2. $(x^0,u^0,v^0)$를 선택 $(h(x^0) < 0$. $u^0 > 0$)</br>
> 3. 다음 단계를 반복 ($k = 0,1,... $)</br>
> $\quad$ * Newton step 계산 :</br>
> $\qquad \quad (x,u,v) = (x^k,u^k,v^k)$ </br>
> $\qquad \quad \tau := \sigma \tau(x^k,u^k)$ 계산</br>
> $\qquad \quad \tau$에 대해 $(\Delta x,\Delta u,\Delta v)$ 계산</br>
> $\quad$ * Backtracking으로 step length $θ_k$를 선택</br>
> $\quad$ * Primal-Dual 업데이트 :</br>
> $\qquad \quad (x^{k+1},u^{k+1},v^{k+1}) := (x^k,u^k,v^k) + \theta_k(\Delta x,\Delta u,\Delta v)$</br>
> 4. 종료 조건 : $-h(x^{k+1})^Tu \le \epsilon$ and $(\parallel r_{prim} \parallel^2_2 + \parallel r_{dual} \parallel^2_2)^{1/2} \le \epsilon $ 조건을 만족하면 중지 </br>

알고리즘은 각 단계 별로 Newton step을 실행하여 $(\Delta x,\Delta u,\Delta v)$를 계산하고  Primal-Dual 업데이트를 하여 $(x^{k+1},u^{k+1},v^{k+1})$를 구한다. 단, Backtracking line search를 통해 Primal-Dual 변수가 feasible해 지도록 $θ_k$를 선택한다. 알고리즘은 surrogate duality gap과 primal and dual residual이 $\epsilon$ 보다 작아지면 종료한다.


## Backtracking line search
Primer-Dual 알고리즘에서 Newton step을 한번만 실행하기 때문에 정확한 해을 찾기 보다는 해의 방향을 구한 것으로 볼 수 있다. 따라서, 그 방향으로 이동하면서 feasible set으로 들어올 수 있도록 적절한 step length를 구해야 한다.

즉, 알고리즘의 각 스텝에서 $θ$를 구해서 primal-daual 변수를 업데이트한다.

> $$x^+ = x + θ\Delta x, \quad  u^+ = u + θ\Delta u, \quad v^+ = v + θ\Delta v$$

이 과정에는 두 가지 주요 목표가 있다.

* $h(x) < 0, u > 0$의 조건을 유지하는 것
* $\parallel r(x,u,v) \parallel$을 감소시키는 것

이를 위해 다단계 백트랙킹 선형 검색(**multi-stage backtracking line search**)을 사용한다.

#### Stage 1: dual feasiblity $u \gt 0$
처음에는 $u + \theta \Delta u ≥ 0$를 만족하는 가장 큰 스텝 $\theta_{max} ≤ 1$으로 시작한다. 

> $$\theta_{\max} = \min \Biggl\\{1,\  \min \Bigl\\{ −\frac{u_i}{\Delta u_i} : ∆u_i < 0 \Bigr\\} \Biggr\\}$$

위의 식은 다음과 같이 유도된다.

> \begin{align}
&u + \theta \Delta u && \ge 0  \\\\
\Leftrightarrow \quad &u && \ge -\theta \Delta u \\\\
\Leftrightarrow \quad &- u/\Delta u && \ge \theta \quad  \text{ such that }-\Delta u \gt 0  \\\\
\end{align}

이는 $u$를 feasible하게 만드는 과정이다.

#### Stage 2: primal feasiblity $h(x) \lt 0$
그 다음엔 파라미터  $\alpha, \beta \in (0,1)$로 하고 $\theta$를 $0.99\theta_{max}$로 설정한 후 다음 업데이트를 수행 한다.

* $h_i(x^+) < 0, i = 1,...m$를 만족할 때까지, $θ = βθ$를 업데이트 </br>

이는 $x$를 feasible하게 만드는 과정이다.

#### Stage 3 : reduce $\parallel r(x,u,v) \parallel$
* $\| r(x^+,u^+,v^+) \| ≤ (1−\alpha \theta) \| r(x,u,v) \|$를 만족할 때까지, $\theta = \beta \theta$를 업데이트 

Stage 3의 update 식은 기존의 backtracking line search 알고리즘과 동일하다.

위의 식에서 우항은 다음과 같이 유도될 수 있다. 먼저 Newton's method에서 다음 결과를 얻는다.
> \begin{align}
\Delta w = (\Delta x, \Delta u, \Delta v) &\approx -r^{'}(w)^{-1} r(w) \\\\
\Leftrightarrow r(w)  &\approx  -r^{'}(w) \Delta w \\\\
\end{align}

위의 식에서 $r^{'}(w) \Delta w \approx -r(w)$이므로 이를 아래 Taylor 1차 근사식에 대입한다.
> \begin{align}
r(w + \theta \Delta w) & \approx r(w) +  r^{'}(w) (\theta \Delta w) \\\\
&\approx (1-\theta) r(w) \\\\
\end{align}

결과적으로 $r(w + \alpha \theta \Delta w) \approx (1-\alpha  \theta) r(w)$가 된다.


</br> </br>

# 17-03 Some history

</br> </br>

일반적으로 현대의 state-of-art LP Solver들은  Simplex method와 interior-point method를 모두 사용하고 있다.

* Dantzig(1940년대): Simplex 방법, LP의 general form을 푼 최초의 방식으로 Iteration 없이 exact solution을 구한다. 오늘날까지도 LP를 위한 가장 잘 알려지고 많이 연구되는 알고리즘 중 하나이다.

* Klee 및 Minty(1972) : $n$개의 변수와 $2n$개의 제약 조건을 갖는 pathological LP. Simplex method로 풀려면 $2^n$번 반복이 필요하다.

* Khachiyan (1979) : Nemirovski와 Yudin (1976)의 타원체 방법을 기반으로 한 LP의 polynormial-time 알고리즘으로 이론적으로는 강하나, 실제 문제에서는 그렇지 못하다.

* Karmarkar (1984) : interior-point polynomial-time LP 방법으로 상당히 효과적이며 breakthrough가 된 연구이다. (미국 특허 4,744,026, 2006년 만료).

* Renegar (1988) : LP를위한 Newton 기반 interior-point 알고리즘. Lee-Sidford의 최신 연구가 나올 때까지 이론적으로 가장 좋은 계산 복잡도를 갖고 있었다.

</br> </br>

# 17-04 Special case_ linear programming

</br> </br>

이 절에서는 LP(linear programming) 문제에 대한 Primer-Dual method의 예시를 살펴보자.

## Linear programming
다음과 같은 primal LP 문제가 있다.
>$$
>\begin{align}
>    &\min_{x} && {c^Tx} \\\\
>    &\text{subject to } && {Ax = b} \\\\
>    & &&{x ≥ 0} \\\
>\end{align}
>$$
>
> $$\text{for } c ∈R^n, A ∈R^{m×n}, b ∈R^m$$


위 primal LP 문제의 dual 문제는 아래와 같다.
>$$
>\begin{align}
>    &\max_{y,s}  && {b^Ty} \\\\
>    &\text{subject to } && {A^Ty + s = c} \\\\
>    & &&{s ≥ 0} \\\
>\end{align}
>$$


## Optimality conditions and central path equations
다음은 이전 LP의 primal-dual problem에 대한 최적 조건(KKT Conditions)을 보여준다.
> $$
> \begin{array}{rcl}
> A^Ty + s & = & c \\\
> Ax & = & b \\\
> XS\mathbb{1} & = & 0 \\\
> x,s  & \succeq & 0
> \end{array}
> $$


Central path equations
> $$
> \begin{array}{rcl}
> A^Ty + s & = & c \\\
> Ax & = & b \\\
> XS\mathbb{1} & = & τ\mathbb{1} \\\
> x,s  & > & 0
> \end{array}
> $$


## Primal-dual method vs. barrier method
#### Newton steps for primer-dual method
다음은 LP문제에 대한 primal-dual method의 Newton 방정식이다.

> $$\begin{bmatrix}
0 & A^T & I \\\
A & 0 & 0 \\\
S & 0 & X 
\end{bmatrix}
\begin{bmatrix}
∆x \\\
∆y \\\
∆s 
\end{bmatrix}= −
\begin{bmatrix}
A^Ty + s−c \\\
Ax−b \\\
XS\mathbb{1}−τ\mathbb{1} 
\end{bmatrix}$$

Optimal condition에서 다음 관계를 알 수 있다.

$$XS\mathbb{1} = \tau \mathbb{1} \iff s = \tau X^{−1}\mathbb{1} \iff x = \tau S^{−1}\mathbb{1}$$

이에 따라 $s$를 제거하여 primal barrier problem에 대한 최적 조건을 얻거나, $x$를 제거하여 dual barrier problem에 대한 최적 조건을 얻을 수 있다.

#### Newton steps for barrier problems
다음은 barrier problem에 대한 primal과 dual central path equation이다. (왼쪽이 primal 오른쪽이 dual)
> $$
> \begin{array}{rcr}
> A^Ty + τX^{−1}1 & = & c & \qquad \qquad & A^Ty + s & = & c \\\
> Ax & = & b & \qquad \qquad & τAS^{−1}\mathbb{1} & = & b\\\
> x & > & 0 & \qquad \qquad & s & > & 0
> \end{array}
> $$
> 

위의 central path equation으로 primal과 dual에 대한 Newton step을 구해보면 다음과 같다.

**Primal Newton step**
> $$\begin{bmatrix}
τX^{−2} & A^T \\\
A & 0
\end{bmatrix}
\begin{bmatrix}
∆x \\\
∆y
\end{bmatrix}= −
\begin{bmatrix}
A^Ty + τX^{−1}\mathbb{1}−c \\\
Ax−b 
\end{bmatrix}$$ 

**Dual Newton step**
> $$\begin{bmatrix}
A^T & I \\\
0 & τAS^{−2}
\end{bmatrix}
\begin{bmatrix}
∆y \\\
∆s
\end{bmatrix}= −
\begin{bmatrix}
A^Ty + s −c \\\
τAS^{−1}\mathbb{1}−b
\end{bmatrix}$$ 


## Example: barrier versus primal-dual
#### Standard LP : $n = 50$, $m = 100$
Primal-dual method의 성능을 확인하기 위해 변수가 $n = 50$이고 equality constraint가 $m = 100$인 표준 LP문제에 대한 예시를 살펴보자. (Example from B & V 11.3.2 and 11.7.4)

Barrier method는 다양한  $\mu$값(2, 50, 150)을 사용한 반면 primal-dual method에서는 $\mu$를 10으로 고정하였다.
그리고 두 방법 모두 $\alpha = 0.01, \beta = 0.5$를 사용했다.

<center>
![](https://wikidocs.net/images/page/21647/barrier_vs_primal_dual.png)<br/>
** [Fig1] Duality gap (Barrier vs. Primal-dual) [1]**<br/><br/>
</center>

그래프에서 보다시피 primal-dual은 빠르게 수렴하면서도 높은 정확도를 보인다.

#### Sequence of problem : $n = 2m$ and $n$ growing. 
이제 $n = 2m$이고 $n$이 점점 증가하는 일련의 문제에 대해 성능을 살펴보자.

* Barrier method는 $\mu = 100$를 사용하였고 outer loop는 2회 정도만 수행되었다. (duality gap은 $10^4$로 감소하였다) 
* Primal-dual method는 $\mu = 10$를 사용하였고 duality gap과 feasibility gap이 거의 $10^{−8}$일 때 실행을 중단했다.

<center>
![](https://wikidocs.net/images/page/21647/barrier_vs_primal_dual2.png)<br/>
** [Fig2] Newton iteration (Barrier vs. Primal-dual) [1]**<br/><br/>
</center>

위 그림에서 알 수 있듯이 Primal-dual 방법은 더 높은 정확도를 갖는 솔루션 찾지만 약간의 iteration이 추가적으로 필요하다.










</br> </br>

# 17-05 Optimality conditions for semideﬁnite programming 

</br> </br>

이 절에서는 SDP(semideﬁnite programming) 문제에 대한 Primer-Dual method의 예시를 살펴보려고 한다.

## SDP (semideﬁnite programming)
SDP의 primal 문제는 다음과 같이 정의한다.
>$$
>\begin{align}
>    &\min_{x} && {C \cdot X} \\\\
>    &\text{subject to } && {A_i \cdot X = b_i, i = 1,...,m} \\\\
>    & &&{X \succeq 0}
>\end{align}
>$$


SDP의 dual 문제는 다음과 같이 정의한다.
>$$
>\begin{align}
>    &\max_{y} && {b^Ty} \\\\
>    &\text{subject to } && {\sum^m_{X_i=1} y_iA_i + S = C} \\\\
>    & &&{S \succeq 0}
>\end{align}
>$$

참고로 $\mathbb{S}^n$의 trace inner product는 다음과 같이 표기한다.
> $$X \cdot S = \text{trace}(XS)$$

## Optimality conditions for SDP
SDP의 primal과 dual 문제는 다음과 같이 linear map을 이용해서 정의할 수 있다.

>$$
>\begin{align}
>    &\min_{x} && {C \cdot X} & \qquad \qquad \qquad & \max_{y,S}  && {b^Ty} \\\\
>    &\text{subject to } && {\mathcal{A}(X) = b} & \qquad \qquad \qquad & \text{subject to } && {\mathcal{A}^{∗}(y) + S = C} \\\\\
>    & &&{X \succeq 0} & \qquad \qquad \qquad & &&{S \succeq 0}
>\end{align}
>$$


여기서 $\mathcal{A}: \mathbb{S}^n → \mathbb{R}^m$ 는 linear map을 의미한다.

Strong duality를 만족한다고 가정했을 때,  $X^{\star}$ 와 $(y^{\star}, S^{\star})$는 $(X^{\star}, y^{\star}, S^{\star})$의 솔루션은 primal과 dual의 최적 솔루션이며 그역도 성립한다.

> $$
> \begin{array}{rcl}
> \mathcal{A}^∗(y) + S & = & C \\\
> \mathcal{A}(X) & = & b \\\
> XS & = & 0 \\\
> X,S & \succeq & 0
> \end{array}
> $$


## Central path for SDP
**Primal barrier problem**
>$$
>\begin{align}
>    &\min_{x} && {C \cdot X−τ \log(det(X))} \\\\
>    &\text{subject to } && {A(X) = b} 
>\end{align}
>$$


**Dual barrier problem**
>$$
>\begin{align}
>    &\max_{y, S} && {b^Ty + τ \log(det(S))} \\\\
>    &\text{subject to } && {\mathcal{A}^∗(y) + S = C} 
>\end{align}
>$$


**Primal & dual을 위한 Optimality conditions**
> $$
> \begin{array}{rcl}
> \mathcal{A}^∗(y) + S & = & C \\\
> \mathcal{A}(X) & = & b \\\
> XS & = & τI \\\
> X,S & \succ & 0
> \end{array}
> $$


## Newton step
Primal central path equations 
> $$
> \begin{array}{rcl}
> \mathcal{A}^∗(y) + \tau X^{−1} & = & C \\\
> \mathcal{A}(X) & = & b \\\
> X & \succ & 0
> \end{array}
> $$


Newton equations
> $$τX^{−1}\Delta XX^{−1} +\mathcal{A}^∗(\Delta y) = −(\mathcal{A}^∗(y) + \tau X^{−1} −C)$$
> $$\mathcal{A}(\Delta X) = −(\mathcal{A}(X)−b)$$

Dual에 대한 central path equation과 Newton equation도 $(y,S)$를 포함해서 이와 유사하게 정의된다.

## Primal-dual Newton step 
Primal central path equations 
> $$\begin{bmatrix}
\mathcal{A}^∗(y) + S - C  \\\
\mathcal{A}(X) - b \\\
XS
\end{bmatrix} =
\begin{bmatrix}
0 \\\
0 \\\
τI
\end{bmatrix}
, X, S \succ 0
$$

Newton step:
> $$\begin{bmatrix}
0 & \mathcal{A}^∗ & I \\\
\mathcal{A} & 0 & 0 \\\
S & 0 & X 
\end{bmatrix}
\begin{bmatrix}
\Delta X \\\
\Delta y \\\
\Delta S
\end{bmatrix}= −
\begin{bmatrix}
\mathcal{A}^∗(y) + s−c \\\
\mathcal{A}(x) − b \\\
XS − \tau I 
\end{bmatrix}$$



</br> </br>

# 17-05-02 Nesterov-Todd direction

</br> </br>

## Nesterov-Todd direction
앞에서의 symmetry 문제는 **Nesterov-Todd** direction으로 해결할 수 있다.
 
먼저 다음 식을 선형화(linearization)하고자 한다.
> $$XS −\tau I = 0. $$

Primal linearization: 
> $$S −\tau X^{−1} = 0 \rightsquigarrow τX^{−1}∆XX^{−1} + \Delta S = \tau X^{−1} −S.$$

Dual linearization: 
> $$X −\tau S^{−1} = 0 \rightsquigarrow \Delta X + \tau S^{−1}\Delta SS^{−1} = \tau S^{−1} −X.$$

이 두 식을 평균하면 primal-dual linearization을 구할 수 있다.
> $$W^{−1}\Delta XW^{−1} + \Delta S = \tau X^{−1} −S$$

이 식을 $WSW = X$라고 하고 다음과 같이 정리할 수 있다.
> $$\Delta X + W\Delta SW = \tau S^{−1} −X$$

$X,S$에 대한 기하평균(geometic mean)으로 $W$를 정의하면 위의 식을 얻을 수 있다.
> \begin{align}
> W & = S^{−1/2}(S^{1/2}XS^{1/2})^{1/2}S^{−1/2} \\\
> & = X^{1/2}(X^{1/2}SX^{1/2})^{−1/2}X^{1/2}
> \end{align}



### Semideﬁnite Programming 을 위한 Primal-Dual Algorithm</br>
Nesterov-Todd를 이용한 SDP를 위한 Primal-Dual 알고리즘을 정의해보자.

$X,S \succeq 0$일 때 $\tau (X,S) := \frac{X \cdot S}{n}$라고 하자.

Primal-Dual Algorithm :
> 1. 0에서 1사이의 $\sigma$ 를 선택 ($\sigma  ∈ (0,1)$)</br>
> 2. $X^0,S^0 \succ 0$를 만족하는 $(X^0,y^0,S^0)$ 를 선택</br>
> 3. For $k = 0,1,... $</br>
> $\quad$ * Nesterov-Todd 방향 계산</br>
> $\qquad \quad (X,y,S) = (X^k,y^k,S^k), τ := \sigma \tau(X^k,S^k)$</br>
> $\quad$  * Step length $\theta_k$ 선택 및 Primal-Dual 업데이트</br>
> $\qquad \quad (X^{k+1},y^{k+1},S^{k+1}) := (X^k,y^k,S^k) + θ_k(\Delta X,\Delta y,\Delta S)$</br>    




</br> </br>

# 18 Quasi-Newton methods

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

1950년대 중반, Argonne 국립 연구소에서 근무 중이었던 물리학자 W.C. Davidon은 coordinate descent method를 이용하여 계산량이 큰 최적화 문제를 풀고 있었다. 불행하게도 당시의 컴퓨터가 불안정했던 탓에 계산이 끝나기도 전에 시스템의 충돌이 빈번히 일어났고, 이에 좌절한 Davidon은 계산속도를 좀 더 향상시킬 수 있는 방법을 찾기로 결심하게 된다. 그렇게 탄생하게 된 것이 바로 최초의 Quasi-Newton 알고리즘이다. 이는 nonlinear optimization을 극적으로 진보시키는 계기가 되었으며, 뒤이어 20여 년 동안 이 방법에 대한 다양한 후속연구들이 등장하였다.

아이러니하게도 [Davidon의 연구](http://www.math.mcgill.ca/dstephens/680/Papers/Davidon91.pdf)는 당시 출판되지 못하고 30년 이상을 technical report로 남아있었다. 그리고 마침내 1991년이 되어서야 [SIAM Jounal on Optimization의 첫 번째 판](https://epubs.siam.org/toc/sjope8/1/1)에 실리게 되었다.

Quasi-Newton methods는 각 반복(iterateration)에서 objective function에 대한 gradient만을 필요로 한다. 이는 이차 미분을 필요로하는 newton methods보다 계산적인 부담이 훨씬 적으며 더불어 superlinear convergence를 보인다는 점에서 충분히 매력적인 방법이라고 볼 수 있다 [14]. 

## Motivation for Quasi-Newton methods

다음과 같은 unconstrained, smooth optimization problem이 있다고 해보자.
>$$
>\min_x \: f(x), \\\\
>\text{where } f \text{ is twice differentiable, and } dom \; f = \mathbb{R}^n.
>$$

위 문제에 대한 Gradient descent method와 Newton's method에서의 x에 대한 업데이트 방법은 각각 아래와 같다.
>**Gradient descent method:**
>$$
>x^+ = x - t \nabla f(x)
>$$

>**Newton's method:**
>$$
>x^+ = x - t \nabla^2 f(x)^{-1} \nabla f(x)
>$$

Newton's method는 quadratic convergence rate ($O(\log \log 1/ \epsilon)$)의 수렴속도를 보이는 장점이 있는 반면에 아래 두 과정에 의해 상당히 큰 계산비용이 발생하는 문제가 있다. 

* Hessian $\nabla^2 f(x)$의 계산: Hessian matrix를 계산하고 저장하기 위해서는 $O(n^2)$의 메모리를 필요로 한다. 이는 고차원의 함수를 다루기에 적절하지 않은 성능이다. (참고: [Hessian matrix](https://en.wikipedia.org/wiki/Hessian_matrix#Use_in_optimization) in Wikipedia)
* 방정식 $\nabla^2 f(x) p = -\nabla f(x)$의 풀이: 이 방정식을 풀기 위해서는 Hessian $\nabla^2 f(x)$에 대한 역행렬을 계산해야 한다. (참고: [Computational complexity of Matrix algebra](https://en.wikipedia.org/wiki/Computational_complexity_of_mathematical_operations#Matrix_algebra) in Wikipedia)

Quasi-Newton method에서는 대신 $\nabla^2 f(x)$를 근사(approximation)한 $B$를 이용한다.
>**Quasi-Newton method:**
>$$
>x^+ = x + tp \\\\
>\text{where } Bp = -\nabla f(x).
>$$

이때 B는 계산하기 쉬워야 하며, 또한 방정식 $Bp = g$를 풀기에도 용이해야 한다. 

## Quasi-Newton Algorithm
Quasi-Newton algorithm은 다음과 같다.

* Pick initial $x^0$ and $B^0$
* For $k = 0, 1, \dots$
    * Solve $B^k p^k$ = $- \nabla f(x^k)$
    * Pick $t\_k$ and let $x^{k+1} = x^{k} + t\_k p^k$
    * Update $B^k$ to $B^{k+1}$
* End for

Optimal point에 점진적으로 다가갈 수 있도록 $B$를 업데이트 해가는 것이 이 방법의 큰 특징이다. 즉, $B$를 통해 next step인 $B^+$를 구하는 방법에 대해 이번 장에서 주로 논의하게 될 것이다. (**Note:** 편의상 $B^{k+1}, B^k$와 $B^+, B$ 두 가지 표기를 혼용하여 사용하겠다.)

</br> </br>

# 18-01 Secant Equation and Curvature Condition

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

## Secant Equation
앞서 $B$는 $\nabla^2 f(x)$를 근사하는 행렬이라고 했다. 행렬 $B$가 Hessian $\nabla^2 f(x)$와 비슷한 성질을 갖기 위해서는 secant equation이라는 조건을 만족해야 한다. $x^{k+1} = x^k + s^k$이고 $f$가 두 번 이상 미분 가능할 때, $\nabla f(x^k + s^k)$에 대한 first-order Taylor expansion은 true Hessian이 다음의 성질을 가짐을 보인다.

>$\nabla f(x^k + s^k)  \approx \nabla f(x^k) + \nabla^2 f(x^k) s^k$

이때 $\nabla^2 f(x^k)$에 대한 근사 행렬을 $B^{k+1}$이라 한다. 이 행렬은 다음의 등식을 만족시킨다.

>$\nabla f(x^k + s^k)  = \nabla f(x^k) + B^{k+1} s^k$

$x^{k+1} = x^k + s^k$, $y^k = \nabla f(x^{k + 1})  - \nabla f(x^k)$이면 위 등식은 아래와 같이 정리되고, 이를 secant equation이라 부른다.

>$$
>B^{k+1} s^k = y^k
>$$

## The Intuition of Secant Equation

$x$축은 $x^k$를, $y$축은 $\nabla f(x^k)$를 나타낸다고 할때 $B^{k+1}$은 $(x^k, \nabla f(x^k))$와 $(x^{k+1}, \nabla f(x^{k+1}))$를 통과하는 직선의 기울기와 같다. 
<center>
![](https://wikidocs.net/images/page/22150/intuition_of_secant_eq.png)
**[Fig1] The intuition of secant equation**
</center>

## Conditions to Determine $B^+$
행렬 $B$를 기반으로 계산된 $B^+$는 다음의 3가지 조건을 만족해야한다.

1. $B^+$ is symmetric: Hessian에 대한 추정이기 때문이다.
2. $B^+$  close to $B$: 유일한 $B^+$를 결정하기 위한 조건. $B$가 이미 유용한 정보를 가지고 있으므로 secant equation을 만족하는 $B^+$ 중에서 $B$와 최대한 가까운 행렬을 고른다.
3. $B$ is positive definite $\Rightarrow$ $B^+$ is positive definite: Global optimum을 보장하기 위해서 문제의 convexity를 유지한다. (참고: [Analyzing the hessian](https://web.stanford.edu/group/sisl/k12/optimization/MO-unit4-pdfs/4.10applicationsofhessians.pdf))

## Curvature Condition
$B^+$가 positive definite이면서 $B^+ s = y$라는 것은 다음의 사실을 암시한다.
>$s^T y = s^T B^+ s > 0.$

(참고: [positive definite in WikiPedia](https://en.wikipedia.org/wiki/Positive-definite_matrix))

여기서 $s^T y > 0$을 curvature condition이라 부른다. Curvature condition을 만족하면, secant equation $B^+ s = y$은 항상 solution($B^+$)을 갖는다.


</br> </br>

# 18-02 Symmetric Rank-One Update (SR1)

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

SR1 update는 rank-1의 symmetric matrix로 $B$를 업데이트 함으로써 $B^+$가 symmetry를 유지하고 secant equation을 계속해서 만족하게끔 업데이트하는 방법이다. Rank-1의 symmetric matrix가 $a \in \\{-1, 1\\}$와 $u \in \mathbb{R^n}$의 곱으로 분해된다고 하면 update form은 다음과 같을 것이다.

>$B^+ = B + auu^T.$

## Key Observation
$a$와 $u$는 $B^+$가 secant equation을 만족하게끔 선택되어야 한다. 그러므로 secant equation $y = B^+s$에 위에서 소개한 update form을 대입해보자.

>$y = B^+s \Rightarrow y = Bs + (au^Ts)u. \quad \text{--- (1)}$

$(au^Ts)$는 scalar이므로 $u$는 $y-Bs$와 임의의 scalar $\delta$와의 곱으로도 표현할 수 있을 것이다 $\big( u = \delta(y - Bs) \big)$. (1)의 $u$를 $\delta(y - Bs)$으로 치환해보자.

>$y-Bs = a\delta^2 \big[ s^T(y - Bs) \big] (y -Bs),$

위 등식을 만족하는 파라미터 $\delta$와 $a$는 다음과 같다.

>$a = \text{sign} \big[ s^T (y - Bs) \big], \quad \delta = \pm | s^T(y-Bs) |^{-1/2}. \quad \text{--- (2)}$

## The Only SR1 Updating Formula
Key observation에서 얻은 정보를 활용해 유일한 형태의  SR1 update를 유도할 수 있다 ([14]의 6.2). <br/>
$\big( u = \delta (y - Bs)$ 와 (2)를 $B^+ = B + auu^T$에 대입. $\big)$

>$$
>B^+ = B + \frac{(y-Bs)(y-Bs)^T}{(y-Bs)^Ts}.
>$$
>

## The Update Formula for the Inverse Hessian Approximation

$x^+$를 구하기 위해서는 $B^{-1}$의 계산이 필요해진다.

>$x^+ = x + tp = x - tB^{-1}\nabla f(x)$

$B$ 대신 $B^{-1}$를 업데이트 할 수 있다면 매번 $B^{-1}$을 계산하기 위한 비용을 줄일 수 있지 않을까?

[Sherman–Morrison formula](https://en.wikipedia.org/wiki/Sherman%E2%80%93Morrison_formula)를 이용하면 유도과정을 통해 $B^{-1}$ 또한 동일한 형태로 업데이트 할 수 있다는 것을 알 수 있다. ($H = B^{-1}$)

>$$
>H^+ = H + \frac{(s-Hy)(s-Hy)^T}{(s-Hy)^Ty}.
>$$

## Shortcomings of SR1

SR1 은 아주 간단하다는 장점이 있지만 두 가지 치명적인 단점을 가지고 있다.

1. $(y-Bs)^Ts$가 0에 가까워지면 업데이트에 실패할 수 있다.
2. $B$와 $H$의 positive definiteness를 유지하지 못한다.

이 뒤의 절에서는 SR1의 단점을 보완한 방법들을 소개한다. 

</br> </br>

# 18-03 Davidon-Fletcher-Powell (DFP) Update

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

DFP update는 rank-2의 symmetric matrix로 $H (=B^{-1})$를 업데이트 하는 방법이다.

>$H^+ = H + auu^T + bvv^T.$

DFP update를 통해 계산된 $H^+$가 secant equation을 만족한다면, $s-Hy$은 $u$와 $v$의 linear combination으로 표현할 수 있다. (참고: secant equation에 의해, $B^+ s =y \Leftrightarrow H^+ y = s$)

>$H^+y = Hy + auu^Ty + bvv^Ty = Hy + (au^Ty)u + (bv^Ty)v = s$
>
>$\Rightarrow s - Hy = (au^Ty)u + (bv^Ty)v$

$u=s, v=Hy$로 두고 a와 b에 대해 풀면 $H$에 대한 updating formula가 유도된다.
>$$
> H^+ = H - \frac{Hyy^TH}{y^THy} + \frac{ss^T}{y^Ts}
>$$

SR1 update에서와 마찬가지로 [Sherman–Morrison formula](https://en.wikipedia.org/wiki/Sherman%E2%80%93Morrison_formula)를 이용하여 $B$에 대한 updating formula를 유도할 수 있다.

>$$
>\begin{align}
>B^+ &= B + \frac{(y-Bs)y^T}{y^Ts} + \frac{y(y-Bs)^T}{y^Ts} - \frac{(y-Bs)^Ts}{(y^Ts)^2} yy^T\\\\
> &= \big( I - \frac{ys^T}{y^Ts} \big) B \big( I - \frac{sy^T}{y^Ts} \big) + \frac{yy^T}{y^Ts} 
>\end{align}
>$$

만약 $B$가 positive definite이면 $\big( I - \frac{ys^T}{y^Ts} \big) B \big( I - \frac{sy^T}{y^Ts} \big)$는 positive semidefinite이 된다. 이때 $\frac{yy^T}{y^Ts}$가 positive definite이면 $B^+ = \big( I - \frac{ys^T}{y^Ts} \big) B \big( I - \frac{sy^T}{y^Ts} \big) + \frac{yy^T}{y^Ts}$는 positive definite임이 보장된다. 이로써 SR1에서 제기 되었던 posifive definiteness의 지속성 문제가 해결된다.

## DFP Update - Alternate Derivation

Recall: curvature condition($y^Ts > 0, y,s \in \mathbb{R}^n$)을 만족하면 secant equation을 만족하는 symmetric positive definite matrix가 존재한다.

DFP update는 1. symmetry를 만족하고, 2. secant equation을 만족하는 행렬 $B^+$와 $B$의 weighted Frobenius norm을 최소화 시키는 문제를 푸는 것으로도 유도된다. (각각의 다른 matrix norm은 각각의 다른 Quasi-Newton method와 연결된다. 그 중에서 이 문제의 solution을 구하기 쉽게 하면서도 scale-invariant optimization method로 작동하게끔 하는 norm이 바로 weighted Frobenius norm이다.)

>Solve
>$$
>\begin{align}
>    \min\_{B^+} \: \: &{\|W^{1/2} (B^+ - B) W^{1/2} \|\_F} \\\\
>    \text{subject to } &{B^+ = (B^+)^T} \\\\
>    &{B^+s = y}  \\\\
>\end{align}\\\\
>\text{where } W \in \mathbb{R}^{n \; \times \;n} \text{ is nonsingular and such that } Wy\_k = s\_k.
>$$

***참고**:

* Frobenius norm: 행렬 $A$에 대한 Frobenius norm은 다음과 같이 정의된다.
$$
\| A \|\_{F}  \doteq ( \sum\_{i,j} A\_{i,j}^2 )^{1/2}
$$

* Weighted Frobenius norm: 가중치 행렬 $W$($W \succ 0$)에 대한 행렬 $A$의 weighted Frobenius norm은 다음과 같이 정의된다. 
$$
\|A\|\_W \doteq \| W^{1/2} A W^{1/2} \|\_F
$$

</br> </br>

# 18-04 Broyden-Fletcher-Goldfarb-Shanno (BFGS) update

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

BFGS의 아이디어는 DFP와 동일하다. 다만, B와 H의 역할이 뒤바뀌는 것만이 차이점이다.

BFGS는 다음 문제를 푸는 것으로 유도된다.

>Solve
>$$
>\begin{align}
>    \min\_{H^+} \: \: &{\|W^{1/2} (H^+ - H) W^{1/2} \|\_F} \\\\
>    \text{subject to } &{H^+ = (H^+)^T} \\\\
>    &{H^+s = y}  \\\\
>\end{align}\\\\
>\text{where } W \in \mathbb{R}^{n \; \times \;n} \text{ is nonsingular and such that } Ws\_k = y\_k.
>$$

유도되는 $H$와 $B$ 에 대한 updating formula는 다음과 같다.

>$$
> B^+ = B - \frac{Bss^TB}{s^TBs} + \frac{yy^T}{y^Ts}
>$$

and

>$$
>\begin{align}
>H^+ &= H + \frac{(s-Hy)s^T}{y^Ts} + \frac{s(s-Hy)^T}{y^Ts} - \frac{(s-Hy)^Ty}{(y^Ts)^2} ss^T\\\\
> &= \big( I - \frac{sy^T}{y^Ts} \big) H \big( I - \frac{ys^T}{y^Ts} \big) + \frac{ss^T}{y^Ts} 
>\end{align}
>$$

BFGS 또한 DFP처럼 positive definiteness를 유지한다. (만약 $B$가 positive definite이고 $s^Ty > 0$이면 $B^+$는 positive definite이다.)

BFGS의 특장점은 self-correcting property를 지니고 있다는 것이다. 만약 행렬 $H$가 부정확하게 추정되어 iteration의 속도가 느려지게 되면 Hessian approximation이 단 몇 step 만에 이를 바로잡는 경향성을 보인다. 반면 DFP는 잘못된 Hessian approximation의 추정에 대해 효과적으로 바로잡지 못하므로 실전에서는 보통 BFGS의 성능이 더 좋은 편이다 [14].

</br> </br>

# 18-05 The Broyden Class

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

The Broyden class는 BFGS, DFP, SR1을 다음의 공식으로 일반화시킨다. <br/>

* **Note:** $B^+\_{\text{BFGS}}$와 $B^+\_{\text{DFP}}$는 각각 BFGS와 DFP에 의해 유도되는 $B^+$다.

>$$
>B^+ = (1 - \phi)B^+\_{\text{BFGS}} + \phi B^+\_{\text{DFP}}, \text{ for } \phi \in \mathbb{R}.
>$$

$v$를 $\frac{y}{y^Ts} - \frac{Bs}{s^TBs}$로 정의하면 위 공식은 아래와 같이 정리된다.

>$$
>B^+ = B - \frac{Bss^TB}{s^TBs} + \frac{yy^T}{y^Ts} + \phi(s^TBs)vv^T.
>$$

Observe:

* $\phi =0$일때, 위 update는 BFGS와 동일해진다.
* $\phi =1$일때, 위 update는 DFP와 동일해진다.
* $\phi = \frac{y^Ts}{y^Ts - s^TBs}$일때, 위 update는 SR1과 동일해진다.

***참고**: $\phi$의 범위를 $[0,1]$로 제한한 특수한 경우를 restricted Broyden class라 부른다 [14]. 

</br> </br>

# 18-06 Superlinear convergence

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

#### Assumption1: 
> The Hessian matrix $G$ is Lipschitz continuous at $x^∗$, that is, 
> $$\| G(x) − G(x^∗)  \le L \| x − x^∗ \|,$$
> for all $x$ near $x^∗$, where $L$ is a positive constant.

#### Assumption2: Wolfe conditions
> Assume $t$ is chosen (via backtracking) so that
> $$ f(x + tp) \le f(x) + \alpha\_1 t \nabla f(x)^T p$$
> and
> $$ \nabla f(x + tp)^T p \ge \alpha\_2 \nabla f(x)^T p$$
> for $0 < \alpha_1 < \alpha_2 < 1.$

* Wolfe conditions의 첫 번째 조건은 너무 큰 $t$가 선택되지 않게끔 한다.
* Wolfe conditions의 두 번째 조건은 너무 작은 $t$가 선택되지 않게끔 한다.

DFP와 BFGS는 위 두 가정하에 superlinear convergence를 보인다. (참고: [Rate of convergence in Wikipedia](https://en.wikipedia.org/wiki/Rate_of_convergence))
>$$
>\lim\_{k \rightarrow \infty} \frac{ \| x^{k+1} - x^\* \| }{ \| x^k - x^\* \| } = 0.
>$$





## Theorem (Dennis-Moré)

다음은 Quasi-Newton method의 search direction이 Newton direction을 충분히 잘 근사하고 있을때, solution으로 수렴하는 과정에서 step length가 Wolfe conditions를 만족함을 보인다. Superlinear convergence를 보이기 위해 search direction이 만족해야하는 조건이라고도 할 수 있다 [14].

>$f$가 두 번 미분 가능하고 $x^k \rightarrow x^\*$ s.t. $\nabla f(x^\*) = 0$이며 $\nabla^2 f(x^\*)$가 positive definite이라고 가정하자. 
>
>$$\lim\_{k \rightarrow \infty} \frac{\| \nabla f(x^k) + \nabla^2 f(x^k) p^k \| }{\| p^k \|} = 0.$$
>
>만약 search direction $p^k$가 위 조건을 만족하면, 다음 두 가지 항목을 만족하는 $k_0$가 존재한다.
> 
> 1. $k \ge k_0$에 대해 step length $t_k=1$은 Wolfe conditions를 만족한다.
> 2. 만약 $k \ge k_0$에 대해 $t_k = 1$이면 $x^k \rightarrow x^\*$는 superlinear convergence를 보인다.
 

</br> </br>

# 18-07 Limited Memory BFGS (LBFGS)

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

## Introduction

LBFGS는 Limited-memory quasi-Newton methods의 한 예시로써, Hessian 행렬을 계산하거나 저장하기 위한 비용이 합리적이지 않을 경우 유용하게 사용된다. 이 방법은 밀도가 높은 $n \times n$의 Hessian 행렬을 저장하는 대신 $n$차원의 벡터 몇 개만을 유지하여 Hessian 행렬을 추정(approximation)하는 방식이다. 

LBFGS의 알고리즘은 그 이름이 시사하는 것처럼 BGFS를 기반으로 한다. 주요한 아이디어는 Hessian에 대한 추정을 하기위해 가장 최근의 iteration들에서의 curvature information을 이용하자는 것이다. 반면 오래된 iteration들의 curvature information은 현재 iteration의 Hessian이 보이는 동향(behavior)과 다소 거리가 있을 것이므로 저장공간을 아끼는 측면에서 사용하지 않도록 한다.

여담으로 동일한 기법을 통해 다른 quasi-Newton 알고리즘(가령, SR1)의 limited-memory version도 유도 가능하다 [14].

## LBFGS

LBFGS를 본격적으로 설명하기에 앞서 BFGS method에 대해 다시 살펴보자. 각 step에서 BFGS는 다음과 같이 $x$를 업데이트 한다.
>$$
>x^+ = x - t H \nabla f, \\\\
>\text{where } t \text{ is the step length and } H \text{ is updated at every iteration by means of the formula, }\\\\
>\text{     }\\\\
>H^+ =  \big( I - \frac{sy^T}{y^Ts} \big) H \big( I - \frac{ys^T}{y^Ts} \big) + \frac{ss^T}{y^Ts}.\\\\
>$$

$H$에 대한 업데이트 식을 이용하면 $H^+q, q \in \mathbb{R}^n$를 임의의 스칼라 $\alpha, \beta \in \mathbb{R}$와 임의의 벡터 $p, s \in \mathbb{R}^n$를 사용해 표현할 수 있다. 

>$$
>\begin{align}
>H^+q &=  \big( I - \frac{sy^T}{y^Ts} \big) H \big( I - \frac{ys^T}{y^Ts} \big)q + \frac{ss^Tq}{y^Ts}\\\\
> &= \big( I - \frac{sy^T}{y^Ts} \big) \underbrace{H \\big( q - \frac{s^T q}{y^Ts} y \big)}\_{p} + \underbrace{\frac{s^Tq}{y^Ts}}\_{\alpha} s\\\\
> &= \big( I - \frac{sy^T}{y^Ts} \big) p + \alpha s\\\\
> &= p - \underbrace{\frac{y^Tp}{y^Ts}}\_{\beta}s + \alpha s \\\\
> &= p + (\alpha - \beta) s,\\\\
>\end{align}\\\\
>\text{where } \alpha = \frac{s^Tq}{y^Ts}, q^+ = q - \alpha y, p = Hq, \beta = \frac{y^Tp}{y^Ts}.
>$$

$H$가 k번의 BFGS update를 통해 얻이진다고 할때, $Hq= -H\nabla f(x)$는 length k의 반복문 2개로 계산할 수 있다 (아래 알고리즘 참고). 단, 메모리의 효율적인 사용을 위해 가장 최근 $m$개 iterations에서의 curvature information만을 이용한다. ($k \ge m$)

## Algorithm
<center>
![](https://wikidocs.net/images/page/22155/algorithm_quasi-newton.png)

**[Fig1] The algorithm of LBFGS [3]**
</center>

보통 inverse Hessian approximation $H\_k$는 dense하며, 변수의 개수가 많은 경우 저장 및 연산 비용이 매우 높아지게 된다. 반면 LBFGS는 $H\_k \nabla f\_k$을 연속한 벡터합과 벡터곱으로 얻어냄으로써 $H\_k$의 계산 및 유지를 위한 비용문제를 완화시킬 수 있다. 뿐만 아니라 이 계산에 사용되는 initial Hessian approximation $H^{0,k}$는 보통 (실전에서 매우 효과적으로 작동한다고 검증된) identity matrix에 어떤 상수를 곱한 형태($H^{0,k} = \gamma_k I$)를 띄기 때문에 유지 및 계산에 그다지 큰 비용이 발생하지 않는다 ([14]의 7.2).
$$
H^{0,k} = \gamma_k I, \\\\
\text{where } \: \gamma\_k = \frac{s^T\_{k-1}y\_{k-1}}{y^T\_{k-1}y\_{k-1}}.
$$

* **Note:** $H^{0,k}$는 매 iteration마다 다르게 선택될 수 있다.

</br> </br>

# 19 Proximal Newton Method

</br> </br>

이번 장에서는 **Proximal Newton Method**과 **Proximal quasi-Newton method**, **Projected Newton method**에 대해서 살펴보도록 하겠다.

#### 참고 논문

Proximal Newton method:

* J. Friedman and T. Hastie and R. Tibshirani (2009), "Regularization paths for generalized linear models via coordinate descent"
* C.J. Hsiesh and M.A. Sustik and I. Dhillon and P. Ravikumar (2011), "Sparse inverse covariance matrix estimation using quadratic approximation"
* M. Patriksson (1998), "Cost approximation: a unified framework of descent algorithms for nonlinear programs"
* J. Lee and Y. Sun and M. Saunders (2014), "Proximal Newton-type methods for minimizing composite functions"
* P. Tseng and S. Yun (2009), "A coordinate gradient descent method for nonsmooth separable minimization"

Projected Newton method:

* A. Barbero and S. Sra (2011), "Fast Newton-type methods for total variation regularization"
* D. Bertsekas (1982), "Projected Newton methods for optimization problems with simple constraints"
* D. Kim and S. Sra. and I. Dhillon (2010), "Tackling box-constrained optimization via a new projected
quasi-Newton approach"
*  M. Schmidt and D. Kim and S. Sra (2011), "Projected Newton-type methods in machine learning"

</br> </br>

# 19-01 Proximal Newton method

</br> </br>

이 절에서는 **proximal gradient method**를 복습해보고 **proximal newton method**가 이로부터 어떻게 나오게 되었는지를 살펴볼 것이다. 

또한, **proximal newton method**의 정의와 일반적인 proxmal map에 비해 uniqueness와 non-expansiveness과 같은 좋은 성질을 갖는 scaled proximal map에 대해서도 살펴볼 것이다.

</br> </br>

# 19-01-01 Reminder_ proximal gradient descent

</br> </br>

이번 장에서 배울 **Proximal newton method**의 살펴보기 전에 먼저 **Proximal gradient descent**를 복습해 보자.

자세한 내용은 [09 Proximal Gradient Descent and Acceleration](https://wikidocs.net/19031) 참조.

## Proximal gradient descent
**Proximal gradient descent** 다음의 문제에 대해 작동한다. 

>$f(x) = g(x) + h(x)$ 

* $g$는 convex이고 differentiable하다. (**dom**$(g) = \mathbb{R}^n$)
* $h$는 convex이고 non-differentiable하며 "simple"하다.


#### Algorithm
Proximal gradient descent는 시작점 $x^{(0)}$에서 시작해서 다음 과정을 반복한다.

>$x^{(k)} = \text{prox}\_{t_k}(x^{(k-1)} - t_k \nabla g(x^{(k-1)}) )$, $k=1,2,3,...$

여기서 $\text{prox}\_{t}(\cdot)$는 $h$와 연관된 proximal operator 이다.

> \begin{align}
\text{prox}\_{t}(x) = \underset{z}{\text{argmin}}  \frac{1}{2t} \parallel x - z \parallel_2^2 + h(z)
\end{align}

Update 식은 generalized gradient $G_{t}$를 사용해서 표준화된 형태로 표현할 수도 있다.

> \begin{align}
x^{(k)} = x^{(k-1)} - t_k \cdot G_{t_k}(x^{(k-1)}), \space \space \text{where} \space G_{t}(x) = \frac{x-\text{prox}\_{t} (x - t \nabla g(x))}{t} \\\\
\end{align}

#### Performance
* **Proximal gradient descent**의 성능은 $h$에 따라 달라질 수 있다. 만일, $h$가 복잡한 함수이고 특히 closed form이 아니라면 minimize할 때 계산을 많이 해야 하므로 성능이 매우 떨어질 수 있다.

* 또한, $g$함수의 convergence rate와 같은 수렴 속도를 갖는다. 단, 반복할 때마다 prox operator를 실행하기 때문에 prox 계산이 효율적인 경우에만 유용하다.

## Motivation
**Proximal gradient descent**에서는 미분 가능한 함수 $g$를 Tayor 2차식으로 근사하고 여기에 미분이 되지 않는 함수인 $h$를 더하여 목적 함수로 정의한 후 이를 반복적으로 최소화한다. 따라서, 다음과 같이 2차 식으로 정리해 볼 수 있다. 

식에 전개되는 자세한 과정은 [09-01 Proximal gradient descent](https://wikidocs.net/19032) 참고.

> \begin{align}
x^+ & = \underset{z}{\text{argmin}}  \, \frac{1}{2t} \parallel x - t \nabla g(x) - z \parallel_2 ^2 + h(z) \\\\
& = \underset{z}{\text{argmin}} \ \nabla g(x)^T (z - x) + \frac{1}{2t} \parallel z - x \parallel_2 ^2 + h(z) \\\\
\end{align}

두번째 식의 1항과 2항은 $g$의 Tayor 2차 근사식으로 부터 유도할 수 있는데, 먼저 상수항 $g(x)$은 제거하고 (gradient descent에서와 마찬가지로) Hessian $\nabla^2 g(x)$을 $\frac{1}{t} I$(spherical curvature)로 대체해서 구할 수 있다.

다음 그림에서는 proximal gradient descent의 update 단계에서 $g$를 2차 근사식으로 최소화 하는 과정을 보여주고 있다.

![](https://wikidocs.net/images/page/22431/09.01_01_proximal_gradient_descent.PNG)<br>
**[Fig 1] Proximal gradient descent updates [3]**

Gradient descent와 newton's method의 차이점는 2차 근사를 할 때 함수의 local hessian인 $\nabla^2 g(x)$를 사용하는지 여부이다. 그렇다면, 위의 식에서 $\frac{1}{t} I$ 대신에 $\nabla^2 g(x)$를 사용하면 어떻게 될까?

이것이 바로 다음 절에서 설명하게 될 **proximal newton method**가 나오게 된 배경이다.


</br> </br>

# 19-01-02 Proximal Newton method

</br> </br>

이전 절에서 **proximal newton method**는 **proximal gradient descent** 식에서 spherical curvature인 $\frac{1}{t} I$ 대신에 local hessian인 $\nabla^2 g(x)$를 사용하고자 하는 방법임을 설명했다. Proximal newton method는 오래 전에 나온 아이디어로 통계학에서는 local score란 용어로 연구되고 있다.

이제 **proximal newton method**가 어떻게 formulation될 수 있는지 살펴보자.

## Algorithm
Proximal gradient descent 알고리즘은 다음 step의 direction인 $v$를 구한 후 step size인 $t_k$를 optimization하는 과정으로 이루어져 있다. 

* 1단계 : 시작점 $x^{(0)}$에서 시작해서 다음 과정을 반복한다. ($k=1,2,3,...$) 

* 2단계 : 다음 step의 direction인 $v$를 구한다.

> \begin{align}
v^{(k)} & = \underset{v}{\text{argmin}} \ \nabla g(x^{(k-1)})^T v + \frac{1}{2} v^T H^{(k-1)} v + h(x^{(k-1)} + v)
\end{align}
여기서 $H^{(k-1)} = \nabla g(x^{(k-1)})$은 $x^{(k-1)}$에서의 Hessian이다.

* 3단계 : $v^{(k)}$ 방향으로 step을 이동하기 위해 step size를 optimization한다. 

> \begin{align}
x^{(k)} & =x^{(k-1)} + t_k v^{(k)}
\end{align}

$t_k$는 step size로 $t_k=1$이면 pure proximal Newton method이다.

Backtracking line search를 통해 step size를 optimization하는 과정이 있다는 점은 proximal gradient descent method와 다른 점이다.

#### Next position view
위의 식을 direction $v$이 아닌 다음 위치인 $z$의 관점에서 표현하면 다음과 같다.

> \begin{align}
z^{(k)} & = \underset{z}{\text{argmin}} \ \nabla g(x^{(k-1)})^T (z - x^{(k-1)})^T v + \frac{1}{2} (z - x^{(k-1)})^T H^{(k-1)} (z - x^{(k-1)}) + h(z) \\\\
x^{(k)} & =x^{(k-1)} + t_k (z^{(k)} - x^{(k-1)} )
\end{align}

직관적으로 첫번째 단계에서 목적 함수를 최소화 하는 surrogate point인 $z$를 구한다. 그런 다음, $x^{(k-1)}$에서 $z$의 방향으로 이동하지만 항상 $z$로 이동하게 되는 것은 아니다.

</br> </br>

# 19-01-03 Scaled proximal map

</br> </br>

**Proximal newton method**를 **proximal gradient descent**와 같은 형식으로 다시 작성해 볼 수 있다. 

## Scaled proximal map
만일 $H \succ 0$라고 하면 **scaled proximal map**은 다음과 같이 정의된다.

> \begin{align}
\text{prox}\_{t}(x) = \underset{z}{\text{argmin}}  \frac{1}{2} \parallel x - z \parallel_H^2 + h(z)
\end{align}

여기서 $\parallel x\parallel_H^2 = x^THx$으로 $H\text{-norm}$이다.  $H = \frac{1}{t} I$일 때 일반적인 **unscaled proximal map**이 된다. 

일반적으로 **scaled proximal map**는 보통의 prox보다 좋은 성질을 갖고 있다. 

* **uniqueness** : 해가 하나만 존재하는 성질 ($H \succ 0$이므로 strictly convex optimization problem이기 때문에 만족된다.)
* **non-expansiveness** :  팽창하지 않는 성질 (scaled proximal map이 non-expansive 성질을 갖는 projection operator의 일반화이기 때문에 만족된다.)

#### [참고] Projection operator의 non-expansiveness
두 점 $x$, $y$와 convex set $C$에 대한 projection operator $P_c$에 대해 non-expansiveness란 $\parallel P_c(x) - P_c(y) \parallel_2 \le \parallel x - y \parallel_2$를 만족한다는 것을 의미한다. 즉,  $P_c$는 Lipschitz-1을 만족하며 $C$가 convex일 경우에만 만족한다.

![](https://wikidocs.net/images/page/22434/09.01_03_projection_operator.PNG)<br>
**[Fig 1] Projection onto a convex set $C$ [3]**

## Proximal newton update
**Scaled proximal map**을 이용해서 Proximal newton update를 다시 표현해보면 다음과 같다.

> \begin{align}
z^{+} & = \underset{z}{\text{argmin}} \nabla g(x)^T (z - x)^T v + \frac{1}{2} (z - x)^T H (z - x) + h(z) \\\\
& =\underset{z}{\text{argmin}} \ \frac{1}{2} \parallel x - H^{-1} \nabla g(x) - z \parallel_H^2 + h(z)
\end{align}

다르게 표현하면 다음과 같다.

> \begin{align}
z^{(k)} & = \text{prox}\_{H^{(k-1)}} ( x^{(k-1)} - (H^{(k-1)})^{-1} \nabla g (x^{(k-1)}) ) \\\\
x^{(k)} & =x^{(k-1)} + t_k (z^{(k)} - x^{(k-1)} )
\end{align}

직관적으로 $g$에 대해서 newton step을 수행하고, $H^{(k-1)}$에 대해 scaled prox operator를 적용해서 그 방향으로 이동한다는 것을 의미한다.

이로부터 다음과 같은 사항을 알 수 있다.

* $h(z) = 0$일때 proximal operator는 identity 함수가 되여 일반적인 Newton update가 된다.
* $H^{(k+1)}$를 $\frac{1}{r_k} I$로 대체하고 $t_k = 1$로 두면 step size $r_k$에 대해 proximal gradient update를 구할 수 있다. 
* Prox의 어려움은 $h$뿐만 아니라 $g$의 hessian의 구조에 따라 달라진다. 예를 들어 $H$가 diagonal이거나 banded이면 dense한 $H$일 경우에 비해 문제가 매우 쉬워진다.

따라서,  proximal Newton method는 proximal gradient descent와 Newton's method를 둘 다 일반화한 것임을 알 수 있다.

</br> </br>

# 19-02 Backtracking line search

</br> </br>

**Proximal newton method**는 newton's method와 같이 pure step size $t_k=1, k=1,2,3, \cdots$인 경우에 수렴하지 않을 수 있다. 따라서, backtracking line search를 통해 step size를 optimize해야 한다.

## Backtracking line search 알고리즘

1. 파라미터를 초기화한다. ($0 \lt \alpha \le 1/2, 0 \lt \beta \lt 1$)
2. 각 반복에서 $v = \text{prox}\_{H} ( x - H^{-1} \nabla g (x) ) - x$로  Proximal newton direction을 계산한다.
3. $t=1$로 초기화 한다.
4. $f(x + tv) \gt f(x) + \alpha t \nabla g(x)^T v + \alpha (h(x + tv) - h(x))$ 조건을 만족하면 $t=\beta t$로 줄인다. 이 조건이 만족되는 동안 단계4를 반복한다. ($f = g + h$)
5. Proximal newton update $x^+ = x + tv$를 실행한다.
6. 종료 조건을 만족하지 않으면 단계2로 간다.

직관적으로 $x$에서 함수 $f$의 선형 근사를 $\alpha$배 내에 있는 위치로 direction $v$를 따라 이동하도록 step size $t$를 찾는다. 그리고, $f$에서 $h$ 파트는 미분이 되지 않기 때문에 discrete derivative $h(x + tv) - h(x)$를 구했다.

## Efficientcy of algorithm
Backtracking line search를 수행하기 위한 방법들이 많이 있으며 여기서는 그 중 한 방법을 소개했다. 

이 방법의 경우 $v$를 계산할 때 prox operator를 한번만 계산한다. Proximal gradient descent의 경우 inner loop에서 prox operator의 계산을 반복해야 했는데 이 점과 확연히 구분되는 특징이다. 따라서, 이 방법은 prox operator의 계산이 복잡할 경우 매우 효율적으로 backtracking line search를 할 수 있다.

#### [참고] Method 별  backtracking line search
* Gradient descent [06-02-02 Backtracking line search](https://wikidocs.net/18184)
* Proximal gradient descent [09-02 Convergence analysis](https://wikidocs.net/19033)
* Newton's method [14-04 Backtracking line search](https://wikidocs.net/21334)

</br> </br>

# 19-03 When would we use proximal Newton

</br> </br>

Proximal newton method는 언제 사용해야 좋은가? 

Proximal newton method의 유용성을 이해하기 위해  다음 문제에 대해 proximal newton method와 proximal gradient descent를 비교해 보자.

**Problem** : $\min_x g(x) + h(x)$

## Proximal gradient descent vs. proximal newton

| **Proximal gradient descent** |**Proximal Newton** | 
| -------- | -------- |
| $\frac{1}{2} \parallel b - x \parallel_2^2 + h(x)$ 최소화  | $b^T x + x^T A x + h(x)$ 최소화 | 
| Prox operator가 대부분 closed form으로 정의됨  | Prox operator가 대부분 closed form으로 정의되지 않음 
| 반복이 저렴 | 반복이 아주 비쌈 (newton method보다 비쌈)| 
| Gradient descent 수렴 속도 <br> $O(1/\epsilon)$  | Newton's method 수렴 속도 <br> $O(\log \log 1/\epsilon)$ | 

두 방법은 비슷해 보이지만 실제 매우 다른 일을 한다. 

따라서, proximal newton method는 아주 적은 반복을 기대할 수 있는 scaled prox operator(quadratic + $h$)에 대한 빠른 inner optimizer를 가질 때 사용할 수 있다. $h$가 separable function일 때 inner optimizer로 가장 많이 사용되는 방법이 coordinate descent이다.

</br> </br>

# 19-04 Convergence analysis

</br> </br>

Proximal newton method의 수렴을 분석하기 위해 Lee (2014) [1] 논문의 증명을 따를 것이다.

[1] J. Lee and Y. Sun and M. Saunders (2014), Proximal Newton-type methods for minimizing

수렴을 증명하기 위해 다음과 같이 가정한다.

* $f = g + h$, $g$와 $h$는 convex이고 $g$는 2차 differentiable (smooth)
* $mI \preceq \nabla^2 g(x) \preceq LI$
* $\nabla^2 g(x)$ Lipshitz with constant $M$
* $\text{prox}_H(\cdot)$는 정확히 계산 가능

위에 세가지 가정은 strictly convex라는 것을 의미하며 $\text{prox}_H(\cdot)$가 정확히 계산이 가능하다고 가정한 것은 실제 이렇게 되기가 쉽지 않기 때문이다.
 
## Convergence Theorem

> **Proximal newton method**는 backtracking line search를 이용해서 global하게 수렴한다.

> \begin{align}
\parallel x^{(k)} - x^{\star} \parallel_2 \le \frac{M}{2m} \parallel x^{(k-1)} - x^{\star} \parallel_2^2
\end{align}

이것을 **local quadratic convergence**라고 한다. $k \ge k_0$이후에 $f(x^{(k)}) - f^{\star} \le \epsilon$을 만족하기 위해서는 $O(\log \log (1/\epsilon))$의 반복이 필요하다. 단, 각 반복에서 scaled prox를 사용한다.

## Proof sketch
**Global convergence**를 보이기 위해서는 어떤 step에서도 다음과 같은 step size $t$에 대해 backtracking exit condition을 만족함을 보일 수 있다.

> \begin{align}
t \le \min \left\\{ 1, \frac{2m}{L} (1-\alpha) \right\\} \\\\
\end{align}

이 식으로 global minimum에 도달했을 때인  update direction이 0으로 수렴한다는 것을 보일 수 있다

**Local quadratic convergence**를 보이기 위해 충분히 여러번 반복하게 되면 pure newton step $t=1$은 backtracking exit conditions을 만족하여 다음 식이 성립된다.


> \begin{align}
\parallel x^{+} - x^{\star} \parallel_2 & \le \frac{1}{\sqrt(m)} \parallel x^{+} - x^{\star} \parallel_H \\\\
& =  \frac{1}{\sqrt(m)} \parallel \text{prox}\_H(x - H^{-1} \nabla g(x) )  - \text{prox}\_H(x^{\star} - H^{-1} \nabla g(x^{\star}) )  \parallel_H \\\\
& \le \frac{M}{2m} \parallel x - x^{\star} \parallel_2^2 \\\\
\end{align}

이를 정리해 보면 다음과 같다.

> \begin{align}
\parallel x^{+} - x^{\star} \parallel_2 \ \le \ \frac{1}{\sqrt(m)} \parallel x^{+} - x^{\star} \parallel_H \  \le \ \frac{M}{2m} \parallel x - x^{\star} \parallel_2^2
\end{align}

* 첫번째 부등식은 lowest eigenvalue bound에 대해 성립하며 등식은 $x^+$ 정의와 global minimum $x^{\star}$에서 $\text{prox}\_H(\cdot)$이 identity가 된다는 사실에 의해 성립한다.

* 두번째 부등식은 proximal operator의 nonexpasiveness, Lipshitz assumption, largest eigenvalue bound에 의해 성립한다.


</br> </br>

# 19-05 Notable examples

</br> </br>

## Glmnet and QUIC
Proximal newton method의 매우 유명한 패키지가 두 가지가 있다.

* **glmnet** (Friedman et al., 2009): $l_1$ penalized generalized linear models에 대한 prox Newton를 구현한 패키지. Coordinate descent를 이용해서 inner problem을 푼다.

* **QUIC**  (Hsiesh et al., 2011): graphical lasso problem에 대한 prox Newton을 구현한 패키지. Factorization trick을 사용하고 coordinate descent를 이용해서 inner problem을 푼다.

두 구현 패키지는 각자의 용도에 맞춰서 매우 광범위하게 사용되고 있으며 state-of-the-art라고 할 수 있다.

Proximal Newton method는  proximal gradient보다 $g$의 gradient을 덜 자주 계산한다. 따라서, 계산 비용이 커질수록 proximal newton이 유리하다. 또한, inner solver를 신중하게 선택할수록 좋은 성능을 얻을 수 있다.

## Example: lasso logistic regression
Lee et al. (2012)논문에서 제시된 예제를 살펴보자. 

$l_1$ regularized logistic regression에대해 다음 세가지 방법에 대해서 성능을 평가하였다.
1.FISTA : accelerated prox grad 2. spaRSA : spectral projected gradient method 3. PN  : proximal Newton

#### Dense hessian X (n=5000, p=6000) 예시
데이터 수 n = 5000, feature 개수 p = 6000인 dense feature matrix $X$를 갖는 문제에 대해 다음과 같은 성능을 보였다. Hessian이 dense하기 때문에 매우 challenging한 문제라고 할 수 있다.

![](https://wikidocs.net/images/page/22428/09.05_Lasso_Example1.PNG)<br>
**[Fig 1] Dense hessian X (n=5000, p=6000) [2]**

오른쪽은 함수 호출 기준으로, 왼쪽은 시간 기준으로 평가한 것으로서, 함수 호출 기준으로 봤을 때가 PN의 성능이 매우 우세함을 알 수 있다. 

여기서 비용은 $g$와 $\nabla g$를 계산하는 시간이 대부분이며 특히 $\exp$와 $\log$함수를 계산하는 시간이 많이 들었다.

#### Sparse hessian X (n=542,000, p=47,000) 예시

다음의 경우는 $X$가 sparse하기 때문에 $g$와 $\nabla g$를 계산하는 시간이 덜 들었다.

![](https://wikidocs.net/images/page/22428/09.05_Lasso_Example-sparse.PNG)<br>
**[Fig 2] Sparse hessian X (n=542,000, p=47,000) [2]**
## Inexact prox evaluations
Proximal Newton method에서 proximal operation을 계산할 때  prox operator가 closed form이 아니기 때문에 정확히 계산하지 못한다. 그럼에도 불구하고, 매우 높은 정확도를 갖는다면 매우 좋은 성질이 될 수 있다. 

Lee (2014)에서는 global convergence와  local superlinear convergence를 보장하는 inner problem의 stopping rule을 제안했다.

#### Three stopping rules 
Graphical lasso estimation 문제에 inner optimizations을 위한 세 가지 stopping rules을 비교하였다. 이때, 데이터 개수는 n = 72이고 feature 개수는 p = 1255이다. 

![](https://wikidocs.net/images/page/22428/09.05_Inexact_prox.PNG)<br>
**[Fig 3] Three stopping rules [2]**

세 가지 stopping rule은 adaptive, maxiter = 10, exact이다. Maxiter는 inner iteration을 최대 10번까지만 하는 방식이고 exact는 정확한 해를 구할 때까지 반복하는 방식이다.

Proximal newton method가 quadratic convergence를 만족하므로 exact는  quadratic convergence를 만족한다고 볼 수 있다. Maxiter=10의 경우 최대 10번의 inner iteration으로는 quadratic convergence를 만족하지 못하지만 adaptive의 경우 quadratic convergence를 만족하며 세 가지 방식 중 가장 빠르다. 

#### Stopping rule of usual newton method
일반적인 newton's method에서는 inner problem은 $x^{(k-1)}$의 $g$에 대한 qudratic approximation인 $\tilde{g}\_{k-1}$를 최소화한다. 그리고, $\eta_k, k=1,2,3,...$를 선택해서 다음 조건을 만족할 때 중지한다. (이를 forcing sequence라고 한다.)

> \begin{align}
\parallel \nabla \tilde{g}\_{k-1}(x^{(k)}) \parallel_2 & \le \eta_k \parallel  \nabla g(x^{(k-1)})  \parallel_2 \\\\
\end{align}

이 조건은 다음 위치에서의 gradient가 현재 위치에서의 gradient보다 $\eta_k$배 만큼 작다는 것을 의미한다. 이때, Quadratic approximation은 $\tilde{g}\_{k-1}(z) = \nabla g(x)^T (z-x) + \frac{1}{2t} \parallel  z - x \parallel_2^2$이다.

#### Stopping rule of proximal gradient method
Lee et al. (2012)에서는 proximal gradient에서는 gradient 대신에 generalized gradient를 사용하는 방식을 제안하였다.

> \begin{align}
\parallel G\_{\tilde{f}\_{k-1}/M}(x^{(k)}) \parallel_2 & \le \eta_k \parallel  G_{f/M}(x^{(k-1)})  \parallel_2 \\\\
\end{align}

여기서 $\tilde{f}\_{k-1} = \tilde{g}\_{k-1} + h$이고 $mI \preceq \nabla^2 g \preceq MI$이다.

그리고, 다음과 같이 $\eta_k$를 설정하여 inexact proximal newton이 local superlinear rate를 갖는다는 것을 증명하였다.

> \begin{align}
\eta_k \le \min \left\\{ \frac{m}{2},  \frac{\parallel  G\_{\tilde{f}\_{k-2}/M}(x^{(k-1)}) - G_{f/M}(x^{(k-1)})  \parallel_2}{\parallel  G_{f/M}(x^{(k-2)})  \parallel_2} \right\\} \\\\
\end{align}

</br> </br>

# 19-06 Proximal quasi-Newton methods

</br> </br>

문제가 커질수록 Hessian의 계산 비용이 매우 높아진다. **Proximal quasi-Newton method**는 각 step에서 Hessian $H^{(k-1)} = \nabla^2 g(x^{(k-1)})$를 계산하지 않는 방식으로 superlinear 혹은 linear convergence의 수렴 속도를 제공한다.

## Proximal quasi-Newton method
* Lee (2014)는 Hessian을  BFGS-style로 update하는 방식을 제안했다. 이 방법은 매우 잘 실행되며 local superlinear convergence의 수렴 속도를 갖는다.
* Tseng and Yun (2009)은  Hessian을 blockwise로 근사하는 방식을 제안했다. 이 방법은 $f = g + h$에서 $h$가 일부 최적화 변수에 의존하는 부분으로 나뉠 수 있을 때만 작동한다. Hessian을 blockwise로 계산하면 계산이 매우 빨라진다. 이 방법은 linear convergence의 수렴 속도를 갖는다.

Quasi-Newton은 Hessian 계산이 힘들때 뿐 아니라 Hessian이 singular이거나 near singular인 ill-condition에서도 유용하다.

#### 참고 논문
* J. Lee and Y. Sun and M. Saunders (2014), "Proximal Newton-type methods for minimizing composite functions"
* P. Tseng and S. Yun (2009), "A coordinate gradient descent method for nonsmooth separable minimization"

</br> </br>

# 19-07 Projected Newton method

</br> </br>

## What's wrong with projected Newton?
$h$가 convex set $C$의 indicator function $h = I_c(x)$일 때 문제는 다음과 같이 정의될 수 있다.

>$$ \min_{x} \ g(x) \quad  \text{subject to}  \quad  x \in C$$

따라서,  $h(x) = I_c(x)$이면 proximal gradient descent는 **projected gradient descent**가 된다. 즉, projected gradient descent는 proximal gradient descent의 special case이다.

$h(x) = I_c(x)$일 때 proximal Newton의 경우엔 어떠한가? 이 경우 update 식은 다음과 같이 정의된다.

> \begin{align}
z^{+} & =\underset{z \in C}{\text{argmin}} \ \frac{1}{2} \parallel x - H^{-1} \nabla g(x) - z \parallel_H^2  \\\\
 & = \underset{z \in C}{\text{argmin}} \ \nabla g(x)^T (z - x) + \frac{1}{2} (z - x)^T H (z - x)  \\\\
\end{align}

$H = I$이면 $x - \nabla g(x)$를 set $C$에 projection한 결과가 되지만, 일반적인 $H \neq I$에 대해서는 projection이 아니다. ($H = I$이면 $l_2$-norm이 되기 때문에 H-norm이 아닌 $l_2$-norm 이었다면 projection이 되었을 것이다.) 
따라서, projected Newton method는 proximal Newton method의 special case가 아니다.

## Projected Newton for box constraints
특별한 경우 box constraint를 갖는 문제에 대해 projected Newton를 적용할 수 있다. (Bertsekas, 1982; Kim et al., 2010; Schmidt et al., 2011).

문제가 다음과 같다고 하자.

>$$ \min_{x} \ g(x) \quad  \text{subject to}  \quad  l \le x \le u $$

Projected Newton method의 시작 점 $x^{(0)}$와 작은 상수 $\epsilon \gt 0$라고 할 때  다음 단계를 반복한다 ($k = 1, 2, 3, ...$).

* 단계1: Binding set을 정의한다.

> \begin{align}
B_{k-1} & = \\{ i : x_i^{(k-1)} \le l_i + \epsilon \quad \text{and} \quad  \nabla_i g(x^{(k-1)}) \gt 0 \\} \quad  \cup \quad 
\\{ i : x_i^{(k-1)} \ge u_i - \epsilon  \quad \text{and} \quad  \nabla_i g(x^{(k-1)}) \lt 0 \\} 
\end{align}

최적화 step에서 이 변수들을 box constraint의 경계로 밀어낸다. 이들을 점점 더 많이 밀어낼수록 목적 함수는 줄어든다.

* 단계2: Free set $F_{k-1} = \\{1,....,n \\} \backslash B_{k-1}$을 정의한다.
* 단계3: Free variable을 따라서 Hessian의 주요 submatrix의 inverse를 정의한다.

>$$ S^{(k-1)} = [(\nabla^2 g(x^{(k-1)}))\_{F_{k-1}}]^{-1}$$

* 단계4: Fee variable을 따라 Newton step을 실행하고 projection을 한다.

> \begin{align}
x_{(k)} & = P_{[l,u]} \left\( x^{(k-1)} - t_k  
\begin{bmatrix}
S^{(k-1)} & 0 \\\\
0 & I \\\\
\end{bmatrix}
\begin{bmatrix}
\nabla F_{k-1} g(x^{(k-1)}) \\\\
\nabla B_{k-1} g(x^{(k-1)}) \\\\
\end{bmatrix}
\right\)
\end{align}

여기서 $P_{[l,u]}$는 $[l, u] = [l_1, u_1] \times \cdots [l_n, u_n]$로의 projection이다.

행렬식을 보면 free varaible에 대해서는 Newton step을 실행하지만 binding variable의 경우 변하지 않는 것을 알 수 있다. 또한, projection은 box 범위 밖에 있는 점들에 대해서 각 좌표에 대해 적절한 $l_i$ 또는 $u_i$를 지정해주는 간단한 작업이다.

이 방법은 문제가 매우 크고 (ex, 차원이 큰 경우) 대부분의 variable이 boundary 근처에 있어서 free set이 매우 작을 때 최적화를 하는 방법이다.

어떤 종류의 문제가 box constraint를 갖는가? 다음과 같이 이런 종류의 문제는 매우 많은 것으로 알려져 있다.

*  Nonnegative least squares
*  Support vector machine dual
*  Graphical lasso dual
*  Fused lasso (total variation denoising) dual

## Convergence properties
* Bertsekas (1982)는 적절한 가정하에 projected Newton으로 유한번 반복을 하면 적절한 binding constraints를 찾을 수 있다는 것을 보였다. 그러면, free variable에 대해 Newton's method와 같아진다.
*  Bertsekas (1982)는 또한  superlinear convergence를 증명하였다.
*  Kim et al. (2010), Schmidt et al. (2011)은 BFGS-style update를 사용한 projected quasi-Newton method를 제안했다.

</br> </br>

# 19-08 임시 (14 Newton's Method 작성 시 참조 내용)

</br> </br>

>
\begin{align}
\nabla f(x+\Delta x_{nt})  - \nabla f(x)  & = \int_{x}^{x+\Delta x_{nt}} \nabla^2 f(y) dy \\\
& = \int_{0}^{1} \nabla^2 f(x + t \Delta x_{nt}) \Delta x_{nt} dt \\\
\end{align}

첫번째 줄에서 좌항에서 우항으로 가는 것은 적분 정의에 의해 유도가 된다.

첫번째 줄에서 두번째 줄로 갈 때는 $y = x + t \Delta x_{nt}$로 두고 $\frac{dy}{dt} =  \Delta x_{nt}$이므로 $dy = \\Delta x_{nt} dt$로 치환한다.

>
\begin{align}
\parallel \nabla f(x^+)\parallel_2  & = \parallel \nabla f(x+\Delta x_{nt})  - \nabla f(x) - \nabla^2 f(x) \Delta x_{nt}) \parallel_2 \\\
& = \parallel  \int_{x}^{x+\Delta x_{nt}} \nabla^2 f(y) dy - \nabla^2 f(x) \Delta x_{nt}) \parallel_2  \\\
& = \parallel  \int_{0}^{1} \nabla^2 f(x + t \Delta x_{nt}) \Delta x_{nt} dt - \nabla^2 f(x) \Delta x_{nt}) \parallel_2  \\\
& = \parallel  \int_{0}^{1} ((\nabla^2 f(x + t \Delta x_{nt})  - \nabla^2 f(x)) \Delta x_{nt} dt \parallel_2   \\\
\end{align}

</br> </br>

# 20 Dual Methods

</br> </br>

본 장에서는 dual 을 이용하여 문제를 해결하는 방법으로서,  dual subgradient method, dual decompostion method, augmented Lagrangian method에 대해 알아보고, Alternating Direction Method of Multipliers (ADMM)의 개념을 간단히 알아본다. 

우선 앞에서 배운 내용 중 Proximal Newton method 와 Conjugate function 내용을 간단히 복습한다. 

## Review: proximal Newton method  
다음의 문제가 있다. 
>\begin{equation}
\min_x g(x) + h(x)
\end{equation}

여기서, 함수 $g$와 $h$는 convex 함수이며, $g$는 두번 미분 가능하고, $h$는 simple 하다고 가정한다.  

Proximal Newton method는 최초 $x^{(0)} \in \mathbb{R}^n$에서 시작되며, 먼저 함수 $g$와 $h$에게 모두 좋은 최적의 벡터 방향을 아래와 같이 찾는다
>\begin{alignat}{1}
v^{(k)} & = \arg \min_v g({x^{(k-1)}})^T v +  \frac{1}{2} v^T \nabla^2 g(x^{(k-1)}) v + h(x^{(k-1)} + v) 
\end{alignat}

위에서 찾아진 방향으로 아래와 같이 다음 $x^{(k)}$를 업데이트한다.  
>\begin{equation}
x^{(k)} = x^{(k-1)} + t_k v^{(k)}, k=1,2,3,\dots 
\end{equation}

여기서, $t_k$는 step size로서 backtracking으로 결정된다. 

위 두 과정을 반복적으로 실행한다. 

> * 위 반복(iteration)은 매우 비용이 많이 든다 ($v^{(k)}$를 계산하는 것이 일반적으로 매우 어렵다)
* 그러나, 적당한 조건하에서는 converge하기까지 매우 적은 iteration이 요구되고, local quadratic convergence의 수렴 속도를 갖는다 


## Review: conjugate function ###
$f: \mathbb{R}^n \to \mathbb{R}$에 대해, conjugate 함수는 아래와 같이 정의된다.   
>\begin{equation}
f^*(y) = \max_x y^Tx - f(x)
\end{equation}

(1) Conjugate 함수는 아래와 같이 쓸 수 있으며, 이는 dual 문제에서 자주 나타나는 형태이다.  
>\begin{equation}
-f^{\*}(y) = \min_x f(x) - y^Tx
\end{equation}

(2) 만약 $f$가 closed하고 convex이면, $f^{**} = f$ 이다. 또한, 
>\begin{equation}
x \in \partial f^{\*}(y) \Longleftrightarrow y \in \partial f(x) \Longleftrightarrow x \in \arg\min_z f(z) - y^Tz
\end{equation}
#### Proof ####
먼저, $x \in \partial f^{\*}(y) \Longleftrightarrow y \in \partial f(x)$을 증명한다. 

#### 1단계 : $x \in \partial f^{\*}(y) \Longleftarrow y \in \partial f(x)$
>
$y \in \partial f(x)$를 가정하자. 그러면, $x$는 $y^Tz - f(z)$를 최대로 하게 하는 $z$들의 집합 $M_y$ 에 속하게 된다, 즉 $x \in M_y$. <br> 그러나, $f^{\*}(y)=   \max_z y^Tz - f(z)$ 이고, $\partial f^{\*}(y)=\text{cl} \left ( \text{conv} \left (\bigcup_{z \in M_y} \\{z\\} \right ) \right )$. 따라서, $x \in \partial f^{\*}(y)$

####  2단계 : $x \in \partial f^{\*}(y) \Longrightarrow y \in \partial f(x)$
>
위에서 보인것과 같이, 만약, $x \in  \partial f^{\*}(y)$ 이면, $y \in \partial f^{\*\*}(x)$. 여기서, $f^{\*\*}(x)=f$ 이므로 $y \in \partial f(x)$.  

위 1, 2 단계를 통해, $x \in \partial f^{\*}(y) \Longleftrightarrow y \in \partial f(x)$이 증명되었다. 
#### 3단계 : $x \in \partial f^{\*}(y) \Longleftrightarrow y \in \partial f(x) \Longleftrightarrow x \in \arg\min_z f(z) - y^Tz$
>
한편, $y \in \partial f(x) \Longleftrightarrow x \in \arg\min_z f(z) - y^Tz$은 subgradient의 정의로부터 자명한 사실이다.  <br>
따라서, 위 두 증명을 통해, $x \in \partial f^{\*}(y) \Longleftrightarrow y \in \partial f(x) \Longleftrightarrow x \in \arg\min_z f(z) - y^Tz$임이 증명되었다.  


(3) 만약 $f$가 strictly convex이면,
>\begin{equation}
\nabla f^{\*}(y) = \arg\min_z f(z) - y^T z
\end{equation}
#### Proof ####
>$f$가 strictly convex이면, $f(z)-y^Tz$는 최소값을 갖는 유일한 $z$가 존재하며, 
>이것은 위 (2)에 대한 증명으로부터 $\nabla f^{\*}(y)$이어야 한다. 

다시 말하면 $f$가 strictly convex이면  $f^{\*}$의 subgradient는 1개이며 gradient가 된다. 따라서,  $f^{\*}$는 differentiable한 함수이다.


</br> </br>

# 20-01 Dual (sub)gradient methods

</br> </br>

Close-form 형태의 dual (conjugate)을 찾을 수 없는 경우에도 dual 기반의 subgradient 또는 gradient method를 사용할 수 있다.

예를 들어, 다음의 문제를 보자. 
>\begin{equation}
\min_x f(x) \text{ subject to } Ax = b
\end{equation}

위 문제의 dual 문제는 아래와 같다. 여기서 $f^{\*}$는 $f$의 conjugate이다.
>\begin{equation}
\max_u -f^{\*}(-A^T u) - b^T u
\end{equation}

이때, $g(u)$를 $-f^{\*}(-A^Tu)-b^Tu$로 정의하면 $g(u)$의 subgradient는 다음과 같다.
>\begin{equation}
\partial g(u) = A \partial f^{\*}(-A^Tu) - b
\end{equation}

위 식에서 $\partial f^{\*}(-A^Tu)$를 $x$로 정리하면 아래와 같이 표현될 수 있다. 

>\begin{equation}
\partial g(u) = Ax-b \quad \text{where} \quad x \in \arg\min_z f(z) + u^T A z
\end{equation}

## Dual subgradient method
**Dual subgradient method**는 dual 문제의 목적식을 최대화하기 위해 시작점 $u^{(0)}$에서 시작해서 $k=1,2,3,\dots$에 대해 다음 단계를 반복한다.
>\begin{alignat}{1}
x^{(k)} & \in \arg \min_x f(x) + ({u^{(k-1)}})^T A x  \\\ 
u^{(k)} & = u^{(k-1)} + t_k (A x^{(k)} - b) 
\end{alignat}

여기서 step size $t_k$($k=1,2,3,\dots$)는 표준적인 방식으로 선택된다. 

#### Strictly Convex인 경우
만약 $f$가 strictly convex라면 $f^{\*}$는 미분가능해진다. 

따라서, 알고리즘은 $k=1,2,3,\dots$에 대해 다음 단계를 반복하는 **dual gradient ascent**가 된다.
>\begin{alignat}{1}
x^{(k)} & = \arg \min_x f(x) + ({u^{(k-1)}})^T A x  \\\
u^{(k)} & = u^{(k-1)} + t_k (A x^{(k)}-b) 
\end{alignat}

이전 방식과 다른 점은 $x^{(k)}$가 유일하다는 것이다. ($\text{argmin}$과의 관계가 $=$ 관계임을 확인해보라.)

여기서 step size $t_k$($k=1,2,3,\dots$)도 표준적인 방식으로 선택되며 $\text{argmin}$을 수행할 때 proximal graidient나 acceleration도 평소처럼 적용할 수 있다.





</br> </br>

# 20-01-01 Convergence Analysis

</br> </br>

## Lipschitz gradients and strong convexity
$f$가 closed convex 함수라고 가정하자. 그러면 다음 동치 관계가 성립된다. 
>\begin{equation}
\text{$f$ is strongly convex with parameter $d$ $\Longleftrightarrow$ $\nabla f^{\*}$ Lipschitz with parameter $1/d$.} 
\end{equation}

### Proof ###
만약 $g$가 strongly convex하고 $x$에서 miminize된다고 하면 다음 관계가 성립한다. 
>\begin{equation}
g(y) \geq g(x) + \frac{d}{2}\lVert y-x \rVert_2^2, \text{ for all } y
\end{equation}

우선, $g(x) = f(x) − u^T x$를 최소화하는 $x_u = \nabla f^{\*}(u)$와 $g(x) = f(x) − v^T x$를 최소화하는 $x_v = \nabla f^{\*}(v)$가 있다고 하자. 

그러면, 위 식으로부터 다음 두 부등식을 얻을 수 있다. 
>\begin{alignat}{1}
f(x_v) - u^Tx_v \geq f(x_u) - u^T x_u + \frac{d}{2} \lVert x_u - x_v \rVert_2^2 \\\
f(x_u) - v^Tx_u \geq f(x_v) - v^T x_v + \frac{d}{2} \lVert x_u - x_v \rVert_2^2 
\end{alignat}

위 두 식을 더하면 다음과 같은 식을 얻을 수 있다.
>\begin{equation}
f(x_v) - u^Tx_v + f(x_u) - v^Tx_u \geq f(x_u) - u^T x_u +  f(x_v) - v^T x_v + d \lVert x_u - x_v \rVert_2^2.  
\end{equation}

이 식을 재정렬 후 Cauchy-Schwartz를 적용하면 다음과 같이 정리된다.
>\begin{align}
d \lVert x_u - x_v \rVert_2^2 & \leq - u^Tx_v - v^Tx_u + u^T x_u + v^T x_v \\\\
& = (u-v)^T(x_u - x_v) \\\\
& \leq \lVert u-v \rVert_2 \lVert x_u - x_v \rVert_2
\end{align}

따라서, 다음과 같은 관계를 확인할 수 있다.

> $\lVert x_u - x_v \rVert_2 \leq \frac{1}{d} \lVert u-v \rVert_2$

이로써 $\nabla f^{\*}$ Lipschitz with parameter $1/d$이 증명되었다.

## Convergence guarantees
위 결과와 gradient descent를 결합하여, dual objective의 최적해로의 수렴성을 다음과 같이 설명할 수 있다.  

* 만약 $f$가 파라미터 $d$로 strongly convex 하면, step size $t_k=d$ ($k=1,2,3, \dots$)에 대해서, dual gradient ascent는 $O(1/\epsilon)$으로 converge한다. 
* 만약 $f$가 파라미터 $d$로 strongly convex 하고, $\nabla f$는 파라미터 $L$로 Lipschitz하면, step size $t_k=2/(1/d + 1/L)$ ($k=1,2,3, \dots$)에 대해서, dual gradient ascent는 $O(\log(1/\epsilon))$으로 converge한다. (linear convergence)





</br> </br>

# 20-02 Dual Decomposition

</br> </br>

본 절에서는 dual을 이용하여 문제를 decomposition하는 기법에 대해 알아본다.

</br> </br>

# 20-02-01 Dual Decomposition with Equality Constraint

</br> </br>

다음의 문제를 보자. 
>\begin{equation}
\min_x \sum_{i=1}^B f_i(x_i) \quad \text{ subject to } \quad Ax = b
\end{equation}

만약, 변수 $x$를 $B$개의 블록으로 분할하고, $x = (x_1,\dots,x_B) \in \mathbb{R}^n, \text{ where } x_i \in \mathbb{R}^{n_i}$, matrix $A$ 역시 $B$개의 sub-matrix 블록으로 다음과 같이 분할하면, $A = [A_1, \dots, A_B], \text{ where } A_i \in \mathbb{R}^{m \times n_i}$, 위 minimization 문제는 다음과 같이 $B$개의 분리된 문제로 분해될 수 있다.  

>\begin{alignat}{1}
                           & \quad x^+ \in \arg\min_x \sum_{i=1}^B f_i(x_i) + u^T Ax  \\\
\Longleftrightarrow & \quad x_i^+ \in \arg\min_{x_i} f_i(x_i) + u^T A_ix_i, \quad i=1,\dots, B
\end{alignat}

#### Dual decomposition 알고리즘: 

>\begin{alignat}{1}
x_i^{(k)} & \in \arg \min_{x_i} f_i(x_i) + (u^{(k-1)})^T A_i x_i, \quad i=1,\dots,B  \\\
u^{(k)}   & = u^{(k-1)} + t_k \left(\sum_{i=1}^B A_i x_i^{(k)} - b \right)
\end{alignat}

위 두 단계는 아래와 같이 해석할 수 있다. 
>* 첫번째 수식은 broadcast 단계로서, $B$개의 프로세서의 각각에게 $u$를 보낸다. 그리고, 프로세서 각각은 병렬로 자신의 최적 $x_i$를 찾는다.   
* 두번째 수식은 gather 단계로서, 각 프로세서로부터 $A_i x_i$를 모은다. 그리고 global dual 변수 $u$를 업데이트 한다. 

위 두 단계는 $k=1,2,3,\dots$에 대해 계속 반복한다. 

<center>
![](https://wikidocs.net/images/page/23703/decomposition.png)</br>
**[Fig 1] Broadcast and Gather**</br>
</center>


</br> </br>

# 20-02-02 Dual Decomposition with Inequality Constraint

</br> </br>

다음의 문제를 생각해 보자. 앞의 문제와 다른점은 제약식이 부등식의 관계를 갖는 것이다. 
>\begin{equation}
\min_x \sum_{i=1}^B f_i(x_i) \quad \text{subject to} \quad \sum_{i=1}^B A_i x_i \leq b
\end{equation}

## Dual decomposition (projected subgradient method) 
위 문제에서는 dual 변수가 항상 $0$보다 같거나 커야 한다, 즉 $u \geq 0$. 따라서, 다음 스텝의 $u$값을 계산할 때, $0$보다 큰 범위안으로 projection을 시켜서 업데이트를 한다. 

>\begin{alignat}{1}
x_i^{(k)} & \in \arg \min_{x_i} f_i(x_i) + (u^{(k-1)})^T A_i x_i, \quad i=1,\dots,B  \\\
u^{(k)}   & = u^{(k-1)} + t_k \left(\sum_{i=1}^B A_i x_i^{(k)} - b \right)_+
\end{alignat}

여기서, $u_{+}$는 0보다 큰 $u$를 의미한다, 즉, $(u_+)\_i = \max \\{0,u_i \\}, i=1,\dots,m$. 
위  과정을 $k=1,2,3,\dots$에 대해서 반복한다. 

#### Price coordination interpretation
일반적으로 dual decomposition 문제들은 price coordination 관점에서 다음과 같이 해석될 수 있다. (Vandenberghe)
> * $B$개의 독립적인 유닛이 있고, 각 유닛은 자신의 결정 변수 $x_i$를 결정한다. 
> * 각 제약조건은 $B$개의 유닛이 공유하고 있는 자원에 대한 제약을 의미하며, dual 변수 $u_j$는 자원 $j$의 가격을 의미한다. 
> * Dual 변수는 아래와 같이 업데이트되며 </br>
 \begin{equation}
 u_j^{+} = (u_j - t s_j)_{+}, \quad  j=1,\dots,m
 \end{equation}
>
> $\quad$ 여기서, $s=b-\sum_{i=1}^B A_ix_i$는 슬랙 변수로써 </br>
> $\qquad$ - $s_j < 0$이면, 자원 $j$가 over-utilized 되고 있다는 의미이고, 따라서, price $u_j$를 증가시킨다 </br>
> $\qquad$ - $s_j > 0$이면, 자원 $j$가 under-utilized되고 있다는 의미이고,  따라서, price $u_j$를 감소시킨다 </br>
> $\qquad$ - price는 향상 음수가 되지 않도록 한다. </br>






</br> </br>

# 20-03 Augmented Lagrangians

</br> </br>

Dual ascent의 단점은 수렴을 보장하기 위해 강한 조건이 필요하다는 것이다. (수렴을 보장하려면 $f$가 strongly convex해야 했다.) 이런 단점은 **Augmented Lagrangian method** (또는 **Method of multipliers**)에 의해 개선될 수 있다. 

Primal 문제를 아래와 같이 변환한다. 
>\begin{equation}
\min_x f(x) + \frac{\rho}{2} \lVert Ax - b \rVert _2^2 \quad \text{ subject to } \quad Ax = b
\end{equation}

여기서 $\rho > 0$이다. $A$가 full column rank를 갖는다면 목적식은 strongly convex하다. 이는 원래의 문제와 정확히 동일한 문제가 된다. (Augmented term인 $Ax - b$는 0이 되기 때문이다.)

## Augmented Lagrangian Method
**Dual gradient ascent** : $k=1,2,3,\dots$에 대해 다음을 반복한다. 
>\begin{alignat}{1}
x^{(k)} & \in \arg\min_x f(x) + (u^{(k-1)})^T A x + \frac{\rho}{2} \lVert Ax - b \rVert_2^2  \\\
u^{(k)} & = u^{(k-1)} + \rho (A x^{(k)} - b)
\end{alignat}

위 dual 알고리즘에서 $\rho$는 step size 역할을 한다, 즉 $t_k=\rho$이다. 이것은 다음에서 그 이유를 알 수 있다. 

#### $\rho$가 step size일 때 optimality 증명

$x^{(k)}$는 $f(x) + (u^{(k-1)})^T Ax + \frac{\rho}{2} \lVert Ax - b\rVert _2^2$ 를 최소화하므로, 
원래 primal 문제에 대한 stationary 조건에 따라, $x^{(k)}$에서 목적식의 subgradient가 아래와 같이 $0$을 포함해야 한다. 

>\begin{alignat}{1}
0 & \in \partial f(x^{(k)}) + A^T (u^{(k-1)}) + \rho (A x^{(k)} -b))  \\\
  & = \partial f(x^{(k)}) + A^T u^{(k)}
\end{alignat}

위식에서, $u^{(k)} = u^{(k-1)} + \rho (A x^{(k)} - b)$로 동작하게 되면, 적당한 조건하에서 $Ax^{(k)}-b$가 $0$으로 가까워지면서 feasible한 해를 제공하기 시작하고, 궁극적으로 KKT 조건이 만족되고, $x^{(k)}$와 $u^{(k)}$가 optimality에 근접함을 보일 수 있다.  

**Augmented Lagrangian method**의 장점은 훨씬 좋은 수렴성을 갖는다는 것이고, 단점은 문제를 분해할 수 있는 decomposability를 잃는다는 것이다.

</br> </br>

# 20-04 A peak at ADMM

</br> </br>

본 절에서는 Alternating Direction Method of Multipliers (ADMM) 기법의 개요에 대해 알아본다. 앞에서 augmented Lagrangian 방법이 decomposability를 제공하지 못했지만, ADMM은 수렴성과 함께  decomposability를 제공하는 method이다. 

</br> </br>

# 20-04-01 ADMM

</br> </br>

다음 문제를 보자. 
>\begin{equation}
\min_x f(x) + g(z) \quad \text{subject to} \quad Ax + Bz = c
\end{equation}

앞에서처럼, 목적식을 다음과 같이 확장할 수 있다. 
>\begin{equation}
\min_x f(x) + g(z) + \frac{\rho}{2} \lVert Ax + Bz - c \rVert_2^2 \quad \text{subject to} \quad Ax + Bz = c
\end{equation}

여기서, $\rho > 0$ 이다. 

그리고, augmented Lagrangian을 다음처럼 정의할 수 있다.  
>\begin{equation}
L_{\rho} (x,z,u) = f(x) + g(z) + u^T(Ax + Bz - c) + \frac{\rho}{2} \lVert Ax + Bz - c \rVert_2^2
\end{equation}

ADMM은 $k=1,2,3 \dots$에 대해서 다음의 step을 수행한다. 
>\begin{alignat}{1}
x^{(k)} & = \arg\min_x  L_{\rho} (x,z^{(k-1)},u^{(k-1)}) \\\
z^{(k)} & = \arg\min_z  L_{\rho} (x^{(k)},z,u^{(k-1)}) \\\
u^{(k)} & = u^{(k-1)} + \rho (Ax^{(k)} + Bz^{(k)} - c) 
\end{alignat}

첫번째 식에서 구한 $x^{(k)}$가 $z^{(k)}$에 이용된다는 점은 매우 중요하다. 만일, 이렇게 하지 않으면 수렴되지 않을 수 있다.

일반 **Method of multiplier**에서는 처음 두 스텝이 다음의 joint 최소화로 바뀌게 된다는 점을 주의하자.
>\begin{equation}
(x^{(k)}, z^{(k)}) = \arg\min_{x,z} L_{\rho} (x,z,u^{(k-1)})     
\end{equation}



</br> </br>

# 20-04-02 Converegence Guarantee

</br> </br>

$f$와 $g$에 대한 적당한 조건 아래에서 (A와 B가 full rank일 필요는 없다), ADMM은 모든 $\rho > 0$에 대해서 다음을 만족한다. 

* **Residual convergence**: $k$가 $\infty$로 갈 때, $r^{(k)} = A x^{(k)} - B z^{(k)} - c \to 0$, 즉 primal iteration이 feasibility로 접근한다.  
* **Objective convergence**: $f(x^{(k)} + g(x^{(k)} \to f^{\*} + g^{\*}$, 여기서 $f^{\*} + g^{\*}$는 최적의 primal objective 값이다. 
* **Dual convergence**: $u^{(k)} \to u^{\*}$, 여기서 $u^{\*}$는 dual solution 이다. 

정확한 수렴속도는 아직 알려지지 않았으며, 현재 많은 연구가 진행중이다. 대략적으로는 first-order method 와 비슷하거나 약간 더 빠르게 동작한다. 



</br> </br>

# 20-04-03 ADMM in Scaled Form

</br> </br>

ADMM은 dual 변수 $u$를 $w=u/\rho$로 바꾸어서 scaled form으로 표현할 수 있다. 그러면, ADMM step은 다음과 같이 나타낼 수 있다. 
>\begin{alignat}{1}
x^{(k)} & = \arg\min_x f(x) + \frac{\rho}{2} \lVert Ax + Bz^{(k-1)} - c + w^{(k-1)} \rVert_2^2  \\\
z^{(k)} & = \arg\min_z g(x) + \frac{\rho}{2} \lVert Ax^{(k)} + Bz - c + w^{(k-1)} \rVert_2^2  \\\
w^{(k)} & = w^{(k-1)} + Ax^{(k)} + Bz^{(k)} - c 
\end{alignat}

위의 식은 다음의 과정을 통해 원래 식과 같다는 것을 알 수 있다.

>\begin{align}
x^{(k)} & = \arg\min_x f(x) + \frac{\rho}{2} \lVert Ax + Bz^{(k-1)} - c + w^{(k-1)} \rVert_2^2  \\\\
& = \arg\min_x f(x)  + \frac{\rho}{2} \lVert Ax + Bz^{(k-1)} - c \rVert_2^2  + 2 \frac{\rho}{2} w^{(k-1)} (Ax + Bz^{(k-1)} - c)  + \lVert w^{(k-1)} \rVert_2^2 \\\\
& = \arg\min_x f(x)  + \frac{\rho}{2} \lVert Ax + Bz^{(k-1)} - c \rVert_2^2  + u^{(k-1) \} (Ax + Bz^{(k-1)} - c) \\\\
\end{align}


여기서, $w^{(k)}$은  $k$번째 residual의 합으로 볼 수도 있다.
>\begin{equation}
w^{(k)} = w^{(0)} + \sum_{i=1}^k (Ax^{(i)} + Bz^{(i)} - c) 
\end{equation}


</br> </br>

# 20-04-04 Example_ Alternating Projection

</br> </br>

Convex set $C,D \in \mathbb{R}^n$의 교집합의 한 점을 찾는 문제를 고려해 보자.  
>\begin{equation}
\min_x I_C(x) + I_D(x)    
\end{equation}

위 문제를 ADMM형태로 바꾸기 위해, 아래와 같이 표현한다. 
>\begin{equation}
\min_{x,z} I_C(x) + I_D(x) \quad \text{subject to} \quad x - z = 0   
\end{equation}

각 ADMM cycle은 두개의 projection을 포함한다. 
>\begin{alignat}{1}
x^{(k)} & = \arg\min_x P_C \left( z^{(k-1)} - w^{(k-1)} \right) \\\
z^{(k)} & = \arg\min_z P_D \left( x^{(k)} + w^{(k-1)} \right) \\\
w^{(k)} & = w^{(k-1)} + x^{(k)} + z^{(k)}
\end{alignat}

위의 식에서 $x^{(k)}$는 다음과 같이 도출된 것이다.

>\begin{alignat}{1}
x^{(k)} & = \arg\min_x I_C(x) + \frac{\rho}{2} \lVert x - z^{(k-1)} + w^{(k-1)} \rVert_2^2 \\\
& = \arg\min_x P_C \left( z^{(k-1)} - w^{(k-1)} \right) \\\
\end{alignat}

위의 식에서 $z^{(k)}$는 다음과 같이 도출된 것이다.


>\begin{alignat}{1}
z^{(k)} & = \arg\min_x I_D(z) + \frac{\rho}{2} \lVert x^{(k-1)} - z + w^{(k-1)} \rVert_2^2 \\\
& = \arg\min_z P_D \left( x^{(k)} + w^{(k-1)} \right) \\\
\end{alignat}

위 방법은 기존 alternating projection method와 비슷하지만 더 효율적이다.  


</br> </br>

# 20-05 References

</br> </br>

### References

* S. Boyd, N. Parikh, E. Chu, B. Peleato and J. Eckstein (2010), "Distributed optimization and statistical learning via the alternating direction method of multipliers"
* W. Deng and W. Yin (202), "On the global and linear convergence of the generalized alternating direction method of multipliers"
* M. Hong and Z. Luo (2012), "On  the linear convergence of the alternating direction  method of multipliers"
* F. lutzeler, P. Bianchi, Ph. Ciblat, and W. Hachem (2014), "Linear convergence rate for distributed optimization with the alternating direction method of multipliers"
* R. Nishihara, L. Lessard, B.  Recht, A. Packard, and M. Jordan (2015), "A general analysis of the convergence of ADMM"
* L. Vandenberghe, Lecture Notes for EE 236C, UCLA, Spring 2011-2012

</br> </br>

# 21  Alternating Direction Method of Multipliers

</br> </br>

이 장에서는 [20장](https://wikidocs.net/edit/page/22606)에서 다루었던 ADMM을 조금 더 자세히 다루어보고자 한다. 기본적인 개념은 20장에서 다룬 내용과 깊이에서 큰 차이가 없고, 응용 사례들을 위주로 살펴본다.

#### 참고 논문


* Boyd, Stephen, et al. [BPCPE11] "Distributed optimization and statistical learning via the alternating direction method of multipliers." Foundations and Trends® in Machine learning 3.1 (2011): 1-122.
* Hong, Mingyi, and Zhi-Quan Luo. [HL12] "On the linear convergence of the alternating direction method of multipliers." Mathematical Programming 162.1-2 (2017): 165-199.
* Deng, Wei, and Wotao Yin. [DY16] "On the global and linear convergence of the generalized alternating direction method of multipliers." Journal of Scientific Computing 66.3 (2016): 889-916.
* Iutzeler, Franck, et al. [IBCH14] "Linear convergence rate for distributed optimization with the alternating direction method of multipliers." 53rd IEEE Conference on Decision and Control. IEEE, 2014.
* Nishihara, Robert, et al. [NLRPJ15] "A general analysis of the convergence of ADMM." arXiv preprint arXiv:1502.02009 (2015).
* Parikh, Neal, and Stephen Boyd. [NB13] "Proximal algorithms." Foundations and Trends® in Optimization 1.3 (2014): 127-239.
* Vu, Vincent Q., et al. [VCLR13] "Fantope projection and selection: A near-optimal convex relaxation of sparse PCA." Advances in neural information processing systems. 2013.
* Candès, Emmanuel J., et al. [CLMW09] "Robust principal component analysis?." Journal of the ACM (JACM) 58.3 (2011): 11.
* Ramdas, Aaditya, and Ryan J. Tibshirani. [RT16] "Fast and flexible ADMM algorithms for trend filtering." Journal of Computational and Graphical Statistics 25.3 (2016): 839-858.
* Wytock, Matt, Suvrit Sra, and Jeremy Z. Kolter. [WSK14] "Fast Newton methods for the group fused lasso." UAI. 2014.
* Barbero, Alvaro, and Suvrit Sra. [BS14] "Modular proximal optimization for multidimensional total-variation regularization." arXiv preprint arXiv:1411.0589 (2014).


ADMM convergence 관련 : [BPCPE11], [HL12], [DY16], [IBCH14], [NLRPJ15]  
Sparse subspace estimation : [VCLR13]  
Sparse plus low rank decomposition : [CLMW09]  
Consensus ADMM : [BPCPE11], [NB13]  
Subprogram parameterization : [RT16], [WSK14], [BS14]

</br> </br>

# 21-01 Last time _ Dual method, Augmented Lagrangian method, ADMM, ADMM in scaled form

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>
이전 20장에서 우리는 Dual methods, ADMM에 대해 살펴보았다. 여기선 ADMM의 응용을 살펴보기에 앞서, Dual methods와 Augmented Lagrangian method, ADMM, ADMM in scalaed form에 대해 정리하고자 한다.

## Dual method
아래의 문제를 살펴보자.

>$$
>\begin{align}
>&\min_{x} f(x) \\\\
>&\text{ subject to } Ax = b
>\end{align}
>$$

여기서 $f$는 strictly convex하고 닫혀있다고 하자. 이 문제의 Lagrangian은 아래와 같다.
>$$
>\begin{align}
>L(x,u) = f(x)+u^{T}(Ax-b)
>\end{align}
>$$

위 문제의 dual 문제는 아래와 같다.
>$$
>\begin{equation}
>\max_u -f^{\*}(-A^T u) - b^T u
>\end{equation}
>$$

여기에서의 u는 dual variable이다.

이 식에 대한 dual gradient ascent는 아래의 식을 반복적으로 계산한다.($k=1,2,3,...$)
>$$
>\begin{align}
>x^{(k)}=\underset{x}{\operatorname{argmin}} L(x,u^{(k-1)}) \\\\
>u^{(k)}= u^{(k-1)} +t_{k}(Ax^{(k)}-b)
>\end{align}
>$$

$t_{k}$는 k번째 iteration의 step size이다.

이 dual method에서는, primal 변수 $x$는 첫번째 식처럼 이전 스텝에서 주어진 $u^{(k-1)}$에서의 Lagrangian을 최소화하는 $x$값으로 업데이트되고, dual 변수 $u$는 $Ax-b$이 gradient 방향인 gradient ascent의 형태로 업데이트가 된다.

이 방법의 장점은 $f$가 B개의 문제로 분할이 가능할 때(decomposable), $x$ 또한 B개의 블록으로 분할하고$( x =(x_{1}, ...,x_{B})\in \mathbb{R}^{n}, \text{ where }x_{i}\in \mathbb{R}^{n_{i}})$, matrix A 또한 B개의 sub-matrix 블록으로 decompose가 가능해서$(A = [A_{1}, ..., A_{B}] \text{ where }A_{i} \in \mathbb{R}^{m \times n_{i}})$, 쉽게 병렬화 또는 확장이 가능하여 계산이 용이하다. 하지만 단점은 수렴성를 보장하기 위하여 까다로운 조건이 필요하다 ; primal의 feasible을 보장하기 위하여, $f$가 strongly convex하다는 조건이 필요하다.[[20-01-01]](https://wikidocs.net/23700)
## Augmented Lagrangian method
Method of multipliers라고도 불리는 Augmented Lagrangian method는 primal 문제에 추가 항을 더하여 계산한다. 이렇게 하면 iteration을 반복되면서 점차 KKT의 conditions을 만족하게 된다. Dual method와 비교하여 수렴성에 대한 조건(f가 strongly convex)을 완화시킨다. 대신 문제의 분해(decompose)가 불가능해지는 단점이 있다. Primal 문제의 정의는 다음과 같다.

>$$
>\begin{align}
>&\min_{x} & f(x)+\frac{\rho}{2}||Ax-b||\_{2}^{2}&\\\\
>&\text{subject to} &Ax=b&
>\end{align}
>$$

여기서 $\rho>0$이다. 이 문제의 Lagrangian은 아래와 같다.

>$$
>\begin{align}
>L_{\rho}(x,u)=f(x)+u^{T}(Ax-b)+\frac{\rho}{2}||Ax-b||\_{2}^{2}.
>\end{align}
>$$

Dual gradient ascent는 다음을 반복한다. ($k=1,2,3,...$)
>$$
>\begin{align}
>x^{(k)}=\underset{x}{\operatorname{argmin}} L_{\rho}(x,u^{(k-1)}) \\\\
>u^{(k)}= u^{(k-1)} +\rho(Ax^{(k)}-b)
>\end{align}
>$$

이 방법의 장점은 위에서 언급하였듯, dual method에 비하여 더 나은 수렴 조건을 가진다. 단점은 제곱 항이 추가되는 탓에 분해가능한 성질(decomposability)을 잃게 된다.

## Alternating direction method of multipliers(ADMM)
ADMM은 dual method와 augmented Lagrangian method의 장점을 섞은 방법이다. 문제가 아래의 형태로 정의 되어있다고 하자.

>$$
>\begin{align}
>\min_{x} f(x)+g(z) \qquad \text{subject to  }Ax+Bz=c
>\end{align}
>$$

이 식에 $\rho>0$인 augmented Lagrangian을 정의할 수 있다.
>$$
>\begin{align}
>&L_{\rho} (x,z,u) = f(x)+g(z)+u^{T}(Ax+Bz-c)+\frac{\rho}{2}||Ax+Bz-c||\_{2}^{2}\\\\
>\end{align}
>$$

이어서 아래를 반복하여 변수를 업데이트한다.
>$$
>\begin{align}
>&\text{for k = 1,2,3,...}\\\\
>&x^{(k)}=\underset{x}{\operatorname{argmin}} L_{\rho}(x,z^{(k-1)},u^{(k-1)})\\\\
>&z^{(k)}=\underset{z}{\operatorname{argmin}} L_{\rho}(x^{(k)},z,u^{(k-1)})\\\\
>&u^{(k)}=u^{(k-1)}+\rho(Ax^{(k)}+Bz^{(k)}-c)
>\end{align}
>$$

ADMM에서는 primal 변수인 $x, z$를 함께 업데이트하지 않고, 순차적으로 각각 업데이트 한다. 그리고 순차적으로 업데이트할 때는 다른 변수는 가장 최근의 값을 이용한다. 즉, k번째 iteration에서 $z$를 업데이트 할때에는 이전 iteration의 값 $x^{(k-1)}$이 아닌 $x^{(k)}$를 이용하고, u를 업데이트 할때 또한 현재 iteration에서 구한 primal 변수 $x^{(k)}, z^{(k)}$를 바로 이용한다.

## Alternating direction method of multipliers(ADMM)
ADMM은 제약식 내의 A와 B가 full rank라는 가정 없이, $f$와 $g$에 대한 큰 제약 없이(under modeset assumption) 모든 $\rho > 0$에 대하여 다음을 만족한다. 

* Residual convergence: $k$가 $\infty$로 갈 때, $r^{(k)} = A x^{(k)} - B z^{(k)} - c \to 0$, 즉 primal iteration이 feasibility로 접근한다.  
* Objective convergence: $f(x^{(k)}) + g(x^{(k)}) \to f^{\star} + g^{\star}$, 여기서 $f^{\star} + g^{\star}$는 최적의 primal objective 값이다. 
* Dual convergence: $u^{(k)} \to u^{\star}$, 여기서 $u^{\star}$는 dual solution 이다. 

Convergence rate에 대해서는 아직 일반적으로 알려지진 않았고, 연구가 이루어지고있다. Convergence에 대한 참고문헌은 [21장 소개파트](https://wikidocs.net/edit/page/22687)에 서술되어있다.

## ADMM in scaled form
ADMM의 dual 변수 $u$를 scale된 변수 $w=u/\rho$로 바꾸어서 scaled form으로 표현할 수 있다. 이를 정리하면, ADMM step은 다음과 같이 나타낼 수 있다. 
>$$
>\begin{align}
&x^{(k)} = \underset{x}{\operatorname{argmin}} f(x) + \frac{\rho}{2} ||Ax + Bz^{(k-1)} - c + w^{(k-1)} ||\_2^2 \\\\
&z^{(k)} = \arg\min_z g(x) + \frac{\rho}{2} || Ax^{(k)} + Bz - c + w^{(k-1)} ||\_2^2  \\\\
&w^{(k)} = w^{(k-1)} + Ax^{(k)} + Bz^{(k)} - c 
\end{align}
>$$

여기서, $w^{(k)}$은 매순간 residual의 $k$번째 까지의 합으로 아래처럼도 표현 가능하다. 
>$$
>\begin{align}
w^{(k)} = w^{(0)} + \sum_{i=1}^k (Ax^{(i)} + Bz^{(i)} - c) 
\end{align}
>$$


</br> </br>

# 21-02 Connection to proximal operators

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

아래와 같이 한 변수에 대하여 두 개의 함수로 분리된 형태의 최적화 문제를 생각해보자.
>$$
>\begin{align}
>\min_{x} f(x)+g(x)
>\end{align}
>$$

이는 제약조건을 추가한 형태로도 표현 가능하다.
>$$
>\begin{align}
>\min_{x, z} f(x)+g(z) \qquad \text{subject to  }x=z
>\end{align}
>$$

여기에서의 ADMM step은 아래와 같다.
>$$
>\begin{align}
>&x^{(k)} = {\operatorname{prox}}\_{f,\frac{1}{\rho}}(z^{(k-1)}-w^{(k-1)})\\\\
>&z^{(k)} = {\operatorname{prox}}\_{g,\frac{1}{\rho}}(x^{(k)}-w^{(k-1)})\\\\
>&w^{(k)}=w^{(k-1)}+x^{(k)}-z^{(k)}
>\end{align}
>$$

${\operatorname{prox}}\_{f,\frac{1}{\rho}}, {\operatorname{prox}}\_{g,\frac{1}{\rho}}$는 각각 파라미터가 $\frac{1}{\rho}$일때 f와 g의 proximal operator이다.

참고로 convex 함수 $f$에 대한 [proximal operator의 정의](https://wikidocs.net/22431)는 다음과 같다.
>$$
>\begin{align}
>{\operatorname{prox}}\_{f, \lambda}(v) = \underset{x}{\operatorname{argmin}}(f(x)+\frac{1}{2\lambda}||x-v||\_{2}^{2}). 
>\end{align}
>$$

Proximal operator로 ADMM의 update가 유도되는 과정은 아래와 같다.

$x^{+}, z^{+}, w^{+}$를 각각 $x, z, w$에서 한 step update된 값들이라 하자.
>$$
>\begin{align}
>x^{+}& = \underset{x}{\operatorname{argmin}}f(x)+\frac{\rho}{2}||x-z+w||^{2}\_{2}\\\\
>& =\underset{x}{\operatorname{argmin}}\frac{1}{2\cdot\frac{1}{\rho}}||(z-w)-x||^{2}\_{2}+f(x)\\\\
>& ={\operatorname{prox}}\_{f,\frac{1}{\rho}}(z-w)
>\end{align}
>$$

>$$
>\begin{align}
>z^{+}& = \underset{z}{\operatorname{argmin}}g(z)+\frac{\rho}{2}||x^{+}-z+w||^{2}\_{2}\\\\
>& =\underset{z}{\operatorname{argmin}}\frac{1}{2\cdot\frac{1}{\rho}}||(x^{+}+w)-z||^{2}\_{2}+g(z)\\\\
>& ={\operatorname{prox}}\_{g,\frac{1}{\rho}}(x^{+}+w)
>\end{align}
>$$

원래의 ADMM에서의 제약식이 $Ax+Bz = c$이고, 여기서의 제약식은 $x=z$이다. 즉 x와 z의 선형변환 관계가 identity이면, 원 식의 ADMM update를 prox update로 변형할 수 있다.

</br> </br>

# 21-03 Example _ Lasso regression and group lasso Regression

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>
## Lasso regression
Lasso regression 문제를 ADMM으로 해결해본다.

$y\in \mathbb{R}^{n}, X\in \mathbb{R}^{n\times p}$ 일때 lasso 문제는 아래와 같다.
>$$
>\begin{align}
>\min_{\beta}\frac{1}{2}||y-X\beta||^{2}\_{2}+\lambda||\beta||\_{1}
>\end{align}
>$$

이전의 여러 장에서, 우리는 lasso 문제를 여러가지 방법으로 해결해보았다. 대표적으로는 [proximal gradient descent(ISTA)](https://wikidocs.net/19032), [accelerated proximal gradient descent(FISTA)](https://wikidocs.net/20247), [barrier method](https://wikidocs.net/21297), [primal-dual interior-point method](https://wikidocs.net/21616) 등이 있다. 

ADMM에서는 dual 식을 유도하는 것과 동일하게, 어떤 식으로 보조 변수(auxiliary variable)을 설정하는가에 따라 알고리즘의 성능이 달라진다. 많은 auxiliary variable의 설정 방법 중 아래의 형태가 가장 효과적인 형태 중 하나로 알려져 있다.
>$$
>\begin{align}
>\min_{\beta, \alpha}||y-X\beta||^{2}\_{2}+\lambda||\alpha||\_{1} \qquad \text{subject to  }\beta-\alpha= 0.
>\end{align}
>$$

이 식에 대하여 ADMM update는 아래와 같이 유도된다. $\beta$에 대한 식은 $\beta$가 2차식이므로 미분을 통하여 최솟값을 구할 수 있고, $\alpha$에 대한 식은 앞서 [07장(07-03-04)](https://wikidocs.net/18719)에서 다루었던 문제와 같이 $\beta^{+}+w$의 soft-thresholding의 형태로 해가 됨이 알려져 있다.
>$$
>\begin{align}
>\beta^{+} &= \underset{\beta}{\operatorname{argmin}}\frac{1}{2}||y-X\beta||^{2}\_{2}+\frac{\rho}{2}||\beta-\alpha+w||^{2}\_{2}\\\\
>&= (X^{T}X+\rho I)^{-1}(X^{T}y+\rho (\alpha-w))\\\\
>\alpha^{+} &= \underset{\alpha}{\operatorname{argmin}}\lambda||\alpha||\_{1}+\frac{\rho}{2}||\beta^{+}-\alpha+w||^{2}\_{2}\\\\
>&= S_{\frac{\lambda}{\rho}}(\beta^{+}+w)\\\\
>w^{+} &=w+\beta^{+}-\alpha^{+}
>\end{align}
>$$

이 결과는 아래와 같은 특징들을 갖는다.

* 행렬 $X^{T}X+\rho I$는 $\rho>0$이므로 $X$에 관계없이 항상 invertible하다.
* 만약 factorization(대표적으로 Cholesky factorization)을 $O(p^{3})$ flops 안에 계산하면, $\beta$에 대한 update는 $O(p^{2})$ flops가 걸린다.
* $\alpha$ update는 soft-thersholding operator $S_{t}$를 적용하는 것이 되며, $S_{t}$는 [07-03-04](https://wikidocs.net/18719)의 내용과 동일하다.
* ADMM 스텝은 ridge regression 계수들을 매번 soft-thresholding하는 것과 "거의" 동일하다.
* $\rho$를 다르게 주면 다른 결과가 나온다.

<center>
![](https://wikidocs.net/images/page/24034/lasso.png)

**[Fig 1] Comparison of various algorithms for lasso regression (50 instances with $n$ = 100, $p$ = 20) [3]**</br>
</center>

[Fig 1]은 lasso regression 문제에 대한 다양한 알고리즘들의 수렴을 비교한 것이다. 모든 알고리즘들은 iteration마다 동일한 계산복잡도를 가지고 있다. 그래프의 수렴 속도에서 볼 수 있다시피, ADMM은 proximal gradient descent(검정)와 비슷한 수렴 속도를 가진다. Accelerated proximal gradient descent(빨강)는 "Nestrov ripples"를 가지지만 조금 더 빠른 수렴 속도를 보인다. 또한  ADMM은 $\rho$ 값에 따라 다른 수렴 속도를 보인다는 특성도 확인할 수 있다. 후에 [23장](https://wikidocs.net/edit/page/23359)에서 논하게 될 Coordinate descent(초록)의 경우는 문제에서 더 많은 정보들을 사용하고, 따라서 다른 방법들에 비해 빠른 수렴 속도를 가진다. Coordinate descent의 단점은 문제하기 위한 조건들이 존재한다는 것이다.
$\rho$값을 너무 크게 설정하면, 목적함수에서 $f+g$를 최소화 하는 비중이 작고, $\rho$값을 너무 작게 설정하면, feasiblity가 떨어진다. 따라서 적절한 $\rho$값의 설정이 중요하다. 자세한 내용은 [21장 reference 논문](https://wikidocs.net/edit/page/22687) 중 [BPCPE]에서 논하고 있다.

## Group lasso regression
위와 동일하게  Group lasso regression 문제 또한 ADMM으로 해결하는 것에 대하여 살펴보고자 한다. Group lasso regression의 문제정의는 아래와 같다. $y\in \mathbb{R}^{n}, X\in \mathbb{R}^{n \times p}$일때,

>$$
>\begin{align}
>\min_{\beta}\frac{1}{2}||y-X\beta||^{2}\_{2}+\lambda\sum^{G}\_{g=1} c_{g}||\beta_{(g)}||\_{2}.
>\end{align}
>$$

Lasso regression과 동일하게 문제를 다시 정리할 수 있다.
>$$
>\begin{align}
>\min_{\beta,\alpha}\frac{1}{2}||y-X\beta||^{2}\_{2}+\lambda\sum^{G}\_{g=1} c_{g}||\beta_{(g)}||\_{2} \qquad \text{subject to }\beta-\alpha=0.
>\end{align}
>$$

ADMM step은 다음과 같다.
>$$
>\begin{align}
>\beta^{+} &= (X^{T}X+\rho I)^{-1}(X^{T}y+\rho (\alpha-w))\\\\
>\alpha^{+} &= R_{c_{g}\frac{\lambda}{\rho}}(\beta^{+}\_{(g)}+w_{(g)})\qquad \text{g = 1,...G}\\\\
>w^{+} &=w+\beta^{+}-\alpha^{+}
>\end{align}
>$$

이 결과는 아래와 같은 특징들을 갖는다.

* 행렬 $X^{T}X+\rho I$는 $\rho>0$이므로 $X$에 관계없이 항상 invertible하다.
* 만약 factorization(대표적으로 Cholesky factorization)을 $O(p^{3})$ flops 안에 계산하면, $\beta$에 대한 update는 $O(p^{2})$ flops가 걸린다.
* $\alpha$ update는 group soft-thersholding operator $R_{t}$를 적용하는 것이 되며, $R_{t}$는 아래와 같이 정의된다.
>\begin{align}
>R_{t}(x) = (1-\frac{x}{||x||\_{2}})\_{+}x
>\end{align}

</br> </br>

# 21-04 Example _ Sparse subspace estimation and sparse plus low rank decomposition

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

## Sparse subspace estimation
$S=X^{T}X, X\in \mathbb{R}^{n\times p}$일때, 원래의 X와 projection된 X와의 Frobenius norm, 즉, 두 matrix의 거리를 최소화하는 projection를 찾는 문제를 생각해보자.

>$
>\begin{align}
>\min_{P}||X-XP||^{2}\_{F} \qquad \text{subject to rank($P$)=$k$ where $P$ is a projection matrix}
>\end{align}
>$

이 문제는 projection 행렬의 set이 convex set이 아니기 때문에 non-convex 문제이다. 하지만, 아래의 convex 문제와 동일함이 알려져 있다.[[VCLR13](https://wikidocs.net/22687)] 이는 subspace estimation problem이라고도 불린다.

>$
>\begin{align}
>\max_{Y}tr(SY) \qquad \text{subject to }Y\in F_{k} = \\{Y\in \mathbb{S}^{p} : 0 \preceq Y \preceq I, tr(Y) = k \\}
>\end{align}
>$

[VCLR13]에서는  sparse version(L1 norm이 추가된 형태)의 subspace estimation problem의 해결을 논한다. 
자세한 유도과정은 해당 논문을 참고한다.
>$
>\begin{align}
>\max_{Y}tr(SY)-\lambda ||Y||\_{1} \qquad \text{subject to }Y\in F_{k} 
>\end{align}
>$

여기서 $F_{k}$는 위 식과 동일하게 Fantope of order k이다.

이다. $\lambda = 0$, 인 경우 위의 문제는 일반적인 PCA와 동일한 문제이다.

위의 문제는 SDP 형태를 가지고 있고, interior point method로 해결이 가능하다. 하지만, 이는 구현이 복잡하고, 문제 크기가 커지면 무척 느려지는 단점이 있다.

이 문제를 ADMM으로 해결하기 위하여, 문제를 아래와 같이 변형한다.
>$
>\begin{align}
>\min_{Y,Z}-tr(SY)+I_{F_{k}}(Y) + \lambda||Z||\_{1} \qquad \text{subject to }Y = Z.
>\end{align}
>$

문제를 정리하면 ADMM step은 다음과 같다. 
 >$
 >\begin{align}
 >Y^{+} &=  \underset{Y}{\operatorname{argmin}} -tr(SY) + I_{F_{k}}(Y)+\frac{\rho}{2}||Y-Z+W||^{2}\_{F}\\\\
 >&=\underset{Y\in F_{k}}{\operatorname{argmin}} \frac{1}{2}||Y-Z+W-\frac{S}{\rho}||^{2}\_{F}\\\\
 >&=P_{F_{k}}(Z-W+\frac{S}{\rho})\\\\
 >Z^{+} & = \underset{Z}{\operatorname{argmin}}\lambda||Z||\_{1}+\frac{\rho}{2}||Y^{+}-Z+W||^{2}\_{F}\\\\
 >&=S_{\frac{\lambda}{\rho}}(Y^{+}+W)\\\\
 >W^{+} &=W+Y^{+}-Z^{+}.
 >\end{align}
 >$
 
여기서 $P_{F_{k}}$는 fantope projection operator이다. 이는 eigendecomposition $A= U\sum U^{T}, \sum = diag(\sigma_{1},...\sigma_{p})$의  clipping으로 정의된다.[[VCLR13](https://wikidocs.net/22687)]:
>$
>\begin{align}
>P_{F_{k}}(A) = U\Sigma_{\theta}U^{T}, \Sigma_{\theta} = diag(\sigma_{1}(\theta),...\sigma_{p}(\theta))
>\end{align}
>$

각각 $\sigma_{i}(\theta) = \min\\{\max\\{\sigma_{i}-\theta,0\\},1\\}$이고, $\sum^{p}\_{i=1}\sigma_{i}(\theta)=k$ 이다.

## Sparse plus low rank decomposition
$M\in \mathbb{R}^{n\times m}$일때, sparse plue low rank decomposition problem은 다음과 같다.[[CLMW09](https://wikidocs.net/edit/page/22687)]
>$$
>\begin{align}
>\min_{L,S}||L||\_{tr}+\lambda||S||\_{1} \qquad \text{subject to }L+S=M
>\end{align}
>$$

이 문제의 목표는 관측된 행렬 M을 low rank 행렬 L과 sparse matrix S로 분해(decompose)하는 것이다. 목적함수의 첫번째 항은 L의 trace penalty로, L의 singular value의 합을 최소화한다. 두번째 항은 행렬 S에 대한 $l_{1}$ norm으로  S에 대한 sparsity를 유도한다. $\lambda$는 이 둘을 조절하는 tuning parameter이다. trace norm과 $l_{1}$ norm 모두 smooth하지 않고, 일반적으로 trace norm은 해를 찾기 어렵다고 알려져 있다. Sparse subspace estimation 문제와 동일하게 이 문제는 SDP의 형태를 가지고, interior point method로 해결 가능하지만, 이 또한 복잡하고 속도가 느리다. 이 문제에 대하여  ADMM은 조금 더 쉬운 update step을 보여준다.

>$$
>\begin{align}
>L^{+} = S^{tr}\_{\frac{1}{\rho}}(M-S+W)\\\\
>S^{+} = S^{l_{1}}\_{\frac{\lambda}{\rho}}(M-L^{+}+W)\\\\
>W^{+} = W+M-L^{+}-S^{+}
>\end{align}
>$$

각각 $S^{tr}\_{\frac{1}{\rho}}$는 matrix soft-thresholding, $S^{l_{1}}\_{\frac{\lambda}{\rho}}$는 elementwise soft-thresholding이다.

<center>
![](https://wikidocs.net/images/page/24031/candes.png)

**[Fig 1] Example of sparse plue low rank decomoposition on surveliance camera[3]**</br>
</center>
[Fig 1]은 sparse plue low rank decomoposition을 감시카메라 비디오 영상에 분석에 활용한 예시이다. 고정된 지역을 오랜 시간 촬영하는 감시카메라로부터, 대부분의 프레임을 공유하는 low rank 부분을 쉽게 분리해낼 수 있고, sparse한 부분은 특정한 프레임들에 대한 특징적인 부분을 뽑아낸다. 예를 들어서 [Fig 1]의 가운데 column은 low rank, 우측 column은 sparse 부분을 나타낸다. 확인할 수 있듯이, low rank 부분은 거의 모든 프레임에서 나타나는 배경 정보를 가지고 있고, sparse한 부분은 특정한 프레임들에서만 나타나는 특징적인 부분만을 담고 있음을 확인할 수 있다.


</br> </br>

# 21-05 Consensus ADMM

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>
## Consensus ADMM
아래와 같은 문제를 생각해보자.
>$$
>\begin{align}
>\min_{x}\sum^{B}\_{i=1} f_{i}(x)
>\end{align}
>$$

위 문제에 대하여 ADMM으로 해결하기 위해서는, constraint를 도입하여야 했다. 여기서는 update를 병렬적으로 연산하기 용이한 형태로 식을 변형하고자 한다. consensus ADMM이라 불리는 이 접근은 식을 아래와 같이 reparametrize한다.
>$$
>\begin{align}
>\min_{x_{1},...,x_{B},x}\sum^{B}\_{i=1} f_{i}(x_{i})\qquad \text{subject to  }x_{i}=x, i = 1,...B
>\end{align}
>$$

이를 정리하면 deomposable한 ADMM step을 계산할 수 있다.

>$$
>\begin{align}
>x^{(k)}\_{i} &= \underset{x_{i}}{\operatorname{argmin}} f_{i}(x_{i})+\frac{\rho}{2}||x_{i}-x^{(k-1)}+w_{i}^{(k-1)}||\_{2}^{2}, i=1,...B\\\\
>x^{(k)} &=\frac{1}{B}\sum_{i=1}^{B}(x_{i}^{(k)}+w_{i}^{(k-1)})\\\\
>w_{i}^{(k)} &=w_{i}^{(k-1)}+x_{i}^{(k)}-x^{(k)}, i=1,...,B
>\end{align}
>$$

추가적으로 $\overline{x}=\frac{1}{B}\sum_{i=1}^{B}x_{i}, \overline{w}=\frac{1}{B}\sum_{i=1}^{B}w_{i}$로 둘 수 있다. 이렇게 되면, $k>1$인 iteration에서 $\overline{w}^{(k)}=0$임을 쉽게 확인할 수 있고, ADMM update의 두번째 식은 $x^{(k)}=\overline{x}^{(k)}$으로 정리된다. 따라서 ADMM update식을 아래와 같이 정리할 수 있다.

>$$
>\begin{align}
>x^{(k)}\_{i} &= \underset{x_{i}}{\operatorname{argmin}} f_{i}(x_{i})+\frac{\rho}{2}||x_{i}-\overline{x}^{(k-1)}+w_{i}^{(k-1)}||\_{2}^{2},\\  i=1,...B\\\\
>w_{i}^{(k)} &=w_{i}^{(k-1)}+x_{i}^{(k)}-\overline{x}^{(k)},\\  i=1,...,B.
>\end{align}
>$$

$i = 1,...B$에 대한 $x_{i}$ update는 병렬적으로 계산될 수 있다.
정리된 식을 통하여 consensus ADMM에 대한 직관을 얻을 수 있다. 각  $x_{i}$ update에서는 $f_{i}(x_{i})$를 최소화 하려 하고, 동시에 $l_{2} regularization$으로 각 $x_{i}$를 평균인 $\overline{x}$에 맞추어 간다. 만약 $x_{i}$가 평균보다 커지면, $w_{i}$는 증가한다. 따라서 다음 step에서의 regularization이 커진 $x_{i}$를 낮추게 된다.

## General consensus ADMM
Consensus ADMM은 더 일반화된 형태로 만들어질 수 있다. x에 대하여 affine transformation과 임의의 함수 $g$가 적용된 문제의 형태를 살펴보자.

>$$
>\begin{align}
>\min_{x}\sum_{i=1}^{B} f_{i}(a^{T}\_{i}x+b_{i})+g(x)
>\end{align}
>$$

이 식에 대해서도, constraint를 추가하기 위하여 reparameterize한다.
>$$
>\begin{align}
>\min_{x_{1},..x_{B},x} \sum^{B}\_{i=1}f_{i}(a_{i}^{T}x+b)+g(x)\qquad \text{subject to  }x_{i} = x, i=1,...B
>\end{align}
>$$ 

이어서 분해가능한 ADMM update를 유도할 수 있다.
>$$
>\begin{align}
>x_{i}^{(k)} &= \underset{x_{i}}{\operatorname{argmin}}f_{i}(a_{i}^{T}x+b_{i})+\frac{\rho}{2}||x_{i}-x^{(k-1)}+w_{i}^{(k-1)}||^{2}\_{2}+g(x)\\\\
>x^{(k)}&=\underset{x}{\operatorname{argmin}} \frac{B\rho}{2}||x-\overline{x}^{(k)}-\overline{w}^{(k-1)}||^{2}\_{2}+g(x)\\\\
>w_{i}^{(k)}&=w_{i}^{(k-1)}+x_{i}^{(k)}-x^{(k)}, \\ i=1,...B
>\end{align}
>$$ 

Generalized consensus ADMM과 위에서 유도했던 consensus ADMM과의 차이를 정리하면 다음과 같다.

* ADMM step 식이 정리가 되지 않기 때문에, $\overline{w}^{(k)}=0$은 더이상 만족하지 않는다.
* $x_{i},\\ i=1,...,B$는 병렬하게 업데이트 가능하다.
*  각각의 $x_{i}$ 업데이트는 $l2$ 정규화와 함께 해당 부분의 loss를 최소화하는 것으로 생각할 수 있다.
*  $x$ 업데이트는 임의의 함수 $g$(일반적으로 regularizer)에 대한 proximal operation이다.
*  reparmeterization을 어떻게 하는가에 따라 ADMM 알고리즘이 다르게 도출된다. 

더 자세한 내용은 [참고문헌](https://wikidocs.net/22687)을 참조한다.

</br> </br>

# 21-06 Faster convergence with subprogram parametrization _ example of the 2d fused lasso problem

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

ADMM의 성질 중 무척 흥미로운 점은 문제 해결에 있어서 작은 문제(subproblems)들을 특별한 형태로 parametrize하면, 일반적인 방법보다 훨씬 빠른 수렴성능을 보여준다는 것이다. 앞선 consensus ADMM의 예시에서 update는 변수들의 block 모음에 대하여 최적화를 진행하는 형태를 보이는데, 이는 block coordinate descent와 유사하다. 따라서, ADMM 또한 각 변수들의 block 모음에 대하여 거의 orthogonal한 방향들로 업데이트하면서 빠른 수렴 속도를 보이게 할 수 있다.

이 절에서는 예시들을 통하여, 보조적인 constraint를 가장 primal update가 de-correlate하는 방향으로 설계함으로써 위의 내용들을 확인해보고자 한다.

자세한 내용은 [RT16], [WSK14], [BS14]를 참고한다.

[1장](https://wikidocs.net/17208)에서 살펴보았던 예시중 하나인 2d fussed lasso 또는 2d total variation denoising 문제를 살펴본다. 이미지 $Y\in \mathbb{R}^{d\times d}$가 주어졌을때, 문제는 아래와 같이 정의된다.

>$$
>\begin{align}
>\min_{\Theta}\frac{1}{2}||Y-\Theta||^{2}\_{F}+\lambda \sum_{i,j}(|\Theta_{i,j}-\Theta_{i+1,j}|+|\Theta_{i,j}-\Theta_{\Theta_{i,j+1}}|).
>\end{align}
>$$

이 문제에서 이미지의 각 pixel에 대한 parameter가 있으며, 이 parameter 행렬은 $\Theta\in \mathbb{d\times d}$이다.

<center>
![](https://wikidocs.net/images/page/24033/2dfussed.png)

**[Fig 1] Interpretation of the penalty term in 2d fussed lasso[3]**</br>
</center>
[Fig 1]은 목적함수의 두번째 항인 penalty 항을 시각적으로 보여준다. 정의된 문제에서도 알 수 있다시피, 한 픽셀에 대하여 인접한 수평한 픽셀, 수직한 픽셀 간의 차이를 줄이고자 한다. 즉, 이 penalty 항은 주변의 인접한 픽셀들간의 값을 유사한 값으로 만든다. 

Penalty 항의 합을 operator로 정리하면 문제는 아래와 같아진다.
>$$
>\begin{align}
>\min_{\theta}\frac{1}{2}||y-\theta||^{2}\_{F} + \lambda||D\theta||\_{1}.
>\end{align}
>$$

$D\in \mathbb{m\times n}$은 원 식에 대응되는 2d difference operator이다.

## Forms of ADMM updates for the 2d fused lasso problem
이제 보조적인 contraint를 적용하여 ADMM step을 두가지 방법으로 만들어보고자 한다.
첫번째로는 2d difference operator를 통하여 만들었던 vector form으로 부터 ADMM을 유도하는 것이다.

>$$
>\begin{align}
>\min_{\theta, z}\frac{1}{2}||y-\theta||^{2}\_{2}+\lambda||z||\_{1} \qquad \text{subject to   }z = D\theta,
>\end{align}
>$$

이어서 ADMM step을 유도하면 다음과 같다.
>$$
>\begin{align}
>\theta^{(k)} &= (I+\rho D^{T}D)^{-1}(y+\rho D^{T}(z^{(k-1)}+w^{(k-1)}))\\\\
>z^{(k)} &= S_{\frac{\lambda}{\rho}}(D\theta^{(k)}-w^{(k-1)})\\\\
>w^{(k)} &= w^{(k-1)}+z^{(k-1)}-D\theta ^{(k)}.
>\end{align}
>$$

$\theta$는 $ (I+\rho D^{T}D)^{-1}$의 linear system을 푸는 것과 같다. 여기서 $D^{T}D$는 $L=D^{T}D$로 2d grid의 Laplacian행렬이 되어 $O(n)$의 연산으로 해결할 수 있다. $z$ 또한 soft thresholding operator $S_{t}$로 연산이 이루어지므로, 동일하게 $O(n)$의 연산이 필요하다. 따라서 vector 형태로 ADMM을 푸는 것은 $O(n)$의 시간이 걸린다.

두번째 방법으로는 맨 처음의 문제 정의와 동일하게 행렬 형태로 ADMM을 유도하는 것이다.
>$$
>\begin{align}
>\min_{\Theta, Z} \frac{1}{2}||Y-\Theta||^{2}\_{F}+\lambda\sum_{i,j}(|\Theta_{i,j}-\Theta_{i+1,j}+|Z_{i+1,j}-Z_{i,j+1}|)\\\\
>\text{subject to   }\Theta = Z
>\end{align}
>$$

ADMM steps는 아래와 같다.
>$$
>\begin{align}
>\Theta_{\cdot \\ , j}^{(k)} &= FL^{1d}\_{ \frac{\lambda}{(1+\rho)} } \bigg( \frac{ Y+\rho( Z^{(k-1)}\_{\cdot \\ , j}-W_{\cdot \\ ,j}^{(k-1)} ) } {1+\rho} \bigg),\qquad j=1,...,d\\\\
>Z\_{i, \cdot}^{(k)} &= FL^{1d}\_{\frac{\lambda}{\rho}} \bigg(\Theta_{i, \cdot}^{(k)} + W_{i, \cdot}^{(k-1)} \bigg), \qquad j=1,...,d\\\\
>W^{(k)} &= W^{(k-1)} + \Theta^{(k)} - Z^{(k)} \\\\
>\end{align}
>$$
여기서 $FL_{\tau}^{1d}(a)$는 1d fused lasso이고,  $FL_{\tau}^{1d}(a) = \underset{x}{\operatorname{argmin}}\frac{1}{2}||a-x||^{2}\_{2}+\tau\sum_{i=1}^{d-1}|x_{i}-x_{i+1}|$ 이다.
 행렬 형태의 ADMM 또한 $O(n)$의 시간복잡도로 연산을 수행할 수 있다. $\Theta, Z$ 둘 다 1d fused lasso의 형태이고, 이는 $O(n)$의 시간복잡도를 가진다. 
 [Fig 2]는 기존의 penalty 항을 1d fused lasso 문제로 어떻게 분리되는가를 보여준다.
 
 <center>
![](https://wikidocs.net/images/page/24033/2dfussedlasso.png)

**[Fig 2]  Interpretation of the matrix form ADMM updates for 2d fused lasso[3].**</br>
</center>

## Image denoising experiments
이제 1장에서 살펴보았던 image denoising 문제를 다시 살펴본다.
[Fig 3]는 data와 denoised된 image를 보여준다. [Fig 4]는 두 ADMM 방법에 대한 비교를 보여준다. vertical/horizontal 방향으로 decompose하여 constraint를 정의하는 matrix form인 "specialized" ADMM은 vector form에서 유도한 "standard ADMM"보다 훨씬 빠른 수렴 성능을 보여준다.
[Fig 5]는 ADMM의 iteration에 따른 image quality를 보여준다.

 <center>
![](https://wikidocs.net/images/page/24033/ll1.png)

**[Fig 3]  Data, exact solution image(300x200 image : n = 60,000).  
left : original image before denoising, right : the exact solution of denoised image[3].**</br>
</center>

 <center>
![](https://wikidocs.net/images/page/24033/ll2.png)

**[Fig 4]  Convergence curves of two ADMM algorithms. black : standard(vector form), red : specialized(matrix form) [3].**</br>
</center>

 <center>
![](https://wikidocs.net/images/page/24033/ll2.png)

**[Fig 5]  ADMM iterates visualized after k = 10, 30, 50, 100 iterations [3].**</br>
</center>

</br> </br>

# 22 Conditional Gradient (Frank-Wolfe) Method

</br> </br>

본 장에서는 1956 년에 Marguerite Frank와 Philip Wolfe에 의해 제안된 Frank-Wolfe알고리즘을 살펴 볼 것이다.

Frank-Wolfe 알고리즘은 제약조건이 있는 볼록(convex) 최적화를 위한 반복적인 선형(first-order) 최적화 알고리즘으로 조건부 그레디언드 방법, 감소(reduced) 그레디언드 방법 그리고 컨벡스 컴비네이션 알고리즘이라고도 부른다. 

이 방법은 원래 1956 년에 Marguerite Frank와 Philip Wolfe에 의해 제안되었으며, Frank-Wolfe 알고리즘은 각 반복(iteration)에서 목적 함수의 선형 근사를 고려해 이 선형 함수의 mimimizer로 이동한다.

[15] Wikipedia. [Frank–Wolfe algorithm](https://en.wikipedia.org/wiki/Frank%E2%80%93Wolfe_algorithm)


</br> </br>

# 22-01 Last time_ ADMM

</br> </br>

## Last time: ADMM
다음과 같은 최적화 문제를 고려해보자
> $$ min_{x,z} f(x) + g(z)\qquad \text{ subject to } Ax + Bz = c $$

이를 Augmented Lagrangian 형식으로 바꾸어 보면 아래와 같다. (for some $ρ > 0$)
> $$ L_ρ(x, z, u) = f(x) + g(z) + u^T(Ax + Bz − c) + \frac{ρ}{2} \| Ax + Bz − c \|^2_2$$

위 식은 $\frac{ρ}{2} \| Ax + Bz − c \|^2_2$가 추가 됨으로 Strongly Convex가 되며, 이를 다음 수식과 같이 병렬 처리에 유용한 형태로  바꿀 수 있다.
* 자세한 증명은 앞장의 내용을 참고하기 바란다.
ADMM: for $k = 1, 2, 3, . . .$
> $$x^{(k)} = argmin_{x} L_ρ(x, z^{(k−1)}, u^{(k−1)})$$
> $$z^{(k)} = argmin_{z} L_ρ(x^{(k)}  , z, u^{(k−1)})$$
> $$u^{(k)} = u^{(k−1)} + ρ(Ax^{(k)} + Bz^{(k)} − c)$$
 
## ADMM in scaled form
dual variable $u$를 scaled variable $w = u/ρ$로 바꾸어 보자. 여기서 ADMM step은 다음과 같이 계산 가능하다.

> $$x^{(k)} = argmin_{x} f(x) + \frac{ρ}{2} \| Ax + Bz^{(k−1)} − c + w^{(k−1)} \|^2_2$$
> $$z^{(k)} = argmin_{z} g(z) + \frac{ρ}{2} \| Ax^{(k)} + Bz − c + w^{(k−1)} \|^2_2$$ 
> $$w^{(k)} = w^{(k−1)} + Ax^{(k)} + Bz^{(k)} − c$$


</br> </br>

# 22-02  Conditional gradient method

</br> </br>

## Projected Gradient Descent
아래와 같은 제약조건을 가진 문제를 고려해 보자.

> $$\min_{x} f(x) \qquad \text{ subject to } x ∈ C $$

$f$가 convex이면서 smooth하고, $C$ 또한 convex 이면,  **projected gradient descent** 방법을 이용할 수 있음을 앞에서 살펴보았다.
$P_{C}$가 집합 $C$에 대한 projection operator 일 때, 초깃값 $x^{(0)}$ $k = 1, 2, 3, . . .$에 대해서 다음 식이 성립한다.

> $$ x^{(k)} = P_{C } \bigl( x^{(k−1)} − t_k∇f(x^{(k−1)} \bigr)$$

Projected Gradient Descent는 본질적으로 local quadratic expansion(2nd Taylor Expansion)에서의 $y$값이 다음 $x^{(k)}$이 된다는 것을 모티브로 하는, proximal gradient descent의 스페셜 케이스로 다음과 같이 나타낼 수도 있다.

> $$x^{(k)} = P_{C} \Bigl( \arg\min_{y} ∇f(x^{(k−1)})^T(y − x^{(k−1)}) + \frac{1}{2t} \| y − x^{(k−1)} \|^2_ 2 \Bigr) $$

Projected Gradient Descent에 대한 좀 더 자세한 내용은 [9-4](https://wikidocs.net/20230)를  참고 하기 바란다.



## Conditional gradient (Frank-Wolfe) method
여기서 2차 근사를 최소화 하는 대신, 더 간단한 무언가를  시도해 보자.
먼저 집합 $C$에서 $\nabla f(x)$와 내적했을 때 값이 최소화되는 점을 살펴보도록 하자.

근본적으로, Projection 대신 집합 $C$ 안의 점에서 선형함수를 최소화하여 더 간편하고 효과적으로 문제를 해결할 수 있다. 여기서는 현재 포인트에서 최소점 사이에 convex combination을 활용하여 line search 방법을 적용해 나간다.

다음 정형화된 방법을 살펴보자.

초깃값 $x^{(0)} ∈ C$를 선택한다. $k = 1, 2, 3, . . . $

> $$\begin{array}{rcl}
> s^{(k−1)} & ∈ & \arg\min_{s ∈ C} ∇f(x^{(k−1)})^Ts \\\
> x^{(k)} & = & (1 − γ_k)x^{(k−1)} + γ_ks^{(k−1)}
> \end{array}$$

#### [참고]
> $$f(y) \approx f(x)\nabla f(x)(y-x)$$
> $$\arg\min_y = f(x) + \nabla f(x)(y-x)$$
> $$\equiv \arg\min_y f(x)y$$

여기서, 이전과 다르게 Projection 과정을 거치지 않고 업데이트를 할 떄, 제약 조건 집합 $C$에 있는 점을 사용하여 문제를 풀어나간다.

기본적으로 step size는 $γ_k =  \frac{2}{(k + 1)}, k = 1, 2, 3, . . ..$으로 설정된다.

임의의 $0 ≤ γ_k ≤ 1$에서 convexity에 의해 $x^{(k)} ∈ C$ 임을 보인다.

또한 다음과 같은 식으로 업데이트가 진행되기도 한다.
> $$ x^{(k)} = x^{(k−1)} + γ_k\bigl( s^{(k−1)} − x^{(k−1)} \bigr) $$


즉, 알고리즘 수행됨에 따라 선형 minimizer 방향으로 점차적으로 조금씩 덜 이동하게 된다.
대부분의 경우, co-ordinate descent의 스페셜 케이스인 Ball L1에 대해서 sub gradient 방식을 사용하는 것이 projection 방식을 사용하는 것 보다 문제를 해결하기 더 쉽다.


#### [참고]
흥미로운 사실은, Frank와 Wolfe는 Tucker와 함께 일하던 post-doc 였다고 알려져 있으며. 그들은 먼저 첫번째로 이 알고리즘을 2 차 함수로 제안했다고 한다. 그리고 그 알고리즘은 1956년에 출판되고, 후에 논문으로도 발표되었다. 그리고 이 후로 오랫동안 더 이상 이에 대한 후속 논문은 전혀 나오지 못했다. 그러나 지난 몇년 동안 Jaggi의 통찰력에 힘임어 세상에 소개되면서 다시 주목을 받게 되었다.

<center>
![](https://wikidocs.net/images/page/22689/frank_wolfe.png)

**[Fig 1] Conditional Gradient (Frank-Wolfe) method (From Jaggi 2011)[3]**
</center>

## Norm constraints
norm $\| · \|$에 대해 $C = {x : \| x \| ≤ t}$일 때 무슨일이 발생할까? 

다음을 살펴보자

> $$\begin{align}
> s &∈ \arg\min_{\|s\|≤t} ∇f(x^{(k−1)})^Ts \\\
> &= −t ·  \arg\max_{\|s\|≤1}  ∇f(x^{(k−1)})^Ts \\\
> &= −t · ∂ \| ∇f(x^{(k−1)}) \|\_{∗}
> \end{align}$$

여기서 $\| · \|\_{∗}$는 dual norm을 의마한다.

다시 말해, dual norm의 subgradient를 계산하는 방법을 안다면, Frank-Wolfe 단계를 쉽게 수행 할 수 있다는 뜻이다.

Frank-Wolfe의 핵심은 $C = {x : \| x \| ≤ t}$에 projection 방법을 사용하는 것보다 더 간단하거나 낮은 비용으로 구할 수 있으며, 또한 때로는 $\| · \|$의 prox operator보다도 간단하거나 더 낮은 비용을 요한다는 것이다.


## Example: $l_1$ regularization
다음은 **$l_1$-regularized** 이다.
> $$\min_x f(x) \qquad \text{ subject to } \| x \|\_1 ≤ t$$

앞선 공식대로 전개하면, $s^{(k−1)} ∈ −t∂ \|∇f(x^{(k−1)}) \|\_∞$ 를 얻을 수 있다.
 
Frank-Wolfe 방법은 다음의 과정을 통해 업데이트 된다.
> $$\begin{array}{rcl}
> i_{k−1} & ∈  & \arg\max_{i=1,...p} ∇\_i f(x^{(k−1)}) \\\
> x^{(k)}  & = & (1 − γ_k)x^{(k−1)} − γ_kt · sign ∇\_{i_{k−1}} f(x^{(k−1)})· e_{i_{k−1}}
> \end{array}$$

이것은 coordinate descent의 일종이다(coordinate descent에 대해서는 나중에 자세히 살펴보자).</br>
Note : 두 가지 모두 $O(n)$의 복잡도가 필요하지만 $l1$ ball에 projection 하는 것보다 훨씬 간단하다.

## Example: $l_p$ regularization
다음은 $l_p$-regularized 문제다.

> $$\min_{x}  f(x) \qquad \text{ subject to } \| x \|\_{p} ≤ t$$

$1 ≤ p ≤ ∞$에서 p가 q의 dual일 때  $s^{(k−1)} ∈ −t∂ \| ∇f(x^{(k−1)}) \|\_{q}$ 이다. 즉, $1/p + 1/q = 1$이다.
   
즉 다음과 같이 선택할 수 있다. 
> $s_i^{(k−1)} = −α · sign ∇f_i(x^{(k−1)}) · \left| ∇f_i(x^{(k−1)}) \right|^{p/q}, i = 1, . . . n$

여기서 $α$는 $\| s^{(k-1)} \|\_{q} = t$와 같은 상수이고, Frank-Wolfe 업데이트도 동일하다.

Note: 일반 $p$의 경우 **p Ball에 Projection**하는 것보다 훨씬 간단하다.</br>
특별한 경우($p = 1, 2, ∞$)를 제외하고 이러한 projection은 직접 계산할 수 없다(최적화로 처리되어야 함).

## Example: trace norm regularization
**trace-regularized** 문제를 살펴보자
> $$\min_{X} f(X) \text{ subject to } \| X \|\_{tr} ≤ t$$

$S^{(k−1)} ∈ −t· ∂\| ∇f(X(k−1)) \|\_{op}.$ 이다.

다음과 같이 $S_i^{(k−1)}$를 선택할 수 있다.
> $$S_i^{(k−1)} = −t · uv^T$$

여기서 $u, v$는 $∇f(X^{(k−1)})$의 왼쪽, 오른쪽 singular 벡터이고, Frank-Wolfe 업데이트는 평소와 같다.

Note: 이 방법은 특이 값 분해(SVD)가 가능하면, **trace norm ball에 projection**하는 것보다 훨씬 간단하고 효율적으로 해를 구할 수 있는 방법이다.


## Constrained and Lagrange forms
제약 조건이 있는 문제의 solution을 다시 한번 상기해보자
> $$\min_x f(x) \qquad \text{ subject to } \| x \| ≤ t$$

다음의 Lagrange 문제는 위 식과 동치이다.
> $$\min_x f(x) + λ \| x \| $$

튜닝 파라미터 $t$와 $λ$는 [0,∞]구간에서 변한다. 또한 $\| · \|$의 Frank-Wolfe 업데이트를 $\| · \|$의  proximal 오퍼레이터와 비교해야 한다.

• **$l_1$ norm**: Frank-Wolfe 방법은 gradient의 최댓값을 스캔하여 업데이트 한다.
proximal operator soft-threshold를 진행하면서 업데이트 한다. 두 단계 모두 $O(n)$ flops을 사용 한다.
 
• **$l_p$ norm**: 프랭크-울프(Frank-Wolfe) 업데이트는 gradient의 각 항목마다 제곱하고 모두 합산하여 $O(n)$ flop으로 증가시킨다. proximal operator는 일반적으로 직접 계산할 수 없다.

• **Trace norm**: 프랭크-울프(Frank-Wolfe) 업데이트는 gradient의 상단 왼쪽 및 오른쪽 singular vector를 계산한다. proximal operator에서는 soft-thresholds gradient step을 진행하며, 특이값 분해(SVD)를 필요로 한다.

다른 많은 regularizer들이 효율적인 Frank-Wolfe update를 도출하였다.
예를 들면, special polyhedra 혹은 cone constraints, sum-of-norms (group-based) regularization, atomic norms. 같은 것들이다.


Constrained Lasso에 대한 projectied gradient 기법과 conditional gradient 기법을 활용했을 때 성능을 비교하면 다음과 같다. (여기서 $n=100, p = 500$)

<center>
![](https://wikidocs.net/images/page/22689/comparing_projected_and_conditional_gradient.png)

**[Fig 2] Comparing projected and conditional gradient for constrained lasso
problem [3]**
</center>

프랭크-울프(Frank-Wolfe) 방법이 first-order method의 수렴율과 비슷한 양상을 띠고 있는 것을 확인할 수 있을 것이다. 그러나 실제로는 높은 정확도로 수렴하기 위해서는 속도가 더 느려질 수 있다. (참고: 여기서 fixed step size를 사용하지만, line search를 사용하여 수렴 속도를 향상시킬 수도 있다.)


## Duality gap
프랭크-울프(Frank-Wolfe) iteration 과정에서 자연스럽게 duality gap 이 발생되며, 이는 실제로 suboptimality gap을 의미한다.
> $$g(x^{(k-1)}) := \max_{s∈C} ∇f(x^{(k−1)})^T(x^{(k−1)} − s) $$

이것은 $f(x^{(k−1)}) − f^{\star}$의 upper bound 이다.

##### [Proof]
convexity의 first-order condition을 이용해 증명할 수 있다.
> $$f(s) ≥ f(x^{(k−1)}) + ∇f(x^{(k−1)})^T(s − x^{(k−1)})$$

모든 $s ∈ C$에 대해 양쪽을 최소화 한다.
>  $$f^{\star} ≥ f(x^{(k−1)}) + min_{s∈C} ∇f(x^{(k−1)})^T(s − x^{(k−1)})$$

최종적으로, 다시 정리하여 다음 식은 duality gap이 upper bound임을 보여 준다.
> $$\max_{s∈C} ∇f(x^{(k−1)})^T(x^{(k−1)} − s) = ∇f(x^{(k−1)})^T(x^{(k−1)} − s^{(k−1)})$$

##### [Note]
따라서 이 quantity는 Frank-Wolfe 업데이트에서 직접 나온 것이다.
왜 우리는 이를 “duality gap”이라 부를까?

original problem을 다시 써보면 아래와 같이 쓸 수있다.
> $$\min_{x} f(x) + I_C(x)$$

여기서 $I_C$는 $C$의 indicator function을 의미한다. dual 문제는 아래와 같다.
> $$\max_u −f^{\*} (u) − I^{\*}\_C(−u)$$

$I_C^{\*}$가 $C$의 support function을 의미한다. Indicator function의 conjuage는 support function 이 됨을 앞서 살펴보았다.

##### [Recall]
> $$I_C (X) =  
> \begin{cases}
> +&infin; & if & x &notin; C \\\
> 0 & if & x &in; C
> \end{cases}$$
> 
> $$\begin{align}
> I_C^{\*}  &= \max_{x} \\{ <s, x\> - I_C(x)\\} \\\ 
> &= \max_{x &in; C} <s, x\> \\\
> &= \text{Support function of } C \text{ at } S
> \end{align}$$



$ x = x ^ {(k-1)}, u = ∇f (x ^ {(k-1)}) $ 일 때, $x, u$에서 발생하는 duality gap은 다음과 같다. (13-04 [Fenchel's inequality](https://wikidocs.net/21001) 로부터 유도되기도 한다.)
> $$f(x) + f^{\*}(u) + I^{\*}\_C(−u) ≥ x^Tu + I^{\*}\_C(−u)$$






</br> </br>

# 22-03 Convergence analysis

</br> </br>

## Convergence analysis
Frank-Wolfe 방법의 수렴 특성을 알아내기 위해, 아래와 같이 $C$에 대한 $f$의 곡률 상수를 정의할 필요가 있다.[Jaggi (2011)]
> $$M = \max_{x,s,y∈C, y = (1−γ)x+γs} \frac{2}{γ^2} \Bigl( f(y) − f(x) − ∇f(x)^T(y − x) \Bigr)$$
> $$γ ∈ [0, 1]$$

M을 통해서 실제로 함수가 선형 근사(linear approximation)로부터 얼마나 먼 경향을 가지고 있는지를 측정할 수도 있다.
여기서 $M = 0$은 $f$가 선형임을 나타낸다. $f (y) - f (x) - ∇f (x)^T(y - x)$는 $f$에 의해 정의 된 Bregman divergence 라 부른다.

> Theorem: 고정 스텝 사이즈 $γk = 2 / (k + 1), k = 1,2,3, ...$를 이용한 조건부 그레디언드 방법(conditional gradient method)은 다음을 만족한다.
>  $$f(x^{(k)}) − f^{\star} ≤ \frac{2M}{k + 2}$$


$f(x^{(k)}) − f^{\star} ≤ \epsilon$를 만족하기 위해 필요한 반복 횟수는 $O(1/\epsilon)$이다.

이제 이 이론은 귀납법으로 증명해보고자 한다. 그러나 바로 증명으로 넘어가기전 짚고 넘어가야 할 개념을 하나 소개하고자 한다.

## Basic inequality
Frank-Wolfe 수렴 속도를 증명하는 데 사용되는 **key inequality**는 다음과 같다.
> $f(x^{(k)}) ≤  f(x^{(k−1)}) − γ_kg(x^{(k−1)}) + \frac{γ^2_k}{2}M$

여기서 $g(x) = \max_{s∈C} ∇f(x)^T(x − s)$는 앞서 논의한 duality gap 을 의미하며, 귀납법에 따라 이 비율은  inequality를 따르게 된다.

#### [Proof] 
Basic inequality를 증명하기 위해 $x^+ = x^{(k)}, x = x^{(k−1)}, s = s^{(k−1)}, γ = γ_k$ 를 지정한다. 그리고 다음과 같이 정리한다.
> $$\begin{align}
> f(x^+) &= f\bigl( x + γ(s − x) \bigr) \\\
> &≤ f(x) + γ∇f(x)^T(s − x) + \frac{γ^2}{2}M \\\
> &= f(x) − γg(x) + \frac{γ^2}{2}M
> \end{align}$$

위 수식에서 두 번째 줄은 $M$의 정의를 사용했고, 세 번째 줄은 $g$의 정의를 사용하였다.

이제, basic inequality를 이용해, 우리는 convergence rate theorem을 증명하기 위해 귀납법을 사용한다.

$k=1$의 경우, theorem이 만족함을 쉽게 확인할 수 있다.
그리고 임의의 $k > 1$일 경우, $f(x^{(k−1)}) − f^{\star} ≤ 2M/(k + 1)$를 만족함을 가정한다.


앞서 언급한 duality gap $g(x)$를 다시 떠올려 보자. 
> $$g(x^{(k−1)}) ≤ f(x^{(k−1)}) − f^{\star}$$
> $$γ_k = 2/(k + 1)$$

그리고 이제 basic inequality에 적용해 보자.
> $$f(x^{(k)}) ≤ f(x^{(k−1)}) − 2(f(x^{(k−1)}) − f^{\star})/(k + 1) + 4M/2(k + 1)^2$$
> $$f(x^{(k)}) − f^{\star} ≤ (1 − 2/(k + 1))(f(x^{(k−1)}) − f^{\star}) + 2M/(k + 1)^2$$
> $$f(x^{(k)}) − f^{\star} ≤ (k − 1/k + 1) × 2M/(k + 1) + 2M/(k + 1)^2 ≤ 2M/(k + 2) $$

이 증명 된 수렴 속도는 ∇f가 립시츠 (Lipschitz) 일 때 projected gradient descent의 알려진 속도와 일치한다.

이제 이 가정 들을 비교해 보자.
사실 만약 $∇f$가 상수 $L$을 가지는 Lipschitz라면 $diam^2(C) = max_{x,s∈C} ||x − s||^2$일 때 $M ≤ diam^2(C) · L$이다.

이를 확인하기 위해 상수 $L$을 가지는 $∇f$ Lipschitz 아래와 같다는 것을 상기할 필요가 있다.
> $$f(y) − f(x) − ∇f(x)^T(y − x) ≤ \frac{L}{2} \| y − x \|^2\_2$$

모든 $y = (1-γ) x + γs$를 최대화하여 $\frac{2}{γ^2}$를 곱하면 다음과 같다.
> $$M ≤ \max_{x,s,y∈C, y=(1−γ)x+γs} \frac{2}{γ^2}·\frac{L}{2} \| y − x \|^2\_2 = \max_{x,s∈C} L \| x − s \|^2\_2$$

M의 경계가 결정되었다. 기본적으로 경계가 있는 곡률이 proximal gradient에 대해 가정한 곡률보다 크지 않다고 가정한다.


## Affine invariance
앞서 배운 개념들을 다시 생각해 보자.

* Gradient Descent: $x^+ = x − t∇f(x)$
* Pure Newton’s Method: $x^+ = x − ∇^2f(x)^{−1}∇f(x)$

Gradient descent는 affine invariant하지 않다. 즉, coordinate들을 스케일링 함으로 gradient descent의 성능은 향상 된다. 반면, Newton’s method는 affine invariant하다. 즉, 이 알고리즘은 변수의 모든 affine transformation에서 동일하게 동작한다.

그리고 Conditional gradient method는 gradient descent와 비슷하지만 affine invariant 하다.

Frank-Wolfe의 중요한 속성 : 업데이트는 **affine invariant** 하다.
Nonsingular $A : \mathbb{R}^n → \mathbb{R}^n$가 주어지면, $x = Ax', h(x') = f(Ax')$를 정의할 수 있다.
그러면 $h(x')$에서의 Frank-Wolfe는 아래와 같이 계산 가능하다.

> $$\begin{array}{rcl}
> s' & = & \arg\min_{z∈A^{−1}C} ∇h(x')^Tz \\\
> (x')^+ & = & (1 − γ)x' + γs'
> \end{array}$$

$A$로 곱하면 $f (x)$에서 수행되는 것과 동일한 Frank-Wolfe 업데이트가 나타난다.
심지어 convergence analysis은 affine invariant이다.

$h$의 곡률 상수 $M$은 다음과 같다.
> $$M = \max_{x',s',y'∈A^{−1}C, y'=(1−γ)x'+γs'} \frac{2}{γ^2} \Bigl( h(y') − h(x') − ∇h(x')^T(y' − x') \Bigr)$$

$∇h(x')T(y' − x') = ∇f(x)^T(y − x)$이기 때문에 $f$와 일치한다.


그러나, affine invariance는 M의 경계에서 직관적이지 않다.

> $$M ≤ \max_{x,s∈C} L||x − s||^2_2$$

주어진 C의 지름이  affine invariance이 아니라면, 이것은 고민해 볼 가치가 있다.



## Inexact updates
정확하지 않은 Frank-Wolfe 업데이트를 분석하였다.[Jaggi (2011)]</br>
$s^{(k−1)}$를 선택한다. 
> $$∇f(x^{(k−1)})^Ts^{(k−1)} ≤ \min_{s∈C} ∇f(x^{(k−1)})^Ts + \frac{Mγ_k}{2} · δ$$

$δ ≥ 0$는 부정확한 파라미터이다. 이를 이용해  기본적으로 다음과 같은 비율을 얻게 된다.

> Theorem: 고정 스텝 크기 $γk=2/(k+1),k=1,2,3, ... $ 및 부정확한 파라미터 δ≥0을 이용한 Conditional gradient method을 사용하여, 다음을 만족한다.
> $$f(x^{(k)}) − f^{\star} ≤ \frac{2M}{k + 2} (1 + δ)$$

Note: $k$ 단계의 최적화 오차는 $\frac{Mγ_k}{2} · δ.$ 이다. 여기서 $γ_k → 0$이므로 시간이 지날수록 오차가 사라지는 것을 의도로 한다.

</br> </br>

# 22-04 Properties and variants

</br> </br>

## Some variants
일부 변종 conditional gradient 방법들을 살펴보자:</br>
• **Line search**: $γk=2/(k+1),k=1,2,3,...$를 고정하는 대신 각 $k = 1, 2, 3, . . .$ 스텝 사이즈에 대한 exact line search를 사용한다.
> $$γ_k = \arg\min_{γ∈[0,1]} f\Bigl( x^{(k−1)} + γ\bigl(s^{(k−1)} − x^{(k−1)} \bigr) \Bigr)$$

그리고 백트레킹을 사용 할 수도 있다.

• **Fully corrective**: 아래 식에 따라 직접 업데이트 한다.
> $$x^{(k)} = \arg\min_y f(y) \text{ subject to } y ∈ conv\{ x^{(0)}, s^{(0)}, . . . s^{(k−1)} \}$$

이 방식은 훨씬 더 나은 진전을 이룰 수 있지만, Cost가 높다. 

<center>
![](https://wikidocs.net/images/page/22690/away_steps.png)

**[Fig 3] Away step motivation [3]**
</center>


## Another variant: away steps
좀 더 빠른 이해를 위해,  [Fig 3]의 최소화 문제를 살펴 보자. 여기서 최적 해는 (0,0)이다. 그리고 conditional descent 방법은 초기 점 (0,1) 때문에 움직이기 어렵게 된다. 그러나 away step 이동으로 인해 Conditional gradient descent는 가능성 있는 지점으로 이동 할 뿐만 아니라 가능성이 없는 지점에서 벗어나게 된다.



atoms $A$ 집합에 대한 Convex hull $C = conv(A)$를 가정해 보자

$A$에 속한 element의 convex combination으로 $x∈C$를 명시적으로 나타낼 수 있다.
> $$x = \sum_{a∈A} λ_a(x)a$$

Away steps에서의 Conditional gradient:
$$\text{1. choose } x^{(0)} = a^{(0)} ∈ A$$
$$\text{2. for } k = 1, 2, 3, . . .$$
$$\qquad s^{(k−1)} ∈ \arg\min_{a∈A} ∇f(x^{(k−1)})^Ta,$$
$$\qquad a^{(k−1)} ∈ \arg\max_{a∈A, λa(x(k−1))>0} ∇f(x^{(k−1)})^Ta$$
$$\qquad \text{choose } v = s^{(k−1)} − x^{(k−1)} or \quad v = x^{(k−1)} − a^{(k−1)}$$
$$\qquad x^{(k)} = x^{(k−1)} + γ_kv$$
$$\text{3. end for}$$


## Linear convergence
다음의 제약 조건이 없는 문제를 고려해 보자.
> $$\min_x f(x) \text{ subject to } x ∈ \mathbb{R}^n$$

여기서 $f$ is µ-strongly convex이고 $∇f$ 는 L-Lipschitz이다.

$t_k = 1/L$ 에 대해서 gradient descent $x^{(k+1)} = x^{(k)} − t_k∇f(x^{(k)})$를 반복하면서, 다음을 만족시킨다.
> $$f(x^{(k)}) − f^{\star} ≤ \Bigl( 1 −\frac{µ}{L} \Bigr)^k \bigl( f(x^{(0)}) − f^{\star} \bigr)$$

이제 아래의 제약 조건이 있는 문제도 고려해 보자.
> $$\min_x f(x) \text{ subject to } x ∈ conv(A) ⊆ \mathbb{R}^n$$

### [Theorem (Lacoste-Julien & Jaggi 2013)]
$f$가 µ-strongly convexd이고, $∇f$는 L-Lipschitz 하며 $A ⊆ \mathbb{R}^n$는 유한 이라고 가정할 때

적절한 $γ_k$에 대해, conditional gradient 알고리즘에 의해 생성 된 반복 스텝은 다음을 항상 만족한다. 
> $$f(x^{(k)}) − f^{\star} ≤ (1 − r)^{k/2}(f(x^{(0)}) − f^{\star}) \text { for } r = \frac{µ}{L}·\frac{Φ(A)^2}{4\text{diam}(A)^2}$$
> $$\text{where }Φ(A) = \min_{F ∈faces(conv(A))} dist(F, conv(A \ F))$$
 
만약 polytope가 평면이면, $Φ$는 작고 알고리즘은 천천히 수렴한다.


## Path following
다음 주어진 norm constrained 문제를 살펴보자 
> $$\min_x f(x) \text{ subject to } \| x \| ≤ t$$

Frank-Wolfe 알고리즘은  **path following**에 사용할 수 있다. 다시말해, (대략적인) 솔루션 경로 $\hat{x}(t), t ≥ 0$를 생성할 수 있다는 의미 이다.

$t_0 = 0$와 $x^{\star}(0) = 0$에서 시작하여 매개변수 $\epsilon, m > 0$을 수정한 다음 $k=1,2,3,...$에 대해 반복한다.

* $t_k = t_{k−1} + \frac{(1 − 1/m)\epsilon}{\| ∇f(\hat{x}(t_k−1))\|\_{∗}}$를 계산하고, 모든 $t ∈ (t_{k−1}, t_k)$에 대해 $\hat{x}(t) = \hat{x}(t_{k−1})$를 설정한다.

* $t = t_k$ 에서 Frank-Wolfe를 실행하여 $\hat{x}(t_k)$를 계산하고 duality gap이 $≤ \frac{\epsilon}{m}$ 인 경우 종료 한다.

이것은 기존의 전략을 단순화 시킨 방법이다. [Giesen et al. (2012)]

이 **path following** 전략을 통해, 방문하는 모든 $t$에 대해 다음을 보장할 수 있다.
> $$f(\hat{x}(t)) − f(x^{\star}(t)) ≤ \epsilon$$

즉, 모든 $t$에 대해서 $\epsilon$에 의해 균일하게 경계가 정해진 suboptimality gap의 경로를 생성한다.

아래의 수식에서 보듯 Frank-Wolfe duality gap을 다음과 같이 재정의 할 수 있다.
> $$g_t(x) = \max_{\|s\|≤1} ∇f(x)^T(x − s) = ∇f(x)^Tx + t\|∇f(x)\|\_{∗}$$

이것은$t$에 대한 선형 함수이다. 따라서 $g_t(x) ≤ = \frac{\epsilon}{m}$이면, 다음 수식에 의해서 $t^+ = t + (1 − 1/m)\epsilon/\|∇f(x)\|\_{∗}$까지 $t$를 증가 시킬 수 있다.

> $$g_t+ (x) = ∇f(x)^Tx + t\|∇f(x)\|\_{∗} + \epsilon − \epsilon/m ≤ \epsilon$$

즉, duality gap은 동일한 $x$에 대해 $t$와 $t^+$ 사이에서 $≤ \epsilon$로 유지된다.



</br> </br>

# 23 Coordinate Descent

</br> </br>

Coordinate descent는 반복적으로 각 좌표축을 따라 움직이며 목적함수의 최솟값을 찾는 최적화 알고리즘이다. 각 반복(iteration)에서 좌표 선택 규칙(coordinate selection rule)에 따라 좌표축(coordinate) 또는 좌표축 블록(coordinate block)을 결정한 뒤, 선택되지 않은 좌표축 또는 좌표축 블록은 고정한 채로 축의 방향을 따라 함수를 최소화시킨다 (exact or inexactly). Coordinate descent는 gradient를 이용하는 방식뿐 아니라 gradient를 이용하지 않는 방식으로도 활용할 수 있다. 또한, 경우에 따라 각 축에 대해 적합한 step size를 결정하기 위하여 line search를 이용할 수 있다 [16].

Coordinate descent는 매우 간단하여 구현하기가 쉽고, 적합한 문제에 대해 주의깊게 구현될 경우 아주 좋은 성능을 보인다.

**Examples:** lasso regression, lasso GLMs (under proximal Newton), SVMs, group lasso, graphical lasso (applied to the dual), additive modeling, matrix completion, regression with nonconvex penalties

## References and Further readings

**최적화에서의 초기 coordinate descent:**

* D. Bertsekas and J. Tsitsiklis (1989), “Parallel and distributed domputation: numerical methods”
* Z. Luo and P. Tseng (1992), “On the convergence of the coordinate descent method for convex differentiable minimization”
* J. Ortega and W. Rheinboldt (1970), “Iterative solution of nonlinear equations in several variables”
* P. Tseng (2001), “Convergence of a block coordinate descent method for nondifferentiable minimization”
35 Early coordinate descent references in statistics and ML:
* I. Daubechies and M. Defrise and C. De Mol (2004), “An iterative thresholding algorithm for linear inverse problems with a sparsity constraint”
* J. Friedman and T. Hastie and H. Hoefling and R. Tibshirani (2007), “Pathwise coordinate optimization”
* W. Fu (1998), “Penalized regressions: the bridge versus the lasso”
* T. Wu and K. Lange (2008), “Coordinate descent algorithms for lasso penalized regression”
* A. van der Kooij (2007), “Prediction accuracy and stability of regresssion with optimal scaling transformations”

**Coordinate descent의 응용:**

* O. Banerjee and L. Ghaoui and A. d’Aspremont (2007), “Model selection through sparse maximum likelihood estimation”
* J. Friedman and T. Hastie and R. Tibshirani (2007), “Sparse inverse covariance estimation with the graphical lasso”
* J. Friedman and T. Hastie and R. Tibshirani (2009), “Regularization paths for generalized linear models via coordinate descent”
* C.J. Hsiesh and K.W. Chang and C.J. Lin and S. Keerthi and S. Sundararajan (2008), “A dual coordinate descent method for large-scale linear SVM”
* R. Mazumder and J. Friedman and T. Hastie (2011), “SparseNet: coordinate descent with non-convex penalties”
* J. Platt (1998), “Sequential minimal optimization: a fast algorithm for training support vector machines”
37 Recent theory for coordinate descent:
* A. Beck and L. Tetruashvili (2013), “On the convergence of block coordinate descent type methods”
* Y. Nesterov (2010), “Efficiency of coordinate descent methods on huge-scale optimization problems”
* J. Nutini, M. Schmidt, I. Laradji, M. Friedlander, H. Koepke (2015), “Coordinate descent converges faster with the Gauss- Southwell rule than random selection”
* A. Ramdas (2014), “Rows vs columns for linear systems of equations—randomized Kaczmarz or coordinate descent?”
* P. Richtarik and M. Takac (2011), “Iteration complexity of randomized block-coordinate descent methods for minimizing a composite function”
* A. Saha and A. Tewari (2013), “On the nonasymptotic convergence of cyclic coordinate descent methods”
* S. Wright (2015), “Coordinate descent algorithms”
38 Screening rules and graphical lasso references:
* L. El Ghaoui and V. Viallon and T. Rabbani (2010), “Safe feature elimination in sparse supervised learning”
* R. Tibshirani, J. Bien, J. Friedman, T. Hastie, N. Simon, J. Taylor, and R. J. Tibshirani (2011), “Strong rules for discarding predictors in lasso-type problems”
* R. Mazumder and T. Hastie (2011), “The graphical lasso: new insights and alternatives”
* R. Mazumder and T. Hastie (2011), “Exact covariance thresholding into connected components for large-scale graphical lasso”
* J. Wang, P. Wonka, and J. Ye (2015), “Lasso screening rules via dual polytope projection”
* D. Witten and J. Friedman and N. Simon (2011), “New insights and faster computations for the graphical lasso”

**Convergence analysis:**<br/>
Coordinate descent의 convergence analysis에 대한 연구 흐름을 간략히 소개하겠다.

* Convergence of coordinatewise minimization for solving linear systems, the Gauss-Seidel method, is a classic topic. E.g., see Golub and van Loan (1996), or Ramdas (2014) for a modern twist that looks at randomized coordinate descent
* Nesterov (2010) considers randomized coordinate descent for smooth functions and shows that it achieves a rate O(1/ε) under a Lipschitz gradient condition, and a rate O(log(1/ε)) under strong convexity
* Richtarik and Takac (2011) extend and simplify these results, considering smooth plus separable functions, where now each coordinate descent update applies a prox operation
* Saha and Tewari (2013) consider minimizing l1 regularized functions of the form g(β) + λ∥β∥1, for smooth g, and study both cyclic coordinate descent and cyclic coordinatewise min. Under (very strange) conditions on g, they show both methods dominate proximal gradient descent in iteration progress
* Beck and Tetruashvili (2013) study cyclic coordinate descent for smooth functions in general. They show that it achieves a rate O(1/ε) under a Lipschitz gradient condition, and a rate O(log(1/ε)) under strong convexity. They also extend these results to a constrained setting with projections
* Nutini et al. (2015) analyze greedy coordinate descent (called Gauss-Southwell rule), and show it achieves a faster rate than randomized coordinate descent for certain problems
* Wright (2015) provides some unification and a great summary. Also covers parallel versions (even asynchronous ones)
* General theory is still not complete; still unanswered questions (e.g., are descent and minimization strategies the same?)

</br> </br>

# 23-01 Coordinate Descent

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

이번 장에서는 coordinate descent라 불리는 굉장히 간단하고 효율적이면서도 확장성이 뛰어난 방법을 소개한다. 우선 몇 가지 간단한 문답으로 내용을 시작해보도록 하겠다.

**Q1. 함수 $f: \mathbb{R}^n \rightarrow \mathbb{R}$가 convex이고 미분 가능할 때, 각 좌표축에 대해 $f$를 최소화시킨 지점이 $x$라 한다면 이 $x$는 global minimizer인가?**

**A1: 그렇다. $\nabla f(x) = 0$이므로 $x$는 $f$에 대한 global minimizer이다.**

위 질문은 $e\_i = (0, \dots, 1, \dots, 0) \in \mathbb{R}^n$가 $i$번째 표준 기저벡터(standard basis vector)일때, 모든 $\delta, i$에 대해 $f(x + \delta e\_i) \ge f(x)$를 만족하는지 묻는 것과도 같다. 즉, $x$에서 어느 좌표축 방향으로 움직이더라도 $f$를 더 작게 할 수 없다는 것이므로 모든 축방향에 대한 편미분은 0이 된다.

$$
\nabla f(x) = \big( \frac{\partial f}{\partial x\_1}(x), \dots, \frac{\partial f}{\partial x\_n}(x) \big) = (0, \dots, 0) = 0
$$

<center>
![](https://wikidocs.net/images/page/23401/smooth_function.png) <br/>
**[Fig1] Smooth convex function $f$ [3]**
</center>

<br/>

**Q2. 그렇다면 $f: \mathbb{R}^n \rightarrow \mathbb{R}$가 convex이지만 '미분 불가능한' 함수일때, 각 좌표축에 대해 $f$를 최소화시킨 지점 $x$는 항상 global minimizer인가?**

**A2: 아니다. 이 경우에는 $x$가 $f$에 대한 global minimizer라고 단언할 수 없다. (반례: 아래 Fig2)** 

아래 반례의 우측 등고선을 보면 표시된 지점이 global minimum이 아님에도 불구하고 어느 좌표축 방향으로 이동하더라도 $f$를 더 작게할 수 없음을 알 수 있다. ($f$를 더 작게 만들기 위해서는 등고선 안쪽으로 이동 가능해야 한다.) 이 위치에서는 좌표축과 평행한 두 개의 접선 내부로 등고선의 안쪽 모든 영역이 포함되기 때문이다. 반면 $f$가 미분 가능한 convex 함수인 경우에는 등고선의 어느 지점에서도 단 하나만의 접선만이 존재하므로 이런 현상이 발생하지 않는다.

<center>
![](https://wikidocs.net/images/page/23401/non-smooth_function.png)<br/>
**[Fig2] Counterexample: Non-smooth convex function $f$ [3]**
</center>

<br/>

**Q3. $f$를 미분 가능한 convex 함수 $g$와 convex 함수 $h$의 합으로 표현할 수 있을때, 각 좌표축에 대해 $f$를 최소화시킨 지점 $x$는 항상 global minimizer인가? (즉, $f(x) = g(x) + \sum\_{i=1}^{n} h\_i(x\_i)$)**

**A3. 그렇다. 임의의(any) $y$에 대해 다음을 만족하기 때문이다. **
$$\begin{align}
f(y) - f(x) &\ge \nabla g(x)^T (y-x) + \sum\_{i=1}^{n} \big[ h\_i(y\_i) - h\_i(x\_i) \big] \\\\
&= \sum\_{i=1}^{n} \big[ \underbrace{\nabla\_i g(x) (y\_i - x\_i) + h\_i(y\_i) - h\_i(x\_i)}\_{\ge 0} \big] \ge 0
\end{align}$$

**증명:**

>$F\_i(x\_i) = g(x\_i ; x\_{-i}) + h\_i(x\_i)$ 라고 하자. ($g(x\_i ; x\_{-i})$ 는 $x$의 $i$번째 원소만을 변수로 보고, 나머지는 고정된 값으로 본다는 의미이다.)
>
> $$
> \begin{align}
> & \: 0 \in \partial F\_i (x\_i) \\\\
> \Leftrightarrow & \: 0 \in \\{ \nabla\_i g(x) \\} + \partial h\_i(x\_i)\\\\
> \Leftrightarrow & \: - \nabla\_i g(x) \in \partial h\_i(x\_i)\\\\
> \end{align}
> $$
> [Subgradient의 정의](https://wikidocs.net/18963)에 의해,
> $$
> \begin{align}
> & h\_i(y\_i) \ge h\_i(x\_i) - \nabla\_i g(x) (y\_i - x\_i)\\\\
> \Leftrightarrow & \nabla\_i g(x) (y\_i - x\_i) + h\_i(y\_i) - h\_i(x\_i) \ge 0.
> \end{align}
> $$

<center>
![](https://wikidocs.net/images/page/23401/separable_non-smooth.png)<br/>
**[Fig3] Convex function $f$ with separable non-smooth parts [3]**
</center>

<br/>

## Conclusion

$f(x) = g(x) + \sum\_{i=1}^{n} h\_i(x\_i)$ with $g$ convex, differentiable and $h\_i$ convex에 대한 minimizer는 **coordinate descent**를 사용하여 찾을 수 있다. Coordinate descent는 다음의 cycle을 반복하는 것이다. (적당한 초기값 $x^{(0)}$가 설정되었다고 가정한다.)

>**Coordinate Descent:** <br/>
>$\:$ For $k = 1,2,3,\dots$,
>$$
>\begin{align}
>x\_1^{(k)} &\in \text{arg}\min\_{x\_1} \: f(x\_1, x\_2^{(k-1)}, x\_3^{(k-1)}, \dots, x\_n^{(k-1)})\\\\
>x\_2^{(k)} &\in \text{arg}\min\_{x\_2} \: f(x\_1^{(k)}, x\_2, x\_3^{(k-1)}, \dots, x\_n^{(k-1)})\\\\
>x\_3^{(k)} &\in \text{arg}\min\_{x\_3} \: f(x\_1^{(k)}, x\_2^{(k)}, x\_3, \dots, x\_n^{(k-1)})\\\\
>& \dots\\\\
>x\_n^{(k)} &\in \text{arg}\min\_{x\_n} \: f(x\_1^{(k)}, x\_2^{(k)}, x\_3^{(k)}, \dots, x\_n)\\\\
>\end{align}
>$$

#### Notes:

* $x\_{i+1}^{(k)}, \dots, x\_{n}^{(k)}$를 구하는 과정에서는 $k$번째 cycle에서 새로 구한 $x\_i^{(k)}$를 사용한다.
* Cycle에서의 좌표축 순서는 임의로 지정해도 무관하다.
* 두 개 이상의 좌표축을 묶어서 블록으로 처리할 수도 있다.

앞서 소개한 coordinate descent는 exact coordinatewise minimization에 해당한다. 다른 방식으로는 gradient를 이용한 inexact coordinatewise minimization이 있다. ($f$가 미분 가능한 convex 함수라고 가정)

>**Coordinate Descent (inexact coordinatewise minimization):** <br/>
>$\:$ For $k = 1,2,3,\dots$,
>$$
>\begin{align}
>x\_1^{(k)} &= x\_1^{(k-1)} - t_{k,1} \cdot \nabla\_1 f(x\_1^{(k-1)}, x\_2^{(k-1)}, x\_3^{(k-1)}, \dots, x\_n^{(k-1)})\\\\
>x\_2^{(k)} &= x\_2^{(k-1)} - t_{k,2} \cdot \nabla\_2 f(x\_1^{(k)}, x\_2^{(k-1)}, x\_3^{(k-1)}, \dots, x\_n^{(k-1)})\\\\
>x\_3^{(k)} &= x\_3^{(k-1)} - t_{k,3} \cdot \nabla\_3 f(x\_1^{(k)}, x\_2^{(k)}, x\_3^{(k-1)}, \dots, x\_n^{(k-1)})\\\\
>& \dots\\\\
>x\_n^{(k)} &= x\_n^{(k-1)} - t_{k,n} \cdot \nabla\_n f(x\_1^{(k)}, x\_2^{(k)}, x\_3^{(k)}, \dots, x\_n^{(k-1)})\\\\
>\end{align}
>$$



</br> </br>

# 23-02 Example_ linear regression

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Linear regression 문제를 다음과 같이 정의해보겠다.

> $$
> \min_{\beta} \frac{1}{2} \| y - X\beta \|\_2^2,\\\\
> \text{given } y \in \mathbb{R}^n \text{ and } X \in \mathbb{R}^{n \times p} \text{ with columns } X\_1, \dots, X\_p.
> $$

$\beta\_j, j \neq i$가 고정된 값일때, 주어진 목적함수를 최소화시키는 $\beta\_i$를 구해보자. ($-i$는 $i$를 제외한 나머지 항을 의미한다. - $X$의 경우 $i$번째 column을 제외한 나머지 column.)
$$
0 = \nabla\_i f(\beta) = X\_i^T (X\beta - y) = X\_i^T (X\_i \beta\_i + X\_{-i} \beta\_{-i} - y)\\\\
\Rightarrow 
\beta\_i = \frac{X\_i^T (y - X\_{-i} \beta\_{-i})}{X\_i^T X\_i}
$$

Coordinate descent를 통해 $\beta\_i$ for $i=1,2,\dots,p,1,2,\dots$를 반복하며 업데이트 한다. 

## 실험: 수렴속도 비교 - GD vs AGD vs CD

아래 그래프는 $n=100, p=20$인 linear regression 문제에 대해 coordinate descent, gradient descent, accelerated gradient descent의 수렴속도를 비교하여 보여준다. (가로축의 k는 한 step (GD, AGD) 또는 한 cycle (CD)을 나타낸다.)

<center>
![](https://wikidocs.net/images/page/23402/gd_vs_agd_vs_cd.png)<br/>
**[Fig1] GD vs AGD vs CD [3]**
</center>

위 결과에 의하면 coordinate descent는 first-order method의 optimal인 AGD보다도 월등히 좋은 수렴속도를 보인다. 어째서 이런 현상이 발생할 수 있는 것일까? 결론부터 말하자면, coordinate descent는 first-order method보다 더 많은 정보를 활용하므로 AGD를 훌쩍 상회하는 성능을 내는 것이 가능하다. Coordinate descent는 한 cycle 내에서 각 step마다 이전 step에서 갱신된 최신 정보를 이용하기 때문이다. (즉, CD는 first-order method가 아니다.)

#### Q. 그렇다면 위 실험에서 CD의 한 cycle을 GD의 한 step과 비교한 것은 공정한 것일까?

**A. 그렇다.** 앞서 소개한 CD의 업데이트 식을 한 step의 시간복잡도가 $O(n)$인 형태로 변형시킬 수 있다. 그렇다면 CD에 대한 한 cycle의 시간복잡도는 $O(np)$가 되며 GD의 한 step과 같은 시간복잡도를 가지게 된다.

* **Gradient descent update:** $\beta \leftarrow \beta + tX^T(y-X\beta)$, $X\beta$ 연산에 의해 시간복잡도는 $O(np)$ flops가 된다.
* **Coordinate descent, one coordinate update:** 
$$
\begin{align}
\beta\_i \leftarrow \frac{X\_i^T (y - X\_{-i} \beta\_{-i})}{X\_i^T X\_i} &= \frac{X\_i^T (y - X \beta)}{X\_i^T X\_i} +  \frac{X\_i^T X\_i \beta\_i}{X\_i^T X\_i} \\\\
&= \frac{X\_i^T (y - X \beta)}{X\_i^T X\_i}  + \beta\_i\\\\
&= \frac{X\_i^T r}{X\_i^T X\_i}  + \beta\_i \text{ ,where } r = y - X \beta\\\\
\end{align}
$$
매 step에서 $r$을 업데이트 하는데 $O(n)$ flops의 비용이, $X\_i^T r$을 계산하는데 $O(n)$ flops의 비용이 요구되므로 각 축에 대한 업데이트의 비용은 $O(n)$ flops이다.

</br> </br>

# 23-03 Example_ lasso regression

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

Lasso regression 문제를 아래와 같이 nonsmooth part가 분리되어있는 목적함수의 형태로 정의해보겠다.

> $$
> \min_{\beta} \frac{1}{2} \| y - X\beta \|\_2^2 + \lambda \|\beta\|\_1
> $$

* **Note:** $\|\beta\|\_1 = \sum\_{i=1}^p | \beta\_i |$

$\beta\_j, j \neq i$ 가 고정된 값일때, 주어진 목적함수를 최소화시키는 $\beta\_i$를 구해보자.
$$
0 = \nabla\_i f(\beta) = X\_i^T X\_i \beta\_i + X\_i^T(X\_{-i} \beta\_{-i} - y) + \lambda s\_i \text{, where } s\_i \in \partial |\beta\_i|\\\\
\Rightarrow 
\beta\_i = S\_{\lambda / \|X\_i\|\_2^2} \big( \frac{X\_i^T(y-X\_{-i} \beta\_{-i})}{X\_i^TX\_i} \big)
$$

Solution은 thresholding level이 $\lambda / \|X\_i\|\_2^2$인 soft-thresholding 함수와도 같다. Coordinate descent를 통해 $\beta\_i$ for $i=1,2,\dots,p,1,2,\dots$를 반복하며 업데이트 한다.

## 실험: 수렴속도 비교 - PG vs AGD vs CD

아래 그래프는 $n=100, p=20$인 lasso regression 문제에 대해 proximal gradient descent, accelerated gradient descent, coordinate descent의 수렴속도를 비교하여 보여준다. (가로축의 k는 한 step (PD, AGD) 또는 한 cycle (CD)을 나타낸다.)

<center>
![](https://wikidocs.net/images/page/23403/pd_vs_agd_vs_cd.png)<br/>
**[Fig1] PD vs AGD vs CD [3]**
</center>

[Linear regression의 예시](https://wikidocs.net/23402)에서와 마찬가지로 lasso regression 문제에서도 coordinate descent는 월등한 수렴속도를 보인다. (First-order method보다 더 많은 정보를 활용한다.)

* **Note:** 위 실험에서의 모든 methods는 각 iteration당 $O(np)$ flops의 시간복잡도를 보인다.

</br> </br>

# 23-04 Example_ Pathwise coordinate descent for lasso

</br> </br>

<script type="text/x-mathjax-config">
MathJax.Hub.Config({
    displayAlign: "center"
});
</script>

이번 절에서는 Pathwise coordinate descent for lasso에 대한 개요를 간단히 소개하도록 한다 [[Friedman et al. (2007)](https://arxiv.org/pdf/0708.1485.pdf)] [[Friedman et al. (2009)](https://www.jstatsoft.org/article/view/v033i01/v33i01.pdf)]. 

>**Lasso regression problem:**
> $$
> \min_{\beta} \frac{1}{2} \| y - X\beta \|\_2^2 + \lambda \|\beta\|\_1
> $$

[07-03-03 Example: Lasso Optimality Condition](https://wikidocs.net/18718)에서 lasso regression 문제에 대한 optimality condition을 유도해 보았다. 위 문제에 대한 최적해는 다음의 조건을 만족한다.

>
$$
\begin{align}
X\_1^T(y-X\beta) &= \lambda v\_1\\\\
X\_2^T(y-X\beta) &= \lambda v\_2\\\\
\dots\\\
X\_p^T(y-X\beta) &= \lambda v\_p
\end{align}
$$
**Note:** $X\_i,i \in \\{ 1,2,…,p \\}$는 주어진 행렬 $X$의 $i$번째 열(column) 데이터를 의미한다.

여기서 $v=(v_1,v_2,\dots,v_p)$는 $\beta=(\beta_1,\beta_2,\dots,\beta_p )$에 대한 subgradient다. 
>
$$
v_i, i \in \\{1,2,\dots,p \\} = 
\begin{cases}
\{ 1 \}  &\text{if $\beta_i > 0$} \\\\
\{-1 \}  &\text{if $\beta_i < 0$} \\\\
[-1,1]   &\text{if $\beta_i = 0$}
\end{cases}
$$

이 optimality condition에 의해 $\beta$의 각 원소가 현재 최적상태에 해당하는지 파악할 수 있다. Coordinate descent 알고리즘을 이용하면 아직 최적상태에 도달하지 못한 원소만을 업데이트하는 방식으로 좀 더 효율적으로 lasso 문제를 푸는 것이 가능해진다. 또한 $\lambda$의 값이 클수록 lasso regression 문제에서 coordinate descent 알고리즘이 더 빨리 동작하는 경향성을 활용하여 $\lambda$를 점점 줄여가는 방식(warm start)으로 해에 더욱 빠르게 접근한다.

## Algorithm

#### Outer loop (pathwise strategy):
* $\lambda\_1 > \lambda\_2 > \dots > \lambda\_r$의 순서를 따라 최적해를 계산한다.
* Tuning parameter  $\lambda\_k$에서 계산된 결과를  $\lambda\_{k+1}$에 대한 coordinate descent algorithm을 초기화하는데 사용한다. (warm start)

#### Inner loop (active set strategy):
* 하나 혹은 적은 수의 coordinate cycle을 시행한다. 그리고 0이 아닌 $\beta$의 원소를 active set $A$에 기록한다.
* $A$에 기록된 원소들에 대해서만 수렴할 때까지 coordinate cycle을 시행한다.
* $\beta$의 모든 원소들에 대해 optimality condition을 확인한다. 조건을 만족하지 않는 원소가 있으면 $A$에 추가하고 step 1으로 다시 돌아간다.

## Notes
* 통상적으로 pathwise strategy는 문제에서 주어진 $\lambda$에 대한 해를 바로 구하는 것보다 훨씬 효율적으로 동작한다.
* Active set strategy는 sparsity에 대해 이점이 있다. 이 때문에 coordinate descent는 ridge regression보다 lasso regression에서 훨씬 더 빠르게 동작한다. (참고: [ridge regression과 lasso regression의 경향성 분석](https://www.analyticsvidhya.com/blog/2016/01/complete-tutorial-ridge-lasso-regression-python/))
* Pathwise coordinate descent for lasso는 lasso regression 문제에 대해 가장 빠르다고 알려진 다른 알고리즘들에 비견될만큼 빠르게 동작한다.

</br> </br>

# 24 Mixed Integer Programming (part I)

</br> </br>

이 장에서는 Mixed Integer Programming의 정의, 관련 예제를 소개하고, Integer programming 의 해를 찾기 위해서 간접적으로 relaxation 을 활용하여 최적해를 찾아나가는 방식을 소개한다.

</br> </br>

# 24-01 Definition

</br> </br>

이 절에서는 Mixed integer program 방식을 통해서 Optimization problem 을 풀기 위한 기본 개념들에 대해 설명하고자 한다.

## Problem definition
Optimization model 중 일부 변수(variables)가 정수(integer)라는 제한조건이 있을 때, 이를 integer program 이라 부른다.
> $$\begin{align}
\min_{x} & \quad f(x) \\\
\text{subject to } & \quad x \in C \\\
& \quad x_{j} \in \mathbb{Z}, j \in J \\\
\text{ } \\\
\text{whrere } & \quad f : \mathbb{R}^{n} \rightarrow \mathbb{R}, \quad C \subseteq \mathbb{R}^{n} \quad and \quad J \subseteq {1, \dotsc, n}. \\\
\end{align}$$


앞선 식에서 $J$가 다음을 만족 한다면, pure integer program 이라고 부른다.
> $ J =$ \{ $1, \dotsc, n$ \} 


이 절에서 논의되는 $f$ 와 $C$ 는 모두 convex라고 가정하도록 하자.


## Binary variables
Integer program을 대표하는 몇몇 사례를 살펴보면 yes/no 결정 문제 또는 논리값등을 들 수 있다.
이때 이진변수(binary variable)를 사용해서 문제를 정의하면서 조건에 대한 0 혹은 1의 값을 구해 문제를 풀게 된다. 

다음으로 소개할 Combinatorial optimization은 integer program과 직접적으로 연관되어 있다. binary variable을 활용함으로써, 기존 문제를 재변형하여 새로운 문제로 바꿔 풀 수 있기 때문이다.

Combinatorial optimization problem은 triple $(N, \mathcal{F}, c)$ 표현을 활용하여 정의된다.<br>
> * $ \quad N$ 은 유한한 ground set 이다<br>
* $ \quad \mathcal{F} \subseteq 2^{N}$ 는 feasible solution들의 집합이다<br>
* $ \quad c \in \mathbb{R}^{N}$ 은 cost function 이다<br>

triple $(N, \mathcal{F}, c)$ 를 통해서 다음 수식을 푸는 것이 최종 목표이다.
> $$\begin{align}
\quad \min_{S \in \mathcal{F}} & \sum_{i \in S} c_{i} \\\
\end{align}$$

많은 결합 최적화(combinatorial optimization) 문제는 binary integer program들로 쓰여질 수있다.


</br> </br>

# 24-02 Examples of integer programs

</br> </br>

이번 절에서는 Integer program에 해당하는 다양한 예시들을 살펴보면서 어떻게 활용되는지 감을 익혀보자. 

## Knapsack problem
배낭 문제(Knapsack problem)은 배낭에 넣을 수 있는 부피가 한정되어 있어 배낭 안에 들어갈 item의 총 크기가 제약되어 있을 때, 최대의 가치(value)를 가지는 item들을 선택하도록 문제를 푸는 전통적인 조합 최적화 문제이다. 이 문제는 binary variable $x$로 표현이 가능한데, $j$번째 item을 선택했는 지 아닌지에 따라 $x_{j}$가 0 혹은 1의 값을 가지게 된다. 

> $$\begin{align}
\max_{x} & \quad c^\intercal x \\\
\text{subject to } & \quad a^\intercal x \leq b \\\
& \quad x_{j} \in {0, 1}, j = 1, \dotsc , n \\\
\end{align}$$

$c_{j}, a_{j}$ 는 각각 $j$번째 item의 가치(value) 와 크기(volume) 를 나타낸다.

## Assignment problem
$n$명의 사람들과 $n$개의 업무가 있다고 가정하자. 그리고 각각의 사람은 정확히 한가지의 업무에만 배당 가능하다. 여기서  $c_{ij}$는 사람 $i$가 업무 $j$를 수행하는 데 소요되는 비용을 의미하는데, Assignment problem은 가장 적은 비용으로 $n$명의 사람들을 $n$개의 업무를 할당하는 것을 목표로 한다. 이 때의 조건을 최적화 하기 위하여 수식으로 표현하면 다음과 같다.

> $$\begin{align}
\min_{x} & \quad \sum_{i = 1}^{n} \sum_{j = 1}^{n} c_{ij} x_{ij} \\\
\text{subject to } & \quad \sum_{i = 1}^{n} x_{ij} = 1, j = 1 \dotsc n \\\
& \quad \sum_{i = 1}^{n} x_{ij} = 1, j = 1 \dotsc n \\\
& \quad x_{ij} \in \lbrace 0, 1\rbrace \quad i = 1 \dotsc n, \quad j = 1 \dotsc n \\\
\end{align}$$


## Facility location problem
Facility location problem은 특정 시설로부터 고객까지 운송 비용을 최소화하는 것을 목표로 하는 문제이다.</br>

$N = \lbrace 1, \dotsc, n \rbrace$ 의 창고(depot)가 존재하고, $M = \lbrace 1, \dotsc, m \rbrace$ 의 고객이 있다고 가정하자.</br>
고정된 비용 $f_{j}$는 창고 $j$의 사용과 연관되어 있다.
운송 비용 $c_{ij}$는 고객 $i$에게 배송되는 물품이 창고 $j$로 부터 운송될 때 발생하는 비용이다.</br>

여기서 결정해야 하는 사항은 어떤 창고가 운용가능하며 어떤 고객이 각각의 창고로부터 배송을 받을 수 있는지에 대한 것으로, 고정 비용과 운송 비용을 최소화하는 쪽으로 수식을 유도해 푸는 것이다.

> $$\begin{align}
\min_{x, y} & \quad \sum_{i = 1}^{n} f_{j} y_{j} + \sum_{i = 1}^{m} \sum_{j = 1}^{n} c_{ij} x_{ij} \\\
\text{subject to } & \quad \sum_{j = 1}^{n} x_{ij} = 1,  \quad i = 1 \dotsc n \\\
& \quad x_{ij} \leq y_{j},  \quad i = 1 \dotsc m,  \quad j = 1 \dotsc n \\\
& \quad x_{ij} \in \lbrace 0, 1\rbrace \quad i = 1 \dotsc n, \quad j = 1 \dotsc n \\\
& \quad y_{j} \in \lbrace 0, 1\rbrace \quad j = 1 \dotsc n \\\
\end{align}$$

첫번째 제약조건은, 각각의 고객은 하나의 창고로부터 물품을 배송받을 수 있음을 의미한다. 두번째 제약조건은 창고  $j$가 운영되고 있어야 고객 $i$가 그 곳으로 부터 물품을 배송받을 수 있다는 것을 말한다. 이 때, $x_{ij}$와 $y_{j}$가 모두 binary 이기 때문에 $mn$ constranint 를 생각할 수 있다. 이는 "marginalized" 형식으로 다음과 같이 제약조건으로 표현할 수도 있다.

> $$ \sum_{i = 1}^{n} x_{ij} \leq m y_{j}, \quad j = 1 \dotsc n $$

이를 반영하여 다음과 같은 수식으로 대체할 수 있다.

> $$\begin{align}
\min_{x, y} & \quad \sum_{i = 1}^{n} f_{j} y_{j} + \sum_{i = 1}^{m} \sum_{j = 1}^{n} c_{ij} x_{ij} \\\
\text{subject to } & \quad \sum_{j = 1}^{n} x_{ij} = 1,  \quad i = 1 \dotsc n \\\
& \quad \sum_{i = 1}^{n} x_{ij} \leq m y_{j}, \quad j = 1 \dotsc n \\\
& \quad x_{ij} \in \lbrace 0, 1\rbrace \quad i = 1 \dotsc n, \quad j = 1 \dotsc n \\\
& \quad y_{j} \in \lbrace 0, 1\rbrace \quad j = 1 \dotsc n \\\
\end{align}$$


## K-means and K-medoids clustering
군집(clustering)은 데이터를 유사한 그룹으로 나누는 것으로, K-means 알고리즘은 군집 내의 데이터 포인트들 간의 거리를 평균으로 $K$개의 중심값(centroid)을 찾아 K개의 군집을 찾는 문제로,  partition $S_{1} \cup \dotsc \cup S_{K} = \lbrace 1, \dotsc, n \rbrace$ 를 주어진 데이터에서 찾는 것을 목표로 한다. 이 때 다음 수식을 최소화 한다.

>$$ \sum_{i = 1}^{K} \sum_{j \in S_{i}} \| x^{(j)} - \mu^{(i)} \|^{2} $$
>
> where $$ \mu^{(i)} :  = \frac{1}{| S_{i} |} \sum_{j \in S_{i}} x^{(i)} $$, $ \mu^{(i)} $ 는 cluster $i$의 centroid를 의미한다.

평균을 계산해서 centroid를 구하는 것 (K-means) 보다 좀 더 Outlier에 Robust한 방법은 K개의 군집의 중심값을 산술평균으로 구하는 대신 군집의 중심에 가장 가까운 하나의 데이터 포인트를 중심값으로 정하는 방법 (K-medoids clustering) 이다. 
즉, 각각의 data point ($y^{(i)}$)를 중심점으로 생각하고 이를 계산하였을 때 최소값이 나올 수 있는 data point를 centroid로 지정하는 방법 (K-medoids clustering) 이다. 

>$$ \sum_{i = 1}^{K} \sum_{j \in S_{i}} \| x^{(j)} - y^{(i)} \|^{2} $$
>
>where $$ y^{(i)} \in \lbrace x^{(j)} : j \in S_{i} \rbrace $$

</br>
이 문제는 integer program으로 변형하여 나타내어 질 수 있다.
먼저,  $$ d_{ij} = \| x^{(i)} - x^{(j)} \|^2 $$ 를 정의하고, 다음 두 가지의 binary variable을 정의 한다.

$$ w_{i} =\begin{cases}1 & \text{if choose} \quad x^{(i)} \quad \text{as a centroid} \\\ 0 & \text{otherwise.} \end{cases} $$
$$ z_{ji} =\begin{cases}1 & \text{if } \quad x^{(j)} \quad \text{in the cluster with centroid} \quad x^{(i)} \\\ 0 & \text{otherwise.} \end{cases} $$
</br>

K-medoids 문제는 optimization problem으로 정의하면 다음과 같다.

> $$\begin{align}
\min_{w, z} & \quad \sum_{i = 1}^{n} \sum_{j = 1}^{n} d_{ij} z_{ji} \\\
\text{subject to } & \quad z_{ji} \leq w_{i} \\\
& \quad \sum_{i = 1}^{n} w_{i} = k \\\
& \quad w_{ij} \in 0, 1 \quad i = 1 \dotsc n \\\
& \quad z_{ji} \in 0, 1 \quad j, i = 1 \dotsc n \\\
\end{align}$$ 

첫번째 제약조건은 centroid가 먼저 정해지고 난 후, $x_{i}$에 대한 $x_{j}$가 있는 지 없는 지 판별하겠다는 것을 의미한다.

## Best subset selection
$X = [x^{1} \quad \dotsc \quad x^{p}] \in \mathbb{R}^{n×p}, \quad y \in \mathbb{R}^{n}$ 조건이 주어졌을 때, Best subset selection 문제는 다음과 같다.

> $$\begin{align}
\min_{\beta} & \quad \frac{1}{2} \| y - X\beta \|^{2} \\\
\text{subject to } & \quad \| \beta \| \leq k \\\
\text{} \\\
\text{where} &  \quad \| \beta \|_{0}  :  = \text{the number of nonzero entries of} \quad \beta.
\end{align}$$ 

$ \| \beta \|_{0} $는 Non-convex constraint 이기 때문에 Integer programing 으로 변형해서 문제를 풀면 좀 더 수월하게 풀 수 있다.

> $$\begin{align}
\min_{\beta, z} & \quad \frac{1}{2} \| y - X\beta \|^{2} \\\
\text{subject to } & \quad | \beta_{i} | \leq Mz_{i} \quad i = 1 \dotsc n \\\
& \quad z_{ji} \in \lbrace 0, 1 \rbrace \quad i = 1 \dotsc n \\\
& \quad \sum_{i = 1}^{p} z_{i} \leq k \\\
\end{align}$$ 

## Least median of squares regression
$X = [x^{1} \quad \dotsc \quad x^{p}] \in \mathbb{R}^{n×p}, \quad y \in \mathbb{R}^{n}$, 그리고 $\beta \in \mathbb{R}^{p} $ 조건이 주어졌을 때, $r : = y - X\beta $ 로 정의하면, Least median of squares regression 문제는 다음과 같다.

> $$\beta_{LMS} : = \arg\min_{\beta} (median | r_{i} | ).$$

</br> </br>

# 24-03 Solving integer programs

</br> </br>

Integer program으로 수식을 변형한 뒤, 문제를 해결하려면 relaxation과 같은 기법이 필요하다. integer programs에서 나타나는 제약 사항 및 문제에 대해 어떤 접근을 하는 지 살펴보도록 하자.

## Hardness of integer programs
Integer program 문제를 푸는 것은 convex optimization 문제를 푸는 것보다 훨씬 어렵다. 일반적인 Integer programming은 풀 수 있는 가능성 조차도 모르면서 최소 polynomial time이 걸리는 [NP-hard](https://en.wikipedia.org/wiki/NP-hardness) 이기 때문이다. 이 때, integer constaint에 대한 제약을 없앰으로써 convex relaxation을 하면, optimal value에 다가가는 lower bound를 구할 수 있다.</br></br>
Convex relaxation은 사용하여 문제를 풀면 다음과 같은 한계가 발생할 수 있다.


 * Feasible integer solution을 구하는 것이 어렵게 될 수 있다.
 * Relaxation 조건에서 얻어진 optimal solution이 integer program으로 얻어지는 optimal solution과 거리가 있을 수 있다.
 * 근사(Rounding)를 했을 때의 값이 optimal 값과 다를 수 있다.


## Algorithmic template for solving integer programs
$X$가 convex 이고 integrality constraints를 포함할 때, integer program은 다음과 같다.

> $$ z : = \min_{x \in X} f(x) $$
 
Convex optimization과 다르게 feasible point $x* \in X$가 optimal 이라는 것을 입증하는 직접적인 "optimality conditions"는 존재하지 않는다. 대신에, lower bound $ \underline{z} \leq z$, 그리고 upper bound $ \bar{z} \geq z$ 를 찾아가면서 $\underline{z} = \bar{z}$ 에 가까워지도록 optimal의 근사치를 찾는 방법을 사용 할 수 있다.

#### Algorithmic template
Upper bounds의 감소 시퀀스를 관찰하면,
> $\bar{z_1} \geq \bar{z_2} \geq \dotsc \bar{z_s} \geq z$

lower bounds의 증가 시퀀스를 관찰하면,
> $\underline{z_1} \leq \underline{z_2} \leq \dotsc \underline{z_t} \leq z $

임의의 $\epsilon > 0$에 대하여 $\underline{z_1} - \bar{z_t} \leq \epsilon $ 이 되는 범위에서 $z$의 값이 정해진다.

#### Primal bounds
앞선 $z$ 공식에 따라 임의의 feasible $x \in X$에서 항상 $f(x) \geq z$가 성립하고, 이 때, $f(x)$는 upper bound 이다. 하지만 항상 feasible $x$를 찾을 수는 없기 때문에, $x$값이 해당 셋에 포함 된다면 문제가 쉽게 풀리지만, 그렇지 않을 수도 있다.


#### Dual bounds
보통 lower bounds 로도 불리며, relaxation을 통해서 그 값을 찾게 된다. 다음 장에서 자세한 설명을 덧붙인다.

</br> </br>

# 24-04 Relaxations

</br> </br>

Relaxation을 위해서는 특정 조건이 성립이 되어야 하며, Convex relaxation과 Lagrangian relaxation 방법을 활용할 수 있다. 자세한 내용을 살펴보도록 하자.

## Conditions for Relaxations
일반적인 optimization problem이 다음과 같이 정의된다면,
> $$\min_{x \in X} f(x)$$

이 문제의 relaxation은 임의의 optimization problem으로 나타내었을 때, 다음과 같이 정의된다.
> $$\min_{x \in Y} g(x)$$
> such that
> $ \quad $ ① $ X \subset Y \quad$ and 
> $ \quad $ ② $ g(x) \leq f(x)$ for all $x \in X $ 

목적함수 $f(x)$ 와 $g(x)$가 달라지면 두 조건 모두 만족해야 하고, 같다면 조건 ①만 만족해도 될 것이다.
두 조건에 의하여, relaxation에서의 optimal value는 original problem에서의 optimal value의 lower bound가 된다.

## Convex relaxations
주어진 문제가 다음과 같을 때,
> $$\begin{align}
\min_{x} & \quad f(x) \\\
\text{subject to } & \quad x \in C \\\
& \quad x_j \in \mathbb{Z}, \quad j \in J \\\
\text{where f is convex} & \quad f : \mathbb{R}^{n} \rightarrow \mathbb{R}, \quad C \in \mathbb{R}^n 
\quad \text{and} \quad J \in \lbrace 1 \dotsc n \rbrace \\\
\end{align}$$

convex relaxation을 아래와 같이 표현할 수 있다.
> $$\begin{align}
\min_{x} & \quad f(x) \\\
\text{subject to } & \quad x \in C \\\
\text{where f is convex} & \quad f : \mathbb{R}^{n} \rightarrow \mathbb{R}, \quad C \in \mathbb{R}^n 
\quad \text{and} \quad J \in \lbrace 1 \dotsc n \rbrace \\\
\end{align}$$


## Lagrangian relaxations
$X$가 convex 그리고 integer constraints를 모두 포함할 때, 다음과 같이 문제를 정의 할 수 있다. 

> $$\begin{align}
\min_{x} & \quad f(x) \\\
\text{subject to } & \quad Ax \leq b \\\
& \quad x_{j} \in \mathbb{Z} \quad x \in X 
\end{align}$$

이 때, constraints를 objective에 더하여, 어떤 $u \geq 0$에 대한 Lagrangian relaxation을 하면, 다음과 같다.

> $$\begin{align}
L(u) = \min_{x} & \quad f(x) + u^{\top}(Ax-b) \\\
\text{subject to } & \quad x \in X \\\
\end{align}$$

Lagrangian form을 통해서 constraint set이 확장되었고, feasible $x$에 대해 $Ax \leq b$을 만족하므로, 항상 $f(x) + u^{\top}(Ax - b) \leq f(x), u \geq 0$이 성립한다. 따라서 $L(u)$는 임의의 $u \geq 0$에 대해서 lower bound이고, 최선의 lower bound는 dual problem $\max_{u \geq 0} L(u)$을 해결함으로써 얻어낼 수 있다. $L(u)$는 convex function의 point-wise minimization이기 때문에 concave optimization problem이 된다는 것을 기억하자.

앞서 언급되었던 Facility location problem에 Lagrangian relaxation을 적용해 보면, unconstrained $v$에 대하여 다음 식을 푸는 문제로 변형된다.
> $$\begin{align}
L(u) = \min_{x} & \quad \sum_{i = 1}^{n} f_{j}y_{j} + \sum_{i = 1}^{m}\sum_{j = 1}^{n}(c_{ij} - v_{i})x_{ij} + \sum_{i = 1}^{m} v_{i} \\\
\text{subject to } & \quad x_{ij} \leq y_{j} \quad i = 1 \dotsc m, \quad j = 1 \dotsc n \\\
& \quad x_{ij}, y_{j} \in \lbrace 0, 1 \rbrace \quad  i = 1 \dotsc m, \quad j = 1 \dotsc n \\\
\end{align}$$

각각의 $v$에 대하여 Lagrange relaxation $L(v)$는 쉽게 풀릴 수 있다 :
> $$ x_{ij}(v) =\begin{cases}1 & \text{if} \quad c_{ij} - v_{i} < 0 \quad \text{and}  \quad \sum_{l} (c_{lj} - v_{l})^{-} + f_{j} < 0 \\\ 0 & \text{otherwise.} \end{cases} $$
$$ y_{j}(v) =\begin{cases}1 & \text{if } \quad \sum_{l} (c_{lj} - v_{l})^{-} + f_{j} < 0 \\\ 0 & \text{otherwise.} \end{cases} $$

이는 lower bound $L(v)$ 그리고 heuristic primal solution을 도출 할 수 있도록 한다. 또한 $-L(v)$의 부분미분(subdifferential)을 사용한다면 계산도 쉬워진다. subgradient method를 사용하여 $\max_{v} L(v)$를 $\min_{v} -L(v)$ 로 변환시켜서 문제를 풀어갈 수 있다.

</br> </br>

# 24-05 Branch and bound algorithm (B&B)

</br> </br>

Branch and bound 알고리즘과 Convex relaxation 을 통해 Integer program을 풀어가는 방법을 알아보자.

## Definition and properties
Branch and bound 알고리즘은 integer program을 푸는 가장 보편적인 방법이다. 주로 divide and conquer 방식으로 원래의 문제를 여러 개의 작은 문제(sub-problems)로 쪼개서 정답에 접근해나가는 방식이다. 

Constraint set $X = X_{1} \cup X_{1} \cup \dotsc \cup X_{k}$ 가 각각의 $X_{i}$로 이루어진 partition의 합집합일 때,
> $$ \min_{x \in X} f(x) = \min_{i = 1, \dotsc , k} \lbrace \min_{x \in X_{i}} f(x) \rbrace .$$

영역을 분할하여 minimum을 찾아나가면서 최적의 해를 구할 수 있다.

Sub-problem의 임의의 feasible solution을 upper bound $u(X)$로 정할 수 있다. lower bound를 얻기 위해서, 각각의 sub-problem에서의 lower bound $l(X_{i})$ 를 구한다. 그리고 나서 만약 $l(X_{i}) \geq u(X)$ 일 경우에 이 부분에 해당하는 sub-problem $\min_{x \in X_{i}} f(x)$ 을 제외한다. 
 
Integer Programming problem (IP) 문제를 다음과 같이 정의한다.

> $$\begin{align}
\min_{x} & \quad f(x) \\\
\text{subject to } & \quad x \in C \\\
& \quad x_j \in \mathbb{Z}, \quad j \in J \\\
\text{where f is convex} & \quad f : \mathbb{R}^{n} \rightarrow \mathbb{R}, \quad C \in \mathbb{R}^n 
\quad \text{and} \quad J \in \lbrace 1 \dotsc n \rbrace \\\
\end{align}$$

그리고 Convex Relaxation (CR) 문제가 다음과 같을 때,

> $$\begin{align}
\min_{x} & \quad f(x) \\\
\text{subject to } & \quad x \in C \\\
\text{where f is convex} & \quad f : \mathbb{R}^{n} \rightarrow \mathbb{R}, \quad C \in \mathbb{R}^n 
\quad \text{and} \quad J \in \lbrace 1 \dotsc n \rbrace \\\
\end{align}$$

recursive하게 문제를 풀어간다.

* Constraint set이 trivial 하다면, (CR) 문제를 푼다. 만약 solution이 현재 upper bound 보다 적다면, upper bound를 업데이트 한다. Stop.
    * (CR) 이 infeasible 하다면, (IP) 역시 infeasible 하다. Stop.
    * (CR) 에서의 해 $x^{\star}$가 (IP) 에서도 feasible 하다면, $x^{\star}$는 해가 된다. Stop.
* 문제에서의 lower bound를 찾는다.
    * (CR) 에서의 해 $x^{\star}$가 (IP) 에서는 infeasible 하다면, (IP) 에서의 lower bound 를 갱신한다.
* Lower bound가 현재의 upper bound보다 크다면, Stop.
* Constraint set을 쪼갠다, 그리고 각각의 sub-problem을 recursive하게 푼다.  


## After branching

* Branching 이후에 각각의 subproblem을 푼다.
* 만약에 subproblem의 lower bound가 현재의 upper bound보다 크다면, 그 하부의 subproblem을 고려할 필요가 없다.
* Lower bound를 계산하는 가장 확실한 방법은 convex relaxation을 거쳐서 구하는 것이지만, 다른 방법들 (e.g., Lagrangian relaxation) 또한 사용되기도 한다.

</br> </br>

# 25 Mixed Integer Programming (part II)

</br> </br>

이 장에서는 Integer Programming(IP)에서 가장 핵심적인 알고리즘이라고 할 수 있는 cutting plane 알고리즘과 이를 실용적으로 구현한 branch and cut 알고리즘에 대해서 살펴본다. 

또한, Integer Programming의 예시로 best subset selection과 Least mean squares에 대해서 살펴보도록 하겠다.

## Reference
* Belotti, Kirches, Leyer, Linderoth, Luedke, and Mahajan (2012), "Mixed-integer nonlinear optimization"
* Bertsimas and Mazumder (2016), "Best subset selection via a modern optimization lens"
* Bertsimas, King, and Mazumder (2014), "Least quantile regression via modern optimization"
* Conforti, Cornuejols, and Zambelli (2014), "Integer programming"
* Wolsey (1998), "Integer programming"

</br> </br>

# 25-01 Cutting Planes

</br> </br>

Cutting plane method는 integer linear program을 convex problem으로 변경하여 해를 구한 후, 이 해가  original feasible set에 포함되지 않으면 cut을 이용해서 해가 있는 영역을 잘라내서 새롭게 구한 해가 original feasible set 안에 포함되도록 점진적으로 유도하는 방식이다. 이떄, cut은 feasible set을 자르는 직선(또는 초평면)으로 cutting plane이라고도 한다.
## Concept of cutting plane
개념적으로 아래 그림과 같이 original feasible set과 feasible set 사이에 직선을 그어서 original feasible set이 아닌 영역을 잘라내는 방식이라고 생각하면 된다. 

![](https://wikidocs.net/images/page/23719/09.01_01_cutting_plane_concept.PNG) <br>
**[Fig1] Cutting Plane**
출처 : https://commons.wikimedia.org/wiki/File:Cutting_plane_algorithm2.png <br>

* 빨간색 영역 : original integer linear program의 feasible set
* 파란색 영역 : convex relaxation problem의 feasible set
* 녹색 직선 :  cutting plane (cutting plane은 파란색과 빨간색 영역의 사이에 존재한다.)

자세한 알고리즘은 본문에서 다시 소개하도록 하겠다.


## A bit of history on cutting planes
Cutting plane method는 이론으로부터 실용적인 방법으로 발전해 오기까지 매우 오래 시간이 걸렸다. 

1954년에 Dantzig, Fulkerson, Johnson이 TSP(traveling salesman problem)를 풀기 위해 처음으로 Cutting plane method를 제안했으며, 1958년에 수학자인 Gomory가 임의의 integer linear program을 풀 수 있는 범용적인 cutting plane method를 제안했다. 그러나 그 이후 약 30년 동안 Gomory cut은 실제 문제를 풀기에는 실용적이지 않은 상태로 묻혀있었다.

1990년 CMU의 Sebastian Ceria는  cutting plane method를 branch and bound 알고리즘을 이용해서 성공적으로 구현을 하였으며 이를 branch and cut이라고 한다. 이때부터 cutting plane은 상용 최적화 solver의 핵심적인 컴포넌트가 되었다.

</br> </br>

# 25-01-01 Convexification

</br> </br>

Integer program을 동일한 convex problem으로 변환하는 것을 convexification이라고 한다. Convexification을 하게 되면 feasible set이 polyhedron 형태가 되어 cutting plane 알고리즘에서 valid한 cutting plane을 쉽게 찾을 수 있다.

## Convexification
Integer program을 convexification하려면 objective function이 linear해야 한다. 이때, Integer program의 constraint는 convex set인 $C$와 integer set인 ${x_j}$로 구성된다.
>
\begin{align}
    \min\_{x} & \quad {c^{T}x} \\\\
    \text{subject to } & \quad  x \in C \\\\
     & \quad  x\_j \in \mathbb{Z}, \quad j \in J \\\\
\end{align}

이때, feasible set은 convex hull $S := \text{conv} \left \\{ x \in C : x_j \in \mathbb{Z}, j \in J \right \\}$로 재정의할 수 있다. 이 convex hull $S$로 정의된 feasible set을 이용해 원래 문제와 동일한 convex problem을 다음과 같이 정의할 수 있다. 그리고, 이러한 과정을 convexification이라고 한다. 
>
\begin{align}
    \min\_{x} & \quad {c^{T}x} \\\\
    \text{subject to } & \quad  x \in S \\\\
\end{align}

아래 그림을 보면 파란색 영역이 $C$이고 빨간색 점들이 ${x_j}$이며, 이 두 집합으로 구성된 convex hull $S$는 빨간색 영역이다.

![](https://wikidocs.net/images/page/23719/09.01_01_cutting_plane_concept.PNG) <br>
**[Fig1] Cutting Plane**
출처 : https://commons.wikimedia.org/wiki/File:Cutting_plane_algorithm2.png <br>

이 두 식이 동일한 이유는 objective function이 linear하기 때문이다. 

## Special case: integer linear programs
위의 convexification 과정을 다음과 같은 integer linear program에 적용해보자.

>
\begin{align}
    \min\_{x} & \quad {c^{T}x} \\\\
    \text{subject to } & \quad  Ax \le b \\\\
     & \quad  x\_j \in \mathbb{Z}, \quad j \in J \\\\
\end{align}

Integer linear program에서 convex hull $S$는 다음과 같이 정의된다.

> **Theorem** : 만일 $A, b$가 유리수라면 다음 집합은 polygon이다.
$$S := \text{conv} \left \\{ x : Ax \le b,  x_j \in \mathbb{Z}, j \in J \right \\}$$

그렇다면 integer linear program은 linear program일까? 물론 그렇다. 하지만, 이때 polyhedron $S$의 형태는 부등식이 기하급수적으로 많은 매우 많은 복잡한 다각형이 될 수 있다. 따라서, 일반적으로 linear program을 풀기 위한 방법과는 다른 방법으로 문제를 풀어야 한다.

</br> </br>

# 25-01-02 Cutting plane algorithm

</br> </br>

이 절에서는 integer linear program을 풀 수 있는 cutting plane 알고리즘에 대해 살펴보도록 하겠다.

## Valid Inequality
Cutting plane을 정의하기 위해 먼저 valid inequality가 무엇인지 살펴보자. 

집합 $S$에 대해 부등식 $\pi^{T}x \le \pi_{0}$이 다음 조건을 만족한다면 valid하다고 말한다. 즉, 어떤 집합 $S$가 부등식 $\pi^{T}x \le \pi_{0}$이 정의하는 halfspace에 포함되어 있다면 이 부등식은 $S$에 대해 valid하다고 볼 수 있다.

>$\pi^{T}x \le \pi_{0}$ for all $x \in S$

부등식이 Valid해야 cutting plane이 될 수 있다.
## Cutting plane algorithm
이제 다음과 같은 integer programming이 있을 때 cutting plane algorithm을 살펴보도록 하자.

>
\begin{align}
    \min\_{x} & \quad {c^{T}x} \\\\
    \text{subject to } & \quad  x \in C \\\\
     & \quad  x\_j \in \mathbb{Z}, \quad j \in J \\\\
\end{align}

$S := \text{conv} \left \\{ x \in C : x_j \in \mathbb{Z}, j \in J \right \\}$이다.

#### Cutting plane algorithm
다음 알고리즘에서 Convex Problem은 CP로 Integer Program은 IP로 표기한다.
>
1. $C_{0} := C$으로 두고 $x^{(0)} := \text{argmin}\_{x} \left\\{c^{T}x : x \in C_{0} \right\\}$를 계산
2. for $k = 0, 1, ...$ <br>
$\quad$if $x^{k}$가 (IP) feasible이면 $x^{k}$는 optimal solution이므로 Stop함 <br>
$\quad$else<br>
$\quad\quad$ $S$에 대해 valid하면서 $x^{k}$를 잘라내는 부등식 ($\pi$, $\pi_{0}$)을 찾음<br>
$\quad\quad$ $C_{k+1} := C_{k} \cap \\{ x : \pi^{T}x \le \pi_{0} \\} $<br>
$\quad\quad$ $x^{(k+1)} := \text{argmin}\_{x} \left\\{c^{T}x : x \in C_{k+1} \right\\}$<br>
$\quad$end if<br>
end for<br>

이와 같은 valid inequality를 **cutting plane** 또는 **cut**이라고 한다.

알고리즘의 1단계는 convex relaxation을 하여 CP 문제를 푸는 단계이다. 이떄 feasible set은 $C$이다. 

알고리즘 2단계에서는 구한 해가 IP에서 feasible하다면 이를 해로 본다. 만일 feasible하지 않다면 해인 $x^{k}$와 집합 $S$를 나누는 valid inequality를 찾아서 $C_{k}$의 범위를 줄인다. 그리고, $C_{k+1}$로 재정의된 CP 문제를 풀고 알고리즘 2단계를 반복하게 된다. 

아래 그림에서 polygon은 집합 $C$를 나타내며 CP의 해는 검정색 점으로 표시되어 있다. 이때, valid inequailty는 해를 잘라내서 집합 $C$의 범위를 줄이게 된다.

![](https://wikidocs.net/images/page/23740/09.01_02_valid_inequality.PNG) <br>
**[Fig1] Valid Inequality [3]**<br>

이와 같이 집합 $C$의 범위를 계속해서 줄여나가면 IP 문제의 convex hull feasible set인 집합 $S$와 만나게 되어 IP에 feasible한 해를 구할 수 있게 된다.

</br> </br>

# 25-01-03 Gomory cuts (1958)

</br> </br>

수학자 Gomory는 다음과 같은 사실을 바탕으로 valid inequality를 쉽게 찾는 방법을 고안하였다.
>
if $a \le b$ and $a$ is an integer then $a \le \lfloor b \rfloor$.

즉, a가 정수라면 b를 rouding해도 a는 b보다 작거나 같은 관계는 유지가 된다.

## Gomory fractional cut
앞에 IP문제에서 convex hull로 정의되는 feasible set 집합 $S$가 다음과 같다고 해보자.
>
$$ S \subseteq \left\\{ x \in \mathbb{Z}^{n}\_{+} : \sum^{n}\_{j=1} a_{j} x_{j} = a_{0} \right\\} \quad \text{where} \quad  a_{0} \notin \mathbb{Z}$$

이때 Gomory fractional cut은 다음과 같이 정의된다.
>
$$ \sum^{n}\_{j=1} (a_{j} - \lfloor a_{j} \rfloor) x_{j} \ge a_{0} -  \lfloor a_{0} \rfloor $$

이와 같은 아이디어를 확장한 아이디어가 매우 많다. 예를 들어 Chvatal cuts, split cuts, lift-and-project cuts 등등이 있다.

Gomory fractional cut 유도 과정은 Wikipedia에 자세히 나와있으므로 참조하기 바란다.

* 자세한 내용은 [Cutting-plane method](https://en.wikipedia.org/wiki/Cutting-plane_method) 참조

</br> </br>

# 25-01-04 Branch and cut algorithm

</br> </br>

1990년 CMU의 Sebastian Ceria는 cutting plane method를 branch and bound 알고리즘을 이용해서 성공적으로 구현을 하였으며 이를 branch and cut이라고 한다. 이때부터 cutting plane은 상용 최적화 solver의 핵심적인 컴포넌트가 되었다.

## Branch and cut algorithm
다음과 같은 integer programing 문제가 있다고 하자. 이때 $f : \mathbb{R}^{n} \to \mathbb{R}$이고  $C \subseteq \mathbb{R}^{n}$는 convex이며 $J \subseteq {1, ..., n}$이다.
>
\begin{align}
    \min\_{x} & \quad {f(x)} \\\\
    \text{subject to } & \quad  x \in C \\\\
     & \quad  x\_j \in \mathbb{Z}, \quad j \in J \\\\
\end{align}

#### Branch and cut algorithm
알고리즘에서 Convex Problem은 CP로 Integer Program은 IP로 표기한다.
>
1. 다음 convex relaxation 문제를 푼다.
\begin{align}
    \min\_{x} & \quad {f(x)} \\\\
    \text{subject to } & \quad  x \in C \\\\
     & \quad  x\_j \in \mathbb{Z}, \quad j \in J \\\\
\end{align}
2. (CR) infeasible $\Rightarrow$ (IP) infeasible <br>
3. (CR)의 solution $x^{\star}$이 (IP) feasible $\Rightarrow$ $x^{\star}$는 (IP)의 solution <br>
4. (CR)의 solution $x^{\star}$이 (IP) infeasible하면 다음 두 가지 중에 선택 <br>
$\quad$4.1 cut을 추가하고 step 1로 간다. <br>
$\quad$4.2 branch해서 반복적으로 subproblem을 푼다. <br>

Branch and cut algorithm은 branch and bound 와 cutting plane method를 결합한 알고리즘으로서, step 4에서 branch-and-bound를 할지, cut을 할지 선택할 수 있다. 

## Integer programming technology
Gurobi, CPLEX, FICO와 같은 state-of-the-art solver들은 매우 효율적인 simplex, interior-point method 등의 알고리즘 구현을 포함하고 있다. 특히, mixed integer optimization의 경우 대부분의 solver들은 branch and cut algorithm을 사용하고 있으며 이들은 convex relaxation과 warm start의 이점을 많이 활용하고 있다.

약 30년 전에 비하면 Integer programming의 성능 향상은 매우 비약적이다. 따라서, 그동안 풀지 못했던  실생활의 많은 문제들이 최근에 Integer programming을 통해 해결되고 있으며 computing power가 향상됨에 따라 더욱 적극적으로 활용될 전망이다.

* Algorithm에서의 속도 향상 1990-2016 : over $500,000$
* Hardware에서의 속도 향상 1990-2016 : over $500,000$
* Total speedup over $250$ billion = $2:5 \cdot 10^{11}$


</br> </br>

# 25-02 Two extended examples

</br> </br>

이 절에서는 두 가지 Mixed Integer Programming의 예제를 들어보도록 할 예정이다.

* Best subset selection
* Least mean squares

</br> </br>

# 25-02-01 Best subset selection

</br> </br>

Integer Programming의 대표적인 예시 중 하나인 best subset selection은 $p$개의 entry 중에 k개의 entry를 선택하는 문제이다.

## Best subset selection
$X = [x^{1} \quad \dotsc \quad x^{p}] \in \mathbb{R}^{n×p}$이고 $y \in \mathbb{R}^{n}$일 때 best subset selection 문제는 다음과 같다.

> $$\begin{align}
\min_{\beta} & \quad \frac{1}{2} \parallel y - X\beta \parallel^{2} \\\
\text{subject to } & \quad \parallel \beta \parallel_{0}  \  \leq  k \\\
\end{align}$$ 

이때 $\parallel \beta \parallel\_{0}$는 $\beta$의 nonzero entry의 개수이다.

지금까지 앞 장에서는 이와 같은 문제를 Lasso problem으로 정의해서 $l_1$ norm으로 $\beta$를 sparse하게 만들었었다. 이 문제의 경우 $l_0$ norm을 사용해서 0이 아닌 entry 개수를 제약하는 문제로 
정의 되었는데 제약 조건인 $\parallel \beta \parallel_{0}  \  \leq  k$가 non-convex라서 지금까지 배운 convex optimization 기법으로는 문제를 풀 수 없다.

#### Integer programming formulation
그렇다면 이 문제를 Integer programing으로 재정의해보자. 

> $$\begin{align}
\min_{\beta, z} & \quad \frac{1}{2} \parallel y - X\beta \parallel^{2} \\\
\text{subject to } & \quad \left\vert  \beta_{i} \right\vert  \leq M_{i} \cdot z_{i} \quad i = 1 \dotsc p \\\
& \quad \sum_{i = 1}^{p} z_{i} \leq k \\\
& \quad z_{ji} \in \lbrace 0, 1 \rbrace \quad i = 1 \dotsc p \\\
\end{align}$$ 

Binary 변수 $z_i$를 도입해서 $z_i$의 합이 $k$보다 작게 만듦으로써 위의 문제와 동일해지게 만들었다.  $M_i$는 사전에 알고 있는 $\left\vert  \beta_{i} \right\vert$의 상한 값으로 $X$와 $y$를 사전처리해서 계산할 수 있는 값이다.

이제 문제를 Integer Programming으로 정의했으므로 지금부터 Integer Porogramming 기법으로 풀 수 있다.

## A clever way to get good feasible solutions
문제를 일반화해서 알고리즘을 설명해보자. Objective function $g : \mathbb{R}^{p} \to \mathbb{R}$이 smooth convex이고 $\nabla g$가 L-Lipschitz이라고 하자.
>
$$\min_{\beta} g(\beta) \quad \text{subject to} \quad \parallel \beta \parallel_{0} \le k$$

Best subset selection의 경우 $g(\beta) = \frac{1}{2} \parallel X\beta - y \parallel^2_2$이다.

#### Observation
다음과 같이 정의된 $H_k(u)$ 함수를 통해 $u \in \mathbb{R}^p$에서 가장 큰 k개 entry를 구할 수 있다.
>
$$ H_k(u) = \underset{\beta : \parallel \beta_{0} \parallel \le k}{\text{argmin}} \parallel \beta - u \parallel^2_2$$

이때, $H_k(u)$ 함수는 hard thresholding을 한다. 또한, $u$를 집합 $\beta$에 projection한 것으로 볼 수도 있다.

#### Discrete first-order algorithm
이제 gradient descent와 함수 $H_k(u)$를 이용해서 알고리즘을 정의해보자.
>
1. $\beta^{(0)}$으로 시작
2. for $k = 0, 1, ...$ <br>
$\quad$$\beta^{(i+1)} = H_k \left(\beta^{(i)} - \frac{1}{L} \nabla g(\beta^{(i)})\right)$<br>
end for<br>

위의 과정을 반복하면 $\beta^{(i)} \to \bar{\beta}$로 수렴하게 된다. 이는 위의 최소화 문제에 대한 local solution이라고 할 수 있다.
>
$$ \bar{\beta} =  H_k \left(\bar{\beta} - \frac{1}{L} \nabla g(\bar{\beta})\right)$$

결과적으로 이 알고리즘은 proximal gradient 알고리즘으로 볼 수 있다. 왜냐하면 함수 $H_k(u)$가 proximal operator 역할을 하고 있기 때문이다.
## Computational results
#### Mixed integer programming gap
아래 그림에서 Subset selection problem의 실험 결과를 살펴보자.

왼쪽 그래프에서 upper bound는 바로 optimal이 되었지만 lower bound는 천천히 올라오다가 upper bound와 만나는 지점에서야 optimal임을 알게 된다. 왜냐하면 linear program에서는 solution이 optimal인지 체크할 방법이 없으며 upper bound와 lower bound가 같아졌을 때 optimal임을 알 수 있게 된다. 
(첨고로 upper bound와 lower bound의 차를 mixed integer programming gap이라고 한다.)

오른쪽 그림은 동일한 실험 결과를 mixed integer programming gap을 작아지는 모습으로 보여주고 있다. 주황색 그래프는 upper bound와 lower bound의 차이인 mixed integer programming gap을 나타내며 점점 줄어들고 있다.

![](https://wikidocs.net/images/page/23722/09.01_03_subset_results1.PNG)<br>
**[Fig1] Dataset $n=350, p = 64, k=6$ [3]**<br>

#### Cold and Warm Starts
다음 그림에서 warm start가 cold start보다 전체적으로 성능이 매우 우수함을 보여주고 있다.

![](https://wikidocs.net/images/page/23722/09.01_04_subset_results2.PNG)<br>
**[Fig2] Cold and Warm Starts [3]**<br>

#### Sparsity Detection
다음 그림에서는 MIP (Mixed Integer Programming)과 Lasso, Step regression, Spasenet의 sparsity를 비교하고 있다. 결과적으로 MIP가 가장 sparse한 결과내고 있음을 알 수 있다.

![](https://wikidocs.net/images/page/23722/09.01_05_subset_results3.PNG)<br>
**[Fig3] Sparsity Detection (synthetic database) [3]**<br>

</br> </br>

# 25-02-02 Least mean squares

</br> </br>

지금까지는 regression 문제를 residual의 $l_2$ norm이나 $l_1$ norm을 최소화하는 문제로 풀었었다. 이들 방법보다 좀 더 robust한 방법이 있을까?

Residual의 median을 최소화하도록 regression을 할 경우 좀 더 robust한 regression을 할 수 있다. 이를 **Least Median of Squares**라고 하는데 데이터의 50% 정도가 corrupt되어도 estimator는 corrupt되지 않을 만큼 robust하다. 하지만 이 문제는 NP-Hard 문제이기도 하다!

이 절에서는 Least Median of Squares 문제를 일반화한 **Least Quantile of Square**문제를 Integer programming으로 어떻게 푸는지 소개한다.
## Least mean squares
$X = [x^{1} \quad \dotsc \quad x^{p}] \in \mathbb{R}^{n×p}$이고 $y \in \mathbb{R}^{n}$이라고 하자. 그리고 $\beta \in \mathbb{R}^{p} $일 때 $r : = y - X\beta $이라고 하자.

#### Observe
* Least squares (LS) : $\beta_{LS} : = \underset{\beta}{\text{argmin}} \sum_{i} r^2_i$
* Least absolute deviation (LAD) : $\beta_{LAD} : = \underset{\beta}{\text{argmin}} \sum_{i} \lvert r_{i} \rvert$
#### Least Median of Squares (LMS)
>$$\beta_{LMS} : = \underset{\beta}{\text{argmin}} (\text{median} \lvert r_{i} \rvert )$$

## Least quantile regression
Least Median of Squares 문제를 일반화한 Least Quantile of Square문제는 다음과 같이 정의할 수 있다. 여기서 $r_{q}$는 $q$번째 ordered absolute residual이다. 
#### Least Quantile of Squares (LQS)
>$$\beta_{LQS} : = \underset{\beta}{\text{argmin}} (\lvert r_{(q)} \rvert ), \quad 1 \le q \le n, \quad \lvert r_{1} \rvert \le \lvert r_{2} \rvert \le \cdots \le \lvert r_{n} \rvert$$

#### Key step in the formulation
이제 Least Quantile of Square문제를 Integer Programming으로 재정의해보자. 이때, $r$의 각 entry $i$에 대해 다음과 같은 binary variable을 사용한다.

>$ \lvert r_{i} \rvert \le \lvert r_{(q)} \rvert$ or $\lvert r_{i} \rvert \ge \lvert r_{(q)} \rvert $

#### Integer programming formulation
$\bar{\mu_{i}}$와 $\mu_{i}$은 threshold로 각각의 개수는 $k$개, $n-k$개이다.
>
\begin{align}
    \min\_{\beta, \mu, \bar{\mu}, z, \gamma} & \quad {\gamma} \\\\
    \text{subject to} & \quad  \gamma \le \lvert r_{i} \rvert + \bar{\mu_{i}}, \quad i = 1, ..., n \\\\
    & \quad  \gamma \le \lvert r_{i} \rvert -  \mu_{i}, \quad i = 1, ..., n \\\\
    & \quad  \bar{\mu_{i}} \le M \cdot z_{i}, \quad i = 1, ..., n \\\\
    & \quad   \mu_{i} \le M \cdot (1-z_{i}), \quad i = 1, ..., n \\\\
    & \quad   \sum^{p}\_{i=1} z_{i} = q \\\\
    & \quad   \mu_{i}, \bar{\mu_{i}} \ge 0, \quad i = 1, ..., n \\\\
    & \quad   z_{i} \in \\{0, 1\\},  \quad i = 1, ..., n \\\\
\end{align}

이 문제에서 첫번째와 두번쨰 제약조건을 보면 residual의 절대값 $\lvert r_{i} \rvert$이 포함되어 있어서 convex relaxation으로 풀 수가 없다. 따라서, 첫번째와 두번쨰 제약조건을 convex function으로 변환해 주어야 한다.


## First-order algorithm
$\lvert r_{i} \rvert$는 다음과 같은 형태로 convex function $H_{q}(\beta)$로 재정의할 수 있다. 
>
$$ \lvert r_{q} \rvert = \lvert y_{(q)} - x^{T}\_{(q)} \beta \rvert = H_{q}(\beta) - H_{q+1}(\beta)$$

이때 $H_{q}(\beta)$는 다음과 같이 정의된다.
>
\begin{align}
H_{q}(\beta) = \sum^{n}\_{i=q} \lvert y_{(i)} - x^{T}\_{(i)} \beta \rvert  = &
\max_{w} \sum^{n}\_{i=1} w_i \lvert y_{(i)} - x^{T}\_{(i)} \beta \rvert \\\\
 & \text{subject to} \sum^{n}\_{i=1}  w_i  = n − q + 1 \\\\
 &0 \le w_i \le 1, i = 1, ..., n \\\\
\end{align}
$H_{q}(\beta)$는 앞서 정의된 $\lvert r_{i} \rvert$을 작은것부터 큰 순으로 나열할 때, $q$번째 이상의 모든 residual의 합이다. 따라서, $q$번째 이상의 residual의 합에서 $q+1$번째 이상의 residual의 합을 빼면 $q$번째의 residual 된다는 것을 알 수 있다.

Subgradient 알고리즘으로 $H_{q}(\beta) - H_{q+1}(\beta)$의 local minimum을 구할 수 있다.

* 자세한 내용은 논문 [LEAST QUANTILE REGRESSION VIA MODERN OPTIMIZATION](https://arxiv.org/pdf/1310.8625.pdf) 참조
## Computational results
위의 논문에서  Least Quantile of Square문제를 실험한 결과는 다음 그래프에서 볼 수 있다.

#### Mixed integer programming gap
![](https://wikidocs.net/images/page/23721/09.01_06_LQS_results1.PNG) <br>
**[Fig1] Mixed integer programming gap [3]**<br>

#### Cold vs Warm Starts
![](https://wikidocs.net/images/page/23721/09.01_07_LQS_results2.PNG)<br>
**[Fig2] Cold vs Warm Starts  [3]**<br>
