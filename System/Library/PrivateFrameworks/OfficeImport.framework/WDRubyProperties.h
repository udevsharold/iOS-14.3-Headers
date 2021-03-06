/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WDRubyProperties : NSObject {

	unsigned mOriginal : 1;
	SCD_Struct_WD118* mOriginalProperties;

}

@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) unsigned short phoneticGuideFontSize; 
@property (assign,nonatomic) unsigned short baseFontSize; 
@property (assign,nonatomic) unsigned short distanceBetween; 
@property (assign,nonatomic) int phoneticGuideLanguage; 
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isAnythingOverridden;
-(BOOL)isAlignmentOverridden;
-(BOOL)isAnythingOverriddenIn:(SCD_Struct_WD118*)arg1 ;
-(void)clearAlignment;
-(unsigned short)phoneticGuideFontSize;
-(void)setPhoneticGuideFontSize:(unsigned short)arg1 ;
-(BOOL)isPhoneticGuideFontSizeOverridden;
-(void)clearPhoneticGuideFontSize;
-(unsigned short)baseFontSize;
-(void)setBaseFontSize:(unsigned short)arg1 ;
-(BOOL)isBaseFontSizeOverridden;
-(void)clearBaseFontSize;
-(unsigned short)distanceBetween;
-(void)setDistanceBetween:(unsigned short)arg1 ;
-(BOOL)isDistanceBetweenOverridden;
-(void)clearDistanceBetween;
-(int)phoneticGuideLanguage;
-(void)setPhoneticGuideLanguage:(int)arg1 ;
-(BOOL)isPhoneticGuideLanguageOverridden;
-(void)clearPhoneticGuideLanguage;
@end

