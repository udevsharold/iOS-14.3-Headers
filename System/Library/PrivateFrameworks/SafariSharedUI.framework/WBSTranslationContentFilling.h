/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSTranslationContentFilling <NSObject>
@property (assign,nonatomic,__weak) id<WBSTranslationContentFillingDelegate> fillingDelegate; 
@required
-(void)replaceExtractedContent:(id)arg1 withTranslatedContent:(id)arg2 targetLocale:(id)arg3;
-(id<WBSTranslationContentFillingDelegate>)fillingDelegate;
-(void)setFillingDelegate:(id)arg1;

@end
