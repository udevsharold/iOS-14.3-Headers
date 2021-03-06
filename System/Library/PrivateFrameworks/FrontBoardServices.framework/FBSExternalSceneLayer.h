/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneLayer.h>

@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer {

	NSString* _sceneID;

}

@property (nonatomic,copy,readonly) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)alignment;
-(unsigned long long)hash;
-(id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2 sceneID:(id)arg3 ;
-(id)description;
-(NSString *)sceneID;
-(id)initWithExternalSceneID:(id)arg1 level:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithExternalSceneID:(id)arg1 trackingContext:(id)arg2 ;
-(id)_succinctDescription;
-(BOOL)isExternalSceneLayer;
@end

