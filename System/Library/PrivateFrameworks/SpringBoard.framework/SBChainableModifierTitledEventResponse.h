/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBChainableModifierEventResponse.h>

@class NSString;

@interface SBChainableModifierTitledEventResponse : SBChainableModifierEventResponse {

	NSString* _title;

}

@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
+(id)responseWithTitle:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)title;
@end

