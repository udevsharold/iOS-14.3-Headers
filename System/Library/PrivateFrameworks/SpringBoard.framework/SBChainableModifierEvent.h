/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBChainableModifierEvent : NSObject <BSDescriptionProviding, NSCopying> {

	BOOL _handled;
	NSString* _handledReason;

}

@property (getter=isHandled,nonatomic,readonly) BOOL handled;              //@synthesize handled=_handled - In the implementation block
@property (nonatomic,copy,readonly) NSString * handledReason;              //@synthesize handledReason=_handledReason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(id)loggingCategory;
-(id)unhandledCopy;
-(BOOL)isHandled;
-(NSString *)handledReason;
-(void)handleWithReason:(id)arg1 ;
@end

