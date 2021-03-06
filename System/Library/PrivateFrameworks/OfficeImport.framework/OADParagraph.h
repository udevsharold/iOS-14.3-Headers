/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;

@interface OADParagraph : NSObject {

	OADParagraphProperties* mProperties;
	NSMutableArray* mTextRuns;
	OADCharacterProperties* mParagraphEndCharacterProperties;

}
-(unsigned long long)characterCount;
-(BOOL)isEmpty;
-(id)init;
-(id)description;
-(id)properties;
-(void)applyProperties:(id)arg1 ;
-(id)plainText;
-(unsigned long long)textRunCount;
-(id)textRunAtIndex:(unsigned long long)arg1 ;
-(id)paragraphEndCharacterProperties;
-(id)addRegularTextRun;
-(id)addTextLineBreak;
-(id)addDateTimeFieldWithFormat:(int)arg1 ;
-(id)addGenericTextFieldWithGuid:(id)arg1 type:(id)arg2 ;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)arg1 ;
-(void)removeAllTextRuns;
-(unsigned long long)lineBreakCount;
-(id)addFooterField;
-(void)setParagraphEndCharacterProperties:(id)arg1 ;
-(BOOL)hasBulletCharacterProperties;
-(id)bulletCharacterProperties;
-(BOOL)isSimilarToParagraph:(id)arg1 ;
-(id)findFirstTextRunOfClass:(Class)arg1 ;
-(id)addSlideNumberField;
@end

