/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/FMFSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDFMFRequest, NSMutableArray, HMDFMF, NSString;

@interface HMDFMFHandler : HMFObject <FMFSessionDelegate, HMFLogging, HMFTimerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDFMFRequest* _currentFMFRequest;
	NSMutableArray* _queries;
	HMDFMF* _fmfStatus;

}

@property (nonatomic,retain) HMDFMF * fmfStatus;                                    //@synthesize fmfStatus=_fmfStatus - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMDFMFRequest * currentFMFRequest;                     //@synthesize currentFMFRequest=_currentFMFRequest - In the implementation block
@property (nonatomic,retain) NSMutableArray * queries;                              //@synthesize queries=_queries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedHandler;
-(NSMutableArray *)queries;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)timerDidFire:(id)arg1 ;
-(void)sendNotification;
-(void)setQueries:(NSMutableArray *)arg1 ;
-(void)queryFMFStatusWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)homeDataLoaded:(id)arg1 ;
-(void)_initiateFMFRequest;
-(HMDFMFRequest *)currentFMFRequest;
-(void)_processDevices:(id)arg1 error:(id)arg2 ;
-(void)setCurrentFMFRequest:(HMDFMFRequest *)arg1 ;
-(HMDFMF *)fmfStatus;
-(void)_respondToPendingRequests:(id)arg1 ;
-(unsigned long long)_computeFMFStatus:(id)arg1 ;
-(void)setFmfStatus:(HMDFMF *)arg1 ;
-(void)meDeviceChanged;
-(void)fmfDevicesChanged;
@end
