/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateModularLargeColumns : CLKComplicationTemplate {

	BOOL _useNoColumnPadding;
	CLKImageProvider* _row1ImageProvider;
	CLKTextProvider* _row1Column1TextProvider;
	CLKTextProvider* _row1Column2TextProvider;
	CLKImageProvider* _row2ImageProvider;
	CLKTextProvider* _row2Column1TextProvider;
	CLKTextProvider* _row2Column2TextProvider;
	CLKImageProvider* _row3ImageProvider;
	CLKTextProvider* _row3Column1TextProvider;
	CLKTextProvider* _row3Column2TextProvider;
	long long _column2Alignment;

}

@property (assign,nonatomic) BOOL useNoColumnPadding;                              //@synthesize useNoColumnPadding=_useNoColumnPadding - In the implementation block
@property (nonatomic,copy) CLKImageProvider * row1ImageProvider;                   //@synthesize row1ImageProvider=_row1ImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row1Column1TextProvider;              //@synthesize row1Column1TextProvider=_row1Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row1Column2TextProvider;              //@synthesize row1Column2TextProvider=_row1Column2TextProvider - In the implementation block
@property (nonatomic,copy) CLKImageProvider * row2ImageProvider;                   //@synthesize row2ImageProvider=_row2ImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row2Column1TextProvider;              //@synthesize row2Column1TextProvider=_row2Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row2Column2TextProvider;              //@synthesize row2Column2TextProvider=_row2Column2TextProvider - In the implementation block
@property (nonatomic,copy) CLKImageProvider * row3ImageProvider;                   //@synthesize row3ImageProvider=_row3ImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row3Column1TextProvider;              //@synthesize row3Column1TextProvider=_row3Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row3Column2TextProvider;              //@synthesize row3Column2TextProvider=_row3Column2TextProvider - In the implementation block
@property (assign,nonatomic) long long column2Alignment;                           //@synthesize column2Alignment=_column2Alignment - In the implementation block
+(id)templateWithRow1Column1TextProvider:(id)arg1 row1Column2TextProvider:(id)arg2 row2Column1TextProvider:(id)arg3 row2Column2TextProvider:(id)arg4 row3Column1TextProvider:(id)arg5 row3Column2TextProvider:(id)arg6 ;
+(id)templateWithRow1ImageProvider:(id)arg1 row1Column1TextProvider:(id)arg2 row1Column2TextProvider:(id)arg3 row2ImageProvider:(id)arg4 row2Column1TextProvider:(id)arg5 row2Column2TextProvider:(id)arg6 row3ImageProvider:(id)arg7 row3Column1TextProvider:(id)arg8 row3Column2TextProvider:(id)arg9 ;
-(BOOL)useNoColumnPadding;
-(void)setUseNoColumnPadding:(BOOL)arg1 ;
-(long long)column2Alignment;
-(CLKTextProvider *)row1Column1TextProvider;
-(CLKTextProvider *)row1Column2TextProvider;
-(CLKTextProvider *)row2Column1TextProvider;
-(CLKTextProvider *)row2Column2TextProvider;
-(CLKImageProvider *)row1ImageProvider;
-(CLKImageProvider *)row2ImageProvider;
-(CLKImageProvider *)row3ImageProvider;
-(CLKTextProvider *)row3Column1TextProvider;
-(CLKTextProvider *)row3Column2TextProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setRow1Column1TextProvider:(CLKTextProvider *)arg1 ;
-(void)setRow1Column2TextProvider:(CLKTextProvider *)arg1 ;
-(void)setRow2Column1TextProvider:(CLKTextProvider *)arg1 ;
-(void)setRow2Column2TextProvider:(CLKTextProvider *)arg1 ;
-(void)setColumn2Alignment:(long long)arg1 ;
-(id)initWithRow1ImageProvider:(id)arg1 row1Column1TextProvider:(id)arg2 row1Column2TextProvider:(id)arg3 row2ImageProvider:(id)arg4 row2Column1TextProvider:(id)arg5 row2Column2TextProvider:(id)arg6 row3ImageProvider:(id)arg7 row3Column1TextProvider:(id)arg8 row3Column2TextProvider:(id)arg9 ;
-(void)setRow1ImageProvider:(CLKImageProvider *)arg1 ;
-(void)setRow2ImageProvider:(CLKImageProvider *)arg1 ;
-(void)setRow3ImageProvider:(CLKImageProvider *)arg1 ;
-(void)setRow3Column1TextProvider:(CLKTextProvider *)arg1 ;
-(void)setRow3Column2TextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithRow1Column1TextProvider:(id)arg1 row1Column2TextProvider:(id)arg2 row2Column1TextProvider:(id)arg3 row2Column2TextProvider:(id)arg4 row3Column1TextProvider:(id)arg5 row3Column2TextProvider:(id)arg6 ;
@end
