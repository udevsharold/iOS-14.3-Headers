/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXPhoenixDataCollectionManagerDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface AXPhoenixDataCollectionManager : NSObject {

	BOOL _isRunning;
	long long _packagesRemaining;
	id<AXPhoenixDataCollectionManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _uploadErrorMessage;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * uploadErrorMessage;                                             //@synthesize uploadErrorMessage=_uploadErrorMessage - In the implementation block
@property (assign,nonatomic) BOOL isRunning;                                                          //@synthesize isRunning=_isRunning - In the implementation block
@property (assign,nonatomic) long long packagesRemaining;                                             //@synthesize packagesRemaining=_packagesRemaining - In the implementation block
@property (assign,nonatomic,__weak) id<AXPhoenixDataCollectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(BOOL)isRunning;
-(void)setIsRunning:(BOOL)arg1 ;
-(id)init;
-(void)start;
-(void)setDelegate:(id<AXPhoenixDataCollectionManagerDelegate>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)stop;
-(id<AXPhoenixDataCollectionManagerDelegate>)delegate;
-(void)updateUploadStatus:(long long)arg1 error:(id)arg2 ;
-(void)reportFalsePositive:(id)arg1 ;
-(void)setPackagesRemaining:(long long)arg1 ;
-(void)timerTick;
-(void)uploadPackages;
-(long long)packagesRemaining;
-(void)setUploadErrorMessage:(NSString *)arg1 ;
-(NSString *)uploadErrorMessage;
@end

