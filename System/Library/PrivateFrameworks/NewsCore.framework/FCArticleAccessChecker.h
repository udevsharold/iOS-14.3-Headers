/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCMultiAccessChecker.h>

@protocol FCPaidAccessCheckerType;
@class FCPrivateChannelMembershipController;

@interface FCArticleAccessChecker : FCMultiAccessChecker {

	id<FCPaidAccessCheckerType> _paidAccessChecker;
	FCPrivateChannelMembershipController* _privateChannelMembershipController;

}

@property (nonatomic,readonly) id<FCPaidAccessCheckerType> paidAccessChecker;                                          //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController;              //@synthesize privateChannelMembershipController=_privateChannelMembershipController - In the implementation block
-(id)init;
-(id)initWithPaidAccessChecker:(id)arg1 privateChannelMembershipController:(id)arg2 ;
-(id)initWithAccessCheckers:(id)arg1 ;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
@end
