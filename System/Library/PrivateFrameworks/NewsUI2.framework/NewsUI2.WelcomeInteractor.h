/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSWelcomeDataManagerTypeDelegate.h>
#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>

@interface NewsUI2.WelcomeInteractor : NSObject <TSWelcomeDataManagerTypeDelegate, FCNetworkReachabilityObserving, FCAppActivityObserving> {

	 delegate;
	 dataManager;
	??? userTypePromise;
	??? feedLoadedPromise;
	??? minimumTimePromise;
	??? maximumTimePromise;
	??? isCloudKitReachablePromise;
	 minimumTimer;
	 maximumTimer;
	 appActivityMonitor;
	 networkReachability;

}
-(void)activityObservingApplicationDidBecomeActive;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(void)dataManagerFeedPrepared:(id)arg1 ;
-(void)dataManager:(id)arg1 userType:(long long)arg2 ;
-(void)dataManager:(id)arg1 error:(long long)arg2 ;
-(id)init;
@end

