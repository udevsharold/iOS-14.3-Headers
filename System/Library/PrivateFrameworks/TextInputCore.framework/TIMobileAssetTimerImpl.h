/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface TIMobileAssetTimerImpl : NSObject {

	/*^block*/id _expirationHandler;
	NSTimer* _assetTimer;

}
+(id)nextFireDateForDate:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 ;
-(void)assetTimerFired;
-(void)updateAssetTimer;
@end

