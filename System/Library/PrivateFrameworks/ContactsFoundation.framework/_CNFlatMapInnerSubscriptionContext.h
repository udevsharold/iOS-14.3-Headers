/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNCancelable;
@class CNSuspendableSchedulerDecorator;

@interface _CNFlatMapInnerSubscriptionContext : NSObject {

	CNSuspendableSchedulerDecorator* _decorator;
	id<CNCancelable> _token;

}

@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * decorator;              //@synthesize decorator=_decorator - In the implementation block
@property (nonatomic,readonly) id<CNCancelable> token;                                   //@synthesize token=_token - In the implementation block
-(CNSuspendableSchedulerDecorator *)decorator;
-(id)initWithDecorator:(id)arg1 token:(id)arg2 ;
-(id<CNCancelable>)token;
@end

