/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCReachabilityDelegate.h>

@class NSString;

@interface BRCReachabilityObserver : NSObject <BRCReachabilityDelegate> {

	/*^block*/id _networkReachabilityDidChangeHandler;

}

@property (nonatomic,copy) id networkReachabilityDidChangeHandler;              //@synthesize networkReachabilityDidChangeHandler=_networkReachabilityDidChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopObservingNetworkReachabilityChanges;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(void)startObservingNetworkReachabilityChanges;
-(id)networkReachabilityDidChangeHandler;
-(void)setNetworkReachabilityDidChangeHandler:(id)arg1 ;
@end

