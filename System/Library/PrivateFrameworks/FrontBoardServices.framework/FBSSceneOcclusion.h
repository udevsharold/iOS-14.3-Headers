/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface FBSSceneOcclusion : NSObject <BSXPCCoding, BSDescriptionProviding> {

	CGRect _rect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)occlusionWithRect:(CGRect)arg1 ;
+(id)fullOcclusion;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGRect)CGRect;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(id)_initWithCGRect:(CGRect)arg1 ;
-(BOOL)isEqualToOcclusion:(id)arg1 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

