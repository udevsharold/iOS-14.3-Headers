/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CIBurstImageSet, NSString;

@interface CAMBurstSession : NSObject {

	BOOL _finalized;
	unsigned long long _estimatedCount;
	unsigned long long _count;
	CIBurstImageSet* __burstImageSet;

}

@property (assign,setter=_setEstimatedCount:,nonatomic) unsigned long long estimatedCount;              //@synthesize estimatedCount=_estimatedCount - In the implementation block
@property (assign,setter=_setCount:,nonatomic) unsigned long long count;                                //@synthesize count=_count - In the implementation block
@property (assign,setter=_setFinalized:,getter=_isFinalized,nonatomic) BOOL finalized;                  //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,readonly) CIBurstImageSet * _burstImageSet;                                        //@synthesize _burstImageSet=__burstImageSet - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
-(id)init;
-(void)_setCount:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(id)description;
-(unsigned long long)count;
-(unsigned long long)estimatedCount;
-(BOOL)_isFinalized;
-(id)performBurstAnalysisForDevice:(long long)arg1 ;
-(void)addStillImageCaptureResult:(id)arg1 ;
-(void)addStillImageLocalPersistenceResult:(id)arg1 withFaces:(id)arg2 ;
-(CIBurstImageSet *)_burstImageSet;
-(void)_setEstimatedCount:(unsigned long long)arg1 ;
-(void)_setFinalized:(BOOL)arg1 ;
@end
