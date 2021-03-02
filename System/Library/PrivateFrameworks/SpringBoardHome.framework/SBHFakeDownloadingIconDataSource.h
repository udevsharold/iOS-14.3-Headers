/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBDownloadingIconDataSource.h>

@class NSString;

@interface SBHFakeDownloadingIconDataSource : NSObject <SBDownloadingIconDataSource> {

	BOOL isCancelable;
	BOOL isCloudDemoted;
	BOOL isPausable;
	BOOL isPrioritizable;
	BOOL _isPaused;
	NSString* _applicationBundleID;
	NSString* _applicationDisplayName;
	double _progress;

}

@property (nonatomic,copy) NSString * applicationBundleID;                                  //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,copy) NSString * applicationDisplayName;                               //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
@property (assign,nonatomic) double progress;                                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL isCloudDemoted; 
@property (assign,nonatomic) BOOL isPrioritizable; 
@property (assign,nonatomic) BOOL isPausable; 
@property (assign,nonatomic) BOOL isCancelable; 
@property (assign,nonatomic) BOOL isPaused;                                                 //@synthesize isPaused=_isPaused - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isWaiting,nonatomic,readonly) BOOL waiting; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (getter=isPausable,nonatomic,readonly) BOOL pausable; 
@property (getter=isFailed,nonatomic,readonly) BOOL failed; 
@property (getter=isCancelable,nonatomic,readonly) BOOL cancelable; 
@property (getter=isInstalling,nonatomic,readonly) BOOL installing; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (getter=isPrioritizable,nonatomic,readonly) BOOL prioritizable; 
@property (getter=isCloudDemoted,nonatomic,readonly) BOOL cloudDemoted; 
@property (nonatomic,readonly) Class iconClass; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSString * configurationStorageIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPausable;
-(BOOL)prioritize;
-(BOOL)isPrioritizable;
-(void)setIsPaused:(BOOL)arg1 ;
-(BOOL)isFailed;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2 ;
-(BOOL)pause;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(NSString *)applicationBundleID;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(BOOL)isInstalling;
-(BOOL)isWaiting;
-(void)setIsCancelable:(BOOL)arg1 ;
-(BOOL)isPaused;
-(BOOL)cancel;
-(BOOL)isCloudDemoted;
-(void)setProgress:(double)arg1 ;
-(BOOL)isActive;
-(BOOL)isDownloading;
-(double)progress;
-(BOOL)isCancelable;
-(long long)progressStateForIcon:(id)arg1 ;
-(double)progressPercentForIcon:(id)arg1 ;
-(NSString *)applicationDisplayName;
-(void)setIsPausable:(BOOL)arg1 ;
-(void)setIsCloudDemoted:(BOOL)arg1 ;
-(void)setIsPrioritizable:(BOOL)arg1 ;
-(void)setApplicationDisplayName:(NSString *)arg1 ;
-(BOOL)resume;
@end
