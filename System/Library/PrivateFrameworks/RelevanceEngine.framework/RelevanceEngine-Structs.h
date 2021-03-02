/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_RE2;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

typedef struct _CFHTTPServerResponse* CFHTTPServerResponseRef;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true> > __p3_;
} hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short> > >;

typedef struct unordered_map<std::__1::basic_string<char>, unsigned short, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short> > > {
	hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short> > > __table_;
} unordered_map<std::__1::basic_string<char>, unsigned short, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short> > >;

typedef struct REFancyShrinkingDictionary {
	unordered_map<std::__1::basic_string<char>, unsigned short, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short> > > m_mapDocumentFrequency;
	unsigned long long m_maxSize;
	unsigned long long m_shrinkSize;
	int m_nVersion;
	BOOL m_trimTop;
	BOOL m_shinksOnTotalCount;
} REFancyShrinkingDictionary;

typedef struct REContentFeatureExtractor {
	opaque_pthread_rwlock_t m_rwlock;
	REFancyShrinkingDictionary m_trueTopTokens;
	REFancyShrinkingDictionary m_falseTopTokens;
} REContentFeatureExtractor;

typedef struct {
	unsigned implementsProvideAvailableEngines : 1;
	unsigned implementsHandleFileRequest : 1;
} SCD_Struct_RE18;

typedef struct __CFArray* CFArrayRef;

typedef struct _CFHTTPServerRequest* CFHTTPServerRequestRef;

typedef struct __CFBag* CFBagRef;

typedef struct CGImage* CGImageRef;

typedef struct _CFHTTPServerConnection* CFHTTPServerConnectionRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_RE24;

typedef struct __CFBinaryHeap* CFBinaryHeapRef;

typedef struct {
	unsigned implementsPerformBatchUpdate : 1;
	unsigned implementsReloadElement : 1;
	unsigned implementsRemoveElement : 1;
	unsigned implementsInsertElement : 1;
	unsigned implementsMoveElement : 1;
	unsigned implementsElementIsVisible : 1;
	unsigned implementsRelevanceUpdate : 1;
	unsigned implementsRelevanceUpdateBegan : 1;
	unsigned implementsRelevanceUpdateFinished : 1;
} SCD_Struct_RE26;

typedef struct _compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > {
	unsigned long long __value_;
} compressed_pair<unsigned long *, std::__1::allocator<unsigned long> >;

typedef struct vector<unsigned long, std::__1::allocator<unsigned long> > {
	unsigned long long __begin_;
	unsigned long long __end_;
	compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > __end_cap_;
} vector<unsigned long, std::__1::allocator<unsigned long> >;

typedef struct {
	unsigned implementsBeginActivity : 1;
	unsigned implementsEndActivity : 1;
	unsigned implementsBeginActivityForObject : 1;
	unsigned implementsEndActivityForObject : 1;
} SCD_Struct_RE29;

typedef struct _CFHTTPServer* CFHTTPServerRef;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true> >;

typedef struct Gaussian {
	double m_dPrecision;
	double m_dPredicionMean;
} Gaussian;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned long long, Gaussian>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, Gaussian> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned long long, Gaussian>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, Gaussian> > >;

typedef struct unordered_map<unsigned long long, Gaussian, BayesianModel::SuperHasher, BayesianModel::SuperHasher, std::__1::allocator<std::__1::pair<const unsigned long long, Gaussian> > > {
	hash_table<std::__1::__hash_value_type<unsigned long long, Gaussian>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, Gaussian> > > __table_;
} unordered_map<unsigned long long, Gaussian, BayesianModel::SuperHasher, BayesianModel::SuperHasher, std::__1::allocator<std::__1::pair<const unsigned long long, Gaussian> > >;

typedef struct BayesianModel {
	opaque_pthread_rwlock_t m_rwlock;
	unordered_map<unsigned long long, Gaussian, BayesianModel::SuperHasher, BayesianModel::SuperHasher, std::__1::allocator<std::__1::pair<const unsigned long long, Gaussian> > > m_features;
	int m_nFeaturesCount;
	unsigned long long m_nTotalTrue;
	unsigned long long m_nTotalExamples;
	double m_dSumPredictions;
	double m_dLogScore;
	double m_dNormalizedLogScore;
	double m_dEpsilon;
	int m_nModelVersion;
	unsigned long long m_nCalibrationCurveTrue[10];
	unsigned long long m_nCalibrationCurveCount[10];
	unsigned long long m_maxFeatureCoordinates;
	unsigned long long m_nNumberOfTraining;
	Gaussian m_empty;
} BayesianModel;
