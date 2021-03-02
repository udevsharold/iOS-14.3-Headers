/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class NSString, NSDictionary, TSUImage, NSMutableArray;

@interface TSCHFillSet : NSObject {

	NSString* mIdentifier;
	NSString* mPListPath;
	NSDictionary* mPListProperties;
	TSUImage* mSwatchImage;
	NSMutableArray* mSeriesSwatchImages;
	CGRect* mSeriesSwatchImageRects;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * plistPath; 
@property (nonatomic,readonly) NSString * lookupString; 
+(CGSize)defaultSwatchSize;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)plistPath;
-(unsigned long long)countOfDefinedSeriesForSeriesType:(id)arg1 ;
-(id)fillForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2 context:(id)arg3 ;
-(id)p_sagePropertiesForSeriesType:(id)arg1 ;
-(id)p_sagePropertiesForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2 ;
-(id)p_tangierToSageProperties;
-(id)plistProperties;
-(id)p_propertyMapsToApplyToChart:(id)arg1 context:(id)arg2 ;
-(id)swatchFills;
-(id)fillsForSeriesType:(id)arg1 context:(id)arg2 ;
-(id)fillsForDefaultSeriesType;
-(void)p_createSeriesSwatchImagesWithSeriesCount:(unsigned long long)arg1 swatchSize:(CGSize)arg2 ;
-(id)swatchImageWithSize:(CGSize)arg1 ;
-(id)fillForPreviewForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 plistPath:(id)arg2 ;
-(NSString *)lookupString;
-(id)fillFromSageProperties:(id)arg1 ;
-(id)colorFromProperties:(id)arg1 ;
-(BOOL)chartAlreadyMatches:(id)arg1 ;
-(id)commandToApplyToChart:(id)arg1 context:(id)arg2 ;
-(id)styleSwapCommandToApplyToChart:(id)arg1 context:(id)arg2 ;
-(id)seriesSwatchImageWithSwatchSize:(CGSize)arg1 seriesIndex:(unsigned long long)arg2 ;
-(void)primeSwatchImageCache;
-(id)propertyMutationTuplesForPreviewOnChart:(id)arg1 ;
-(id)seriesStylesForSeriesTypes:(id)arg1 context:(id)arg2 ;
@end
