/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>

@interface DDPreviewAction : DDAction
+(id)previewActionForURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(void)dealloc;
-(BOOL)prefersActionMenuStyle;
-(void)setPreviewMode:(BOOL)arg1 ;
-(id)viewController;
-(id)createViewController;
-(id)commitURL;
-(BOOL)wantsSeamlessCommit;
-(BOOL)wantsCustomViewControllerCommit;
-(id)expandViewController;
-(BOOL)requiresEmbeddingNavigationController;
-(id)platterTitle;
-(id)platterSubtitle;
-(BOOL)showMenuTitle;
-(id)menuActions;
-(id)menuActionClasses;
-(CGSize)suggestedContentSize;
@end
