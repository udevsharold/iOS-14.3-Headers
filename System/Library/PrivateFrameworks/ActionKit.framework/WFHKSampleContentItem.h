/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@interface WFHKSampleContentItem : WFContentItem <WFContentItemClass>
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)filterDescription;
+(id)pluralFilterDescription;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)hasLibrary;
+(id)itemWithQuantitySample:(id)arg1 ;
+(id)itemWithQuantitySample:(id)arg1 unit:(id)arg2 ;
+(id)itemWithQuantitySamples:(id)arg1 ;
+(id)itemWithQuantitySamples:(id)arg1 unit:(id)arg2 ;
-(id)endDate;
-(id)sourceName;
-(id)unit;
-(id)startDate;
-(id)quantitySample;
-(id)duration;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(id)quantitySampleContainer;
-(id)readableTypeIdentifier;
-(id)sampleValue;
-(id)localizedCategorySampleValue;
-(id)categorySample;
@end
