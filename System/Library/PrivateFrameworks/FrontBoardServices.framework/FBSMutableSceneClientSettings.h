/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneClientSettings.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSOrderedSet, NSString, FBSSceneIdentityToken;

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings <BSDebugDescriptionProviding, BSXPCSecureCoding>

@property (setter=_setLayers:,nonatomic,copy) NSOrderedSet * layers; 
@property (assign,nonatomic) double preferredLevel; 
@property (assign,nonatomic) long long preferredInterfaceOrientation; 
@property (nonatomic,copy) NSString * preferredSceneHostIdentifier; 
@property (nonatomic,copy) FBSSceneIdentityToken * preferredSceneHostIdentity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isMutable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setLayers:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setPreferredLevel:(double)arg1 ;
-(void)setPreferredSceneHostIdentifier:(NSString *)arg1 ;
-(void)setPreferredSceneHostIdentity:(FBSSceneIdentityToken *)arg1 ;
-(void)setPreferredInterfaceOrientation:(long long)arg1 ;
-(id)otherSettings;
@end

