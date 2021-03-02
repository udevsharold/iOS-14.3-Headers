/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSString, NSObject;

@interface ActivityTracker : NSObject {

	NSString* _description;
	NSObject*<OS_os_transaction> _transaction;
	/*^block*/id _activityUpdateBlock;

}

@property (copy) id activityUpdateBlock;              //@synthesize activityUpdateBlock=_activityUpdateBlock - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(void)setActivityUpdateBlock:(id)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(id)activityUpdateBlock;
@end
