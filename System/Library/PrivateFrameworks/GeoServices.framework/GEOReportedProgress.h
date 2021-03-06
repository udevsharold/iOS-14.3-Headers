/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class geo_isolater, NSProgress, NSString;

@interface GEOReportedProgress : NSObject {

	geo_isolater* _isolater;
	NSProgress* _progress;
	NSProgress* _internalProgress;
	/*^block*/id _cancellationHandler;

}

@property (copy) NSString * kind; 
@property (assign) long long totalUnitCount; 
@property (assign) long long completedUnitCount; 
@property (copy) id cancellationHandler; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (nonatomic,readonly) NSProgress * progress;                //@synthesize progress=_progress - In the implementation block
+(id)progressWithTotalUnitCount:(long long)arg1 ;
-(void)setCancellationHandler:(id)arg1 ;
-(long long)totalUnitCount;
-(void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2 ;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(long long)completedUnitCount;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(id)cancellationHandler;
-(id)initWithTotalUnitCount:(long long)arg1 ;
-(BOOL)isCancelled;
-(void)cancel;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setKind:(NSString *)arg1 ;
-(NSProgress *)progress;
-(NSString *)kind;
-(void)resignCurrent;
@end

