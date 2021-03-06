/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VUIFeatureFlag : NSObject {

	BOOL _enabled;
	BOOL _isAvailableForOS;
	BOOL _isEnabledByDefault;
	NSString* _featureName;
	NSString* _featureDescription;
	NSString* _defaultsKey;
	NSString* _defaultsDomain;
	NSString* _isEnabledByDefaultKey;

}

@property (nonatomic,readonly) NSString * defaultsDomain;                   //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,retain) NSString * isEnabledByDefaultKey;              //@synthesize isEnabledByDefaultKey=_isEnabledByDefaultKey - In the implementation block
@property (nonatomic,readonly) NSString * featureName;                      //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,readonly) NSString * featureDescription;               //@synthesize featureDescription=_featureDescription - In the implementation block
@property (nonatomic,readonly) NSString * defaultsKey;                      //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,readonly) BOOL isAvailableForOS;                       //@synthesize isAvailableForOS=_isAvailableForOS - In the implementation block
@property (nonatomic,readonly) BOOL isEnabledByDefault;                     //@synthesize isEnabledByDefault=_isEnabledByDefault - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
-(NSString *)featureDescription;
-(BOOL)enabled;
-(NSString *)defaultsKey;
-(BOOL)isEnabledByDefault;
-(NSString *)featureName;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)defaultsDomain;
-(id)initWithFeatureDict:(id)arg1 ;
-(BOOL)isAvailableForOS;
-(NSString *)isEnabledByDefaultKey;
-(BOOL)_enabledFromDefaults;
-(void)setIsEnabledByDefaultKey:(NSString *)arg1 ;
@end

