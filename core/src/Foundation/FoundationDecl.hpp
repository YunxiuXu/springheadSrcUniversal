#define SPR_DECLMEMBEROF_UTCMAESOptimizerDesc \
protected:\
	double	stopMaxFunEvals;	\
	double	facmaxeval;	\
	double	stopMaxIter;	\
	double	stopTolFun;	\
	double	stopTolFunHist;	\
	double	stopTolX;	\
	double	stopTolUpXFactor;	\
	int	lambda;	\
	int	mu;	\
	double	mucov;	\
	double	mueff;	\
	std::vector< double >	weights;	\
	double	damps;	\
	double	cs;	\
	double	ccumcov;	\
	double	ccov;	\
	double	diagonalCov;	\
	double	facupdateCmode;	\
	enum Spr::UTCMAESOptimizerDesc::Weights	weightMode;	\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		stopMaxFunEvals = ((UTCMAESOptimizerDesc*)ptr)->stopMaxFunEvals;	\
		facmaxeval = ((UTCMAESOptimizerDesc*)ptr)->facmaxeval;	\
		stopMaxIter = ((UTCMAESOptimizerDesc*)ptr)->stopMaxIter;	\
		stopTolFun = ((UTCMAESOptimizerDesc*)ptr)->stopTolFun;	\
		stopTolFunHist = ((UTCMAESOptimizerDesc*)ptr)->stopTolFunHist;	\
		stopTolX = ((UTCMAESOptimizerDesc*)ptr)->stopTolX;	\
		stopTolUpXFactor = ((UTCMAESOptimizerDesc*)ptr)->stopTolUpXFactor;	\
		lambda = ((UTCMAESOptimizerDesc*)ptr)->lambda;	\
		mu = ((UTCMAESOptimizerDesc*)ptr)->mu;	\
		mucov = ((UTCMAESOptimizerDesc*)ptr)->mucov;	\
		mueff = ((UTCMAESOptimizerDesc*)ptr)->mueff;	\
		weights = ((UTCMAESOptimizerDesc*)ptr)->weights;	\
		damps = ((UTCMAESOptimizerDesc*)ptr)->damps;	\
		cs = ((UTCMAESOptimizerDesc*)ptr)->cs;	\
		ccumcov = ((UTCMAESOptimizerDesc*)ptr)->ccumcov;	\
		ccov = ((UTCMAESOptimizerDesc*)ptr)->ccov;	\
		diagonalCov = ((UTCMAESOptimizerDesc*)ptr)->diagonalCov;	\
		facupdateCmode = ((UTCMAESOptimizerDesc*)ptr)->facupdateCmode;	\
		weightMode = ((UTCMAESOptimizerDesc*)ptr)->weightMode;	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		((UTCMAESOptimizerDesc*)ptr)->stopMaxFunEvals = stopMaxFunEvals;	\
		((UTCMAESOptimizerDesc*)ptr)->facmaxeval = facmaxeval;	\
		((UTCMAESOptimizerDesc*)ptr)->stopMaxIter = stopMaxIter;	\
		((UTCMAESOptimizerDesc*)ptr)->stopTolFun = stopTolFun;	\
		((UTCMAESOptimizerDesc*)ptr)->stopTolFunHist = stopTolFunHist;	\
		((UTCMAESOptimizerDesc*)ptr)->stopTolX = stopTolX;	\
		((UTCMAESOptimizerDesc*)ptr)->stopTolUpXFactor = stopTolUpXFactor;	\
		((UTCMAESOptimizerDesc*)ptr)->lambda = lambda;	\
		((UTCMAESOptimizerDesc*)ptr)->mu = mu;	\
		((UTCMAESOptimizerDesc*)ptr)->mucov = mucov;	\
		((UTCMAESOptimizerDesc*)ptr)->mueff = mueff;	\
		((UTCMAESOptimizerDesc*)ptr)->weights = weights;	\
		((UTCMAESOptimizerDesc*)ptr)->damps = damps;	\
		((UTCMAESOptimizerDesc*)ptr)->cs = cs;	\
		((UTCMAESOptimizerDesc*)ptr)->ccumcov = ccumcov;	\
		((UTCMAESOptimizerDesc*)ptr)->ccov = ccov;	\
		((UTCMAESOptimizerDesc*)ptr)->diagonalCov = diagonalCov;	\
		((UTCMAESOptimizerDesc*)ptr)->facupdateCmode = facupdateCmode;	\
		((UTCMAESOptimizerDesc*)ptr)->weightMode = weightMode;	\
		return true;	\
	}\

