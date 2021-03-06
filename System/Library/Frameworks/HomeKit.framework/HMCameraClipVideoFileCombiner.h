/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface HMCameraClipVideoFileCombiner : NSObject <HMFLogging> {

	NSArray* _videoFileURLs;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (copy,readonly) NSArray * videoFileURLs;                         //@synthesize videoFileURLs=_videoFileURLs - In the implementation block
@property (copy,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSArray *)videoFileURLs;
-(void)writeSamplesFromOutputs:(id)arg1 toInput:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithVideoFileURLs:(id)arg1 queue:(id)arg2 ;
-(void)combineToOutputFileURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

