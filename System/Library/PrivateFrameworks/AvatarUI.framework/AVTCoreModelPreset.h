/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, AVTPreset, NSString;

@interface AVTCoreModelPreset : NSObject {

	BOOL _defaultPreset;
	NSDictionary* _tags;
	AVTPreset* _preset;

}

@property (nonatomic,copy,readonly) NSDictionary * tags;                               //@synthesize tags=_tags - In the implementation block
@property (getter=isDefaultPreset,nonatomic,readonly) BOOL defaultPreset;              //@synthesize defaultPreset=_defaultPreset - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,readonly) AVTPreset * preset;                                     //@synthesize preset=_preset - In the implementation block
+(id)tagSetFromPreset:(id)arg1 ;
-(AVTPreset *)preset;
-(id)initWithPreset:(id)arg1 isDefaultPreset:(BOOL)arg2 ;
-(BOOL)isDefaultPreset;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPreset:(id)arg1 ;
-(NSDictionary *)tags;
-(NSString *)localizedName;
-(id)copyForPairedCategory:(long long)arg1 ;
@end

