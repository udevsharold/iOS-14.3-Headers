/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, NSString;

@interface SBFAuthenticationAssertionTracker : NSObject <BSDescriptionProviding> {

	MKBAssertionRef _mkbAssertion;
	NSHashTable* _assertions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mkbAssertionOptions;
-(id)init;
-(BOOL)hasActiveAssertions;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)dealloc;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)addAssertion:(id)arg1 ;
-(NSString *)description;
-(void)removeAssertion:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isAssertionValid:(id)arg1 ;
@end
