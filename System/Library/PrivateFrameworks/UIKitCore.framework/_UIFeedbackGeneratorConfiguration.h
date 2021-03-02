/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSString, NSArray;

@interface _UIFeedbackGeneratorConfiguration : NSObject <NSCopying> {

	BOOL _settingsEnabled;
	BOOL _setup;
	BOOL _enabled;
	NSSet* _usedFeedbacks;
	/*^block*/id _preparationBlock;
	Class _clientClass;
	NSString* _usage;
	long long _requiredSupportLevel;
	long long _activationStyle;
	long long _outputMode;
	NSString* __stats_key;

}

@property (nonatomic,copy) id preparationBlock;                           //@synthesize preparationBlock=_preparationBlock - In the implementation block
@property (nonatomic,copy) Class clientClass;                             //@synthesize clientClass=_clientClass - In the implementation block
@property (nonatomic,copy) NSString * usage;                              //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) long long requiredSupportLevel;              //@synthesize requiredSupportLevel=_requiredSupportLevel - In the implementation block
@property (assign,nonatomic) long long activationStyle;                   //@synthesize activationStyle=_activationStyle - In the implementation block
@property (assign,nonatomic) long long outputMode;                        //@synthesize outputMode=_outputMode - In the implementation block
@property (nonatomic,readonly) BOOL defaultEnabled; 
@property (assign,nonatomic) BOOL settingsEnabled;                        //@synthesize settingsEnabled=_settingsEnabled - In the implementation block
@property (assign,getter=isSetup,nonatomic) BOOL setup;                   //@synthesize setup=_setup - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * feedbackKeyPaths; 
@property (nonatomic,readonly) NSSet * usedFeedbacks;                     //@synthesize usedFeedbacks=_usedFeedbacks - In the implementation block
@property (nonatomic,readonly) NSString * descriptionKey; 
@property (nonatomic,copy) NSString * _stats_key;                         //@synthesize _stats_key=__stats_key - In the implementation block
+(id)defaultConfiguration;
+(id)_configurationWithKey:(id)arg1 requiredSupportLevel:(long long)arg2 preparationBlock:(/*^block*/id)arg3 ;
+(id)_configurationWithKey:(id)arg1 preparationBlock:(/*^block*/id)arg2 ;
+(id)_disabledConfiguration;
-(BOOL)isSetup;
-(NSString *)usage;
-(NSString *)_stats_key;
-(NSArray *)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEnabled;
-(void)dealloc;
-(void)_updateEnabled;
-(id)tweakedConfigurationForClass:(Class)arg1 usage:(id)arg2 ;
-(void)setSetup:(BOOL)arg1 ;
-(Class)clientClass;
-(id)description;
-(long long)outputMode;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)defaultEnabled;
-(BOOL)_setupIfNecessary;
-(long long)activationStyle;
-(id)_updateFeedbackForOutputMode:(id)arg1 ;
-(BOOL)_shouldEnable;
-(void)setRequiredSupportLevel:(long long)arg1 ;
-(NSString *)descriptionKey;
-(BOOL)settingsEnabled;
-(void)setActivationStyle:(long long)arg1 ;
-(void)setSettingsEnabled:(BOOL)arg1 ;
-(id)_updateFeedbacksForOutputMode:(id)arg1 ;
-(void)_preferencesUpdated:(id)arg1 ;
-(void)setPreparationBlock:(id)arg1 ;
-(void)setClientClass:(Class)arg1 ;
-(void)setUsage:(NSString *)arg1 ;
-(id)tweakedConfigurationForCaller:(id)arg1 usage:(id)arg2 ;
-(id)preparationBlock;
-(void)setEnabled:(BOOL)arg1 ;
-(NSSet *)usedFeedbacks;
-(void)setOutputMode:(long long)arg1 ;
-(void)set_stats_key:(NSString *)arg1 ;
@end
