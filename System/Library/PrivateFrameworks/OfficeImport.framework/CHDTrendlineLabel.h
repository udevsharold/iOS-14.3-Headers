/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDResources, CHDFormula, OADGraphicProperties, EDString;

@interface CHDTrendlineLabel : NSObject {

	EDResources* mResources;
	CHDFormula* mName;
	unsigned long long mContentFormatId;
	BOOL mContentFormatDerived;
	BOOL mGeneratedText;
	BOOL mAutomaticLabelDeleted;
	OADGraphicProperties* mGraphicProperties;
	EDString* mLastCachedName;

}

@property (nonatomic,retain) EDString * lastCachedName; 
+(id)trendlineLabelWithResources:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(id)description;
-(id)name;
-(id)graphicProperties;
-(unsigned long long)contentFormatId;
-(id)contentFormat;
-(EDString *)lastCachedName;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setLastCachedName:(EDString *)arg1 ;
-(void)setName:(id)arg1 chart:(id)arg2 ;
-(void)setIsContentFormatDerivedFromDataPoints:(BOOL)arg1 ;
-(void)setGeneratedText:(BOOL)arg1 ;
-(void)setAutomaticLabelDeleted:(BOOL)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(BOOL)isContentFormatDerivedFromDataPoints;
-(BOOL)isGeneratedText;
-(BOOL)isAutomaticLabelDeleted;
@end
