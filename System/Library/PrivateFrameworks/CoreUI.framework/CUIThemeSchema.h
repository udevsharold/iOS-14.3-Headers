/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIThemeSchema : NSObject
+(id)schemaForPlatform:(long long)arg1 ;
+(id)defaultSchema;
-(const SCD_Struct_CU32*)elementCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementCategoryCount;
-(const SCD_Struct_CU35*)elementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementDefinitionCount;
-(const SCD_Struct_CU35*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)partDefinitionCountForElementDefinition:(const SCD_Struct_CU35*)arg1 ;
-(unsigned long long)dimensionDefinitionCountForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
-(const SCD_Struct_CU35*)elementDefinitionWithName:(id)arg1 ;
-(const SCD_Struct_CU34*)partDefinitionWithName:(id)arg1 forElementDefinition:(const SCD_Struct_CU35*)arg2 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
-(const SCD_Struct_CU34*)partDefinitionForWidgetName:(id)arg1 ;
-(const SCD_Struct_CU32*)categoryForElementDefinition:(const SCD_Struct_CU35*)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
-(void)enumerateAvailableThemeAttributesInPartDefinition:(const SCD_Struct_CU34*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(const SCD_Struct_CU35*)effectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU35*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1 ;
-(void)enumerateAvailableValuesForThemeAttribute:(int)arg1 inPartDefinition:(const SCD_Struct_CU34*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(const SCD_Struct_CU35*)effectDefinitionWithName:(id)arg1 ;
-(unsigned long long)effectDefinitionCount;
-(unsigned long long)partDefinitionCountForEffectDefinition:(const SCD_Struct_CU35*)arg1 ;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
-(const SCD_Struct_CU35*)materialDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU35*)sortedMaterialDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU35*)materialDefinitionWithName:(id)arg1 ;
-(unsigned long long)materialDefinitionCount;
-(unsigned long long)partDefinitionCountForMaterialDefinition:(const SCD_Struct_CU35*)arg1 ;
-(id)schemaMaterialRenditionsForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
-(long long)schemaVersion;
@end
