/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKStyleMapper <NSObject>
@required
-(id)mappedStyleForStyle:(id)arg1;
-(void)varyInThemeStylesheetForDurationOfBlock:(/*^block*/id)arg1;
-(id)targetStylesheet;
-(void)pushMappingContext:(id)arg1;
-(void)popMappingContext:(id)arg1;
-(id)mappedStyleForStyle:(id)arg1 inThemeStylesheet:(BOOL)arg2;
-(void)varyInThemeStylesheetIf:(BOOL)arg1 forDurationOfBlock:(/*^block*/id)arg2;

@end
