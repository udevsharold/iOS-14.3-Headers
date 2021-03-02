/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDictionary, NSString;

@interface BSServiceSpecification : NSObject <NSCopying, BSDescriptionProviding> {

	NSDictionary* _options;
	BOOL _derived;
	NSString* _identifier;
	NSDictionary* _configuration;

}

@property (nonatomic,copy,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (getter=isHiddenAtLaunch,nonatomic,readonly) BOOL hiddenAtLaunch; 
@property (getter=isDerived,nonatomic,readonly) BOOL derived;                            //@synthesize derived=_derived - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDerived;
-(id)init;
-(BOOL)isHiddenAtLaunch;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(id)optionForKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
