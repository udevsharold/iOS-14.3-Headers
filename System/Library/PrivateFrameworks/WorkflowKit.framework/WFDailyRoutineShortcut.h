/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WFImage, NSArray, WFDailyRoutineShortcutSetupFlow;

@interface WFDailyRoutineShortcut : NSObject {

	NSString* _title;
	NSString* _subtitle;
	WFImage* _bannerImage;
	NSArray* _actionIcons;
	WFDailyRoutineShortcutSetupFlow* _setupFlow;

}

@property (nonatomic,copy,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) WFImage * bannerImage;                               //@synthesize bannerImage=_bannerImage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionIcons;                               //@synthesize actionIcons=_actionIcons - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupFlow * setupFlow;              //@synthesize setupFlow=_setupFlow - In the implementation block
-(NSString *)subtitle;
-(WFDailyRoutineShortcutSetupFlow *)setupFlow;
-(NSString *)title;
-(WFImage *)bannerImage;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 bannerImage:(id)arg3 actionIcons:(id)arg4 setupFlow:(id)arg5 ;
-(NSArray *)actionIcons;
@end

