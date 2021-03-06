/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, JFXEffect;

@interface CFXEffect : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _localizedTitle;
	JFXEffect* _jtEffect;

}

@property (nonatomic,readonly) BOOL isNone; 
@property (nonatomic,retain) JFXEffect * jtEffect;                          //@synthesize jtEffect=_jtEffect - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(void)setupFactoryDelegate;
+(void)initEffectRegistry;
+(id)effectIdentifiersForEffectType:(id)arg1 ;
+(void)preWarmShaderCache;
+(id)effectWithIdentifier:(id)arg1 forEffectType:(id)arg2 ;
+(id)effectWithJTEffect:(id)arg1 ;
-(NSString *)localizedTitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isNone;
-(JFXEffect *)jtEffect;
-(id)initWithJTEffect:(id)arg1 ;
-(void)setJtEffect:(JFXEffect *)arg1 ;
@end

