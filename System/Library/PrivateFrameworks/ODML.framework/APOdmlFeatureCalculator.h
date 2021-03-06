/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ODML.framework/ODML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue_global;
@class NSString, NSURL, APOdmlXpcLifecycleHandler, NSDate, NSObject, ADOdmlAssetManager;

@interface APOdmlFeatureCalculator : NSObject {

	BOOL _operationInProgress;
	NSString* _version;
	NSURL* _assetPath;
	APOdmlXpcLifecycleHandler* _task;
	NSDate* _creationTime;
	NSObject*<OS_dispatch_queue_global> _assetQueue;
	ADOdmlAssetManager* _assetManager;

}

@property (nonatomic,retain) NSString * version;                                          //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSURL * assetPath;                                           //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,retain) APOdmlXpcLifecycleHandler * task;                            //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSDate * creationTime;                                       //@synthesize creationTime=_creationTime - In the implementation block
@property (assign) BOOL operationInProgress;                                              //@synthesize operationInProgress=_operationInProgress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue_global> assetQueue;              //@synthesize assetQueue=_assetQueue - In the implementation block
@property (nonatomic,retain) ADOdmlAssetManager * assetManager;                           //@synthesize assetManager=_assetManager - In the implementation block
-(NSDate *)creationTime;
-(ADOdmlAssetManager *)assetManager;
-(void)setAssetManager:(ADOdmlAssetManager *)arg1 ;
-(void)setTask:(APOdmlXpcLifecycleHandler *)arg1 ;
-(id)initWithActivity:(id)arg1 ;
-(void)setCreationTime:(NSDate *)arg1 ;
-(NSString *)version;
-(APOdmlXpcLifecycleHandler *)task;
-(NSURL *)assetPath;
-(void)setVersion:(NSString *)arg1 ;
-(void)setAssetPath:(NSURL *)arg1 ;
-(void)createAppUsageVectors:(/*^block*/id)arg1 ;
-(BOOL)operationInProgress;
-(void)setOperationInProgress:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue_global>)assetQueue;
-(void)setAssetQueue:(NSObject*<OS_dispatch_queue_global>)arg1 ;
@end

