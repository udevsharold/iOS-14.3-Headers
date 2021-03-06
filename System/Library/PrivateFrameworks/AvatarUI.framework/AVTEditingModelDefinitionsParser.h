/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AvatarUI/AvatarUI-Structs.h>
@class NSString, AVTUILogger, NSData, NSError, AVTEditingModelColors, NSDictionary;

@interface AVTEditingModelDefinitionsParser : NSObject {

	unsigned long long _platform;
	NSString* _platformDictionaryKey;
	AVTUILogger* _logger;
	NSData* _plistData;
	NSError* _error;
	AVTEditingModelColors* _colorCache;
	NSDictionary* _neutralMemojiPresetsIdentifierPerCategory;
	NSDictionary* _presetPickersDefinitions;
	NSDictionary* _colorPickersDefinitions;

}

@property (nonatomic,readonly) unsigned long long platform;                                         //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) NSString * platformDictionaryKey;                                    //@synthesize platformDictionaryKey=_platformDictionaryKey - In the implementation block
@property (nonatomic,readonly) AVTUILogger * logger;                                                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSData * plistData;                                                  //@synthesize plistData=_plistData - In the implementation block
@property (nonatomic,retain) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) AVTEditingModelColors * colorCache;                                    //@synthesize colorCache=_colorCache - In the implementation block
@property (nonatomic,retain) NSDictionary * neutralMemojiPresetsIdentifierPerCategory;              //@synthesize neutralMemojiPresetsIdentifierPerCategory=_neutralMemojiPresetsIdentifierPerCategory - In the implementation block
@property (nonatomic,retain) NSDictionary * presetPickersDefinitions;                               //@synthesize presetPickersDefinitions=_presetPickersDefinitions - In the implementation block
@property (nonatomic,retain) NSDictionary * colorPickersDefinitions;                                //@synthesize colorPickersDefinitions=_colorPickersDefinitions - In the implementation block
+(id)dataFromAvatarKit;
+(id)platformDictionaryKeyForPlatform:(unsigned long long)arg1 ;
+(id)errorWithDescription:(id)arg1 underlyingError:(id)arg2 ;
+(id)dataFromBundle;
+(id)sortedModelRows:(id)arg1 forPlatform:(unsigned long long)arg2 ;
+(unsigned long long)defaultSortingOptionForPlatform:(unsigned long long)arg1 ;
+(id)localizedString:(id)arg1 ;
-(NSError *)error;
-(unsigned long long)platform;
-(id)initWithPlistData:(id)arg1 forPlatform:(unsigned long long)arg2 logger:(id)arg3 ;
-(id)decodePropertyListObjects:(id)arg1 ;
-(void)setColorPickersDefinitions:(NSDictionary *)arg1 ;
-(void)setPresetPickersDefinitions:(NSDictionary *)arg1 ;
-(id)parseCoreModelFromGroupsDefinitions:(id)arg1 ;
-(void)setColorCache:(AVTEditingModelColors *)arg1 ;
-(id)coreModelGroupFromGroupDictionary:(id)arg1 ;
-(id)applyPlatformOverrideForDictionary:(id)arg1 ;
-(id)coreModelCategoryFromCategoryDictionary:(id)arg1 ;
-(id)symbolNamesFromGroupDictionary:(id)arg1 ;
-(BOOL)validateForCategoryWithEnumValue:(id)arg1 pickers:(id)arg2 ;
-(id)coreModelRowOptionsFromOptionsDictionary:(id)arg1 ;
-(NSDictionary *)colorPickersDefinitions;
-(NSDictionary *)presetPickersDefinitions;
-(BOOL)validateForColorPicker:(id)arg1 colorPaletteCategory:(id)arg2 error:(id*)arg3 ;
-(id)coreModelColorsRowForColorPickerDictionary:(id)arg1 settingDestination:(long long)arg2 inCategory:(long long)arg3 defaultOptions:(id)arg4 ;
-(id)coreModelPresetsForCategory:(long long)arg1 ;
-(id)gatherAllTagsFromPresets:(id)arg1 ;
-(id)pairingFromDictionary:(id)arg1 ;
-(id)coreModelRowFromRowDictionary:(id)arg1 availableTags:(id)arg2 usedTags:(id)arg3 defaultOptions:(id)arg4 ;
-(id)coreModelColorsForColorDefinitions:(id)arg1 paletteSettingKind:(SCD_Struct_AV4)arg2 ;
-(id)coreModelColorsForPaletteSettingKind:(SCD_Struct_AV4)arg1 ;
-(NSDictionary *)neutralMemojiPresetsIdentifierPerCategory;
-(void)setNeutralMemojiPresetsIdentifierPerCategory:(NSDictionary *)arg1 ;
-(id)neutralMemojiPresetIdentifierForCategory:(long long)arg1 ;
-(NSString *)platformDictionaryKey;
-(AVTEditingModelColors *)colorCache;
-(AVTUILogger *)logger;
-(void)setError:(NSError *)arg1 ;
-(id)initForPlatform:(unsigned long long)arg1 withLogger:(id)arg2 ;
-(void)parseWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)plistData;
@end

