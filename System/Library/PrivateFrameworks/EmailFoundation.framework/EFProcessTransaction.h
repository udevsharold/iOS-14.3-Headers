/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSObject;

@interface EFProcessTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;

}
+(id)log;
+(id)transactionWithDescription:(id)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(BOOL)extend;
-(id)description;
-(void)invalidate;
@end

