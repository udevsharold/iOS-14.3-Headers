/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, AVTCoreModelPairing;

@interface AVTCoreModelCategory : NSObject {

	NSArray* _presets;
	NSDictionary* _tags;
	NSArray* _rows;
	long long _presetCategory;
	AVTCoreModelPairing* _pairing;

}

@property (nonatomic,copy,readonly) NSArray * presets;                          //@synthesize presets=_presets - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * tags;                        //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rows;                             //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) long long presetCategory;                        //@synthesize presetCategory=_presetCategory - In the implementation block
@property (nonatomic,copy,readonly) AVTCoreModelPairing * pairing;              //@synthesize pairing=_pairing - In the implementation block
-(NSArray *)rows;
-(AVTCoreModelPairing *)pairing;
-(NSArray *)presets;
-(id)initWithPresetCategory:(long long)arg1 presets:(id)arg2 tags:(id)arg3 rows:(id)arg4 pairing:(id)arg5 ;
-(long long)presetCategory;
-(id)description;
-(NSDictionary *)tags;
@end

