/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/NetDiagnosticProbe.h>

@protocol OS_dispatch_source;
@class NSMutableArray, NSObject, NSString;

@interface TCPDumpProbe : NetDiagnosticProbe {

	NSMutableArray* _probeOutputFilePaths;
	NSObject*<OS_dispatch_source> _tcpDumpTimer;
	/*^block*/id _tcpDumpCompletedBlock;
	double _duration;
	NSString* _destinationPath;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> tcpDumpTimer;              //@synthesize tcpDumpTimer=_tcpDumpTimer - In the implementation block
@property (assign,nonatomic) id tcpDumpCompletedBlock;                                //@synthesize tcpDumpCompletedBlock=_tcpDumpCompletedBlock - In the implementation block
@property (assign) double duration;                                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * destinationPath;                              //@synthesize destinationPath=_destinationPath - In the implementation block
-(void)stopTest;
-(id)initWithQueue:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
-(NSString *)destinationPath;
-(double)duration;
-(BOOL)startNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(BOOL)stopNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(void)setTcpDumpTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)tcpDumpTimer;
-(void)startTCPDumpWithDuration:(double)arg1 destinationPath:(id)arg2 tcpDumpStarted:(/*^block*/id)arg3 tcpDumpCompleted:(/*^block*/id)arg4 ;
-(id)probeOutputFilePaths;
-(id)tcpDumpCompletedBlock;
-(void)setTcpDumpCompletedBlock:(id)arg1 ;
@end
