/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface CCVegaTransactionMainThreadOperation : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	/*^block*/id _block;

}
-(id)init;
-(void)cancel;
-(void)runBlock;
-(void)waitForBlockReady;
-(void)provideBlock:(/*^block*/id)arg1 ;
@end

