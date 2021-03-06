/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, VMUProcessDescription, NSMapTable, NSConditionLock, NSMutableArray, NSMutableDictionary;

@interface VMUSampler : NSObject {

	unsigned long long _options;
	int _pid;
	unsigned _task;
	BOOL _needTaskPortDealloc;
	BOOL _recordThreadStates;
	BOOL _sampling;
	unsigned _numberOfCopiedBacktraces;
	NSString* _processName;
	VMUProcessDescription* _processDescription;
	CSTypeRef _symbolicator;
	unsigned _suspensionToken;
	sampling_context_tRef _samplingContext;
	NSMapTable* _lastThreadBacktraceMap;
	unsigned* _previousThreadList;
	unsigned _mainThread;
	unsigned _previousThreadCount;
	unsigned _maxPreviousThreadCount;
	double _tbRate;
	double _tbInterval;
	NSConditionLock* _stateLock;
	double _interval;
	double _timeLimit;
	unsigned _sampleLimit;
	unsigned _numberOfSamples;
	NSMutableArray* _samples;
	BOOL _stacksFixed;
	id _delegate;
	double _timeSpentSampling;
	unsigned _dispatchThreadSoftLimit;
	unsigned _dispatchThreadSoftLimitCount;
	unsigned _dispatchThreadHardLimit;
	unsigned _dispatchThreadHardLimitCount;
	NSMutableDictionary* _threadPortToNameMap;
	NSMutableDictionary* _dispatchQueueSerialNumToNameMap;

}
+(void)initialize;
+(id)sampleAllThreadsOfPID:(int)arg1 ;
+(id)sampleAllThreadsOfTask:(unsigned)arg1 ;
+(id)sampleAllThreadsOfTask:(unsigned)arg1 symbolicate:(BOOL)arg2 ;
-(id)initWithPID:(int)arg1 ;
-(id)samples;
-(id)outputString;
-(void)setSamplingInterval:(double)arg1 ;
-(double)timeLimit;
-(double)samplingInterval;
-(id)initWithTask:(unsigned)arg1 ;
-(void)writeOutput:(id)arg1 append:(BOOL)arg2 ;
-(id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(BOOL*)arg2 returnedThreadId:(unsigned long long*)arg3 ;
-(id)initWithPID:(int)arg1 orTask:(unsigned)arg2 options:(unsigned long long)arg3 ;
-(void)setSampleLimit:(unsigned)arg1 ;
-(id)sampleAllThreadsOnceWithFramePointers:(BOOL)arg1 ;
-(int)pid;
-(void)dealloc;
-(id)threadNameForThread:(unsigned)arg1 ;
-(id)sampleAllThreadsOnce;
-(id)sampleThread:(unsigned)arg1 ;
-(void)_makeHighPriority;
-(unsigned)sampleCount;
-(id)initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned)arg4 recordFramePointers:(BOOL)arg5 clearMemoryCache:(BOOL)arg6 ;
-(id)initWithPID:(int)arg1 task:(unsigned)arg2 processName:(id)arg3 is64Bit:(BOOL)arg4 options:(unsigned long long)arg5 ;
-(void)sampleForDuration:(unsigned)arg1 interval:(unsigned)arg2 ;
-(void)setRecordThreadStates:(BOOL)arg1 ;
-(id)initWithPID:(int)arg1 options:(unsigned long long)arg2 ;
-(void)_checkDispatchThreadLimits;
-(void)flushData;
-(id)threadDescriptionStringForBacktrace:(id)arg1 returnedAddress:(unsigned long long*)arg2 ;
-(void)_runSamplingThread;
-(void)_fixupStacks:(id)arg1 ;
-(void)setTimeLimit:(double)arg1 ;
-(BOOL)start;
-(BOOL)waitUntilDone;
-(void)setDelegate:(id)arg1 ;
-(CSTypeRef)symbolicator;
-(id)threadNameForThread:(unsigned)arg1 returnedThreadId:(unsigned long long*)arg2 returnedDispatchQueueSerialNum:(unsigned long long*)arg3 ;
-(id)stopSamplingAndReturnCallNode;
-(void)stopSampling;
-(unsigned)sampleLimit;
-(void)preloadSymbols;
-(id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 ;
-(void)initializeSamplingContextWithOptions:(int)arg1 ;
-(void)forceStop;
-(void)_makeTimeshare;
-(unsigned)mainThread;
-(BOOL)stop;
-(id)delegate;
@end

