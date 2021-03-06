/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SeymourClient.framework/SeymourClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SMCCoreTelephonyClientDelegate.h>

@interface SeymourClient.CoreTelephonyObserver : NSObject <SMCCoreTelephonyClientDelegate> {

	 delegate;
	 isCellularDataEnabled;
	 isRoaming;
	 cellularData;
	 coreTelephonyClient;
	 queue;

}
-(void)cellularDataStateChangedWithCellularDataEnabled:(BOOL)arg1 ;
-(void)cellularDataStateChangedWithRoaming:(BOOL)arg1 ;
-(void)cellularDataStateChanged;
-(id)init;
@end

