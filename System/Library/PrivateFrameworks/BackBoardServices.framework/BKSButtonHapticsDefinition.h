/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BSMutableSettings, BSSettings;

@interface BKSButtonHapticsDefinition : NSObject <NSSecureCoding> {

	BSMutableSettings* _settings;
	BOOL _representsHomeButton;

}

@property (assign,nonatomic) BOOL representsHomeButton;                                           //@synthesize representsHomeButton=_representsHomeButton - In the implementation block
@property (getter=_BSSettings,nonatomic,readonly) BSSettings * BSSettings;                        //@synthesize settings=_settings - In the implementation block
@property (getter=isLongPressEnabled,nonatomic,readonly) long long longPressEnabled; 
@property (assign,nonatomic) double minimumMultiplePressTimeInterval; 
@property (assign,nonatomic) double maximumMultiplePressTimeInterval; 
@property (assign,nonatomic) double minimumLongPressTimeInterval; 
@property (assign,nonatomic) double maximumLongPressTimeInterval; 
@property (assign,nonatomic) long long maximumPressCount; 
@property (assign,nonatomic) long long maximumTapCount; 
@property (assign,nonatomic) long long clickHapticAssetType; 
+(BOOL)supportsSecureCoding;
+(id)definitionForHomeButton;
-(id)_initWithBSSettings:(id)arg1 ;
-(long long)clickHapticAssetType;
-(id)init;
-(long long)maximumPressCount;
-(void)setClickHapticAssetType:(long long)arg1 ;
-(double)minimumMultiplePressTimeInterval;
-(id)_BSSettings;
-(void)setMaximumMultiplePressTimeInterval:(double)arg1 ;
-(void)setMaximumPressCount:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)maximumLongPressTimeInterval;
-(void)setMinimumMultiplePressTimeInterval:(double)arg1 ;
-(id)description;
-(double)minimumLongPressTimeInterval;
-(long long)isLongPressEnabled;
-(void)setMaximumLongPressTimeInterval:(double)arg1 ;
-(void)setMaximumTapCount:(long long)arg1 ;
-(void)setMinimumLongPressTimeInterval:(double)arg1 ;
-(BOOL)representsHomeButton;
-(double)maximumMultiplePressTimeInterval;
-(void)updateFromDefinition:(id)arg1 withChangeInspectorBlock:(/*^block*/id)arg2 ;
-(void)setRepresentsHomeButton:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)maximumTapCount;
@end
