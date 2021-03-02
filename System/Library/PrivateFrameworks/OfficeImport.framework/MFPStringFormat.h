/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFPStringFormat : NSObject {

	int mAlignment;
	unsigned short mDigitSubstitutionLanguage;
	int mDigitSubstitutionMethod;
	unsigned mFormatFlags;
	int mHotkeyPrefix;
	int mLineAlignment;
	float mFirstTabOffset;
	int mTabStopCount;
	float* mTabStops;
	int mTrimming;

}
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned)formatFlags;
-(void)setFormatFlags:(unsigned)arg1 ;
-(const float*)tabStops;
-(void)setTrimming:(int)arg1 ;
-(void)setLineAlignment:(int)arg1 ;
-(void)setDigitSubstitutionLanguage:(unsigned short)arg1 ;
-(void)setDigitSubstitutionMethod:(int)arg1 ;
-(void)setFirstTabOffset:(float)arg1 ;
-(void)setHotkeyPrefix:(int)arg1 ;
-(void)setTabStops:(const float*)arg1 count:(int)arg2 ;
-(int)tabStopCount;
-(float)firstTabOffset;
-(int)lineAlignment;
-(int)trimming;
-(unsigned short)digitSubstitutionLanguage;
-(int)digitSubstitutionMethod;
-(int)hotkeyPrefix;
@end
